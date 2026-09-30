#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0178[4081] = {
    1, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0,
    10, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 14, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 20, 0, 21,
    0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25,
    0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 32, 0, 0, 33,
    0, 0, 34, 0, 35, 0, 36, 0, 0, 37, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 42, 0, 0, 0, 0,
    43, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 51, 52, 0, 0, 0, 0, 0,
    53, 0, 54, 0, 55, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65,
    0, 0, 0, 66, 0, 0, 67, 0, 68, 0, 69, 0, 70, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 74, 75, 0, 0, 0, 0, 0,
    0, 76, 0, 77, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 81, 82, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 85,
    0, 86, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 89, 0, 0, 90, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 95, 0, 96, 0, 0, 97,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0,
    0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0,
    0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 123, 0, 124, 0, 0,
    0, 125, 0, 0, 126, 0, 127, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 134,
    0, 0, 0, 0, 135, 0, 136, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 143,
    0, 144, 0, 145, 0, 0, 146, 0, 0, 0, 147, 0, 148, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 152, 153, 0, 0, 0,
    154, 0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 158, 0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0, 164, 0, 0, 0,
    0, 165, 0, 166, 0, 0, 0, 0, 167, 0, 168, 0, 169, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 178, 179, 0, 0, 0, 0,
    0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 183, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 193, 0, 0,
    0, 194, 0, 195, 0, 0, 196, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 206, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0,
    0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 219, 0, 0, 220, 0, 221, 222, 0, 0,
    0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 226, 0, 0, 227, 0, 0, 0, 0, 228, 0, 229, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 234, 0, 0, 235, 0, 0, 0, 0, 236, 0,
    0, 0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 243, 244, 0, 245, 0, 0, 0, 246, 0,
    0, 0, 0, 247, 0, 0, 248, 0, 249, 250, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 253, 254, 0, 255, 0, 0, 256, 0, 257, 0, 0, 0,
    0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 263, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 270, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 285, 0, 0, 0,
    0, 286, 0, 287, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0,
    0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 297, 0, 298, 0, 0, 0,
    0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 303, 0, 304, 305, 0, 306, 0, 0,
    307, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 315, 0, 316, 0, 0, 0,
    0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 320, 0, 0, 321, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0,
    0, 324, 0, 0, 0, 0, 325, 0, 326, 0, 327, 0, 0, 328, 0, 0, 0, 329, 0, 330, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 333,
    0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340,
    0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 343, 0, 344, 0, 0, 0, 345, 0, 346, 0, 0, 347, 0, 348, 0, 0, 0, 349, 0, 0,
    0, 350, 0, 351, 0, 352, 0, 0, 353, 354, 355, 0, 356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 359, 0, 360, 0, 0, 361, 362, 363, 0, 364,
    0, 0, 0, 365, 0, 0, 0, 366, 0, 367, 0, 368, 0, 0, 369, 370, 371, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 375, 0, 0, 0,
    376, 0, 0, 377, 0, 378, 0, 379, 0, 380, 0, 381, 0, 382, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 391, 392,
    0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 395, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0,
    0, 399, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 404, 0, 405, 0, 406, 407, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 411, 0,
    0, 412, 0, 0, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    418, 0, 419, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 424, 425, 0, 0, 0, 0, 0, 426,
    427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430,
    0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 436, 437, 0, 438, 0,
    0, 439, 0, 0, 440, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 444, 0, 0, 0, 0, 445, 0,
    0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 449, 450, 0, 0, 451, 0, 0, 0, 452, 0,
    0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 456, 0, 457, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 462, 0, 0, 0, 0, 463, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 468, 0, 469, 0, 0, 0, 470, 0, 471, 0,
    0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 477, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 495, 0, 0, 496, 0, 0, 497, 0, 498, 0, 499, 0, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0,
    0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 514, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 517, 0, 518, 0,
    519, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0,
    0, 524, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 530, 0, 0, 531,
    532, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0,
    0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541,
    0, 0, 0, 542, 0, 543, 0, 0, 544, 0, 0, 545, 0, 546, 0, 547, 0, 548, 0, 0, 0, 0, 0, 0, 549, 0, 0, 550, 0, 0, 0, 0,
    0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 556, 0, 557, 0, 0, 558, 0,
    559, 0, 0, 560, 561, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 564, 0,
    0, 0, 565, 0, 566, 0, 0, 567, 0, 568, 0, 0, 569, 0, 0, 0, 570, 0, 0, 571, 0, 0, 572, 0, 0, 0, 0, 573, 0, 0, 0, 0,
    574, 0, 0, 575, 0, 0, 576, 0, 0, 577, 0, 0, 578, 0, 579, 0, 0, 580, 0, 0, 581, 0, 0, 582, 0, 0, 0, 583, 0, 0, 0, 0,
    584, 0, 585, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 588, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 591, 0, 592, 0, 0, 0, 593, 0,
    0, 594, 0, 0, 0, 0, 595, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 599, 600, 0, 0, 0, 0, 601,
    0, 602, 0, 0, 603, 0, 604, 605, 0, 0, 606, 0, 607, 0, 0, 0, 0, 608, 0, 609, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 611, 0,
    0, 612, 0, 0, 0, 613, 0, 614, 0, 0, 615, 0, 616, 0, 0, 0, 617, 0, 0, 618, 0, 0, 619, 0, 620, 0, 621, 0, 0, 0, 622, 0,
    0, 0, 623, 0, 0, 624, 0, 0, 0, 625, 0, 0, 626, 0, 0, 627, 0, 0, 0, 628, 0, 0, 629, 0, 630, 0, 631, 0, 0, 632, 0, 0,
    633, 0, 0, 634, 0, 0, 635, 0, 0, 636, 0, 0, 637, 0, 638, 0, 639, 0, 0, 640, 0, 641, 0, 0, 0, 642, 0, 0, 0, 0, 643, 0,
    0, 644, 0, 0, 0, 645, 0, 646, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0,
    650, 0, 651, 0, 652, 0, 653, 0, 0, 654, 0, 655, 0, 656, 0, 657, 0, 658, 0, 659, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0,
    0, 0, 0, 661, 0, 0, 0, 662, 0, 663, 0, 664, 0, 665, 0, 0, 666, 0, 667, 0, 668, 0, 669, 0, 670, 0, 671, 0, 0, 0, 0, 0,
    0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 674, 0, 675, 0, 676, 0, 677, 0, 0, 678, 0, 679, 0, 680, 0, 681, 0, 682,
    0, 683, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 686, 0, 0, 687, 0, 0, 688, 0, 0, 0, 0, 689,
    0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 692, 0, 0, 693, 0, 694, 0, 695, 0, 0, 0, 696, 0, 0,
    697, 0, 0, 0, 0, 698, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 702, 0, 703, 704,
    0, 705, 0, 706, 0, 0, 707, 0, 0, 0, 708, 0, 0, 709, 0, 0, 0, 0, 710, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0,
    0, 0, 0, 713, 0, 0, 0, 714, 0, 715, 716, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 719, 0,
    720, 0, 0, 0, 721, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 724, 0, 0, 725, 0, 0, 0, 726, 0,
    0, 727, 0, 0, 0, 728, 0, 0, 729, 0, 0, 0, 730, 0, 0, 731, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 733, 0, 0, 0, 0,
    0, 0, 734, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 739, 0, 0, 740, 0, 0, 0, 0,
    0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 744, 0, 0, 0, 0, 0, 745, 0, 746, 0, 747, 0, 0, 0, 748, 749,
    0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0,
    0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 756, 0, 0, 757, 0, 0, 758, 0, 759, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 761, 0,
    0, 762, 0, 0, 763, 0, 764, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 767, 0, 0, 768,
    0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 771, 0, 0, 772, 0, 0, 0, 773, 0, 0, 774, 0, 0, 775, 0, 0, 0,
    0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 777, 0, 0, 778, 0, 0, 779, 0, 780, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0,
    0, 782, 0, 0, 783, 0, 0, 784, 0, 0, 0, 0, 0, 0, 785, 0, 0, 786, 0, 0, 0, 787, 0, 0, 788, 0, 789, 0, 790, 0, 0, 791,
    0, 0, 792, 0, 793, 794, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 797, 0, 0, 798, 0, 0, 0, 0, 0,
    0, 799, 0, 0, 800, 0, 0, 0, 801, 0, 0, 802, 0, 803, 0, 804, 0, 0, 805, 0, 0, 806, 0, 807, 808, 0, 0, 0, 0, 0, 809, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 811, 0, 812, 0, 813, 0, 0, 814, 0, 0, 0, 815, 0, 816, 0, 817, 0, 0, 818, 0,
    0, 819, 0, 0, 0, 820, 0, 821, 0, 0, 822, 0, 0, 0, 823, 0, 824, 0, 825, 0, 826, 0, 827, 0, 0, 0, 828, 0, 829, 0, 830, 0,
    0, 831, 0, 832, 0, 0, 0, 833, 0, 834, 0, 835, 0, 0, 0, 836, 837, 0, 0, 0, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0,
    839, 0, 0, 840, 0, 0, 841, 0, 0, 0, 842, 0, 843, 0, 844, 0, 0, 0, 845, 846, 0, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0,
    0, 0, 848, 0, 0, 849, 0, 0, 850, 0, 0, 0, 0, 0, 0, 851, 0, 0, 852, 0, 0, 0, 853, 0, 0, 854, 0, 855, 0, 856, 0, 0,
    857, 0, 0, 858, 0, 859, 860, 0, 0, 0, 0, 0, 861, 0, 0, 0, 0, 0, 0, 0, 0, 862, 0, 0, 863, 0, 0, 864, 0, 865, 0, 0,
    866, 0, 0, 867, 0, 868, 0, 0, 0, 0, 0, 869, 870, 0, 0, 0, 0, 0, 871, 0, 0, 0, 0, 0, 872, 0, 0, 0, 0, 0, 0, 873,
    0, 0, 0, 874, 0, 0, 0, 0, 0, 0, 0, 0, 875, 0, 0, 0, 876, 0, 0, 0, 0, 0, 0, 0, 0, 877, 0, 0, 0, 878, 0, 0,
    0, 0, 0, 0, 0, 0, 879, 0, 0, 880, 0, 0, 881, 0, 0, 0, 0, 882, 0, 0, 0, 0, 883, 884, 0, 0, 0, 0, 0, 885, 0, 0,
    0, 0, 0, 0, 0, 886, 0, 0, 0, 887, 0, 0, 0, 0, 0, 0, 0, 888, 0, 0, 0, 889, 0, 0, 0, 0, 0, 0, 890, 0, 0, 891,
    0, 0, 0, 0, 892, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 893, 0, 0, 0, 0, 894, 0, 0, 0, 0, 0, 0, 0, 0, 0, 895, 0,
    0, 896, 0, 897, 0, 0, 0, 0, 0, 0, 898, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 899, 0, 0, 0, 0, 900, 0, 0, 901, 0, 0,
    0, 0, 0, 0, 902, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 903, 0, 904, 0, 905, 0, 906, 0, 0, 0, 0, 0, 0, 0, 907, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 908, 0, 0, 0, 909, 910, 0, 0, 0, 0, 0, 0, 911, 0, 0, 0, 0, 0, 912, 0, 0, 0, 0, 0,
    0, 0, 0, 913, 0, 0, 914, 0, 0, 915, 0, 0, 0, 0, 916, 0, 917, 0, 918, 0, 0, 0, 919, 920, 0, 0, 0, 0, 0, 921, 0, 0,
    0, 0, 0, 0, 0, 0, 922, 0, 0, 923, 0, 0, 924, 0, 0, 0, 0, 925, 0, 0, 926, 927, 0, 0, 0, 0, 0, 928, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 929, 0, 0, 0, 0, 0, 930, 931, 932, 0, 933, 0, 0, 934, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 935, 0, 0, 936, 0, 0, 0, 937, 0, 938, 0, 939, 940, 0, 0, 0, 0, 941, 0, 0, 0, 0, 0, 0, 0, 0, 0, 942, 0, 0,
    0, 0, 0, 943, 944, 945, 0, 946, 0, 947, 0, 0, 0, 0, 0, 0, 948,
};
void recomp_unit_0178_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08ACC004u;
        entry_id = (entry_delta < 16324u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0178[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08ACC004;
    case 2u: goto L_08ACC014;
    case 3u: goto L_08ACC01C;
    case 4u: goto L_08ACC024;
    case 5u: goto L_08ACC034;
    case 6u: goto L_08ACC054;
    case 7u: goto L_08ACC064;
    case 8u: goto L_08ACC06C;
    case 9u: goto L_08ACC074;
    case 10u: goto L_08ACC084;
    case 11u: goto L_08ACC090;
    case 12u: goto L_08ACC09C;
    case 13u: goto L_08ACC0A4;
    case 14u: goto L_08ACC0B0;
    case 15u: goto L_08ACC0B8;
    case 16u: goto L_08ACC0C4;
    case 17u: goto L_08ACC0D4;
    case 18u: goto L_08ACC0E4;
    case 19u: goto L_08ACC0F0;
    case 20u: goto L_08ACC0F8;
    case 21u: goto L_08ACC100;
    case 22u: goto L_08ACC108;
    case 23u: goto L_08ACC114;
    case 24u: goto L_08ACC144;
    case 25u: goto L_08ACC180;
    case 26u: goto L_08ACC194;
    case 27u: goto L_08ACC1B0;
    case 28u: goto L_08ACC1BC;
    case 29u: goto L_08ACC1C8;
    case 30u: goto L_08ACC1E0;
    case 31u: goto L_08ACC1E8;
    case 32u: goto L_08ACC1F4;
    case 33u: goto L_08ACC200;
    case 34u: goto L_08ACC20C;
    case 35u: goto L_08ACC214;
    case 36u: goto L_08ACC21C;
    case 37u: goto L_08ACC228;
    case 38u: goto L_08ACC22C;
    case 39u: goto L_08ACC23C;
    case 40u: goto L_08ACC24C;
    case 41u: goto L_08ACC26C;
    case 42u: goto L_08ACC270;
    case 43u: goto L_08ACC284;
    case 44u: goto L_08ACC290;
    case 45u: goto L_08ACC2A8;
    case 46u: goto L_08ACC2B0;
    case 47u: goto L_08ACC2B8;
    case 48u: goto L_08ACC2C0;
    case 49u: goto L_08ACC2D0;
    case 50u: goto L_08ACC2E0;
    case 51u: goto L_08ACC2E8;
    case 52u: goto L_08ACC2EC;
    case 53u: goto L_08ACC304;
    case 54u: goto L_08ACC30C;
    case 55u: goto L_08ACC314;
    case 56u: goto L_08ACC31C;
    case 57u: goto L_08ACC328;
    case 58u: goto L_08ACC340;
    case 59u: goto L_08ACC348;
    case 60u: goto L_08ACC358;
    case 61u: goto L_08ACC38C;
    case 62u: goto L_08ACC3C0;
    case 63u: goto L_08ACC3D8;
    case 64u: goto L_08ACC3E0;
    case 65u: goto L_08ACC400;
    case 66u: goto L_08ACC410;
    case 67u: goto L_08ACC41C;
    case 68u: goto L_08ACC424;
    case 69u: goto L_08ACC42C;
    case 70u: goto L_08ACC434;
    case 71u: goto L_08ACC444;
    case 72u: goto L_08ACC450;
    case 73u: goto L_08ACC460;
    case 74u: goto L_08ACC468;
    case 75u: goto L_08ACC46C;
    case 76u: goto L_08ACC488;
    case 77u: goto L_08ACC490;
    case 78u: goto L_08ACC494;
    case 79u: goto L_08ACC4B0;
    case 80u: goto L_08ACC4C0;
    case 81u: goto L_08ACC4C8;
    case 82u: goto L_08ACC4CC;
    case 83u: goto L_08ACC4E4;
    case 84u: goto L_08ACC4F0;
    case 85u: goto L_08ACC500;
    case 86u: goto L_08ACC508;
    case 87u: goto L_08ACC50C;
    case 88u: goto L_08ACC540;
    case 89u: goto L_08ACC590;
    case 90u: goto L_08ACC59C;
    case 91u: goto L_08ACC5A4;
    case 92u: goto L_08ACC5B0;
    case 93u: goto L_08ACC5CC;
    case 94u: goto L_08ACC5E4;
    case 95u: goto L_08ACC5EC;
    case 96u: goto L_08ACC5F4;
    case 97u: goto L_08ACC600;
    case 98u: goto L_08ACC628;
    case 99u: goto L_08ACC640;
    case 100u: goto L_08ACC648;
    case 101u: goto L_08ACC650;
    case 102u: goto L_08ACC668;
    case 103u: goto L_08ACC678;
    case 104u: goto L_08ACC688;
    case 105u: goto L_08ACC698;
    case 106u: goto L_08ACC6B0;
    case 107u: goto L_08ACC6E4;
    case 108u: goto L_08ACC704;
    case 109u: goto L_08ACC714;
    case 110u: goto L_08ACC73C;
    case 111u: goto L_08ACC74C;
    case 112u: goto L_08ACC764;
    case 113u: goto L_08ACC774;
    case 114u: goto L_08ACC788;
    case 115u: goto L_08ACC790;
    case 116u: goto L_08ACC7A4;
    case 117u: goto L_08ACC7AC;
    case 118u: goto L_08ACC7BC;
    case 119u: goto L_08ACC7C4;
    case 120u: goto L_08ACC7D4;
    case 121u: goto L_08ACC7E0;
    case 122u: goto L_08ACC7E8;
    case 123u: goto L_08ACC7F0;
    case 124u: goto L_08ACC7F8;
    case 125u: goto L_08ACC808;
    case 126u: goto L_08ACC814;
    case 127u: goto L_08ACC81C;
    case 128u: goto L_08ACC824;
    case 129u: goto L_08ACC838;
    case 130u: goto L_08ACC848;
    case 131u: goto L_08ACC854;
    case 132u: goto L_08ACC868;
    case 133u: goto L_08ACC878;
    case 134u: goto L_08ACC880;
    case 135u: goto L_08ACC894;
    case 136u: goto L_08ACC89C;
    case 137u: goto L_08ACC8A4;
    case 138u: goto L_08ACC8AC;
    case 139u: goto L_08ACC8D4;
    case 140u: goto L_08ACC8E4;
    case 141u: goto L_08ACC8F0;
    case 142u: goto L_08ACC8F8;
    case 143u: goto L_08ACC900;
    case 144u: goto L_08ACC908;
    case 145u: goto L_08ACC910;
    case 146u: goto L_08ACC91C;
    case 147u: goto L_08ACC92C;
    case 148u: goto L_08ACC934;
    case 149u: goto L_08ACC940;
    case 150u: goto L_08ACC954;
    case 151u: goto L_08ACC968;
    case 152u: goto L_08ACC970;
    case 153u: goto L_08ACC974;
    case 154u: goto L_08ACC984;
    case 155u: goto L_08ACC98C;
    case 156u: goto L_08ACC9A4;
    case 157u: goto L_08ACC9AC;
    case 158u: goto L_08ACC9B8;
    case 159u: goto L_08ACC9C0;
    case 160u: goto L_08ACC9C8;
    case 161u: goto L_08ACC9D0;
    case 162u: goto L_08ACC9E4;
    case 163u: goto L_08ACC9EC;
    case 164u: goto L_08ACC9F4;
    case 165u: goto L_08ACCA08;
    case 166u: goto L_08ACCA10;
    case 167u: goto L_08ACCA24;
    case 168u: goto L_08ACCA2C;
    case 169u: goto L_08ACCA34;
    case 170u: goto L_08ACCA40;
    case 171u: goto L_08ACCA48;
    case 172u: goto L_08ACCA68;
    case 173u: goto L_08ACCA9C;
    case 174u: goto L_08ACCAB4;
    case 175u: goto L_08ACCAC0;
    case 176u: goto L_08ACCAD0;
    case 177u: goto L_08ACCAE4;
    case 178u: goto L_08ACCAEC;
    case 179u: goto L_08ACCAF0;
    case 180u: goto L_08ACCB0C;
    case 181u: goto L_08ACCB20;
    case 182u: goto L_08ACCB34;
    case 183u: goto L_08ACCB3C;
    case 184u: goto L_08ACCB40;
    case 185u: goto L_08ACCB5C;
    case 186u: goto L_08ACCB84;
    case 187u: goto L_08ACCB94;
    case 188u: goto L_08ACCBAC;
    case 189u: goto L_08ACCBBC;
    case 190u: goto L_08ACCBC8;
    case 191u: goto L_08ACCBE0;
    case 192u: goto L_08ACCBF0;
    case 193u: goto L_08ACCBF8;
    case 194u: goto L_08ACCC08;
    case 195u: goto L_08ACCC10;
    case 196u: goto L_08ACCC1C;
    case 197u: goto L_08ACCC30;
    case 198u: goto L_08ACCC38;
    case 199u: goto L_08ACCC4C;
    case 200u: goto L_08ACCC68;
    case 201u: goto L_08ACCC74;
    case 202u: goto L_08ACCC8C;
    case 203u: goto L_08ACCC9C;
    case 204u: goto L_08ACCCA4;
    case 205u: goto L_08ACCCB0;
    case 206u: goto L_08ACCCB8;
    case 207u: goto L_08ACCCCC;
    case 208u: goto L_08ACCCD4;
    case 209u: goto L_08ACCCE4;
    case 210u: goto L_08ACCCEC;
    case 211u: goto L_08ACCCFC;
    case 212u: goto L_08ACCD08;
    case 213u: goto L_08ACCD18;
    case 214u: goto L_08ACCD24;
    case 215u: goto L_08ACCD2C;
    case 216u: goto L_08ACCD34;
    case 217u: goto L_08ACCD44;
    case 218u: goto L_08ACCD50;
    case 219u: goto L_08ACCD60;
    case 220u: goto L_08ACCD6C;
    case 221u: goto L_08ACCD74;
    case 222u: goto L_08ACCD78;
    case 223u: goto L_08ACCD9C;
    case 224u: goto L_08ACCE38;
    case 225u: goto L_08ACCE4C;
    case 226u: goto L_08ACCE54;
    case 227u: goto L_08ACCE60;
    case 228u: goto L_08ACCE74;
    case 229u: goto L_08ACCE7C;
    case 230u: goto L_08ACCE8C;
    case 231u: goto L_08ACCEB0;
    case 232u: goto L_08ACCECC;
    case 233u: goto L_08ACCED4;
    case 234u: goto L_08ACCEDC;
    case 235u: goto L_08ACCEE8;
    case 236u: goto L_08ACCEFC;
    case 237u: goto L_08ACCF0C;
    case 238u: goto L_08ACCF18;
    case 239u: goto L_08ACCF28;
    case 240u: goto L_08ACCF30;
    case 241u: goto L_08ACCF4C;
    case 242u: goto L_08ACCF58;
    case 243u: goto L_08ACCF60;
    case 244u: goto L_08ACCF64;
    case 245u: goto L_08ACCF6C;
    case 246u: goto L_08ACCF7C;
    case 247u: goto L_08ACCF90;
    case 248u: goto L_08ACCF9C;
    case 249u: goto L_08ACCFA4;
    case 250u: goto L_08ACCFA8;
    case 251u: goto L_08ACCFBC;
    case 252u: goto L_08ACCFC8;
    case 253u: goto L_08ACCFD4;
    case 254u: goto L_08ACCFD8;
    case 255u: goto L_08ACCFE0;
    case 256u: goto L_08ACCFEC;
    case 257u: goto L_08ACCFF4;
    case 258u: goto L_08ACD008;
    case 259u: goto L_08ACD018;
    case 260u: goto L_08ACD02C;
    case 261u: goto L_08ACD03C;
    case 262u: goto L_08ACD050;
    case 263u: goto L_08ACD058;
    case 264u: goto L_08ACD060;
    case 265u: goto L_08ACD074;
    case 266u: goto L_08ACD08C;
    case 267u: goto L_08ACD09C;
    case 268u: goto L_08ACD0B8;
    case 269u: goto L_08ACD0C0;
    case 270u: goto L_08ACD0C8;
    case 271u: goto L_08ACD0D0;
    case 272u: goto L_08ACD0DC;
    case 273u: goto L_08ACD114;
    case 274u: goto L_08ACD120;
    case 275u: goto L_08ACD158;
    case 276u: goto L_08ACD164;
    case 277u: goto L_08ACD19C;
    case 278u: goto L_08ACD1A8;
    case 279u: goto L_08ACD1E0;
    case 280u: goto L_08ACD1EC;
    case 281u: goto L_08ACD220;
    case 282u: goto L_08ACD22C;
    case 283u: goto L_08ACD25C;
    case 284u: goto L_08ACD264;
    case 285u: goto L_08ACD274;
    case 286u: goto L_08ACD288;
    case 287u: goto L_08ACD290;
    case 288u: goto L_08ACD29C;
    case 289u: goto L_08ACD2A4;
    case 290u: goto L_08ACD2D4;
    case 291u: goto L_08ACD2DC;
    case 292u: goto L_08ACD2FC;
    case 293u: goto L_08ACD308;
    case 294u: goto L_08ACD340;
    case 295u: goto L_08ACD35C;
    case 296u: goto L_08ACD364;
    case 297u: goto L_08ACD36C;
    case 298u: goto L_08ACD374;
    case 299u: goto L_08ACD388;
    case 300u: goto L_08ACD3A4;
    case 301u: goto L_08ACD3C8;
    case 302u: goto L_08ACD3DC;
    case 303u: goto L_08ACD3E4;
    case 304u: goto L_08ACD3EC;
    case 305u: goto L_08ACD3F0;
    case 306u: goto L_08ACD3F8;
    case 307u: goto L_08ACD404;
    case 308u: goto L_08ACD41C;
    case 309u: goto L_08ACD428;
    case 310u: goto L_08ACD434;
    case 311u: goto L_08ACD440;
    case 312u: goto L_08ACD44C;
    case 313u: goto L_08ACD458;
    case 314u: goto L_08ACD464;
    case 315u: goto L_08ACD46C;
    case 316u: goto L_08ACD474;
    case 317u: goto L_08ACD488;
    case 318u: goto L_08ACD4AC;
    case 319u: goto L_08ACD4B4;
    case 320u: goto L_08ACD4BC;
    case 321u: goto L_08ACD4C8;
    case 322u: goto L_08ACD4D0;
    case 323u: goto L_08ACD4E4;
    case 324u: goto L_08ACD508;
    case 325u: goto L_08ACD51C;
    case 326u: goto L_08ACD524;
    case 327u: goto L_08ACD52C;
    case 328u: goto L_08ACD538;
    case 329u: goto L_08ACD548;
    case 330u: goto L_08ACD550;
    case 331u: goto L_08ACD55C;
    case 332u: goto L_08ACD570;
    case 333u: goto L_08ACD580;
    case 334u: goto L_08ACD58C;
    case 335u: goto L_08ACD5A8;
    case 336u: goto L_08ACD5B0;
    case 337u: goto L_08ACD5C4;
    case 338u: goto L_08ACD5D8;
    case 339u: goto L_08ACD5EC;
    case 340u: goto L_08ACD600;
    case 341u: goto L_08ACD614;
    case 342u: goto L_08ACD628;
    case 343u: goto L_08ACD634;
    case 344u: goto L_08ACD63C;
    case 345u: goto L_08ACD64C;
    case 346u: goto L_08ACD654;
    case 347u: goto L_08ACD660;
    case 348u: goto L_08ACD668;
    case 349u: goto L_08ACD678;
    case 350u: goto L_08ACD688;
    case 351u: goto L_08ACD690;
    case 352u: goto L_08ACD698;
    case 353u: goto L_08ACD6A4;
    case 354u: goto L_08ACD6A8;
    case 355u: goto L_08ACD6AC;
    case 356u: goto L_08ACD6B4;
    case 357u: goto L_08ACD6C4;
    case 358u: goto L_08ACD6D4;
    case 359u: goto L_08ACD6DC;
    case 360u: goto L_08ACD6E4;
    case 361u: goto L_08ACD6F0;
    case 362u: goto L_08ACD6F4;
    case 363u: goto L_08ACD6F8;
    case 364u: goto L_08ACD700;
    case 365u: goto L_08ACD710;
    case 366u: goto L_08ACD720;
    case 367u: goto L_08ACD728;
    case 368u: goto L_08ACD730;
    case 369u: goto L_08ACD73C;
    case 370u: goto L_08ACD740;
    case 371u: goto L_08ACD744;
    case 372u: goto L_08ACD74C;
    case 373u: goto L_08ACD75C;
    case 374u: goto L_08ACD76C;
    case 375u: goto L_08ACD774;
    case 376u: goto L_08ACD784;
    case 377u: goto L_08ACD790;
    case 378u: goto L_08ACD798;
    case 379u: goto L_08ACD7A0;
    case 380u: goto L_08ACD7A8;
    case 381u: goto L_08ACD7B0;
    case 382u: goto L_08ACD7B8;
    case 383u: goto L_08ACD7BC;
    case 384u: goto L_08ACD7C4;
    case 385u: goto L_08ACD80C;
    case 386u: goto L_08ACD818;
    case 387u: goto L_08ACD834;
    case 388u: goto L_08ACD83C;
    case 389u: goto L_08ACD844;
    case 390u: goto L_08ACD858;
    case 391u: goto L_08ACD87C;
    case 392u: goto L_08ACD880;
    case 393u: goto L_08ACD890;
    case 394u: goto L_08ACD8C0;
    case 395u: goto L_08ACD8C4;
    case 396u: goto L_08ACD8D8;
    case 397u: goto L_08ACD8E0;
    case 398u: goto L_08ACD8FC;
    case 399u: goto L_08ACD908;
    case 400u: goto L_08ACD910;
    case 401u: goto L_08ACD91C;
    case 402u: goto L_08ACD928;
    case 403u: goto L_08ACD934;
    case 404u: goto L_08ACD93C;
    case 405u: goto L_08ACD944;
    case 406u: goto L_08ACD94C;
    case 407u: goto L_08ACD950;
    case 408u: goto L_08ACD958;
    case 409u: goto L_08ACD968;
    case 410u: goto L_08ACD974;
    case 411u: goto L_08ACD97C;
    case 412u: goto L_08ACD988;
    case 413u: goto L_08ACD998;
    case 414u: goto L_08ACD9A0;
    case 415u: goto L_08ACD9C8;
    case 416u: goto L_08ACD9CC;
    case 417u: goto L_08ACD9D4;
    case 418u: goto L_08ACDA04;
    case 419u: goto L_08ACDA0C;
    case 420u: goto L_08ACDA20;
    case 421u: goto L_08ACDA2C;
    case 422u: goto L_08ACDA44;
    case 423u: goto L_08ACDA50;
    case 424u: goto L_08ACDA64;
    case 425u: goto L_08ACDA68;
    case 426u: goto L_08ACDA80;
    case 427u: goto L_08ACDA84;
    case 428u: goto L_08ACDA98;
    case 429u: goto L_08ACDABC;
    case 430u: goto L_08ACDB00;
    case 431u: goto L_08ACDB1C;
    case 432u: goto L_08ACDB24;
    case 433u: goto L_08ACDB2C;
    case 434u: goto L_08ACDB50;
    case 435u: goto L_08ACDB68;
    case 436u: goto L_08ACDB70;
    case 437u: goto L_08ACDB74;
    case 438u: goto L_08ACDB7C;
    case 439u: goto L_08ACDB88;
    case 440u: goto L_08ACDB94;
    case 441u: goto L_08ACDBA0;
    case 442u: goto L_08ACDBAC;
    case 443u: goto L_08ACDBE4;
    case 444u: goto L_08ACDBE8;
    case 445u: goto L_08ACDBFC;
    case 446u: goto L_08ACDC14;
    case 447u: goto L_08ACDC3C;
    case 448u: goto L_08ACDC54;
    case 449u: goto L_08ACDC5C;
    case 450u: goto L_08ACDC60;
    case 451u: goto L_08ACDC6C;
    case 452u: goto L_08ACDC7C;
    case 453u: goto L_08ACDC8C;
    case 454u: goto L_08ACDC9C;
    case 455u: goto L_08ACDCAC;
    case 456u: goto L_08ACDCBC;
    case 457u: goto L_08ACDCC4;
    case 458u: goto L_08ACDCCC;
    case 459u: goto L_08ACDCE0;
    case 460u: goto L_08ACDCF0;
    case 461u: goto L_08ACDD2C;
    case 462u: goto L_08ACDD30;
    case 463u: goto L_08ACDD44;
    case 464u: goto L_08ACDD48;
    case 465u: goto L_08ACDD7C;
    case 466u: goto L_08ACDDBC;
    case 467u: goto L_08ACDDD4;
    case 468u: goto L_08ACDDDC;
    case 469u: goto L_08ACDDE4;
    case 470u: goto L_08ACDDF4;
    case 471u: goto L_08ACDDFC;
    case 472u: goto L_08ACDE0C;
    case 473u: goto L_08ACDE38;
    case 474u: goto L_08ACDE48;
    case 475u: goto L_08ACDE54;
    case 476u: goto L_08ACDE70;
    case 477u: goto L_08ACDE78;
    case 478u: goto L_08ACDEA4;
    case 479u: goto L_08ACDED0;
    case 480u: goto L_08ACDEFC;
    case 481u: goto L_08ACDF28;
    case 482u: goto L_08ACDF54;
    case 483u: goto L_08ACDF80;
    case 484u: goto L_08ACDFAC;
    case 485u: goto L_08ACDFD8;
    case 486u: goto L_08ACE004;
    case 487u: goto L_08ACE030;
    case 488u: goto L_08ACE05C;
    case 489u: goto L_08ACE088;
    case 490u: goto L_08ACE0B4;
    case 491u: goto L_08ACE0E0;
    case 492u: goto L_08ACE10C;
    case 493u: goto L_08ACE138;
    case 494u: goto L_08ACE164;
    case 495u: goto L_08ACE190;
    case 496u: goto L_08ACE19C;
    case 497u: goto L_08ACE1A8;
    case 498u: goto L_08ACE1B0;
    case 499u: goto L_08ACE1B8;
    case 500u: goto L_08ACE1D0;
    case 501u: goto L_08ACE1D8;
    case 502u: goto L_08ACE200;
    case 503u: goto L_08ACE2C8;
    case 504u: goto L_08ACE2F0;
    case 505u: goto L_08ACE31C;
    case 506u: goto L_08ACE324;
    case 507u: goto L_08ACE34C;
    case 508u: goto L_08ACE354;
    case 509u: goto L_08ACE360;
    case 510u: goto L_08ACE378;
    case 511u: goto L_08ACE394;
    case 512u: goto L_08ACE3B0;
    case 513u: goto L_08ACE3B8;
    case 514u: goto L_08ACE3C8;
    case 515u: goto L_08ACE3D8;
    case 516u: goto L_08ACE3E0;
    case 517u: goto L_08ACE3F4;
    case 518u: goto L_08ACE3FC;
    case 519u: goto L_08ACE404;
    case 520u: goto L_08ACE410;
    case 521u: goto L_08ACE420;
    case 522u: goto L_08ACE434;
    case 523u: goto L_08ACE474;
    case 524u: goto L_08ACE488;
    case 525u: goto L_08ACE4A8;
    case 526u: goto L_08ACE4B0;
    case 527u: goto L_08ACE4C4;
    case 528u: goto L_08ACE4D8;
    case 529u: goto L_08ACE4EC;
    case 530u: goto L_08ACE4F4;
    case 531u: goto L_08ACE500;
    case 532u: goto L_08ACE504;
    case 533u: goto L_08ACE50C;
    case 534u: goto L_08ACE538;
    case 535u: goto L_08ACE558;
    case 536u: goto L_08ACE5D0;
    case 537u: goto L_08ACE5FC;
    case 538u: goto L_08ACE61C;
    case 539u: goto L_08ACE62C;
    case 540u: goto L_08ACE63C;
    case 541u: goto L_08ACE680;
    case 542u: goto L_08ACE690;
    case 543u: goto L_08ACE698;
    case 544u: goto L_08ACE6A4;
    case 545u: goto L_08ACE6B0;
    case 546u: goto L_08ACE6B8;
    case 547u: goto L_08ACE6C0;
    case 548u: goto L_08ACE6C8;
    case 549u: goto L_08ACE6E4;
    case 550u: goto L_08ACE6F0;
    case 551u: goto L_08ACE714;
    case 552u: goto L_08ACE728;
    case 553u: goto L_08ACE738;
    case 554u: goto L_08ACE748;
    case 555u: goto L_08ACE758;
    case 556u: goto L_08ACE768;
    case 557u: goto L_08ACE770;
    case 558u: goto L_08ACE77C;
    case 559u: goto L_08ACE784;
    case 560u: goto L_08ACE790;
    case 561u: goto L_08ACE794;
    case 562u: goto L_08ACE7B4;
    case 563u: goto L_08ACE7F0;
    case 564u: goto L_08ACE7FC;
    case 565u: goto L_08ACE80C;
    case 566u: goto L_08ACE814;
    case 567u: goto L_08ACE820;
    case 568u: goto L_08ACE828;
    case 569u: goto L_08ACE834;
    case 570u: goto L_08ACE844;
    case 571u: goto L_08ACE850;
    case 572u: goto L_08ACE85C;
    case 573u: goto L_08ACE870;
    case 574u: goto L_08ACE884;
    case 575u: goto L_08ACE890;
    case 576u: goto L_08ACE89C;
    case 577u: goto L_08ACE8A8;
    case 578u: goto L_08ACE8B4;
    case 579u: goto L_08ACE8BC;
    case 580u: goto L_08ACE8C8;
    case 581u: goto L_08ACE8D4;
    case 582u: goto L_08ACE8E0;
    case 583u: goto L_08ACE8F0;
    case 584u: goto L_08ACE904;
    case 585u: goto L_08ACE90C;
    case 586u: goto L_08ACE918;
    case 587u: goto L_08ACE924;
    case 588u: goto L_08ACE938;
    case 589u: goto L_08ACE940;
    case 590u: goto L_08ACE95C;
    case 591u: goto L_08ACE964;
    case 592u: goto L_08ACE96C;
    case 593u: goto L_08ACE97C;
    case 594u: goto L_08ACE988;
    case 595u: goto L_08ACE99C;
    case 596u: goto L_08ACE9A8;
    case 597u: goto L_08ACE9B8;
    case 598u: goto L_08ACE9E0;
    case 599u: goto L_08ACE9E8;
    case 600u: goto L_08ACE9EC;
    case 601u: goto L_08ACEA00;
    case 602u: goto L_08ACEA08;
    case 603u: goto L_08ACEA14;
    case 604u: goto L_08ACEA1C;
    case 605u: goto L_08ACEA20;
    case 606u: goto L_08ACEA2C;
    case 607u: goto L_08ACEA34;
    case 608u: goto L_08ACEA48;
    case 609u: goto L_08ACEA50;
    case 610u: goto L_08ACEA70;
    case 611u: goto L_08ACEA7C;
    case 612u: goto L_08ACEA88;
    case 613u: goto L_08ACEA98;
    case 614u: goto L_08ACEAA0;
    case 615u: goto L_08ACEAAC;
    case 616u: goto L_08ACEAB4;
    case 617u: goto L_08ACEAC4;
    case 618u: goto L_08ACEAD0;
    case 619u: goto L_08ACEADC;
    case 620u: goto L_08ACEAE4;
    case 621u: goto L_08ACEAEC;
    case 622u: goto L_08ACEAFC;
    case 623u: goto L_08ACEB0C;
    case 624u: goto L_08ACEB18;
    case 625u: goto L_08ACEB28;
    case 626u: goto L_08ACEB34;
    case 627u: goto L_08ACEB40;
    case 628u: goto L_08ACEB50;
    case 629u: goto L_08ACEB5C;
    case 630u: goto L_08ACEB64;
    case 631u: goto L_08ACEB6C;
    case 632u: goto L_08ACEB78;
    case 633u: goto L_08ACEB84;
    case 634u: goto L_08ACEB90;
    case 635u: goto L_08ACEB9C;
    case 636u: goto L_08ACEBA8;
    case 637u: goto L_08ACEBB4;
    case 638u: goto L_08ACEBBC;
    case 639u: goto L_08ACEBC4;
    case 640u: goto L_08ACEBD0;
    case 641u: goto L_08ACEBD8;
    case 642u: goto L_08ACEBE8;
    case 643u: goto L_08ACEBFC;
    case 644u: goto L_08ACEC08;
    case 645u: goto L_08ACEC18;
    case 646u: goto L_08ACEC20;
    case 647u: goto L_08ACEC24;
    case 648u: goto L_08ACEC54;
    case 649u: goto L_08ACEC74;
    case 650u: goto L_08ACEC84;
    case 651u: goto L_08ACEC8C;
    case 652u: goto L_08ACEC94;
    case 653u: goto L_08ACEC9C;
    case 654u: goto L_08ACECA8;
    case 655u: goto L_08ACECB0;
    case 656u: goto L_08ACECB8;
    case 657u: goto L_08ACECC0;
    case 658u: goto L_08ACECC8;
    case 659u: goto L_08ACECD0;
    case 660u: goto L_08ACECF0;
    case 661u: goto L_08ACED10;
    case 662u: goto L_08ACED20;
    case 663u: goto L_08ACED28;
    case 664u: goto L_08ACED30;
    case 665u: goto L_08ACED38;
    case 666u: goto L_08ACED44;
    case 667u: goto L_08ACED4C;
    case 668u: goto L_08ACED54;
    case 669u: goto L_08ACED5C;
    case 670u: goto L_08ACED64;
    case 671u: goto L_08ACED6C;
    case 672u: goto L_08ACED8C;
    case 673u: goto L_08ACEDAC;
    case 674u: goto L_08ACEDBC;
    case 675u: goto L_08ACEDC4;
    case 676u: goto L_08ACEDCC;
    case 677u: goto L_08ACEDD4;
    case 678u: goto L_08ACEDE0;
    case 679u: goto L_08ACEDE8;
    case 680u: goto L_08ACEDF0;
    case 681u: goto L_08ACEDF8;
    case 682u: goto L_08ACEE00;
    case 683u: goto L_08ACEE08;
    case 684u: goto L_08ACEE28;
    case 685u: goto L_08ACEE44;
    case 686u: goto L_08ACEE54;
    case 687u: goto L_08ACEE60;
    case 688u: goto L_08ACEE6C;
    case 689u: goto L_08ACEE80;
    case 690u: goto L_08ACEE9C;
    case 691u: goto L_08ACEEC4;
    case 692u: goto L_08ACEECC;
    case 693u: goto L_08ACEED8;
    case 694u: goto L_08ACEEE0;
    case 695u: goto L_08ACEEE8;
    case 696u: goto L_08ACEEF8;
    case 697u: goto L_08ACEF04;
    case 698u: goto L_08ACEF18;
    case 699u: goto L_08ACEF24;
    case 700u: goto L_08ACEF44;
    case 701u: goto L_08ACEF64;
    case 702u: goto L_08ACEF74;
    case 703u: goto L_08ACEF7C;
    case 704u: goto L_08ACEF80;
    case 705u: goto L_08ACEF88;
    case 706u: goto L_08ACEF90;
    case 707u: goto L_08ACEF9C;
    case 708u: goto L_08ACEFAC;
    case 709u: goto L_08ACEFB8;
    case 710u: goto L_08ACEFCC;
    case 711u: goto L_08ACEFD8;
    case 712u: goto L_08ACEFF8;
    case 713u: goto L_08ACF010;
    case 714u: goto L_08ACF020;
    case 715u: goto L_08ACF028;
    case 716u: goto L_08ACF02C;
    case 717u: goto L_08ACF044;
    case 718u: goto L_08ACF05C;
    case 719u: goto L_08ACF07C;
    case 720u: goto L_08ACF084;
    case 721u: goto L_08ACF094;
    case 722u: goto L_08ACF0AC;
    case 723u: goto L_08ACF0C8;
    case 724u: goto L_08ACF0E0;
    case 725u: goto L_08ACF0EC;
    case 726u: goto L_08ACF0FC;
    case 727u: goto L_08ACF108;
    case 728u: goto L_08ACF118;
    case 729u: goto L_08ACF124;
    case 730u: goto L_08ACF134;
    case 731u: goto L_08ACF140;
    case 732u: goto L_08ACF15C;
    case 733u: goto L_08ACF170;
    case 734u: goto L_08ACF18C;
    case 735u: goto L_08ACF1A8;
    case 736u: goto L_08ACF1B8;
    case 737u: goto L_08ACF1C8;
    case 738u: goto L_08ACF1D8;
    case 739u: goto L_08ACF1E4;
    case 740u: goto L_08ACF1F0;
    case 741u: goto L_08ACF208;
    case 742u: goto L_08ACF22C;
    case 743u: goto L_08ACF238;
    case 744u: goto L_08ACF244;
    case 745u: goto L_08ACF25C;
    case 746u: goto L_08ACF264;
    case 747u: goto L_08ACF26C;
    case 748u: goto L_08ACF27C;
    case 749u: goto L_08ACF280;
    case 750u: goto L_08ACF298;
    case 751u: goto L_08ACF2B4;
    case 752u: goto L_08ACF2C0;
    case 753u: goto L_08ACF2D4;
    case 754u: goto L_08ACF2EC;
    case 755u: goto L_08ACF310;
    case 756u: goto L_08ACF32C;
    case 757u: goto L_08ACF338;
    case 758u: goto L_08ACF344;
    case 759u: goto L_08ACF34C;
    case 760u: goto L_08ACF360;
    case 761u: goto L_08ACF37C;
    case 762u: goto L_08ACF388;
    case 763u: goto L_08ACF394;
    case 764u: goto L_08ACF39C;
    case 765u: goto L_08ACF3B0;
    case 766u: goto L_08ACF3D8;
    case 767u: goto L_08ACF3F4;
    case 768u: goto L_08ACF400;
    case 769u: goto L_08ACF414;
    case 770u: goto L_08ACF42C;
    case 771u: goto L_08ACF440;
    case 772u: goto L_08ACF44C;
    case 773u: goto L_08ACF45C;
    case 774u: goto L_08ACF468;
    case 775u: goto L_08ACF474;
    case 776u: goto L_08ACF494;
    case 777u: goto L_08ACF4B0;
    case 778u: goto L_08ACF4BC;
    case 779u: goto L_08ACF4C8;
    case 780u: goto L_08ACF4D0;
    case 781u: goto L_08ACF4E4;
    case 782u: goto L_08ACF508;
    case 783u: goto L_08ACF514;
    case 784u: goto L_08ACF520;
    case 785u: goto L_08ACF53C;
    case 786u: goto L_08ACF548;
    case 787u: goto L_08ACF558;
    case 788u: goto L_08ACF564;
    case 789u: goto L_08ACF56C;
    case 790u: goto L_08ACF574;
    case 791u: goto L_08ACF580;
    case 792u: goto L_08ACF58C;
    case 793u: goto L_08ACF594;
    case 794u: goto L_08ACF598;
    case 795u: goto L_08ACF5B0;
    case 796u: goto L_08ACF5D4;
    case 797u: goto L_08ACF5E0;
    case 798u: goto L_08ACF5EC;
    case 799u: goto L_08ACF608;
    case 800u: goto L_08ACF614;
    case 801u: goto L_08ACF624;
    case 802u: goto L_08ACF630;
    case 803u: goto L_08ACF638;
    case 804u: goto L_08ACF640;
    case 805u: goto L_08ACF64C;
    case 806u: goto L_08ACF658;
    case 807u: goto L_08ACF660;
    case 808u: goto L_08ACF664;
    case 809u: goto L_08ACF67C;
    case 810u: goto L_08ACF6A4;
    case 811u: goto L_08ACF6B4;
    case 812u: goto L_08ACF6BC;
    case 813u: goto L_08ACF6C4;
    case 814u: goto L_08ACF6D0;
    case 815u: goto L_08ACF6E0;
    case 816u: goto L_08ACF6E8;
    case 817u: goto L_08ACF6F0;
    case 818u: goto L_08ACF6FC;
    case 819u: goto L_08ACF708;
    case 820u: goto L_08ACF718;
    case 821u: goto L_08ACF720;
    case 822u: goto L_08ACF72C;
    case 823u: goto L_08ACF73C;
    case 824u: goto L_08ACF744;
    case 825u: goto L_08ACF74C;
    case 826u: goto L_08ACF754;
    case 827u: goto L_08ACF75C;
    case 828u: goto L_08ACF76C;
    case 829u: goto L_08ACF774;
    case 830u: goto L_08ACF77C;
    case 831u: goto L_08ACF788;
    case 832u: goto L_08ACF790;
    case 833u: goto L_08ACF7A0;
    case 834u: goto L_08ACF7A8;
    case 835u: goto L_08ACF7B0;
    case 836u: goto L_08ACF7C0;
    case 837u: goto L_08ACF7C4;
    case 838u: goto L_08ACF7E0;
    case 839u: goto L_08ACF804;
    case 840u: goto L_08ACF810;
    case 841u: goto L_08ACF81C;
    case 842u: goto L_08ACF82C;
    case 843u: goto L_08ACF834;
    case 844u: goto L_08ACF83C;
    case 845u: goto L_08ACF84C;
    case 846u: goto L_08ACF850;
    case 847u: goto L_08ACF868;
    case 848u: goto L_08ACF88C;
    case 849u: goto L_08ACF898;
    case 850u: goto L_08ACF8A4;
    case 851u: goto L_08ACF8C0;
    case 852u: goto L_08ACF8CC;
    case 853u: goto L_08ACF8DC;
    case 854u: goto L_08ACF8E8;
    case 855u: goto L_08ACF8F0;
    case 856u: goto L_08ACF8F8;
    case 857u: goto L_08ACF904;
    case 858u: goto L_08ACF910;
    case 859u: goto L_08ACF918;
    case 860u: goto L_08ACF91C;
    case 861u: goto L_08ACF934;
    case 862u: goto L_08ACF958;
    case 863u: goto L_08ACF964;
    case 864u: goto L_08ACF970;
    case 865u: goto L_08ACF978;
    case 866u: goto L_08ACF984;
    case 867u: goto L_08ACF990;
    case 868u: goto L_08ACF998;
    case 869u: goto L_08ACF9B0;
    case 870u: goto L_08ACF9B4;
    case 871u: goto L_08ACF9CC;
    case 872u: goto L_08ACF9E4;
    case 873u: goto L_08ACFA00;
    case 874u: goto L_08ACFA10;
    case 875u: goto L_08ACFA34;
    case 876u: goto L_08ACFA44;
    case 877u: goto L_08ACFA68;
    case 878u: goto L_08ACFA78;
    case 879u: goto L_08ACFA9C;
    case 880u: goto L_08ACFAA8;
    case 881u: goto L_08ACFAB4;
    case 882u: goto L_08ACFAC8;
    case 883u: goto L_08ACFADC;
    case 884u: goto L_08ACFAE0;
    case 885u: goto L_08ACFAF8;
    case 886u: goto L_08ACFB18;
    case 887u: goto L_08ACFB28;
    case 888u: goto L_08ACFB48;
    case 889u: goto L_08ACFB58;
    case 890u: goto L_08ACFB74;
    case 891u: goto L_08ACFB80;
    case 892u: goto L_08ACFB94;
    case 893u: goto L_08ACFBC0;
    case 894u: goto L_08ACFBD4;
    case 895u: goto L_08ACFBFC;
    case 896u: goto L_08ACFC08;
    case 897u: goto L_08ACFC10;
    case 898u: goto L_08ACFC2C;
    case 899u: goto L_08ACFC58;
    case 900u: goto L_08ACFC6C;
    case 901u: goto L_08ACFC78;
    case 902u: goto L_08ACFC94;
    case 903u: goto L_08ACFCC4;
    case 904u: goto L_08ACFCCC;
    case 905u: goto L_08ACFCD4;
    case 906u: goto L_08ACFCDC;
    case 907u: goto L_08ACFCFC;
    case 908u: goto L_08ACFD24;
    case 909u: goto L_08ACFD34;
    case 910u: goto L_08ACFD38;
    case 911u: goto L_08ACFD54;
    case 912u: goto L_08ACFD6C;
    case 913u: goto L_08ACFD90;
    case 914u: goto L_08ACFD9C;
    case 915u: goto L_08ACFDA8;
    case 916u: goto L_08ACFDBC;
    case 917u: goto L_08ACFDC4;
    case 918u: goto L_08ACFDCC;
    case 919u: goto L_08ACFDDC;
    case 920u: goto L_08ACFDE0;
    case 921u: goto L_08ACFDF8;
    case 922u: goto L_08ACFE1C;
    case 923u: goto L_08ACFE28;
    case 924u: goto L_08ACFE34;
    case 925u: goto L_08ACFE48;
    case 926u: goto L_08ACFE54;
    case 927u: goto L_08ACFE58;
    case 928u: goto L_08ACFE70;
    case 929u: goto L_08ACFE98;
    case 930u: goto L_08ACFEB0;
    case 931u: goto L_08ACFEB4;
    case 932u: goto L_08ACFEB8;
    case 933u: goto L_08ACFEC0;
    case 934u: goto L_08ACFECC;
    case 935u: goto L_08ACFF0C;
    case 936u: goto L_08ACFF18;
    case 937u: goto L_08ACFF28;
    case 938u: goto L_08ACFF30;
    case 939u: goto L_08ACFF38;
    case 940u: goto L_08ACFF3C;
    case 941u: goto L_08ACFF50;
    case 942u: goto L_08ACFF78;
    case 943u: goto L_08ACFF90;
    case 944u: goto L_08ACFF94;
    case 945u: goto L_08ACFF98;
    case 946u: goto L_08ACFFA0;
    case 947u: goto L_08ACFFA8;
    case 948u: goto L_08ACFFC4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08ACC004:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[22] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08ACC024;
    }
    goto L_08ACC014;
L_08ACC014:
    ctx.gpr[31] = (0x08ACC01Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 575u, 0x08A4BE44u>(ctx, &aot_mem) && ctx.pc == 0x08ACC01Cu) goto L_08ACC01C;
    return;
L_08ACC01C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08ACC024;
L_08ACC024:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ACC0A4;
      }
      goto L_08ACC034;
    }
