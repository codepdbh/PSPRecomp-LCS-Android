#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0192[4086] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 4, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 7, 8, 0, 0, 0, 0, 0, 0, 9, 10, 0, 0,
    0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0,
    0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 24, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 33, 0, 34, 0, 35, 36, 0, 0, 37, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 0, 43, 0, 0, 44, 0, 45, 46, 0, 0, 47, 0, 0, 48,
    0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 52, 53, 0, 54, 0, 0, 55, 0, 0, 0, 0, 56, 0, 57, 0, 58, 0, 59, 0, 0,
    0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 0, 65, 0, 0, 66, 0,
    67, 0, 68, 0, 69, 70, 0, 71, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88,
    0, 89, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0,
    0, 0, 109, 110, 0, 0, 0, 111, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0,
    130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 134,
    0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0,
    0, 0, 141, 142, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0, 149,
    0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 153, 154, 0, 155, 0, 156, 0, 0, 157, 0, 158, 0, 159, 160, 0, 161, 0, 162, 0, 0, 0, 0,
    0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177,
    0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 195, 0,
    196, 0, 197, 198, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 204, 0, 0, 0, 0, 205, 0,
    206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 210, 211, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 214, 0, 215, 0,
    0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 219, 220, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224,
    0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0,
    232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 238, 0, 0, 0, 0, 239, 0, 0,
    0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 246, 247, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 254, 0, 255,
    0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0,
    258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 260, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0,
    0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 272, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0,
    0, 277, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0,
    0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 306, 307, 0, 308, 0, 309, 0, 0, 0, 0,
    310, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 0,
    320, 0, 0, 0, 0, 0, 0, 321, 322, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 327, 0, 328, 0,
    0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 333, 0, 334, 335, 0, 0, 0, 336, 0, 0, 0, 337, 0,
    0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343,
    0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 349, 0, 350, 0, 0, 0, 0,
    0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 0, 358, 0, 359, 0, 360, 0, 361, 362,
    0, 363, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369,
    0, 370, 0, 371, 0, 372, 0, 373, 0, 0, 374, 0, 375, 0, 376, 0, 377, 378, 0, 379, 0, 380, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0,
    0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 387, 0, 388, 0, 389, 0, 390, 0, 0, 391, 0,
    392, 0, 393, 0, 394, 395, 0, 396, 0, 397, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0,
    0, 0, 0, 402, 0, 0, 0, 403, 0, 404, 0, 405, 0, 406, 0, 407, 0, 0, 408, 0, 409, 0, 410, 0, 411, 412, 0, 413, 0, 414, 0, 0,
    0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 421, 0, 422,
    0, 423, 0, 424, 0, 0, 425, 0, 426, 0, 427, 0, 428, 429, 0, 430, 0, 431, 0, 0, 0, 0, 0, 432, 0, 433, 0, 0, 434, 0, 0, 0,
    0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 439, 0, 440, 0, 441, 0, 442, 0, 0, 443, 0, 444,
    0, 445, 0, 446, 447, 0, 448, 0, 449, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0,
    458, 0, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0, 462, 0, 0, 0, 463, 0, 0, 464, 0, 465, 0, 466, 0, 0, 467, 0, 0, 468, 0, 0,
    469, 0, 470, 0, 471, 0, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 475, 0, 0, 0, 476, 477, 0, 478, 0, 0, 479, 0, 480, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 483, 0, 0, 0, 484, 0, 0, 485, 0, 486, 0, 0, 0, 0, 487, 0, 0, 488, 0, 489, 490, 0, 0, 0, 491, 0, 0, 492, 0, 493,
    494, 0, 495, 0, 0, 0, 496, 0, 0, 497, 0, 498, 0, 0, 499, 0, 0, 0, 500, 0, 0, 501, 0, 502, 503, 0, 504, 505, 0, 506, 0, 0,
    507, 0, 0, 508, 0, 509, 510, 0, 511, 512, 0, 0, 0, 0, 513, 514, 0, 515, 0, 0, 516, 517, 0, 518, 0, 519, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 522, 523, 0, 524, 0, 525, 0, 526, 0,
    527, 0, 528, 529, 0, 530, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 534, 0, 535, 0, 0, 0, 536, 0, 537, 0, 0, 0, 0,
    0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 542, 0, 543, 0, 0, 544, 0, 545, 546, 0, 547, 0, 0, 548, 0, 549, 550, 0, 551, 0, 0,
    552, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 554, 555, 0, 556, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0, 559, 0, 0,
    560, 0, 561, 0, 0, 0, 0, 562, 0, 563, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 566, 0, 567, 568, 0, 0, 0, 569, 0,
    0, 0, 570, 0, 0, 0, 571, 0, 0, 572, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 578, 0, 579, 0, 0, 0, 580, 0, 581, 0, 582, 0, 583, 0, 584, 0, 585, 0, 586, 587, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 589,
    0, 590, 0, 591, 0, 592, 0, 593, 0, 594, 0, 595, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 597, 0, 0, 0, 598, 0, 0, 599, 0, 600, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0,
    0, 0, 604, 0, 0, 0, 605, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0,
    608, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 612, 0, 0, 613, 0, 0, 614, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 617, 0, 0, 0, 618, 0,
    0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 622,
    0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 626, 0, 0, 627, 0, 628,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 630, 0, 631, 0, 632, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 640, 0, 0, 641, 0, 642, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 644, 645, 0, 646, 0, 0, 0, 647, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 653, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 654, 0, 0, 655, 0, 0, 656, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 659, 660,
    0, 0, 0, 661, 0, 662, 0, 663, 0, 0, 0, 664, 665, 0, 666, 0, 667, 0, 0, 668, 0, 669, 0, 670, 671, 0, 672, 673, 0, 674, 0, 675,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 677, 0, 0, 0, 678, 0, 0, 679, 0, 680, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 683, 0, 0, 0,
    684, 0, 0, 0, 685, 0, 0, 686, 0, 0, 0, 0, 687, 0, 688, 0, 0, 0, 689, 0, 0, 690, 0, 0, 0, 691, 0, 0, 692, 0, 693, 0,
    0, 694, 0, 0, 0, 0, 695, 0, 696, 697, 0, 698, 0, 0, 0, 699, 0, 0, 700, 0, 0, 0, 0, 701, 0, 702, 703, 0, 0, 0, 704, 705,
    0, 706, 0, 707, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 712, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 716, 0,
    0, 0, 717, 0, 0, 0, 718, 0, 0, 719, 0, 0, 720, 0, 721, 0, 0, 0, 722, 0, 0, 723, 0, 724, 0, 0, 725, 0, 726, 0, 0, 727,
    0, 0, 728, 0, 729, 730, 0, 731, 0, 0, 0, 732, 0, 0, 733, 0, 0, 734, 0, 735, 736, 0, 0, 0, 737, 738, 0, 739, 0, 740, 0, 741,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 744, 0, 0, 0, 745, 0, 0, 0, 0, 746, 0, 0, 0, 0, 747, 0, 0, 0, 748, 0, 0, 749, 0, 0, 750, 0, 0, 751, 0,
    0, 752, 0, 753, 0, 0, 0, 754, 755, 0, 756, 0, 0, 757, 0, 758, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 762, 0, 0, 0, 763, 764, 0, 765, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 770,
    0, 0, 771, 0, 772, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 775, 0, 0, 0, 776, 0, 0, 777, 0, 778, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 781, 0, 0, 0,
    782, 0, 0, 0, 783, 0, 0, 784, 0, 0, 0, 0, 0, 0, 785, 0, 786, 0, 0, 0, 787, 0, 0, 788, 0, 0, 0, 0, 0, 789, 0, 0,
    790, 0, 791, 792, 0, 0, 793, 0, 0, 0, 0, 0, 794, 0, 795, 796, 0, 797, 0, 0, 0, 798, 0, 0, 799, 0, 0, 0, 0, 0, 0, 800,
    0, 801, 802, 0, 0, 0, 803, 804, 0, 805, 0, 806, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810,
    0, 0, 0, 0, 0, 0, 811, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 814, 0, 0, 0, 0, 0, 0, 0, 0, 815, 0, 816, 0,
    0, 0, 0, 0, 0, 0, 817, 0, 818, 0, 0, 819, 0, 820, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0, 827, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 829, 0, 830, 0, 831, 0, 832, 0, 833, 0, 834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 836, 0, 837, 0, 838, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 839, 0, 840, 0, 841, 842, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 844, 0, 0, 845, 0, 0, 0, 0, 0, 0, 0, 846, 847, 0, 0, 848, 0, 849, 0, 0, 850, 0, 851, 0, 0, 852, 0,
    853, 0, 0, 854, 0, 855, 0, 856, 0, 0, 0, 0, 0, 0, 0, 857, 0, 858, 0, 859, 860, 0, 861, 0, 862, 0, 0, 0, 863, 0, 864, 0,
    0, 0, 865, 0, 866, 867, 0, 0, 868, 0, 869, 0, 870, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 871, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 872, 0, 0, 0, 0, 0, 0, 873, 0, 874, 0, 0, 0, 0,
    0, 0, 0, 0, 875, 0, 876, 0, 0, 0, 0, 0, 0, 0, 0, 877, 0, 878, 0, 0, 0, 0, 0, 0, 0, 879, 0, 880, 0, 0, 881, 0,
    882, 883, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 884, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 885, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 887,
};
void recomp_unit_0192_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B04000u;
        entry_id = (entry_delta < 16344u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0192[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B04000;
    case 2u: goto L_08B04004;
    case 3u: goto L_08B04020;
    case 4u: goto L_08B04024;
    case 5u: goto L_08B04034;
    case 6u: goto L_08B0403C;
    case 7u: goto L_08B04050;
    case 8u: goto L_08B04054;
    case 9u: goto L_08B04070;
    case 10u: goto L_08B04074;
    case 11u: goto L_08B04084;
    case 12u: goto L_08B0408C;
    case 13u: goto L_08B040C8;
    case 14u: goto L_08B040F0;
    case 15u: goto L_08B04114;
    case 16u: goto L_08B04140;
    case 17u: goto L_08B04150;
    case 18u: goto L_08B0415C;
    case 19u: goto L_08B0416C;
    case 20u: goto L_08B04174;
    case 21u: goto L_08B04188;
    case 22u: goto L_08B04198;
    case 23u: goto L_08B041A8;
    case 24u: goto L_08B041AC;
    case 25u: goto L_08B041B8;
    case 26u: goto L_08B041C0;
    case 27u: goto L_08B041DC;
    case 28u: goto L_08B041EC;
    case 29u: goto L_08B041F0;
    case 30u: goto L_08B0421C;
    case 31u: goto L_08B0422C;
    case 32u: goto L_08B04238;
    case 33u: goto L_08B04248;
    case 34u: goto L_08B04250;
    case 35u: goto L_08B04258;
    case 36u: goto L_08B0425C;
    case 37u: goto L_08B04268;
    case 38u: goto L_08B04270;
    case 39u: goto L_08B0429C;
    case 40u: goto L_08B042AC;
    case 41u: goto L_08B042B8;
    case 42u: goto L_08B042C0;
    case 43u: goto L_08B042CC;
    case 44u: goto L_08B042D8;
    case 45u: goto L_08B042E0;
    case 46u: goto L_08B042E4;
    case 47u: goto L_08B042F0;
    case 48u: goto L_08B042FC;
    case 49u: goto L_08B0430C;
    case 50u: goto L_08B04314;
    case 51u: goto L_08B0431C;
    case 52u: goto L_08B04330;
    case 53u: goto L_08B04334;
    case 54u: goto L_08B0433C;
    case 55u: goto L_08B04348;
    case 56u: goto L_08B0435C;
    case 57u: goto L_08B04364;
    case 58u: goto L_08B0436C;
    case 59u: goto L_08B04374;
    case 60u: goto L_08B04388;
    case 61u: goto L_08B043B4;
    case 62u: goto L_08B043D0;
    case 63u: goto L_08B043D8;
    case 64u: goto L_08B043E0;
    case 65u: goto L_08B043EC;
    case 66u: goto L_08B043F8;
    case 67u: goto L_08B04400;
    case 68u: goto L_08B04408;
    case 69u: goto L_08B04410;
    case 70u: goto L_08B04414;
    case 71u: goto L_08B0441C;
    case 72u: goto L_08B04424;
    case 73u: goto L_08B04438;
    case 74u: goto L_08B04480;
    case 75u: goto L_08B0449C;
    case 76u: goto L_08B044A8;
    case 77u: goto L_08B044B0;
    case 78u: goto L_08B044D0;
    case 79u: goto L_08B044F0;
    case 80u: goto L_08B04510;
    case 81u: goto L_08B0452C;
    case 82u: goto L_08B04544;
    case 83u: goto L_08B04554;
    case 84u: goto L_08B0455C;
    case 85u: goto L_08B04598;
    case 86u: goto L_08B045A4;
    case 87u: goto L_08B045C0;
    case 88u: goto L_08B045FC;
    case 89u: goto L_08B04604;
    case 90u: goto L_08B0460C;
    case 91u: goto L_08B0461C;
    case 92u: goto L_08B04628;
    case 93u: goto L_08B04630;
    case 94u: goto L_08B0463C;
    case 95u: goto L_08B04644;
    case 96u: goto L_08B04654;
    case 97u: goto L_08B04668;
    case 98u: goto L_08B04678;
    case 99u: goto L_08B046A8;
    case 100u: goto L_08B046B4;
    case 101u: goto L_08B046C8;
    case 102u: goto L_08B046E0;
    case 103u: goto L_08B046FC;
    case 104u: goto L_08B04718;
    case 105u: goto L_08B04730;
    case 106u: goto L_08B04744;
    case 107u: goto L_08B04764;
    case 108u: goto L_08B04774;
    case 109u: goto L_08B04788;
    case 110u: goto L_08B0478C;
    case 111u: goto L_08B0479C;
    case 112u: goto L_08B047A0;
    case 113u: goto L_08B047E4;
    case 114u: goto L_08B047F4;
    case 115u: goto L_08B04838;
    case 116u: goto L_08B04840;
    case 117u: goto L_08B04848;
    case 118u: goto L_08B04854;
    case 119u: goto L_08B0489C;
    case 120u: goto L_08B048AC;
    case 121u: goto L_08B048B4;
    case 122u: goto L_08B048BC;
    case 123u: goto L_08B048C8;
    case 124u: goto L_08B048D0;
    case 125u: goto L_08B04900;
    case 126u: goto L_08B04920;
    case 127u: goto L_08B04948;
    case 128u: goto L_08B0496C;
    case 129u: goto L_08B04978;
    case 130u: goto L_08B04980;
    case 131u: goto L_08B04994;
    case 132u: goto L_08B049E8;
    case 133u: goto L_08B049F0;
    case 134u: goto L_08B049FC;
    case 135u: goto L_08B04A0C;
    case 136u: goto L_08B04A14;
    case 137u: goto L_08B04A28;
    case 138u: goto L_08B04A50;
    case 139u: goto L_08B04A58;
    case 140u: goto L_08B04A78;
    case 141u: goto L_08B04A88;
    case 142u: goto L_08B04A8C;
    case 143u: goto L_08B04A94;
    case 144u: goto L_08B04A9C;
    case 145u: goto L_08B04AB0;
    case 146u: goto L_08B04AD8;
    case 147u: goto L_08B04AE4;
    case 148u: goto L_08B04AF4;
    case 149u: goto L_08B04AFC;
    case 150u: goto L_08B04B04;
    case 151u: goto L_08B04B10;
    case 152u: goto L_08B04B20;
    case 153u: goto L_08B04B28;
    case 154u: goto L_08B04B2C;
    case 155u: goto L_08B04B34;
    case 156u: goto L_08B04B3C;
    case 157u: goto L_08B04B48;
    case 158u: goto L_08B04B50;
    case 159u: goto L_08B04B58;
    case 160u: goto L_08B04B5C;
    case 161u: goto L_08B04B64;
    case 162u: goto L_08B04B6C;
    case 163u: goto L_08B04B8C;
    case 164u: goto L_08B04BA0;
    case 165u: goto L_08B04BB4;
    case 166u: goto L_08B04BC8;
    case 167u: goto L_08B04BDC;
    case 168u: goto L_08B04BF0;
    case 169u: goto L_08B04C04;
    case 170u: goto L_08B04C30;
    case 171u: goto L_08B04D84;
    case 172u: goto L_08B04DA0;
    case 173u: goto L_08B04DAC;
    case 174u: goto L_08B04DC8;
    case 175u: goto L_08B04DD4;
    case 176u: goto L_08B04DF0;
    case 177u: goto L_08B04DFC;
    case 178u: goto L_08B04E18;
    case 179u: goto L_08B04E24;
    case 180u: goto L_08B04E40;
    case 181u: goto L_08B04E4C;
    case 182u: goto L_08B04E68;
    case 183u: goto L_08B04E74;
    case 184u: goto L_08B04ECC;
    case 185u: goto L_08B04ED8;
    case 186u: goto L_08B04EF4;
    case 187u: goto L_08B04F84;
    case 188u: goto L_08B04F90;
    case 189u: goto L_08B04F9C;
    case 190u: goto L_08B04FAC;
    case 191u: goto L_08B04FBC;
    case 192u: goto L_08B04FCC;
    case 193u: goto L_08B04FE8;
    case 194u: goto L_08B04FF0;
    case 195u: goto L_08B04FF8;
    case 196u: goto L_08B05000;
    case 197u: goto L_08B05008;
    case 198u: goto L_08B0500C;
    case 199u: goto L_08B05014;
    case 200u: goto L_08B05030;
    case 201u: goto L_08B05044;
    case 202u: goto L_08B05050;
    case 203u: goto L_08B0505C;
    case 204u: goto L_08B05064;
    case 205u: goto L_08B05078;
    case 206u: goto L_08B05080;
    case 207u: goto L_08B0509C;
    case 208u: goto L_08B050AC;
    case 209u: goto L_08B050B8;
    case 210u: goto L_08B050C0;
    case 211u: goto L_08B050C4;
    case 212u: goto L_08B050D4;
    case 213u: goto L_08B050E8;
    case 214u: goto L_08B050F0;
    case 215u: goto L_08B050F8;
    case 216u: goto L_08B05104;
    case 217u: goto L_08B05114;
    case 218u: goto L_08B05120;
    case 219u: goto L_08B05128;
    case 220u: goto L_08B0512C;
    case 221u: goto L_08B05138;
    case 222u: goto L_08B05148;
    case 223u: goto L_08B0516C;
    case 224u: goto L_08B0517C;
    case 225u: goto L_08B05188;
    case 226u: goto L_08B05194;
    case 227u: goto L_08B051AC;
    case 228u: goto L_08B051C8;
    case 229u: goto L_08B051CC;
    case 230u: goto L_08B051E0;
    case 231u: goto L_08B051F4;
    case 232u: goto L_08B05200;
    case 233u: goto L_08B0521C;
    case 234u: goto L_08B0522C;
    case 235u: goto L_08B05240;
    case 236u: goto L_08B0524C;
    case 237u: goto L_08B05258;
    case 238u: goto L_08B05260;
    case 239u: goto L_08B05274;
    case 240u: goto L_08B05290;
    case 241u: goto L_08B052A8;
    case 242u: goto L_08B052B4;
    case 243u: goto L_08B052BC;
    case 244u: goto L_08B052D0;
    case 245u: goto L_08B052F0;
    case 246u: goto L_08B05308;
    case 247u: goto L_08B0530C;
    case 248u: goto L_08B05314;
    case 249u: goto L_08B05328;
    case 250u: goto L_08B05340;
    case 251u: goto L_08B05350;
    case 252u: goto L_08B0535C;
    case 253u: goto L_08B05364;
    case 254u: goto L_08B05374;
    case 255u: goto L_08B0537C;
    case 256u: goto L_08B05398;
    case 257u: goto L_08B053F8;
    case 258u: goto L_08B05400;
    case 259u: goto L_08B05438;
    case 260u: goto L_08B0543C;
    case 261u: goto L_08B05444;
    case 262u: goto L_08B0544C;
    case 263u: goto L_08B05478;
    case 264u: goto L_08B05484;
    case 265u: goto L_08B054A4;
    case 266u: goto L_08B054A8;
    case 267u: goto L_08B054DC;
    case 268u: goto L_08B054F4;
    case 269u: goto L_08B05530;
    case 270u: goto L_08B0553C;
    case 271u: goto L_08B0555C;
    case 272u: goto L_08B05560;
    case 273u: goto L_08B05594;
    case 274u: goto L_08B055AC;
    case 275u: goto L_08B055D8;
    case 276u: goto L_08B055E4;
    case 277u: goto L_08B05604;
    case 278u: goto L_08B05608;
    case 279u: goto L_08B0563C;
    case 280u: goto L_08B05654;
    case 281u: goto L_08B0565C;
    case 282u: goto L_08B05684;
    case 283u: goto L_08B05690;
    case 284u: goto L_08B056B0;
    case 285u: goto L_08B056B4;
    case 286u: goto L_08B056E8;
    case 287u: goto L_08B05700;
    case 288u: goto L_08B05744;
    case 289u: goto L_08B05758;
    case 290u: goto L_08B057C0;
    case 291u: goto L_08B057CC;
    case 292u: goto L_08B057F0;
    case 293u: goto L_08B05804;
    case 294u: goto L_08B05814;
    case 295u: goto L_08B0582C;
    case 296u: goto L_08B05838;
    case 297u: goto L_08B05844;
    case 298u: goto L_08B0584C;
    case 299u: goto L_08B05858;
    case 300u: goto L_08B05874;
    case 301u: goto L_08B0588C;
    case 302u: goto L_08B058A0;
    case 303u: goto L_08B058AC;
    case 304u: goto L_08B058B4;
    case 305u: goto L_08B058CC;
    case 306u: goto L_08B058D8;
    case 307u: goto L_08B058DC;
    case 308u: goto L_08B058E4;
    case 309u: goto L_08B058EC;
    case 310u: goto L_08B05900;
    case 311u: goto L_08B05910;
    case 312u: goto L_08B0591C;
    case 313u: goto L_08B0592C;
    case 314u: goto L_08B05938;
    case 315u: goto L_08B05944;
    case 316u: goto L_08B0594C;
    case 317u: goto L_08B05958;
    case 318u: goto L_08B05964;
    case 319u: goto L_08B05970;
    case 320u: goto L_08B05980;
    case 321u: goto L_08B0599C;
    case 322u: goto L_08B059A0;
    case 323u: goto L_08B059A8;
    case 324u: goto L_08B059C4;
    case 325u: goto L_08B059D8;
    case 326u: goto L_08B059E4;
    case 327u: goto L_08B059F0;
    case 328u: goto L_08B059F8;
    case 329u: goto L_08B05A0C;
    case 330u: goto L_08B05A14;
    case 331u: goto L_08B05A30;
    case 332u: goto L_08B05A40;
    case 333u: goto L_08B05A4C;
    case 334u: goto L_08B05A54;
    case 335u: goto L_08B05A58;
    case 336u: goto L_08B05A68;
    case 337u: goto L_08B05A78;
    case 338u: goto L_08B05A88;
    case 339u: goto L_08B05A94;
    case 340u: goto L_08B05AB0;
    case 341u: goto L_08B05AC0;
    case 342u: goto L_08B05AD0;
    case 343u: goto L_08B05B7C;
    case 344u: goto L_08B05B88;
    case 345u: goto L_08B05B9C;
    case 346u: goto L_08B05BA8;
    case 347u: goto L_08B05BCC;
    case 348u: goto L_08B05BD8;
    case 349u: goto L_08B05BE4;
    case 350u: goto L_08B05BEC;
    case 351u: goto L_08B05C0C;
    case 352u: goto L_08B05C24;
    case 353u: goto L_08B05C34;
    case 354u: goto L_08B05C3C;
    case 355u: goto L_08B05C44;
    case 356u: goto L_08B05C4C;
    case 357u: goto L_08B05C54;
    case 358u: goto L_08B05C60;
    case 359u: goto L_08B05C68;
    case 360u: goto L_08B05C70;
    case 361u: goto L_08B05C78;
    case 362u: goto L_08B05C7C;
    case 363u: goto L_08B05C84;
    case 364u: goto L_08B05C8C;
    case 365u: goto L_08B05CA4;
    case 366u: goto L_08B05CC4;
    case 367u: goto L_08B05CD4;
    case 368u: goto L_08B05CEC;
    case 369u: goto L_08B05CFC;
    case 370u: goto L_08B05D04;
    case 371u: goto L_08B05D0C;
    case 372u: goto L_08B05D14;
    case 373u: goto L_08B05D1C;
    case 374u: goto L_08B05D28;
    case 375u: goto L_08B05D30;
    case 376u: goto L_08B05D38;
    case 377u: goto L_08B05D40;
    case 378u: goto L_08B05D44;
    case 379u: goto L_08B05D4C;
    case 380u: goto L_08B05D54;
    case 381u: goto L_08B05D6C;
    case 382u: goto L_08B05D74;
    case 383u: goto L_08B05D94;
    case 384u: goto L_08B05DA4;
    case 385u: goto L_08B05DBC;
    case 386u: goto L_08B05DCC;
    case 387u: goto L_08B05DD4;
    case 388u: goto L_08B05DDC;
    case 389u: goto L_08B05DE4;
    case 390u: goto L_08B05DEC;
    case 391u: goto L_08B05DF8;
    case 392u: goto L_08B05E00;
    case 393u: goto L_08B05E08;
    case 394u: goto L_08B05E10;
    case 395u: goto L_08B05E14;
    case 396u: goto L_08B05E1C;
    case 397u: goto L_08B05E24;
    case 398u: goto L_08B05E3C;
    case 399u: goto L_08B05E44;
    case 400u: goto L_08B05E64;
    case 401u: goto L_08B05E74;
    case 402u: goto L_08B05E8C;
    case 403u: goto L_08B05E9C;
    case 404u: goto L_08B05EA4;
    case 405u: goto L_08B05EAC;
    case 406u: goto L_08B05EB4;
    case 407u: goto L_08B05EBC;
    case 408u: goto L_08B05EC8;
    case 409u: goto L_08B05ED0;
    case 410u: goto L_08B05ED8;
    case 411u: goto L_08B05EE0;
    case 412u: goto L_08B05EE4;
    case 413u: goto L_08B05EEC;
    case 414u: goto L_08B05EF4;
    case 415u: goto L_08B05F0C;
    case 416u: goto L_08B05F14;
    case 417u: goto L_08B05F34;
    case 418u: goto L_08B05F44;
    case 419u: goto L_08B05F5C;
    case 420u: goto L_08B05F6C;
    case 421u: goto L_08B05F74;
    case 422u: goto L_08B05F7C;
    case 423u: goto L_08B05F84;
    case 424u: goto L_08B05F8C;
    case 425u: goto L_08B05F98;
    case 426u: goto L_08B05FA0;
    case 427u: goto L_08B05FA8;
    case 428u: goto L_08B05FB0;
    case 429u: goto L_08B05FB4;
    case 430u: goto L_08B05FBC;
    case 431u: goto L_08B05FC4;
    case 432u: goto L_08B05FDC;
    case 433u: goto L_08B05FE4;
    case 434u: goto L_08B05FF0;
    case 435u: goto L_08B06010;
    case 436u: goto L_08B06020;
    case 437u: goto L_08B06038;
    case 438u: goto L_08B06048;
    case 439u: goto L_08B06050;
    case 440u: goto L_08B06058;
    case 441u: goto L_08B06060;
    case 442u: goto L_08B06068;
    case 443u: goto L_08B06074;
    case 444u: goto L_08B0607C;
    case 445u: goto L_08B06084;
    case 446u: goto L_08B0608C;
    case 447u: goto L_08B06090;
    case 448u: goto L_08B06098;
    case 449u: goto L_08B060A0;
    case 450u: goto L_08B060B8;
    case 451u: goto L_08B060C0;
    case 452u: goto L_08B06110;
    case 453u: goto L_08B06118;
    case 454u: goto L_08B0612C;
    case 455u: goto L_08B06144;
    case 456u: goto L_08B0615C;
    case 457u: goto L_08B06170;
    case 458u: goto L_08B06180;
    case 459u: goto L_08B06190;
    case 460u: goto L_08B0619C;
    case 461u: goto L_08B061A8;
    case 462u: goto L_08B061B0;
    case 463u: goto L_08B061C0;
    case 464u: goto L_08B061CC;
    case 465u: goto L_08B061D4;
    case 466u: goto L_08B061DC;
    case 467u: goto L_08B061E8;
    case 468u: goto L_08B061F4;
    case 469u: goto L_08B06200;
    case 470u: goto L_08B06208;
    case 471u: goto L_08B06210;
    case 472u: goto L_08B06220;
    case 473u: goto L_08B0622C;
    case 474u: goto L_08B06238;
    case 475u: goto L_08B06240;
    case 476u: goto L_08B06250;
    case 477u: goto L_08B06254;
    case 478u: goto L_08B0625C;
    case 479u: goto L_08B06268;
    case 480u: goto L_08B06270;
    case 481u: goto L_08B062A0;
    case 482u: goto L_08B062A8;
    case 483u: goto L_08B06308;
    case 484u: goto L_08B06318;
    case 485u: goto L_08B06324;
    case 486u: goto L_08B0632C;
    case 487u: goto L_08B06340;
    case 488u: goto L_08B0634C;
    case 489u: goto L_08B06354;
    case 490u: goto L_08B06358;
    case 491u: goto L_08B06368;
    case 492u: goto L_08B06374;
    case 493u: goto L_08B0637C;
    case 494u: goto L_08B06380;
    case 495u: goto L_08B06388;
    case 496u: goto L_08B06398;
    case 497u: goto L_08B063A4;
    case 498u: goto L_08B063AC;
    case 499u: goto L_08B063B8;
    case 500u: goto L_08B063C8;
    case 501u: goto L_08B063D4;
    case 502u: goto L_08B063DC;
    case 503u: goto L_08B063E0;
    case 504u: goto L_08B063E8;
    case 505u: goto L_08B063EC;
    case 506u: goto L_08B063F4;
    case 507u: goto L_08B06400;
    case 508u: goto L_08B0640C;
    case 509u: goto L_08B06414;
    case 510u: goto L_08B06418;
    case 511u: goto L_08B06420;
    case 512u: goto L_08B06424;
    case 513u: goto L_08B06438;
    case 514u: goto L_08B0643C;
    case 515u: goto L_08B06444;
    case 516u: goto L_08B06450;
    case 517u: goto L_08B06454;
    case 518u: goto L_08B0645C;
    case 519u: goto L_08B06464;
    case 520u: goto L_08B064AC;
    case 521u: goto L_08B064C8;
    case 522u: goto L_08B064DC;
    case 523u: goto L_08B064E0;
    case 524u: goto L_08B064E8;
    case 525u: goto L_08B064F0;
    case 526u: goto L_08B064F8;
    case 527u: goto L_08B06500;
    case 528u: goto L_08B06508;
    case 529u: goto L_08B0650C;
    case 530u: goto L_08B06514;
    case 531u: goto L_08B0651C;
    case 532u: goto L_08B06530;
    case 533u: goto L_08B06540;
    case 534u: goto L_08B0654C;
    case 535u: goto L_08B06554;
    case 536u: goto L_08B06564;
    case 537u: goto L_08B0656C;
    case 538u: goto L_08B06588;
    case 539u: goto L_08B065E8;
    case 540u: goto L_08B065F0;
    case 541u: goto L_08B06628;
    case 542u: goto L_08B0662C;
    case 543u: goto L_08B06634;
    case 544u: goto L_08B06640;
    case 545u: goto L_08B06648;
    case 546u: goto L_08B0664C;
    case 547u: goto L_08B06654;
    case 548u: goto L_08B06660;
    case 549u: goto L_08B06668;
    case 550u: goto L_08B0666C;
    case 551u: goto L_08B06674;
    case 552u: goto L_08B06680;
    case 553u: goto L_08B06690;
    case 554u: goto L_08B066AC;
    case 555u: goto L_08B066B0;
    case 556u: goto L_08B066B8;
    case 557u: goto L_08B066D4;
    case 558u: goto L_08B066E8;
    case 559u: goto L_08B066F4;
    case 560u: goto L_08B06700;
    case 561u: goto L_08B06708;
    case 562u: goto L_08B0671C;
    case 563u: goto L_08B06724;
    case 564u: goto L_08B06740;
    case 565u: goto L_08B06750;
    case 566u: goto L_08B0675C;
    case 567u: goto L_08B06764;
    case 568u: goto L_08B06768;
    case 569u: goto L_08B06778;
    case 570u: goto L_08B06788;
    case 571u: goto L_08B06798;
    case 572u: goto L_08B067A4;
    case 573u: goto L_08B067C0;
    case 574u: goto L_08B067D0;
    case 575u: goto L_08B067E0;
    case 576u: goto L_08B0684C;
    case 577u: goto L_08B06858;
    case 578u: goto L_08B06884;
    case 579u: goto L_08B0688C;
    case 580u: goto L_08B0689C;
    case 581u: goto L_08B068A4;
    case 582u: goto L_08B068AC;
    case 583u: goto L_08B068B4;
    case 584u: goto L_08B068BC;
    case 585u: goto L_08B068C4;
    case 586u: goto L_08B068CC;
    case 587u: goto L_08B068D0;
    case 588u: goto L_08B068EC;
    case 589u: goto L_08B068FC;
    case 590u: goto L_08B06904;
    case 591u: goto L_08B0690C;
    case 592u: goto L_08B06914;
    case 593u: goto L_08B0691C;
    case 594u: goto L_08B06924;
    case 595u: goto L_08B0692C;
    case 596u: goto L_08B06938;
    case 597u: goto L_08B06988;
    case 598u: goto L_08B06998;
    case 599u: goto L_08B069A4;
    case 600u: goto L_08B069AC;
    case 601u: goto L_08B069CC;
    case 602u: goto L_08B069E4;
    case 603u: goto L_08B069F8;
    case 604u: goto L_08B06A08;
    case 605u: goto L_08B06A18;
    case 606u: goto L_08B06A24;
    case 607u: goto L_08B06A5C;
    case 608u: goto L_08B06A80;
    case 609u: goto L_08B06AA4;
    case 610u: goto L_08B06AC4;
    case 611u: goto L_08B06AE0;
    case 612u: goto L_08B06B08;
    case 613u: goto L_08B06B14;
    case 614u: goto L_08B06B20;
    case 615u: goto L_08B06B28;
    case 616u: goto L_08B06B60;
    case 617u: goto L_08B06B68;
    case 618u: goto L_08B06B78;
    case 619u: goto L_08B06B84;
    case 620u: goto L_08B06BBC;
    case 621u: goto L_08B06BDC;
    case 622u: goto L_08B06BFC;
    case 623u: goto L_08B06C18;
    case 624u: goto L_08B06C30;
    case 625u: goto L_08B06C5C;
    case 626u: goto L_08B06C68;
    case 627u: goto L_08B06C74;
    case 628u: goto L_08B06C7C;
    case 629u: goto L_08B06CB0;
    case 630u: goto L_08B06CBC;
    case 631u: goto L_08B06CC4;
    case 632u: goto L_08B06CCC;
    case 633u: goto L_08B06CD8;
    case 634u: goto L_08B06D10;
    case 635u: goto L_08B06D3C;
    case 636u: goto L_08B06D64;
    case 637u: goto L_08B06D8C;
    case 638u: goto L_08B06DAC;
    case 639u: goto L_08B06DD4;
    case 640u: goto L_08B06DE0;
    case 641u: goto L_08B06DEC;
    case 642u: goto L_08B06DF4;
    case 643u: goto L_08B06E24;
    case 644u: goto L_08B06E2C;
    case 645u: goto L_08B06E30;
    case 646u: goto L_08B06E38;
    case 647u: goto L_08B06E48;
    case 648u: goto L_08B06E54;
    case 649u: goto L_08B06E8C;
    case 650u: goto L_08B06EA8;
    case 651u: goto L_08B06EC4;
    case 652u: goto L_08B06EDC;
    case 653u: goto L_08B06EF0;
    case 654u: goto L_08B06F18;
    case 655u: goto L_08B06F24;
    case 656u: goto L_08B06F30;
    case 657u: goto L_08B06F38;
    case 658u: goto L_08B06F70;
    case 659u: goto L_08B06F78;
    case 660u: goto L_08B06F7C;
    case 661u: goto L_08B06F8C;
    case 662u: goto L_08B06F94;
    case 663u: goto L_08B06F9C;
    case 664u: goto L_08B06FAC;
    case 665u: goto L_08B06FB0;
    case 666u: goto L_08B06FB8;
    case 667u: goto L_08B06FC0;
    case 668u: goto L_08B06FCC;
    case 669u: goto L_08B06FD4;
    case 670u: goto L_08B06FDC;
    case 671u: goto L_08B06FE0;
    case 672u: goto L_08B06FE8;
    case 673u: goto L_08B06FEC;
    case 674u: goto L_08B06FF4;
    case 675u: goto L_08B06FFC;
    case 676u: goto L_08B0703C;
    case 677u: goto L_08B07088;
    case 678u: goto L_08B07098;
    case 679u: goto L_08B070A4;
    case 680u: goto L_08B070AC;
    case 681u: goto L_08B070C4;
    case 682u: goto L_08B070DC;
    case 683u: goto L_08B070F0;
    case 684u: goto L_08B07100;
    case 685u: goto L_08B07110;
    case 686u: goto L_08B0711C;
    case 687u: goto L_08B07130;
    case 688u: goto L_08B07138;
    case 689u: goto L_08B07148;
    case 690u: goto L_08B07154;
    case 691u: goto L_08B07164;
    case 692u: goto L_08B07170;
    case 693u: goto L_08B07178;
    case 694u: goto L_08B07184;
    case 695u: goto L_08B07198;
    case 696u: goto L_08B071A0;
    case 697u: goto L_08B071A4;
    case 698u: goto L_08B071AC;
    case 699u: goto L_08B071BC;
    case 700u: goto L_08B071C8;
    case 701u: goto L_08B071DC;
    case 702u: goto L_08B071E4;
    case 703u: goto L_08B071E8;
    case 704u: goto L_08B071F8;
    case 705u: goto L_08B071FC;
    case 706u: goto L_08B07204;
    case 707u: goto L_08B0720C;
    case 708u: goto L_08B07214;
    case 709u: goto L_08B07244;
    case 710u: goto L_08B07290;
    case 711u: goto L_08B072A0;
    case 712u: goto L_08B072AC;
    case 713u: goto L_08B072B4;
    case 714u: goto L_08B072CC;
    case 715u: goto L_08B072E4;
    case 716u: goto L_08B072F8;
    case 717u: goto L_08B07308;
    case 718u: goto L_08B07318;
    case 719u: goto L_08B07324;
    case 720u: goto L_08B07330;
    case 721u: goto L_08B07338;
    case 722u: goto L_08B07348;
    case 723u: goto L_08B07354;
    case 724u: goto L_08B0735C;
    case 725u: goto L_08B07368;
    case 726u: goto L_08B07370;
    case 727u: goto L_08B0737C;
    case 728u: goto L_08B07388;
    case 729u: goto L_08B07390;
    case 730u: goto L_08B07394;
    case 731u: goto L_08B0739C;
    case 732u: goto L_08B073AC;
    case 733u: goto L_08B073B8;
    case 734u: goto L_08B073C4;
    case 735u: goto L_08B073CC;
    case 736u: goto L_08B073D0;
    case 737u: goto L_08B073E0;
    case 738u: goto L_08B073E4;
    case 739u: goto L_08B073EC;
    case 740u: goto L_08B073F4;
    case 741u: goto L_08B073FC;
    case 742u: goto L_08B0742C;
    case 743u: goto L_08B07448;
    case 744u: goto L_08B0748C;
    case 745u: goto L_08B0749C;
    case 746u: goto L_08B074B0;
    case 747u: goto L_08B074C4;
    case 748u: goto L_08B074D4;
    case 749u: goto L_08B074E0;
    case 750u: goto L_08B074EC;
    case 751u: goto L_08B074F8;
    case 752u: goto L_08B07504;
    case 753u: goto L_08B0750C;
    case 754u: goto L_08B0751C;
    case 755u: goto L_08B07520;
    case 756u: goto L_08B07528;
    case 757u: goto L_08B07534;
    case 758u: goto L_08B0753C;
    case 759u: goto L_08B07550;
    case 760u: goto L_08B07574;
    case 761u: goto L_08B075A0;
    case 762u: goto L_08B075B8;
    case 763u: goto L_08B075C8;
    case 764u: goto L_08B075CC;
    case 765u: goto L_08B075D4;
    case 766u: goto L_08B075DC;
    case 767u: goto L_08B07624;
    case 768u: goto L_08B0763C;
    case 769u: goto L_08B07670;
    case 770u: goto L_08B0767C;
    case 771u: goto L_08B07688;
    case 772u: goto L_08B07690;
    case 773u: goto L_08B076A0;
    case 774u: goto L_08B076BC;
    case 775u: goto L_08B07708;
    case 776u: goto L_08B07718;
    case 777u: goto L_08B07724;
    case 778u: goto L_08B0772C;
    case 779u: goto L_08B07744;
    case 780u: goto L_08B0775C;
    case 781u: goto L_08B07770;
    case 782u: goto L_08B07780;
    case 783u: goto L_08B07790;
    case 784u: goto L_08B0779C;
    case 785u: goto L_08B077B8;
    case 786u: goto L_08B077C0;
    case 787u: goto L_08B077D0;
    case 788u: goto L_08B077DC;
    case 789u: goto L_08B077F4;
    case 790u: goto L_08B07800;
    case 791u: goto L_08B07808;
    case 792u: goto L_08B0780C;
    case 793u: goto L_08B07818;
    case 794u: goto L_08B07830;
    case 795u: goto L_08B07838;
    case 796u: goto L_08B0783C;
    case 797u: goto L_08B07844;
    case 798u: goto L_08B07854;
    case 799u: goto L_08B07860;
    case 800u: goto L_08B0787C;
    case 801u: goto L_08B07884;
    case 802u: goto L_08B07888;
    case 803u: goto L_08B07898;
    case 804u: goto L_08B0789C;
    case 805u: goto L_08B078A4;
    case 806u: goto L_08B078AC;
    case 807u: goto L_08B078B4;
    case 808u: goto L_08B078E4;
    case 809u: goto L_08B07948;
    case 810u: goto L_08B0797C;
    case 811u: goto L_08B07998;
    case 812u: goto L_08B079A0;
    case 813u: goto L_08B079C4;
    case 814u: goto L_08B079CC;
    case 815u: goto L_08B079F0;
    case 816u: goto L_08B079F8;
    case 817u: goto L_08B07A18;
    case 818u: goto L_08B07A20;
    case 819u: goto L_08B07A2C;
    case 820u: goto L_08B07A34;
    case 821u: goto L_08B07A38;
    case 822u: goto L_08B07A6C;
    case 823u: goto L_08B07AA0;
    case 824u: goto L_08B07AD4;
    case 825u: goto L_08B07B08;
    case 826u: goto L_08B07B34;
    case 827u: goto L_08B07B54;
    case 828u: goto L_08B07B5C;
    case 829u: goto L_08B07B88;
    case 830u: goto L_08B07B90;
    case 831u: goto L_08B07B98;
    case 832u: goto L_08B07BA0;
    case 833u: goto L_08B07BA8;
    case 834u: goto L_08B07BB0;
    case 835u: goto L_08B07BDC;
    case 836u: goto L_08B07BE4;
    case 837u: goto L_08B07BEC;
    case 838u: goto L_08B07BF4;
    case 839u: goto L_08B07C20;
    case 840u: goto L_08B07C28;
    case 841u: goto L_08B07C30;
    case 842u: goto L_08B07C34;
    case 843u: goto L_08B07C64;
    case 844u: goto L_08B07C94;
    case 845u: goto L_08B07CA0;
    case 846u: goto L_08B07CC0;
    case 847u: goto L_08B07CC4;
    case 848u: goto L_08B07CD0;
    case 849u: goto L_08B07CD8;
    case 850u: goto L_08B07CE4;
    case 851u: goto L_08B07CEC;
    case 852u: goto L_08B07CF8;
    case 853u: goto L_08B07D00;
    case 854u: goto L_08B07D0C;
    case 855u: goto L_08B07D14;
    case 856u: goto L_08B07D1C;
    case 857u: goto L_08B07D3C;
    case 858u: goto L_08B07D44;
    case 859u: goto L_08B07D4C;
    case 860u: goto L_08B07D50;
    case 861u: goto L_08B07D58;
    case 862u: goto L_08B07D60;
    case 863u: goto L_08B07D70;
    case 864u: goto L_08B07D78;
    case 865u: goto L_08B07D88;
    case 866u: goto L_08B07D90;
    case 867u: goto L_08B07D94;
    case 868u: goto L_08B07DA0;
    case 869u: goto L_08B07DA8;
    case 870u: goto L_08B07DB0;
    case 871u: goto L_08B07E14;
    case 872u: goto L_08B07E48;
    case 873u: goto L_08B07E64;
    case 874u: goto L_08B07E6C;
    case 875u: goto L_08B07E90;
    case 876u: goto L_08B07E98;
    case 877u: goto L_08B07EBC;
    case 878u: goto L_08B07EC4;
    case 879u: goto L_08B07EE4;
    case 880u: goto L_08B07EEC;
    case 881u: goto L_08B07EF8;
    case 882u: goto L_08B07F00;
    case 883u: goto L_08B07F04;
    case 884u: goto L_08B07F38;
    case 885u: goto L_08B07F6C;
    case 886u: goto L_08B07FA0;
    case 887u: goto L_08B07FD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B04000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08B04004;
L_08B04004:
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 128u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B04024;
      }
      goto L_08B04020;
    }
