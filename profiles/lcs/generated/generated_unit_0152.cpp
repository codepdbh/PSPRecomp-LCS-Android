#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0152[4095] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0,
    0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0,
    0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0,
    22, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 32, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0,
    36, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0,
    0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 50,
    0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0,
    58, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 64,
    0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0,
    0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0,
    79, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0,
    0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 93,
    0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 98, 0, 99, 0, 0, 0, 0,
    0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 107,
    0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0,
    0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0,
    0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 131, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0,
    135, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0,
    0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 149,
    0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0,
    0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0,
    164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 169, 0, 170, 0, 0, 0,
    0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0,
    178, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0,
    0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 192,
    0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0,
    0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 203, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 206,
    0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0,
    0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0,
    0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0,
    227, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0,
    0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0,
    0, 0, 0, 0, 241, 242, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0,
    248, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0,
    0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 262,
    0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270,
    0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0,
    0, 276, 277, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 284,
    0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0,
    0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0,
    0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 307, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0,
    0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0,
    319, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0,
    0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0,
    0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 337, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0,
    0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 347,
    0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0,
    0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0,
    0, 0, 362, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368,
    0, 0, 0, 0, 0, 0, 369, 370, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0,
    0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 383,
    0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 0, 0, 0, 0,
    0, 390, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0,
    397, 0, 398, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0,
    403, 404, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 411, 0,
    0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0,
    418, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425,
    0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432,
    0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 435, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 439,
    0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 446, 0, 0, 0,
    0, 0, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0,
    454, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0,
    0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 0, 0,
    0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 471, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0,
    0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 0, 0, 0, 481, 0, 482,
    0, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 0,
    0, 489, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0,
    0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0,
    503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 505, 506, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 0, 0,
    510, 0, 511, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 0,
    0, 0, 0, 0, 518, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 0, 524,
    0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 0,
    0, 0, 0, 532, 0, 533, 0, 0, 0, 0, 0, 0, 534, 0, 535, 0, 0, 0, 0, 0, 0, 536, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0,
    539, 0, 0, 0, 0, 0, 0, 540, 0, 541, 0, 0, 0, 0, 0, 0, 542, 0, 543, 0, 0, 0, 0, 0, 0, 544, 0, 545, 0, 0, 0, 0,
    546, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 550, 551, 0, 552, 0, 0, 0,
    0, 0, 0, 553, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0,
    560, 0, 0, 0, 0, 0, 0, 561, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 564, 0, 0, 0, 0, 0, 0, 565, 0, 566, 0, 0, 0, 0,
    0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 0, 569, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 0, 0, 0, 0, 573, 0, 574,
    0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0,
    0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 584, 585, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 588,
    0, 0, 0, 0, 0, 0, 589, 0, 590, 0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 0, 0, 0, 0, 0, 593, 0, 594, 0, 0, 0, 0, 0,
    0, 595, 0, 596, 0, 0, 0, 0, 0, 0, 597, 0, 598, 0, 0, 0, 0, 0, 0, 599, 0, 600, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0,
    0, 0, 0, 0, 0, 603, 0, 604, 0, 0, 0, 0, 0, 0, 605, 0, 606, 0, 0, 0, 0, 0, 0, 607, 0, 608, 0, 0, 0, 609, 0, 0,
    0, 0, 0, 0, 610, 0, 611, 0, 0, 0, 0, 0, 0, 612, 0, 613, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 617,
    0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 620, 621, 0, 622, 0, 0, 0, 0, 0, 0, 623,
    0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 0, 0,
    0, 0, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0, 636, 0, 0, 0, 0, 0, 0, 637, 0,
    638, 0, 0, 0, 0, 0, 0, 639, 0, 640, 0, 0, 0, 0, 0, 0, 641, 0, 642, 0, 0, 0, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0,
    0, 0, 645, 0, 646, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 651,
    0, 0, 0, 0, 0, 0, 652, 653, 0, 654, 0, 0, 0, 0, 0, 0, 655, 0, 656, 0, 0, 0, 0, 0, 0, 657, 0, 658, 0, 0, 0, 0,
    0, 0, 659, 0, 660, 0, 0, 0, 0, 0, 0, 661, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 665, 0, 666,
    0, 0, 0, 0, 0, 0, 667, 0, 668, 0, 0, 0, 0, 0, 0, 669, 0, 670, 0, 0, 0, 0, 0, 0, 671, 0, 672, 0, 0, 0, 0, 0,
    0, 673, 0, 674, 0, 0, 0, 0, 0, 0, 675, 0, 676, 0, 0, 0, 0, 0, 0, 677, 0, 678, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0,
    680, 0, 681, 0, 0, 0, 0, 0, 0, 682, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 685, 0, 686, 0, 0, 0, 0, 687, 0, 0,
    688, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 691, 692, 0, 693, 0, 0, 0, 0, 0, 0,
    694, 0, 695, 0, 0, 0, 0, 0, 0, 696, 0, 697, 0, 0, 0, 0, 0, 0, 698, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 0,
    0, 0, 0, 0, 702, 0, 703, 0, 0, 0, 0, 0, 0, 704, 0, 705, 0, 0, 0, 0, 0, 0, 706, 0, 707, 0, 0, 0, 0, 0, 0, 708,
    0, 709, 0, 0, 0, 0, 0, 0, 710, 0, 711, 0, 0, 0, 0, 0, 0, 712, 0, 713, 0, 0, 0, 0, 0, 0, 714, 0, 715, 0, 0, 0,
    0, 0, 0, 716, 0, 717, 0, 0, 0, 0, 0, 0, 718, 0, 719, 0, 0, 0, 0, 0, 0, 720, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0,
    723, 0, 0, 0, 724, 0, 0, 0, 725, 0, 0, 0, 0, 726, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 729,
    0, 0, 0, 0, 0, 0, 730, 731, 0, 732, 0, 0, 0, 0, 0, 0, 733, 0, 734, 0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0,
    0, 0, 737, 0, 738, 0, 0, 0, 0, 0, 0, 739, 0, 740, 0, 0, 0, 0, 0, 0, 741, 0, 742, 0, 0, 0, 0, 0, 0, 743, 0, 744,
    0, 0, 0, 0, 0, 0, 745, 0, 746, 0, 0, 0, 0, 0, 0, 747, 0, 748, 0, 0, 0, 0, 0, 0, 749, 0, 750, 0, 0, 0, 0, 0,
    0, 751, 0, 752, 0, 0, 0, 0, 0, 0, 753, 0, 754, 0, 0, 0, 0, 0, 0, 755, 0, 756, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0,
    758, 0, 759, 0, 0, 0, 760, 0, 0, 0, 0, 761, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 764, 0, 0,
    0, 0, 0, 0, 765, 766, 0, 767, 0, 0, 0, 0, 0, 0, 768, 0, 769, 0, 0, 0, 0, 0, 0, 770, 0, 771, 0, 0, 0, 0, 0, 0,
    772, 0, 773, 0, 0, 0, 0, 0, 0, 774, 0, 775, 0, 0, 0, 0, 0, 0, 776, 0, 777, 0, 0, 0, 0, 0, 0, 778, 0, 779, 0, 0,
    0, 0, 0, 0, 780, 0, 781, 0, 0, 0, 0, 0, 0, 782, 0, 783, 0, 0, 0, 0, 0, 0, 784, 0, 785, 0, 0, 0, 0, 0, 0, 786,
    0, 787, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 789, 0, 790, 0, 0, 0, 791, 0, 0, 0, 0, 792, 0, 0, 793, 0, 0, 0, 0, 0,
    0, 0, 0, 794, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 796, 797, 0, 798, 0, 0, 0, 0, 0, 0, 799, 0, 800, 0, 0, 0,
    0, 0, 0, 801, 0, 802, 0, 0, 0, 0, 0, 0, 803, 0, 804, 0, 0, 0, 0, 0, 0, 805, 0, 806, 0, 0, 0, 0, 0, 0, 807, 0,
    808, 0, 0, 0, 0, 0, 0, 809, 0, 810, 0, 0, 0, 0, 0, 0, 811, 0, 812, 0, 0, 0, 0, 0, 0, 813, 0, 814, 0, 0, 0, 0,
    0, 0, 815, 0, 816, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 818, 0, 819, 0, 0, 0, 820, 0, 0, 0, 0, 0, 0, 821, 0, 822, 0,
    0, 0, 0, 0, 0, 823, 0, 824, 0, 0, 0, 0, 825, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 828, 0,
    0, 0, 0, 0, 0, 829, 830, 0, 831, 0, 0, 0, 0, 0, 0, 832, 0, 833, 0, 0, 0, 0, 0, 0, 834, 0, 835, 0, 0, 0, 0, 0,
    0, 836, 0, 837, 0, 0, 0, 0, 0, 0, 838, 0, 839, 0, 0, 0, 0, 0, 0, 840, 0, 841, 0, 0, 0, 0, 0, 0, 842, 0, 843, 0,
    0, 0, 0, 0, 0, 844, 0, 845, 0, 0, 0, 0, 0, 0, 846, 0, 847, 0, 0, 0, 0, 0, 0, 848, 0, 849, 0, 0, 0, 0, 0, 0,
    850, 0, 851, 0, 0, 0, 0, 0, 0, 852, 0, 853, 0, 0, 0, 0, 0, 0, 854, 0, 855, 0, 0, 0, 0, 0, 0, 856, 0, 857, 0, 0,
    0, 0, 0, 0, 858, 0, 859, 0, 0, 0, 0, 0, 0, 860, 0, 861, 0, 0, 0, 0, 862, 0, 0, 863, 0, 0, 0, 0, 0, 0, 0, 0,
    864, 0, 0, 0, 0, 0, 865, 0, 0, 0, 0, 0, 0, 866, 867, 0, 868, 0, 0, 0, 0, 0, 0, 869, 0, 870, 0, 0, 0, 0, 0, 0,
    871, 0, 872, 0, 0, 0, 0, 0, 0, 873, 0, 874, 0, 0, 0, 0, 0, 0, 875, 0, 876, 0, 0, 0, 0, 0, 0, 877, 0, 878, 0, 0,
    0, 0, 0, 0, 879, 0, 880, 0, 0, 0, 0, 0, 0, 881, 0, 882, 0, 0, 0, 0, 0, 0, 883, 0, 884, 0, 0, 0, 0, 0, 0, 885,
    0, 886, 0, 0, 0, 887, 0, 0, 0, 0, 0, 0, 888, 0, 889, 0, 0, 0, 890, 0, 0, 0, 0, 891, 0, 0, 892, 0, 0, 0, 0, 0,
    0, 0, 0, 893, 0, 0, 0, 0, 0, 894, 0, 0, 0, 0, 0, 0, 895, 896, 0, 897, 0, 0, 0, 0, 0, 0, 898, 0, 899, 0, 0, 0,
    0, 0, 0, 900, 0, 901, 0, 0, 0, 0, 0, 0, 902, 0, 903, 0, 0, 0, 0, 0, 0, 904, 0, 905, 0, 0, 0, 0, 0, 0, 906,
};
void recomp_unit_0152_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A64000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0152[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A64000;
    case 2u: goto L_08A64018;
    case 3u: goto L_08A64020;
    case 4u: goto L_08A6403C;
    case 5u: goto L_08A64044;
    case 6u: goto L_08A64060;
    case 7u: goto L_08A64068;
    case 8u: goto L_08A64084;
    case 9u: goto L_08A6408C;
    case 10u: goto L_08A640A8;
    case 11u: goto L_08A640B0;
    case 12u: goto L_08A640CC;
    case 13u: goto L_08A640D4;
    case 14u: goto L_08A640F0;
    case 15u: goto L_08A640F8;
    case 16u: goto L_08A64114;
    case 17u: goto L_08A6411C;
    case 18u: goto L_08A64138;
    case 19u: goto L_08A64140;
    case 20u: goto L_08A6415C;
    case 21u: goto L_08A64164;
    case 22u: goto L_08A64180;
    case 23u: goto L_08A64188;
    case 24u: goto L_08A641A4;
    case 25u: goto L_08A641AC;
    case 26u: goto L_08A641BC;
    case 27u: goto L_08A641D0;
    case 28u: goto L_08A641DC;
    case 29u: goto L_08A64200;
    case 30u: goto L_08A64218;
    case 31u: goto L_08A64234;
    case 32u: goto L_08A64238;
    case 33u: goto L_08A64240;
    case 34u: goto L_08A6425C;
    case 35u: goto L_08A64264;
    case 36u: goto L_08A64280;
    case 37u: goto L_08A64288;
    case 38u: goto L_08A642A4;
    case 39u: goto L_08A642AC;
    case 40u: goto L_08A642C8;
    case 41u: goto L_08A642D0;
    case 42u: goto L_08A642EC;
    case 43u: goto L_08A642F4;
    case 44u: goto L_08A64310;
    case 45u: goto L_08A64318;
    case 46u: goto L_08A64334;
    case 47u: goto L_08A6433C;
    case 48u: goto L_08A64358;
    case 49u: goto L_08A64360;
    case 50u: goto L_08A6437C;
    case 51u: goto L_08A64384;
    case 52u: goto L_08A643A0;
    case 53u: goto L_08A643A8;
    case 54u: goto L_08A643C4;
    case 55u: goto L_08A643CC;
    case 56u: goto L_08A643E8;
    case 57u: goto L_08A643F0;
    case 58u: goto L_08A64400;
    case 59u: goto L_08A64414;
    case 60u: goto L_08A64420;
    case 61u: goto L_08A64444;
    case 62u: goto L_08A6445C;
    case 63u: goto L_08A64478;
    case 64u: goto L_08A6447C;
    case 65u: goto L_08A64484;
    case 66u: goto L_08A644A0;
    case 67u: goto L_08A644A8;
    case 68u: goto L_08A644C4;
    case 69u: goto L_08A644CC;
    case 70u: goto L_08A644E8;
    case 71u: goto L_08A644F0;
    case 72u: goto L_08A6450C;
    case 73u: goto L_08A64514;
    case 74u: goto L_08A64530;
    case 75u: goto L_08A64538;
    case 76u: goto L_08A64554;
    case 77u: goto L_08A6455C;
    case 78u: goto L_08A64578;
    case 79u: goto L_08A64580;
    case 80u: goto L_08A6459C;
    case 81u: goto L_08A645A4;
    case 82u: goto L_08A645C0;
    case 83u: goto L_08A645C8;
    case 84u: goto L_08A645E4;
    case 85u: goto L_08A645EC;
    case 86u: goto L_08A64608;
    case 87u: goto L_08A64610;
    case 88u: goto L_08A6462C;
    case 89u: goto L_08A64634;
    case 90u: goto L_08A64650;
    case 91u: goto L_08A64658;
    case 92u: goto L_08A64668;
    case 93u: goto L_08A6467C;
    case 94u: goto L_08A64688;
    case 95u: goto L_08A646AC;
    case 96u: goto L_08A646C4;
    case 97u: goto L_08A646E0;
    case 98u: goto L_08A646E4;
    case 99u: goto L_08A646EC;
    case 100u: goto L_08A64708;
    case 101u: goto L_08A64710;
    case 102u: goto L_08A6472C;
    case 103u: goto L_08A64734;
    case 104u: goto L_08A64750;
    case 105u: goto L_08A64758;
    case 106u: goto L_08A64774;
    case 107u: goto L_08A6477C;
    case 108u: goto L_08A64798;
    case 109u: goto L_08A647A0;
    case 110u: goto L_08A647BC;
    case 111u: goto L_08A647C4;
    case 112u: goto L_08A647E0;
    case 113u: goto L_08A647E8;
    case 114u: goto L_08A64804;
    case 115u: goto L_08A6480C;
    case 116u: goto L_08A64828;
    case 117u: goto L_08A64830;
    case 118u: goto L_08A6484C;
    case 119u: goto L_08A64854;
    case 120u: goto L_08A64870;
    case 121u: goto L_08A64878;
    case 122u: goto L_08A64894;
    case 123u: goto L_08A6489C;
    case 124u: goto L_08A648AC;
    case 125u: goto L_08A648BC;
    case 126u: goto L_08A648D0;
    case 127u: goto L_08A648DC;
    case 128u: goto L_08A64900;
    case 129u: goto L_08A64918;
    case 130u: goto L_08A64934;
    case 131u: goto L_08A64938;
    case 132u: goto L_08A64940;
    case 133u: goto L_08A6495C;
    case 134u: goto L_08A64964;
    case 135u: goto L_08A64980;
    case 136u: goto L_08A64988;
    case 137u: goto L_08A649A4;
    case 138u: goto L_08A649AC;
    case 139u: goto L_08A649C8;
    case 140u: goto L_08A649D0;
    case 141u: goto L_08A649EC;
    case 142u: goto L_08A649F4;
    case 143u: goto L_08A64A10;
    case 144u: goto L_08A64A18;
    case 145u: goto L_08A64A34;
    case 146u: goto L_08A64A3C;
    case 147u: goto L_08A64A58;
    case 148u: goto L_08A64A60;
    case 149u: goto L_08A64A7C;
    case 150u: goto L_08A64A84;
    case 151u: goto L_08A64AA0;
    case 152u: goto L_08A64AA8;
    case 153u: goto L_08A64AC4;
    case 154u: goto L_08A64ACC;
    case 155u: goto L_08A64AE8;
    case 156u: goto L_08A64AF0;
    case 157u: goto L_08A64B0C;
    case 158u: goto L_08A64B14;
    case 159u: goto L_08A64B30;
    case 160u: goto L_08A64B38;
    case 161u: goto L_08A64B54;
    case 162u: goto L_08A64B5C;
    case 163u: goto L_08A64B6C;
    case 164u: goto L_08A64B80;
    case 165u: goto L_08A64B8C;
    case 166u: goto L_08A64BB0;
    case 167u: goto L_08A64BC8;
    case 168u: goto L_08A64BE4;
    case 169u: goto L_08A64BE8;
    case 170u: goto L_08A64BF0;
    case 171u: goto L_08A64C0C;
    case 172u: goto L_08A64C14;
    case 173u: goto L_08A64C30;
    case 174u: goto L_08A64C38;
    case 175u: goto L_08A64C54;
    case 176u: goto L_08A64C5C;
    case 177u: goto L_08A64C78;
    case 178u: goto L_08A64C80;
    case 179u: goto L_08A64C9C;
    case 180u: goto L_08A64CA4;
    case 181u: goto L_08A64CC0;
    case 182u: goto L_08A64CC8;
    case 183u: goto L_08A64CE4;
    case 184u: goto L_08A64CEC;
    case 185u: goto L_08A64D08;
    case 186u: goto L_08A64D10;
    case 187u: goto L_08A64D2C;
    case 188u: goto L_08A64D34;
    case 189u: goto L_08A64D50;
    case 190u: goto L_08A64D58;
    case 191u: goto L_08A64D74;
    case 192u: goto L_08A64D7C;
    case 193u: goto L_08A64D8C;
    case 194u: goto L_08A64DA8;
    case 195u: goto L_08A64DB0;
    case 196u: goto L_08A64DCC;
    case 197u: goto L_08A64DD4;
    case 198u: goto L_08A64DE8;
    case 199u: goto L_08A64DF4;
    case 200u: goto L_08A64E18;
    case 201u: goto L_08A64E30;
    case 202u: goto L_08A64E4C;
    case 203u: goto L_08A64E50;
    case 204u: goto L_08A64E58;
    case 205u: goto L_08A64E74;
    case 206u: goto L_08A64E7C;
    case 207u: goto L_08A64E98;
    case 208u: goto L_08A64EA0;
    case 209u: goto L_08A64EBC;
    case 210u: goto L_08A64EC4;
    case 211u: goto L_08A64EE0;
    case 212u: goto L_08A64EE8;
    case 213u: goto L_08A64F04;
    case 214u: goto L_08A64F0C;
    case 215u: goto L_08A64F28;
    case 216u: goto L_08A64F30;
    case 217u: goto L_08A64F4C;
    case 218u: goto L_08A64F54;
    case 219u: goto L_08A64F70;
    case 220u: goto L_08A64F78;
    case 221u: goto L_08A64F94;
    case 222u: goto L_08A64F9C;
    case 223u: goto L_08A64FB8;
    case 224u: goto L_08A64FC0;
    case 225u: goto L_08A64FDC;
    case 226u: goto L_08A64FE4;
    case 227u: goto L_08A65000;
    case 228u: goto L_08A65008;
    case 229u: goto L_08A65024;
    case 230u: goto L_08A6502C;
    case 231u: goto L_08A65048;
    case 232u: goto L_08A65050;
    case 233u: goto L_08A6506C;
    case 234u: goto L_08A65074;
    case 235u: goto L_08A65090;
    case 236u: goto L_08A65098;
    case 237u: goto L_08A650AC;
    case 238u: goto L_08A650B8;
    case 239u: goto L_08A650DC;
    case 240u: goto L_08A650F4;
    case 241u: goto L_08A65110;
    case 242u: goto L_08A65114;
    case 243u: goto L_08A6511C;
    case 244u: goto L_08A65138;
    case 245u: goto L_08A65140;
    case 246u: goto L_08A6515C;
    case 247u: goto L_08A65164;
    case 248u: goto L_08A65180;
    case 249u: goto L_08A65188;
    case 250u: goto L_08A651A4;
    case 251u: goto L_08A651AC;
    case 252u: goto L_08A651C8;
    case 253u: goto L_08A651D0;
    case 254u: goto L_08A651EC;
    case 255u: goto L_08A651F4;
    case 256u: goto L_08A65210;
    case 257u: goto L_08A65218;
    case 258u: goto L_08A65234;
    case 259u: goto L_08A6523C;
    case 260u: goto L_08A65258;
    case 261u: goto L_08A65260;
    case 262u: goto L_08A6527C;
    case 263u: goto L_08A65284;
    case 264u: goto L_08A652A0;
    case 265u: goto L_08A652A8;
    case 266u: goto L_08A652C4;
    case 267u: goto L_08A652CC;
    case 268u: goto L_08A652DC;
    case 269u: goto L_08A652EC;
    case 270u: goto L_08A652FC;
    case 271u: goto L_08A6530C;
    case 272u: goto L_08A65320;
    case 273u: goto L_08A6532C;
    case 274u: goto L_08A65350;
    case 275u: goto L_08A65368;
    case 276u: goto L_08A65384;
    case 277u: goto L_08A65388;
    case 278u: goto L_08A65390;
    case 279u: goto L_08A653AC;
    case 280u: goto L_08A653B4;
    case 281u: goto L_08A653D0;
    case 282u: goto L_08A653D8;
    case 283u: goto L_08A653F4;
    case 284u: goto L_08A653FC;
    case 285u: goto L_08A65418;
    case 286u: goto L_08A65420;
    case 287u: goto L_08A6543C;
    case 288u: goto L_08A65444;
    case 289u: goto L_08A65460;
    case 290u: goto L_08A65468;
    case 291u: goto L_08A65484;
    case 292u: goto L_08A6548C;
    case 293u: goto L_08A654A8;
    case 294u: goto L_08A654B0;
    case 295u: goto L_08A654CC;
    case 296u: goto L_08A654D4;
    case 297u: goto L_08A654F0;
    case 298u: goto L_08A654F8;
    case 299u: goto L_08A65514;
    case 300u: goto L_08A6551C;
    case 301u: goto L_08A6552C;
    case 302u: goto L_08A65540;
    case 303u: goto L_08A6554C;
    case 304u: goto L_08A65570;
    case 305u: goto L_08A65588;
    case 306u: goto L_08A655A4;
    case 307u: goto L_08A655A8;
    case 308u: goto L_08A655B0;
    case 309u: goto L_08A655CC;
    case 310u: goto L_08A655D4;
    case 311u: goto L_08A655F0;
    case 312u: goto L_08A655F8;
    case 313u: goto L_08A65614;
    case 314u: goto L_08A6561C;
    case 315u: goto L_08A65638;
    case 316u: goto L_08A65640;
    case 317u: goto L_08A6565C;
    case 318u: goto L_08A65664;
    case 319u: goto L_08A65680;
    case 320u: goto L_08A65688;
    case 321u: goto L_08A656A4;
    case 322u: goto L_08A656AC;
    case 323u: goto L_08A656C8;
    case 324u: goto L_08A656D0;
    case 325u: goto L_08A656EC;
    case 326u: goto L_08A656F4;
    case 327u: goto L_08A65710;
    case 328u: goto L_08A65718;
    case 329u: goto L_08A65734;
    case 330u: goto L_08A6573C;
    case 331u: goto L_08A6574C;
    case 332u: goto L_08A65760;
    case 333u: goto L_08A6576C;
    case 334u: goto L_08A65790;
    case 335u: goto L_08A657A8;
    case 336u: goto L_08A657C4;
    case 337u: goto L_08A657C8;
    case 338u: goto L_08A657D0;
    case 339u: goto L_08A657EC;
    case 340u: goto L_08A657F4;
    case 341u: goto L_08A65810;
    case 342u: goto L_08A65818;
    case 343u: goto L_08A65834;
    case 344u: goto L_08A6583C;
    case 345u: goto L_08A65858;
    case 346u: goto L_08A65860;
    case 347u: goto L_08A6587C;
    case 348u: goto L_08A65884;
    case 349u: goto L_08A658A0;
    case 350u: goto L_08A658A8;
    case 351u: goto L_08A658C4;
    case 352u: goto L_08A658CC;
    case 353u: goto L_08A658E8;
    case 354u: goto L_08A658F0;
    case 355u: goto L_08A6590C;
    case 356u: goto L_08A65914;
    case 357u: goto L_08A65930;
    case 358u: goto L_08A65938;
    case 359u: goto L_08A65954;
    case 360u: goto L_08A6595C;
    case 361u: goto L_08A6596C;
    case 362u: goto L_08A65988;
    case 363u: goto L_08A65990;
    case 364u: goto L_08A659A0;
    case 365u: goto L_08A659B4;
    case 366u: goto L_08A659C0;
    case 367u: goto L_08A659E4;
    case 368u: goto L_08A659FC;
    case 369u: goto L_08A65A18;
    case 370u: goto L_08A65A1C;
    case 371u: goto L_08A65A24;
    case 372u: goto L_08A65A40;
    case 373u: goto L_08A65A48;
    case 374u: goto L_08A65A64;
    case 375u: goto L_08A65A6C;
    case 376u: goto L_08A65A88;
    case 377u: goto L_08A65A90;
    case 378u: goto L_08A65AAC;
    case 379u: goto L_08A65AB4;
    case 380u: goto L_08A65AD0;
    case 381u: goto L_08A65AD8;
    case 382u: goto L_08A65AF4;
    case 383u: goto L_08A65AFC;
    case 384u: goto L_08A65B18;
    case 385u: goto L_08A65B20;
    case 386u: goto L_08A65B3C;
    case 387u: goto L_08A65B44;
    case 388u: goto L_08A65B60;
    case 389u: goto L_08A65B68;
    case 390u: goto L_08A65B84;
    case 391u: goto L_08A65B8C;
    case 392u: goto L_08A65B9C;
    case 393u: goto L_08A65BB8;
    case 394u: goto L_08A65BC0;
    case 395u: goto L_08A65BDC;
    case 396u: goto L_08A65BE4;
    case 397u: goto L_08A65C00;
    case 398u: goto L_08A65C08;
    case 399u: goto L_08A65C1C;
    case 400u: goto L_08A65C28;
    case 401u: goto L_08A65C4C;
    case 402u: goto L_08A65C64;
    case 403u: goto L_08A65C80;
    case 404u: goto L_08A65C84;
    case 405u: goto L_08A65C8C;
    case 406u: goto L_08A65CA8;
    case 407u: goto L_08A65CB0;
    case 408u: goto L_08A65CCC;
    case 409u: goto L_08A65CD4;
    case 410u: goto L_08A65CF0;
    case 411u: goto L_08A65CF8;
    case 412u: goto L_08A65D14;
    case 413u: goto L_08A65D1C;
    case 414u: goto L_08A65D38;
    case 415u: goto L_08A65D40;
    case 416u: goto L_08A65D5C;
    case 417u: goto L_08A65D64;
    case 418u: goto L_08A65D80;
    case 419u: goto L_08A65D88;
    case 420u: goto L_08A65DA4;
    case 421u: goto L_08A65DAC;
    case 422u: goto L_08A65DC8;
    case 423u: goto L_08A65DD0;
    case 424u: goto L_08A65DE0;
    case 425u: goto L_08A65DFC;
    case 426u: goto L_08A65E04;
    case 427u: goto L_08A65E20;
    case 428u: goto L_08A65E28;
    case 429u: goto L_08A65E38;
    case 430u: goto L_08A65E4C;
    case 431u: goto L_08A65E58;
    case 432u: goto L_08A65E7C;
    case 433u: goto L_08A65E94;
    case 434u: goto L_08A65EB0;
    case 435u: goto L_08A65EB4;
    case 436u: goto L_08A65EBC;
    case 437u: goto L_08A65ED8;
    case 438u: goto L_08A65EE0;
    case 439u: goto L_08A65EFC;
    case 440u: goto L_08A65F04;
    case 441u: goto L_08A65F20;
    case 442u: goto L_08A65F28;
    case 443u: goto L_08A65F44;
    case 444u: goto L_08A65F4C;
    case 445u: goto L_08A65F68;
    case 446u: goto L_08A65F70;
    case 447u: goto L_08A65F8C;
    case 448u: goto L_08A65F94;
    case 449u: goto L_08A65FB0;
    case 450u: goto L_08A65FB8;
    case 451u: goto L_08A65FD4;
    case 452u: goto L_08A65FDC;
    case 453u: goto L_08A65FF8;
    case 454u: goto L_08A66000;
    case 455u: goto L_08A6601C;
    case 456u: goto L_08A66024;
    case 457u: goto L_08A66040;
    case 458u: goto L_08A66048;
    case 459u: goto L_08A66064;
    case 460u: goto L_08A6606C;
    case 461u: goto L_08A66088;
    case 462u: goto L_08A66090;
    case 463u: goto L_08A660AC;
    case 464u: goto L_08A660B4;
    case 465u: goto L_08A660C4;
    case 466u: goto L_08A660D8;
    case 467u: goto L_08A660E4;
    case 468u: goto L_08A66108;
    case 469u: goto L_08A66120;
    case 470u: goto L_08A6613C;
    case 471u: goto L_08A66140;
    case 472u: goto L_08A66148;
    case 473u: goto L_08A66164;
    case 474u: goto L_08A6616C;
    case 475u: goto L_08A66188;
    case 476u: goto L_08A66190;
    case 477u: goto L_08A661AC;
    case 478u: goto L_08A661B4;
    case 479u: goto L_08A661D0;
    case 480u: goto L_08A661D8;
    case 481u: goto L_08A661F4;
    case 482u: goto L_08A661FC;
    case 483u: goto L_08A66218;
    case 484u: goto L_08A66220;
    case 485u: goto L_08A6623C;
    case 486u: goto L_08A66244;
    case 487u: goto L_08A66260;
    case 488u: goto L_08A66268;
    case 489u: goto L_08A66284;
    case 490u: goto L_08A6628C;
    case 491u: goto L_08A662A8;
    case 492u: goto L_08A662B0;
    case 493u: goto L_08A662CC;
    case 494u: goto L_08A662D4;
    case 495u: goto L_08A662F0;
    case 496u: goto L_08A662F8;
    case 497u: goto L_08A66308;
    case 498u: goto L_08A66318;
    case 499u: goto L_08A66334;
    case 500u: goto L_08A6633C;
    case 501u: goto L_08A66350;
    case 502u: goto L_08A6635C;
    case 503u: goto L_08A66380;
    case 504u: goto L_08A66398;
    case 505u: goto L_08A663B4;
    case 506u: goto L_08A663B8;
    case 507u: goto L_08A663C0;
    case 508u: goto L_08A663DC;
    case 509u: goto L_08A663E4;
    case 510u: goto L_08A66400;
    case 511u: goto L_08A66408;
    case 512u: goto L_08A66424;
    case 513u: goto L_08A6642C;
    case 514u: goto L_08A66448;
    case 515u: goto L_08A66450;
    case 516u: goto L_08A6646C;
    case 517u: goto L_08A66474;
    case 518u: goto L_08A66490;
    case 519u: goto L_08A66498;
    case 520u: goto L_08A664B4;
    case 521u: goto L_08A664BC;
    case 522u: goto L_08A664D8;
    case 523u: goto L_08A664E0;
    case 524u: goto L_08A664FC;
    case 525u: goto L_08A66504;
    case 526u: goto L_08A66520;
    case 527u: goto L_08A66528;
    case 528u: goto L_08A66544;
    case 529u: goto L_08A6654C;
    case 530u: goto L_08A66568;
    case 531u: goto L_08A66570;
    case 532u: goto L_08A6658C;
    case 533u: goto L_08A66594;
    case 534u: goto L_08A665B0;
    case 535u: goto L_08A665B8;
    case 536u: goto L_08A665D4;
    case 537u: goto L_08A665DC;
    case 538u: goto L_08A665F8;
    case 539u: goto L_08A66600;
    case 540u: goto L_08A6661C;
    case 541u: goto L_08A66624;
    case 542u: goto L_08A66640;
    case 543u: goto L_08A66648;
    case 544u: goto L_08A66664;
    case 545u: goto L_08A6666C;
    case 546u: goto L_08A66680;
    case 547u: goto L_08A6668C;
    case 548u: goto L_08A666B0;
    case 549u: goto L_08A666C8;
    case 550u: goto L_08A666E4;
    case 551u: goto L_08A666E8;
    case 552u: goto L_08A666F0;
    case 553u: goto L_08A6670C;
    case 554u: goto L_08A66714;
    case 555u: goto L_08A66730;
    case 556u: goto L_08A66738;
    case 557u: goto L_08A66754;
    case 558u: goto L_08A6675C;
    case 559u: goto L_08A66778;
    case 560u: goto L_08A66780;
    case 561u: goto L_08A6679C;
    case 562u: goto L_08A667A4;
    case 563u: goto L_08A667C0;
    case 564u: goto L_08A667C8;
    case 565u: goto L_08A667E4;
    case 566u: goto L_08A667EC;
    case 567u: goto L_08A66808;
    case 568u: goto L_08A66810;
    case 569u: goto L_08A6682C;
    case 570u: goto L_08A66834;
    case 571u: goto L_08A66850;
    case 572u: goto L_08A66858;
    case 573u: goto L_08A66874;
    case 574u: goto L_08A6687C;
    case 575u: goto L_08A66898;
    case 576u: goto L_08A668A0;
    case 577u: goto L_08A668BC;
    case 578u: goto L_08A668C4;
    case 579u: goto L_08A668D4;
    case 580u: goto L_08A668E8;
    case 581u: goto L_08A668F4;
    case 582u: goto L_08A66918;
    case 583u: goto L_08A66930;
    case 584u: goto L_08A6694C;
    case 585u: goto L_08A66950;
    case 586u: goto L_08A66958;
    case 587u: goto L_08A66974;
    case 588u: goto L_08A6697C;
    case 589u: goto L_08A66998;
    case 590u: goto L_08A669A0;
    case 591u: goto L_08A669BC;
    case 592u: goto L_08A669C4;
    case 593u: goto L_08A669E0;
    case 594u: goto L_08A669E8;
    case 595u: goto L_08A66A04;
    case 596u: goto L_08A66A0C;
    case 597u: goto L_08A66A28;
    case 598u: goto L_08A66A30;
    case 599u: goto L_08A66A4C;
    case 600u: goto L_08A66A54;
    case 601u: goto L_08A66A70;
    case 602u: goto L_08A66A78;
    case 603u: goto L_08A66A94;
    case 604u: goto L_08A66A9C;
    case 605u: goto L_08A66AB8;
    case 606u: goto L_08A66AC0;
    case 607u: goto L_08A66ADC;
    case 608u: goto L_08A66AE4;
    case 609u: goto L_08A66AF4;
    case 610u: goto L_08A66B10;
    case 611u: goto L_08A66B18;
    case 612u: goto L_08A66B34;
    case 613u: goto L_08A66B3C;
    case 614u: goto L_08A66B4C;
    case 615u: goto L_08A66B5C;
    case 616u: goto L_08A66B70;
    case 617u: goto L_08A66B7C;
    case 618u: goto L_08A66BA0;
    case 619u: goto L_08A66BB8;
    case 620u: goto L_08A66BD4;
    case 621u: goto L_08A66BD8;
    case 622u: goto L_08A66BE0;
    case 623u: goto L_08A66BFC;
    case 624u: goto L_08A66C04;
    case 625u: goto L_08A66C20;
    case 626u: goto L_08A66C28;
    case 627u: goto L_08A66C44;
    case 628u: goto L_08A66C4C;
    case 629u: goto L_08A66C68;
    case 630u: goto L_08A66C70;
    case 631u: goto L_08A66C8C;
    case 632u: goto L_08A66C94;
    case 633u: goto L_08A66CB0;
    case 634u: goto L_08A66CB8;
    case 635u: goto L_08A66CD4;
    case 636u: goto L_08A66CDC;
    case 637u: goto L_08A66CF8;
    case 638u: goto L_08A66D00;
    case 639u: goto L_08A66D1C;
    case 640u: goto L_08A66D24;
    case 641u: goto L_08A66D40;
    case 642u: goto L_08A66D48;
    case 643u: goto L_08A66D64;
    case 644u: goto L_08A66D6C;
    case 645u: goto L_08A66D88;
    case 646u: goto L_08A66D90;
    case 647u: goto L_08A66DA0;
    case 648u: goto L_08A66DB4;
    case 649u: goto L_08A66DC0;
    case 650u: goto L_08A66DE4;
    case 651u: goto L_08A66DFC;
    case 652u: goto L_08A66E18;
    case 653u: goto L_08A66E1C;
    case 654u: goto L_08A66E24;
    case 655u: goto L_08A66E40;
    case 656u: goto L_08A66E48;
    case 657u: goto L_08A66E64;
    case 658u: goto L_08A66E6C;
    case 659u: goto L_08A66E88;
    case 660u: goto L_08A66E90;
    case 661u: goto L_08A66EAC;
    case 662u: goto L_08A66EB4;
    case 663u: goto L_08A66ED0;
    case 664u: goto L_08A66ED8;
    case 665u: goto L_08A66EF4;
    case 666u: goto L_08A66EFC;
    case 667u: goto L_08A66F18;
    case 668u: goto L_08A66F20;
    case 669u: goto L_08A66F3C;
    case 670u: goto L_08A66F44;
    case 671u: goto L_08A66F60;
    case 672u: goto L_08A66F68;
    case 673u: goto L_08A66F84;
    case 674u: goto L_08A66F8C;
    case 675u: goto L_08A66FA8;
    case 676u: goto L_08A66FB0;
    case 677u: goto L_08A66FCC;
    case 678u: goto L_08A66FD4;
    case 679u: goto L_08A66FE4;
    case 680u: goto L_08A67000;
    case 681u: goto L_08A67008;
    case 682u: goto L_08A67024;
    case 683u: goto L_08A6702C;
    case 684u: goto L_08A6703C;
    case 685u: goto L_08A67058;
    case 686u: goto L_08A67060;
    case 687u: goto L_08A67074;
    case 688u: goto L_08A67080;
    case 689u: goto L_08A670A4;
    case 690u: goto L_08A670BC;
    case 691u: goto L_08A670D8;
    case 692u: goto L_08A670DC;
    case 693u: goto L_08A670E4;
    case 694u: goto L_08A67100;
    case 695u: goto L_08A67108;
    case 696u: goto L_08A67124;
    case 697u: goto L_08A6712C;
    case 698u: goto L_08A67148;
    case 699u: goto L_08A67150;
    case 700u: goto L_08A6716C;
    case 701u: goto L_08A67174;
    case 702u: goto L_08A67190;
    case 703u: goto L_08A67198;
    case 704u: goto L_08A671B4;
    case 705u: goto L_08A671BC;
    case 706u: goto L_08A671D8;
    case 707u: goto L_08A671E0;
    case 708u: goto L_08A671FC;
    case 709u: goto L_08A67204;
    case 710u: goto L_08A67220;
    case 711u: goto L_08A67228;
    case 712u: goto L_08A67244;
    case 713u: goto L_08A6724C;
    case 714u: goto L_08A67268;
    case 715u: goto L_08A67270;
    case 716u: goto L_08A6728C;
    case 717u: goto L_08A67294;
    case 718u: goto L_08A672B0;
    case 719u: goto L_08A672B8;
    case 720u: goto L_08A672D4;
    case 721u: goto L_08A672DC;
    case 722u: goto L_08A672F8;
    case 723u: goto L_08A67300;
    case 724u: goto L_08A67310;
    case 725u: goto L_08A67320;
    case 726u: goto L_08A67334;
    case 727u: goto L_08A67340;
    case 728u: goto L_08A67364;
    case 729u: goto L_08A6737C;
    case 730u: goto L_08A67398;
    case 731u: goto L_08A6739C;
    case 732u: goto L_08A673A4;
    case 733u: goto L_08A673C0;
    case 734u: goto L_08A673C8;
    case 735u: goto L_08A673E4;
    case 736u: goto L_08A673EC;
    case 737u: goto L_08A67408;
    case 738u: goto L_08A67410;
    case 739u: goto L_08A6742C;
    case 740u: goto L_08A67434;
    case 741u: goto L_08A67450;
    case 742u: goto L_08A67458;
    case 743u: goto L_08A67474;
    case 744u: goto L_08A6747C;
    case 745u: goto L_08A67498;
    case 746u: goto L_08A674A0;
    case 747u: goto L_08A674BC;
    case 748u: goto L_08A674C4;
    case 749u: goto L_08A674E0;
    case 750u: goto L_08A674E8;
    case 751u: goto L_08A67504;
    case 752u: goto L_08A6750C;
    case 753u: goto L_08A67528;
    case 754u: goto L_08A67530;
    case 755u: goto L_08A6754C;
    case 756u: goto L_08A67554;
    case 757u: goto L_08A67564;
    case 758u: goto L_08A67580;
    case 759u: goto L_08A67588;
    case 760u: goto L_08A67598;
    case 761u: goto L_08A675AC;
    case 762u: goto L_08A675B8;
    case 763u: goto L_08A675DC;
    case 764u: goto L_08A675F4;
    case 765u: goto L_08A67610;
    case 766u: goto L_08A67614;
    case 767u: goto L_08A6761C;
    case 768u: goto L_08A67638;
    case 769u: goto L_08A67640;
    case 770u: goto L_08A6765C;
    case 771u: goto L_08A67664;
    case 772u: goto L_08A67680;
    case 773u: goto L_08A67688;
    case 774u: goto L_08A676A4;
    case 775u: goto L_08A676AC;
    case 776u: goto L_08A676C8;
    case 777u: goto L_08A676D0;
    case 778u: goto L_08A676EC;
    case 779u: goto L_08A676F4;
    case 780u: goto L_08A67710;
    case 781u: goto L_08A67718;
    case 782u: goto L_08A67734;
    case 783u: goto L_08A6773C;
    case 784u: goto L_08A67758;
    case 785u: goto L_08A67760;
    case 786u: goto L_08A6777C;
    case 787u: goto L_08A67784;
    case 788u: goto L_08A67794;
    case 789u: goto L_08A677B0;
    case 790u: goto L_08A677B8;
    case 791u: goto L_08A677C8;
    case 792u: goto L_08A677DC;
    case 793u: goto L_08A677E8;
    case 794u: goto L_08A6780C;
    case 795u: goto L_08A67824;
    case 796u: goto L_08A67840;
    case 797u: goto L_08A67844;
    case 798u: goto L_08A6784C;
    case 799u: goto L_08A67868;
    case 800u: goto L_08A67870;
    case 801u: goto L_08A6788C;
    case 802u: goto L_08A67894;
    case 803u: goto L_08A678B0;
    case 804u: goto L_08A678B8;
    case 805u: goto L_08A678D4;
    case 806u: goto L_08A678DC;
    case 807u: goto L_08A678F8;
    case 808u: goto L_08A67900;
    case 809u: goto L_08A6791C;
    case 810u: goto L_08A67924;
    case 811u: goto L_08A67940;
    case 812u: goto L_08A67948;
    case 813u: goto L_08A67964;
    case 814u: goto L_08A6796C;
    case 815u: goto L_08A67988;
    case 816u: goto L_08A67990;
    case 817u: goto L_08A679A0;
    case 818u: goto L_08A679BC;
    case 819u: goto L_08A679C4;
    case 820u: goto L_08A679D4;
    case 821u: goto L_08A679F0;
    case 822u: goto L_08A679F8;
    case 823u: goto L_08A67A14;
    case 824u: goto L_08A67A1C;
    case 825u: goto L_08A67A30;
    case 826u: goto L_08A67A3C;
    case 827u: goto L_08A67A60;
    case 828u: goto L_08A67A78;
    case 829u: goto L_08A67A94;
    case 830u: goto L_08A67A98;
    case 831u: goto L_08A67AA0;
    case 832u: goto L_08A67ABC;
    case 833u: goto L_08A67AC4;
    case 834u: goto L_08A67AE0;
    case 835u: goto L_08A67AE8;
    case 836u: goto L_08A67B04;
    case 837u: goto L_08A67B0C;
    case 838u: goto L_08A67B28;
    case 839u: goto L_08A67B30;
    case 840u: goto L_08A67B4C;
    case 841u: goto L_08A67B54;
    case 842u: goto L_08A67B70;
    case 843u: goto L_08A67B78;
    case 844u: goto L_08A67B94;
    case 845u: goto L_08A67B9C;
    case 846u: goto L_08A67BB8;
    case 847u: goto L_08A67BC0;
    case 848u: goto L_08A67BDC;
    case 849u: goto L_08A67BE4;
    case 850u: goto L_08A67C00;
    case 851u: goto L_08A67C08;
    case 852u: goto L_08A67C24;
    case 853u: goto L_08A67C2C;
    case 854u: goto L_08A67C48;
    case 855u: goto L_08A67C50;
    case 856u: goto L_08A67C6C;
    case 857u: goto L_08A67C74;
    case 858u: goto L_08A67C90;
    case 859u: goto L_08A67C98;
    case 860u: goto L_08A67CB4;
    case 861u: goto L_08A67CBC;
    case 862u: goto L_08A67CD0;
    case 863u: goto L_08A67CDC;
    case 864u: goto L_08A67D00;
    case 865u: goto L_08A67D18;
    case 866u: goto L_08A67D34;
    case 867u: goto L_08A67D38;
    case 868u: goto L_08A67D40;
    case 869u: goto L_08A67D5C;
    case 870u: goto L_08A67D64;
    case 871u: goto L_08A67D80;
    case 872u: goto L_08A67D88;
    case 873u: goto L_08A67DA4;
    case 874u: goto L_08A67DAC;
    case 875u: goto L_08A67DC8;
    case 876u: goto L_08A67DD0;
    case 877u: goto L_08A67DEC;
    case 878u: goto L_08A67DF4;
    case 879u: goto L_08A67E10;
    case 880u: goto L_08A67E18;
    case 881u: goto L_08A67E34;
    case 882u: goto L_08A67E3C;
    case 883u: goto L_08A67E58;
    case 884u: goto L_08A67E60;
    case 885u: goto L_08A67E7C;
    case 886u: goto L_08A67E84;
    case 887u: goto L_08A67E94;
    case 888u: goto L_08A67EB0;
    case 889u: goto L_08A67EB8;
    case 890u: goto L_08A67EC8;
    case 891u: goto L_08A67EDC;
    case 892u: goto L_08A67EE8;
    case 893u: goto L_08A67F0C;
    case 894u: goto L_08A67F24;
    case 895u: goto L_08A67F40;
    case 896u: goto L_08A67F44;
    case 897u: goto L_08A67F4C;
    case 898u: goto L_08A67F68;
    case 899u: goto L_08A67F70;
    case 900u: goto L_08A67F8C;
    case 901u: goto L_08A67F94;
    case 902u: goto L_08A67FB0;
    case 903u: goto L_08A67FB8;
    case 904u: goto L_08A67FD4;
    case 905u: goto L_08A67FDC;
    case 906u: goto L_08A67FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A64000:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1024u);
    ctx.gpr[31] = (0x08A64018u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64018u) goto L_08A64018;
    return;