L_08ACC034:
    ctx.gpr[20] = (ctx.gpr[18] + ctx.gpr[23]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACC084;
      }
      goto L_08ACC054;
    }
L_08ACC054:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[22] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08ACC074;
    }
    goto L_08ACC064;
L_08ACC064:
    ctx.gpr[31] = (0x08ACC06Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 575u, 0x08A4BE44u>(ctx, &aot_mem) && ctx.pc == 0x08ACC06Cu) goto L_08ACC06C;
    return;
L_08ACC06C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08ACC074;
L_08ACC074:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ACC0A4;
      }
      goto L_08ACC084;
    }
L_08ACC084:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08ACC090u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 517u, 0x08ACB0B8u>(ctx, &aot_mem) && ctx.pc == 0x08ACC090u) goto L_08ACC090;
    return;
L_08ACC090:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC09Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 668u, 0x08ACBA20u>(ctx, &aot_mem) && ctx.pc == 0x08ACC09Cu) goto L_08ACC09C;
    return;
L_08ACC09C:
    ctx.gpr[31] = (0x08ACC0A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 588u, 0x08A4BF48u>(ctx, &aot_mem) && ctx.pc == 0x08ACC0A4u) goto L_08ACC0A4;
    return;
L_08ACC0A4:
    ctx.gpr[4] = (ctx.gpr[23] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 751u, 0x08ACBFF4u>(ctx, &aot_mem); return;
      }
      goto L_08ACC0B0;
    }