L_08B04020:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08B04024;
L_08B04024:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B04004;
      }
      goto L_08B04034;
    }
L_08B04034:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0403C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B04084;
      }
      goto L_08B04050;
    }
L_08B04050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08B04054;
L_08B04054:
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 128u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B04074;
      }
      goto L_08B04070;
    }
L_08B04070:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08B04074;
L_08B04074:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B04054;
      }
      goto L_08B04084;
    }
L_08B04084:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0408C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B04388;
      }
      goto L_08B040C8;
    }
L_08B040C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[22]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[20] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
        goto L_08B04270;
    }
    goto L_08B040F0;
L_08B040F0:
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08B041C0;
      }
      goto L_08B04114;
    }
L_08B04114:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (ctx.gpr[22] - ctx.gpr[20]);
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B04140u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 917u, 0x08AFBE5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B04140u) goto L_08B04140;
    return;
L_08B04140:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[21];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B0415C;
      }
      goto L_08B04150;
    }
L_08B04150:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B04174;
      }
      goto L_08B0415C;
    }
L_08B0415C:
    ctx.gpr[6] = (ctx.gpr[22] - ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08B0416Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08B0416Cu) goto L_08B0416C;
    return;
L_08B0416C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
    goto L_08B04174;
L_08B04174:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[19] - ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B04198;
      }
      goto L_08B04188;
    }