L_08A64018:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 869u, 0x08A63FD0u>(ctx, &aot_mem); return;
      }
      goto L_08A64020;
    }
L_08A64020:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1013u);
    ctx.gpr[31] = (0x08A6403Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6403Cu) goto L_08A6403C;
    return;
L_08A6403C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 869u, 0x08A63FD0u>(ctx, &aot_mem); return;
      }
      goto L_08A64044;
    }
L_08A64044:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1020u);
    ctx.gpr[31] = (0x08A64060u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64060u) goto L_08A64060;
    return;
L_08A64060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 869u, 0x08A63FD0u>(ctx, &aot_mem); return;
      }
      goto L_08A64068;
    }
L_08A64068:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1016u);
    ctx.gpr[31] = (0x08A64084u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64084u) goto L_08A64084;
    return;
L_08A64084:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 869u, 0x08A63FD0u>(ctx, &aot_mem); return;
      }
      goto L_08A6408C;
    }
L_08A6408C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1022u);
    ctx.gpr[31] = (0x08A640A8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A640A8u) goto L_08A640A8;
    return;
L_08A640A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 869u, 0x08A63FD0u>(ctx, &aot_mem); return;
      }
      goto L_08A640B0;
    }
L_08A640B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A640CCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A640CCu) goto L_08A640CC;
    return;