L_08ACC0B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC114;
      }
      goto L_08ACC0B8;
    }
L_08ACC0B8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACC0C4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC0C4u) goto L_08ACC0C4;
    return;
L_08ACC0C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACC0D4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 676u, 0x08ACBAB8u>(ctx, &aot_mem) && ctx.pc == 0x08ACC0D4u) goto L_08ACC0D4;
    return;
L_08ACC0D4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACC0E4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 45u, 0x0890C3ECu>(ctx, &aot_mem) && ctx.pc == 0x08ACC0E4u) goto L_08ACC0E4;
    return;
L_08ACC0E4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACC0F0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 594u, 0x0890B730u>(ctx, &aot_mem) && ctx.pc == 0x08ACC0F0u) goto L_08ACC0F0;
    return;
L_08ACC0F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC108;
      }
      goto L_08ACC0F8;
    }
L_08ACC0F8:
    ctx.gpr[31] = (0x08ACC100u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 588u, 0x08A4BF48u>(ctx, &aot_mem) && ctx.pc == 0x08ACC100u) goto L_08ACC100;
    return;
L_08ACC100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC114;
      }
      goto L_08ACC108;
    }
L_08ACC108:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACC114u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACC114u) goto L_08ACC114;
    return;
L_08ACC114:
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
L_08ACC144:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1376));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1332), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1336), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1340), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1344), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1348), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1352), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1356), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1360), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1364), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1368), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACC180u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 423u, 0x08A4B554u>(ctx, &aot_mem) && ctx.pc == 0x08ACC180u) goto L_08ACC180;
    return;