L_08B04188:
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B04198u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08B04198u) goto L_08B04198;
    return;
L_08B04198:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B041B8;
      }
      goto L_08B041A8;
    }
L_08B041A8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08B041AC;
L_08B041AC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] != ctx.gpr[17]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
        goto L_08B041AC;
    }
    goto L_08B041B8;
L_08B041B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04268;
      }
      goto L_08B041C0;
    }
L_08B041C0:
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
      if (branch_taken) {
          goto L_08B041F0;
      }
      goto L_08B041DC;
    }
L_08B041DC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B041DC;
      }
      goto L_08B041EC;
    }
L_08B041EC:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B041F0;
L_08B041F0:
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[20] = (ctx.gpr[22] + ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08B0421Cu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 917u, 0x08AFBE5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0421Cu) goto L_08B0421C;
    return;
L_08B0421C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B04238;
      }
      goto L_08B0422C;
    }
L_08B0422C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08B04250;
      }
      goto L_08B04238;
    }
L_08B04238:
    ctx.gpr[6] = (ctx.gpr[19] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B04248u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08B04248u) goto L_08B04248;
    return;
L_08B04248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_08B04250;
L_08B04250:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
      if (branch_taken) {
          goto L_08B04268;
      }
      goto L_08B04258;
    }
L_08B04258:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08B0425C;
L_08B0425C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[17] != ctx.gpr[19]) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
        goto L_08B0425C;
    }
    goto L_08B04268;