L_08A640CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 869u, 0x08A63FD0u>(ctx, &aot_mem); return;
      }
      goto L_08A640D4;
    }
L_08A640D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1029u);
    ctx.gpr[31] = (0x08A640F0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A640F0u) goto L_08A640F0;
    return;
L_08A640F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 869u, 0x08A63FD0u>(ctx, &aot_mem); return;
      }
      goto L_08A640F8;
    }
L_08A640F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1031u);
    ctx.gpr[31] = (0x08A64114u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64114u) goto L_08A64114;
    return;
L_08A64114:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 869u, 0x08A63FD0u>(ctx, &aot_mem); return;
      }
      goto L_08A6411C;
    }
L_08A6411C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64138u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64138u) goto L_08A64138;
    return;
L_08A64138:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 869u, 0x08A63FD0u>(ctx, &aot_mem); return;
      }
      goto L_08A64140;
    }
L_08A64140:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6415Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6415Cu) goto L_08A6415C;
    return;
L_08A6415C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 869u, 0x08A63FD0u>(ctx, &aot_mem); return;
      }
      goto L_08A64164;
    }
L_08A64164:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64180u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64180u) goto L_08A64180;
    return;
L_08A64180:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 869u, 0x08A63FD0u>(ctx, &aot_mem); return;
      }
      goto L_08A64188;
    }
L_08A64188:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A641A4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A641A4u) goto L_08A641A4;
    return;
L_08A641A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 869u, 0x08A63FD0u>(ctx, &aot_mem); return;
      }
      goto L_08A641AC;
    }
L_08A641AC:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 869u, 0x08A63FD0u>(ctx, &aot_mem); return;
      }
      goto L_08A641BC;
    }
L_08A641BC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A641D0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A641D0u) goto L_08A641D0;
    return;