L_08ACC180:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08ACC194u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 423u, 0x08A4B554u>(ctx, &aot_mem) && ctx.pc == 0x08ACC194u) goto L_08ACC194;
    return;
L_08ACC194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ACC1BC;
      }
      goto L_08ACC1B0;
    }
L_08ACC1B0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ACC1BC;
L_08ACC1BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC1C8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 446u, 0x08A4B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08ACC1C8u) goto L_08ACC1C8;
    return;
L_08ACC1C8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[5] = (0u | 94u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ACC1E8;
      }
      goto L_08ACC1E0;
    }
L_08ACC1E0:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (0u | 1u);
    goto L_08ACC1E8;
L_08ACC1E8:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08ACC1F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACC1F4u) goto L_08ACC1F4;
    return;
L_08ACC1F4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_08ACC22C;
      }
      goto L_08ACC200;
    }
L_08ACC200:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC20Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 594u, 0x0890B730u>(ctx, &aot_mem) && ctx.pc == 0x08ACC20Cu) goto L_08ACC20C;
    return;
L_08ACC20C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08ACC23C;
      }
      goto L_08ACC214;
    }
L_08ACC214:
    ctx.gpr[31] = (0x08ACC21Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08ACC21Cu) goto L_08ACC21C;
    return;
L_08ACC21C:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACC23C;
      }
      goto L_08ACC228;
    }
L_08ACC228:
    ctx.gpr[6] = (2227u << 16u);
    goto L_08ACC22C;
L_08ACC22C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08ACC23Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-15020));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 347u, 0x08A4B014u>(ctx, &aot_mem) && ctx.pc == 0x08ACC23Cu) goto L_08ACC23C;
    return;
L_08ACC23C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1328), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC24Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 2u, 0x08A4C020u>(ctx, &aot_mem) && ctx.pc == 0x08ACC24Cu) goto L_08ACC24C;
    return;
L_08ACC24C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08ACC328;
      }
      goto L_08ACC26C;
    }
L_08ACC26C:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1328));
    goto L_08ACC270;
L_08ACC270:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC284u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_08ACC714;
L_08ACC284:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC2A8;
      }
      goto L_08ACC290;
    }
L_08ACC290:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC2A8u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 745u, 0x08ACBF60u>(ctx, &aot_mem) && ctx.pc == 0x08ACC2A8u) goto L_08ACC2A8;
    return;
L_08ACC2A8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACC2C0;
      }
      goto L_08ACC2B0;
    }
L_08ACC2B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC2C0;
      }
      goto L_08ACC2B8;
    }
L_08ACC2B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08ACC30C;
      }
      goto L_08ACC2C0;
    }
L_08ACC2C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC304;
      }
      goto L_08ACC2D0;
    }
L_08ACC2D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[21] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08ACC2EC;
    }
    goto L_08ACC2E0;
L_08ACC2E0:
    ctx.gpr[31] = (0x08ACC2E8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 575u, 0x08A4BE44u>(ctx, &aot_mem) && ctx.pc == 0x08ACC2E8u) goto L_08ACC2E8;
    return;
L_08ACC2E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_08ACC2EC;
L_08ACC2EC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ACC30C;
      }
      goto L_08ACC304;
    }
L_08ACC304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC328;
      }
      goto L_08ACC30C;
    }
L_08ACC30C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC31C;
      }
      goto L_08ACC314;
    }
L_08ACC314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC328;
      }
      goto L_08ACC31C;
    }
L_08ACC31C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC270;
      }
      goto L_08ACC328;
    }
L_08ACC328:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ACC340u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 579u, 0x08A4BE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC340u) goto L_08ACC340;
    return;
L_08ACC340:
    ctx.gpr[31] = (0x08ACC348u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 585u, 0x08A4BF10u>(ctx, &aot_mem) && ctx.pc == 0x08ACC348u) goto L_08ACC348;
    return;
L_08ACC348:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC358u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC358u) goto L_08ACC358;
    return;
L_08ACC358:
    ctx.gpr[2] = (0u | 2u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1344)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1348)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1356)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1368)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1376));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACC38C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACC3C0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 423u, 0x08A4B554u>(ctx, &aot_mem) && ctx.pc == 0x08ACC3C0u) goto L_08ACC3C0;
    return;
L_08ACC3C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(1036));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 34u);
      if (branch_taken) {
          goto L_08ACC3E0;
      }
      goto L_08ACC3D8;
    }
L_08ACC3D8:
    ctx.gpr[31] = (0x08ACC3E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 575u, 0x08A4BE44u>(ctx, &aot_mem) && ctx.pc == 0x08ACC3E0u) goto L_08ACC3E0;
    return;
L_08ACC3E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ACC4F0;
      }
      goto L_08ACC400;
    }
L_08ACC400:
    ctx.gpr[22] = (2227u << 16u);
    ctx.gpr[20] = (0u | 92u);
    ctx.gpr[21] = (0u | 10u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-14992));
    goto L_08ACC410;
L_08ACC410:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08ACC450;
      }
      goto L_08ACC41C;
    }
L_08ACC41C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08ACC450;
      }
      goto L_08ACC424;
    }
L_08ACC424:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08ACC450;
      }
      goto L_08ACC42C;
    }
L_08ACC42C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC4B0;
      }
      goto L_08ACC434;
    }
L_08ACC434:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08ACC444u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 579u, 0x08A4BE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC444u) goto L_08ACC444;
    return;
L_08ACC444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ACC4E4;
      }
      goto L_08ACC450;
    }
L_08ACC450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08ACC46C;
    }
    goto L_08ACC460;
L_08ACC460:
    ctx.gpr[31] = (0x08ACC468u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 575u, 0x08A4BE44u>(ctx, &aot_mem) && ctx.pc == 0x08ACC468u) goto L_08ACC468;
    return;
L_08ACC468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08ACC46C;
L_08ACC46C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08ACC494;
    }
    goto L_08ACC488;
L_08ACC488:
    ctx.gpr[31] = (0x08ACC490u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 575u, 0x08A4BE44u>(ctx, &aot_mem) && ctx.pc == 0x08ACC490u) goto L_08ACC490;
    return;
L_08ACC490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08ACC494;
L_08ACC494:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ACC4E4;
      }
      goto L_08ACC4B0;
    }
L_08ACC4B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08ACC4CC;
    }
    goto L_08ACC4C0;
L_08ACC4C0:
    ctx.gpr[31] = (0x08ACC4C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 575u, 0x08A4BE44u>(ctx, &aot_mem) && ctx.pc == 0x08ACC4C8u) goto L_08ACC4C8;
    return;
L_08ACC4C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08ACC4CC;
L_08ACC4CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_08ACC4E4;
L_08ACC4E4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ACC410;
      }
      goto L_08ACC4F0;
    }
L_08ACC4F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08ACC50C;
    }
    goto L_08ACC500;
L_08ACC500:
    ctx.gpr[31] = (0x08ACC508u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 575u, 0x08A4BE44u>(ctx, &aot_mem) && ctx.pc == 0x08ACC508u) goto L_08ACC508;
    return;
L_08ACC508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08ACC50C;
L_08ACC50C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACC540:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[21] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-14984));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    goto L_08ACC590;
L_08ACC590:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08ACC59Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 398u, 0x08AED634u>(ctx, &aot_mem) && ctx.pc == 0x08ACC59Cu) goto L_08ACC59C;
    return;
L_08ACC59C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC5B0;
      }
      goto L_08ACC5A4;
    }
L_08ACC5A4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08ACC590;
      }
      goto L_08ACC5B0;
    }
L_08ACC5B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC5E4;
      }
      goto L_08ACC5CC;
    }
L_08ACC5CC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    goto L_08ACC5E4;
L_08ACC5E4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC5F4;
      }
      goto L_08ACC5EC;
    }
L_08ACC5EC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    goto L_08ACC5F4;
L_08ACC5F4:
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACC650;
      }
      goto L_08ACC600;
    }
L_08ACC600:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[19] = (ctx.gpr[19] & 4u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC640;
      }
      goto L_08ACC628;
    }
L_08ACC628:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[19] = (ctx.gpr[19] & 4u);
    goto L_08ACC640;
L_08ACC640:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC650;
      }
      goto L_08ACC648;
    }
L_08ACC648:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    goto L_08ACC650;
L_08ACC650:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[20] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08ACC678;
      }
      goto L_08ACC668;
    }
L_08ACC668:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC678u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14976));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08ACC678u) goto L_08ACC678;
    return;
L_08ACC678:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC698;
      }
      goto L_08ACC688;
    }
L_08ACC688:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC698u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14928));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08ACC698u) goto L_08ACC698;
    return;
L_08ACC698:
    ctx.gpr[4] = (0u | 37u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08ACC6B0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08ACC6B0u) goto L_08ACC6B0;
    return;
L_08ACC6B0:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_08ACC6E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14900));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACC704u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-29952));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 474u, 0x08A4B854u>(ctx, &aot_mem) && ctx.pc == 0x08ACC704u) goto L_08ACC704;
    return;
L_08ACC704:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACC714:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_08ACC73C;
L_08ACC73C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(42) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC934;
      }
      goto L_08ACC74C;
    }
L_08ACC74C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14688)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACC764:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACC790;
      }
      goto L_08ACC774;
    }
L_08ACC774:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC788u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 635u, 0x08ACB7ACu>(ctx, &aot_mem) && ctx.pc == 0x08ACC788u) goto L_08ACC788;
    return;
L_08ACC788:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCA48;
      }
      goto L_08ACC790;
    }
L_08ACC790:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACC7A4u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 635u, 0x08ACB7ACu>(ctx, &aot_mem) && ctx.pc == 0x08ACC7A4u) goto L_08ACC7A4;
    return;
L_08ACC7A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCA48;
      }
      goto L_08ACC7AC;
    }
L_08ACC7AC:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC7BCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 642u, 0x08ACB85Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC7BCu) goto L_08ACC7BC;
    return;
L_08ACC7BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCA48;
      }
      goto L_08ACC7C4;
    }
L_08ACC7C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 102u);
      if (branch_taken) {
          goto L_08ACC7E8;
      }
      goto L_08ACC7D4;
    }
L_08ACC7D4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 98 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC8AC;
      }
      goto L_08ACC7E0;
    }
L_08ACC7E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC7F8;
      }
      goto L_08ACC7E8;
    }
L_08ACC7E8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACC824;
      }
      goto L_08ACC7F0;
    }
L_08ACC7F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC8AC;
      }
      goto L_08ACC7F8;
    }
L_08ACC7F8:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC808u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 596u, 0x08ACB55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC808u) goto L_08ACC808;
    return;
L_08ACC808:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC81C;
      }
      goto L_08ACC814;
    }
L_08ACC814:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ACC73C;
      }
      goto L_08ACC81C;
    }
L_08ACC81C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACCA48;
      }
      goto L_08ACC824;
    }
L_08ACC824:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 91u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACC848;
      }
      goto L_08ACC838;
    }
L_08ACC838:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08ACC848u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14892));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08ACC848u) goto L_08ACC848;
    return;
L_08ACC848:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC854u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 530u, 0x08ACB178u>(ctx, &aot_mem) && ctx.pc == 0x08ACC854u) goto L_08ACC854;
    return;
L_08ACC854:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[17] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-1))))));
        goto L_08ACC868;
    }
    goto L_08ACC868;
L_08ACC868:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08ACC878u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 568u, 0x08ACB3C0u>(ctx, &aot_mem) && ctx.pc == 0x08ACC878u) goto L_08ACC878;
    return;
L_08ACC878:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC8A4;
      }
      goto L_08ACC880;
    }
L_08ACC880:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08ACC894u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 568u, 0x08ACB3C0u>(ctx, &aot_mem) && ctx.pc == 0x08ACC894u) goto L_08ACC894;
    return;
L_08ACC894:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC8A4;
      }
      goto L_08ACC89C;
    }
L_08ACC89C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ACC73C;
      }
      goto L_08ACC8A4;
    }
L_08ACC8A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACCA48;
      }
      goto L_08ACC8AC;
    }
L_08ACC8AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC900;
      }
      goto L_08ACC8D4;
    }
L_08ACC8D4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC8E4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 647u, 0x08ACB8D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC8E4u) goto L_08ACC8E4;
    return;
L_08ACC8E4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC8F8;
      }
      goto L_08ACC8F0;
    }
L_08ACC8F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ACC73C;
      }
      goto L_08ACC8F8;
    }
L_08ACC8F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACCA48;
      }
      goto L_08ACC900;
    }
L_08ACC900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC934;
      }
      goto L_08ACC908;
    }
L_08ACC908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08ACCA48;
      }
      goto L_08ACC910;
    }
L_08ACC910:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC934;
      }
      goto L_08ACC91C;
    }
L_08ACC91C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 0u);
    if (ctx.gpr[17] == ctx.gpr[4]) {
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
        goto L_08ACC92C;
    }
    goto L_08ACC92C;
L_08ACC92C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCA48;
      }
      goto L_08ACC934;
    }
L_08ACC934:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACC940u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 530u, 0x08ACB178u>(ctx, &aot_mem) && ctx.pc == 0x08ACC940u) goto L_08ACC940;
    return;
L_08ACC940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACC974;
      }
      goto L_08ACC954;
    }
L_08ACC954:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08ACC968u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 586u, 0x08ACB4DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACC968u) goto L_08ACC968;
    return;
L_08ACC968:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC974;
      }
      goto L_08ACC970;
    }
L_08ACC970:
    ctx.gpr[20] = (0u | 1u);
    goto L_08ACC974;
L_08ACC974:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 42 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 64 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACCA2C;
      }
      goto L_08ACC984;
    }
L_08ACC984:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-42));
      if (branch_taken) {
          goto L_08ACCA2C;
      }
      goto L_08ACC98C;
    }
L_08ACC98C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14520)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACC9A4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACC9C0;
      }
      goto L_08ACC9AC;
    }
L_08ACC9AC:
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08ACC9B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ACC714;
L_08ACC9B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC9C8;
      }
      goto L_08ACC9C0;
    }
L_08ACC9C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACC73C;
      }
      goto L_08ACC9C8;
    }
L_08ACC9C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCA48;
      }
      goto L_08ACC9D0;
    }
L_08ACC9D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACC9E4u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 612u, 0x08ACB62Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC9E4u) goto L_08ACC9E4;
    return;
L_08ACC9E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCA48;
      }
      goto L_08ACC9EC;
    }
L_08ACC9EC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACCA08;
      }
      goto L_08ACC9F4;
    }
L_08ACC9F4:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACCA08u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 612u, 0x08ACB62Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCA08u) goto L_08ACCA08;
    return;
L_08ACCA08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCA48;
      }
      goto L_08ACCA10;
    }
L_08ACCA10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACCA24u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 624u, 0x08ACB6F8u>(ctx, &aot_mem) && ctx.pc == 0x08ACCA24u) goto L_08ACCA24;
    return;
L_08ACCA24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCA48;
      }
      goto L_08ACCA2C;
    }
L_08ACCA2C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCA40;
      }
      goto L_08ACCA34;
    }
L_08ACCA34:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ACC73C;
      }
      goto L_08ACCA40;
    }
L_08ACCA40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACCA48;
      }
      goto L_08ACCA48;
    }
L_08ACCA48:
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
L_08ACCA68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1632));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1596), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1608), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1600), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1604), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1612), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1616), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1620), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACCA9Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 423u, 0x08A4B554u>(ctx, &aot_mem) && ctx.pc == 0x08ACCA9Cu) goto L_08ACCA9C;
    return;
L_08ACCA9C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[17] = (ctx.gpr[18] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08ACCAB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 2u, 0x08A4C020u>(ctx, &aot_mem) && ctx.pc == 0x08ACCAB4u) goto L_08ACCAB4;
    return;
L_08ACCAB4:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCD6C;
      }
      goto L_08ACCAC0;
    }
L_08ACCAC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACCB0C;
      }
      goto L_08ACCAD0;
    }
L_08ACCAD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08ACCAF0;
      }
      goto L_08ACCAE4;
    }
L_08ACCAE4:
    ctx.gpr[31] = (0x08ACCAECu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 575u, 0x08A4BE44u>(ctx, &aot_mem) && ctx.pc == 0x08ACCAECu) goto L_08ACCAEC;
    return;
L_08ACCAEC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08ACCAF0;
L_08ACCAF0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ACCD60;
      }
      goto L_08ACCB0C;
    }
L_08ACCB0C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 37u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1588), 0u);
        goto L_08ACCB5C;
    }
    goto L_08ACCB20;
L_08ACCB20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08ACCB40;
      }
      goto L_08ACCB34;
    }
L_08ACCB34:
    ctx.gpr[31] = (0x08ACCB3Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 575u, 0x08A4BE44u>(ctx, &aot_mem) && ctx.pc == 0x08ACCB3Cu) goto L_08ACCB3C;
    return;
L_08ACCB3C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08ACCB40;
L_08ACCB40:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ACCD60;
      }
      goto L_08ACCB5C;
    }
L_08ACCB5C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCB94;
      }
      goto L_08ACCB84;
    }
L_08ACCB84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACCBF8;
      }
      goto L_08ACCB94;
    }
L_08ACCB94:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1588));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACCBACu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08ACC540;
L_08ACCBAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 69 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACCBE0;
      }
      goto L_08ACCBBC;
    }
L_08ACCBBC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 121 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-69));
      if (branch_taken) {
          goto L_08ACCBE0;
      }
      goto L_08ACCBC8;
    }
L_08ACCBC8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14432)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACCBE0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACCBF0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14820));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08ACCBF0u) goto L_08ACCBF0;
    return;
L_08ACCBF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCD78;
      }
      goto L_08ACCBF8;
    }
L_08ACCBF8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACCC08u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14856));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x08ACCC08u) goto L_08ACCC08;
    return;
L_08ACCC08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCD78;
      }
      goto L_08ACCC10;
    }
L_08ACCC10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACCC1Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08ACCC1Cu) goto L_08ACCC1C;
    return;
L_08ACCC1C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1076));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[31] = (0x08ACCC30u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08ACCC30u) goto L_08ACCC30;
    return;