L_08B04268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04388;
      }
      goto L_08B04270;
    }
L_08B04270:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08B042AC;
      }
      goto L_08B0429C;
    }
L_08B0429C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B042B8;
      }
      goto L_08B042AC;
    }
L_08B042AC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08B042B8;
L_08B042B8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B042E4;
      }
      goto L_08B042C0;
    }
L_08B042C0:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[31] = (0x08B042CCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B042CCu) goto L_08B042CC;
    return;
L_08B042CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08B042E4;
      }
      goto L_08B042D8;
    }
L_08B042D8:
    ctx.gpr[31] = (0x08B042E0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B042E0u) goto L_08B042E0;
    return;
L_08B042E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08B042E4;
L_08B042E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B042FC;
      }
      goto L_08B042F0;
    }
L_08B042F0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08B04314;
      }
      goto L_08B042FC;
    }
L_08B042FC:
    ctx.gpr[21] = (ctx.gpr[17] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B0430Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08B0430Cu) goto L_08B0430C;
    return;
L_08B0430C:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08B04314;
L_08B04314:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08B04334;
    }
    goto L_08B0431C;
L_08B0431C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B0431C;
      }
      goto L_08B04330;
    }
L_08B04330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B04334;
L_08B04334:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B04348;
      }
      goto L_08B0433C;
    }
L_08B0433C:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B04364;
      }
      goto L_08B04348;
    }
L_08B04348:
    ctx.gpr[18] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B0435Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08B0435Cu) goto L_08B0435C;
    return;
L_08B0435C:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08B04364;
L_08B04364:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B04374;
      }
      goto L_08B0436C;
    }
L_08B0436C:
    ctx.gpr[31] = (0x08B04374u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B04374u) goto L_08B04374;
    return;
L_08B04374:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08B04388;
L_08B04388:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B043B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B04424;
      }
      goto L_08B043D0;
    }
L_08B043D0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B04414;
      }
      goto L_08B043D8;
    }
L_08B043D8:
    ctx.gpr[31] = (0x08B043E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08B04854;
L_08B043E0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B04410;
      }
      goto L_08B043EC;
    }
L_08B043EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B04410;
      }
      goto L_08B043F8;
    }
L_08B043F8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B04414;
    }
    goto L_08B04400;
L_08B04400:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B04414;
    }
    goto L_08B04408;
L_08B04408:
    ctx.gpr[31] = (0x08B04410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B04410u) goto L_08B04410;
    return;
L_08B04410:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B04414;
L_08B04414:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04424;
      }
      goto L_08B0441C;
    }
L_08B0441C:
    ctx.gpr[31] = (0x08B04424u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B04424u) goto L_08B04424;
    return;
L_08B04424:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04438:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[9]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[10] = (ctx.gpr[10] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    { const std::uint32_t dividend = ctx.gpr[8]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[8] = (ctx.hi);
    ctx.gpr[7] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B044D0;
      }
      goto L_08B04480;
    }
L_08B04480:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] ^ ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B044B0;
      }
      goto L_08B0449C;
    }
L_08B0449C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B04480;
      }
      goto L_08B044A8;
    }
L_08B044A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B044D0;
      }
      goto L_08B044B0;
    }
L_08B044B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B04598;
      }
      goto L_08B044D0;
    }
L_08B044D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08B044F0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B044F0u) goto L_08B044F0;
    return;
L_08B044F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[9] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08B04544;
      }
      goto L_08B04510;
    }
L_08B04510:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B0452Cu);
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B0452Cu) goto L_08B0452C;
    return;
L_08B0452C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[9] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08B04544;
L_08B04544:
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08B0455C;
      }
      goto L_08B04554;
    }
L_08B04554:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08B0455C;
L_08B0455C:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[8] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B04598;
L_08B04598:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B045A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04668;
      }
      goto L_08B045C0;
    }
L_08B045C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B0461C;
      }
      goto L_08B045FC;
    }
L_08B045FC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B0460C;
      }
      goto L_08B04604;
    }
L_08B04604:
    ctx.gpr[31] = (0x08B0460Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B0460Cu) goto L_08B0460C;
    return;
L_08B0460C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B04668;
      }
      goto L_08B0461C;
    }
L_08B0461C:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04668;
      }
      goto L_08B04628;
    }
L_08B04628:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B04654;
      }
      goto L_08B04630;
    }
L_08B04630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B04644;
      }
      goto L_08B0463C;
    }
L_08B0463C:
    ctx.gpr[31] = (0x08B04644u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B04644u) goto L_08B04644;
    return;
L_08B04644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B04668;
      }
      goto L_08B04654;
    }
L_08B04654:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B04628;
      }
      goto L_08B04668;
    }
L_08B04668:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04678:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04848;
      }
      goto L_08B046A8;
    }
L_08B046A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B046B4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    goto L_08B04920;
L_08B046B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08B04848;
      }
      goto L_08B046C8;
    }
L_08B046C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B04744;
      }
      goto L_08B046E0;
    }
L_08B046E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[31] = (0x08B046FCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B046FCu) goto L_08B046FC;
    return;
L_08B046FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08B04744;
      }
      goto L_08B04718;
    }
L_08B04718:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B04730u);
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B04730u) goto L_08B04730;
    return;
L_08B04730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_08B04744;
L_08B04744:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B04774;
      }
      goto L_08B04764;
    }
L_08B04764:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B04764;
      }
      goto L_08B04774;
    }
L_08B04774:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B047F4;
      }
      goto L_08B04788;
    }
L_08B04788:
    ctx.gpr[11] = (0u | 0u);
    goto L_08B0478C;
L_08B0478C:
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[11]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B047E4;
      }
      goto L_08B0479C;
    }
L_08B0479C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    goto L_08B047A0;
L_08B047A0:
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (ctx.hi);
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[11]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
        goto L_08B047A0;
    }
    goto L_08B047E4;
L_08B047E4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B0478C;
      }
      goto L_08B047F4;
    }
L_08B047F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B04848;
      }
      goto L_08B04838;
    }
L_08B04838:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04848;
      }
      goto L_08B04840;
    }
L_08B04840:
    ctx.gpr[31] = (0x08B04848u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B04848u) goto L_08B04848;
    return;
L_08B04848:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04854:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B04900;
      }
      goto L_08B0489C;
    }
L_08B0489C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
        goto L_08B048D0;
    }
    goto L_08B048AC;
L_08B048AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B048BC;
      }
      goto L_08B048B4;
    }
L_08B048B4:
    ctx.gpr[31] = (0x08B048BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B048BCu) goto L_08B048BC;
    return;
L_08B048BC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B048AC;
      }
      goto L_08B048C8;
    }
L_08B048C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    goto L_08B048D0;
L_08B048D0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B0489C;
      }
      goto L_08B04900;
    }
L_08B04900:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
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
L_08B04920:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16492));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B04948u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08B04A14;
L_08B04948:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08B0496Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08B04A28;
L_08B0496C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] != ctx.gpr[16]) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08B04980;
    }
    goto L_08B04978;
L_08B04978:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
      if (branch_taken) {
          goto L_08B04980;
      }
      goto L_08B04980;
    }
L_08B04980:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04994:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[7] << 2u);
    goto L_08B049E8;
L_08B049E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B04A0C;
      }
      goto L_08B049F0;
    }
L_08B049F0:
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B04A0C;
      }
      goto L_08B049FC;
    }
L_08B049FC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B049E8;
      }
      goto L_08B04A0C;
    }
L_08B04A0C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04A14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04A28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B04A94;
      }
      goto L_08B04A50;
    }
L_08B04A50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    goto L_08B04A58;
L_08B04A58:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04A88;
      }
      goto L_08B04A78;
    }
L_08B04A78:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[2] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B04A8C;
      }
      goto L_08B04A88;
    }
L_08B04A88:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08B04A8C;
L_08B04A8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08B04A58;
      }
      goto L_08B04A94;
    }
L_08B04A94:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04A9C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04AB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B04B6C;
      }
      goto L_08B04AD8;
    }
L_08B04AD8:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(300));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B04B5C;
      }
      goto L_08B04AE4;
    }
L_08B04AE4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(300)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[19];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B04B34;
      }
      goto L_08B04AF4;
    }
L_08B04AF4:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
        goto L_08B04B2C;
    }
    goto L_08B04AFC;
L_08B04AFC:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
        goto L_08B04B2C;
    }
    goto L_08B04B04;
L_08B04B04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
        goto L_08B04B2C;
    }
    goto L_08B04B10;
L_08B04B10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B04B28;
      }
      goto L_08B04B20;
    }
L_08B04B20:
    ctx.gpr[31] = (0x08B04B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B04B28u) goto L_08B04B28;
    return;
L_08B04B28:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    goto L_08B04B2C;
L_08B04B2C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08B04AF4;
      }
      goto L_08B04B34;
    }
L_08B04B34:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B04B5C;
      }
      goto L_08B04B3C;
    }
L_08B04B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(300)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B04B5C;
    }
    goto L_08B04B48;
L_08B04B48:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B04B5C;
    }
    goto L_08B04B50;
L_08B04B50:
    ctx.gpr[31] = (0x08B04B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B04B58u) goto L_08B04B58;
    return;
L_08B04B58:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B04B5C;
L_08B04B5C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04B6C;
      }
      goto L_08B04B64;
    }
L_08B04B64:
    ctx.gpr[31] = (0x08B04B6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B04B6Cu) goto L_08B04B6C;
    return;
L_08B04B6C:
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
L_08B04B8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04BA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04BB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04BC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04BDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04BF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04C04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08B04C30u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 481u, 0x08A05DFCu>(ctx, &aot_mem) && ctx.pc == 0x08B04C30u) goto L_08B04C30;
    return;
L_08B04C30:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(193)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(194)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(195)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(195), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    ctx.gpr[5] = (ctx.gpr[5] >> 2u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    ctx.gpr[5] = (ctx.gpr[5] >> 3u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(205))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(206))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(206), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(207))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(207), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(208))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08B04D84;
L_08B04D84:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(209)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B04D84;
      }
      goto L_08B04DA0;
    }
L_08B04DA0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B04DAC;
L_08B04DAC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(216)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(216), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B04DAC;
      }
      goto L_08B04DC8;
    }
L_08B04DC8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B04DD4;
L_08B04DD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(232)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B04DD4;
      }
      goto L_08B04DF0;
    }
L_08B04DF0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B04DFC;
L_08B04DFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(248)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B04DFC;
      }
      goto L_08B04E18;
    }
L_08B04E18:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B04E24;
L_08B04E24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B04E24;
      }
      goto L_08B04E40;
    }
L_08B04E40:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B04E4C;
L_08B04E4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B04E4C;
      }
      goto L_08B04E68;
    }
L_08B04E68:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(304));
    goto L_08B04E74;
L_08B04E74:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B04E74;
      }
      goto L_08B04ECC;
    }
L_08B04ECC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B04ED8;
L_08B04ED8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(432)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(432), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B04ED8;
      }
      goto L_08B04EF4;
    }
L_08B04EF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(448)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(452)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(452), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(468));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(468));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(464))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(464), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
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
L_08B04F84:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(20356));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04F90:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(20356));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B04F9C:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20356));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B05008;
      }
      goto L_08B04FAC;
    }
L_08B04FAC:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24108));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08B04FF8;
      }
      goto L_08B04FBC;
    }
L_08B04FBC:
    ctx.gpr[8] = (2224u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4556));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B04FE8;
      }
      goto L_08B04FCC;
    }
L_08B04FCC:
    ctx.gpr[8] = (2224u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(3984));
    ctx.gpr[5] = (ctx.gpr[8] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08B04FF0;
      }
      goto L_08B04FE8;
    }
L_08B04FE8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08B04FF0;
L_08B04FF0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08B05000;
      }
      goto L_08B04FF8;
    }
L_08B04FF8:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    goto L_08B05000;
L_08B05000:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0500C;
      }
      goto L_08B05008;
    }
L_08B05008:
    ctx.gpr[7] = (0u | 1u);
    goto L_08B0500C;
L_08B0500C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[7] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05014:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B05064;
      }
      goto L_08B05030;
    }
L_08B05030:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8804));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B05044u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 99u, 0x08AC4CB8u>(ctx, &aot_mem) && ctx.pc == 0x08B05044u) goto L_08B05044;
    return;
L_08B05044:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B05050u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 61u, 0x08920560u>(ctx, &aot_mem) && ctx.pc == 0x08B05050u) goto L_08B05050;
    return;
L_08B05050:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05064;
      }
      goto L_08B0505C;
    }
L_08B0505C:
    ctx.gpr[31] = (0x08B05064u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B05064u) goto L_08B05064;
    return;
L_08B05064:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05078:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 3u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05080:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B0509Cu);
    ctx.gpr[4] = (0u | 528u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08B0509Cu) goto L_08B0509C;
    return;
L_08B0509C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 528u);
    ctx.gpr[31] = (0x08B050ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08B050ACu) goto L_08B050AC;
    return;
L_08B050AC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B050C4;
      }
      goto L_08B050B8;
    }
L_08B050B8:
    ctx.gpr[31] = (0x08B050C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 344u, 0x089D9AD0u>(ctx, &aot_mem) && ctx.pc == 0x08B050C0u) goto L_08B050C0;
    return;