L_08A641D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A641DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A64400;
      }
      goto L_08A64200;
    }
L_08A64200:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(27688)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64218:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2317u);
    ctx.gpr[31] = (0x08A64234u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64234u) goto L_08A64234;
    return;
L_08A64234:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A64238;
L_08A64238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64414;
      }
      goto L_08A64240;
    }
L_08A64240:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2315u);
    ctx.gpr[31] = (0x08A6425Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6425Cu) goto L_08A6425C;
    return;
L_08A6425C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64238;
      }
      goto L_08A64264;
    }
L_08A64264:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2304u);
    ctx.gpr[31] = (0x08A64280u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64280u) goto L_08A64280;
    return;
L_08A64280:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64238;
      }
      goto L_08A64288;
    }
L_08A64288:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2311u);
    ctx.gpr[31] = (0x08A642A4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A642A4u) goto L_08A642A4;
    return;
L_08A642A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64238;
      }
      goto L_08A642AC;
    }
L_08A642AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2307u);
    ctx.gpr[31] = (0x08A642C8u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A642C8u) goto L_08A642C8;
    return;
L_08A642C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64238;
      }
      goto L_08A642D0;
    }
L_08A642D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2313u);
    ctx.gpr[31] = (0x08A642ECu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A642ECu) goto L_08A642EC;
    return;
L_08A642EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64238;
      }
      goto L_08A642F4;
    }
L_08A642F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64310u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64310u) goto L_08A64310;
    return;
L_08A64310:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64238;
      }
      goto L_08A64318;
    }
L_08A64318:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2320u);
    ctx.gpr[31] = (0x08A64334u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64334u) goto L_08A64334;
    return;
L_08A64334:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64238;
      }
      goto L_08A6433C;
    }
L_08A6433C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2322u);
    ctx.gpr[31] = (0x08A64358u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64358u) goto L_08A64358;
    return;
L_08A64358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64238;
      }
      goto L_08A64360;
    }
L_08A64360:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6437Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6437Cu) goto L_08A6437C;
    return;
L_08A6437C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64238;
      }
      goto L_08A64384;
    }
L_08A64384:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A643A0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A643A0u) goto L_08A643A0;
    return;
L_08A643A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64238;
      }
      goto L_08A643A8;
    }
L_08A643A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A643C4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A643C4u) goto L_08A643C4;
    return;
L_08A643C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64238;
      }
      goto L_08A643CC;
    }
L_08A643CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A643E8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A643E8u) goto L_08A643E8;
    return;
L_08A643E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64238;
      }
      goto L_08A643F0;
    }
L_08A643F0:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A64238;
      }
      goto L_08A64400;
    }
L_08A64400:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A64414u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A64414u) goto L_08A64414;
    return;
L_08A64414:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64420:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A64668;
      }
      goto L_08A64444;
    }
L_08A64444:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(27848)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6445C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2341u);
    ctx.gpr[31] = (0x08A64478u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64478u) goto L_08A64478;
    return;
L_08A64478:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6447C;
L_08A6447C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6467C;
      }
      goto L_08A64484;
    }
L_08A64484:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2346u);
    ctx.gpr[31] = (0x08A644A0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A644A0u) goto L_08A644A0;
    return;
L_08A644A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6447C;
      }
      goto L_08A644A8;
    }
L_08A644A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2336u);
    ctx.gpr[31] = (0x08A644C4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A644C4u) goto L_08A644C4;
    return;
L_08A644C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6447C;
      }
      goto L_08A644CC;
    }
L_08A644CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2325u);
    ctx.gpr[31] = (0x08A644E8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A644E8u) goto L_08A644E8;
    return;
L_08A644E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6447C;
      }
      goto L_08A644F0;
    }
L_08A644F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2332u);
    ctx.gpr[31] = (0x08A6450Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6450Cu) goto L_08A6450C;
    return;
L_08A6450C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6447C;
      }
      goto L_08A64514;
    }
L_08A64514:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2328u);
    ctx.gpr[31] = (0x08A64530u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64530u) goto L_08A64530;
    return;
L_08A64530:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6447C;
      }
      goto L_08A64538;
    }
L_08A64538:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2334u);
    ctx.gpr[31] = (0x08A64554u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64554u) goto L_08A64554;
    return;
L_08A64554:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6447C;
      }
      goto L_08A6455C;
    }
L_08A6455C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2338u);
    ctx.gpr[31] = (0x08A64578u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64578u) goto L_08A64578;
    return;
L_08A64578:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6447C;
      }
      goto L_08A64580;
    }
L_08A64580:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6459Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6459Cu) goto L_08A6459C;
    return;
L_08A6459C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6447C;
      }
      goto L_08A645A4;
    }
L_08A645A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A645C0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A645C0u) goto L_08A645C0;
    return;
L_08A645C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6447C;
      }
      goto L_08A645C8;
    }
L_08A645C8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2343u);
    ctx.gpr[31] = (0x08A645E4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A645E4u) goto L_08A645E4;
    return;
L_08A645E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6447C;
      }
      goto L_08A645EC;
    }
L_08A645EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64608u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64608u) goto L_08A64608;
    return;
L_08A64608:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6447C;
      }
      goto L_08A64610;
    }
L_08A64610:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6462Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6462Cu) goto L_08A6462C;
    return;
L_08A6462C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6447C;
      }
      goto L_08A64634;
    }
L_08A64634:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64650u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64650u) goto L_08A64650;
    return;
L_08A64650:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6447C;
      }
      goto L_08A64658;
    }
L_08A64658:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A6447C;
      }
      goto L_08A64668;
    }
L_08A64668:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6467Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A6467Cu) goto L_08A6467C;
    return;
L_08A6467C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64688:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A648BC;
      }
      goto L_08A646AC;
    }
L_08A646AC:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28008)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A646C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2366u);
    ctx.gpr[31] = (0x08A646E0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A646E0u) goto L_08A646E0;
    return;
L_08A646E0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A646E4;
L_08A646E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A648D0;
      }
      goto L_08A646EC;
    }
L_08A646EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2364u);
    ctx.gpr[31] = (0x08A64708u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64708u) goto L_08A64708;
    return;
L_08A64708:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A646E4;
      }
      goto L_08A64710;
    }
L_08A64710:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2357u);
    ctx.gpr[31] = (0x08A6472Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6472Cu) goto L_08A6472C;
    return;
L_08A6472C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A646E4;
      }
      goto L_08A64734;
    }
L_08A64734:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2347u);
    ctx.gpr[31] = (0x08A64750u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64750u) goto L_08A64750;
    return;
L_08A64750:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A646E4;
      }
      goto L_08A64758;
    }
L_08A64758:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2353u);
    ctx.gpr[31] = (0x08A64774u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64774u) goto L_08A64774;
    return;
L_08A64774:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A646E4;
      }
      goto L_08A6477C;
    }
L_08A6477C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2350u);
    ctx.gpr[31] = (0x08A64798u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64798u) goto L_08A64798;
    return;
L_08A64798:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A646E4;
      }
      goto L_08A647A0;
    }
L_08A647A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2355u);
    ctx.gpr[31] = (0x08A647BCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A647BCu) goto L_08A647BC;
    return;
L_08A647BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A646E4;
      }
      goto L_08A647C4;
    }
L_08A647C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A647E0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A647E0u) goto L_08A647E0;
    return;
L_08A647E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A646E4;
      }
      goto L_08A647E8;
    }
L_08A647E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2359u);
    ctx.gpr[31] = (0x08A64804u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64804u) goto L_08A64804;
    return;
L_08A64804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A646E4;
      }
      goto L_08A6480C;
    }
L_08A6480C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64828u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64828u) goto L_08A64828;
    return;
L_08A64828:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A646E4;
      }
      goto L_08A64830;
    }
L_08A64830:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2362u);
    ctx.gpr[31] = (0x08A6484Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6484Cu) goto L_08A6484C;
    return;
L_08A6484C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A646E4;
      }
      goto L_08A64854;
    }
L_08A64854:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64870u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64870u) goto L_08A64870;
    return;
L_08A64870:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A646E4;
      }
      goto L_08A64878;
    }
L_08A64878:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64894u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64894u) goto L_08A64894;
    return;
L_08A64894:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A646E4;
      }
      goto L_08A6489C;
    }
L_08A6489C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A646E4;
      }
      goto L_08A648AC;
    }
L_08A648AC:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A646E4;
      }
      goto L_08A648BC;
    }
L_08A648BC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A648D0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A648D0u) goto L_08A648D0;
    return;
L_08A648D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A648DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A64B6C;
      }
      goto L_08A64900;
    }
L_08A64900:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28168)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64918:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2380u);
    ctx.gpr[31] = (0x08A64934u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64934u) goto L_08A64934;
    return;
L_08A64934:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A64938;
L_08A64938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64B80;
      }
      goto L_08A64940;
    }
L_08A64940:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2370u);
    ctx.gpr[31] = (0x08A6495Cu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6495Cu) goto L_08A6495C;
    return;
L_08A6495C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64938;
      }
      goto L_08A64964;
    }
L_08A64964:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2378u);
    ctx.gpr[31] = (0x08A64980u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64980u) goto L_08A64980;
    return;
L_08A64980:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64938;
      }
      goto L_08A64988;
    }
L_08A64988:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2367u);
    ctx.gpr[31] = (0x08A649A4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A649A4u) goto L_08A649A4;
    return;
L_08A649A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64938;
      }
      goto L_08A649AC;
    }
L_08A649AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2374u);
    ctx.gpr[31] = (0x08A649C8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A649C8u) goto L_08A649C8;
    return;
L_08A649C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64938;
      }
      goto L_08A649D0;
    }
L_08A649D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2376u);
    ctx.gpr[31] = (0x08A649ECu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A649ECu) goto L_08A649EC;
    return;
L_08A649EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64938;
      }
      goto L_08A649F4;
    }
L_08A649F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64A10u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64A10u) goto L_08A64A10;
    return;
L_08A64A10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64938;
      }
      goto L_08A64A18;
    }
L_08A64A18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64A34u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64A34u) goto L_08A64A34;
    return;
L_08A64A34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64938;
      }
      goto L_08A64A3C;
    }
L_08A64A3C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2383u);
    ctx.gpr[31] = (0x08A64A58u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64A58u) goto L_08A64A58;
    return;
L_08A64A58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64938;
      }
      goto L_08A64A60;
    }
L_08A64A60:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2385u);
    ctx.gpr[31] = (0x08A64A7Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64A7Cu) goto L_08A64A7C;
    return;
L_08A64A7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64938;
      }
      goto L_08A64A84;
    }
L_08A64A84:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64AA0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64AA0u) goto L_08A64AA0;
    return;
L_08A64AA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64938;
      }
      goto L_08A64AA8;
    }
L_08A64AA8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64AC4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64AC4u) goto L_08A64AC4;
    return;
L_08A64AC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64938;
      }
      goto L_08A64ACC;
    }
L_08A64ACC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64AE8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64AE8u) goto L_08A64AE8;
    return;
L_08A64AE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64938;
      }
      goto L_08A64AF0;
    }
L_08A64AF0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64B0Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64B0Cu) goto L_08A64B0C;
    return;
L_08A64B0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64938;
      }
      goto L_08A64B14;
    }
L_08A64B14:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64B30u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64B30u) goto L_08A64B30;
    return;
L_08A64B30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64938;
      }
      goto L_08A64B38;
    }
L_08A64B38:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2388u);
    ctx.gpr[31] = (0x08A64B54u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64B54u) goto L_08A64B54;
    return;
L_08A64B54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64938;
      }
      goto L_08A64B5C;
    }
L_08A64B5C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A64938;
      }
      goto L_08A64B6C;
    }
L_08A64B6C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A64B80u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A64B80u) goto L_08A64B80;
    return;
L_08A64B80:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64B8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A64DD4;
      }
      goto L_08A64BB0;
    }
L_08A64BB0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28328)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64BC8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1048u);
    ctx.gpr[31] = (0x08A64BE4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64BE4u) goto L_08A64BE4;
    return;
L_08A64BE4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A64BE8;
L_08A64BE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64DE8;
      }
      goto L_08A64BF0;
    }
L_08A64BF0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1038u);
    ctx.gpr[31] = (0x08A64C0Cu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64C0Cu) goto L_08A64C0C;
    return;
L_08A64C0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64BE8;
      }
      goto L_08A64C14;
    }
L_08A64C14:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1046u);
    ctx.gpr[31] = (0x08A64C30u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64C30u) goto L_08A64C30;
    return;
L_08A64C30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64BE8;
      }
      goto L_08A64C38;
    }
L_08A64C38:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1035u);
    ctx.gpr[31] = (0x08A64C54u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64C54u) goto L_08A64C54;
    return;
L_08A64C54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64BE8;
      }
      goto L_08A64C5C;
    }
L_08A64C5C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1042u);
    ctx.gpr[31] = (0x08A64C78u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64C78u) goto L_08A64C78;
    return;
L_08A64C78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64BE8;
      }
      goto L_08A64C80;
    }
L_08A64C80:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1044u);
    ctx.gpr[31] = (0x08A64C9Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64C9Cu) goto L_08A64C9C;
    return;
L_08A64C9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64BE8;
      }
      goto L_08A64CA4;
    }
L_08A64CA4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64CC0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64CC0u) goto L_08A64CC0;
    return;
L_08A64CC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64BE8;
      }
      goto L_08A64CC8;
    }
L_08A64CC8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1051u);
    ctx.gpr[31] = (0x08A64CE4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64CE4u) goto L_08A64CE4;
    return;
L_08A64CE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64BE8;
      }
      goto L_08A64CEC;
    }
L_08A64CEC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1053u);
    ctx.gpr[31] = (0x08A64D08u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64D08u) goto L_08A64D08;
    return;
L_08A64D08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64BE8;
      }
      goto L_08A64D10;
    }
L_08A64D10:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64D2Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64D2Cu) goto L_08A64D2C;
    return;
L_08A64D2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64BE8;
      }
      goto L_08A64D34;
    }
L_08A64D34:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64D50u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64D50u) goto L_08A64D50;
    return;
L_08A64D50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64BE8;
      }
      goto L_08A64D58;
    }
L_08A64D58:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64D74u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64D74u) goto L_08A64D74;
    return;
L_08A64D74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64BE8;
      }
      goto L_08A64D7C;
    }
L_08A64D7C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A64BE8;
      }
      goto L_08A64D8C;
    }
L_08A64D8C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1056u);
    ctx.gpr[31] = (0x08A64DA8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64DA8u) goto L_08A64DA8;
    return;
L_08A64DA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64BE8;
      }
      goto L_08A64DB0;
    }
L_08A64DB0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64DCCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64DCCu) goto L_08A64DCC;
    return;
L_08A64DCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64BE8;
      }
      goto L_08A64DD4;
    }
L_08A64DD4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A64DE8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A64DE8u) goto L_08A64DE8;
    return;
L_08A64DE8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64DF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A65098;
      }
      goto L_08A64E18;
    }
L_08A64E18:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28488)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64E30:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3778u);
    ctx.gpr[31] = (0x08A64E4Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64E4Cu) goto L_08A64E4C;
    return;
L_08A64E4C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A64E50;
L_08A64E50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A650AC;
      }
      goto L_08A64E58;
    }
L_08A64E58:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3791u);
    ctx.gpr[31] = (0x08A64E74u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64E74u) goto L_08A64E74;
    return;
L_08A64E74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64E50;
      }
      goto L_08A64E7C;
    }
L_08A64E7C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3794u);
    ctx.gpr[31] = (0x08A64E98u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64E98u) goto L_08A64E98;
    return;
L_08A64E98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64E50;
      }
      goto L_08A64EA0;
    }
L_08A64EA0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3789u);
    ctx.gpr[31] = (0x08A64EBCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64EBCu) goto L_08A64EBC;
    return;
L_08A64EBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64E50;
      }
      goto L_08A64EC4;
    }
L_08A64EC4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3785u);
    ctx.gpr[31] = (0x08A64EE0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64EE0u) goto L_08A64EE0;
    return;
L_08A64EE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64E50;
      }
      goto L_08A64EE8;
    }
L_08A64EE8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3781u);
    ctx.gpr[31] = (0x08A64F04u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64F04u) goto L_08A64F04;
    return;
L_08A64F04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64E50;
      }
      goto L_08A64F0C;
    }
L_08A64F0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3787u);
    ctx.gpr[31] = (0x08A64F28u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64F28u) goto L_08A64F28;
    return;
L_08A64F28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64E50;
      }
      goto L_08A64F30;
    }
L_08A64F30:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64F4Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64F4Cu) goto L_08A64F4C;
    return;
L_08A64F4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64E50;
      }
      goto L_08A64F54;
    }
L_08A64F54:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64F70u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64F70u) goto L_08A64F70;
    return;
L_08A64F70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64E50;
      }
      goto L_08A64F78;
    }
L_08A64F78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64F94u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64F94u) goto L_08A64F94;
    return;
L_08A64F94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64E50;
      }
      goto L_08A64F9C;
    }
L_08A64F9C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3796u);
    ctx.gpr[31] = (0x08A64FB8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64FB8u) goto L_08A64FB8;
    return;
L_08A64FB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64E50;
      }
      goto L_08A64FC0;
    }
L_08A64FC0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64FDCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A64FDCu) goto L_08A64FDC;
    return;