L_08ACCC30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCD44;
      }
      goto L_08ACCC38;
    }
L_08ACCC38:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1076));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACCC4Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08ACCC4Cu) goto L_08ACCC4C;
    return;
L_08ACCC4C:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08ACCC74;
      }
      goto L_08ACCC68;
    }
L_08ACCC68:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ACCC8C;
      }
      goto L_08ACCC74;
    }
L_08ACCC74:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08ACCC8C;
L_08ACCC8C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ACCC9Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08ACCC9Cu) goto L_08ACCC9C;
    return;
L_08ACCC9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCD44;
      }
      goto L_08ACCCA4;
    }
L_08ACCCA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACCCB0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08ACCCB0u) goto L_08ACCCB0;
    return;
L_08ACCCB0:
    ctx.gpr[31] = (0x08ACCCB8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08ACCCB8u) goto L_08ACCCB8;
    return;
L_08ACCCB8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1076));
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[31] = (0x08ACCCCCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08ACCCCCu) goto L_08ACCCCC;
    return;
L_08ACCCCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCD44;
      }
      goto L_08ACCCD4;
    }
L_08ACCCD4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACCCE4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08ACC38C;
L_08ACCCE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCD60;
      }
      goto L_08ACCCEC;
    }
L_08ACCCEC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1592));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACCCFCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 423u, 0x08A4B554u>(ctx, &aot_mem) && ctx.pc == 0x08ACCCFCu) goto L_08ACCCFC;
    return;
L_08ACCCFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1588)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ACCD34;
      }
      goto L_08ACCD08;
    }
L_08ACCD08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1592)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCD34;
      }
      goto L_08ACCD18;
    }
L_08ACCD18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACCD24u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACCD24u) goto L_08ACCD24;
    return;
L_08ACCD24:
    ctx.gpr[31] = (0x08ACCD2Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 588u, 0x08A4BF48u>(ctx, &aot_mem) && ctx.pc == 0x08ACCD2Cu) goto L_08ACCD2C;
    return;
L_08ACCD2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCD60;
      }
      goto L_08ACCD34;
    }
L_08ACCD34:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1076));
    ctx.gpr[31] = (0x08ACCD44u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08ACCD44u) goto L_08ACCD44;
    return;
L_08ACCD44:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1076));
    ctx.gpr[31] = (0x08ACCD50u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08ACCD50u) goto L_08ACCD50;
    return;
L_08ACCD50:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ACCD60u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 579u, 0x08A4BE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCD60u) goto L_08ACCD60;
    return;
L_08ACCD60:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCAC0;
      }
      goto L_08ACCD6C;
    }
L_08ACCD6C:
    ctx.gpr[31] = (0x08ACCD74u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 585u, 0x08A4BF10u>(ctx, &aot_mem) && ctx.pc == 0x08ACCD74u) goto L_08ACCD74;
    return;
L_08ACCD74:
    ctx.gpr[2] = (0u | 1u);
    goto L_08ACCD78;
L_08ACCD78:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1596)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1600)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1604)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1608)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1612)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1616)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1620)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1632));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACCD9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08ACCE38;
L_08ACCE38:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(816), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ACCE38;
      }
      goto L_08ACCE4C;
    }
L_08ACCE4C:
    ctx.gpr[31] = (0x08ACCE54u);
    // nop
    goto L_08ACD8C0;
L_08ACCE54:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACCE60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACCE74u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08ACD7C4;
L_08ACCE74:
    ctx.gpr[31] = (0x08ACCE7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ACCD9C;
L_08ACCE7C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACCE8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACCED4;
      }
      goto L_08ACCEB0;
    }
L_08ACCEB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(20000));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCEDC;
      }
      goto L_08ACCECC;
    }
L_08ACCECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCEE8;
      }
      goto L_08ACCED4;
    }
L_08ACCED4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD074;
      }
      goto L_08ACCEDC;
    }
L_08ACCEDC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    goto L_08ACCEE8;
L_08ACCEE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD074;
      }
      goto L_08ACCEFC;
    }
L_08ACCEFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF60;
      }
      goto L_08ACCF0C;
    }
L_08ACCF0C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08ACCF18u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCF18u) goto L_08ACCF18;
    return;
L_08ACCF18:
    ctx.gpr[5] = (16784u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACCF28u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08ACDABC;
L_08ACCF28:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF58;
      }
      goto L_08ACCF30;
    }
L_08ACCF30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 0 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 0u);
        goto L_08ACCF4C;
    }
    goto L_08ACCF4C;
L_08ACCF4C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[31] = (0x08ACCF58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ACD08C;
L_08ACCF58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF64;
      }
      goto L_08ACCF60;
    }
L_08ACCF60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08ACCF64;
L_08ACCF64:
    ctx.gpr[31] = (0x08ACCF6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ACD9D4;
L_08ACCF6C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_08ACCF7C;
L_08ACCF7C:
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCFA4;
      }
      goto L_08ACCF90;
    }
L_08ACCF90:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08ACCFA8;
      }
      goto L_08ACCF9C;
    }
L_08ACCF9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACCFA8;
      }
      goto L_08ACCFA4;
    }
L_08ACCFA4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ACCFA8;
L_08ACCFA8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF7C;
      }
      goto L_08ACCFBC;
    }
L_08ACCFBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACCFD8;
      }
      goto L_08ACCFC8;
    }
L_08ACCFC8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08ACCFD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14224));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACCFD4u) goto L_08ACCFD4;
    return;
L_08ACCFD4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08ACCFD8;
L_08ACCFD8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD074;
      }
      goto L_08ACCFE0;
    }
L_08ACCFE0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08ACCFECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14184));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACCFECu) goto L_08ACCFEC;
    return;
L_08ACCFEC:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08ACCFF4;
L_08ACCFF4:
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD060;
      }
      goto L_08ACD008;
    }
L_08ACD008:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD050;
      }
      goto L_08ACD018;
    }
L_08ACD018:
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[16] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD03C;
      }
      goto L_08ACD02C;
    }
L_08ACD02C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(816), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(816), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD050;
      }
      goto L_08ACD03C;
    }
L_08ACD03C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD018;
      }
      goto L_08ACD050;
    }
L_08ACD050:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD060;
      }
      goto L_08ACD058;
    }
L_08ACD058:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD074;
      }
      goto L_08ACD060;
    }
L_08ACD060:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCFF4;
      }
      goto L_08ACD074;
    }
L_08ACD074:
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
L_08ACD08C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD0C0;
      }
      goto L_08ACD09C;
    }
L_08ACD09C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-29792)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08ACD0C8;
      }
      goto L_08ACD0B8;
    }
L_08ACD0B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD0D0;
      }
      goto L_08ACD0C0;
    }
L_08ACD0C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD29C;
      }
      goto L_08ACD0C8;
    }
L_08ACD0C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    goto L_08ACD0D0;
L_08ACD0D0:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4800 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD114;
      }
      goto L_08ACD0DC;
    }
L_08ACD0DC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7544)));
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7544), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 30u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ACD288;
      }
      goto L_08ACD114;
    }
L_08ACD114:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2400 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD158;
      }
      goto L_08ACD120;
    }
L_08ACD120:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7544)));
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(5));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7544), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ACD288;
      }
      goto L_08ACD158;
    }
L_08ACD158:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD19C;
      }
      goto L_08ACD164;
    }
L_08ACD164:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7544)));
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7544), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ACD288;
      }
      goto L_08ACD19C;
    }
L_08ACD19C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 550 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD1E0;
      }
      goto L_08ACD1A8;
    }
L_08ACD1A8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7544)));
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7544), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ACD288;
      }
      goto L_08ACD1E0;
    }
L_08ACD1E0:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 180 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD220;
      }
      goto L_08ACD1EC;
    }
L_08ACD1EC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7544)));
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7544), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08ACD288;
      }
      goto L_08ACD220;
    }
L_08ACD220:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACD25C;
      }
      goto L_08ACD22C;
    }
L_08ACD22C:
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-7544)));
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-7544), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ACD288;
      }
      goto L_08ACD25C;
    }
L_08ACD25C:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACD274;
      }
      goto L_08ACD264;
    }
L_08ACD264:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7540)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7540), ctx.gpr[7]);
    goto L_08ACD274;
L_08ACD274:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    ctx.gpr[7] = (0u | 0u);
    goto L_08ACD288;
L_08ACD288:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACD29C;
      }
      goto L_08ACD290;
    }
L_08ACD290:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08ACD29C;
L_08ACD29C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD2A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08ACD2DC;
      }
      goto L_08ACD2D4;
    }
L_08ACD2D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD2FC;
      }
      goto L_08ACD2DC;
    }
L_08ACD2DC:
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08ACD2FCu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08ACD8E0;
L_08ACD2FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD308:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08ACD36C;
      }
      goto L_08ACD340;
    }
L_08ACD340:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08ACD35Cu);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    goto L_08ACD8E0;
L_08ACD35C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD374;
      }
      goto L_08ACD364;
    }
L_08ACD364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD388;
      }
      goto L_08ACD36C;
    }
L_08ACD36C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD388;
      }
      goto L_08ACD374;
    }
L_08ACD374:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACD388u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_08ACDD7C;
L_08ACD388:
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
L_08ACD3A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ACD3E4;
      }
      goto L_08ACD3C8;
    }
L_08ACD3C8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29796)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD3EC;
      }
      goto L_08ACD3DC;
    }
L_08ACD3DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD3F0;
      }
      goto L_08ACD3E4;
    }
L_08ACD3E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD474;
      }
      goto L_08ACD3EC;
    }
L_08ACD3EC:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08ACD3F0;
L_08ACD3F0:
    ctx.gpr[31] = (0x08ACD3F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ACD8C0;
L_08ACD3F8:
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD46C;
      }
      goto L_08ACD404;
    }
L_08ACD404:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14080)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD41C:
    ctx.gpr[4] = (0u | 70u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACD46C;
      }
      goto L_08ACD428;
    }
L_08ACD428:
    ctx.gpr[4] = (0u | 200u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACD46C;
      }
      goto L_08ACD434;
    }
L_08ACD434:
    ctx.gpr[4] = (0u | 570u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACD46C;
      }
      goto L_08ACD440;
    }
L_08ACD440:
    ctx.gpr[4] = (0u | 1220u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACD46C;
      }
      goto L_08ACD44C;
    }
L_08ACD44C:
    ctx.gpr[4] = (0u | 2420u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACD46C;
      }
      goto L_08ACD458;
    }
L_08ACD458:
    ctx.gpr[4] = (0u | 4820u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACD46C;
      }
      goto L_08ACD464;
    }
L_08ACD464:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08ACD46C;
      }
      goto L_08ACD46C;
    }
L_08ACD46C:
    ctx.gpr[31] = (0x08ACD474u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ACD08C;
L_08ACD474:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD488:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ACD4B4;
      }
      goto L_08ACD4AC;
    }
L_08ACD4AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD4D0;
      }
      goto L_08ACD4B4;
    }
L_08ACD4B4:
    ctx.gpr[31] = (0x08ACD4BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ACD570;
L_08ACD4BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACD4C8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ACD3A4;
L_08ACD4C8:
    ctx.gpr[31] = (0x08ACD4D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ACD08C;
L_08ACD4D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD4E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ACD524;
      }
      goto L_08ACD508;
    }
L_08ACD508:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD52C;
      }
      goto L_08ACD51C;
    }
L_08ACD51C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD538;
      }
      goto L_08ACD524;
    }
L_08ACD524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD55C;
      }
      goto L_08ACD52C;
    }
L_08ACD52C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08ACD538u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ACD3A4;
L_08ACD538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD550;
      }
      goto L_08ACD548;
    }
L_08ACD548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD55C;
      }
      goto L_08ACD550;
    }
L_08ACD550:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACD55Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ACD3A4;
L_08ACD55C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD570:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD5A8;
      }
      goto L_08ACD580;
    }
L_08ACD580:
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACD634;
      }
      goto L_08ACD58C;
    }
L_08ACD58C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14048)));
    jump_target = ctx.gpr[1];
    ctx.gpr[4] = (2230u << 16u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD5A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD634;
      }
      goto L_08ACD5B0;
    }
L_08ACD5B0:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29796), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 115u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29792), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ACD634;
      }
      goto L_08ACD5C4;
    }
L_08ACD5C4:
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29796), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 365u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29792), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ACD634;
      }
      goto L_08ACD5D8;
    }
L_08ACD5D8:
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29796), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 875u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29792), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ACD634;
      }
      goto L_08ACD5EC;
    }
L_08ACD5EC:
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29796), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1800u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29792), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ACD634;
      }
      goto L_08ACD600;
    }
L_08ACD600:
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29796), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 3600u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29792), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ACD634;
      }
      goto L_08ACD614;
    }
L_08ACD614:
    ctx.gpr[6] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29796), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 7200u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29792), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ACD634;
      }
      goto L_08ACD628;
    }
L_08ACD628:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29796), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29792), 0u);
      if (branch_taken) {
          goto L_08ACD634;
      }
      goto L_08ACD634;
    }
L_08ACD634:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD63C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD654;
      }
      goto L_08ACD64C;
    }
L_08ACD64C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD660;
      }
      goto L_08ACD654;
    }
L_08ACD654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
    goto L_08ACD660;
L_08ACD660:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD668:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD690;
      }
      goto L_08ACD678;
    }
L_08ACD678:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD6A4;
      }
      goto L_08ACD688;
    }
L_08ACD688:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
      if (branch_taken) {
          goto L_08ACD698;
      }
      goto L_08ACD690;
    }
L_08ACD690:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD6AC;
      }
      goto L_08ACD698;
    }
L_08ACD698:
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD6A8;
      }
      goto L_08ACD6A4;
    }
L_08ACD6A4:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ACD6A8;
L_08ACD6A8:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08ACD6AC;
L_08ACD6AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD6B4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD6DC;
      }
      goto L_08ACD6C4;
    }
L_08ACD6C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD6F0;
      }
      goto L_08ACD6D4;
    }
L_08ACD6D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
      if (branch_taken) {
          goto L_08ACD6E4;
      }
      goto L_08ACD6DC;
    }
L_08ACD6DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD6F8;
      }
      goto L_08ACD6E4;
    }
L_08ACD6E4:
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD6F4;
      }
      goto L_08ACD6F0;
    }
L_08ACD6F0:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ACD6F4;
L_08ACD6F4:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08ACD6F8;
L_08ACD6F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD700:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD728;
      }
      goto L_08ACD710;
    }
L_08ACD710:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD73C;
      }
      goto L_08ACD720;
    }
L_08ACD720:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
      if (branch_taken) {
          goto L_08ACD730;
      }
      goto L_08ACD728;
    }
L_08ACD728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD744;
      }
      goto L_08ACD730;
    }
L_08ACD730:
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD740;
      }
      goto L_08ACD73C;
    }
L_08ACD73C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ACD740;
L_08ACD740:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08ACD744;
L_08ACD744:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD74C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD7A0;
      }
      goto L_08ACD75C;
    }
L_08ACD75C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[6] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08ACD798;
      }
      goto L_08ACD76C;
    }
L_08ACD76C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD798;
      }
      goto L_08ACD774;
    }
L_08ACD774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
        goto L_08ACD7A8;
    }
    goto L_08ACD784;
L_08ACD784:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD7B8;
      }
      goto L_08ACD790;
    }
L_08ACD790:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD7BC;
      }
      goto L_08ACD798;
    }
L_08ACD798:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD7BC;
      }
      goto L_08ACD7A0;
    }
L_08ACD7A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD7BC;
      }
      goto L_08ACD7A8;
    }
L_08ACD7A8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD790;
      }
      goto L_08ACD7B0;
    }
L_08ACD7B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACD7BC;
      }
      goto L_08ACD7B8;
    }
L_08ACD7B8:
    ctx.gpr[2] = (0u | 1u);
    goto L_08ACD7BC;
L_08ACD7BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD7C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29780)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[22] = (0u | 55u);
    ctx.gpr[23] = (0u | 54u);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29784)));
    goto L_08ACD80C;
L_08ACD80C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD880;
      }
      goto L_08ACD818;
    }
L_08ACD818:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2072), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(592), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(596), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08ACD87C;
      }
      goto L_08ACD834;
    }
L_08ACD834:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08ACD87C;
      }
      goto L_08ACD83C;
    }
L_08ACD83C:
    ctx.gpr[31] = (0x08ACD844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08ACD844u) goto L_08ACD844;
    return;
L_08ACD844:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08ACD858u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08ACD858u) goto L_08ACD858;
    return;
L_08ACD858:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08ACD87Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x08ACD87Cu) goto L_08ACD87C;
    return;
L_08ACD87C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(816), 0u);
    goto L_08ACD880;
L_08ACD880:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ACD80C;
      }
      goto L_08ACD890;
    }
L_08ACD890:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
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
L_08ACD8C0:
    ctx.gpr[5] = (0u | 0u);
    goto L_08ACD8C4;
L_08ACD8C4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08ACD8C4;
      }
      goto L_08ACD8D8;
    }
L_08ACD8D8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD8E0:
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (ctx.gpr[10] & 255u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD908;
      }
      goto L_08ACD8FC;
    }
L_08ACD8FC:
    ctx.gpr[11] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACD910;
      }
      goto L_08ACD908;
    }
L_08ACD908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD9CC;
      }
      goto L_08ACD910;
    }
L_08ACD910:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACD958;
      }
      goto L_08ACD91C;
    }
L_08ACD91C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08ACD958;
      }
      goto L_08ACD928;
    }
L_08ACD928:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD944;
      }
      goto L_08ACD934;
    }
L_08ACD934:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD94C;
      }
      goto L_08ACD93C;
    }
L_08ACD93C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD950;
      }
      goto L_08ACD944;
    }
L_08ACD944:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACD9CC;
      }
      goto L_08ACD94C;
    }
L_08ACD94C:
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[9]));
    goto L_08ACD950;
L_08ACD950:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACD9CC;
      }
      goto L_08ACD958;
    }
L_08ACD958:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08ACD910;
      }
      goto L_08ACD968;
    }
L_08ACD968:
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08ACD974;
L_08ACD974:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD998;
      }
      goto L_08ACD97C;
    }
L_08ACD97C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD998;
      }
      goto L_08ACD988;
    }
L_08ACD988:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[11]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACD974;
      }
      goto L_08ACD998;
    }
L_08ACD998:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD9C8;
      }
      goto L_08ACD9A0;
    }
L_08ACD9A0:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_08ACD9C8;
L_08ACD9C8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACD9CC;
L_08ACD9CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD9D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACDA0C;
      }
      goto L_08ACDA04;
    }
L_08ACDA04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDA98;
      }
      goto L_08ACDA0C;
    }
L_08ACDA0C:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (2230u << 16u);
    goto L_08ACDA20;
L_08ACDA20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDA84;
      }
      goto L_08ACDA2C;
    }