L_08B050C0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08B050C4;
L_08B050C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B050D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B05138;
      }
      goto L_08B050E8;
    }
L_08B050E8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B0512C;
      }
      goto L_08B050F0;
    }
L_08B050F0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B0512C;
      }
      goto L_08B050F8;
    }
L_08B050F8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B0512C;
      }
      goto L_08B05104;
    }
L_08B05104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B0512C;
      }
      goto L_08B05114;
    }
L_08B05114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (2233u << 16u);
        goto L_08B0512C;
    }
    goto L_08B05120;
L_08B05120:
    ctx.gpr[31] = (0x08B05128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08B05128u) goto L_08B05128;
    return;
L_08B05128:
    ctx.gpr[4] = (2233u << 16u);
    goto L_08B0512C;
L_08B0512C:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B05138u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08B05138u) goto L_08B05138;
    return;
L_08B05138:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05148:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B0516Cu);
    ctx.gpr[4] = (0u | 528u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08B0516Cu) goto L_08B0516C;
    return;
L_08B0516C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 528u);
    ctx.gpr[31] = (0x08B0517Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08B0517Cu) goto L_08B0517C;
    return;
L_08B0517C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B051CC;
      }
      goto L_08B05188;
    }
L_08B05188:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B05194u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B04C04;
L_08B05194:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(512)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(516)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_08B051AC;
L_08B051AC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(520)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(520), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B051AC;
      }
      goto L_08B051C8;
    }
L_08B051C8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08B051CC;
L_08B051CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B051E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B051F4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 53u, 0x089204B0u>(ctx, &aot_mem) && ctx.pc == 0x08B051F4u) goto L_08B051F4;
    return;
L_08B051F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05200:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B05260;
      }
      goto L_08B0521C;
    }
L_08B0521C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16196));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B0524C;
      }
      goto L_08B0522C;
    }
L_08B0522C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8804));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B05240u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 99u, 0x08AC4CB8u>(ctx, &aot_mem) && ctx.pc == 0x08B05240u) goto L_08B05240;
    return;
L_08B05240:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B0524Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 61u, 0x08920560u>(ctx, &aot_mem) && ctx.pc == 0x08B0524Cu) goto L_08B0524C;
    return;
L_08B0524C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05260;
      }
      goto L_08B05258;
    }
L_08B05258:
    ctx.gpr[31] = (0x08B05260u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B05260u) goto L_08B05260;
    return;
L_08B05260:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05274:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B052BC;
      }
      goto L_08B05290;
    }
L_08B05290:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16380));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B052A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 303u, 0x08922C8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B052A8u) goto L_08B052A8;
    return;
L_08B052A8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B052BC;
      }
      goto L_08B052B4;
    }
L_08B052B4:
    ctx.gpr[31] = (0x08B052BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B052BCu) goto L_08B052BC;
    return;
L_08B052BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B052D0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B05308;
      }
      goto L_08B052F0;
    }
L_08B052F0:
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B0530C;
      }
      goto L_08B05308;
    }
L_08B05308:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B0530C;
L_08B0530C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05314:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B05328u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 873u, 0x08B03FECu>(ctx, &aot_mem) && ctx.pc == 0x08B05328u) goto L_08B05328;
    return;
L_08B05328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05340:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08B05350;
L_08B05350:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B0537C;
      }
      goto L_08B0535C;
    }
L_08B0535C:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B05374;
      }
      goto L_08B05364;
    }
L_08B05364:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B0537C;
      }
      goto L_08B05374;
    }
L_08B05374:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B053F8;
      }
      goto L_08B0537C;
    }
L_08B0537C:
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05350;
      }
      goto L_08B05398;
    }
L_08B05398:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-128));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] & 127u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] & 127u);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08B053F8;
L_08B053F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05400:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 20u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0543C;
      }
      goto L_08B05438;
    }
L_08B05438:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08B0543C;
L_08B0543C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05444:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0544C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[31] = (0x08B05478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08B05478u) goto L_08B05478;
    return;
L_08B05478:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08B05484u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08B05484u) goto L_08B05484;
    return;
L_08B05484:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_08B054DC;
      }
      goto L_08B054A4;
    }
L_08B054A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B054A8;
L_08B054A8:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08B054A8;
    }
    goto L_08B054DC;
L_08B054DC:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B054F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[31] = (0x08B05530u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08B05530u) goto L_08B05530;
    return;
L_08B05530:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08B0553Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08B0553Cu) goto L_08B0553C;
    return;
L_08B0553C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_08B05594;
      }
      goto L_08B0555C;
    }
L_08B0555C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B05560;
L_08B05560:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08B05560;
    }
    goto L_08B05594;
L_08B05594:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B055AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[31] = (0x08B055D8u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08B055D8u) goto L_08B055D8;
    return;
L_08B055D8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08B055E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08B055E4u) goto L_08B055E4;
    return;
L_08B055E4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_08B0563C;
      }
      goto L_08B05604;
    }
L_08B05604:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B05608;
L_08B05608:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08B05608;
    }
    goto L_08B0563C;
L_08B0563C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05654:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 544u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0565C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08B05684u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08B05684u) goto L_08B05684;
    return;
L_08B05684:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08B05690u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08B05690u) goto L_08B05690;
    return;
L_08B05690:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_08B056E8;
      }
      goto L_08B056B0;
    }
L_08B056B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B056B4;
L_08B056B4:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08B056B4;
    }
    goto L_08B056E8;
L_08B056E8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05700:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(22));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[6] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B05744u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-23876));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08B05744u) goto L_08B05744;
    return;
L_08B05744:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05758:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(22));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B057C0u);
    ctx.gpr[5] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 277u, 0x08AF55B8u>(ctx, &aot_mem) && ctx.pc == 0x08B057C0u) goto L_08B057C0;
    return;
L_08B057C0:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(6));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 64u);
    goto L_08B057CC;
L_08B057CC:
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(23))))));
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B057CC;
      }
      goto L_08B057F0;
    }
L_08B057F0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05804:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0584C;
      }
      goto L_08B05814;
    }
L_08B05814:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8620));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-20652), 0u);
      if (branch_taken) {
          goto L_08B05838;
      }
      goto L_08B0582C;
    }
L_08B0582C:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9668));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B05838;
L_08B05838:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0584C;
      }
      goto L_08B05844;
    }
L_08B05844:
    ctx.gpr[31] = (0x08B0584Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B0584Cu) goto L_08B0584C;
    return;
L_08B0584C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05858:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B058EC;
      }
      goto L_08B05874;
    }
L_08B05874:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8604));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(72));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B058AC;
      }
      goto L_08B0588C;
    }
L_08B0588C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B058AC;
      }
      goto L_08B058A0;
    }
L_08B058A0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08B058ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08B058ACu) goto L_08B058AC;
    return;
L_08B058AC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B058DC;
      }
      goto L_08B058B4;
    }
L_08B058B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8620));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-20652), 0u);
      if (branch_taken) {
          goto L_08B058D8;
      }
      goto L_08B058CC;
    }
L_08B058CC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9668));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B058D8;
L_08B058D8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B058DC;
L_08B058DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B058EC;
      }
      goto L_08B058E4;
    }
L_08B058E4:
    ctx.gpr[31] = (0x08B058ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B058ECu) goto L_08B058EC;
    return;
L_08B058EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05900:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08B0594C;
      }
      goto L_08B05910;
    }
L_08B05910:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8588));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B05938;
      }
      goto L_08B0591C;
    }
L_08B0591C:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-17236));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B05938;
      }
      goto L_08B0592C;
    }
L_08B0592C:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13268));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_08B05938;
L_08B05938:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0594C;
      }
      goto L_08B05944;
    }
L_08B05944:
    ctx.gpr[31] = (0x08B0594Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B0594Cu) goto L_08B0594C;
    return;
L_08B0594C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05958:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(22872));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05964:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(22872));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05970:
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22872));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B0599C;
      }
      goto L_08B05980;
    }
L_08B05980:
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(3984));
    ctx.gpr[5] = (ctx.gpr[6] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B059A0;
      }
      goto L_08B0599C;
    }
L_08B0599C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08B059A0;
L_08B059A0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B059A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B059F8;
      }
      goto L_08B059C4;
    }
L_08B059C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8492));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B059D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 99u, 0x08AC4CB8u>(ctx, &aot_mem) && ctx.pc == 0x08B059D8u) goto L_08B059D8;
    return;
L_08B059D8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B059E4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 668u, 0x08AC3F40u>(ctx, &aot_mem) && ctx.pc == 0x08B059E4u) goto L_08B059E4;
    return;
L_08B059E4:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B059F8;
      }
      goto L_08B059F0;
    }
L_08B059F0:
    ctx.gpr[31] = (0x08B059F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B059F8u) goto L_08B059F8;
    return;
L_08B059F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05A0C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 5u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05A14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B05A30u);
    ctx.gpr[4] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08B05A30u) goto L_08B05A30;
    return;
L_08B05A30:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[31] = (0x08B05A40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08B05A40u) goto L_08B05A40;
    return;
L_08B05A40:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B05A58;
      }
      goto L_08B05A4C;
    }
L_08B05A4C:
    ctx.gpr[31] = (0x08B05A54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 783u, 0x08A0B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08B05A54u) goto L_08B05A54;
    return;
L_08B05A54:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08B05A58;
L_08B05A58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05A68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B05A88;
      }
      goto L_08B05A78;
    }
L_08B05A78:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08B05A88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08B05A88u) goto L_08B05A88;
    return;
L_08B05A88:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05A94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B05AB0u);
    ctx.gpr[4] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08B05AB0u) goto L_08B05AB0;
    return;
L_08B05AB0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[31] = (0x08B05AC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08B05AC0u) goto L_08B05AC0;
    return;
L_08B05AC0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08B05B7C;
      }
      goto L_08B05AD0;
    }
L_08B05AD0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(66)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(67)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(69)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(76))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(78))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(78), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(80))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(82)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    goto L_08B05B7C;
L_08B05B7C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05B88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B05B9Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 786u, 0x08A0B9BCu>(ctx, &aot_mem) && ctx.pc == 0x08B05B9Cu) goto L_08B05B9C;
    return;
L_08B05B9C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05BA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08B05BCCu);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 453u, 0x08A0F730u>(ctx, &aot_mem) && ctx.pc == 0x08B05BCCu) goto L_08B05BCC;
    return;
L_08B05BCC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05BD8:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(23512));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05BE4:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05BEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B05C8C;
      }
      goto L_08B05C0C;
    }
L_08B05C0C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15468));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B05C4C;
      }
      goto L_08B05C24;
    }
L_08B05C24:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B05C4C;
      }
      goto L_08B05C34;
    }
L_08B05C34:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05C4C;
      }
      goto L_08B05C3C;
    }
L_08B05C3C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05C4C;
      }
      goto L_08B05C44;
    }
L_08B05C44:
    ctx.gpr[31] = (0x08B05C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B05C4Cu) goto L_08B05C4C;
    return;
L_08B05C4C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B05C7C;
      }
      goto L_08B05C54;
    }
L_08B05C54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B05C78;
      }
      goto L_08B05C60;
    }
L_08B05C60:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B05C7C;
    }
    goto L_08B05C68;
L_08B05C68:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B05C7C;
    }
    goto L_08B05C70;
L_08B05C70:
    ctx.gpr[31] = (0x08B05C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B05C78u) goto L_08B05C78;
    return;
L_08B05C78:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B05C7C;
L_08B05C7C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05C8C;
      }
      goto L_08B05C84;
    }
L_08B05C84:
    ctx.gpr[31] = (0x08B05C8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B05C8Cu) goto L_08B05C8C;
    return;
L_08B05C8C:
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
L_08B05CA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B05D54;
      }
      goto L_08B05CC4;
    }
L_08B05CC4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15396));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B05D40;
      }
      goto L_08B05CD4;
    }
L_08B05CD4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15468));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B05D14;
      }
      goto L_08B05CEC;
    }
L_08B05CEC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B05D14;
      }
      goto L_08B05CFC;
    }
L_08B05CFC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05D14;
      }
      goto L_08B05D04;
    }
L_08B05D04:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05D14;
      }
      goto L_08B05D0C;
    }
L_08B05D0C:
    ctx.gpr[31] = (0x08B05D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B05D14u) goto L_08B05D14;
    return;
L_08B05D14:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B05D44;
      }
      goto L_08B05D1C;
    }
L_08B05D1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B05D40;
      }
      goto L_08B05D28;
    }
L_08B05D28:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B05D44;
    }
    goto L_08B05D30;
L_08B05D30:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B05D44;
    }
    goto L_08B05D38;
L_08B05D38:
    ctx.gpr[31] = (0x08B05D40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B05D40u) goto L_08B05D40;
    return;
L_08B05D40:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B05D44;
L_08B05D44:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05D54;
      }
      goto L_08B05D4C;
    }
L_08B05D4C:
    ctx.gpr[31] = (0x08B05D54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B05D54u) goto L_08B05D54;
    return;
L_08B05D54:
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
L_08B05D6C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05D74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B05E24;
      }
      goto L_08B05D94;
    }
L_08B05D94:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15324));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B05E10;
      }
      goto L_08B05DA4;
    }
L_08B05DA4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15468));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B05DE4;
      }
      goto L_08B05DBC;
    }
L_08B05DBC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B05DE4;
      }
      goto L_08B05DCC;
    }
L_08B05DCC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05DE4;
      }
      goto L_08B05DD4;
    }
L_08B05DD4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05DE4;
      }
      goto L_08B05DDC;
    }
L_08B05DDC:
    ctx.gpr[31] = (0x08B05DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B05DE4u) goto L_08B05DE4;
    return;
L_08B05DE4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B05E14;
      }
      goto L_08B05DEC;
    }
L_08B05DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B05E10;
      }
      goto L_08B05DF8;
    }
L_08B05DF8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B05E14;
    }
    goto L_08B05E00;
L_08B05E00:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B05E14;
    }
    goto L_08B05E08;
L_08B05E08:
    ctx.gpr[31] = (0x08B05E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B05E10u) goto L_08B05E10;
    return;
L_08B05E10:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B05E14;
L_08B05E14:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05E24;
      }
      goto L_08B05E1C;
    }
L_08B05E1C:
    ctx.gpr[31] = (0x08B05E24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B05E24u) goto L_08B05E24;
    return;
L_08B05E24:
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
L_08B05E3C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05E44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B05EF4;
      }
      goto L_08B05E64;
    }
L_08B05E64:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15252));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B05EE0;
      }
      goto L_08B05E74;
    }
L_08B05E74:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15468));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B05EB4;
      }
      goto L_08B05E8C;
    }
L_08B05E8C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B05EB4;
      }
      goto L_08B05E9C;
    }
L_08B05E9C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05EB4;
      }
      goto L_08B05EA4;
    }
L_08B05EA4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05EB4;
      }
      goto L_08B05EAC;
    }
L_08B05EAC:
    ctx.gpr[31] = (0x08B05EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B05EB4u) goto L_08B05EB4;
    return;
L_08B05EB4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B05EE4;
      }
      goto L_08B05EBC;
    }
L_08B05EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B05EE0;
      }
      goto L_08B05EC8;
    }
L_08B05EC8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B05EE4;
    }
    goto L_08B05ED0;
L_08B05ED0:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B05EE4;
    }
    goto L_08B05ED8;
L_08B05ED8:
    ctx.gpr[31] = (0x08B05EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B05EE0u) goto L_08B05EE0;
    return;
L_08B05EE0:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B05EE4;
L_08B05EE4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05EF4;
      }
      goto L_08B05EEC;
    }