L_08A64FDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64E50;
      }
      goto L_08A64FE4;
    }
L_08A64FE4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65000u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65000u) goto L_08A65000;
    return;
L_08A65000:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64E50;
      }
      goto L_08A65008;
    }
L_08A65008:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65024u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65024u) goto L_08A65024;
    return;
L_08A65024:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64E50;
      }
      goto L_08A6502C;
    }
L_08A6502C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65048u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65048u) goto L_08A65048;
    return;
L_08A65048:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64E50;
      }
      goto L_08A65050;
    }
L_08A65050:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3799u);
    ctx.gpr[31] = (0x08A6506Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6506Cu) goto L_08A6506C;
    return;
L_08A6506C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64E50;
      }
      goto L_08A65074;
    }
L_08A65074:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65090u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65090u) goto L_08A65090;
    return;
L_08A65090:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64E50;
      }
      goto L_08A65098;
    }
L_08A65098:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A650ACu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A650ACu) goto L_08A650AC;
    return;
L_08A650AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A650B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6530C;
      }
      goto L_08A650DC;
    }
L_08A650DC:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28648)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A650F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3823u);
    ctx.gpr[31] = (0x08A65110u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65110u) goto L_08A65110;
    return;
L_08A65110:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A65114;
L_08A65114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65320;
      }
      goto L_08A6511C;
    }
L_08A6511C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3821u);
    ctx.gpr[31] = (0x08A65138u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65138u) goto L_08A65138;
    return;
L_08A65138:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65114;
      }
      goto L_08A65140;
    }
L_08A65140:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3816u);
    ctx.gpr[31] = (0x08A6515Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6515Cu) goto L_08A6515C;
    return;
L_08A6515C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65114;
      }
      goto L_08A65164;
    }
L_08A65164:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3803u);
    ctx.gpr[31] = (0x08A65180u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65180u) goto L_08A65180;
    return;
L_08A65180:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65114;
      }
      goto L_08A65188;
    }
L_08A65188:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3812u);
    ctx.gpr[31] = (0x08A651A4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A651A4u) goto L_08A651A4;
    return;
L_08A651A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65114;
      }
      goto L_08A651AC;
    }
L_08A651AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3808u);
    ctx.gpr[31] = (0x08A651C8u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A651C8u) goto L_08A651C8;
    return;
L_08A651C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65114;
      }
      goto L_08A651D0;
    }
L_08A651D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3814u);
    ctx.gpr[31] = (0x08A651ECu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A651ECu) goto L_08A651EC;
    return;
L_08A651EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65114;
      }
      goto L_08A651F4;
    }
L_08A651F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65210u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65210u) goto L_08A65210;
    return;
L_08A65210:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65114;
      }
      goto L_08A65218;
    }
L_08A65218:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3818u);
    ctx.gpr[31] = (0x08A65234u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65234u) goto L_08A65234;
    return;
L_08A65234:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65114;
      }
      goto L_08A6523C;
    }
L_08A6523C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65258u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65258u) goto L_08A65258;
    return;
L_08A65258:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65114;
      }
      goto L_08A65260;
    }
L_08A65260:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6527Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6527Cu) goto L_08A6527C;
    return;
L_08A6527C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65114;
      }
      goto L_08A65284;
    }
L_08A65284:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3806u);
    ctx.gpr[31] = (0x08A652A0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A652A0u) goto L_08A652A0;
    return;
L_08A652A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65114;
      }
      goto L_08A652A8;
    }
L_08A652A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A652C4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A652C4u) goto L_08A652C4;
    return;
L_08A652C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65114;
      }
      goto L_08A652CC;
    }
L_08A652CC:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A65114;
      }
      goto L_08A652DC;
    }
L_08A652DC:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A65114;
      }
      goto L_08A652EC;
    }
L_08A652EC:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A65114;
      }
      goto L_08A652FC;
    }
L_08A652FC:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A65114;
      }
      goto L_08A6530C;
    }
L_08A6530C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A65320u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A65320u) goto L_08A65320;
    return;
L_08A65320:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6532C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6552C;
      }
      goto L_08A65350;
    }
L_08A65350:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28808)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A65368:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5478u);
    ctx.gpr[31] = (0x08A65384u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65384u) goto L_08A65384;
    return;
L_08A65384:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A65388;
L_08A65388:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65540;
      }
      goto L_08A65390;
    }
L_08A65390:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5476u);
    ctx.gpr[31] = (0x08A653ACu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A653ACu) goto L_08A653AC;
    return;
L_08A653AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65388;
      }
      goto L_08A653B4;
    }
L_08A653B4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5465u);
    ctx.gpr[31] = (0x08A653D0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A653D0u) goto L_08A653D0;
    return;
L_08A653D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65388;
      }
      goto L_08A653D8;
    }
L_08A653D8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5472u);
    ctx.gpr[31] = (0x08A653F4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A653F4u) goto L_08A653F4;
    return;
L_08A653F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65388;
      }
      goto L_08A653FC;
    }
L_08A653FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5468u);
    ctx.gpr[31] = (0x08A65418u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65418u) goto L_08A65418;
    return;
L_08A65418:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65388;
      }
      goto L_08A65420;
    }
L_08A65420:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5474u);
    ctx.gpr[31] = (0x08A6543Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6543Cu) goto L_08A6543C;
    return;
L_08A6543C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65388;
      }
      goto L_08A65444;
    }
L_08A65444:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65460u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65460u) goto L_08A65460;
    return;
L_08A65460:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65388;
      }
      goto L_08A65468;
    }
L_08A65468:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5481u);
    ctx.gpr[31] = (0x08A65484u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65484u) goto L_08A65484;
    return;
L_08A65484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65388;
      }
      goto L_08A6548C;
    }
L_08A6548C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5483u);
    ctx.gpr[31] = (0x08A654A8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A654A8u) goto L_08A654A8;
    return;
L_08A654A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65388;
      }
      goto L_08A654B0;
    }
L_08A654B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A654CCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A654CCu) goto L_08A654CC;
    return;
L_08A654CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65388;
      }
      goto L_08A654D4;
    }
L_08A654D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A654F0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A654F0u) goto L_08A654F0;
    return;
L_08A654F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65388;
      }
      goto L_08A654F8;
    }
L_08A654F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5486u);
    ctx.gpr[31] = (0x08A65514u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65514u) goto L_08A65514;
    return;
L_08A65514:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65388;
      }
      goto L_08A6551C;
    }
L_08A6551C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A65388;
      }
      goto L_08A6552C;
    }
L_08A6552C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A65540u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A65540u) goto L_08A65540;
    return;
L_08A65540:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6554C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6574C;
      }
      goto L_08A65570;
    }
L_08A65570:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28968)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A65588:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5501u);
    ctx.gpr[31] = (0x08A655A4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A655A4u) goto L_08A655A4;
    return;
L_08A655A4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A655A8;
L_08A655A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65760;
      }
      goto L_08A655B0;
    }
L_08A655B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5490u);
    ctx.gpr[31] = (0x08A655CCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A655CCu) goto L_08A655CC;
    return;
L_08A655CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A655A8;
      }
      goto L_08A655D4;
    }
L_08A655D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5497u);
    ctx.gpr[31] = (0x08A655F0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A655F0u) goto L_08A655F0;
    return;
L_08A655F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A655A8;
      }
      goto L_08A655F8;
    }
L_08A655F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5493u);
    ctx.gpr[31] = (0x08A65614u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65614u) goto L_08A65614;
    return;
L_08A65614:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A655A8;
      }
      goto L_08A6561C;
    }
L_08A6561C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5499u);
    ctx.gpr[31] = (0x08A65638u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65638u) goto L_08A65638;
    return;
L_08A65638:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A655A8;
      }
      goto L_08A65640;
    }
L_08A65640:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5503u);
    ctx.gpr[31] = (0x08A6565Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6565Cu) goto L_08A6565C;
    return;
L_08A6565C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A655A8;
      }
      goto L_08A65664;
    }
L_08A65664:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65680u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65680u) goto L_08A65680;
    return;
L_08A65680:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A655A8;
      }
      goto L_08A65688;
    }
L_08A65688:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5506u);
    ctx.gpr[31] = (0x08A656A4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A656A4u) goto L_08A656A4;
    return;
L_08A656A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A655A8;
      }
      goto L_08A656AC;
    }
L_08A656AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5508u);
    ctx.gpr[31] = (0x08A656C8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A656C8u) goto L_08A656C8;
    return;
L_08A656C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A655A8;
      }
      goto L_08A656D0;
    }
L_08A656D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A656ECu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A656ECu) goto L_08A656EC;
    return;
L_08A656EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A655A8;
      }
      goto L_08A656F4;
    }
L_08A656F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65710u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65710u) goto L_08A65710;
    return;
L_08A65710:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A655A8;
      }
      goto L_08A65718;
    }
L_08A65718:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5511u);
    ctx.gpr[31] = (0x08A65734u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65734u) goto L_08A65734;
    return;
L_08A65734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A655A8;
      }
      goto L_08A6573C;
    }
L_08A6573C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A655A8;
      }
      goto L_08A6574C;
    }
L_08A6574C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A65760u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A65760u) goto L_08A65760;
    return;
L_08A65760:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6576C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A659A0;
      }
      goto L_08A65790;
    }
L_08A65790:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29128)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A657A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 444u);
    ctx.gpr[31] = (0x08A657C4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A657C4u) goto L_08A657C4;
    return;
L_08A657C4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A657C8;
L_08A657C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A659B4;
      }
      goto L_08A657D0;
    }
L_08A657D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 451u);
    ctx.gpr[31] = (0x08A657ECu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A657ECu) goto L_08A657EC;
    return;
L_08A657EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A657C8;
      }
      goto L_08A657F4;
    }
L_08A657F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 441u);
    ctx.gpr[31] = (0x08A65810u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65810u) goto L_08A65810;
    return;
L_08A65810:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A657C8;
      }
      goto L_08A65818;
    }
L_08A65818:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 447u);
    ctx.gpr[31] = (0x08A65834u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65834u) goto L_08A65834;
    return;
L_08A65834:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A657C8;
      }
      goto L_08A6583C;
    }
L_08A6583C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 449u);
    ctx.gpr[31] = (0x08A65858u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65858u) goto L_08A65858;
    return;
L_08A65858:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A657C8;
      }
      goto L_08A65860;
    }
L_08A65860:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6587Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6587Cu) goto L_08A6587C;
    return;
L_08A6587C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A657C8;
      }
      goto L_08A65884;
    }
L_08A65884:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 453u);
    ctx.gpr[31] = (0x08A658A0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A658A0u) goto L_08A658A0;
    return;
L_08A658A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A657C8;
      }
      goto L_08A658A8;
    }
L_08A658A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A658C4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A658C4u) goto L_08A658C4;
    return;
L_08A658C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A657C8;
      }
      goto L_08A658CC;
    }
L_08A658CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 456u);
    ctx.gpr[31] = (0x08A658E8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A658E8u) goto L_08A658E8;
    return;
L_08A658E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A657C8;
      }
      goto L_08A658F0;
    }
L_08A658F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6590Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6590Cu) goto L_08A6590C;
    return;
L_08A6590C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A657C8;
      }
      goto L_08A65914;
    }
L_08A65914:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 458u);
    ctx.gpr[31] = (0x08A65930u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65930u) goto L_08A65930;
    return;
L_08A65930:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A657C8;
      }
      goto L_08A65938;
    }
L_08A65938:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65954u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65954u) goto L_08A65954;
    return;
L_08A65954:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A657C8;
      }
      goto L_08A6595C;
    }
L_08A6595C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A657C8;
      }
      goto L_08A6596C;
    }
L_08A6596C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 461u);
    ctx.gpr[31] = (0x08A65988u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65988u) goto L_08A65988;
    return;
L_08A65988:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A657C8;
      }
      goto L_08A65990;
    }
L_08A65990:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A657C8;
      }
      goto L_08A659A0;
    }
L_08A659A0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A659B4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A659B4u) goto L_08A659B4;
    return;
L_08A659B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A659C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A65C08;
      }
      goto L_08A659E4;
    }
L_08A659E4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29288)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A659FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 480u);
    ctx.gpr[31] = (0x08A65A18u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65A18u) goto L_08A65A18;
    return;
L_08A65A18:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A65A1C;
L_08A65A1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65C1C;
      }
      goto L_08A65A24;
    }
L_08A65A24:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 469u);
    ctx.gpr[31] = (0x08A65A40u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65A40u) goto L_08A65A40;
    return;
L_08A65A40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65A1C;
      }
      goto L_08A65A48;
    }
L_08A65A48:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 473u);
    ctx.gpr[31] = (0x08A65A64u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65A64u) goto L_08A65A64;
    return;
L_08A65A64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65A1C;
      }
      goto L_08A65A6C;
    }
L_08A65A6C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 478u);
    ctx.gpr[31] = (0x08A65A88u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65A88u) goto L_08A65A88;
    return;
L_08A65A88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65A1C;
      }
      goto L_08A65A90;
    }
L_08A65A90:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 462u);
    ctx.gpr[31] = (0x08A65AACu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65AACu) goto L_08A65AAC;
    return;
L_08A65AAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65A1C;
      }
      goto L_08A65AB4;
    }
L_08A65AB4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 465u);
    ctx.gpr[31] = (0x08A65AD0u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65AD0u) goto L_08A65AD0;
    return;
L_08A65AD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65A1C;
      }
      goto L_08A65AD8;
    }
L_08A65AD8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 471u);
    ctx.gpr[31] = (0x08A65AF4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65AF4u) goto L_08A65AF4;
    return;
L_08A65AF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65A1C;
      }
      goto L_08A65AFC;
    }
L_08A65AFC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 475u);
    ctx.gpr[31] = (0x08A65B18u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65B18u) goto L_08A65B18;
    return;
L_08A65B18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65A1C;
      }
      goto L_08A65B20;
    }
L_08A65B20:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65B3Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65B3Cu) goto L_08A65B3C;
    return;
L_08A65B3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65A1C;
      }
      goto L_08A65B44;
    }
L_08A65B44:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65B60u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65B60u) goto L_08A65B60;
    return;
L_08A65B60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65A1C;
      }
      goto L_08A65B68;
    }
L_08A65B68:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65B84u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65B84u) goto L_08A65B84;
    return;
L_08A65B84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65A1C;
      }
      goto L_08A65B8C;
    }
L_08A65B8C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A65A1C;
      }
      goto L_08A65B9C;
    }
L_08A65B9C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 483u);
    ctx.gpr[31] = (0x08A65BB8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65BB8u) goto L_08A65BB8;
    return;
L_08A65BB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65A1C;
      }
      goto L_08A65BC0;
    }
L_08A65BC0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65BDCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65BDCu) goto L_08A65BDC;
    return;
L_08A65BDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65A1C;
      }
      goto L_08A65BE4;
    }
L_08A65BE4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65C00u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65C00u) goto L_08A65C00;
    return;
L_08A65C00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65A1C;
      }
      goto L_08A65C08;
    }
L_08A65C08:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A65C1Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A65C1Cu) goto L_08A65C1C;
    return;
L_08A65C1C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A65C28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A65E38;
      }
      goto L_08A65C4C;
    }
L_08A65C4C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29448)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A65C64:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 504u);
    ctx.gpr[31] = (0x08A65C80u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65C80u) goto L_08A65C80;
    return;
L_08A65C80:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A65C84;
L_08A65C84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65E4C;
      }
      goto L_08A65C8C;
    }
L_08A65C8C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 492u);
    ctx.gpr[31] = (0x08A65CA8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65CA8u) goto L_08A65CA8;
    return;
L_08A65CA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65C84;
      }
      goto L_08A65CB0;
    }
L_08A65CB0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 496u);
    ctx.gpr[31] = (0x08A65CCCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65CCCu) goto L_08A65CCC;
    return;
L_08A65CCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65C84;
      }
      goto L_08A65CD4;
    }
L_08A65CD4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 484u);
    ctx.gpr[31] = (0x08A65CF0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65CF0u) goto L_08A65CF0;
    return;
L_08A65CF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65C84;
      }
      goto L_08A65CF8;
    }
L_08A65CF8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 487u);
    ctx.gpr[31] = (0x08A65D14u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65D14u) goto L_08A65D14;
    return;
L_08A65D14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65C84;
      }
      goto L_08A65D1C;
    }
L_08A65D1C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 494u);
    ctx.gpr[31] = (0x08A65D38u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65D38u) goto L_08A65D38;
    return;
L_08A65D38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65C84;
      }
      goto L_08A65D40;
    }
L_08A65D40:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 498u);
    ctx.gpr[31] = (0x08A65D5Cu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65D5Cu) goto L_08A65D5C;
    return;
L_08A65D5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65C84;
      }
      goto L_08A65D64;
    }
L_08A65D64:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 502u);
    ctx.gpr[31] = (0x08A65D80u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65D80u) goto L_08A65D80;
    return;
L_08A65D80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65C84;
      }
      goto L_08A65D88;
    }
L_08A65D88:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65DA4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65DA4u) goto L_08A65DA4;
    return;
L_08A65DA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65C84;
      }
      goto L_08A65DAC;
    }
L_08A65DAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65DC8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65DC8u) goto L_08A65DC8;
    return;