L_08ACDA2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(500));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDA68;
      }
      goto L_08ACDA44;
    }
L_08ACDA44:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDA68;
      }
      goto L_08ACDA50;
    }
L_08ACDA50:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(81)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACDA64u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08ACDD7C;
L_08ACDA64:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08ACDA68;
L_08ACDA68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDA84;
      }
      goto L_08ACDA80;
    }
L_08ACDA80:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), 0u);
    goto L_08ACDA84;
L_08ACDA84:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08ACDA20;
      }
      goto L_08ACDA98;
    }
L_08ACDA98:
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
L_08ACDABC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACDB24;
      }
      goto L_08ACDB00;
    }
L_08ACDB00:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[3] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ACDB2C;
      }
      goto L_08ACDB1C;
    }
L_08ACDB1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDBFC;
      }
      goto L_08ACDB24;
    }
L_08ACDB24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACDD48;
      }
      goto L_08ACDB2C;
    }
L_08ACDB2C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(3248));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 2u);
    ctx.gpr[9] = (0u | 3u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.lo);
    goto L_08ACDB50;
L_08ACDB50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08ACDB70;
    }
    goto L_08ACDB68;
L_08ACDB68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACDB74;
      }
      goto L_08ACDB70;
    }
L_08ACDB70:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_08ACDB74;
L_08ACDB74:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDBE8;
      }
      goto L_08ACDB7C;
    }
L_08ACDB7C:
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACDBAC;
      }
      goto L_08ACDB88;
    }
L_08ACDB88:
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08ACDBAC;
      }
      goto L_08ACDB94;
    }
L_08ACDB94:
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08ACDBAC;
      }
      goto L_08ACDBA0;
    }
L_08ACDBA0:
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08ACDBE8;
      }
      goto L_08ACDBAC;
    }
L_08ACDBAC:
    { const std::uint32_t vfpu_address = ctx.gpr[12] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACDBE8;
      }
      goto L_08ACDBE4;
    }
L_08ACDBE4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08ACDBE8;
L_08ACDBE8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3248));
      if (branch_taken) {
          goto L_08ACDB50;
      }
      goto L_08ACDBFC;
    }
L_08ACDBFC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08ACDD44;
      }
      goto L_08ACDC14;
    }
L_08ACDC14:
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[30] = (0u | 80u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08ACDC3C;
L_08ACDC3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_08ACDC5C;
    }
    goto L_08ACDC54;
L_08ACDC54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACDC60;
      }
      goto L_08ACDC5C;
    }
L_08ACDC5C:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_08ACDC60;
L_08ACDC60:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDD30;
      }
      goto L_08ACDC6C;
    }
L_08ACDC6C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDCBC;
      }
      goto L_08ACDC7C;
    }
L_08ACDC7C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 199u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACDCBC;
      }
      goto L_08ACDC8C;
    }
L_08ACDC8C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 196u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACDCBC;
      }
      goto L_08ACDC9C;
    }
L_08ACDC9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 157u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACDCBC;
      }
      goto L_08ACDCAC;
    }
L_08ACDCAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 158u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACDD30;
      }
      goto L_08ACDCBC;
    }
L_08ACDCBC:
    ctx.gpr[31] = (0x08ACDCC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08ACDCC4u) goto L_08ACDCC4;
    return;
L_08ACDCC4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACDD30;
      }
      goto L_08ACDCCC;
    }
L_08ACDCCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACDD30;
      }
      goto L_08ACDCE0;
    }
L_08ACDCE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08ACDD30;
      }
      goto L_08ACDCF0;
    }
L_08ACDCF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
          goto L_08ACDD30;
      }
      goto L_08ACDD2C;
    }
L_08ACDD2C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08ACDD30;
L_08ACDD30:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1760));
      if (branch_taken) {
          goto L_08ACDC3C;
      }
      goto L_08ACDD44;
    }
L_08ACDD44:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    goto L_08ACDD48;
L_08ACDD48:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACDD7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ACDDDC;
      }
      goto L_08ACDDBC;
    }
L_08ACDDBC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6796)));
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ACDDE4;
      }
      goto L_08ACDDD4;
    }
L_08ACDDD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDDF4;
      }
      goto L_08ACDDDC;
    }
L_08ACDDDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE1D8;
      }
      goto L_08ACDDE4;
    }
L_08ACDDE4:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08ACDDF4;
L_08ACDDF4:
    ctx.gpr[31] = (0x08ACDDFCu);
    ctx.gpr[21] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 429u, 0x08ACA924u>(ctx, &aot_mem) && ctx.pc == 0x08ACDDFCu) goto L_08ACDDFC;
    return;
L_08ACDDFC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 100u);
        goto L_08ACDE0C;
    }
    goto L_08ACDE0C;
L_08ACDE0C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[19] == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08ACDE48;
      }
      goto L_08ACDE38;
    }
L_08ACDE38:
    ctx.gpr[4] = (16042u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32506u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08ACDE48;
L_08ACDE48:
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(19) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE190;
      }
      goto L_08ACDE54;
    }
L_08ACDE54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[20]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14016)));
    jump_target = ctx.gpr[1];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACDE70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE1A8;
      }
      goto L_08ACDE78;
    }
L_08ACDE78:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE1A8;
      }
      goto L_08ACDEA4;
    }
L_08ACDEA4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE1A8;
      }
      goto L_08ACDED0;
    }
L_08ACDED0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE1A8;
      }
      goto L_08ACDEFC;
    }
L_08ACDEFC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE1A8;
      }
      goto L_08ACDF28;
    }
L_08ACDF28:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE1A8;
      }
      goto L_08ACDF54;
    }
L_08ACDF54:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE1A8;
      }
      goto L_08ACDF80;
    }
L_08ACDF80:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE1A8;
      }
      goto L_08ACDFAC;
    }
L_08ACDFAC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE1A8;
      }
      goto L_08ACDFD8;
    }
L_08ACDFD8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE1A8;
      }
      goto L_08ACE004;
    }
L_08ACE004:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE1A8;
      }
      goto L_08ACE030;
    }
L_08ACE030:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16784u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE1A8;
      }
      goto L_08ACE05C;
    }
L_08ACE05C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE1A8;
      }
      goto L_08ACE088;
    }
L_08ACE088:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE1A8;
      }
      goto L_08ACE0B4;
    }
L_08ACE0B4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE1A8;
      }
      goto L_08ACE0E0;
    }
L_08ACE0E0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE1A8;
      }
      goto L_08ACE10C;
    }
L_08ACE10C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE1A8;
      }
      goto L_08ACE138;
    }
L_08ACE138:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE1A8;
      }
      goto L_08ACE164;
    }
L_08ACE164:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE1A8;
      }
      goto L_08ACE190;
    }
L_08ACE190:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08ACE19Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14128));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 534u, 0x08AFA558u>(ctx, &aot_mem) && ctx.pc == 0x08ACE19Cu) goto L_08ACE19C;
    return;
L_08ACE19C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_08ACE1A8;
L_08ACE1A8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE1B8;
      }
      goto L_08ACE1B0;
    }
L_08ACE1B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACE1B8;
      }
      goto L_08ACE1B8;
    }
L_08ACE1B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACE1D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 121u, 0x08864890u>(ctx, &aot_mem) && ctx.pc == 0x08ACE1D0u) goto L_08ACE1D0;
    return;
L_08ACE1D0:
    ctx.gpr[31] = (0x08ACE1D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ACD08C;
L_08ACE1D8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE200:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29844)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29848)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[10] = (2230u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29816)));
    ctx.gpr[11] = (2230u << 16u);
    ctx.gpr[14] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[15] = (2230u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[3] = (2230u << 16u);
    ctx.gpr[2] = (2230u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[9] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29840), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-29820)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-29812), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-29804), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (16281u << 16u);
    ctx.gpr[8] = (16268u << 16u);
    ctx.gpr[12] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] | 39322u);
    ctx.gpr[13] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[7] = (ctx.gpr[8] | 52429u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[24] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29832), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29836), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-29828), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-29824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29808), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29800), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE2C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13296));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    goto L_08ACE2F0;
L_08ACE2F0:
    ctx.gpr[8] = (ctx.gpr[7] << 5u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE2F0;
      }
      goto L_08ACE31C;
    }
L_08ACE31C:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE324:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[11] = (ctx.gpr[4] << 16u);
    ctx.gpr[10] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13296));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08ACE34C;
L_08ACE34C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE378;
      }
      goto L_08ACE354;
    }
L_08ACE354:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACE378;
      }
      goto L_08ACE360;
    }
L_08ACE360:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[7] = (ctx.gpr[9] << 5u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 200 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08ACE34C;
      }
      goto L_08ACE378;
    }
L_08ACE378:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE394:
    ctx.gpr[8] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (0u | 200u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13296));
    goto L_08ACE3B0;
L_08ACE3B0:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
      if (branch_taken) {
          goto L_08ACE3D8;
      }
      goto L_08ACE3B8;
    }
L_08ACE3B8:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08ACE3D8;
      }
      goto L_08ACE3C8;
    }
L_08ACE3C8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 200 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE3B0;
      }
      goto L_08ACE3D8;
    }
L_08ACE3D8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08ACE3F4;
      }
      goto L_08ACE3E0;
    }
L_08ACE3E0:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[10] = (ctx.gpr[7] << 5u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 200 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE3FC;
      }
      goto L_08ACE3F4;
    }
L_08ACE3F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE4A8;
      }
      goto L_08ACE3FC;
    }
L_08ACE3FC:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE420;
      }
      goto L_08ACE404;
    }
L_08ACE404:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08ACE420;
      }
      goto L_08ACE410;
    }
L_08ACE410:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 200 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACE3FC;
      }
      goto L_08ACE420;
    }
L_08ACE420:
    ctx.gpr[9] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
      if (branch_taken) {
          goto L_08ACE474;
      }
      goto L_08ACE434;
    }
L_08ACE434:
    ctx.gpr[10] = (ctx.gpr[5] << 5u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[11] = (ctx.gpr[7] << 5u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[4]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
      if (branch_taken) {
          goto L_08ACE434;
      }
      goto L_08ACE474;
    }
L_08ACE474:
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ACE4A8;
      }
      goto L_08ACE488;
    }
L_08ACE488:
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE488;
      }
      goto L_08ACE4A8;
    }
L_08ACE4A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE4B0:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13296));
    goto L_08ACE4C4;
L_08ACE4C4:
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACE4F4;
      }
      goto L_08ACE4D8;
    }
L_08ACE4D8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE4C4;
      }
      goto L_08ACE4EC;
    }
L_08ACE4EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE500;
      }
      goto L_08ACE4F4;
    }
L_08ACE4F4:
    ctx.gpr[2] = (ctx.gpr[6] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08ACE504;
      }
      goto L_08ACE500;
    }
L_08ACE500:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08ACE504;
L_08ACE504:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE50C:
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13296));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE538:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13296));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE558:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29772)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29776)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[11] = (2230u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-29768), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-29760), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-29764), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29756), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29752), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE5D0:
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
L_08ACE5FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACE61Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13156));
    goto L_08ACE5D0;
L_08ACE61C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] & 255u);
    ctx.gpr[31] = (0x08ACE62Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 309u, 0x088A9538u>(ctx, &aot_mem) && ctx.pc == 0x08ACE62Cu) goto L_08ACE62C;
    return;
L_08ACE62C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE63C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (2232u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(136)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(5000) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACE698;
      }
      goto L_08ACE680;
    }
L_08ACE680:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE6B8;
      }
      goto L_08ACE690;
    }
L_08ACE690:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE6C0;
      }
      goto L_08ACE698;
    }
L_08ACE698:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08ACE6A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13112));
    goto L_08ACE5D0;
L_08ACE6A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACE6B0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08ACE6B0u) goto L_08ACE6B0;
    return;
L_08ACE6B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ACE794;
      }
      goto L_08ACE6B8;
    }
L_08ACE6B8:
    ctx.gpr[31] = (0x08ACE6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE6C0u) goto L_08ACE6C0;
    return;
L_08ACE6C0:
    ctx.gpr[31] = (0x08ACE6C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 299u, 0x08A09328u>(ctx, &aot_mem) && ctx.pc == 0x08ACE6C8u) goto L_08ACE6C8;
    return;
L_08ACE6C8:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(269)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[19] << (ctx.gpr[4] & 31u));
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08ACE728;
      }
      goto L_08ACE6E4;
    }
L_08ACE6E4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08ACE6F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13076));
    goto L_08ACE5D0;
L_08ACE6F0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-5664)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ACE714u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE714u) goto L_08ACE714;
    return;
L_08ACE714:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08ACE728u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 309u, 0x088A9538u>(ctx, &aot_mem) && ctx.pc == 0x08ACE728u) goto L_08ACE728;
    return;
L_08ACE728:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE738u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13052));
    goto L_08ACE5D0;
L_08ACE738:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE784;
      }
      goto L_08ACE748;
    }
L_08ACE748:
    ctx.gpr[5] = (ctx.gpr[19] << (ctx.gpr[4] & 31u));
    ctx.gpr[5] = (ctx.gpr[17] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE770;
      }
      goto L_08ACE758;
    }
L_08ACE758:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE748;
      }
      goto L_08ACE768;
    }
L_08ACE768:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE784;
      }
      goto L_08ACE770;
    }
L_08ACE770:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACE77Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08ACE77Cu) goto L_08ACE77C;
    return;
L_08ACE77C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ACE794;
      }
      goto L_08ACE784;
    }
L_08ACE784:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACE790u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08ACE790u) goto L_08ACE790;
    return;
L_08ACE790:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08ACE794;
L_08ACE794:
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
L_08ACE7B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACE7F0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08ACE7F0u) goto L_08ACE7F0;
    return;
L_08ACE7F0:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACEBC4;
      }
      goto L_08ACE7FC;
    }
L_08ACE7FC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE80Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13012));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 395u, 0x08A4B388u>(ctx, &aot_mem) && ctx.pc == 0x08ACE80Cu) goto L_08ACE80C;
    return;
L_08ACE80C:
    ctx.gpr[31] = (0x08ACE814u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE814u) goto L_08ACE814;
    return;
L_08ACE814:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE820u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08ACE820u) goto L_08ACE820;
    return;
L_08ACE820:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE890;
      }
      goto L_08ACE828;
    }
L_08ACE828:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE834u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE834u) goto L_08ACE834;
    return;
L_08ACE834:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE844u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13012));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 380u, 0x08A4B2D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACE844u) goto L_08ACE844;
    return;
L_08ACE844:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE850u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACE850u) goto L_08ACE850;
    return;
L_08ACE850:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE85Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 29u, 0x0890C2B8u>(ctx, &aot_mem) && ctx.pc == 0x08ACE85Cu) goto L_08ACE85C;
    return;
L_08ACE85C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08ACE870u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13000));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE870u) goto L_08ACE870;
    return;
L_08ACE870:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ACE884u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12992));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE884u) goto L_08ACE884;
    return;
L_08ACE884:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE890u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 23u, 0x0890C1BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE890u) goto L_08ACE890;
    return;
L_08ACE890:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE89Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACE89Cu) goto L_08ACE89C;
    return;
L_08ACE89C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE8A8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 706u, 0x0890BEF0u>(ctx, &aot_mem) && ctx.pc == 0x08ACE8A8u) goto L_08ACE8A8;
    return;
L_08ACE8A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE8B4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08ACE8B4u) goto L_08ACE8B4;
    return;
L_08ACE8B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE940;
      }
      goto L_08ACE8BC;
    }
L_08ACE8BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE8C8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08ACE8C8u) goto L_08ACE8C8;
    return;
L_08ACE8C8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACE90C;
      }
      goto L_08ACE8D4;
    }
L_08ACE8D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE8E0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE8E0u) goto L_08ACE8E0;
    return;
L_08ACE8E0:
    ctx.gpr[4] = (11u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(181));
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACE904;
      }
      goto L_08ACE8F0;
    }
L_08ACE8F0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08ACEC24;
      }
      goto L_08ACE904;
    }
L_08ACE904:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[30] | 0u);
      if (branch_taken) {
          goto L_08ACEC24;
      }
      goto L_08ACE90C;
    }
L_08ACE90C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE918u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 560u, 0x0890B468u>(ctx, &aot_mem) && ctx.pc == 0x08ACE918u) goto L_08ACE918;
    return;
L_08ACE918:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE924u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08ACE924u) goto L_08ACE924;
    return;
L_08ACE924:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[31] = (0x08ACE938u);
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE938u) goto L_08ACE938;
    return;
L_08ACE938:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08ACEC24;
      }
      goto L_08ACE940;
    }
L_08ACE940:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[23] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE95Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 77u, 0x0890C66Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE95Cu) goto L_08ACE95C;
    return;
L_08ACE95C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE96C;
      }
      goto L_08ACE964;
    }
L_08ACE964:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACEAE4;
      }
      goto L_08ACE96C;
    }
L_08ACE96C:
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACE97Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 459u, 0x08A01F88u>(ctx, &aot_mem) && ctx.pc == 0x08ACE97Cu) goto L_08ACE97C;
    return;
L_08ACE97C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08ACEAC4;
      }
      goto L_08ACE988;
    }
L_08ACE988:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[23] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[22] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ACE9B8;
      }
      goto L_08ACE99C;
    }
L_08ACE99C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
        goto L_08ACE9A8;
    }
    goto L_08ACE9A8;
L_08ACE9A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACEAC4;
      }
      goto L_08ACE9B8;
    }
L_08ACE9B8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACE9E8;
      }
      goto L_08ACE9E0;
    }
L_08ACE9E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08ACE9EC;
      }
      goto L_08ACE9E8;
    }
L_08ACE9E8:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_08ACE9EC;
L_08ACE9EC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACEA20;
      }
      goto L_08ACEA00;
    }
L_08ACEA00:
    ctx.gpr[31] = (0x08ACEA08u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08ACEA08u) goto L_08ACEA08;
    return;
L_08ACEA08:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEA20;
      }
      goto L_08ACEA14;
    }
L_08ACEA14:
    ctx.gpr[31] = (0x08ACEA1Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08ACEA1Cu) goto L_08ACEA1C;
    return;
L_08ACEA1C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08ACEA20;
L_08ACEA20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[18] != ctx.gpr[4]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
        goto L_08ACEA34;
    }
    goto L_08ACEA2C;
L_08ACEA2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ACEA50;
      }
      goto L_08ACEA34;
    }
L_08ACEA34:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[18] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACEA48u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08ACEA48u) goto L_08ACEA48;
    return;
L_08ACEA48:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08ACEA50;
L_08ACEA50:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[31] = (0x08ACEA70u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08ACEA70u) goto L_08ACEA70;
    return;
L_08ACEA70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08ACEAA0;
      }
      goto L_08ACEA7C;
    }
L_08ACEA7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_08ACEAA0;
      }
      goto L_08ACEA88;
    }
L_08ACEA88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACEA98u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08ACEA98u) goto L_08ACEA98;
    return;