L_08B05EEC:
    ctx.gpr[31] = (0x08B05EF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B05EF4u) goto L_08B05EF4;
    return;
L_08B05EF4:
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
L_08B05F0C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05F14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B05FC4;
      }
      goto L_08B05F34;
    }
L_08B05F34:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15180));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B05FB0;
      }
      goto L_08B05F44;
    }
L_08B05F44:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15468));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B05F84;
      }
      goto L_08B05F5C;
    }
L_08B05F5C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B05F84;
      }
      goto L_08B05F6C;
    }
L_08B05F6C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05F84;
      }
      goto L_08B05F74;
    }
L_08B05F74:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05F84;
      }
      goto L_08B05F7C;
    }
L_08B05F7C:
    ctx.gpr[31] = (0x08B05F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B05F84u) goto L_08B05F84;
    return;
L_08B05F84:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B05FB4;
      }
      goto L_08B05F8C;
    }
L_08B05F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B05FB0;
      }
      goto L_08B05F98;
    }
L_08B05F98:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B05FB4;
    }
    goto L_08B05FA0;
L_08B05FA0:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B05FB4;
    }
    goto L_08B05FA8;
L_08B05FA8:
    ctx.gpr[31] = (0x08B05FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B05FB0u) goto L_08B05FB0;
    return;
L_08B05FB0:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B05FB4;
L_08B05FB4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05FC4;
      }
      goto L_08B05FBC;
    }
L_08B05FBC:
    ctx.gpr[31] = (0x08B05FC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B05FC4u) goto L_08B05FC4;
    return;
L_08B05FC4:
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
L_08B05FDC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 3u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05FE4:
    ctx.gpr[4] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11124)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B05FF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B060A0;
      }
      goto L_08B06010;
    }
L_08B06010:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15108));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B0608C;
      }
      goto L_08B06020;
    }
L_08B06020:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15468));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B06060;
      }
      goto L_08B06038;
    }
L_08B06038:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B06060;
      }
      goto L_08B06048;
    }
L_08B06048:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B06060;
      }
      goto L_08B06050;
    }
L_08B06050:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B06060;
      }
      goto L_08B06058;
    }
L_08B06058:
    ctx.gpr[31] = (0x08B06060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B06060u) goto L_08B06060;
    return;
L_08B06060:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B06090;
      }
      goto L_08B06068;
    }
L_08B06068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B0608C;
      }
      goto L_08B06074;
    }
L_08B06074:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B06090;
    }
    goto L_08B0607C;
L_08B0607C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B06090;
    }
    goto L_08B06084;
L_08B06084:
    ctx.gpr[31] = (0x08B0608Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B0608Cu) goto L_08B0608C;
    return;
L_08B0608C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B06090;
L_08B06090:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B060A0;
      }
      goto L_08B06098;
    }
L_08B06098:
    ctx.gpr[31] = (0x08B060A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B060A0u) goto L_08B060A0;
    return;
L_08B060A0:
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
L_08B060B8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 4u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B060C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 4u));
    ctx.gpr[9] = (ctx.gpr[9] >> 28u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 4u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08B06118;
      }
      goto L_08B06110;
    }
L_08B06110:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B06118;
      }
      goto L_08B06118;
    }
L_08B06118:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08B06180;
      }
      goto L_08B0612C;
    }
L_08B0612C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B06144u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B06144u) goto L_08B06144;
    return;
L_08B06144:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08B06180;
      }
      goto L_08B0615C;
    }
L_08B0615C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B06170u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B06170u) goto L_08B06170;
    return;
L_08B06170:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08B06180;
L_08B06180:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B061B0;
      }
      goto L_08B06190;
    }
L_08B06190:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
        goto L_08B061A8;
    }
    goto L_08B0619C;
L_08B0619C:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    goto L_08B061A8;
L_08B061A8:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B06190;
      }
      goto L_08B061B0;
    }
L_08B061B0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08B061DC;
      }
      goto L_08B061C0;
    }
L_08B061C0:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B061D4;
      }
      goto L_08B061CC;
    }
L_08B061CC:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08B061D4;
L_08B061D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B06208;
      }
      goto L_08B061DC;
    }
L_08B061DC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B06208;
      }
      goto L_08B061E8;
    }
L_08B061E8:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_08B06200;
    }
    goto L_08B061F4;
L_08B061F4:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08B06200;
L_08B06200:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B061E8;
      }
      goto L_08B06208;
    }
L_08B06208:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B06240;
      }
      goto L_08B06210;
    }
L_08B06210:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B06240;
      }
      goto L_08B06220;
    }
L_08B06220:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
        goto L_08B06238;
    }
    goto L_08B0622C;
L_08B0622C:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    goto L_08B06238;
L_08B06238:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B06220;
      }
      goto L_08B06240;
    }
L_08B06240:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B0625C;
      }
      goto L_08B06250;
    }
L_08B06250:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    goto L_08B06254;
L_08B06254:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B06254;
      }
      goto L_08B0625C;
    }
L_08B0625C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B06270;
      }
      goto L_08B06268;
    }
L_08B06268:
    ctx.gpr[31] = (0x08B06270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B06270u) goto L_08B06270;
    return;
L_08B06270:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B062A0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 5u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B062A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (0u | 272u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[11]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[9] & 255u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B06318;
      }
      goto L_08B06308;
    }
L_08B06308:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B06324;
      }
      goto L_08B06318;
    }
L_08B06318:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    goto L_08B06324;
L_08B06324:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08B06358;
      }
      goto L_08B0632C;
    }
L_08B0632C:
    ctx.gpr[4] = (ctx.gpr[20] << 8u);
    ctx.gpr[5] = (ctx.gpr[20] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08B06340u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B06340u) goto L_08B06340;
    return;
L_08B06340:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08B06358;
      }
      goto L_08B0634C;
    }
L_08B0634C:
    ctx.gpr[31] = (0x08B06354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B06354u) goto L_08B06354;
    return;
L_08B06354:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    goto L_08B06358;
L_08B06358:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B06388;
      }
      goto L_08B06368;
    }
L_08B06368:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(272));
        goto L_08B06380;
    }
    goto L_08B06374;
L_08B06374:
    ctx.gpr[31] = (0x08B0637Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 274u, 0x08A2969Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0637Cu) goto L_08B0637C;
    return;
L_08B0637C:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(272));
    goto L_08B06380;
L_08B06380:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[17];
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08B06368;
      }
      goto L_08B06388;
    }
L_08B06388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B063B8;
      }
      goto L_08B06398;
    }
L_08B06398:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B063AC;
      }
      goto L_08B063A4;
    }
L_08B063A4:
    ctx.gpr[31] = (0x08B063ACu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 274u, 0x08A2969Cu>(ctx, &aot_mem) && ctx.pc == 0x08B063ACu) goto L_08B063AC;
    return;
L_08B063AC:
    ctx.gpr[23] = (ctx.gpr[22] + static_cast<std::uint32_t>(272));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B063EC;
      }
      goto L_08B063B8;
    }
L_08B063B8:
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B063E8;
      }
      goto L_08B063C8;
    }
L_08B063C8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
        goto L_08B063E0;
    }
    goto L_08B063D4;
L_08B063D4:
    ctx.gpr[31] = (0x08B063DCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 274u, 0x08A2969Cu>(ctx, &aot_mem) && ctx.pc == 0x08B063DCu) goto L_08B063DC;
    return;
L_08B063DC:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08B063E0;
L_08B063E0:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08B063C8;
      }
      goto L_08B063E8;
    }
L_08B063E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B063EC;
L_08B063EC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B06424;
      }
      goto L_08B063F4;
    }
L_08B063F4:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B06424;
      }
      goto L_08B06400;
    }
L_08B06400:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(272));
        goto L_08B06418;
    }
    goto L_08B0640C;
L_08B0640C:
    ctx.gpr[31] = (0x08B06414u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 274u, 0x08A2969Cu>(ctx, &aot_mem) && ctx.pc == 0x08B06414u) goto L_08B06414;
    return;
L_08B06414:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(272));
    goto L_08B06418;
L_08B06418:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08B06400;
      }
      goto L_08B06420;
    }
L_08B06420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B06424;
L_08B06424:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B06454;
      }
      goto L_08B06438;
    }
L_08B06438:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08B0643C;
L_08B0643C:
    ctx.gpr[31] = (0x08B06444u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 276u, 0x08A296C4u>(ctx, &aot_mem) && ctx.pc == 0x08B06444u) goto L_08B06444;
    return;
L_08B06444:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(272));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B0643C;
      }
      goto L_08B06450;
    }
L_08B06450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08B06454;
L_08B06454:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B06464;
      }
      goto L_08B0645C;
    }
L_08B0645C:
    ctx.gpr[31] = (0x08B06464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B06464u) goto L_08B06464;
    return;
L_08B06464:
    ctx.gpr[4] = (ctx.gpr[20] << 8u);
    ctx.gpr[5] = (ctx.gpr[20] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
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
L_08B064AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B0651C;
      }
      goto L_08B064C8;
    }
L_08B064C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B064E8;
      }
      goto L_08B064DC;
    }
L_08B064DC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    goto L_08B064E0;
L_08B064E0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B064E0;
      }
      goto L_08B064E8;
    }
L_08B064E8:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B0650C;
    }
    goto L_08B064F0;
L_08B064F0:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B0650C;
    }
    goto L_08B064F8;
L_08B064F8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B0650C;
    }
    goto L_08B06500;
L_08B06500:
    ctx.gpr[31] = (0x08B06508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B06508u) goto L_08B06508;
    return;
L_08B06508:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B0650C;
L_08B0650C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0651C;
      }
      goto L_08B06514;
    }
L_08B06514:
    ctx.gpr[31] = (0x08B0651Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B0651Cu) goto L_08B0651C;
    return;
L_08B0651C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06530:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08B06540;
L_08B06540:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B0656C;
      }
      goto L_08B0654C;
    }
L_08B0654C:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B06564;
      }
      goto L_08B06554;
    }
L_08B06554:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B0656C;
      }
      goto L_08B06564;
    }
L_08B06564:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B065E8;
      }
      goto L_08B0656C;
    }
L_08B0656C:
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B06540;
      }
      goto L_08B06588;
    }
L_08B06588:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-128));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] & 127u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] & 127u);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08B065E8;
L_08B065E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B065F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 12u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0662C;
      }
      goto L_08B06628;
    }
L_08B06628:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08B0662C;
L_08B0662C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06634:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B06648;
      }
      goto L_08B06640;
    }
L_08B06640:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B0666C;
      }
      goto L_08B06648;
    }
L_08B06648:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08B0664C;
L_08B0664C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B06668;
      }
      goto L_08B06654;
    }
L_08B06654:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B06668;
      }
      goto L_08B06660;
    }
L_08B06660:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B0664C;
      }
      goto L_08B06668;
    }
L_08B06668:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08B0666C;
L_08B0666C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06674:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(11360));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06680:
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11360));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B066AC;
      }
      goto L_08B06690;
    }
L_08B06690:
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(3984));
    ctx.gpr[5] = (ctx.gpr[6] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B066B0;
      }
      goto L_08B066AC;
    }
L_08B066AC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08B066B0;
L_08B066B0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B066B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B06708;
      }
      goto L_08B066D4;
    }
L_08B066D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8324));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B066E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 99u, 0x08AC4CB8u>(ctx, &aot_mem) && ctx.pc == 0x08B066E8u) goto L_08B066E8;
    return;
L_08B066E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B066F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 668u, 0x08AC3F40u>(ctx, &aot_mem) && ctx.pc == 0x08B066F4u) goto L_08B066F4;
    return;
L_08B066F4:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B06708;
      }
      goto L_08B06700;
    }
L_08B06700:
    ctx.gpr[31] = (0x08B06708u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B06708u) goto L_08B06708;
    return;
L_08B06708:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0671C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06724:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B06740u);
    ctx.gpr[4] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08B06740u) goto L_08B06740;
    return;
L_08B06740:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 112u);
    ctx.gpr[31] = (0x08B06750u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08B06750u) goto L_08B06750;
    return;
L_08B06750:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B06768;
      }
      goto L_08B0675C;
    }
L_08B0675C:
    ctx.gpr[31] = (0x08B06764u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 31u, 0x08A342DCu>(ctx, &aot_mem) && ctx.pc == 0x08B06764u) goto L_08B06764;
    return;
L_08B06764:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08B06768;
L_08B06768:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06778:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B06798;
      }
      goto L_08B06788;
    }
L_08B06788:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08B06798u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08B06798u) goto L_08B06798;
    return;
L_08B06798:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B067A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B067C0u);
    ctx.gpr[4] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08B067C0u) goto L_08B067C0;
    return;
L_08B067C0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 112u);
    ctx.gpr[31] = (0x08B067D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08B067D0u) goto L_08B067D0;
    return;
L_08B067D0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08B0684C;
      }
      goto L_08B067E0;
    }
L_08B067E0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(100), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(102)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(102), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    goto L_08B0684C;
L_08B0684C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06858:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B06884u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 558u, 0x08927438u>(ctx, &aot_mem) && ctx.pc == 0x08B06884u) goto L_08B06884;
    return;
L_08B06884:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B068D0;
      }
      goto L_08B0688C;
    }
L_08B0688C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08B068D0;
      }
      goto L_08B0689C;
    }
L_08B0689C:
    ctx.gpr[31] = (0x08B068A4u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 558u, 0x08927438u>(ctx, &aot_mem) && ctx.pc == 0x08B068A4u) goto L_08B068A4;
    return;
L_08B068A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08B068D0;
      }
      goto L_08B068AC;
    }
L_08B068AC:
    ctx.gpr[31] = (0x08B068B4u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 558u, 0x08927438u>(ctx, &aot_mem) && ctx.pc == 0x08B068B4u) goto L_08B068B4;
    return;
L_08B068B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08B068D0;
      }
      goto L_08B068BC;
    }
L_08B068BC:
    ctx.gpr[31] = (0x08B068C4u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 558u, 0x08927438u>(ctx, &aot_mem) && ctx.pc == 0x08B068C4u) goto L_08B068C4;
    return;
L_08B068C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B068D0;
      }
      goto L_08B068CC;
    }
L_08B068CC:
    ctx.gpr[18] = (0u | 1u);
    goto L_08B068D0;
L_08B068D0:
    ctx.gpr[2] = (ctx.gpr[18] & 255u);
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
L_08B068EC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B068FC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06904:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1280)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0690C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06914:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0691C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06924:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0692C:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4556));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B06938:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 28u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[10]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[17] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B06998;
      }
      goto L_08B06988;
    }
L_08B06988:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B069A4;
      }
      goto L_08B06998;
    }
L_08B06998:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
    goto L_08B069A4;
L_08B069A4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08B06A08;
      }
      goto L_08B069AC;
    }
L_08B069AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[31] = (0x08B069CCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B069CCu) goto L_08B069CC;
    return;
L_08B069CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08B06A08;
      }
      goto L_08B069E4;
    }
L_08B069E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B069F8u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B069F8u) goto L_08B069F8;
    return;
L_08B069F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    goto L_08B06A08;
L_08B06A08:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B06B68;
      }
      goto L_08B06A18;
    }
L_08B06A18:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28));
        goto L_08B06B60;
    }
    goto L_08B06A24;
L_08B06A24:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[10]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    ctx.gpr[10] = (ctx.gpr[10] >> 31u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08B06AE0;
      }
      goto L_08B06A5C;
    }
L_08B06A5C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B06A80u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B06A80u) goto L_08B06A80;
    return;