L_08A65DC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65C84;
      }
      goto L_08A65DD0;
    }
L_08A65DD0:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A65C84;
      }
      goto L_08A65DE0;
    }
L_08A65DE0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 507u);
    ctx.gpr[31] = (0x08A65DFCu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65DFCu) goto L_08A65DFC;
    return;
L_08A65DFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65C84;
      }
      goto L_08A65E04;
    }
L_08A65E04:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65E20u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65E20u) goto L_08A65E20;
    return;
L_08A65E20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65C84;
      }
      goto L_08A65E28;
    }
L_08A65E28:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A65C84;
      }
      goto L_08A65E38;
    }
L_08A65E38:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A65E4Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A65E4Cu) goto L_08A65E4C;
    return;
L_08A65E4C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A65E58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A660C4;
      }
      goto L_08A65E7C;
    }
L_08A65E7C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29608)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A65E94:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 528u);
    ctx.gpr[31] = (0x08A65EB0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65EB0u) goto L_08A65EB0;
    return;
L_08A65EB0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A65EB4;
L_08A65EB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A660D8;
      }
      goto L_08A65EBC;
    }
L_08A65EBC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 525u);
    ctx.gpr[31] = (0x08A65ED8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65ED8u) goto L_08A65ED8;
    return;
L_08A65ED8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65EB4;
      }
      goto L_08A65EE0;
    }
L_08A65EE0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 523u);
    ctx.gpr[31] = (0x08A65EFCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65EFCu) goto L_08A65EFC;
    return;
L_08A65EFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65EB4;
      }
      goto L_08A65F04;
    }
L_08A65F04:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 520u);
    ctx.gpr[31] = (0x08A65F20u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65F20u) goto L_08A65F20;
    return;
L_08A65F20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65EB4;
      }
      goto L_08A65F28;
    }
L_08A65F28:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 514u);
    ctx.gpr[31] = (0x08A65F44u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65F44u) goto L_08A65F44;
    return;
L_08A65F44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65EB4;
      }
      goto L_08A65F4C;
    }
L_08A65F4C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 518u);
    ctx.gpr[31] = (0x08A65F68u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65F68u) goto L_08A65F68;
    return;
L_08A65F68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65EB4;
      }
      goto L_08A65F70;
    }
L_08A65F70:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 508u);
    ctx.gpr[31] = (0x08A65F8Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65F8Cu) goto L_08A65F8C;
    return;
L_08A65F8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65EB4;
      }
      goto L_08A65F94;
    }
L_08A65F94:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 511u);
    ctx.gpr[31] = (0x08A65FB0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65FB0u) goto L_08A65FB0;
    return;
L_08A65FB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65EB4;
      }
      goto L_08A65FB8;
    }
L_08A65FB8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 516u);
    ctx.gpr[31] = (0x08A65FD4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65FD4u) goto L_08A65FD4;
    return;
L_08A65FD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65EB4;
      }
      goto L_08A65FDC;
    }
L_08A65FDC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65FF8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A65FF8u) goto L_08A65FF8;
    return;
L_08A65FF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65EB4;
      }
      goto L_08A66000;
    }
L_08A66000:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6601Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6601Cu) goto L_08A6601C;
    return;
L_08A6601C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65EB4;
      }
      goto L_08A66024;
    }
L_08A66024:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66040u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66040u) goto L_08A66040;
    return;
L_08A66040:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65EB4;
      }
      goto L_08A66048;
    }
L_08A66048:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66064u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66064u) goto L_08A66064;
    return;
L_08A66064:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65EB4;
      }
      goto L_08A6606C;
    }
L_08A6606C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66088u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66088u) goto L_08A66088;
    return;
L_08A66088:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65EB4;
      }
      goto L_08A66090;
    }
L_08A66090:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A660ACu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A660ACu) goto L_08A660AC;
    return;
L_08A660AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65EB4;
      }
      goto L_08A660B4;
    }
L_08A660B4:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A65EB4;
      }
      goto L_08A660C4;
    }
L_08A660C4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A660D8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A660D8u) goto L_08A660D8;
    return;
L_08A660D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A660E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6633C;
      }
      goto L_08A66108;
    }
L_08A66108:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29768)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A66120:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 532u);
    ctx.gpr[31] = (0x08A6613Cu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6613Cu) goto L_08A6613C;
    return;
L_08A6613C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A66140;
L_08A66140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66350;
      }
      goto L_08A66148;
    }
L_08A66148:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 546u);
    ctx.gpr[31] = (0x08A66164u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66164u) goto L_08A66164;
    return;
L_08A66164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66140;
      }
      goto L_08A6616C;
    }
L_08A6616C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 551u);
    ctx.gpr[31] = (0x08A66188u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66188u) goto L_08A66188;
    return;
L_08A66188:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66140;
      }
      goto L_08A66190;
    }
L_08A66190:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 541u);
    ctx.gpr[31] = (0x08A661ACu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A661ACu) goto L_08A661AC;
    return;
L_08A661AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66140;
      }
      goto L_08A661B4;
    }
L_08A661B4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 529u);
    ctx.gpr[31] = (0x08A661D0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A661D0u) goto L_08A661D0;
    return;
L_08A661D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66140;
      }
      goto L_08A661D8;
    }
L_08A661D8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 536u);
    ctx.gpr[31] = (0x08A661F4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A661F4u) goto L_08A661F4;
    return;
L_08A661F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66140;
      }
      goto L_08A661FC;
    }
L_08A661FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 538u);
    ctx.gpr[31] = (0x08A66218u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66218u) goto L_08A66218;
    return;
L_08A66218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66140;
      }
      goto L_08A66220;
    }
L_08A66220:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6623Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6623Cu) goto L_08A6623C;
    return;
L_08A6623C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66140;
      }
      goto L_08A66244;
    }
L_08A66244:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 543u);
    ctx.gpr[31] = (0x08A66260u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66260u) goto L_08A66260;
    return;
L_08A66260:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66140;
      }
      goto L_08A66268;
    }
L_08A66268:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66284u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66284u) goto L_08A66284;
    return;
L_08A66284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66140;
      }
      goto L_08A6628C;
    }
L_08A6628C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A662A8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A662A8u) goto L_08A662A8;
    return;
L_08A662A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66140;
      }
      goto L_08A662B0;
    }
L_08A662B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 548u);
    ctx.gpr[31] = (0x08A662CCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A662CCu) goto L_08A662CC;
    return;
L_08A662CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66140;
      }
      goto L_08A662D4;
    }
L_08A662D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A662F0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A662F0u) goto L_08A662F0;
    return;
L_08A662F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66140;
      }
      goto L_08A662F8;
    }
L_08A662F8:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A66140;
      }
      goto L_08A66308;
    }
L_08A66308:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A66140;
      }
      goto L_08A66318;
    }
L_08A66318:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66334u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66334u) goto L_08A66334;
    return;
L_08A66334:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66140;
      }
      goto L_08A6633C;
    }
L_08A6633C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A66350u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A66350u) goto L_08A66350;
    return;
L_08A66350:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6635C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6666C;
      }
      goto L_08A66380;
    }
L_08A66380:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29928)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A66398:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 567u);
    ctx.gpr[31] = (0x08A663B4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A663B4u) goto L_08A663B4;
    return;
L_08A663B4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A663B8;
L_08A663B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66680;
      }
      goto L_08A663C0;
    }
L_08A663C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 562u);
    ctx.gpr[31] = (0x08A663DCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A663DCu) goto L_08A663DC;
    return;
L_08A663DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A663B8;
      }
      goto L_08A663E4;
    }
L_08A663E4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 552u);
    ctx.gpr[31] = (0x08A66400u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66400u) goto L_08A66400;
    return;
L_08A66400:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A663B8;
      }
      goto L_08A66408;
    }
L_08A66408:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 558u);
    ctx.gpr[31] = (0x08A66424u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66424u) goto L_08A66424;
    return;
L_08A66424:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A663B8;
      }
      goto L_08A6642C;
    }
L_08A6642C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 560u);
    ctx.gpr[31] = (0x08A66448u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66448u) goto L_08A66448;
    return;
L_08A66448:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A663B8;
      }
      goto L_08A66450;
    }
L_08A66450:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 555u);
    ctx.gpr[31] = (0x08A6646Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6646Cu) goto L_08A6646C;
    return;
L_08A6646C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A663B8;
      }
      goto L_08A66474;
    }
L_08A66474:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66490u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66490u) goto L_08A66490;
    return;
L_08A66490:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A663B8;
      }
      goto L_08A66498;
    }
L_08A66498:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 564u);
    ctx.gpr[31] = (0x08A664B4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A664B4u) goto L_08A664B4;
    return;
L_08A664B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A663B8;
      }
      goto L_08A664BC;
    }
L_08A664BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A664D8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A664D8u) goto L_08A664D8;
    return;
L_08A664D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A663B8;
      }
      goto L_08A664E0;
    }
L_08A664E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A664FCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A664FCu) goto L_08A664FC;
    return;
L_08A664FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A663B8;
      }
      goto L_08A66504;
    }
L_08A66504:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66520u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66520u) goto L_08A66520;
    return;
L_08A66520:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A663B8;
      }
      goto L_08A66528;
    }
L_08A66528:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 569u);
    ctx.gpr[31] = (0x08A66544u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66544u) goto L_08A66544;
    return;
L_08A66544:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A663B8;
      }
      goto L_08A6654C;
    }
L_08A6654C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66568u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66568u) goto L_08A66568;
    return;
L_08A66568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A663B8;
      }
      goto L_08A66570;
    }
L_08A66570:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6658Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6658Cu) goto L_08A6658C;
    return;
L_08A6658C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A663B8;
      }
      goto L_08A66594;
    }
L_08A66594:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A665B0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A665B0u) goto L_08A665B0;
    return;
L_08A665B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A663B8;
      }
      goto L_08A665B8;
    }
L_08A665B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A665D4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A665D4u) goto L_08A665D4;
    return;
L_08A665D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A663B8;
      }
      goto L_08A665DC;
    }
L_08A665DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A665F8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A665F8u) goto L_08A665F8;
    return;
L_08A665F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A663B8;
      }
      goto L_08A66600;
    }
L_08A66600:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6661Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6661Cu) goto L_08A6661C;
    return;
L_08A6661C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A663B8;
      }
      goto L_08A66624;
    }
L_08A66624:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 572u);
    ctx.gpr[31] = (0x08A66640u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66640u) goto L_08A66640;
    return;
L_08A66640:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A663B8;
      }
      goto L_08A66648;
    }
L_08A66648:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66664u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66664u) goto L_08A66664;
    return;
L_08A66664:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A663B8;
      }
      goto L_08A6666C;
    }
L_08A6666C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A66680u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A66680u) goto L_08A66680;
    return;
L_08A66680:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6668C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A668D4;
      }
      goto L_08A666B0;
    }
L_08A666B0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30088)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A666C8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2914u);
    ctx.gpr[31] = (0x08A666E4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A666E4u) goto L_08A666E4;
    return;
L_08A666E4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A666E8;
L_08A666E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A668E8;
      }
      goto L_08A666F0;
    }
L_08A666F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2907u);
    ctx.gpr[31] = (0x08A6670Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6670Cu) goto L_08A6670C;
    return;
L_08A6670C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A666E8;
      }
      goto L_08A66714;
    }
L_08A66714:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2899u);
    ctx.gpr[31] = (0x08A66730u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66730u) goto L_08A66730;
    return;
L_08A66730:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A666E8;
      }
      goto L_08A66738;
    }
L_08A66738:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2912u);
    ctx.gpr[31] = (0x08A66754u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66754u) goto L_08A66754;
    return;
L_08A66754:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A666E8;
      }
      goto L_08A6675C;
    }
L_08A6675C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2917u);
    ctx.gpr[31] = (0x08A66778u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66778u) goto L_08A66778;
    return;
L_08A66778:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A666E8;
      }
      goto L_08A66780;
    }
L_08A66780:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2896u);
    ctx.gpr[31] = (0x08A6679Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6679Cu) goto L_08A6679C;
    return;
L_08A6679C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A666E8;
      }
      goto L_08A667A4;
    }
L_08A667A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2903u);
    ctx.gpr[31] = (0x08A667C0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A667C0u) goto L_08A667C0;
    return;
L_08A667C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A666E8;
      }
      goto L_08A667C8;
    }
L_08A667C8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2905u);
    ctx.gpr[31] = (0x08A667E4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A667E4u) goto L_08A667E4;
    return;
L_08A667E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A666E8;
      }
      goto L_08A667EC;
    }
L_08A667EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2909u);
    ctx.gpr[31] = (0x08A66808u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66808u) goto L_08A66808;
    return;
L_08A66808:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A666E8;
      }
      goto L_08A66810;
    }
L_08A66810:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6682Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6682Cu) goto L_08A6682C;
    return;
L_08A6682C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A666E8;
      }
      goto L_08A66834;
    }
L_08A66834:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66850u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66850u) goto L_08A66850;
    return;
L_08A66850:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A666E8;
      }
      goto L_08A66858;
    }
L_08A66858:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66874u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66874u) goto L_08A66874;
    return;
L_08A66874:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A666E8;
      }
      goto L_08A6687C;
    }
L_08A6687C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66898u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66898u) goto L_08A66898;
    return;
L_08A66898:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A666E8;
      }
      goto L_08A668A0;
    }
L_08A668A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A668BCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A668BCu) goto L_08A668BC;
    return;
L_08A668BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A666E8;
      }
      goto L_08A668C4;
    }
L_08A668C4:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A666E8;
      }
      goto L_08A668D4;
    }
L_08A668D4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A668E8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A668E8u) goto L_08A668E8;
    return;
L_08A668E8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A668F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A66B5C;
      }
      goto L_08A66918;
    }
L_08A66918:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30248)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A66930:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2934u);
    ctx.gpr[31] = (0x08A6694Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6694Cu) goto L_08A6694C;
    return;
L_08A6694C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A66950;
L_08A66950:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66B70;
      }
      goto L_08A66958;
    }
L_08A66958:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2939u);
    ctx.gpr[31] = (0x08A66974u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66974u) goto L_08A66974;
    return;
L_08A66974:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66950;
      }
      goto L_08A6697C;
    }
L_08A6697C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2929u);
    ctx.gpr[31] = (0x08A66998u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66998u) goto L_08A66998;
    return;
L_08A66998:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66950;
      }
      goto L_08A669A0;
    }
L_08A669A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2918u);
    ctx.gpr[31] = (0x08A669BCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A669BCu) goto L_08A669BC;
    return;
L_08A669BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66950;
      }
      goto L_08A669C4;
    }
L_08A669C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2925u);
    ctx.gpr[31] = (0x08A669E0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A669E0u) goto L_08A669E0;
    return;
L_08A669E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66950;
      }
      goto L_08A669E8;
    }
L_08A669E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2921u);
    ctx.gpr[31] = (0x08A66A04u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66A04u) goto L_08A66A04;
    return;
L_08A66A04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66950;
      }
      goto L_08A66A0C;
    }
L_08A66A0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2927u);
    ctx.gpr[31] = (0x08A66A28u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66A28u) goto L_08A66A28;
    return;
L_08A66A28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66950;
      }
      goto L_08A66A30;
    }
L_08A66A30:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2931u);
    ctx.gpr[31] = (0x08A66A4Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66A4Cu) goto L_08A66A4C;
    return;
L_08A66A4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66950;
      }
      goto L_08A66A54;
    }
L_08A66A54:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66A70u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66A70u) goto L_08A66A70;
    return;
L_08A66A70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66950;
      }
      goto L_08A66A78;
    }
L_08A66A78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66A94u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66A94u) goto L_08A66A94;
    return;
L_08A66A94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66950;
      }
      goto L_08A66A9C;
    }
L_08A66A9C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2936u);
    ctx.gpr[31] = (0x08A66AB8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66AB8u) goto L_08A66AB8;
    return;
L_08A66AB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66950;
      }
      goto L_08A66AC0;
    }
L_08A66AC0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66ADCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66ADCu) goto L_08A66ADC;
    return;
L_08A66ADC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66950;
      }
      goto L_08A66AE4;
    }
L_08A66AE4:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A66950;
      }
      goto L_08A66AF4;
    }
L_08A66AF4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66B10u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66B10u) goto L_08A66B10;
    return;
L_08A66B10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66950;
      }
      goto L_08A66B18;
    }
L_08A66B18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66B34u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66B34u) goto L_08A66B34;
    return;
L_08A66B34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66950;
      }
      goto L_08A66B3C;
    }
L_08A66B3C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A66950;
      }
      goto L_08A66B4C;
    }
L_08A66B4C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A66950;
      }
      goto L_08A66B5C;
    }
L_08A66B5C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A66B70u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A66B70u) goto L_08A66B70;
    return;
L_08A66B70:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A66B7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A66DA0;
      }
      goto L_08A66BA0;
    }
L_08A66BA0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30408)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A66BB8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4160u);
    ctx.gpr[31] = (0x08A66BD4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66BD4u) goto L_08A66BD4;
    return;
L_08A66BD4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A66BD8;
L_08A66BD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66DB4;
      }
      goto L_08A66BE0;
    }
L_08A66BE0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4158u);
    ctx.gpr[31] = (0x08A66BFCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66BFCu) goto L_08A66BFC;
    return;