L_08ACEA98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08ACEAA0;
      }
      goto L_08ACEAA0;
    }
L_08ACEAA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ACEAB4;
      }
      goto L_08ACEAAC;
    }
L_08ACEAAC:
    ctx.gpr[31] = (0x08ACEAB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08ACEAB4u) goto L_08ACEAB4;
    return;
L_08ACEAB4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08ACEAC4;
L_08ACEAC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEAD0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACEAD0u) goto L_08ACEAD0;
    return;
L_08ACEAD0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEADCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 77u, 0x0890C66Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEADCu) goto L_08ACEADC;
    return;
L_08ACEADC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE96C;
      }
      goto L_08ACEAE4;
    }
L_08ACEAE4:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEB6C;
      }
      goto L_08ACEAEC;
    }
L_08ACEAEC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08ACEAFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 640u, 0x088A7D64u>(ctx, &aot_mem) && ctx.pc == 0x08ACEAFCu) goto L_08ACEAFC;
    return;
L_08ACEAFC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEB0Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACEB0Cu) goto L_08ACEB0C;
    return;
L_08ACEB0C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEB18u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 560u, 0x0890B468u>(ctx, &aot_mem) && ctx.pc == 0x08ACEB18u) goto L_08ACEB18;
    return;
L_08ACEB18:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEB28u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEB28u) goto L_08ACEB28;
    return;
L_08ACEB28:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEB34u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 23u, 0x0890C1BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACEB34u) goto L_08ACEB34;
    return;
L_08ACEB34:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEB40u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACEB40u) goto L_08ACEB40;
    return;
L_08ACEB40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ACEB64;
      }
      goto L_08ACEB50;
    }
L_08ACEB50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEB64;
      }
      goto L_08ACEB5C;
    }
L_08ACEB5C:
    ctx.gpr[31] = (0x08ACEB64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08ACEB64u) goto L_08ACEB64;
    return;
L_08ACEB64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08ACEC24;
      }
      goto L_08ACEB6C;
    }
L_08ACEB6C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEB78u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACEB78u) goto L_08ACEB78;
    return;
L_08ACEB78:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEB84u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08ACEB84u) goto L_08ACEB84;
    return;
L_08ACEB84:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEB90u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 23u, 0x0890C1BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACEB90u) goto L_08ACEB90;
    return;
L_08ACEB90:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEB9Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACEB9Cu) goto L_08ACEB9C;
    return;
L_08ACEB9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ACEBBC;
      }
      goto L_08ACEBA8;
    }
L_08ACEBA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEBBC;
      }
      goto L_08ACEBB4;
    }
L_08ACEBB4:
    ctx.gpr[31] = (0x08ACEBBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08ACEBBCu) goto L_08ACEBBC;
    return;
L_08ACEBBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEBD8;
      }
      goto L_08ACEBC4;
    }
L_08ACEBC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEBD0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 457u, 0x08A01F64u>(ctx, &aot_mem) && ctx.pc == 0x08ACEBD0u) goto L_08ACEBD0;
    return;
L_08ACEBD0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEBFC;
      }
      goto L_08ACEBD8;
    }
L_08ACEBD8:
    ctx.gpr[4] = (11u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(181));
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACEC20;
      }
      goto L_08ACEBE8;
    }
L_08ACEBE8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08ACEC24;
      }
      goto L_08ACEBFC;
    }
L_08ACEBFC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEC08u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 459u, 0x08A01F88u>(ctx, &aot_mem) && ctx.pc == 0x08ACEC08u) goto L_08ACEC08;
    return;
L_08ACEC08:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08ACEC18u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 560u, 0x0890B468u>(ctx, &aot_mem) && ctx.pc == 0x08ACEC18u) goto L_08ACEC18;
    return;
L_08ACEC18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08ACEC24;
      }
      goto L_08ACEC20;
    }
L_08ACEC20:
    ctx.gpr[2] = (ctx.gpr[30] | 0u);
    goto L_08ACEC24;
L_08ACEC24:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACEC54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACEC74u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACEC74u) goto L_08ACEC74;
    return;
L_08ACEC74:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20996)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACECB0;
      }
      goto L_08ACEC84;
    }
L_08ACEC84:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACEC9C;
      }
      goto L_08ACEC8C;
    }
L_08ACEC8C:
    ctx.gpr[31] = (0x08ACEC94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9700u>(ctx, &aot_mem) && ctx.pc == 0x08ACEC94u) goto L_08ACEC94;
    return;
L_08ACEC94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20996)));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_08ACEC9C;
L_08ACEC9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACECA8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08ACECA8u) goto L_08ACECA8;
    return;
L_08ACECA8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20996)));
    goto L_08ACECB0;
L_08ACECB0:
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08ACECC8;
    }
    goto L_08ACECB8;
L_08ACECB8:
    ctx.gpr[31] = (0x08ACECC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9700u>(ctx, &aot_mem) && ctx.pc == 0x08ACECC0u) goto L_08ACECC0;
    return;
L_08ACECC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20996)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08ACECC8;
L_08ACECC8:
    ctx.gpr[31] = (0x08ACECD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACECD0u) goto L_08ACECD0;
    return;
L_08ACECD0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08ACECF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACED10u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACED10u) goto L_08ACED10;
    return;
L_08ACED10:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20996)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACED4C;
      }
      goto L_08ACED20;
    }
L_08ACED20:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACED38;
      }
      goto L_08ACED28;
    }
L_08ACED28:
    ctx.gpr[31] = (0x08ACED30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9700u>(ctx, &aot_mem) && ctx.pc == 0x08ACED30u) goto L_08ACED30;
    return;
L_08ACED30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20996)));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_08ACED38;
L_08ACED38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACED44u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08ACED44u) goto L_08ACED44;
    return;
L_08ACED44:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20996)));
    goto L_08ACED4C;
L_08ACED4C:
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_08ACED64;
    }
    goto L_08ACED54;
L_08ACED54:
    ctx.gpr[31] = (0x08ACED5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9700u>(ctx, &aot_mem) && ctx.pc == 0x08ACED5Cu) goto L_08ACED5C;
    return;
L_08ACED5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20996)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08ACED64;
L_08ACED64:
    ctx.gpr[31] = (0x08ACED6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACED6Cu) goto L_08ACED6C;
    return;
L_08ACED6C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08ACED8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACEDACu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACEDACu) goto L_08ACEDAC;
    return;
L_08ACEDAC:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20996)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACEDE8;
      }
      goto L_08ACEDBC;
    }
L_08ACEDBC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACEDD4;
      }
      goto L_08ACEDC4;
    }
L_08ACEDC4:
    ctx.gpr[31] = (0x08ACEDCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9700u>(ctx, &aot_mem) && ctx.pc == 0x08ACEDCCu) goto L_08ACEDCC;
    return;
L_08ACEDCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20996)));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_08ACEDD4;
L_08ACEDD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACEDE0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08ACEDE0u) goto L_08ACEDE0;
    return;
L_08ACEDE0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20996)));
    goto L_08ACEDE8;
L_08ACEDE8:
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08ACEE00;
    }
    goto L_08ACEDF0;
L_08ACEDF0:
    ctx.gpr[31] = (0x08ACEDF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9700u>(ctx, &aot_mem) && ctx.pc == 0x08ACEDF8u) goto L_08ACEDF8;
    return;
L_08ACEDF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20996)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08ACEE00;
L_08ACEE00:
    ctx.gpr[31] = (0x08ACEE08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEE08u) goto L_08ACEE08;
    return;
L_08ACEE08:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08ACEE28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACEE44u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACEE44u) goto L_08ACEE44;
    return;
L_08ACEE44:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_08ACEE6C;
      }
      goto L_08ACEE54;
    }
L_08ACEE54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACEE60u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08ACEE60u) goto L_08ACEE60;
    return;
L_08ACEE60:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    goto L_08ACEE6C;
L_08ACEE6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08ACEE80u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEE80u) goto L_08ACEE80;
    return;
L_08ACEE80:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08ACEE9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20652)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACEECC;
      }
      goto L_08ACEEC4;
    }
L_08ACEEC4:
    ctx.gpr[31] = (0x08ACEECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEECCu) goto L_08ACEECC;
    return;
L_08ACEECC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08ACEEE0;
      }
      goto L_08ACEED8;
    }
L_08ACEED8:
    ctx.gpr[31] = (0x08ACEEE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEEE0u) goto L_08ACEEE0;
    return;
L_08ACEEE0:
    ctx.gpr[31] = (0x08ACEEE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20652)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 289u, 0x08A0928Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEEE8u) goto L_08ACEEE8;
    return;
L_08ACEEE8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEEF8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 222u, 0x08A08E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEEF8u) goto L_08ACEEF8;
    return;
L_08ACEEF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08ACEF04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08ACEF04u) goto L_08ACEF04;
    return;
L_08ACEF04:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08ACEF24;
      }
      goto L_08ACEF18;
    }
L_08ACEF18:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACEF24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEF24u) goto L_08ACEF24;
    return;
L_08ACEF24:
    ctx.gpr[2] = (0u | 1u);
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
L_08ACEF44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACEF64u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.pc = 0x08B0B8CCu;
    return;
L_08ACEF64:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20652)));
        goto L_08ACEF80;
    }
    goto L_08ACEF74;
L_08ACEF74:
    ctx.gpr[31] = (0x08ACEF7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEF7Cu) goto L_08ACEF7C;
    return;
L_08ACEF7C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20652)));
    goto L_08ACEF80;
L_08ACEF80:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08ACEF90;
      }
      goto L_08ACEF88;
    }
L_08ACEF88:
    ctx.gpr[31] = (0x08ACEF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEF90u) goto L_08ACEF90;
    return;
L_08ACEF90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[31] = (0x08ACEF9Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 126u, 0x08A088B4u>(ctx, &aot_mem) && ctx.pc == 0x08ACEF9Cu) goto L_08ACEF9C;
    return;
L_08ACEF9C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACEFACu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 222u, 0x08A08E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEFACu) goto L_08ACEFAC;
    return;
L_08ACEFAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08ACEFB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08ACEFB8u) goto L_08ACEFB8;
    return;
L_08ACEFB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08ACEFD8;
      }
      goto L_08ACEFCC;
    }
L_08ACEFCC:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACEFD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEFD8u) goto L_08ACEFD8;
    return;
L_08ACEFD8:
    ctx.gpr[2] = (0u | 1u);
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
L_08ACEFF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF010u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.pc = 0x08B0B8CCu;
    return;
L_08ACF010:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
        goto L_08ACF02C;
    }
    goto L_08ACF020;
L_08ACF020:
    ctx.gpr[31] = (0x08ACF028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF028u) goto L_08ACF028;
    return;
L_08ACF028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_08ACF02C;
L_08ACF02C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[5] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x08ACF044u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08ACF044u) goto L_08ACF044;
    return;
L_08ACF044:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF05C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACF084;
      }
      goto L_08ACF07C;
    }
L_08ACF07C:
    ctx.gpr[31] = (0x08ACF084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF084u) goto L_08ACF084;
    return;
L_08ACF084:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF094u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08ACF094u) goto L_08ACF094;
    return;
L_08ACF094:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF0AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF0C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12988));
    goto L_08ACE5D0;
L_08ACF0C8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF0E0u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12956));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF0E0u) goto L_08ACF0E0;
    return;
L_08ACF0E0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACF0ECu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08ACE5D0;
L_08ACF0EC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF0FCu);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12940));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 87u, 0x088A84ACu>(ctx, &aot_mem) && ctx.pc == 0x08ACF0FCu) goto L_08ACF0FC;
    return;
L_08ACF0FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACF108u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08ACE5D0;
L_08ACF108:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF118u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12924));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 89u, 0x088A84BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACF118u) goto L_08ACF118;
    return;
L_08ACF118:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACF124u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08ACE5D0;
L_08ACF124:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF134u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12908));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 91u, 0x088A84CCu>(ctx, &aot_mem) && ctx.pc == 0x08ACF134u) goto L_08ACF134;
    return;
L_08ACF134:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACF140u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08ACE5D0;
L_08ACF140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12892));
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[31] = (0x08ACF15Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08ACE5D0;
L_08ACF15C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12876));
    ctx.gpr[31] = (0x08ACF170u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    goto L_08ACE5D0;
L_08ACF170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & 4u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12860));
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[31] = (0x08ACF18Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08ACE5D0;
L_08ACF18C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12840));
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[31] = (0x08ACF1A8u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08ACE5D0;
L_08ACF1A8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08ACF1B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12824));
    goto L_08ACE5D0;
L_08ACF1B8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(37)));
    ctx.gpr[31] = (0x08ACF1C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12800));
    goto L_08ACE5D0;
L_08ACF1C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[31] = (0x08ACF1D8u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12776));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 74u, 0x088A843Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF1D8u) goto L_08ACF1D8;
    return;
L_08ACF1D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF1E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08ACE5D0;
L_08ACF1E4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08ACF1F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12756));
    goto L_08ACE5D0;
L_08ACF1F0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF208:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF22Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x08ACF22Cu) goto L_08ACF22C;
    return;
L_08ACF22C:
    ctx.gpr[17] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_08ACF264;
      }
      goto L_08ACF238;
    }
L_08ACF238:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF244u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08ACF244u) goto L_08ACF244;
    return;
L_08ACF244:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08ACF25Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 284u, 0x088A93B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF25Cu) goto L_08ACF25C;
    return;
L_08ACF25C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACF280;
      }
      goto L_08ACF264;
    }
L_08ACF264:
    ctx.gpr[31] = (0x08ACF26Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 287u, 0x088A93FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACF26Cu) goto L_08ACF26C;
    return;
L_08ACF26C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF27Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF27Cu) goto L_08ACF27C;
    return;
L_08ACF27C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08ACF280;
L_08ACF280:
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
L_08ACF298:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF2B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 274u, 0x088A9348u>(ctx, &aot_mem) && ctx.pc == 0x08ACF2B4u) goto L_08ACF2B4;
    return;
L_08ACF2B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF2C0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08ACF2C0u) goto L_08ACF2C0;
    return;
L_08ACF2C0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF2D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF2ECu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF2ECu) goto L_08ACF2EC;
    return;
L_08ACF2EC:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF310:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF32Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 268u, 0x088A9318u>(ctx, &aot_mem) && ctx.pc == 0x08ACF32Cu) goto L_08ACF32C;
    return;
L_08ACF32C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ACF344;
      }
      goto L_08ACF338;
    }
L_08ACF338:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ACF344;
L_08ACF344:
    ctx.gpr[31] = (0x08ACF34Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF34Cu) goto L_08ACF34C;
    return;
L_08ACF34C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF360:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF37Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 269u, 0x088A9320u>(ctx, &aot_mem) && ctx.pc == 0x08ACF37Cu) goto L_08ACF37C;
    return;
L_08ACF37C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ACF394;
      }
      goto L_08ACF388;
    }
L_08ACF388:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ACF394;
L_08ACF394:
    ctx.gpr[31] = (0x08ACF39Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF39Cu) goto L_08ACF39C;
    return;
L_08ACF39C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF3B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF3D8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08ACF3D8u) goto L_08ACF3D8;
    return;
L_08ACF3D8:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (2232u << 16u);
      if (branch_taken) {
          goto L_08ACF400;
      }
      goto L_08ACF3F4;
    }
L_08ACF3F4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ACF414;
      }
      goto L_08ACF400;
    }
L_08ACF400:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08ACF414;
L_08ACF414:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08ACF42Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08ACF42Cu) goto L_08ACF42C;
    return;
L_08ACF42C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
        goto L_08ACF44C;
    }
    goto L_08ACF440;
L_08ACF440:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ACF45C;
      }
      goto L_08ACF44C;
    }
L_08ACF44C:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08ACF45C;
L_08ACF45C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08ACF468u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 270u, 0x088A9328u>(ctx, &aot_mem) && ctx.pc == 0x08ACF468u) goto L_08ACF468;
    return;
L_08ACF468:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
    ctx.gpr[31] = (0x08ACF474u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 271u, 0x088A9330u>(ctx, &aot_mem) && ctx.pc == 0x08ACF474u) goto L_08ACF474;
    return;
L_08ACF474:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_08ACF494:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF4B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 269u, 0x088A9320u>(ctx, &aot_mem) && ctx.pc == 0x08ACF4B0u) goto L_08ACF4B0;
    return;
L_08ACF4B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ACF4C8;
      }
      goto L_08ACF4BC;
    }
L_08ACF4BC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ACF4C8;
L_08ACF4C8:
    ctx.gpr[31] = (0x08ACF4D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF4D0u) goto L_08ACF4D0;
    return;
L_08ACF4D0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF4E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF508u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x08ACF508u) goto L_08ACF508;
    return;
L_08ACF508:
    ctx.gpr[16] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_08ACF56C;
      }
      goto L_08ACF514;
    }
L_08ACF514:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACF520u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08ACF520u) goto L_08ACF520;
    return;
L_08ACF520:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08ACF548;
    }
    goto L_08ACF53C;
L_08ACF53C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ACF558;
      }
      goto L_08ACF548;
    }
L_08ACF548:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08ACF558;
L_08ACF558:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08ACF564u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 82u, 0x088A8484u>(ctx, &aot_mem) && ctx.pc == 0x08ACF564u) goto L_08ACF564;
    return;
L_08ACF564:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACF598;
      }
      goto L_08ACF56C;
    }
L_08ACF56C:
    ctx.gpr[31] = (0x08ACF574u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF574u) goto L_08ACF574;
    return;
L_08ACF574:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ACF58C;
      }
      goto L_08ACF580;
    }
L_08ACF580:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ACF58C;
L_08ACF58C:
    ctx.gpr[31] = (0x08ACF594u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF594u) goto L_08ACF594;
    return;
L_08ACF594:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08ACF598;
L_08ACF598:
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
L_08ACF5B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF5D4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x08ACF5D4u) goto L_08ACF5D4;
    return;
L_08ACF5D4:
    ctx.gpr[16] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_08ACF638;
      }
      goto L_08ACF5E0;
    }
L_08ACF5E0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACF5ECu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08ACF5ECu) goto L_08ACF5EC;
    return;
L_08ACF5EC:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08ACF614;
    }
    goto L_08ACF608;
L_08ACF608:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ACF624;
      }
      goto L_08ACF614;
    }
L_08ACF614:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08ACF624;
L_08ACF624:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08ACF630u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 84u, 0x088A8494u>(ctx, &aot_mem) && ctx.pc == 0x08ACF630u) goto L_08ACF630;
    return;
L_08ACF630:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACF664;
      }
      goto L_08ACF638;
    }
L_08ACF638:
    ctx.gpr[31] = (0x08ACF640u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 87u, 0x088A84ACu>(ctx, &aot_mem) && ctx.pc == 0x08ACF640u) goto L_08ACF640;
    return;
L_08ACF640:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ACF658;
      }
      goto L_08ACF64C;
    }