L_08B06A80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08B06AE0;
      }
      goto L_08B06AA4;
    }
L_08B06AA4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B06AC4u);
    ctx.gpr[4] = (ctx.gpr[11] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B06AC4u) goto L_08B06AC4;
    return;
L_08B06AC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    goto L_08B06AE0;
L_08B06AE0:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[10];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B06B28;
      }
      goto L_08B06B08;
    }
L_08B06B08:
    ctx.gpr[2] = (ctx.gpr[11] | 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
        goto L_08B06B20;
    }
    goto L_08B06B14;
L_08B06B14:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    goto L_08B06B20;
L_08B06B20:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B06B08;
      }
      goto L_08B06B28;
    }
L_08B06B28:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    ctx.gpr[11] = (ctx.gpr[7] + static_cast<std::uint32_t>(18));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(18));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28));
    goto L_08B06B60;
L_08B06B60:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08B06A18;
      }
      goto L_08B06B68;
    }
L_08B06B68:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B06CBC;
      }
      goto L_08B06B78;
    }
L_08B06B78:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B06CB0;
      }
      goto L_08B06B84;
    }
L_08B06B84:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
    ctx.gpr[9] = (ctx.gpr[9] >> 31u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08B06C30;
      }
      goto L_08B06BBC;
    }
L_08B06BBC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B06BDCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B06BDCu) goto L_08B06BDC;
    return;
L_08B06BDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08B06C30;
      }
      goto L_08B06BFC;
    }
L_08B06BFC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B06C18u);
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B06C18u) goto L_08B06C18;
    return;
L_08B06C18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    goto L_08B06C30;
L_08B06C30:
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B06C7C;
      }
      goto L_08B06C5C;
    }
L_08B06C5C:
    ctx.gpr[11] = (ctx.gpr[10] | 0u);
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
        goto L_08B06C74;
    }
    goto L_08B06C68;
L_08B06C68:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    goto L_08B06C74;
L_08B06C74:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B06C5C;
      }
      goto L_08B06C7C;
    }
L_08B06C7C:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[10] = (ctx.gpr[6] + static_cast<std::uint32_t>(18));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(18));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    goto L_08B06CB0;
L_08B06CB0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B06E30;
      }
      goto L_08B06CBC;
    }
L_08B06CBC:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B06E2C;
      }
      goto L_08B06CC4;
    }
L_08B06CC4:
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(18));
    goto L_08B06CCC;
L_08B06CCC:
    ctx.gpr[11] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1));
        goto L_08B06E24;
    }
    goto L_08B06CD8;
L_08B06CD8:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[2]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B06DAC;
      }
      goto L_08B06D10;
    }
L_08B06D10:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B06D3Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B06D3Cu) goto L_08B06D3C;
    return;
L_08B06D3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08B06DAC;
      }
      goto L_08B06D64;
    }
L_08B06D64:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B06D8Cu);
    ctx.gpr[4] = (ctx.gpr[3] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B06D8Cu) goto L_08B06D8C;
    return;
L_08B06D8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    goto L_08B06DAC;
L_08B06DAC:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B06DF4;
      }
      goto L_08B06DD4;
    }
L_08B06DD4:
    ctx.gpr[12] = (ctx.gpr[3] | 0u);
    if (ctx.gpr[12] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
        goto L_08B06DEC;
    }
    goto L_08B06DE0;
L_08B06DE0:
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    goto L_08B06DEC;
L_08B06DEC:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B06DD4;
      }
      goto L_08B06DF4;
    }
L_08B06DF4:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[11] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[11] + static_cast<std::uint32_t>(18));
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    goto L_08B06E24;
L_08B06E24:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08B06CCC;
      }
      goto L_08B06E2C;
    }
L_08B06E2C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B06E30;
L_08B06E30:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B06F7C;
      }
      goto L_08B06E38;
    }
L_08B06E38:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B06F7C;
      }
      goto L_08B06E48;
    }
L_08B06E48:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
        goto L_08B06F70;
    }
    goto L_08B06E54;
L_08B06E54:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.gpr[8] = (ctx.gpr[8] >> 31u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08B06EF0;
      }
      goto L_08B06E8C;
    }
L_08B06E8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[31] = (0x08B06EA8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B06EA8u) goto L_08B06EA8;
    return;
L_08B06EA8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_08B06EF0;
      }
      goto L_08B06EC4;
    }
L_08B06EC4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    ctx.gpr[31] = (0x08B06EDCu);
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B06EDCu) goto L_08B06EDC;
    return;
L_08B06EDC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_08B06EF0;
L_08B06EF0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B06F38;
      }
      goto L_08B06F18;
    }
L_08B06F18:
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
        goto L_08B06F30;
    }
    goto L_08B06F24;
L_08B06F24:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    goto L_08B06F30;
L_08B06F30:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B06F18;
      }
      goto L_08B06F38;
    }
L_08B06F38:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(18));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(18));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    goto L_08B06F70;
L_08B06F70:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08B06E48;
      }
      goto L_08B06F78;
    }
L_08B06F78:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B06F7C;
L_08B06F7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B06FEC;
      }
      goto L_08B06F8C;
    }
L_08B06F8C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B06FDC;
      }
      goto L_08B06F94;
    }
L_08B06F94:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(28));
        goto L_08B06FE0;
    }
    goto L_08B06F9C;
L_08B06F9C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B06FB8;
      }
      goto L_08B06FAC;
    }
L_08B06FAC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    goto L_08B06FB0;
L_08B06FB0:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B06FB0;
      }
      goto L_08B06FB8;
    }
L_08B06FB8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(28));
        goto L_08B06FE0;
    }
    goto L_08B06FC0;
L_08B06FC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(28));
        goto L_08B06FE0;
    }
    goto L_08B06FCC;
L_08B06FCC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(28));
        goto L_08B06FE0;
    }
    goto L_08B06FD4;
L_08B06FD4:
    ctx.gpr[31] = (0x08B06FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B06FDCu) goto L_08B06FDC;
    return;
L_08B06FDC:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(28));
    goto L_08B06FE0;
L_08B06FE0:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08B06F8C;
      }
      goto L_08B06FE8;
    }
L_08B06FE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08B06FEC;
L_08B06FEC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B06FFC;
      }
      goto L_08B06FF4;
    }
L_08B06FF4:
    ctx.gpr[31] = (0x08B06FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B06FFCu) goto L_08B06FFC;
    return;
L_08B06FFC:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0703C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    ctx.gpr[9] = (ctx.gpr[9] >> 29u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
    ctx.gpr[7] = (ctx.gpr[17] < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B07098;
      }
      goto L_08B07088;
    }
L_08B07088:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B070A4;
      }
      goto L_08B07098;
    }
L_08B07098:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
    goto L_08B070A4;
L_08B070A4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08B07100;
      }
      goto L_08B070AC;
    }
L_08B070AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B070C4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B070C4u) goto L_08B070C4;
    return;
L_08B070C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08B07100;
      }
      goto L_08B070DC;
    }
L_08B070DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B070F0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B070F0u) goto L_08B070F0;
    return;
L_08B070F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08B07100;
L_08B07100:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B07138;
      }
      goto L_08B07110;
    }
L_08B07110:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
        goto L_08B07130;
    }
    goto L_08B0711C;
L_08B0711C:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    goto L_08B07130;
L_08B07130:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B07110;
      }
      goto L_08B07138;
    }
L_08B07138:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08B07170;
      }
      goto L_08B07148;
    }
L_08B07148:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B07164;
      }
      goto L_08B07154;
    }
L_08B07154:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B07164;
L_08B07164:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B071A4;
      }
      goto L_08B07170;
    }
L_08B07170:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B071A0;
      }
      goto L_08B07178;
    }
L_08B07178:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_08B07198;
    }
    goto L_08B07184;
L_08B07184:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08B07198;
L_08B07198:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B07178;
      }
      goto L_08B071A0;
    }
L_08B071A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B071A4;
L_08B071A4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B071E8;
      }
      goto L_08B071AC;
    }
L_08B071AC:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B071E8;
      }
      goto L_08B071BC;
    }
L_08B071BC:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
        goto L_08B071DC;
    }
    goto L_08B071C8;
L_08B071C8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_08B071DC;
L_08B071DC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B071BC;
      }
      goto L_08B071E4;
    }
L_08B071E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B071E8;
L_08B071E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B07204;
      }
      goto L_08B071F8;
    }
L_08B071F8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    goto L_08B071FC;
L_08B071FC:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B071FC;
      }
      goto L_08B07204;
    }
L_08B07204:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B07214;
      }
      goto L_08B0720C;
    }
L_08B0720C:
    ctx.gpr[31] = (0x08B07214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B07214u) goto L_08B07214;
    return;
L_08B07214:
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B07244:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.gpr[9] = (ctx.gpr[9] >> 31u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[17] < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B072A0;
      }
      goto L_08B07290;
    }
L_08B07290:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B072AC;
      }
      goto L_08B072A0;
    }
L_08B072A0:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
    goto L_08B072AC;
L_08B072AC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08B07308;
      }
      goto L_08B072B4;
    }
L_08B072B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B072CCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B072CCu) goto L_08B072CC;
    return;
L_08B072CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08B07308;
      }
      goto L_08B072E4;
    }
L_08B072E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B072F8u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B072F8u) goto L_08B072F8;
    return;
L_08B072F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08B07308;
L_08B07308:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B07338;
      }
      goto L_08B07318;
    }
L_08B07318:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
        goto L_08B07330;
    }
    goto L_08B07324;
L_08B07324:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    goto L_08B07330;
L_08B07330:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B07318;
      }
      goto L_08B07338;
    }
L_08B07338:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08B07368;
      }
      goto L_08B07348;
    }
L_08B07348:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0735C;
      }
      goto L_08B07354;
    }
L_08B07354:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    goto L_08B0735C;
L_08B0735C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B07394;
      }
      goto L_08B07368;
    }
L_08B07368:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B07390;
      }
      goto L_08B07370;
    }
L_08B07370:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_08B07388;
    }
    goto L_08B0737C;
L_08B0737C:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08B07388;
L_08B07388:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B07370;
      }
      goto L_08B07390;
    }
L_08B07390:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B07394;
L_08B07394:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B073D0;
      }
      goto L_08B0739C;
    }
L_08B0739C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B073D0;
      }
      goto L_08B073AC;
    }
L_08B073AC:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
        goto L_08B073C4;
    }
    goto L_08B073B8;
L_08B073B8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_08B073C4;
L_08B073C4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B073AC;
      }
      goto L_08B073CC;
    }
L_08B073CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B073D0;
L_08B073D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B073EC;
      }
      goto L_08B073E0;
    }
L_08B073E0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_08B073E4;
L_08B073E4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B073E4;
      }
      goto L_08B073EC;
    }
L_08B073EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B073FC;
      }
      goto L_08B073F4;
    }
L_08B073F4:
    ctx.gpr[31] = (0x08B073FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B073FCu) goto L_08B073FC;
    return;
L_08B073FC:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0742C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B076A0;
      }
      goto L_08B07448;
    }
L_08B07448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08B07550;
    }
    goto L_08B0748C;
L_08B0748C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08B074E0;
      }
      goto L_08B0749C;
    }
L_08B0749C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B074B0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B074B0u) goto L_08B074B0;
    return;
L_08B074B0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B074E0;
      }
      goto L_08B074C4;
    }
L_08B074C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B074D4u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B074D4u) goto L_08B074D4;
    return;
L_08B074D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08B074E0;
L_08B074E0:
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B0750C;
      }
      goto L_08B074EC;
    }
L_08B074EC:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
        goto L_08B07504;
    }
    goto L_08B074F8;
L_08B074F8:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_08B07504;
L_08B07504:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B074EC;
      }
      goto L_08B0750C;
    }
L_08B0750C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B07528;
      }
      goto L_08B0751C;
    }
L_08B0751C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_08B07520;
L_08B07520:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B07520;
      }
      goto L_08B07528;
    }
L_08B07528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0753C;
      }
      goto L_08B07534;
    }
L_08B07534:
    ctx.gpr[31] = (0x08B0753Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B0753Cu) goto L_08B0753C;
    return;
L_08B0753C:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B07690;
      }
      goto L_08B07550;
    }
L_08B07550:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08B075DC;
    }
    goto L_08B07574;
L_08B07574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B075B8;
      }
      goto L_08B075A0;
    }
L_08B075A0:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B075A0;
      }
      goto L_08B075B8;
    }
L_08B075B8:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B075D4;
      }
      goto L_08B075C8;
    }
L_08B075C8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_08B075CC;
L_08B075CC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B075CC;
      }
      goto L_08B075D4;
    }
L_08B075D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B07690;
      }
      goto L_08B075DC;
    }
L_08B075DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
    ctx.gpr[9] = (ctx.gpr[4] >> 31u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.gpr[8] = (ctx.gpr[8] >> 31u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B0763C;
      }
      goto L_08B07624;
    }
L_08B07624:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B07624;
      }
      goto L_08B0763C;
    }
L_08B0763C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[8] = (ctx.gpr[8] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B07690;
      }
      goto L_08B07670;
    }
L_08B07670:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
        goto L_08B07688;
    }
    goto L_08B0767C;
L_08B0767C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_08B07688;
L_08B07688:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B07670;
      }
      goto L_08B07690;
    }
L_08B07690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B076A0;
L_08B076A0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08B076BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[17] < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B07718;
      }
      goto L_08B07708;
    }
L_08B07708:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B07724;
      }
      goto L_08B07718;
    }
L_08B07718:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
    goto L_08B07724;
L_08B07724:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08B07780;
      }
      goto L_08B0772C;
    }
L_08B0772C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B07744u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B07744u) goto L_08B07744;
    return;
L_08B07744:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08B07780;
      }
      goto L_08B0775C;
    }
L_08B0775C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B07770u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B07770u) goto L_08B07770;
    return;
L_08B07770:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08B07780;
L_08B07780:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B077C0;
      }
      goto L_08B07790;
    }
L_08B07790:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
        goto L_08B077B8;
    }
    goto L_08B0779C;
L_08B0779C:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    goto L_08B077B8;
L_08B077B8:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B07790;
      }
      goto L_08B077C0;
    }
L_08B077C0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08B07800;
      }
      goto L_08B077D0;
    }
L_08B077D0:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B077F4;
      }
      goto L_08B077DC;
    }
L_08B077DC:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    goto L_08B077F4;
L_08B077F4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B0783C;
      }
      goto L_08B07800;
    }
L_08B07800:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B07838;
      }
      goto L_08B07808;
    }
L_08B07808:
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    goto L_08B0780C;
L_08B0780C:
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_08B07830;
    }
    goto L_08B07818;
L_08B07818:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08B07830;
L_08B07830:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B0780C;
      }
      goto L_08B07838;
    }
L_08B07838:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B0783C;
L_08B0783C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B07888;
      }
      goto L_08B07844;
    }
L_08B07844:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B07888;
      }
      goto L_08B07854;
    }
L_08B07854:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B0787C;
    }
    goto L_08B07860;
L_08B07860:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08B0787C;
L_08B0787C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B07854;
      }
      goto L_08B07884;
    }
L_08B07884:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B07888;
L_08B07888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B078A4;
      }
      goto L_08B07898;
    }
L_08B07898:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_08B0789C;
L_08B0789C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B0789C;
      }
      goto L_08B078A4;
    }
L_08B078A4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B078B4;
      }
      goto L_08B078AC;
    }
L_08B078AC:
    ctx.gpr[31] = (0x08B078B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B078B4u) goto L_08B078B4;
    return;