L_08A66BFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66BD8;
      }
      goto L_08A66C04;
    }
L_08A66C04:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4148u);
    ctx.gpr[31] = (0x08A66C20u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66C20u) goto L_08A66C20;
    return;
L_08A66C20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66BD8;
      }
      goto L_08A66C28;
    }
L_08A66C28:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4154u);
    ctx.gpr[31] = (0x08A66C44u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66C44u) goto L_08A66C44;
    return;
L_08A66C44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66BD8;
      }
      goto L_08A66C4C;
    }
L_08A66C4C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4151u);
    ctx.gpr[31] = (0x08A66C68u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66C68u) goto L_08A66C68;
    return;
L_08A66C68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66BD8;
      }
      goto L_08A66C70;
    }
L_08A66C70:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4156u);
    ctx.gpr[31] = (0x08A66C8Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66C8Cu) goto L_08A66C8C;
    return;
L_08A66C8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66BD8;
      }
      goto L_08A66C94;
    }
L_08A66C94:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66CB0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66CB0u) goto L_08A66CB0;
    return;
L_08A66CB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66BD8;
      }
      goto L_08A66CB8;
    }
L_08A66CB8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4162u);
    ctx.gpr[31] = (0x08A66CD4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66CD4u) goto L_08A66CD4;
    return;
L_08A66CD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66BD8;
      }
      goto L_08A66CDC;
    }
L_08A66CDC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4164u);
    ctx.gpr[31] = (0x08A66CF8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66CF8u) goto L_08A66CF8;
    return;
L_08A66CF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66BD8;
      }
      goto L_08A66D00;
    }
L_08A66D00:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66D1Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66D1Cu) goto L_08A66D1C;
    return;
L_08A66D1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66BD8;
      }
      goto L_08A66D24;
    }
L_08A66D24:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66D40u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66D40u) goto L_08A66D40;
    return;
L_08A66D40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66BD8;
      }
      goto L_08A66D48;
    }
L_08A66D48:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66D64u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66D64u) goto L_08A66D64;
    return;
L_08A66D64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66BD8;
      }
      goto L_08A66D6C;
    }
L_08A66D6C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66D88u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66D88u) goto L_08A66D88;
    return;
L_08A66D88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66BD8;
      }
      goto L_08A66D90;
    }
L_08A66D90:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A66BD8;
      }
      goto L_08A66DA0;
    }
L_08A66DA0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A66DB4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A66DB4u) goto L_08A66DB4;
    return;
L_08A66DB4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A66DC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A67060;
      }
      goto L_08A66DE4;
    }
L_08A66DE4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30568)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A66DFC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4180u);
    ctx.gpr[31] = (0x08A66E18u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66E18u) goto L_08A66E18;
    return;
L_08A66E18:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A66E1C;
L_08A66E1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67074;
      }
      goto L_08A66E24;
    }
L_08A66E24:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4188u);
    ctx.gpr[31] = (0x08A66E40u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66E40u) goto L_08A66E40;
    return;
L_08A66E40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66E1C;
      }
      goto L_08A66E48;
    }
L_08A66E48:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4178u);
    ctx.gpr[31] = (0x08A66E64u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66E64u) goto L_08A66E64;
    return;
L_08A66E64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66E1C;
      }
      goto L_08A66E6C;
    }
L_08A66E6C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4167u);
    ctx.gpr[31] = (0x08A66E88u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66E88u) goto L_08A66E88;
    return;
L_08A66E88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66E1C;
      }
      goto L_08A66E90;
    }
L_08A66E90:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4174u);
    ctx.gpr[31] = (0x08A66EACu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66EACu) goto L_08A66EAC;
    return;
L_08A66EAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66E1C;
      }
      goto L_08A66EB4;
    }
L_08A66EB4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4170u);
    ctx.gpr[31] = (0x08A66ED0u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66ED0u) goto L_08A66ED0;
    return;
L_08A66ED0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66E1C;
      }
      goto L_08A66ED8;
    }
L_08A66ED8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4176u);
    ctx.gpr[31] = (0x08A66EF4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66EF4u) goto L_08A66EF4;
    return;
L_08A66EF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66E1C;
      }
      goto L_08A66EFC;
    }
L_08A66EFC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66F18u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66F18u) goto L_08A66F18;
    return;
L_08A66F18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66E1C;
      }
      goto L_08A66F20;
    }
L_08A66F20:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66F3Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66F3Cu) goto L_08A66F3C;
    return;
L_08A66F3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66E1C;
      }
      goto L_08A66F44;
    }
L_08A66F44:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4183u);
    ctx.gpr[31] = (0x08A66F60u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66F60u) goto L_08A66F60;
    return;
L_08A66F60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66E1C;
      }
      goto L_08A66F68;
    }
L_08A66F68:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66F84u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66F84u) goto L_08A66F84;
    return;
L_08A66F84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66E1C;
      }
      goto L_08A66F8C;
    }
L_08A66F8C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4185u);
    ctx.gpr[31] = (0x08A66FA8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66FA8u) goto L_08A66FA8;
    return;
L_08A66FA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66E1C;
      }
      goto L_08A66FB0;
    }
L_08A66FB0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66FCCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A66FCCu) goto L_08A66FCC;
    return;
L_08A66FCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66E1C;
      }
      goto L_08A66FD4;
    }
L_08A66FD4:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A66E1C;
      }
      goto L_08A66FE4;
    }
L_08A66FE4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67000u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67000u) goto L_08A67000;
    return;
L_08A67000:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66E1C;
      }
      goto L_08A67008;
    }
L_08A67008:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67024u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67024u) goto L_08A67024;
    return;
L_08A67024:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66E1C;
      }
      goto L_08A6702C;
    }
L_08A6702C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A66E1C;
      }
      goto L_08A6703C;
    }
L_08A6703C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67058u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67058u) goto L_08A67058;
    return;
L_08A67058:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66E1C;
      }
      goto L_08A67060;
    }
L_08A67060:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A67074u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A67074u) goto L_08A67074;
    return;
L_08A67074:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67080:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A67320;
      }
      goto L_08A670A4;
    }
L_08A670A4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30728)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A670BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1278u);
    ctx.gpr[31] = (0x08A670D8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A670D8u) goto L_08A670D8;
    return;
L_08A670D8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A670DC;
L_08A670DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67334;
      }
      goto L_08A670E4;
    }
L_08A670E4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1273u);
    ctx.gpr[31] = (0x08A67100u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67100u) goto L_08A67100;
    return;
L_08A67100:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A670DC;
      }
      goto L_08A67108;
    }
L_08A67108:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1268u);
    ctx.gpr[31] = (0x08A67124u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67124u) goto L_08A67124;
    return;
L_08A67124:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A670DC;
      }
      goto L_08A6712C;
    }
L_08A6712C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1258u);
    ctx.gpr[31] = (0x08A67148u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67148u) goto L_08A67148;
    return;
L_08A67148:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A670DC;
      }
      goto L_08A67150;
    }
L_08A67150:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1265u);
    ctx.gpr[31] = (0x08A6716Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6716Cu) goto L_08A6716C;
    return;
L_08A6716C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A670DC;
      }
      goto L_08A67174;
    }
L_08A67174:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1261u);
    ctx.gpr[31] = (0x08A67190u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67190u) goto L_08A67190;
    return;
L_08A67190:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A670DC;
      }
      goto L_08A67198;
    }
L_08A67198:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1267u);
    ctx.gpr[31] = (0x08A671B4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A671B4u) goto L_08A671B4;
    return;
L_08A671B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A670DC;
      }
      goto L_08A671BC;
    }
L_08A671BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A671D8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A671D8u) goto L_08A671D8;
    return;
L_08A671D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A670DC;
      }
      goto L_08A671E0;
    }
L_08A671E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1270u);
    ctx.gpr[31] = (0x08A671FCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A671FCu) goto L_08A671FC;
    return;
L_08A671FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A670DC;
      }
      goto L_08A67204;
    }
L_08A67204:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67220u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67220u) goto L_08A67220;
    return;
L_08A67220:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A670DC;
      }
      goto L_08A67228;
    }
L_08A67228:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67244u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67244u) goto L_08A67244;
    return;
L_08A67244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A670DC;
      }
      goto L_08A6724C;
    }
L_08A6724C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67268u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67268u) goto L_08A67268;
    return;
L_08A67268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A670DC;
      }
      goto L_08A67270;
    }
L_08A67270:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1275u);
    ctx.gpr[31] = (0x08A6728Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6728Cu) goto L_08A6728C;
    return;
L_08A6728C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A670DC;
      }
      goto L_08A67294;
    }
L_08A67294:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A672B0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A672B0u) goto L_08A672B0;
    return;
L_08A672B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A670DC;
      }
      goto L_08A672B8;
    }
L_08A672B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A672D4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A672D4u) goto L_08A672D4;
    return;
L_08A672D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A670DC;
      }
      goto L_08A672DC;
    }
L_08A672DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A672F8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A672F8u) goto L_08A672F8;
    return;
L_08A672F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A670DC;
      }
      goto L_08A67300;
    }
L_08A67300:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A670DC;
      }
      goto L_08A67310;
    }
L_08A67310:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A670DC;
      }
      goto L_08A67320;
    }
L_08A67320:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A67334u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A67334u) goto L_08A67334;
    return;
L_08A67334:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67340:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A67598;
      }
      goto L_08A67364;
    }
L_08A67364:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30888)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6737C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1292u);
    ctx.gpr[31] = (0x08A67398u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67398u) goto L_08A67398;
    return;
L_08A67398:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6739C;
L_08A6739C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A675AC;
      }
      goto L_08A673A4;
    }
L_08A673A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1282u);
    ctx.gpr[31] = (0x08A673C0u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A673C0u) goto L_08A673C0;
    return;
L_08A673C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6739C;
      }
      goto L_08A673C8;
    }
L_08A673C8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1290u);
    ctx.gpr[31] = (0x08A673E4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A673E4u) goto L_08A673E4;
    return;
L_08A673E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6739C;
      }
      goto L_08A673EC;
    }
L_08A673EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1279u);
    ctx.gpr[31] = (0x08A67408u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67408u) goto L_08A67408;
    return;
L_08A67408:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6739C;
      }
      goto L_08A67410;
    }
L_08A67410:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1286u);
    ctx.gpr[31] = (0x08A6742Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6742Cu) goto L_08A6742C;
    return;
L_08A6742C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6739C;
      }
      goto L_08A67434;
    }
L_08A67434:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1288u);
    ctx.gpr[31] = (0x08A67450u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67450u) goto L_08A67450;
    return;
L_08A67450:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6739C;
      }
      goto L_08A67458;
    }
L_08A67458:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67474u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67474u) goto L_08A67474;
    return;
L_08A67474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6739C;
      }
      goto L_08A6747C;
    }
L_08A6747C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67498u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67498u) goto L_08A67498;
    return;
L_08A67498:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6739C;
      }
      goto L_08A674A0;
    }
L_08A674A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1295u);
    ctx.gpr[31] = (0x08A674BCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A674BCu) goto L_08A674BC;
    return;
L_08A674BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6739C;
      }
      goto L_08A674C4;
    }
L_08A674C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1297u);
    ctx.gpr[31] = (0x08A674E0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A674E0u) goto L_08A674E0;
    return;
L_08A674E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6739C;
      }
      goto L_08A674E8;
    }
L_08A674E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67504u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67504u) goto L_08A67504;
    return;
L_08A67504:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6739C;
      }
      goto L_08A6750C;
    }
L_08A6750C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67528u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67528u) goto L_08A67528;
    return;
L_08A67528:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6739C;
      }
      goto L_08A67530;
    }
L_08A67530:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6754Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6754Cu) goto L_08A6754C;
    return;
L_08A6754C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6739C;
      }
      goto L_08A67554;
    }
L_08A67554:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A6739C;
      }
      goto L_08A67564;
    }
L_08A67564:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1300u);
    ctx.gpr[31] = (0x08A67580u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67580u) goto L_08A67580;
    return;
L_08A67580:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6739C;
      }
      goto L_08A67588;
    }
L_08A67588:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A6739C;
      }
      goto L_08A67598;
    }
L_08A67598:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A675ACu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A675ACu) goto L_08A675AC;
    return;
L_08A675AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A675B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A677C8;
      }
      goto L_08A675DC;
    }
L_08A675DC:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31048)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A675F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1304u);
    ctx.gpr[31] = (0x08A67610u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67610u) goto L_08A67610;
    return;
L_08A67610:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A67614;
L_08A67614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A677DC;
      }
      goto L_08A6761C;
    }
L_08A6761C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1312u);
    ctx.gpr[31] = (0x08A67638u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67638u) goto L_08A67638;
    return;
L_08A67638:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67614;
      }
      goto L_08A67640;
    }
L_08A67640:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1301u);
    ctx.gpr[31] = (0x08A6765Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6765Cu) goto L_08A6765C;
    return;
L_08A6765C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67614;
      }
      goto L_08A67664;
    }
L_08A67664:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1308u);
    ctx.gpr[31] = (0x08A67680u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67680u) goto L_08A67680;
    return;
L_08A67680:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67614;
      }
      goto L_08A67688;
    }
L_08A67688:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1310u);
    ctx.gpr[31] = (0x08A676A4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A676A4u) goto L_08A676A4;
    return;
L_08A676A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67614;
      }
      goto L_08A676AC;
    }
L_08A676AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1314u);
    ctx.gpr[31] = (0x08A676C8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A676C8u) goto L_08A676C8;
    return;
L_08A676C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67614;
      }
      goto L_08A676D0;
    }
L_08A676D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A676ECu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A676ECu) goto L_08A676EC;
    return;
L_08A676EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67614;
      }
      goto L_08A676F4;
    }
L_08A676F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1317u);
    ctx.gpr[31] = (0x08A67710u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67710u) goto L_08A67710;
    return;
L_08A67710:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67614;
      }
      goto L_08A67718;
    }
L_08A67718:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1319u);
    ctx.gpr[31] = (0x08A67734u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67734u) goto L_08A67734;
    return;
L_08A67734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67614;
      }
      goto L_08A6773C;
    }
L_08A6773C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67758u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67758u) goto L_08A67758;
    return;
L_08A67758:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67614;
      }
      goto L_08A67760;
    }
L_08A67760:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6777Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6777Cu) goto L_08A6777C;
    return;
L_08A6777C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67614;
      }
      goto L_08A67784;
    }
L_08A67784:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A67614;
      }
      goto L_08A67794;
    }
L_08A67794:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1322u);
    ctx.gpr[31] = (0x08A677B0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A677B0u) goto L_08A677B0;
    return;
L_08A677B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67614;
      }
      goto L_08A677B8;
    }
L_08A677B8:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A67614;
      }
      goto L_08A677C8;
    }
L_08A677C8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A677DCu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A677DCu) goto L_08A677DC;
    return;
L_08A677DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A677E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A67A1C;
      }
      goto L_08A6780C;
    }
L_08A6780C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31208)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67824:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2070u);
    ctx.gpr[31] = (0x08A67840u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67840u) goto L_08A67840;
    return;
L_08A67840:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A67844;
L_08A67844:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67A30;
      }
      goto L_08A6784C;
    }
L_08A6784C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2061u);
    ctx.gpr[31] = (0x08A67868u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67868u) goto L_08A67868;
    return;
L_08A67868:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67844;
      }
      goto L_08A67870;
    }
L_08A67870:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2068u);
    ctx.gpr[31] = (0x08A6788Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6788Cu) goto L_08A6788C;
    return;
L_08A6788C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67844;
      }
      goto L_08A67894;
    }
L_08A67894:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2058u);
    ctx.gpr[31] = (0x08A678B0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A678B0u) goto L_08A678B0;
    return;
L_08A678B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67844;
      }
      goto L_08A678B8;
    }
L_08A678B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2064u);
    ctx.gpr[31] = (0x08A678D4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A678D4u) goto L_08A678D4;
    return;
L_08A678D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67844;
      }
      goto L_08A678DC;
    }
L_08A678DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2066u);
    ctx.gpr[31] = (0x08A678F8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A678F8u) goto L_08A678F8;
    return;
L_08A678F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67844;
      }
      goto L_08A67900;
    }
L_08A67900:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6791Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6791Cu) goto L_08A6791C;
    return;
L_08A6791C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67844;
      }
      goto L_08A67924;
    }
L_08A67924:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67940u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67940u) goto L_08A67940;
    return;
L_08A67940:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67844;
      }
      goto L_08A67948;
    }
L_08A67948:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2073u);
    ctx.gpr[31] = (0x08A67964u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67964u) goto L_08A67964;
    return;
L_08A67964:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67844;
      }
      goto L_08A6796C;
    }
L_08A6796C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2075u);
    ctx.gpr[31] = (0x08A67988u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67988u) goto L_08A67988;
    return;
L_08A67988:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67844;
      }
      goto L_08A67990;
    }
L_08A67990:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A67844;
      }
      goto L_08A679A0;
    }
L_08A679A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A679BCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A679BCu) goto L_08A679BC;
    return;
L_08A679BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67844;
      }
      goto L_08A679C4;
    }
L_08A679C4:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A67844;
      }
      goto L_08A679D4;
    }
L_08A679D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2078u);
    ctx.gpr[31] = (0x08A679F0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A679F0u) goto L_08A679F0;
    return;