L_08ACF64C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ACF658;
L_08ACF658:
    ctx.gpr[31] = (0x08ACF660u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF660u) goto L_08ACF660;
    return;
L_08ACF660:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08ACF664;
L_08ACF664:
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
L_08ACF67C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF6A4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x08ACF6A4u) goto L_08ACF6A4;
    return;
L_08ACF6A4:
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5992));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u | 3u);
      if (branch_taken) {
          goto L_08ACF744;
      }
      goto L_08ACF6B4;
    }
L_08ACF6B4:
    ctx.gpr[31] = (0x08ACF6BCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF6BCu) goto L_08ACF6BC;
    return;
L_08ACF6BC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ACF6E8;
      }
      goto L_08ACF6C4;
    }
L_08ACF6C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF6D0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08ACF6D0u) goto L_08ACF6D0;
    return;
L_08ACF6D0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACF6E0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 92u, 0x088A84D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACF6E0u) goto L_08ACF6E0;
    return;
L_08ACF6E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF73C;
      }
      goto L_08ACF6E8;
    }
L_08ACF6E8:
    ctx.gpr[31] = (0x08ACF6F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF6F0u) goto L_08ACF6F0;
    return;
L_08ACF6F0:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACF720;
      }
      goto L_08ACF6FC;
    }
L_08ACF6FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF708u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08ACF708u) goto L_08ACF708;
    return;
L_08ACF708:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACF718u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 94u, 0x088A84E4u>(ctx, &aot_mem) && ctx.pc == 0x08ACF718u) goto L_08ACF718;
    return;
L_08ACF718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF73C;
      }
      goto L_08ACF720;
    }
L_08ACF720:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF72Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08ACF72Cu) goto L_08ACF72C;
    return;
L_08ACF72C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACF73Cu);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 88u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x08ACF73Cu) goto L_08ACF73C;
    return;
L_08ACF73C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACF7C4;
      }
      goto L_08ACF744;
    }
L_08ACF744:
    ctx.gpr[31] = (0x08ACF74Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF74Cu) goto L_08ACF74C;
    return;
L_08ACF74C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ACF774;
      }
      goto L_08ACF754;
    }
L_08ACF754:
    ctx.gpr[31] = (0x08ACF75Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 93u, 0x088A84DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACF75Cu) goto L_08ACF75C;
    return;
L_08ACF75C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF76Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF76Cu) goto L_08ACF76C;
    return;
L_08ACF76C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF7C0;
      }
      goto L_08ACF774;
    }
L_08ACF774:
    ctx.gpr[31] = (0x08ACF77Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF77Cu) goto L_08ACF77C;
    return;
L_08ACF77C:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACF7A8;
      }
      goto L_08ACF788;
    }
L_08ACF788:
    ctx.gpr[31] = (0x08ACF790u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 95u, 0x088A84ECu>(ctx, &aot_mem) && ctx.pc == 0x08ACF790u) goto L_08ACF790;
    return;
L_08ACF790:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF7A0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF7A0u) goto L_08ACF7A0;
    return;
L_08ACF7A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF7C0;
      }
      goto L_08ACF7A8;
    }
L_08ACF7A8:
    ctx.gpr[31] = (0x08ACF7B0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 89u, 0x088A84BCu>(ctx, &aot_mem) && ctx.pc == 0x08ACF7B0u) goto L_08ACF7B0;
    return;
L_08ACF7B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF7C0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF7C0u) goto L_08ACF7C0;
    return;
L_08ACF7C0:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08ACF7C4;
L_08ACF7C4:
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
L_08ACF7E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF804u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x08ACF804u) goto L_08ACF804;
    return;
L_08ACF804:
    ctx.gpr[17] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_08ACF834;
      }
      goto L_08ACF810;
    }
L_08ACF810:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF81Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08ACF81Cu) goto L_08ACF81C;
    return;
L_08ACF81C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACF82Cu);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 90u, 0x088A84C4u>(ctx, &aot_mem) && ctx.pc == 0x08ACF82Cu) goto L_08ACF82C;
    return;
L_08ACF82C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACF850;
      }
      goto L_08ACF834;
    }
L_08ACF834:
    ctx.gpr[31] = (0x08ACF83Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 91u, 0x088A84CCu>(ctx, &aot_mem) && ctx.pc == 0x08ACF83Cu) goto L_08ACF83C;
    return;
L_08ACF83C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF84Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF84Cu) goto L_08ACF84C;
    return;
L_08ACF84C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08ACF850;
L_08ACF850:
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
L_08ACF868:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF88Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x08ACF88Cu) goto L_08ACF88C;
    return;
L_08ACF88C:
    ctx.gpr[16] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_08ACF8F0;
      }
      goto L_08ACF898;
    }
L_08ACF898:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACF8A4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08ACF8A4u) goto L_08ACF8A4;
    return;
L_08ACF8A4:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08ACF8CC;
    }
    goto L_08ACF8C0;
L_08ACF8C0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ACF8DC;
      }
      goto L_08ACF8CC;
    }
L_08ACF8CC:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08ACF8DC;
L_08ACF8DC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08ACF8E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 272u, 0x088A9338u>(ctx, &aot_mem) && ctx.pc == 0x08ACF8E8u) goto L_08ACF8E8;
    return;
L_08ACF8E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACF91C;
      }
      goto L_08ACF8F0;
    }
L_08ACF8F0:
    ctx.gpr[31] = (0x08ACF8F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 273u, 0x088A9340u>(ctx, &aot_mem) && ctx.pc == 0x08ACF8F8u) goto L_08ACF8F8;
    return;
L_08ACF8F8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ACF910;
      }
      goto L_08ACF904;
    }
L_08ACF904:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ACF910;
L_08ACF910:
    ctx.gpr[31] = (0x08ACF918u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF918u) goto L_08ACF918;
    return;
L_08ACF918:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08ACF91C;
L_08ACF91C:
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
L_08ACF934:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACF958u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08ACF958u) goto L_08ACF958;
    return;
L_08ACF958:
    ctx.gpr[17] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_08ACF998;
      }
      goto L_08ACF964;
    }
L_08ACF964:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACF970u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF970u) goto L_08ACF970;
    return;
L_08ACF970:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08ACF984;
      }
      goto L_08ACF978;
    }
L_08ACF978:
    ctx.gpr[4] = (ctx.gpr[16] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ACF990;
      }
      goto L_08ACF984;
    }
L_08ACF984:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_08ACF990;
L_08ACF990:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACF9B4;
      }
      goto L_08ACF998;
    }
L_08ACF998:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[31] = (0x08ACF9B0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08ACF9B0u) goto L_08ACF9B0;
    return;
L_08ACF9B0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08ACF9B4;
L_08ACF9B4:
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
L_08ACF9CC:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[4]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF9E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACFA00u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08ACFA00u) goto L_08ACFA00;
    return;
L_08ACFA00:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFA10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACFA34u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08ACFA34u) goto L_08ACFA34;
    return;
L_08ACFA34:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFA44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACFA68u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08ACFA68u) goto L_08ACFA68;
    return;
L_08ACFA68:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFA78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACFA9Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x08ACFA9Cu) goto L_08ACFA9C;
    return;
L_08ACFA9C:
    ctx.gpr[17] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_08ACFAC8;
      }
      goto L_08ACFAA8;
    }
L_08ACFAA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACFAB4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08ACFAB4u) goto L_08ACFAB4;
    return;
L_08ACFAB4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ACFAE0;
      }
      goto L_08ACFAC8;
    }
L_08ACFAC8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08ACFADCu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFADCu) goto L_08ACFADC;
    return;
L_08ACFADC:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08ACFAE0;
L_08ACFAE0:
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
L_08ACFAF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08ACFB18u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFB18u) goto L_08ACFB18;
    return;
L_08ACFB18:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFB28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08ACFB48u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFB48u) goto L_08ACFB48;
    return;
L_08ACFB48:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFB58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACFB74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 74u, 0x088A843Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFB74u) goto L_08ACFB74;
    return;
L_08ACFB74:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACFB80u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08ACFB80u) goto L_08ACFB80;
    return;
L_08ACFB80:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFB94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACFBC0u);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08ACFBC0u) goto L_08ACFBC0;
    return;
L_08ACFBC0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08ACFBD4u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 100u, 0x088A8514u>(ctx, &aot_mem) && ctx.pc == 0x08ACFBD4u) goto L_08ACFBD4;
    return;
L_08ACFBD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ACFC08;
      }
      goto L_08ACFBFC;
    }
L_08ACFBFC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ACFC08;
L_08ACFC08:
    ctx.gpr[31] = (0x08ACFC10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFC10u) goto L_08ACFC10;
    return;
L_08ACFC10:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08ACFC2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACFC58u);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08ACFC58u) goto L_08ACFC58;
    return;
L_08ACFC58:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08ACFC6Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 15u, 0x088A80E4u>(ctx, &aot_mem) && ctx.pc == 0x08ACFC6Cu) goto L_08ACFC6C;
    return;
L_08ACFC6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACFC78u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08ACFC78u) goto L_08ACFC78;
    return;
L_08ACFC78:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08ACFC94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27772), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4576));
      if (branch_taken) {
          goto L_08ACFCCC;
      }
      goto L_08ACFCC4;
    }
L_08ACFCC4:
    ctx.gpr[31] = (0x08ACFCCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFCCCu) goto L_08ACFCCC;
    return;
L_08ACFCCC:
    ctx.gpr[31] = (0x08ACFCD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 110u, 0x08A0879Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFCD4u) goto L_08ACFCD4;
    return;
L_08ACFCD4:
    ctx.gpr[31] = (0x08ACFCDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 170u, 0x08AE4E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFCDCu) goto L_08ACFCDC;
    return;
L_08ACFCDC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25518), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25519), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08ACFCFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 647u, 0x08ADE738u>(ctx, &aot_mem) && ctx.pc == 0x08ACFCFCu) goto L_08ACFCFC;
    return;
L_08ACFCFC:
    ctx.gpr[4] = (0u | 14u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4576), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25444)));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACFD38;
      }
      goto L_08ACFD24;
    }
L_08ACFD24:
    ctx.gpr[18] = (0u | 7u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACFD34u);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 411u, 0x08AD9BE4u>(ctx, &aot_mem) && ctx.pc == 0x08ACFD34u) goto L_08ACFD34;
    return;
L_08ACFD34:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4576), ctx.gpr[18]);
    goto L_08ACFD38;
L_08ACFD38:
    ctx.gpr[2] = (0u | 1u);
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
L_08ACFD54:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[4]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFD6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACFD90u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x08ACFD90u) goto L_08ACFD90;
    return;
L_08ACFD90:
    ctx.gpr[17] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_08ACFDC4;
      }
      goto L_08ACFD9C;
    }
L_08ACFD9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACFDA8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08ACFDA8u) goto L_08ACFDA8;
    return;
L_08ACFDA8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08ACFDBCu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 292u, 0x088A942Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFDBCu) goto L_08ACFDBC;
    return;
L_08ACFDBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACFDE0;
      }
      goto L_08ACFDC4;
    }
L_08ACFDC4:
    ctx.gpr[31] = (0x08ACFDCCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 293u, 0x088A9434u>(ctx, &aot_mem) && ctx.pc == 0x08ACFDCCu) goto L_08ACFDCC;
    return;
L_08ACFDCC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACFDDCu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFDDCu) goto L_08ACFDDC;
    return;
L_08ACFDDC:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08ACFDE0;
L_08ACFDE0:
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
L_08ACFDF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACFE1Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08ACFE1Cu) goto L_08ACFE1C;
    return;
L_08ACFE1C:
    ctx.gpr[17] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_08ACFE48;
      }
      goto L_08ACFE28;
    }
L_08ACFE28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACFE34u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFE34u) goto L_08ACFE34;
    return;
L_08ACFE34:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACFE58;
      }
      goto L_08ACFE48;
    }
L_08ACFE48:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08ACFE54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08ACFE54u) goto L_08ACFE54;
    return;
L_08ACFE54:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08ACFE58;
L_08ACFE58:
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
L_08ACFE70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACFEB4;
      }
      goto L_08ACFE98;
    }
L_08ACFE98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ACFEB8;
      }
      goto L_08ACFEB0;
    }
L_08ACFEB0:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ACFEB4;
L_08ACFEB4:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08ACFEB8;
L_08ACFEB8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACFF30;
      }
      goto L_08ACFEC0;
    }
L_08ACFEC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACFECCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10002));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08ACFECCu) goto L_08ACFECC;
    return;
L_08ACFECC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08ACFF38;
      }
      goto L_08ACFF0C;
    }
L_08ACFF0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACFF18u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08ACFF18u) goto L_08ACFF18;
    return;
L_08ACFF18:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACFF28u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFF28u) goto L_08ACFF28;
    return;
L_08ACFF28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08ACFF3C;
      }
      goto L_08ACFF30;
    }
L_08ACFF30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACFF3C;
      }
      goto L_08ACFF38;
    }
L_08ACFF38:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACFF3C;
L_08ACFF3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACFF50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACFF94;
      }
      goto L_08ACFF78;
    }
L_08ACFF78:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 0 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ACFF98;
      }
      goto L_08ACFF90;
    }
L_08ACFF90:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ACFF94;
L_08ACFF94:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08ACFF98;
L_08ACFF98:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACFFA8;
      }
      goto L_08ACFFA0;
    }
L_08ACFFA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 4u, 0x08AD002Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFFA8;
    }
L_08ACFFA8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACFFC4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08ACFFC4u) goto L_08ACFFC4;
    return;
L_08ACFFC4:
    ctx.gpr[4] = (15733u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.pc = 0x08AD0000u; return;
}

void recomp_unit_0178(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0178_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_178(Runtime &runtime) {
    runtime.register_generated_unit(178u, 0x08ACC000u, 16384u, &recomp_unit_0178, &recomp_unit_0178_entry);
    runtime.register_function(0x08ACC004u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC014u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC01Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC024u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC034u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC054u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC064u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC06Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC074u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC084u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC090u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC09Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC100u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC108u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC114u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC144u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC180u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC194u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC200u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC20Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC214u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC21Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC228u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC22Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC23Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC24Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC26Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC270u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC284u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC290u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC304u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC30Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC314u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC31Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC328u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC340u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC348u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC358u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC38Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC400u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC410u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC41Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC424u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC42Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC434u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC444u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC450u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC460u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC468u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC46Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC488u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC490u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC494u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC4B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC4C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC4C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC4CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC4E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC4F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC500u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC508u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC50Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC540u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC590u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC59Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC600u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC628u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC640u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC648u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC650u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC668u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC678u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC688u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC698u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC704u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC714u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC73Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC74Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC764u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC774u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC788u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC790u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC808u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC814u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC81Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC824u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC838u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC848u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC854u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC868u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC878u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC880u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC894u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC89Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC900u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC908u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC910u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC91Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC92Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC934u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC940u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC954u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC968u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC970u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC974u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC984u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC98Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA40u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAD0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAF0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB40u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB5Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBBCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBC8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBF0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBF8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCA4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCCCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE54u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCEB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCECCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCED4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCEDCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCEE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCEFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF64u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFA4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFBCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFC8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFD8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD008u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD018u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD02Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD03Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD050u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD058u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD060u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD074u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD08Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD09Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD114u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD120u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD158u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD164u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD19Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD220u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD22Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD25Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD264u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD274u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD288u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD290u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD29Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD308u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD340u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD35Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD364u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD36Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD374u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD388u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD404u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD41Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD428u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD434u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD440u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD44Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD458u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD464u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD46Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD474u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD488u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD508u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD51Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD524u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD52Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD538u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD548u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD550u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD55Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD570u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD580u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD58Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD600u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD614u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD628u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD634u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD63Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD64Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD654u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD660u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD668u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD678u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD688u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD690u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD698u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD700u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD710u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD720u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD728u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD730u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD73Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD740u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD744u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD74Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD75Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD76Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD774u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD784u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD790u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD798u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD80Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD818u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD834u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD83Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD844u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD858u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD87Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD880u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD890u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD908u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD910u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD91Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD928u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD934u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD93Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD944u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD94Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD950u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD958u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD968u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD974u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD97Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD988u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD998u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA64u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA98u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDABCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC54u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC5Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCBCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCCCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCF0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDDBCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDDD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDDDCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDDE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDDF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDDFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE54u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDEA4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDED0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDEFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF54u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDFACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDFD8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE004u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE030u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE05Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE088u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE0B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE0E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE10Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE138u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE164u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE190u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE19Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE1A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE1B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE1B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE1D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE1D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE200u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE2C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE2F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE31Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE324u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE34Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE354u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE360u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE378u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE394u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE404u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE410u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE420u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE434u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE474u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE488u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE500u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE504u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE50Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE538u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE558u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE61Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE62Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE63Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE680u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE690u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE698u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE6A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE6B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE6B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE6C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE6C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE6E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE6F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE714u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE728u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE738u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE748u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE758u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE768u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE770u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE77Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE784u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE790u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE794u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE80Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE814u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE820u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE828u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE834u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE844u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE850u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE85Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE870u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE884u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE890u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE89Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE904u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE90Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE918u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE924u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE938u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE940u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE95Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE964u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE96Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE97Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE988u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE99Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA98u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAD0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEADCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB40u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB5Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB64u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBBCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBD0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBD8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC54u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECC8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECD0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECF0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED54u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED5Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED64u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDBCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDCCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDF0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDF8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE54u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEEC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEECCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEED8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEEE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEEE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEEF8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF64u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEFACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEFB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEFCCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEFD8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEFF8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF010u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF020u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF028u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF02Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF044u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF05Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF07Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF084u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF094u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF0ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF0C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF0E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF0ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF0FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF108u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF118u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF124u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF134u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF140u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF15Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF170u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF18Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF1A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF1B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF1C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF1D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF1E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF1F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF208u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF22Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF238u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF244u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF25Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF264u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF26Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF27Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF280u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF298u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF2B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF2C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF2D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF2ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF310u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF32Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF338u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF344u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF34Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF360u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF37Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF388u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF394u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF39Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF3B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF3D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF3F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF400u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF414u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF42Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF440u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF44Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF45Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF468u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF474u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF494u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF4B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF4BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF4C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF4D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF4E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF508u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF514u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF520u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF53Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF548u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF558u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF564u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF56Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF574u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF580u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF58Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF594u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF598u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF608u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF614u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF624u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF630u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF638u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF640u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF64Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF658u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF660u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF664u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF67Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF708u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF718u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF720u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF72Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF73Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF744u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF74Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF754u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF75Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF76Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF774u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF77Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF788u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF790u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF804u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF810u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF81Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF82Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF834u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF83Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF84Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF850u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF868u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF88Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF898u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF904u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF910u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF918u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF91Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF934u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF958u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF964u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF970u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF978u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF984u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF990u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF998u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAC8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFADCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAF8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFBC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFBD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFBFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFCC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFCCCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFCD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFCDCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFCFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD54u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDBCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDCCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDDCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDF8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE54u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE98u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFECCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF98u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFFA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFFA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFFC4u, &recomp_unit_0178, "recomp_unit_0178");
}
} // namespace psprecomp