L_08B078B4:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B078E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[8] = (0u | 28u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.lo);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 2u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B07B34;
      }
      goto L_08B07948;
    }
L_08B07948:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(57))))));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(65))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(72))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[6]);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(73))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[7]);
    goto L_08B0797C;
L_08B0797C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x08B07998u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B07998u) goto L_08B07998;
    return;
L_08B07998:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
        goto L_08B07AD4;
    }
    goto L_08B079A0;
L_08B079A0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(50))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x08B079C4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B079C4u) goto L_08B079C4;
    return;
L_08B079C4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
        goto L_08B07AA0;
    }
    goto L_08B079CC;
L_08B079CC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(58))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x08B079F0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B079F0u) goto L_08B079F0;
    return;
L_08B079F0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
        goto L_08B07A6C;
    }
    goto L_08B079F8;
L_08B079F8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(66))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[23] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x08B07A18u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B07A18u) goto L_08B07A18;
    return;
L_08B07A18:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
        goto L_08B07A38;
    }
    goto L_08B07A20;
L_08B07A20:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) > 0;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08B0797C;
      }
      goto L_08B07A2C;
    }
L_08B07A2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08B07B08;
      }
      goto L_08B07A34;
    }
L_08B07A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    goto L_08B07A38;
L_08B07A38:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[23]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B07C34;
      }
      goto L_08B07A6C;
    }
L_08B07A6C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[23]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B07C34;
      }
      goto L_08B07AA0;
    }
L_08B07AA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[23]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B07C34;
      }
      goto L_08B07AD4;
    }
L_08B07AD4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[23]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B07C34;
      }
      goto L_08B07B08;
    }
L_08B07B08:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[23]));
    goto L_08B07B34;
L_08B07B34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (0u | 28u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[16]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B07BA0;
      }
      goto L_08B07B54;
    }
L_08B07B54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B07B90;
      }
      goto L_08B07B5C;
    }
L_08B07B5C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B07B88u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B07B88u) goto L_08B07B88;
    return;
L_08B07B88:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B07B98;
      }
      goto L_08B07B90;
    }
L_08B07B90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08B07C34;
      }
      goto L_08B07B98;
    }
L_08B07B98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B07C34;
      }
      goto L_08B07BA0;
    }
L_08B07BA0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B07BF4;
      }
      goto L_08B07BA8;
    }
L_08B07BA8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B07B90;
      }
      goto L_08B07BB0;
    }
L_08B07BB0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(74))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B07BDCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B07BDCu) goto L_08B07BDC;
    return;
L_08B07BDC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B07BEC;
      }
      goto L_08B07BE4;
    }
L_08B07BE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08B07BF4;
      }
      goto L_08B07BEC;
    }
L_08B07BEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B07C34;
      }
      goto L_08B07BF4;
    }
L_08B07BF4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B07C20u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B07C20u) goto L_08B07C20;
    return;
L_08B07C20:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B07C30;
      }
      goto L_08B07C28;
    }
L_08B07C28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08B07B5C;
      }
      goto L_08B07C30;
    }
L_08B07C30:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08B07C34;
L_08B07C34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B07C64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B07C94u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_08B078E4;
L_08B07C94:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B07CA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 4u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B07D1C;
      }
      goto L_08B07CC0;
    }
L_08B07CC0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08B07CC4;
L_08B07CC4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B07CD8;
    }
    goto L_08B07CD0;
L_08B07CD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B07DA8;
      }
      goto L_08B07CD8;
    }
L_08B07CD8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B07CEC;
    }
    goto L_08B07CE4;
L_08B07CE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B07DA8;
      }
      goto L_08B07CEC;
    }
L_08B07CEC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B07D00;
    }
    goto L_08B07CF8;
L_08B07CF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B07DA8;
      }
      goto L_08B07D00;
    }
L_08B07D00:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B07D14;
      }
      goto L_08B07D0C;
    }
L_08B07D0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B07DA8;
      }
      goto L_08B07D14;
    }
L_08B07D14:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B07CC4;
      }
      goto L_08B07D1C;
    }
L_08B07D1C:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B07D50;
      }
      goto L_08B07D3C;
    }
L_08B07D3C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B07DA8;
      }
      goto L_08B07D44;
    }
L_08B07D44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B07D94;
      }
      goto L_08B07D4C;
    }
L_08B07D4C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    goto L_08B07D50;
L_08B07D50:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B07D78;
      }
      goto L_08B07D58;
    }
L_08B07D58:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B07DA8;
      }
      goto L_08B07D60;
    }
L_08B07D60:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B07D78;
    }
    goto L_08B07D70;
L_08B07D70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B07DA8;
      }
      goto L_08B07D78;
    }
L_08B07D78:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B07D90;
    }
    goto L_08B07D88;
L_08B07D88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B07DA8;
      }
      goto L_08B07D90;
    }
L_08B07D90:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B07D94;
L_08B07D94:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B07DA8;
      }
      goto L_08B07DA0;
    }
L_08B07DA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B07DA8;
      }
      goto L_08B07DA8;
    }
L_08B07DA8:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B07DB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[8] = (0u | 28u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.lo);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 2u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 1u, 0x08B08000u>(ctx, &aot_mem); return;
      }
      goto L_08B07E14;
    }
L_08B07E14:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(57))))));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(65))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(72))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[6]);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(73))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[7]);
    goto L_08B07E48;
L_08B07E48:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x08B07E64u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B07E64u) goto L_08B07E64;
    return;
L_08B07E64:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
        goto L_08B07FA0;
    }
    goto L_08B07E6C;
L_08B07E6C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(50))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x08B07E90u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B07E90u) goto L_08B07E90;
    return;
L_08B07E90:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
        goto L_08B07F6C;
    }
    goto L_08B07E98;
L_08B07E98:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(58))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x08B07EBCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B07EBCu) goto L_08B07EBC;
    return;
L_08B07EBC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
        goto L_08B07F38;
    }
    goto L_08B07EC4;
L_08B07EC4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(66))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[23] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x08B07EE4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B07EE4u) goto L_08B07EE4;
    return;
L_08B07EE4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
        goto L_08B07F04;
    }
    goto L_08B07EEC;
L_08B07EEC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) > 0;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08B07E48;
      }
      goto L_08B07EF8;
    }
L_08B07EF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08B07FD4;
      }
      goto L_08B07F00;
    }
L_08B07F00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    goto L_08B07F04;
L_08B07F04:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[23]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 17u, 0x08B08100u>(ctx, &aot_mem); return;
      }
      goto L_08B07F38;
    }
L_08B07F38:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[23]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 17u, 0x08B08100u>(ctx, &aot_mem); return;
      }
      goto L_08B07F6C;
    }
L_08B07F6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[23]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 17u, 0x08B08100u>(ctx, &aot_mem); return;
      }
      goto L_08B07FA0;
    }
L_08B07FA0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[23]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 17u, 0x08B08100u>(ctx, &aot_mem); return;
      }
      goto L_08B07FD4;
    }
L_08B07FD4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.pc = 0x08B08000u; return;
}

void recomp_unit_0192(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0192_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_192(Runtime &runtime) {
    runtime.register_generated_unit(192u, 0x08B04000u, 16384u, &recomp_unit_0192, &recomp_unit_0192_entry);
    runtime.register_function(0x08B04000u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04004u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04020u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04024u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04034u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0403Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04050u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04054u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04070u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04074u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04084u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0408Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B040C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B040F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04114u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04140u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04150u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0415Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0416Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04174u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04188u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04198u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B041A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B041ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B041B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B041C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B041DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B041ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B041F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0421Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0422Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04238u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04248u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04250u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04258u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0425Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04268u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04270u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0429Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B042ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B042B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B042C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B042CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B042D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B042E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B042E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B042F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B042FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0430Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04314u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0431Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04330u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04334u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0433Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04348u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0435Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04364u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0436Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04374u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04388u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B043B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B043D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B043D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B043E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B043ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B043F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04400u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04408u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04410u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04414u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0441Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04424u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04438u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04480u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0449Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B044A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B044B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B044D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B044F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04510u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0452Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04544u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04554u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0455Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04598u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B045A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B045C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B045FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04604u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0460Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0461Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04628u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04630u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0463Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04644u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04654u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04668u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04678u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B046A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B046B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B046C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B046E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B046FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04718u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04730u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04744u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04764u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04774u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04788u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0478Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0479Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B047A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B047E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B047F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04838u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04840u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04848u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04854u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0489Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B048ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B048B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B048BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B048C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B048D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04900u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04920u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04948u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0496Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04978u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04980u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04994u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B049E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B049F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B049FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A0Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A14u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A28u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A50u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A58u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A78u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A88u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A8Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A94u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A9Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04AB0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04AD8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04AE4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04AF4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04AFCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B04u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B10u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B20u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B28u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B2Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B34u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B3Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B48u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B50u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B58u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B5Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B64u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B6Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B8Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04BA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04BB4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04BC8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04BDCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04BF0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C04u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C30u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04D84u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04DA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04DACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04DC8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04DD4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04DF0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04DFCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E18u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E24u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E40u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E4Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E68u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E74u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04ECCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04ED8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04EF4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F84u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F90u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F9Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04FACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04FBCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04FCCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04FE8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04FF0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04FF8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05000u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05008u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0500Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05014u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05030u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05044u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05050u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0505Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05064u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05078u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05080u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0509Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050D4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05104u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05114u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05120u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05128u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0512Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05138u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05148u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0516Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0517Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05188u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05194u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B051ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B051C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B051CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B051E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B051F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05200u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0521Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0522Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05240u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0524Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05258u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05260u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05274u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05290u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B052A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B052B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B052BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B052D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B052F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05308u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0530Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05314u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05328u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05340u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05350u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0535Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05364u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05374u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0537Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05398u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B053F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05400u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05438u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0543Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05444u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0544Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05478u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05484u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B054A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B054A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B054DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B054F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05530u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0553Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0555Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05560u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05594u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B055ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B055D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B055E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05604u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05608u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0563Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05654u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0565Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05684u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05690u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B056B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B056B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B056E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05700u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05744u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05758u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B057C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B057CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B057F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05804u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05814u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0582Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05838u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05844u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0584Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05858u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05874u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0588Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B058A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B058ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B058B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B058CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B058D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B058DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B058E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B058ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05900u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05910u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0591Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0592Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05938u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05944u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0594Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05958u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05964u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05970u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05980u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0599Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B059A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B059A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B059C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B059D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B059E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B059F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B059F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A0Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A14u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A30u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A40u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A4Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A54u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A58u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A68u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A78u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A88u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A94u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05AB0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05AC0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05AD0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05B7Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05B88u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05B9Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05BA8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05BCCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05BD8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05BE4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05BECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C0Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C24u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C34u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C3Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C44u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C4Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C54u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C60u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C68u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C70u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C78u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C7Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C84u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C8Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05CA4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05CC4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05CD4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05CECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05CFCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D04u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D0Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D14u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D1Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D28u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D30u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D38u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D40u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D44u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D4Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D54u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D6Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D74u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D94u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05DA4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05DBCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05DCCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05DD4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05DDCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05DE4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05DECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05DF8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E00u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E08u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E10u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E14u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E1Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E24u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E3Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E44u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E64u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E74u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E8Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E9Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EA4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EB4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EBCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EC8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05ED0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05ED8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EE0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EE4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EF4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F0Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F14u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F34u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F44u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F5Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F6Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F74u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F7Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F84u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F8Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F98u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05FA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05FA8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05FB0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05FB4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05FBCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05FC4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05FDCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05FE4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05FF0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06010u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06020u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06038u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06048u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06050u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06058u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06060u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06068u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06074u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0607Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06084u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0608Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06090u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06098u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B060A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B060B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B060C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06110u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06118u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0612Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06144u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0615Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06170u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06180u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06190u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0619Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061D4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06200u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06208u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06210u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06220u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0622Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06238u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06240u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06250u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06254u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0625Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06268u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06270u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B062A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B062A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06308u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06318u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06324u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0632Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06340u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0634Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06354u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06358u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06368u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06374u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0637Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06380u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06388u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06398u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B063A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B063ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B063B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B063C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B063D4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B063DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B063E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B063E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B063ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B063F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06400u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0640Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06414u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06418u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06420u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06424u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06438u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0643Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06444u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06450u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06454u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0645Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06464u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B064ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B064C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B064DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B064E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B064E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B064F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B064F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06500u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06508u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0650Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06514u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0651Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06530u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06540u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0654Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06554u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06564u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0656Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06588u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B065E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B065F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06628u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0662Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06634u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06640u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06648u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0664Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06654u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06660u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06668u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0666Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06674u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06680u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06690u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B066ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B066B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B066B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B066D4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B066E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B066F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06700u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06708u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0671Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06724u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06740u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06750u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0675Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06764u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06768u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06778u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06788u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06798u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B067A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B067C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B067D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B067E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0684Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06858u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06884u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0688Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0689Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B068A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B068ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B068B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B068BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B068C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B068CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B068D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B068ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B068FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06904u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0690Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06914u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0691Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06924u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0692Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06938u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06988u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06998u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06A08u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06A18u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06A24u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06A5Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06A80u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06AA4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06AC4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06AE0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B08u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B14u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B20u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B28u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B60u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B68u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B78u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B84u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06BBCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06BDCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06BFCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06C18u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06C30u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06C5Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06C68u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06C74u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06C7Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06CB0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06CBCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06CC4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06CCCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06CD8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D10u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D3Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D64u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D8Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06DACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06DD4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06DE0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06DECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06DF4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E24u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E2Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E30u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E38u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E48u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E54u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E8Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06EA8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06EC4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06EDCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06EF0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F18u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F24u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F30u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F38u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F70u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F78u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F7Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F8Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F94u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F9Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06FACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06FB0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06FB8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06FC0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06FCCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06FD4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06FDCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06FE0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06FE8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06FECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06FF4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06FFCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0703Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07088u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07098u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B070A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B070ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B070C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B070DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B070F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07100u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07110u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0711Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07130u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07138u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07148u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07154u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07164u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07170u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07178u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07184u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07198u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B071A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B071A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B071ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B071BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B071C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B071DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B071E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B071E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B071F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B071FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07204u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0720Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07214u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07244u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07290u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B072A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B072ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B072B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B072CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B072E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B072F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07308u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07318u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07324u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07330u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07338u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07348u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07354u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0735Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07368u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07370u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0737Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07388u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07390u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07394u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0739Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B073ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B073B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B073C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B073CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B073D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B073E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B073E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B073ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B073F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B073FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0742Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07448u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0748Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0749Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074D4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07504u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0750Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0751Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07520u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07528u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07534u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0753Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07550u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07574u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B075A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B075B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B075C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B075CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B075D4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B075DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07624u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0763Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07670u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0767Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07688u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07690u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B076A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B076BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07708u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07718u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07724u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0772Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07744u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0775Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07770u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07780u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07790u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0779Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B077B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B077C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B077D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B077DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B077F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07800u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07808u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0780Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07818u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07830u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07838u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0783Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07844u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07854u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07860u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0787Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07884u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07888u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07898u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0789Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B078A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B078ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B078B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B078E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07948u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0797Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07998u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B079A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B079C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B079CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B079F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B079F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A18u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A20u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A2Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A34u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A38u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A6Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07AA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07AD4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B08u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B34u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B54u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B5Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B88u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B90u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B98u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07BA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07BA8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07BB0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07BDCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07BE4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07BECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07BF4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C20u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C28u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C30u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C34u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C64u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C94u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CC0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CC4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CD0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CD8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CE4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CF8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D00u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D0Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D14u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D1Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D3Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D44u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D4Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D50u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D58u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D60u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D70u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D78u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D88u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D90u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D94u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07DA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07DA8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07DB0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E14u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E48u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E64u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E6Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E90u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E98u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07EBCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07EC4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07EE4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07EECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07EF8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07F00u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07F04u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07F38u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07F6Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07FA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07FD4u, &recomp_unit_0192, "recomp_unit_0192");
}
} // namespace psprecomp