L_08A679F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67844;
      }
      goto L_08A679F8;
    }
L_08A679F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67A14u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67A14u) goto L_08A67A14;
    return;
L_08A67A14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67844;
      }
      goto L_08A67A1C;
    }
L_08A67A1C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A67A30u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A67A30u) goto L_08A67A30;
    return;
L_08A67A30:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67A3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A67CBC;
      }
      goto L_08A67A60;
    }
L_08A67A60:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31368)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67A78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2091u);
    ctx.gpr[31] = (0x08A67A94u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67A94u) goto L_08A67A94;
    return;
L_08A67A94:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A67A98;
L_08A67A98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67CD0;
      }
      goto L_08A67AA0;
    }
L_08A67AA0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2082u);
    ctx.gpr[31] = (0x08A67ABCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67ABCu) goto L_08A67ABC;
    return;
L_08A67ABC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67A98;
      }
      goto L_08A67AC4;
    }
L_08A67AC4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2089u);
    ctx.gpr[31] = (0x08A67AE0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67AE0u) goto L_08A67AE0;
    return;
L_08A67AE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67A98;
      }
      goto L_08A67AE8;
    }
L_08A67AE8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2079u);
    ctx.gpr[31] = (0x08A67B04u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67B04u) goto L_08A67B04;
    return;
L_08A67B04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67A98;
      }
      goto L_08A67B0C;
    }
L_08A67B0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2085u);
    ctx.gpr[31] = (0x08A67B28u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67B28u) goto L_08A67B28;
    return;
L_08A67B28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67A98;
      }
      goto L_08A67B30;
    }
L_08A67B30:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2087u);
    ctx.gpr[31] = (0x08A67B4Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67B4Cu) goto L_08A67B4C;
    return;
L_08A67B4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67A98;
      }
      goto L_08A67B54;
    }
L_08A67B54:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67B70u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67B70u) goto L_08A67B70;
    return;
L_08A67B70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67A98;
      }
      goto L_08A67B78;
    }
L_08A67B78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67B94u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67B94u) goto L_08A67B94;
    return;
L_08A67B94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67A98;
      }
      goto L_08A67B9C;
    }
L_08A67B9C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2094u);
    ctx.gpr[31] = (0x08A67BB8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67BB8u) goto L_08A67BB8;
    return;
L_08A67BB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67A98;
      }
      goto L_08A67BC0;
    }
L_08A67BC0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2096u);
    ctx.gpr[31] = (0x08A67BDCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67BDCu) goto L_08A67BDC;
    return;
L_08A67BDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67A98;
      }
      goto L_08A67BE4;
    }
L_08A67BE4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67C00u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67C00u) goto L_08A67C00;
    return;
L_08A67C00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67A98;
      }
      goto L_08A67C08;
    }
L_08A67C08:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67C24u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67C24u) goto L_08A67C24;
    return;
L_08A67C24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67A98;
      }
      goto L_08A67C2C;
    }
L_08A67C2C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67C48u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67C48u) goto L_08A67C48;
    return;
L_08A67C48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67A98;
      }
      goto L_08A67C50;
    }
L_08A67C50:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67C6Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67C6Cu) goto L_08A67C6C;
    return;
L_08A67C6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67A98;
      }
      goto L_08A67C74;
    }
L_08A67C74:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2099u);
    ctx.gpr[31] = (0x08A67C90u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67C90u) goto L_08A67C90;
    return;
L_08A67C90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67A98;
      }
      goto L_08A67C98;
    }
L_08A67C98:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67CB4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67CB4u) goto L_08A67CB4;
    return;
L_08A67CB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67A98;
      }
      goto L_08A67CBC;
    }
L_08A67CBC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A67CD0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A67CD0u) goto L_08A67CD0;
    return;
L_08A67CD0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67CDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A67EC8;
      }
      goto L_08A67D00;
    }
L_08A67D00:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31528)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67D18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 733u);
    ctx.gpr[31] = (0x08A67D34u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67D34u) goto L_08A67D34;
    return;
L_08A67D34:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A67D38;
L_08A67D38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67EDC;
      }
      goto L_08A67D40;
    }
L_08A67D40:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 731u);
    ctx.gpr[31] = (0x08A67D5Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67D5Cu) goto L_08A67D5C;
    return;
L_08A67D5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67D38;
      }
      goto L_08A67D64;
    }
L_08A67D64:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 722u);
    ctx.gpr[31] = (0x08A67D80u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67D80u) goto L_08A67D80;
    return;
L_08A67D80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67D38;
      }
      goto L_08A67D88;
    }
L_08A67D88:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 727u);
    ctx.gpr[31] = (0x08A67DA4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67DA4u) goto L_08A67DA4;
    return;
L_08A67DA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67D38;
      }
      goto L_08A67DAC;
    }
L_08A67DAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 724u);
    ctx.gpr[31] = (0x08A67DC8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67DC8u) goto L_08A67DC8;
    return;
L_08A67DC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67D38;
      }
      goto L_08A67DD0;
    }
L_08A67DD0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 729u);
    ctx.gpr[31] = (0x08A67DECu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67DECu) goto L_08A67DEC;
    return;
L_08A67DEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67D38;
      }
      goto L_08A67DF4;
    }
L_08A67DF4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67E10u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67E10u) goto L_08A67E10;
    return;
L_08A67E10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67D38;
      }
      goto L_08A67E18;
    }
L_08A67E18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 736u);
    ctx.gpr[31] = (0x08A67E34u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67E34u) goto L_08A67E34;
    return;
L_08A67E34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67D38;
      }
      goto L_08A67E3C;
    }
L_08A67E3C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 738u);
    ctx.gpr[31] = (0x08A67E58u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67E58u) goto L_08A67E58;
    return;
L_08A67E58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67D38;
      }
      goto L_08A67E60;
    }
L_08A67E60:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67E7Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67E7Cu) goto L_08A67E7C;
    return;
L_08A67E7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67D38;
      }
      goto L_08A67E84;
    }
L_08A67E84:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A67D38;
      }
      goto L_08A67E94;
    }
L_08A67E94:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 741u);
    ctx.gpr[31] = (0x08A67EB0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67EB0u) goto L_08A67EB0;
    return;
L_08A67EB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67D38;
      }
      goto L_08A67EB8;
    }
L_08A67EB8:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A67D38;
      }
      goto L_08A67EC8;
    }
L_08A67EC8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A67EDCu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A67EDCu) goto L_08A67EDC;
    return;
L_08A67EDC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67EE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 19u, 0x08A68144u>(ctx, &aot_mem); return;
      }
      goto L_08A67F0C;
    }
L_08A67F0C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31688)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67F24:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 758u);
    ctx.gpr[31] = (0x08A67F40u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67F40u) goto L_08A67F40;
    return;
L_08A67F40:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A67F44;
L_08A67F44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 20u, 0x08A68158u>(ctx, &aot_mem); return;
      }
      goto L_08A67F4C;
    }
L_08A67F4C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 756u);
    ctx.gpr[31] = (0x08A67F68u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67F68u) goto L_08A67F68;
    return;
L_08A67F68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67F44;
      }
      goto L_08A67F70;
    }
L_08A67F70:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 745u);
    ctx.gpr[31] = (0x08A67F8Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67F8Cu) goto L_08A67F8C;
    return;
L_08A67F8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67F44;
      }
      goto L_08A67F94;
    }
L_08A67F94:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 752u);
    ctx.gpr[31] = (0x08A67FB0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67FB0u) goto L_08A67FB0;
    return;
L_08A67FB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67F44;
      }
      goto L_08A67FB8;
    }
L_08A67FB8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 748u);
    ctx.gpr[31] = (0x08A67FD4u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67FD4u) goto L_08A67FD4;
    return;
L_08A67FD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67F44;
      }
      goto L_08A67FDC;
    }
L_08A67FDC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 754u);
    ctx.gpr[31] = (0x08A67FF8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A67FF8u) goto L_08A67FF8;
    return;
L_08A67FF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67F44;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 1u, 0x08A68000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0152(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0152_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_152(Runtime &runtime) {
    runtime.register_generated_unit(152u, 0x08A64000u, 16384u, &recomp_unit_0152, &recomp_unit_0152_entry);
    runtime.register_function(0x08A64000u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64018u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64020u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6403Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64044u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64060u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64068u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64084u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6408Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A640A8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A640B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A640CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A640D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A640F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A640F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64114u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6411Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64138u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64140u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6415Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64164u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64180u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64188u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A641A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A641ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A641BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A641D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A641DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64200u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64218u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64234u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64238u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64240u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6425Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64264u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64280u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64288u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A642A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A642ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A642C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A642D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A642ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A642F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64310u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64318u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64334u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6433Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64358u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64360u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6437Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64384u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A643A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A643A8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A643C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A643CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A643E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A643F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64400u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64414u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64420u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64444u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6445Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64478u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6447Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64484u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A644A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A644A8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A644C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A644CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A644E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A644F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6450Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64514u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64530u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64538u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64554u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6455Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64578u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64580u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6459Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A645A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A645C0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A645C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A645E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A645ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64608u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64610u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6462Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64634u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64650u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64658u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64668u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6467Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64688u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A646ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A646C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A646E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A646E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A646ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64708u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64710u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6472Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64734u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64750u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64758u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64774u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6477Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64798u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A647A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A647BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A647C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A647E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A647E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64804u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6480Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64828u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64830u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6484Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64854u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64870u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64878u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64894u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6489Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A648ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A648BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A648D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A648DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64900u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64918u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64934u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64938u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64940u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6495Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64964u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64980u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64988u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A649A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A649ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A649C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A649D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A649ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A649F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A10u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A18u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A34u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A3Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A58u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A60u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A7Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A84u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64AA0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64AA8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64AC4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64ACCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64AE8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64AF0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B0Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B14u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B30u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B38u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B54u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B5Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B6Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B80u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B8Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64BB0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64BC8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64BE4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64BE8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64BF0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C0Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C14u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C30u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C38u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C54u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C5Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C78u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C80u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C9Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64CA4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64CC0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64CC8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64CE4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64CECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D08u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D10u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D2Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D34u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D50u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D58u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D74u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D7Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D8Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64DA8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64DB0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64DCCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64DD4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64DE8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64DF4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64E18u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64E30u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64E4Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64E50u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64E58u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64E74u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64E7Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64E98u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64EA0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64EBCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64EC4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64EE0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64EE8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F04u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F0Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F28u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F30u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F4Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F54u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F70u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F78u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F94u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F9Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64FB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64FC0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64FDCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64FE4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65000u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65008u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65024u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6502Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65048u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65050u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6506Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65074u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65090u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65098u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A650ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A650B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A650DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A650F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65110u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65114u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6511Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65138u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65140u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6515Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65164u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65180u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65188u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A651A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A651ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A651C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A651D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A651ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A651F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65210u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65218u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65234u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6523Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65258u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65260u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6527Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65284u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A652A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A652A8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A652C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A652CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A652DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A652ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A652FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6530Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65320u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6532Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65350u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65368u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65384u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65388u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65390u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A653ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A653B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A653D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A653D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A653F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A653FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65418u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65420u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6543Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65444u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65460u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65468u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65484u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6548Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A654A8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A654B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A654CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A654D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A654F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A654F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65514u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6551Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6552Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65540u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6554Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65570u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65588u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A655A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A655A8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A655B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A655CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A655D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A655F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A655F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65614u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6561Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65638u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65640u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6565Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65664u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65680u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65688u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A656A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A656ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A656C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A656D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A656ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A656F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65710u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65718u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65734u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6573Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6574Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65760u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6576Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65790u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A657A8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A657C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A657C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A657D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A657ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A657F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65810u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65818u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65834u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6583Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65858u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65860u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6587Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65884u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A658A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A658A8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A658C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A658CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A658E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A658F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6590Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65914u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65930u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65938u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65954u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6595Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6596Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65988u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65990u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A659A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A659B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A659C0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A659E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A659FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A18u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A1Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A24u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A40u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A48u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A64u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A6Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A88u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A90u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65AACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65AB4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65AD0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65AD8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65AF4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65AFCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B18u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B20u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B3Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B44u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B60u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B68u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B84u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B8Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B9Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65BB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65BC0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65BDCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65BE4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65C00u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65C08u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65C1Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65C28u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65C4Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65C64u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65C80u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65C84u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65C8Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65CA8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65CB0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65CCCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65CD4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65CF0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65CF8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65D14u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65D1Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65D38u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65D40u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65D5Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65D64u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65D80u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65D88u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65DA4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65DACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65DC8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65DD0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65DE0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65DFCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E04u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E20u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E28u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E38u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E4Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E58u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E7Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E94u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65EB0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65EB4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65EBCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65ED8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65EE0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65EFCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F04u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F20u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F28u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F44u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F4Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F68u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F70u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F8Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F94u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65FB0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65FB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65FD4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65FDCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65FF8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66000u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6601Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66024u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66040u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66048u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66064u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6606Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66088u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66090u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A660ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A660B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A660C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A660D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A660E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66108u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66120u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6613Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66140u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66148u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66164u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6616Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66188u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66190u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A661ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A661B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A661D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A661D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A661F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A661FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66218u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66220u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6623Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66244u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66260u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66268u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66284u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6628Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A662A8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A662B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A662CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A662D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A662F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A662F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66308u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66318u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66334u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6633Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66350u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6635Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66380u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66398u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A663B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A663B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A663C0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A663DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A663E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66400u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66408u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66424u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6642Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66448u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66450u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6646Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66474u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66490u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66498u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A664B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A664BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A664D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A664E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A664FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66504u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66520u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66528u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66544u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6654Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66568u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66570u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6658Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66594u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A665B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A665B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A665D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A665DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A665F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66600u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6661Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66624u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66640u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66648u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66664u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6666Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66680u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6668Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A666B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A666C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A666E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A666E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A666F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6670Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66714u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66730u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66738u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66754u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6675Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66778u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66780u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6679Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A667A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A667C0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A667C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A667E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A667ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66808u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66810u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6682Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66834u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66850u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66858u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66874u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6687Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66898u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A668A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A668BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A668C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A668D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A668E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A668F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66918u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66930u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6694Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66950u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66958u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66974u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6697Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66998u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A669A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A669BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A669C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A669E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A669E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A04u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A0Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A28u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A30u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A4Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A54u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A70u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A78u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A94u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A9Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66AB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66AC0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66ADCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66AE4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66AF4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B10u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B18u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B34u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B3Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B4Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B5Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B70u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B7Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66BA0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66BB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66BD4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66BD8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66BE0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66BFCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66C04u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66C20u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66C28u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66C44u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66C4Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66C68u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66C70u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66C8Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66C94u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66CB0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66CB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66CD4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66CDCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66CF8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66D00u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66D1Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66D24u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66D40u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66D48u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66D64u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66D6Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66D88u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66D90u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66DA0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66DB4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66DC0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66DE4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66DFCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66E18u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66E1Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66E24u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66E40u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66E48u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66E64u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66E6Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66E88u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66E90u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66EACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66EB4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66ED0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66ED8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66EF4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66EFCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66F18u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66F20u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66F3Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66F44u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66F60u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66F68u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66F84u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66F8Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66FA8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66FB0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66FCCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66FD4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66FE4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67000u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67008u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67024u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6702Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6703Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67058u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67060u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67074u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67080u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A670A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A670BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A670D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A670DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A670E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67100u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67108u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67124u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6712Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67148u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67150u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6716Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67174u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67190u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67198u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A671B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A671BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A671D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A671E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A671FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67204u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67220u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67228u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67244u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6724Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67268u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67270u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6728Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67294u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A672B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A672B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A672D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A672DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A672F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67300u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67310u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67320u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67334u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67340u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67364u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6737Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67398u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6739Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A673A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A673C0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A673C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A673E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A673ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67408u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67410u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6742Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67434u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67450u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67458u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67474u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6747Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67498u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A674A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A674BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A674C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A674E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A674E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67504u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6750Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67528u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67530u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6754Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67554u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67564u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67580u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67588u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67598u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A675ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A675B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A675DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A675F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67610u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67614u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6761Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67638u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67640u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6765Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67664u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67680u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67688u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A676A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A676ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A676C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A676D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A676ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A676F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67710u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67718u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67734u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6773Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67758u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67760u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6777Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67784u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67794u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A677B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A677B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A677C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A677DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A677E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6780Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67824u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67840u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67844u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6784Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67868u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67870u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6788Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67894u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A678B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A678B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A678D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A678DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A678F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67900u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6791Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67924u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67940u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67948u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67964u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6796Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67988u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67990u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A679A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A679BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A679C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A679D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A679F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A679F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A14u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A1Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A30u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A3Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A60u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A78u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A94u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A98u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67AA0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67ABCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67AC4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67AE0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67AE8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67B04u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67B0Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67B28u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67B30u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67B4Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67B54u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67B70u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67B78u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67B94u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67B9Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67BB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67BC0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67BDCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67BE4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C00u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C08u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C24u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C2Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C48u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C50u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C6Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C74u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C90u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C98u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67CB4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67CBCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67CD0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67CDCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67D00u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67D18u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67D34u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67D38u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67D40u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67D5Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67D64u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67D80u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67D88u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67DA4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67DACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67DC8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67DD0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67DECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67DF4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E10u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E18u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E34u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E3Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E58u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E60u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E7Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E84u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E94u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67EB0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67EB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67EC8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67EDCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67EE8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67F0Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67F24u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67F40u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67F44u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67F4Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67F68u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67F70u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67F8Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67F94u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67FB0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67FB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67FD4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67FDCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67FF8u, &recomp_unit_0152, "recomp_unit_0152");
}
} // namespace psprecomp
