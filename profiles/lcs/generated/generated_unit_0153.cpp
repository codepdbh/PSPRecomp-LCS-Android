#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0153[4095] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0,
    0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 15,
    0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 25, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0,
    0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 36,
    0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0,
    0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0,
    0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 56, 0, 57,
    0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0,
    0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0,
    0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0,
    78, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0,
    0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0,
    0, 0, 0, 0, 92, 93, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0,
    99, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0,
    0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 113,
    0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0,
    121, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0,
    0, 0, 127, 128, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0,
    135, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0,
    0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 149,
    0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0,
    0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 162, 0, 163,
    0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0,
    0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0,
    0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0,
    0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0,
    0, 0, 0, 0, 191, 192, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0,
    198, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0,
    0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 212,
    0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0,
    0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 223, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0,
    0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0,
    234, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0,
    0, 0, 241, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 246, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 252, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0,
    0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0,
    0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0,
    270, 0, 271, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0,
    276, 277, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0,
    0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0,
    291, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0,
    0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 302, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0,
    0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 0, 0,
    312, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0,
    0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 325, 0, 326, 0,
    0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0,
    333, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0,
    0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0,
    347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 350, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0,
    354, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 0,
    0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 368,
    0, 369, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374,
    375, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0,
    0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 0, 389,
    0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 400, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0,
    0, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 410,
    0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0,
    0, 0, 0, 418, 0, 419, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0,
    0, 0, 0, 424, 425, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 431,
    0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0,
    0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 445, 0, 0, 446,
    0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 450, 0, 451, 0, 0, 0, 0, 0, 0, 452,
    0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0,
    0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0,
    467, 0, 0, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0, 0, 470, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0,
    473, 0, 0, 0, 0, 0, 0, 474, 475, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0,
    0, 0, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0,
    488, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0,
    495, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 499, 500, 0, 501, 0, 0, 0,
    0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0,
    509, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 0,
    0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0, 0, 0, 0, 520, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0,
    0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 524, 525, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0,
    530, 0, 0, 0, 0, 0, 0, 531, 0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 0,
    0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 544,
    0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 549, 550, 0,
    551, 0, 0, 0, 0, 0, 0, 552, 0, 553, 0, 0, 0, 0, 0, 0, 554, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 557, 0, 0, 0, 0,
    0, 0, 558, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 563, 0, 0, 0, 0, 0, 0, 564, 0, 565,
    0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 570, 0, 0, 571, 0, 0, 0, 0, 0, 0,
    0, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 574, 575, 0, 576, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 0,
    0, 0, 579, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 586,
    0, 0, 0, 0, 0, 0, 587, 0, 588, 0, 0, 0, 0, 0, 0, 589, 0, 590, 0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 0, 0, 0, 0,
    0, 593, 0, 594, 0, 0, 0, 0, 595, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0,
    0, 599, 600, 0, 601, 0, 0, 0, 0, 0, 0, 602, 0, 603, 0, 0, 0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 607,
    0, 0, 0, 0, 0, 0, 608, 0, 609, 0, 0, 0, 0, 0, 0, 610, 0, 611, 0, 0, 0, 0, 0, 0, 612, 0, 613, 0, 0, 0, 0, 0,
    0, 614, 0, 615, 0, 0, 0, 0, 0, 0, 616, 0, 617, 0, 0, 0, 0, 0, 0, 618, 0, 619, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0,
    0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 624, 625, 0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 628,
    0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 0, 0,
    0, 635, 0, 636, 0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 0, 0, 0, 0, 0, 639, 0, 640, 0, 0, 0, 0, 0, 0, 641, 0, 642, 0,
    0, 0, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 645, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0,
    0, 0, 0, 0, 0, 649, 650, 0, 651, 0, 0, 0, 0, 0, 0, 652, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 655, 0, 0, 0, 0, 0,
    0, 656, 0, 657, 0, 0, 0, 0, 0, 0, 658, 0, 659, 0, 0, 0, 0, 0, 0, 660, 0, 661, 0, 0, 0, 0, 0, 0, 662, 0, 663, 0,
    0, 0, 0, 0, 0, 664, 0, 665, 0, 0, 0, 0, 0, 0, 666, 0, 667, 0, 0, 0, 0, 0, 0, 668, 0, 669, 0, 0, 0, 0, 670, 0,
    0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 674, 675, 0, 676, 0, 0, 0, 0, 0,
    0, 677, 0, 678, 0, 0, 0, 0, 0, 0, 679, 0, 680, 0, 0, 0, 0, 0, 0, 681, 0, 682, 0, 0, 0, 0, 0, 0, 683, 0, 684, 0,
    0, 0, 0, 0, 0, 685, 0, 686, 0, 0, 0, 0, 0, 0, 687, 0, 688, 0, 0, 0, 0, 0, 0, 689, 0, 690, 0, 0, 0, 0, 0, 0,
    691, 0, 692, 0, 0, 0, 0, 0, 0, 693, 0, 694, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 698, 0,
    0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 700, 701, 0, 702, 0, 0, 0, 0, 0, 0, 703, 0, 704, 0, 0, 0, 0, 0, 0, 705, 0,
    706, 0, 0, 0, 0, 0, 0, 707, 0, 708, 0, 0, 0, 709, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 712, 0, 0, 0, 0,
    0, 713, 0, 0, 0, 0, 0, 0, 714, 715, 0, 716, 0, 0, 0, 0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 0,
    0, 0, 0, 0, 721, 0, 722, 0, 0, 0, 723, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 726, 0, 0, 0, 0, 0, 727, 0,
    0, 0, 0, 0, 0, 728, 729, 0, 730, 0, 0, 0, 0, 0, 0, 731, 0, 732, 0, 0, 0, 0, 0, 0, 733, 0, 734, 0, 0, 0, 0, 0,
    0, 735, 0, 736, 0, 0, 0, 737, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 740, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0,
    0, 0, 742, 743, 0, 744, 0, 0, 0, 0, 0, 0, 745, 0, 746, 0, 0, 0, 0, 0, 0, 747, 0, 748, 0, 0, 0, 0, 0, 0, 749, 0,
    750, 0, 0, 0, 751, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 754, 0, 755, 0, 0, 0, 0, 0, 0, 756, 757, 0, 758, 0,
    0, 0, 0, 0, 0, 759, 0, 760, 0, 0, 0, 0, 0, 0, 761, 0, 762, 0, 0, 0, 763, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 765,
    0, 0, 766, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 768, 769, 0, 770, 0, 0, 0, 0, 0, 0, 771, 0, 772, 0, 0, 0, 0,
    0, 0, 773, 0, 774, 0, 0, 0, 0, 0, 0, 775, 0, 776, 0, 0, 0, 777, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0,
    0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 781, 782, 0, 783, 0, 0, 0, 0, 0, 0, 784, 0, 785, 0, 0, 0, 0, 0, 0, 786, 0, 787,
    0, 0, 0, 0, 0, 0, 788, 0, 789, 0, 0, 0, 0, 0, 0, 790, 0, 791, 0, 0, 0, 0, 0, 0, 792, 0, 793, 0, 0, 0, 0, 0,
    0, 794, 0, 795, 0, 0, 0, 0, 0, 0, 796, 0, 797, 0, 0, 0, 0, 0, 0, 798, 0, 799, 0, 0, 0, 0, 0, 0, 800, 0, 801, 0,
    0, 0, 0, 802, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 806, 807, 0, 808,
    0, 0, 0, 0, 0, 0, 809, 0, 810, 0, 0, 0, 0, 0, 0, 811, 0, 812, 0, 0, 0, 0, 0, 0, 813, 0, 814, 0, 0, 0, 0, 0,
    0, 815, 0, 816, 0, 0, 0, 0, 0, 0, 817, 0, 818, 0, 0, 0, 0, 0, 0, 819, 0, 820, 0, 0, 0, 0, 0, 0, 821, 0, 822, 0,
    0, 0, 0, 823, 0, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 827, 828, 0, 829,
    0, 0, 0, 0, 0, 0, 830, 0, 831, 0, 0, 0, 0, 0, 0, 832, 0, 833, 0, 0, 0, 0, 0, 0, 834, 0, 835, 0, 0, 0, 0, 0,
    0, 836, 0, 837, 0, 0, 0, 0, 0, 0, 838, 0, 839, 0, 0, 0, 0, 0, 0, 840, 0, 841, 0, 0, 0, 0, 0, 0, 842, 0, 843, 0,
    0, 0, 0, 0, 0, 844, 0, 845, 0, 0, 0, 0, 846, 0, 0, 847, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0, 0, 0, 0, 0, 849, 0,
    0, 0, 0, 0, 0, 850, 851, 0, 852, 0, 0, 0, 0, 0, 0, 853, 0, 854, 0, 0, 0, 0, 0, 0, 855, 0, 856, 0, 0, 0, 0, 0,
    0, 857, 0, 858, 0, 0, 0, 0, 0, 0, 859, 0, 860, 0, 0, 0, 0, 0, 0, 861, 0, 862, 0, 0, 0, 0, 0, 0, 863, 0, 864, 0,
    0, 0, 0, 0, 0, 865, 0, 866, 0, 0, 0, 0, 867, 0, 0, 868, 0, 0, 0, 0, 0, 0, 0, 0, 869, 0, 0, 0, 0, 0, 870, 0,
    0, 0, 0, 0, 0, 871, 872, 0, 873, 0, 0, 0, 0, 0, 0, 874, 0, 875, 0, 0, 0, 0, 0, 0, 876, 0, 877, 0, 0, 0, 0, 0,
    0, 878, 0, 879, 0, 0, 0, 0, 0, 0, 880, 0, 881, 0, 0, 0, 0, 0, 0, 882, 0, 883, 0, 0, 0, 0, 0, 0, 884, 0, 885, 0,
    0, 0, 0, 0, 0, 886, 0, 887, 0, 0, 0, 0, 888, 0, 0, 889, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 0, 0, 891, 0,
    0, 0, 0, 0, 0, 892, 893, 0, 894, 0, 0, 0, 0, 0, 0, 895, 0, 896, 0, 0, 0, 0, 0, 0, 897, 0, 898, 0, 0, 0, 0, 0,
    0, 899, 0, 900, 0, 0, 0, 0, 0, 0, 901, 0, 902, 0, 0, 0, 0, 0, 0, 903, 0, 904, 0, 0, 0, 0, 0, 0, 905, 0, 906,
};
void recomp_unit_0153_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A68000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0153[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A68000;
    case 2u: goto L_08A6801C;
    case 3u: goto L_08A68024;
    case 4u: goto L_08A68040;
    case 5u: goto L_08A68048;
    case 6u: goto L_08A68064;
    case 7u: goto L_08A6806C;
    case 8u: goto L_08A68088;
    case 9u: goto L_08A68090;
    case 10u: goto L_08A680AC;
    case 11u: goto L_08A680B4;
    case 12u: goto L_08A680D0;
    case 13u: goto L_08A680D8;
    case 14u: goto L_08A680F4;
    case 15u: goto L_08A680FC;
    case 16u: goto L_08A68118;
    case 17u: goto L_08A68120;
    case 18u: goto L_08A6813C;
    case 19u: goto L_08A68144;
    case 20u: goto L_08A68158;
    case 21u: goto L_08A68164;
    case 22u: goto L_08A68188;
    case 23u: goto L_08A681A0;
    case 24u: goto L_08A681BC;
    case 25u: goto L_08A681C0;
    case 26u: goto L_08A681C8;
    case 27u: goto L_08A681E4;
    case 28u: goto L_08A681EC;
    case 29u: goto L_08A68208;
    case 30u: goto L_08A68210;
    case 31u: goto L_08A6822C;
    case 32u: goto L_08A68234;
    case 33u: goto L_08A68250;
    case 34u: goto L_08A68258;
    case 35u: goto L_08A68274;
    case 36u: goto L_08A6827C;
    case 37u: goto L_08A68298;
    case 38u: goto L_08A682A0;
    case 39u: goto L_08A682BC;
    case 40u: goto L_08A682C4;
    case 41u: goto L_08A682E0;
    case 42u: goto L_08A682E8;
    case 43u: goto L_08A68304;
    case 44u: goto L_08A6830C;
    case 45u: goto L_08A68328;
    case 46u: goto L_08A68330;
    case 47u: goto L_08A6834C;
    case 48u: goto L_08A68354;
    case 49u: goto L_08A68370;
    case 50u: goto L_08A68378;
    case 51u: goto L_08A6838C;
    case 52u: goto L_08A68398;
    case 53u: goto L_08A683BC;
    case 54u: goto L_08A683D4;
    case 55u: goto L_08A683F0;
    case 56u: goto L_08A683F4;
    case 57u: goto L_08A683FC;
    case 58u: goto L_08A68418;
    case 59u: goto L_08A68420;
    case 60u: goto L_08A6843C;
    case 61u: goto L_08A68444;
    case 62u: goto L_08A68460;
    case 63u: goto L_08A68468;
    case 64u: goto L_08A68484;
    case 65u: goto L_08A6848C;
    case 66u: goto L_08A684A8;
    case 67u: goto L_08A684B0;
    case 68u: goto L_08A684CC;
    case 69u: goto L_08A684D4;
    case 70u: goto L_08A684F0;
    case 71u: goto L_08A684F8;
    case 72u: goto L_08A68514;
    case 73u: goto L_08A6851C;
    case 74u: goto L_08A68538;
    case 75u: goto L_08A68540;
    case 76u: goto L_08A6855C;
    case 77u: goto L_08A68564;
    case 78u: goto L_08A68580;
    case 79u: goto L_08A68588;
    case 80u: goto L_08A685A4;
    case 81u: goto L_08A685AC;
    case 82u: goto L_08A685C8;
    case 83u: goto L_08A685D0;
    case 84u: goto L_08A685EC;
    case 85u: goto L_08A685F4;
    case 86u: goto L_08A68610;
    case 87u: goto L_08A68618;
    case 88u: goto L_08A6862C;
    case 89u: goto L_08A68638;
    case 90u: goto L_08A6865C;
    case 91u: goto L_08A68674;
    case 92u: goto L_08A68690;
    case 93u: goto L_08A68694;
    case 94u: goto L_08A6869C;
    case 95u: goto L_08A686B8;
    case 96u: goto L_08A686C0;
    case 97u: goto L_08A686DC;
    case 98u: goto L_08A686E4;
    case 99u: goto L_08A68700;
    case 100u: goto L_08A68708;
    case 101u: goto L_08A68724;
    case 102u: goto L_08A6872C;
    case 103u: goto L_08A68748;
    case 104u: goto L_08A68750;
    case 105u: goto L_08A6876C;
    case 106u: goto L_08A68774;
    case 107u: goto L_08A68790;
    case 108u: goto L_08A68798;
    case 109u: goto L_08A687B4;
    case 110u: goto L_08A687BC;
    case 111u: goto L_08A687D8;
    case 112u: goto L_08A687E0;
    case 113u: goto L_08A687FC;
    case 114u: goto L_08A68804;
    case 115u: goto L_08A68820;
    case 116u: goto L_08A68828;
    case 117u: goto L_08A68844;
    case 118u: goto L_08A6884C;
    case 119u: goto L_08A68868;
    case 120u: goto L_08A68870;
    case 121u: goto L_08A68880;
    case 122u: goto L_08A68890;
    case 123u: goto L_08A688A4;
    case 124u: goto L_08A688B0;
    case 125u: goto L_08A688D4;
    case 126u: goto L_08A688EC;
    case 127u: goto L_08A68908;
    case 128u: goto L_08A6890C;
    case 129u: goto L_08A68914;
    case 130u: goto L_08A68930;
    case 131u: goto L_08A68938;
    case 132u: goto L_08A68954;
    case 133u: goto L_08A6895C;
    case 134u: goto L_08A68978;
    case 135u: goto L_08A68980;
    case 136u: goto L_08A6899C;
    case 137u: goto L_08A689A4;
    case 138u: goto L_08A689C0;
    case 139u: goto L_08A689C8;
    case 140u: goto L_08A689E4;
    case 141u: goto L_08A689EC;
    case 142u: goto L_08A68A08;
    case 143u: goto L_08A68A10;
    case 144u: goto L_08A68A2C;
    case 145u: goto L_08A68A34;
    case 146u: goto L_08A68A50;
    case 147u: goto L_08A68A58;
    case 148u: goto L_08A68A74;
    case 149u: goto L_08A68A7C;
    case 150u: goto L_08A68A98;
    case 151u: goto L_08A68AA0;
    case 152u: goto L_08A68AB0;
    case 153u: goto L_08A68ACC;
    case 154u: goto L_08A68AD4;
    case 155u: goto L_08A68AF0;
    case 156u: goto L_08A68AF8;
    case 157u: goto L_08A68B0C;
    case 158u: goto L_08A68B18;
    case 159u: goto L_08A68B3C;
    case 160u: goto L_08A68B54;
    case 161u: goto L_08A68B70;
    case 162u: goto L_08A68B74;
    case 163u: goto L_08A68B7C;
    case 164u: goto L_08A68B98;
    case 165u: goto L_08A68BA0;
    case 166u: goto L_08A68BBC;
    case 167u: goto L_08A68BC4;
    case 168u: goto L_08A68BE0;
    case 169u: goto L_08A68BE8;
    case 170u: goto L_08A68C04;
    case 171u: goto L_08A68C0C;
    case 172u: goto L_08A68C28;
    case 173u: goto L_08A68C30;
    case 174u: goto L_08A68C4C;
    case 175u: goto L_08A68C54;
    case 176u: goto L_08A68C70;
    case 177u: goto L_08A68C78;
    case 178u: goto L_08A68C94;
    case 179u: goto L_08A68C9C;
    case 180u: goto L_08A68CB8;
    case 181u: goto L_08A68CC0;
    case 182u: goto L_08A68CDC;
    case 183u: goto L_08A68CE4;
    case 184u: goto L_08A68CF4;
    case 185u: goto L_08A68D10;
    case 186u: goto L_08A68D18;
    case 187u: goto L_08A68D2C;
    case 188u: goto L_08A68D38;
    case 189u: goto L_08A68D5C;
    case 190u: goto L_08A68D74;
    case 191u: goto L_08A68D90;
    case 192u: goto L_08A68D94;
    case 193u: goto L_08A68D9C;
    case 194u: goto L_08A68DB8;
    case 195u: goto L_08A68DC0;
    case 196u: goto L_08A68DDC;
    case 197u: goto L_08A68DE4;
    case 198u: goto L_08A68E00;
    case 199u: goto L_08A68E08;
    case 200u: goto L_08A68E24;
    case 201u: goto L_08A68E2C;
    case 202u: goto L_08A68E48;
    case 203u: goto L_08A68E50;
    case 204u: goto L_08A68E6C;
    case 205u: goto L_08A68E74;
    case 206u: goto L_08A68E90;
    case 207u: goto L_08A68E98;
    case 208u: goto L_08A68EB4;
    case 209u: goto L_08A68EBC;
    case 210u: goto L_08A68ED8;
    case 211u: goto L_08A68EE0;
    case 212u: goto L_08A68EFC;
    case 213u: goto L_08A68F04;
    case 214u: goto L_08A68F14;
    case 215u: goto L_08A68F30;
    case 216u: goto L_08A68F38;
    case 217u: goto L_08A68F48;
    case 218u: goto L_08A68F5C;
    case 219u: goto L_08A68F68;
    case 220u: goto L_08A68F8C;
    case 221u: goto L_08A68FA4;
    case 222u: goto L_08A68FC0;
    case 223u: goto L_08A68FC4;
    case 224u: goto L_08A68FCC;
    case 225u: goto L_08A68FE8;
    case 226u: goto L_08A68FF0;
    case 227u: goto L_08A6900C;
    case 228u: goto L_08A69014;
    case 229u: goto L_08A69030;
    case 230u: goto L_08A69038;
    case 231u: goto L_08A69054;
    case 232u: goto L_08A6905C;
    case 233u: goto L_08A69078;
    case 234u: goto L_08A69080;
    case 235u: goto L_08A6909C;
    case 236u: goto L_08A690A4;
    case 237u: goto L_08A690C0;
    case 238u: goto L_08A690C8;
    case 239u: goto L_08A690E4;
    case 240u: goto L_08A690EC;
    case 241u: goto L_08A69108;
    case 242u: goto L_08A69110;
    case 243u: goto L_08A69120;
    case 244u: goto L_08A69130;
    case 245u: goto L_08A69144;
    case 246u: goto L_08A69150;
    case 247u: goto L_08A69158;
    case 248u: goto L_08A69160;
    case 249u: goto L_08A69184;
    case 250u: goto L_08A6919C;
    case 251u: goto L_08A691B8;
    case 252u: goto L_08A691BC;
    case 253u: goto L_08A691C4;
    case 254u: goto L_08A691E0;
    case 255u: goto L_08A691E8;
    case 256u: goto L_08A69204;
    case 257u: goto L_08A6920C;
    case 258u: goto L_08A69228;
    case 259u: goto L_08A69230;
    case 260u: goto L_08A6924C;
    case 261u: goto L_08A69254;
    case 262u: goto L_08A69270;
    case 263u: goto L_08A69278;
    case 264u: goto L_08A69294;
    case 265u: goto L_08A6929C;
    case 266u: goto L_08A692B8;
    case 267u: goto L_08A692C0;
    case 268u: goto L_08A692DC;
    case 269u: goto L_08A692E4;
    case 270u: goto L_08A69300;
    case 271u: goto L_08A69308;
    case 272u: goto L_08A6931C;
    case 273u: goto L_08A69328;
    case 274u: goto L_08A6934C;
    case 275u: goto L_08A69364;
    case 276u: goto L_08A69380;
    case 277u: goto L_08A69384;
    case 278u: goto L_08A6938C;
    case 279u: goto L_08A693A8;
    case 280u: goto L_08A693B0;
    case 281u: goto L_08A693CC;
    case 282u: goto L_08A693D4;
    case 283u: goto L_08A693F0;
    case 284u: goto L_08A693F8;
    case 285u: goto L_08A69414;
    case 286u: goto L_08A6941C;
    case 287u: goto L_08A69438;
    case 288u: goto L_08A69440;
    case 289u: goto L_08A6945C;
    case 290u: goto L_08A69464;
    case 291u: goto L_08A69480;
    case 292u: goto L_08A69488;
    case 293u: goto L_08A694A4;
    case 294u: goto L_08A694AC;
    case 295u: goto L_08A694C8;
    case 296u: goto L_08A694D0;
    case 297u: goto L_08A694E4;
    case 298u: goto L_08A694F0;
    case 299u: goto L_08A69514;
    case 300u: goto L_08A6952C;
    case 301u: goto L_08A69548;
    case 302u: goto L_08A6954C;
    case 303u: goto L_08A69554;
    case 304u: goto L_08A69570;
    case 305u: goto L_08A69578;
    case 306u: goto L_08A69594;
    case 307u: goto L_08A6959C;
    case 308u: goto L_08A695B8;
    case 309u: goto L_08A695C0;
    case 310u: goto L_08A695DC;
    case 311u: goto L_08A695E4;
    case 312u: goto L_08A69600;
    case 313u: goto L_08A69608;
    case 314u: goto L_08A69624;
    case 315u: goto L_08A6962C;
    case 316u: goto L_08A69648;
    case 317u: goto L_08A69650;
    case 318u: goto L_08A6966C;
    case 319u: goto L_08A69674;
    case 320u: goto L_08A69688;
    case 321u: goto L_08A69694;
    case 322u: goto L_08A696B8;
    case 323u: goto L_08A696D0;
    case 324u: goto L_08A696EC;
    case 325u: goto L_08A696F0;
    case 326u: goto L_08A696F8;
    case 327u: goto L_08A69714;
    case 328u: goto L_08A6971C;
    case 329u: goto L_08A69738;
    case 330u: goto L_08A69740;
    case 331u: goto L_08A6975C;
    case 332u: goto L_08A69764;
    case 333u: goto L_08A69780;
    case 334u: goto L_08A69788;
    case 335u: goto L_08A697A4;
    case 336u: goto L_08A697AC;
    case 337u: goto L_08A697C8;
    case 338u: goto L_08A697D0;
    case 339u: goto L_08A697EC;
    case 340u: goto L_08A697F4;
    case 341u: goto L_08A69810;
    case 342u: goto L_08A69818;
    case 343u: goto L_08A69834;
    case 344u: goto L_08A6983C;
    case 345u: goto L_08A69850;
    case 346u: goto L_08A6985C;
    case 347u: goto L_08A69880;
    case 348u: goto L_08A69898;
    case 349u: goto L_08A698B4;
    case 350u: goto L_08A698B8;
    case 351u: goto L_08A698C0;
    case 352u: goto L_08A698DC;
    case 353u: goto L_08A698E4;
    case 354u: goto L_08A69900;
    case 355u: goto L_08A69908;
    case 356u: goto L_08A69924;
    case 357u: goto L_08A6992C;
    case 358u: goto L_08A69948;
    case 359u: goto L_08A69950;
    case 360u: goto L_08A6996C;
    case 361u: goto L_08A69974;
    case 362u: goto L_08A69990;
    case 363u: goto L_08A69998;
    case 364u: goto L_08A699B4;
    case 365u: goto L_08A699BC;
    case 366u: goto L_08A699D8;
    case 367u: goto L_08A699E0;
    case 368u: goto L_08A699FC;
    case 369u: goto L_08A69A04;
    case 370u: goto L_08A69A18;
    case 371u: goto L_08A69A24;
    case 372u: goto L_08A69A48;
    case 373u: goto L_08A69A60;
    case 374u: goto L_08A69A7C;
    case 375u: goto L_08A69A80;
    case 376u: goto L_08A69A88;
    case 377u: goto L_08A69AA4;
    case 378u: goto L_08A69AAC;
    case 379u: goto L_08A69AC8;
    case 380u: goto L_08A69AD0;
    case 381u: goto L_08A69AEC;
    case 382u: goto L_08A69AF4;
    case 383u: goto L_08A69B10;
    case 384u: goto L_08A69B18;
    case 385u: goto L_08A69B34;
    case 386u: goto L_08A69B3C;
    case 387u: goto L_08A69B58;
    case 388u: goto L_08A69B60;
    case 389u: goto L_08A69B7C;
    case 390u: goto L_08A69B84;
    case 391u: goto L_08A69BA0;
    case 392u: goto L_08A69BA8;
    case 393u: goto L_08A69BC4;
    case 394u: goto L_08A69BCC;
    case 395u: goto L_08A69BE0;
    case 396u: goto L_08A69BEC;
    case 397u: goto L_08A69C10;
    case 398u: goto L_08A69C28;
    case 399u: goto L_08A69C44;
    case 400u: goto L_08A69C48;
    case 401u: goto L_08A69C50;
    case 402u: goto L_08A69C6C;
    case 403u: goto L_08A69C74;
    case 404u: goto L_08A69C90;
    case 405u: goto L_08A69C98;
    case 406u: goto L_08A69CB4;
    case 407u: goto L_08A69CBC;
    case 408u: goto L_08A69CD8;
    case 409u: goto L_08A69CE0;
    case 410u: goto L_08A69CFC;
    case 411u: goto L_08A69D04;
    case 412u: goto L_08A69D20;
    case 413u: goto L_08A69D28;
    case 414u: goto L_08A69D44;
    case 415u: goto L_08A69D4C;
    case 416u: goto L_08A69D68;
    case 417u: goto L_08A69D70;
    case 418u: goto L_08A69D8C;
    case 419u: goto L_08A69D94;
    case 420u: goto L_08A69DA8;
    case 421u: goto L_08A69DB4;
    case 422u: goto L_08A69DD8;
    case 423u: goto L_08A69DF0;
    case 424u: goto L_08A69E0C;
    case 425u: goto L_08A69E10;
    case 426u: goto L_08A69E18;
    case 427u: goto L_08A69E34;
    case 428u: goto L_08A69E3C;
    case 429u: goto L_08A69E58;
    case 430u: goto L_08A69E60;
    case 431u: goto L_08A69E7C;
    case 432u: goto L_08A69E84;
    case 433u: goto L_08A69EA0;
    case 434u: goto L_08A69EA8;
    case 435u: goto L_08A69EC4;
    case 436u: goto L_08A69ECC;
    case 437u: goto L_08A69EE8;
    case 438u: goto L_08A69EF0;
    case 439u: goto L_08A69F0C;
    case 440u: goto L_08A69F14;
    case 441u: goto L_08A69F30;
    case 442u: goto L_08A69F38;
    case 443u: goto L_08A69F54;
    case 444u: goto L_08A69F5C;
    case 445u: goto L_08A69F70;
    case 446u: goto L_08A69F7C;
    case 447u: goto L_08A69FA0;
    case 448u: goto L_08A69FB8;
    case 449u: goto L_08A69FD4;
    case 450u: goto L_08A69FD8;
    case 451u: goto L_08A69FE0;
    case 452u: goto L_08A69FFC;
    case 453u: goto L_08A6A004;
    case 454u: goto L_08A6A020;
    case 455u: goto L_08A6A028;
    case 456u: goto L_08A6A044;
    case 457u: goto L_08A6A04C;
    case 458u: goto L_08A6A068;
    case 459u: goto L_08A6A070;
    case 460u: goto L_08A6A08C;
    case 461u: goto L_08A6A094;
    case 462u: goto L_08A6A0B0;
    case 463u: goto L_08A6A0B8;
    case 464u: goto L_08A6A0D4;
    case 465u: goto L_08A6A0DC;
    case 466u: goto L_08A6A0F8;
    case 467u: goto L_08A6A100;
    case 468u: goto L_08A6A11C;
    case 469u: goto L_08A6A124;
    case 470u: goto L_08A6A138;
    case 471u: goto L_08A6A144;
    case 472u: goto L_08A6A168;
    case 473u: goto L_08A6A180;
    case 474u: goto L_08A6A19C;
    case 475u: goto L_08A6A1A0;
    case 476u: goto L_08A6A1A8;
    case 477u: goto L_08A6A1C4;
    case 478u: goto L_08A6A1CC;
    case 479u: goto L_08A6A1E8;
    case 480u: goto L_08A6A1F0;
    case 481u: goto L_08A6A20C;
    case 482u: goto L_08A6A214;
    case 483u: goto L_08A6A230;
    case 484u: goto L_08A6A238;
    case 485u: goto L_08A6A254;
    case 486u: goto L_08A6A25C;
    case 487u: goto L_08A6A278;
    case 488u: goto L_08A6A280;
    case 489u: goto L_08A6A29C;
    case 490u: goto L_08A6A2A4;
    case 491u: goto L_08A6A2C0;
    case 492u: goto L_08A6A2C8;
    case 493u: goto L_08A6A2E4;
    case 494u: goto L_08A6A2EC;
    case 495u: goto L_08A6A300;
    case 496u: goto L_08A6A30C;
    case 497u: goto L_08A6A330;
    case 498u: goto L_08A6A348;
    case 499u: goto L_08A6A364;
    case 500u: goto L_08A6A368;
    case 501u: goto L_08A6A370;
    case 502u: goto L_08A6A38C;
    case 503u: goto L_08A6A394;
    case 504u: goto L_08A6A3B0;
    case 505u: goto L_08A6A3B8;
    case 506u: goto L_08A6A3D4;
    case 507u: goto L_08A6A3DC;
    case 508u: goto L_08A6A3F8;
    case 509u: goto L_08A6A400;
    case 510u: goto L_08A6A41C;
    case 511u: goto L_08A6A424;
    case 512u: goto L_08A6A440;
    case 513u: goto L_08A6A448;
    case 514u: goto L_08A6A464;
    case 515u: goto L_08A6A46C;
    case 516u: goto L_08A6A488;
    case 517u: goto L_08A6A490;
    case 518u: goto L_08A6A4AC;
    case 519u: goto L_08A6A4B4;
    case 520u: goto L_08A6A4C8;
    case 521u: goto L_08A6A4D4;
    case 522u: goto L_08A6A4F8;
    case 523u: goto L_08A6A510;
    case 524u: goto L_08A6A52C;
    case 525u: goto L_08A6A530;
    case 526u: goto L_08A6A538;
    case 527u: goto L_08A6A554;
    case 528u: goto L_08A6A55C;
    case 529u: goto L_08A6A578;
    case 530u: goto L_08A6A580;
    case 531u: goto L_08A6A59C;
    case 532u: goto L_08A6A5A4;
    case 533u: goto L_08A6A5C0;
    case 534u: goto L_08A6A5C8;
    case 535u: goto L_08A6A5E4;
    case 536u: goto L_08A6A5EC;
    case 537u: goto L_08A6A608;
    case 538u: goto L_08A6A610;
    case 539u: goto L_08A6A62C;
    case 540u: goto L_08A6A634;
    case 541u: goto L_08A6A650;
    case 542u: goto L_08A6A658;
    case 543u: goto L_08A6A674;
    case 544u: goto L_08A6A67C;
    case 545u: goto L_08A6A690;
    case 546u: goto L_08A6A69C;
    case 547u: goto L_08A6A6C0;
    case 548u: goto L_08A6A6D8;
    case 549u: goto L_08A6A6F4;
    case 550u: goto L_08A6A6F8;
    case 551u: goto L_08A6A700;
    case 552u: goto L_08A6A71C;
    case 553u: goto L_08A6A724;
    case 554u: goto L_08A6A740;
    case 555u: goto L_08A6A748;
    case 556u: goto L_08A6A764;
    case 557u: goto L_08A6A76C;
    case 558u: goto L_08A6A788;
    case 559u: goto L_08A6A790;
    case 560u: goto L_08A6A7AC;
    case 561u: goto L_08A6A7B4;
    case 562u: goto L_08A6A7D0;
    case 563u: goto L_08A6A7D8;
    case 564u: goto L_08A6A7F4;
    case 565u: goto L_08A6A7FC;
    case 566u: goto L_08A6A818;
    case 567u: goto L_08A6A820;
    case 568u: goto L_08A6A83C;
    case 569u: goto L_08A6A844;
    case 570u: goto L_08A6A858;
    case 571u: goto L_08A6A864;
    case 572u: goto L_08A6A888;
    case 573u: goto L_08A6A8A0;
    case 574u: goto L_08A6A8BC;
    case 575u: goto L_08A6A8C0;
    case 576u: goto L_08A6A8C8;
    case 577u: goto L_08A6A8E4;
    case 578u: goto L_08A6A8EC;
    case 579u: goto L_08A6A908;
    case 580u: goto L_08A6A910;
    case 581u: goto L_08A6A92C;
    case 582u: goto L_08A6A934;
    case 583u: goto L_08A6A950;
    case 584u: goto L_08A6A958;
    case 585u: goto L_08A6A974;
    case 586u: goto L_08A6A97C;
    case 587u: goto L_08A6A998;
    case 588u: goto L_08A6A9A0;
    case 589u: goto L_08A6A9BC;
    case 590u: goto L_08A6A9C4;
    case 591u: goto L_08A6A9E0;
    case 592u: goto L_08A6A9E8;
    case 593u: goto L_08A6AA04;
    case 594u: goto L_08A6AA0C;
    case 595u: goto L_08A6AA20;
    case 596u: goto L_08A6AA2C;
    case 597u: goto L_08A6AA50;
    case 598u: goto L_08A6AA68;
    case 599u: goto L_08A6AA84;
    case 600u: goto L_08A6AA88;
    case 601u: goto L_08A6AA90;
    case 602u: goto L_08A6AAAC;
    case 603u: goto L_08A6AAB4;
    case 604u: goto L_08A6AAD0;
    case 605u: goto L_08A6AAD8;
    case 606u: goto L_08A6AAF4;
    case 607u: goto L_08A6AAFC;
    case 608u: goto L_08A6AB18;
    case 609u: goto L_08A6AB20;
    case 610u: goto L_08A6AB3C;
    case 611u: goto L_08A6AB44;
    case 612u: goto L_08A6AB60;
    case 613u: goto L_08A6AB68;
    case 614u: goto L_08A6AB84;
    case 615u: goto L_08A6AB8C;
    case 616u: goto L_08A6ABA8;
    case 617u: goto L_08A6ABB0;
    case 618u: goto L_08A6ABCC;
    case 619u: goto L_08A6ABD4;
    case 620u: goto L_08A6ABE8;
    case 621u: goto L_08A6ABF4;
    case 622u: goto L_08A6AC18;
    case 623u: goto L_08A6AC30;
    case 624u: goto L_08A6AC4C;
    case 625u: goto L_08A6AC50;
    case 626u: goto L_08A6AC58;
    case 627u: goto L_08A6AC74;
    case 628u: goto L_08A6AC7C;
    case 629u: goto L_08A6AC98;
    case 630u: goto L_08A6ACA0;
    case 631u: goto L_08A6ACBC;
    case 632u: goto L_08A6ACC4;
    case 633u: goto L_08A6ACE0;
    case 634u: goto L_08A6ACE8;
    case 635u: goto L_08A6AD04;
    case 636u: goto L_08A6AD0C;
    case 637u: goto L_08A6AD28;
    case 638u: goto L_08A6AD30;
    case 639u: goto L_08A6AD4C;
    case 640u: goto L_08A6AD54;
    case 641u: goto L_08A6AD70;
    case 642u: goto L_08A6AD78;
    case 643u: goto L_08A6AD94;
    case 644u: goto L_08A6AD9C;
    case 645u: goto L_08A6ADB0;
    case 646u: goto L_08A6ADBC;
    case 647u: goto L_08A6ADE0;
    case 648u: goto L_08A6ADF8;
    case 649u: goto L_08A6AE14;
    case 650u: goto L_08A6AE18;
    case 651u: goto L_08A6AE20;
    case 652u: goto L_08A6AE3C;
    case 653u: goto L_08A6AE44;
    case 654u: goto L_08A6AE60;
    case 655u: goto L_08A6AE68;
    case 656u: goto L_08A6AE84;
    case 657u: goto L_08A6AE8C;
    case 658u: goto L_08A6AEA8;
    case 659u: goto L_08A6AEB0;
    case 660u: goto L_08A6AECC;
    case 661u: goto L_08A6AED4;
    case 662u: goto L_08A6AEF0;
    case 663u: goto L_08A6AEF8;
    case 664u: goto L_08A6AF14;
    case 665u: goto L_08A6AF1C;
    case 666u: goto L_08A6AF38;
    case 667u: goto L_08A6AF40;
    case 668u: goto L_08A6AF5C;
    case 669u: goto L_08A6AF64;
    case 670u: goto L_08A6AF78;
    case 671u: goto L_08A6AF84;
    case 672u: goto L_08A6AFA8;
    case 673u: goto L_08A6AFC0;
    case 674u: goto L_08A6AFDC;
    case 675u: goto L_08A6AFE0;
    case 676u: goto L_08A6AFE8;
    case 677u: goto L_08A6B004;
    case 678u: goto L_08A6B00C;
    case 679u: goto L_08A6B028;
    case 680u: goto L_08A6B030;
    case 681u: goto L_08A6B04C;
    case 682u: goto L_08A6B054;
    case 683u: goto L_08A6B070;
    case 684u: goto L_08A6B078;
    case 685u: goto L_08A6B094;
    case 686u: goto L_08A6B09C;
    case 687u: goto L_08A6B0B8;
    case 688u: goto L_08A6B0C0;
    case 689u: goto L_08A6B0DC;
    case 690u: goto L_08A6B0E4;
    case 691u: goto L_08A6B100;
    case 692u: goto L_08A6B108;
    case 693u: goto L_08A6B124;
    case 694u: goto L_08A6B12C;
    case 695u: goto L_08A6B140;
    case 696u: goto L_08A6B14C;
    case 697u: goto L_08A6B16C;
    case 698u: goto L_08A6B178;
    case 699u: goto L_08A6B190;
    case 700u: goto L_08A6B1AC;
    case 701u: goto L_08A6B1B0;
    case 702u: goto L_08A6B1B8;
    case 703u: goto L_08A6B1D4;
    case 704u: goto L_08A6B1DC;
    case 705u: goto L_08A6B1F8;
    case 706u: goto L_08A6B200;
    case 707u: goto L_08A6B21C;
    case 708u: goto L_08A6B224;
    case 709u: goto L_08A6B234;
    case 710u: goto L_08A6B240;
    case 711u: goto L_08A6B260;
    case 712u: goto L_08A6B26C;
    case 713u: goto L_08A6B284;
    case 714u: goto L_08A6B2A0;
    case 715u: goto L_08A6B2A4;
    case 716u: goto L_08A6B2AC;
    case 717u: goto L_08A6B2C8;
    case 718u: goto L_08A6B2D0;
    case 719u: goto L_08A6B2EC;
    case 720u: goto L_08A6B2F4;
    case 721u: goto L_08A6B310;
    case 722u: goto L_08A6B318;
    case 723u: goto L_08A6B328;
    case 724u: goto L_08A6B334;
    case 725u: goto L_08A6B354;
    case 726u: goto L_08A6B360;
    case 727u: goto L_08A6B378;
    case 728u: goto L_08A6B394;
    case 729u: goto L_08A6B398;
    case 730u: goto L_08A6B3A0;
    case 731u: goto L_08A6B3BC;
    case 732u: goto L_08A6B3C4;
    case 733u: goto L_08A6B3E0;
    case 734u: goto L_08A6B3E8;
    case 735u: goto L_08A6B404;
    case 736u: goto L_08A6B40C;
    case 737u: goto L_08A6B41C;
    case 738u: goto L_08A6B428;
    case 739u: goto L_08A6B448;
    case 740u: goto L_08A6B454;
    case 741u: goto L_08A6B46C;
    case 742u: goto L_08A6B488;
    case 743u: goto L_08A6B48C;
    case 744u: goto L_08A6B494;
    case 745u: goto L_08A6B4B0;
    case 746u: goto L_08A6B4B8;
    case 747u: goto L_08A6B4D4;
    case 748u: goto L_08A6B4DC;
    case 749u: goto L_08A6B4F8;
    case 750u: goto L_08A6B500;
    case 751u: goto L_08A6B510;
    case 752u: goto L_08A6B51C;
    case 753u: goto L_08A6B53C;
    case 754u: goto L_08A6B548;
    case 755u: goto L_08A6B550;
    case 756u: goto L_08A6B56C;
    case 757u: goto L_08A6B570;
    case 758u: goto L_08A6B578;
    case 759u: goto L_08A6B594;
    case 760u: goto L_08A6B59C;
    case 761u: goto L_08A6B5B8;
    case 762u: goto L_08A6B5C0;
    case 763u: goto L_08A6B5D0;
    case 764u: goto L_08A6B5DC;
    case 765u: goto L_08A6B5FC;
    case 766u: goto L_08A6B608;
    case 767u: goto L_08A6B620;
    case 768u: goto L_08A6B63C;
    case 769u: goto L_08A6B640;
    case 770u: goto L_08A6B648;
    case 771u: goto L_08A6B664;
    case 772u: goto L_08A6B66C;
    case 773u: goto L_08A6B688;
    case 774u: goto L_08A6B690;
    case 775u: goto L_08A6B6AC;
    case 776u: goto L_08A6B6B4;
    case 777u: goto L_08A6B6C4;
    case 778u: goto L_08A6B6D0;
    case 779u: goto L_08A6B6F4;
    case 780u: goto L_08A6B70C;
    case 781u: goto L_08A6B728;
    case 782u: goto L_08A6B72C;
    case 783u: goto L_08A6B734;
    case 784u: goto L_08A6B750;
    case 785u: goto L_08A6B758;
    case 786u: goto L_08A6B774;
    case 787u: goto L_08A6B77C;
    case 788u: goto L_08A6B798;
    case 789u: goto L_08A6B7A0;
    case 790u: goto L_08A6B7BC;
    case 791u: goto L_08A6B7C4;
    case 792u: goto L_08A6B7E0;
    case 793u: goto L_08A6B7E8;
    case 794u: goto L_08A6B804;
    case 795u: goto L_08A6B80C;
    case 796u: goto L_08A6B828;
    case 797u: goto L_08A6B830;
    case 798u: goto L_08A6B84C;
    case 799u: goto L_08A6B854;
    case 800u: goto L_08A6B870;
    case 801u: goto L_08A6B878;
    case 802u: goto L_08A6B88C;
    case 803u: goto L_08A6B898;
    case 804u: goto L_08A6B8BC;
    case 805u: goto L_08A6B8D4;
    case 806u: goto L_08A6B8F0;
    case 807u: goto L_08A6B8F4;
    case 808u: goto L_08A6B8FC;
    case 809u: goto L_08A6B918;
    case 810u: goto L_08A6B920;
    case 811u: goto L_08A6B93C;
    case 812u: goto L_08A6B944;
    case 813u: goto L_08A6B960;
    case 814u: goto L_08A6B968;
    case 815u: goto L_08A6B984;
    case 816u: goto L_08A6B98C;
    case 817u: goto L_08A6B9A8;
    case 818u: goto L_08A6B9B0;
    case 819u: goto L_08A6B9CC;
    case 820u: goto L_08A6B9D4;
    case 821u: goto L_08A6B9F0;
    case 822u: goto L_08A6B9F8;
    case 823u: goto L_08A6BA0C;
    case 824u: goto L_08A6BA18;
    case 825u: goto L_08A6BA3C;
    case 826u: goto L_08A6BA54;
    case 827u: goto L_08A6BA70;
    case 828u: goto L_08A6BA74;
    case 829u: goto L_08A6BA7C;
    case 830u: goto L_08A6BA98;
    case 831u: goto L_08A6BAA0;
    case 832u: goto L_08A6BABC;
    case 833u: goto L_08A6BAC4;
    case 834u: goto L_08A6BAE0;
    case 835u: goto L_08A6BAE8;
    case 836u: goto L_08A6BB04;
    case 837u: goto L_08A6BB0C;
    case 838u: goto L_08A6BB28;
    case 839u: goto L_08A6BB30;
    case 840u: goto L_08A6BB4C;
    case 841u: goto L_08A6BB54;
    case 842u: goto L_08A6BB70;
    case 843u: goto L_08A6BB78;
    case 844u: goto L_08A6BB94;
    case 845u: goto L_08A6BB9C;
    case 846u: goto L_08A6BBB0;
    case 847u: goto L_08A6BBBC;
    case 848u: goto L_08A6BBE0;
    case 849u: goto L_08A6BBF8;
    case 850u: goto L_08A6BC14;
    case 851u: goto L_08A6BC18;
    case 852u: goto L_08A6BC20;
    case 853u: goto L_08A6BC3C;
    case 854u: goto L_08A6BC44;
    case 855u: goto L_08A6BC60;
    case 856u: goto L_08A6BC68;
    case 857u: goto L_08A6BC84;
    case 858u: goto L_08A6BC8C;
    case 859u: goto L_08A6BCA8;
    case 860u: goto L_08A6BCB0;
    case 861u: goto L_08A6BCCC;
    case 862u: goto L_08A6BCD4;
    case 863u: goto L_08A6BCF0;
    case 864u: goto L_08A6BCF8;
    case 865u: goto L_08A6BD14;
    case 866u: goto L_08A6BD1C;
    case 867u: goto L_08A6BD30;
    case 868u: goto L_08A6BD3C;
    case 869u: goto L_08A6BD60;
    case 870u: goto L_08A6BD78;
    case 871u: goto L_08A6BD94;
    case 872u: goto L_08A6BD98;
    case 873u: goto L_08A6BDA0;
    case 874u: goto L_08A6BDBC;
    case 875u: goto L_08A6BDC4;
    case 876u: goto L_08A6BDE0;
    case 877u: goto L_08A6BDE8;
    case 878u: goto L_08A6BE04;
    case 879u: goto L_08A6BE0C;
    case 880u: goto L_08A6BE28;
    case 881u: goto L_08A6BE30;
    case 882u: goto L_08A6BE4C;
    case 883u: goto L_08A6BE54;
    case 884u: goto L_08A6BE70;
    case 885u: goto L_08A6BE78;
    case 886u: goto L_08A6BE94;
    case 887u: goto L_08A6BE9C;
    case 888u: goto L_08A6BEB0;
    case 889u: goto L_08A6BEBC;
    case 890u: goto L_08A6BEE0;
    case 891u: goto L_08A6BEF8;
    case 892u: goto L_08A6BF14;
    case 893u: goto L_08A6BF18;
    case 894u: goto L_08A6BF20;
    case 895u: goto L_08A6BF3C;
    case 896u: goto L_08A6BF44;
    case 897u: goto L_08A6BF60;
    case 898u: goto L_08A6BF68;
    case 899u: goto L_08A6BF84;
    case 900u: goto L_08A6BF8C;
    case 901u: goto L_08A6BFA8;
    case 902u: goto L_08A6BFB0;
    case 903u: goto L_08A6BFCC;
    case 904u: goto L_08A6BFD4;
    case 905u: goto L_08A6BFF0;
    case 906u: goto L_08A6BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A68000:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6801Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6801Cu) goto L_08A6801C;
    return;
L_08A6801C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 896u, 0x08A67F44u>(ctx, &aot_mem); return;
      }
      goto L_08A68024;
    }
L_08A68024:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68040u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68040u) goto L_08A68040;
    return;
L_08A68040:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 896u, 0x08A67F44u>(ctx, &aot_mem); return;
      }
      goto L_08A68048;
    }
L_08A68048:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 761u);
    ctx.gpr[31] = (0x08A68064u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68064u) goto L_08A68064;
    return;
L_08A68064:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 896u, 0x08A67F44u>(ctx, &aot_mem); return;
      }
      goto L_08A6806C;
    }
L_08A6806C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 763u);
    ctx.gpr[31] = (0x08A68088u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68088u) goto L_08A68088;
    return;
L_08A68088:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 896u, 0x08A67F44u>(ctx, &aot_mem); return;
      }
      goto L_08A68090;
    }
L_08A68090:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A680ACu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A680ACu) goto L_08A680AC;
    return;
L_08A680AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 896u, 0x08A67F44u>(ctx, &aot_mem); return;
      }
      goto L_08A680B4;
    }
L_08A680B4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A680D0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A680D0u) goto L_08A680D0;
    return;
L_08A680D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 896u, 0x08A67F44u>(ctx, &aot_mem); return;
      }
      goto L_08A680D8;
    }
L_08A680D8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A680F4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A680F4u) goto L_08A680F4;
    return;
L_08A680F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 896u, 0x08A67F44u>(ctx, &aot_mem); return;
      }
      goto L_08A680FC;
    }
L_08A680FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68118u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68118u) goto L_08A68118;
    return;
L_08A68118:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 896u, 0x08A67F44u>(ctx, &aot_mem); return;
      }
      goto L_08A68120;
    }
L_08A68120:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 765u);
    ctx.gpr[31] = (0x08A6813Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6813Cu) goto L_08A6813C;
    return;
L_08A6813C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 896u, 0x08A67F44u>(ctx, &aot_mem); return;
      }
      goto L_08A68144;
    }
L_08A68144:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A68158u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A68158u) goto L_08A68158;
    return;
L_08A68158:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68164:
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
          goto L_08A68378;
      }
      goto L_08A68188;
    }
L_08A68188:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31848)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A681A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4037u);
    ctx.gpr[31] = (0x08A681BCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A681BCu) goto L_08A681BC;
    return;
L_08A681BC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A681C0;
L_08A681C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6838C;
      }
      goto L_08A681C8;
    }
L_08A681C8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4035u);
    ctx.gpr[31] = (0x08A681E4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A681E4u) goto L_08A681E4;
    return;
L_08A681E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A681C0;
      }
      goto L_08A681EC;
    }
L_08A681EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4024u);
    ctx.gpr[31] = (0x08A68208u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68208u) goto L_08A68208;
    return;
L_08A68208:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A681C0;
      }
      goto L_08A68210;
    }
L_08A68210:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4031u);
    ctx.gpr[31] = (0x08A6822Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6822Cu) goto L_08A6822C;
    return;
L_08A6822C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A681C0;
      }
      goto L_08A68234;
    }
L_08A68234:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4027u);
    ctx.gpr[31] = (0x08A68250u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68250u) goto L_08A68250;
    return;
L_08A68250:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A681C0;
      }
      goto L_08A68258;
    }
L_08A68258:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4033u);
    ctx.gpr[31] = (0x08A68274u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68274u) goto L_08A68274;
    return;
L_08A68274:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A681C0;
      }
      goto L_08A6827C;
    }
L_08A6827C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68298u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68298u) goto L_08A68298;
    return;
L_08A68298:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A681C0;
      }
      goto L_08A682A0;
    }
L_08A682A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4040u);
    ctx.gpr[31] = (0x08A682BCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A682BCu) goto L_08A682BC;
    return;
L_08A682BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A681C0;
      }
      goto L_08A682C4;
    }
L_08A682C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4042u);
    ctx.gpr[31] = (0x08A682E0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A682E0u) goto L_08A682E0;
    return;
L_08A682E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A681C0;
      }
      goto L_08A682E8;
    }
L_08A682E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68304u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68304u) goto L_08A68304;
    return;
L_08A68304:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A681C0;
      }
      goto L_08A6830C;
    }
L_08A6830C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68328u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68328u) goto L_08A68328;
    return;
L_08A68328:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A681C0;
      }
      goto L_08A68330;
    }
L_08A68330:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4045u);
    ctx.gpr[31] = (0x08A6834Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6834Cu) goto L_08A6834C;
    return;
L_08A6834C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A681C0;
      }
      goto L_08A68354;
    }
L_08A68354:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68370u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68370u) goto L_08A68370;
    return;
L_08A68370:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A681C0;
      }
      goto L_08A68378;
    }
L_08A68378:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6838Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A6838Cu) goto L_08A6838C;
    return;
L_08A6838C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68398:
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
          goto L_08A68618;
      }
      goto L_08A683BC;
    }
L_08A683BC:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(32008)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A683D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4058u);
    ctx.gpr[31] = (0x08A683F0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A683F0u) goto L_08A683F0;
    return;
L_08A683F0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A683F4;
L_08A683F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6862C;
      }
      goto L_08A683FC;
    }
L_08A683FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4056u);
    ctx.gpr[31] = (0x08A68418u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68418u) goto L_08A68418;
    return;
L_08A68418:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A683F4;
      }
      goto L_08A68420;
    }
L_08A68420:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4046u);
    ctx.gpr[31] = (0x08A6843Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6843Cu) goto L_08A6843C;
    return;
L_08A6843C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A683F4;
      }
      goto L_08A68444;
    }
L_08A68444:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4052u);
    ctx.gpr[31] = (0x08A68460u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68460u) goto L_08A68460;
    return;
L_08A68460:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A683F4;
      }
      goto L_08A68468;
    }
L_08A68468:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4049u);
    ctx.gpr[31] = (0x08A68484u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68484u) goto L_08A68484;
    return;
L_08A68484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A683F4;
      }
      goto L_08A6848C;
    }
L_08A6848C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4054u);
    ctx.gpr[31] = (0x08A684A8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A684A8u) goto L_08A684A8;
    return;
L_08A684A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A683F4;
      }
      goto L_08A684B0;
    }
L_08A684B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A684CCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A684CCu) goto L_08A684CC;
    return;
L_08A684CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A683F4;
      }
      goto L_08A684D4;
    }
L_08A684D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A684F0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A684F0u) goto L_08A684F0;
    return;
L_08A684F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A683F4;
      }
      goto L_08A684F8;
    }
L_08A684F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4061u);
    ctx.gpr[31] = (0x08A68514u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68514u) goto L_08A68514;
    return;
L_08A68514:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A683F4;
      }
      goto L_08A6851C;
    }
L_08A6851C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4063u);
    ctx.gpr[31] = (0x08A68538u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68538u) goto L_08A68538;
    return;
L_08A68538:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A683F4;
      }
      goto L_08A68540;
    }
L_08A68540:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6855Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6855Cu) goto L_08A6855C;
    return;
L_08A6855C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A683F4;
      }
      goto L_08A68564;
    }
L_08A68564:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68580u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68580u) goto L_08A68580;
    return;
L_08A68580:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A683F4;
      }
      goto L_08A68588;
    }
L_08A68588:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A685A4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A685A4u) goto L_08A685A4;
    return;
L_08A685A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A683F4;
      }
      goto L_08A685AC;
    }
L_08A685AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A685C8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A685C8u) goto L_08A685C8;
    return;
L_08A685C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A683F4;
      }
      goto L_08A685D0;
    }
L_08A685D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A685ECu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A685ECu) goto L_08A685EC;
    return;
L_08A685EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A683F4;
      }
      goto L_08A685F4;
    }
L_08A685F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4066u);
    ctx.gpr[31] = (0x08A68610u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68610u) goto L_08A68610;
    return;
L_08A68610:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A683F4;
      }
      goto L_08A68618;
    }
L_08A68618:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6862Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A6862Cu) goto L_08A6862C;
    return;
L_08A6862C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68638:
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
          goto L_08A68890;
      }
      goto L_08A6865C;
    }
L_08A6865C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(32168)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68674:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4087u);
    ctx.gpr[31] = (0x08A68690u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68690u) goto L_08A68690;
    return;
L_08A68690:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A68694;
L_08A68694:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A688A4;
      }
      goto L_08A6869C;
    }
L_08A6869C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4077u);
    ctx.gpr[31] = (0x08A686B8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A686B8u) goto L_08A686B8;
    return;
L_08A686B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68694;
      }
      goto L_08A686C0;
    }
L_08A686C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4067u);
    ctx.gpr[31] = (0x08A686DCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A686DCu) goto L_08A686DC;
    return;
L_08A686DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68694;
      }
      goto L_08A686E4;
    }
L_08A686E4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4073u);
    ctx.gpr[31] = (0x08A68700u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68700u) goto L_08A68700;
    return;
L_08A68700:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68694;
      }
      goto L_08A68708;
    }
L_08A68708:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4070u);
    ctx.gpr[31] = (0x08A68724u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68724u) goto L_08A68724;
    return;
L_08A68724:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68694;
      }
      goto L_08A6872C;
    }
L_08A6872C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4075u);
    ctx.gpr[31] = (0x08A68748u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68748u) goto L_08A68748;
    return;
L_08A68748:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68694;
      }
      goto L_08A68750;
    }
L_08A68750:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6876Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6876Cu) goto L_08A6876C;
    return;
L_08A6876C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68694;
      }
      goto L_08A68774;
    }
L_08A68774:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4079u);
    ctx.gpr[31] = (0x08A68790u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68790u) goto L_08A68790;
    return;
L_08A68790:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68694;
      }
      goto L_08A68798;
    }
L_08A68798:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A687B4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A687B4u) goto L_08A687B4;
    return;
L_08A687B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68694;
      }
      goto L_08A687BC;
    }
L_08A687BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4082u);
    ctx.gpr[31] = (0x08A687D8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A687D8u) goto L_08A687D8;
    return;
L_08A687D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68694;
      }
      goto L_08A687E0;
    }
L_08A687E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4084u);
    ctx.gpr[31] = (0x08A687FCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A687FCu) goto L_08A687FC;
    return;
L_08A687FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68694;
      }
      goto L_08A68804;
    }
L_08A68804:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68820u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68820u) goto L_08A68820;
    return;
L_08A68820:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68694;
      }
      goto L_08A68828;
    }
L_08A68828:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68844u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68844u) goto L_08A68844;
    return;
L_08A68844:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68694;
      }
      goto L_08A6884C;
    }
L_08A6884C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68868u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68868u) goto L_08A68868;
    return;
L_08A68868:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68694;
      }
      goto L_08A68870;
    }
L_08A68870:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A68694;
      }
      goto L_08A68880;
    }
L_08A68880:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A68694;
      }
      goto L_08A68890;
    }
L_08A68890:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A688A4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A688A4u) goto L_08A688A4;
    return;
L_08A688A4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A688B0:
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
          goto L_08A68AF8;
      }
      goto L_08A688D4;
    }
L_08A688D4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(32328)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A688EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4113u);
    ctx.gpr[31] = (0x08A68908u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68908u) goto L_08A68908;
    return;
L_08A68908:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6890C;
L_08A6890C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68B0C;
      }
      goto L_08A68914;
    }
L_08A68914:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4115u);
    ctx.gpr[31] = (0x08A68930u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68930u) goto L_08A68930;
    return;
L_08A68930:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6890C;
      }
      goto L_08A68938;
    }
L_08A68938:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68954u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68954u) goto L_08A68954;
    return;
L_08A68954:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6890C;
      }
      goto L_08A6895C;
    }
L_08A6895C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4109u);
    ctx.gpr[31] = (0x08A68978u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68978u) goto L_08A68978;
    return;
L_08A68978:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6890C;
      }
      goto L_08A68980;
    }
L_08A68980:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4105u);
    ctx.gpr[31] = (0x08A6899Cu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6899Cu) goto L_08A6899C;
    return;
L_08A6899C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6890C;
      }
      goto L_08A689A4;
    }
L_08A689A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4111u);
    ctx.gpr[31] = (0x08A689C0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A689C0u) goto L_08A689C0;
    return;
L_08A689C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6890C;
      }
      goto L_08A689C8;
    }
L_08A689C8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A689E4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A689E4u) goto L_08A689E4;
    return;
L_08A689E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6890C;
      }
      goto L_08A689EC;
    }
L_08A689EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68A08u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68A08u) goto L_08A68A08;
    return;
L_08A68A08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6890C;
      }
      goto L_08A68A10;
    }
L_08A68A10:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4118u);
    ctx.gpr[31] = (0x08A68A2Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68A2Cu) goto L_08A68A2C;
    return;
L_08A68A2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6890C;
      }
      goto L_08A68A34;
    }
L_08A68A34:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4120u);
    ctx.gpr[31] = (0x08A68A50u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68A50u) goto L_08A68A50;
    return;
L_08A68A50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6890C;
      }
      goto L_08A68A58;
    }
L_08A68A58:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68A74u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68A74u) goto L_08A68A74;
    return;
L_08A68A74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6890C;
      }
      goto L_08A68A7C;
    }
L_08A68A7C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68A98u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68A98u) goto L_08A68A98;
    return;
L_08A68A98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6890C;
      }
      goto L_08A68AA0;
    }
L_08A68AA0:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A6890C;
      }
      goto L_08A68AB0;
    }
L_08A68AB0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4123u);
    ctx.gpr[31] = (0x08A68ACCu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68ACCu) goto L_08A68ACC;
    return;
L_08A68ACC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6890C;
      }
      goto L_08A68AD4;
    }
L_08A68AD4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68AF0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68AF0u) goto L_08A68AF0;
    return;
L_08A68AF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6890C;
      }
      goto L_08A68AF8;
    }
L_08A68AF8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A68B0Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A68B0Cu) goto L_08A68B0C;
    return;
L_08A68B0C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68B18:
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
          goto L_08A68D18;
      }
      goto L_08A68B3C;
    }
L_08A68B3C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(32488)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68B54:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4138u);
    ctx.gpr[31] = (0x08A68B70u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68B70u) goto L_08A68B70;
    return;
L_08A68B70:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A68B74;
L_08A68B74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68D2C;
      }
      goto L_08A68B7C;
    }
L_08A68B7C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4127u);
    ctx.gpr[31] = (0x08A68B98u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68B98u) goto L_08A68B98;
    return;
L_08A68B98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68B74;
      }
      goto L_08A68BA0;
    }
L_08A68BA0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4134u);
    ctx.gpr[31] = (0x08A68BBCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68BBCu) goto L_08A68BBC;
    return;
L_08A68BBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68B74;
      }
      goto L_08A68BC4;
    }
L_08A68BC4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4130u);
    ctx.gpr[31] = (0x08A68BE0u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68BE0u) goto L_08A68BE0;
    return;
L_08A68BE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68B74;
      }
      goto L_08A68BE8;
    }
L_08A68BE8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4136u);
    ctx.gpr[31] = (0x08A68C04u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68C04u) goto L_08A68C04;
    return;
L_08A68C04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68B74;
      }
      goto L_08A68C0C;
    }
L_08A68C0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4140u);
    ctx.gpr[31] = (0x08A68C28u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68C28u) goto L_08A68C28;
    return;
L_08A68C28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68B74;
      }
      goto L_08A68C30;
    }
L_08A68C30:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68C4Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68C4Cu) goto L_08A68C4C;
    return;
L_08A68C4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68B74;
      }
      goto L_08A68C54;
    }
L_08A68C54:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4142u);
    ctx.gpr[31] = (0x08A68C70u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68C70u) goto L_08A68C70;
    return;
L_08A68C70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68B74;
      }
      goto L_08A68C78;
    }
L_08A68C78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4144u);
    ctx.gpr[31] = (0x08A68C94u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68C94u) goto L_08A68C94;
    return;
L_08A68C94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68B74;
      }
      goto L_08A68C9C;
    }
L_08A68C9C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68CB8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68CB8u) goto L_08A68CB8;
    return;
L_08A68CB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68B74;
      }
      goto L_08A68CC0;
    }
L_08A68CC0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68CDCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68CDCu) goto L_08A68CDC;
    return;
L_08A68CDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68B74;
      }
      goto L_08A68CE4;
    }
L_08A68CE4:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A68B74;
      }
      goto L_08A68CF4;
    }
L_08A68CF4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4147u);
    ctx.gpr[31] = (0x08A68D10u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68D10u) goto L_08A68D10;
    return;
L_08A68D10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68B74;
      }
      goto L_08A68D18;
    }
L_08A68D18:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A68D2Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A68D2Cu) goto L_08A68D2C;
    return;
L_08A68D2C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68D38:
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
          goto L_08A68F48;
      }
      goto L_08A68D5C;
    }
L_08A68D5C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(32648)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68D74:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 682u);
    ctx.gpr[31] = (0x08A68D90u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68D90u) goto L_08A68D90;
    return;
L_08A68D90:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A68D94;
L_08A68D94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68F5C;
      }
      goto L_08A68D9C;
    }
L_08A68D9C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 671u);
    ctx.gpr[31] = (0x08A68DB8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68DB8u) goto L_08A68DB8;
    return;
L_08A68DB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68D94;
      }
      goto L_08A68DC0;
    }
L_08A68DC0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 678u);
    ctx.gpr[31] = (0x08A68DDCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68DDCu) goto L_08A68DDC;
    return;
L_08A68DDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68D94;
      }
      goto L_08A68DE4;
    }
L_08A68DE4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 674u);
    ctx.gpr[31] = (0x08A68E00u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68E00u) goto L_08A68E00;
    return;
L_08A68E00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68D94;
      }
      goto L_08A68E08;
    }
L_08A68E08:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 680u);
    ctx.gpr[31] = (0x08A68E24u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68E24u) goto L_08A68E24;
    return;
L_08A68E24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68D94;
      }
      goto L_08A68E2C;
    }
L_08A68E2C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68E48u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68E48u) goto L_08A68E48;
    return;
L_08A68E48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68D94;
      }
      goto L_08A68E50;
    }
L_08A68E50:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 684u);
    ctx.gpr[31] = (0x08A68E6Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68E6Cu) goto L_08A68E6C;
    return;
L_08A68E6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68D94;
      }
      goto L_08A68E74;
    }
L_08A68E74:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68E90u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68E90u) goto L_08A68E90;
    return;
L_08A68E90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68D94;
      }
      goto L_08A68E98;
    }
L_08A68E98:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 687u);
    ctx.gpr[31] = (0x08A68EB4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68EB4u) goto L_08A68EB4;
    return;
L_08A68EB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68D94;
      }
      goto L_08A68EBC;
    }
L_08A68EBC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 689u);
    ctx.gpr[31] = (0x08A68ED8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68ED8u) goto L_08A68ED8;
    return;
L_08A68ED8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68D94;
      }
      goto L_08A68EE0;
    }
L_08A68EE0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A68EFCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68EFCu) goto L_08A68EFC;
    return;
L_08A68EFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68D94;
      }
      goto L_08A68F04;
    }
L_08A68F04:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A68D94;
      }
      goto L_08A68F14;
    }
L_08A68F14:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 692u);
    ctx.gpr[31] = (0x08A68F30u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68F30u) goto L_08A68F30;
    return;
L_08A68F30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68D94;
      }
      goto L_08A68F38;
    }
L_08A68F38:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A68D94;
      }
      goto L_08A68F48;
    }
L_08A68F48:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A68F5Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A68F5Cu) goto L_08A68F5C;
    return;
L_08A68F5C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68F68:
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
          goto L_08A69130;
      }
      goto L_08A68F8C;
    }
L_08A68F8C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-32728)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68FA4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 711u);
    ctx.gpr[31] = (0x08A68FC0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68FC0u) goto L_08A68FC0;
    return;
L_08A68FC0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A68FC4;
L_08A68FC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69144;
      }
      goto L_08A68FCC;
    }
L_08A68FCC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 700u);
    ctx.gpr[31] = (0x08A68FE8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A68FE8u) goto L_08A68FE8;
    return;
L_08A68FE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68FC4;
      }
      goto L_08A68FF0;
    }
L_08A68FF0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 704u);
    ctx.gpr[31] = (0x08A6900Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6900Cu) goto L_08A6900C;
    return;
L_08A6900C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68FC4;
      }
      goto L_08A69014;
    }
L_08A69014:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 709u);
    ctx.gpr[31] = (0x08A69030u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69030u) goto L_08A69030;
    return;
L_08A69030:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68FC4;
      }
      goto L_08A69038;
    }
L_08A69038:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 714u);
    ctx.gpr[31] = (0x08A69054u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69054u) goto L_08A69054;
    return;
L_08A69054:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68FC4;
      }
      goto L_08A6905C;
    }
L_08A6905C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 693u);
    ctx.gpr[31] = (0x08A69078u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69078u) goto L_08A69078;
    return;
L_08A69078:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68FC4;
      }
      goto L_08A69080;
    }
L_08A69080:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 696u);
    ctx.gpr[31] = (0x08A6909Cu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6909Cu) goto L_08A6909C;
    return;
L_08A6909C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68FC4;
      }
      goto L_08A690A4;
    }
L_08A690A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 702u);
    ctx.gpr[31] = (0x08A690C0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A690C0u) goto L_08A690C0;
    return;
L_08A690C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68FC4;
      }
      goto L_08A690C8;
    }
L_08A690C8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 706u);
    ctx.gpr[31] = (0x08A690E4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A690E4u) goto L_08A690E4;
    return;
L_08A690E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68FC4;
      }
      goto L_08A690EC;
    }
L_08A690EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A69108u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69108u) goto L_08A69108;
    return;
L_08A69108:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A68FC4;
      }
      goto L_08A69110;
    }
L_08A69110:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A68FC4;
      }
      goto L_08A69120;
    }
L_08A69120:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A68FC4;
      }
      goto L_08A69130;
    }
L_08A69130:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A69144u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A69144u) goto L_08A69144;
    return;
L_08A69144:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69150:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 5662u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69158:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 5662u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69160:
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
          goto L_08A69308;
      }
      goto L_08A69184;
    }
L_08A69184:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-32568)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6919C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1549u);
    ctx.gpr[31] = (0x08A691B8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A691B8u) goto L_08A691B8;
    return;
L_08A691B8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A691BC;
L_08A691BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6931C;
      }
      goto L_08A691C4;
    }
L_08A691C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1552u);
    ctx.gpr[31] = (0x08A691E0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A691E0u) goto L_08A691E0;
    return;
L_08A691E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A691BC;
      }
      goto L_08A691E8;
    }
L_08A691E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1557u);
    ctx.gpr[31] = (0x08A69204u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69204u) goto L_08A69204;
    return;
L_08A69204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A691BC;
      }
      goto L_08A6920C;
    }
L_08A6920C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1561u);
    ctx.gpr[31] = (0x08A69228u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69228u) goto L_08A69228;
    return;
L_08A69228:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A691BC;
      }
      goto L_08A69230;
    }
L_08A69230:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1563u);
    ctx.gpr[31] = (0x08A6924Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6924Cu) goto L_08A6924C;
    return;
L_08A6924C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A691BC;
      }
      goto L_08A69254;
    }
L_08A69254:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1567u);
    ctx.gpr[31] = (0x08A69270u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69270u) goto L_08A69270;
    return;
L_08A69270:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A691BC;
      }
      goto L_08A69278;
    }
L_08A69278:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1569u);
    ctx.gpr[31] = (0x08A69294u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69294u) goto L_08A69294;
    return;
L_08A69294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A691BC;
      }
      goto L_08A6929C;
    }
L_08A6929C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1555u);
    ctx.gpr[31] = (0x08A692B8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A692B8u) goto L_08A692B8;
    return;
L_08A692B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A691BC;
      }
      goto L_08A692C0;
    }
L_08A692C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1559u);
    ctx.gpr[31] = (0x08A692DCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A692DCu) goto L_08A692DC;
    return;
L_08A692DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A691BC;
      }
      goto L_08A692E4;
    }
L_08A692E4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1565u);
    ctx.gpr[31] = (0x08A69300u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69300u) goto L_08A69300;
    return;
L_08A69300:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A691BC;
      }
      goto L_08A69308;
    }
L_08A69308:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6931Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A6931Cu) goto L_08A6931C;
    return;
L_08A6931C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69328:
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
          goto L_08A694D0;
      }
      goto L_08A6934C;
    }
L_08A6934C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-32408)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69364:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1574u);
    ctx.gpr[31] = (0x08A69380u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69380u) goto L_08A69380;
    return;
L_08A69380:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A69384;
L_08A69384:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A694E4;
      }
      goto L_08A6938C;
    }
L_08A6938C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1577u);
    ctx.gpr[31] = (0x08A693A8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A693A8u) goto L_08A693A8;
    return;
L_08A693A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69384;
      }
      goto L_08A693B0;
    }
L_08A693B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1581u);
    ctx.gpr[31] = (0x08A693CCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A693CCu) goto L_08A693CC;
    return;
L_08A693CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69384;
      }
      goto L_08A693D4;
    }
L_08A693D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1585u);
    ctx.gpr[31] = (0x08A693F0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A693F0u) goto L_08A693F0;
    return;
L_08A693F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69384;
      }
      goto L_08A693F8;
    }
L_08A693F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1587u);
    ctx.gpr[31] = (0x08A69414u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69414u) goto L_08A69414;
    return;
L_08A69414:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69384;
      }
      goto L_08A6941C;
    }
L_08A6941C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1591u);
    ctx.gpr[31] = (0x08A69438u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69438u) goto L_08A69438;
    return;
L_08A69438:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69384;
      }
      goto L_08A69440;
    }
L_08A69440:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1593u);
    ctx.gpr[31] = (0x08A6945Cu);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6945Cu) goto L_08A6945C;
    return;
L_08A6945C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69384;
      }
      goto L_08A69464;
    }
L_08A69464:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1579u);
    ctx.gpr[31] = (0x08A69480u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69480u) goto L_08A69480;
    return;
L_08A69480:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69384;
      }
      goto L_08A69488;
    }
L_08A69488:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1583u);
    ctx.gpr[31] = (0x08A694A4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A694A4u) goto L_08A694A4;
    return;
L_08A694A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69384;
      }
      goto L_08A694AC;
    }
L_08A694AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1589u);
    ctx.gpr[31] = (0x08A694C8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A694C8u) goto L_08A694C8;
    return;
L_08A694C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69384;
      }
      goto L_08A694D0;
    }
L_08A694D0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A694E4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A694E4u) goto L_08A694E4;
    return;
L_08A694E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A694F0:
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
          goto L_08A69674;
      }
      goto L_08A69514;
    }
L_08A69514:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-32248)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6952C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1598u);
    ctx.gpr[31] = (0x08A69548u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69548u) goto L_08A69548;
    return;
L_08A69548:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6954C;
L_08A6954C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69688;
      }
      goto L_08A69554;
    }
L_08A69554:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1601u);
    ctx.gpr[31] = (0x08A69570u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69570u) goto L_08A69570;
    return;
L_08A69570:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6954C;
      }
      goto L_08A69578;
    }
L_08A69578:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1608u);
    ctx.gpr[31] = (0x08A69594u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69594u) goto L_08A69594;
    return;
L_08A69594:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6954C;
      }
      goto L_08A6959C;
    }
L_08A6959C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1612u);
    ctx.gpr[31] = (0x08A695B8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A695B8u) goto L_08A695B8;
    return;
L_08A695B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6954C;
      }
      goto L_08A695C0;
    }
L_08A695C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1615u);
    ctx.gpr[31] = (0x08A695DCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A695DCu) goto L_08A695DC;
    return;
L_08A695DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6954C;
      }
      goto L_08A695E4;
    }
L_08A695E4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1619u);
    ctx.gpr[31] = (0x08A69600u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69600u) goto L_08A69600;
    return;
L_08A69600:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6954C;
      }
      goto L_08A69608;
    }
L_08A69608:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1605u);
    ctx.gpr[31] = (0x08A69624u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69624u) goto L_08A69624;
    return;
L_08A69624:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6954C;
      }
      goto L_08A6962C;
    }
L_08A6962C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1610u);
    ctx.gpr[31] = (0x08A69648u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69648u) goto L_08A69648;
    return;
L_08A69648:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6954C;
      }
      goto L_08A69650;
    }
L_08A69650:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1617u);
    ctx.gpr[31] = (0x08A6966Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6966Cu) goto L_08A6966C;
    return;
L_08A6966C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6954C;
      }
      goto L_08A69674;
    }
L_08A69674:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A69688u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A69688u) goto L_08A69688;
    return;
L_08A69688:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69694:
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
          goto L_08A6983C;
      }
      goto L_08A696B8;
    }
L_08A696B8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-32088)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A696D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1623u);
    ctx.gpr[31] = (0x08A696ECu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A696ECu) goto L_08A696EC;
    return;
L_08A696EC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A696F0;
L_08A696F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69850;
      }
      goto L_08A696F8;
    }
L_08A696F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1626u);
    ctx.gpr[31] = (0x08A69714u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69714u) goto L_08A69714;
    return;
L_08A69714:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A696F0;
      }
      goto L_08A6971C;
    }
L_08A6971C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1630u);
    ctx.gpr[31] = (0x08A69738u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69738u) goto L_08A69738;
    return;
L_08A69738:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A696F0;
      }
      goto L_08A69740;
    }
L_08A69740:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1634u);
    ctx.gpr[31] = (0x08A6975Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6975Cu) goto L_08A6975C;
    return;
L_08A6975C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A696F0;
      }
      goto L_08A69764;
    }
L_08A69764:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1636u);
    ctx.gpr[31] = (0x08A69780u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69780u) goto L_08A69780;
    return;
L_08A69780:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A696F0;
      }
      goto L_08A69788;
    }
L_08A69788:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1640u);
    ctx.gpr[31] = (0x08A697A4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A697A4u) goto L_08A697A4;
    return;
L_08A697A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A696F0;
      }
      goto L_08A697AC;
    }
L_08A697AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1642u);
    ctx.gpr[31] = (0x08A697C8u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A697C8u) goto L_08A697C8;
    return;
L_08A697C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A696F0;
      }
      goto L_08A697D0;
    }
L_08A697D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1628u);
    ctx.gpr[31] = (0x08A697ECu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A697ECu) goto L_08A697EC;
    return;
L_08A697EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A696F0;
      }
      goto L_08A697F4;
    }
L_08A697F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1632u);
    ctx.gpr[31] = (0x08A69810u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69810u) goto L_08A69810;
    return;
L_08A69810:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A696F0;
      }
      goto L_08A69818;
    }
L_08A69818:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1638u);
    ctx.gpr[31] = (0x08A69834u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69834u) goto L_08A69834;
    return;
L_08A69834:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A696F0;
      }
      goto L_08A6983C;
    }
L_08A6983C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A69850u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A69850u) goto L_08A69850;
    return;
L_08A69850:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6985C:
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
          goto L_08A69A04;
      }
      goto L_08A69880;
    }
L_08A69880:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31928)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69898:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1647u);
    ctx.gpr[31] = (0x08A698B4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A698B4u) goto L_08A698B4;
    return;
L_08A698B4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A698B8;
L_08A698B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69A18;
      }
      goto L_08A698C0;
    }
L_08A698C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1650u);
    ctx.gpr[31] = (0x08A698DCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A698DCu) goto L_08A698DC;
    return;
L_08A698DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A698B8;
      }
      goto L_08A698E4;
    }
L_08A698E4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1655u);
    ctx.gpr[31] = (0x08A69900u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69900u) goto L_08A69900;
    return;
L_08A69900:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A698B8;
      }
      goto L_08A69908;
    }
L_08A69908:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1659u);
    ctx.gpr[31] = (0x08A69924u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69924u) goto L_08A69924;
    return;
L_08A69924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A698B8;
      }
      goto L_08A6992C;
    }
L_08A6992C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1661u);
    ctx.gpr[31] = (0x08A69948u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69948u) goto L_08A69948;
    return;
L_08A69948:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A698B8;
      }
      goto L_08A69950;
    }
L_08A69950:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1665u);
    ctx.gpr[31] = (0x08A6996Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6996Cu) goto L_08A6996C;
    return;
L_08A6996C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A698B8;
      }
      goto L_08A69974;
    }
L_08A69974:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1667u);
    ctx.gpr[31] = (0x08A69990u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69990u) goto L_08A69990;
    return;
L_08A69990:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A698B8;
      }
      goto L_08A69998;
    }
L_08A69998:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1653u);
    ctx.gpr[31] = (0x08A699B4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A699B4u) goto L_08A699B4;
    return;
L_08A699B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A698B8;
      }
      goto L_08A699BC;
    }
L_08A699BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1657u);
    ctx.gpr[31] = (0x08A699D8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A699D8u) goto L_08A699D8;
    return;
L_08A699D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A698B8;
      }
      goto L_08A699E0;
    }
L_08A699E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1663u);
    ctx.gpr[31] = (0x08A699FCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A699FCu) goto L_08A699FC;
    return;
L_08A699FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A698B8;
      }
      goto L_08A69A04;
    }
L_08A69A04:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A69A18u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A69A18u) goto L_08A69A18;
    return;
L_08A69A18:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69A24:
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
          goto L_08A69BCC;
      }
      goto L_08A69A48;
    }
L_08A69A48:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31768)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69A60:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1671u);
    ctx.gpr[31] = (0x08A69A7Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69A7Cu) goto L_08A69A7C;
    return;
L_08A69A7C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A69A80;
L_08A69A80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69BE0;
      }
      goto L_08A69A88;
    }
L_08A69A88:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1674u);
    ctx.gpr[31] = (0x08A69AA4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69AA4u) goto L_08A69AA4;
    return;
L_08A69AA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69A80;
      }
      goto L_08A69AAC;
    }
L_08A69AAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1679u);
    ctx.gpr[31] = (0x08A69AC8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69AC8u) goto L_08A69AC8;
    return;
L_08A69AC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69A80;
      }
      goto L_08A69AD0;
    }
L_08A69AD0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1683u);
    ctx.gpr[31] = (0x08A69AECu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69AECu) goto L_08A69AEC;
    return;
L_08A69AEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69A80;
      }
      goto L_08A69AF4;
    }
L_08A69AF4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1685u);
    ctx.gpr[31] = (0x08A69B10u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69B10u) goto L_08A69B10;
    return;
L_08A69B10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69A80;
      }
      goto L_08A69B18;
    }
L_08A69B18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1689u);
    ctx.gpr[31] = (0x08A69B34u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69B34u) goto L_08A69B34;
    return;
L_08A69B34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69A80;
      }
      goto L_08A69B3C;
    }
L_08A69B3C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1691u);
    ctx.gpr[31] = (0x08A69B58u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69B58u) goto L_08A69B58;
    return;
L_08A69B58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69A80;
      }
      goto L_08A69B60;
    }
L_08A69B60:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1677u);
    ctx.gpr[31] = (0x08A69B7Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69B7Cu) goto L_08A69B7C;
    return;
L_08A69B7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69A80;
      }
      goto L_08A69B84;
    }
L_08A69B84:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1681u);
    ctx.gpr[31] = (0x08A69BA0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69BA0u) goto L_08A69BA0;
    return;
L_08A69BA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69A80;
      }
      goto L_08A69BA8;
    }
L_08A69BA8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1687u);
    ctx.gpr[31] = (0x08A69BC4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69BC4u) goto L_08A69BC4;
    return;
L_08A69BC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69A80;
      }
      goto L_08A69BCC;
    }
L_08A69BCC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A69BE0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A69BE0u) goto L_08A69BE0;
    return;
L_08A69BE0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69BEC:
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
          goto L_08A69D94;
      }
      goto L_08A69C10;
    }
L_08A69C10:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31608)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69C28:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1696u);
    ctx.gpr[31] = (0x08A69C44u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69C44u) goto L_08A69C44;
    return;
L_08A69C44:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A69C48;
L_08A69C48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69DA8;
      }
      goto L_08A69C50;
    }
L_08A69C50:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1699u);
    ctx.gpr[31] = (0x08A69C6Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69C6Cu) goto L_08A69C6C;
    return;
L_08A69C6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69C48;
      }
      goto L_08A69C74;
    }
L_08A69C74:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1703u);
    ctx.gpr[31] = (0x08A69C90u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69C90u) goto L_08A69C90;
    return;
L_08A69C90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69C48;
      }
      goto L_08A69C98;
    }
L_08A69C98:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1707u);
    ctx.gpr[31] = (0x08A69CB4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69CB4u) goto L_08A69CB4;
    return;
L_08A69CB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69C48;
      }
      goto L_08A69CBC;
    }
L_08A69CBC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1709u);
    ctx.gpr[31] = (0x08A69CD8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69CD8u) goto L_08A69CD8;
    return;
L_08A69CD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69C48;
      }
      goto L_08A69CE0;
    }
L_08A69CE0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1713u);
    ctx.gpr[31] = (0x08A69CFCu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69CFCu) goto L_08A69CFC;
    return;
L_08A69CFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69C48;
      }
      goto L_08A69D04;
    }
L_08A69D04:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1714u);
    ctx.gpr[31] = (0x08A69D20u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69D20u) goto L_08A69D20;
    return;
L_08A69D20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69C48;
      }
      goto L_08A69D28;
    }
L_08A69D28:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1701u);
    ctx.gpr[31] = (0x08A69D44u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69D44u) goto L_08A69D44;
    return;
L_08A69D44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69C48;
      }
      goto L_08A69D4C;
    }
L_08A69D4C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1705u);
    ctx.gpr[31] = (0x08A69D68u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69D68u) goto L_08A69D68;
    return;
L_08A69D68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69C48;
      }
      goto L_08A69D70;
    }
L_08A69D70:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1711u);
    ctx.gpr[31] = (0x08A69D8Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69D8Cu) goto L_08A69D8C;
    return;
L_08A69D8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69C48;
      }
      goto L_08A69D94;
    }
L_08A69D94:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A69DA8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A69DA8u) goto L_08A69DA8;
    return;
L_08A69DA8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69DB4:
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
          goto L_08A69F5C;
      }
      goto L_08A69DD8;
    }
L_08A69DD8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31448)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69DF0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1718u);
    ctx.gpr[31] = (0x08A69E0Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69E0Cu) goto L_08A69E0C;
    return;
L_08A69E0C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A69E10;
L_08A69E10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69F70;
      }
      goto L_08A69E18;
    }
L_08A69E18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1721u);
    ctx.gpr[31] = (0x08A69E34u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69E34u) goto L_08A69E34;
    return;
L_08A69E34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69E10;
      }
      goto L_08A69E3C;
    }
L_08A69E3C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1725u);
    ctx.gpr[31] = (0x08A69E58u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69E58u) goto L_08A69E58;
    return;
L_08A69E58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69E10;
      }
      goto L_08A69E60;
    }
L_08A69E60:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1729u);
    ctx.gpr[31] = (0x08A69E7Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69E7Cu) goto L_08A69E7C;
    return;
L_08A69E7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69E10;
      }
      goto L_08A69E84;
    }
L_08A69E84:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1731u);
    ctx.gpr[31] = (0x08A69EA0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69EA0u) goto L_08A69EA0;
    return;
L_08A69EA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69E10;
      }
      goto L_08A69EA8;
    }
L_08A69EA8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1735u);
    ctx.gpr[31] = (0x08A69EC4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69EC4u) goto L_08A69EC4;
    return;
L_08A69EC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69E10;
      }
      goto L_08A69ECC;
    }
L_08A69ECC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1737u);
    ctx.gpr[31] = (0x08A69EE8u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69EE8u) goto L_08A69EE8;
    return;
L_08A69EE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69E10;
      }
      goto L_08A69EF0;
    }
L_08A69EF0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1723u);
    ctx.gpr[31] = (0x08A69F0Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69F0Cu) goto L_08A69F0C;
    return;
L_08A69F0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69E10;
      }
      goto L_08A69F14;
    }
L_08A69F14:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1727u);
    ctx.gpr[31] = (0x08A69F30u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69F30u) goto L_08A69F30;
    return;
L_08A69F30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69E10;
      }
      goto L_08A69F38;
    }
L_08A69F38:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1733u);
    ctx.gpr[31] = (0x08A69F54u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69F54u) goto L_08A69F54;
    return;
L_08A69F54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69E10;
      }
      goto L_08A69F5C;
    }
L_08A69F5C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A69F70u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A69F70u) goto L_08A69F70;
    return;
L_08A69F70:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69F7C:
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
          goto L_08A6A124;
      }
      goto L_08A69FA0;
    }
L_08A69FA0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31288)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69FB8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1742u);
    ctx.gpr[31] = (0x08A69FD4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69FD4u) goto L_08A69FD4;
    return;
L_08A69FD4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A69FD8;
L_08A69FD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A138;
      }
      goto L_08A69FE0;
    }
L_08A69FE0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1745u);
    ctx.gpr[31] = (0x08A69FFCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A69FFCu) goto L_08A69FFC;
    return;
L_08A69FFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69FD8;
      }
      goto L_08A6A004;
    }
L_08A6A004:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1750u);
    ctx.gpr[31] = (0x08A6A020u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A020u) goto L_08A6A020;
    return;
L_08A6A020:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69FD8;
      }
      goto L_08A6A028;
    }
L_08A6A028:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1754u);
    ctx.gpr[31] = (0x08A6A044u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A044u) goto L_08A6A044;
    return;
L_08A6A044:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69FD8;
      }
      goto L_08A6A04C;
    }
L_08A6A04C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1756u);
    ctx.gpr[31] = (0x08A6A068u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A068u) goto L_08A6A068;
    return;
L_08A6A068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69FD8;
      }
      goto L_08A6A070;
    }
L_08A6A070:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1760u);
    ctx.gpr[31] = (0x08A6A08Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A08Cu) goto L_08A6A08C;
    return;
L_08A6A08C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69FD8;
      }
      goto L_08A6A094;
    }
L_08A6A094:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1762u);
    ctx.gpr[31] = (0x08A6A0B0u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A0B0u) goto L_08A6A0B0;
    return;
L_08A6A0B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69FD8;
      }
      goto L_08A6A0B8;
    }
L_08A6A0B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1748u);
    ctx.gpr[31] = (0x08A6A0D4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A0D4u) goto L_08A6A0D4;
    return;
L_08A6A0D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69FD8;
      }
      goto L_08A6A0DC;
    }
L_08A6A0DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1752u);
    ctx.gpr[31] = (0x08A6A0F8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A0F8u) goto L_08A6A0F8;
    return;
L_08A6A0F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69FD8;
      }
      goto L_08A6A100;
    }
L_08A6A100:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1758u);
    ctx.gpr[31] = (0x08A6A11Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A11Cu) goto L_08A6A11C;
    return;
L_08A6A11C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A69FD8;
      }
      goto L_08A6A124;
    }
L_08A6A124:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6A138u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A6A138u) goto L_08A6A138;
    return;
L_08A6A138:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A144:
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
          goto L_08A6A2EC;
      }
      goto L_08A6A168;
    }
L_08A6A168:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31128)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A180:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1767u);
    ctx.gpr[31] = (0x08A6A19Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A19Cu) goto L_08A6A19C;
    return;
L_08A6A19C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6A1A0;
L_08A6A1A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A300;
      }
      goto L_08A6A1A8;
    }
L_08A6A1A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1770u);
    ctx.gpr[31] = (0x08A6A1C4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A1C4u) goto L_08A6A1C4;
    return;
L_08A6A1C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A1A0;
      }
      goto L_08A6A1CC;
    }
L_08A6A1CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1775u);
    ctx.gpr[31] = (0x08A6A1E8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A1E8u) goto L_08A6A1E8;
    return;
L_08A6A1E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A1A0;
      }
      goto L_08A6A1F0;
    }
L_08A6A1F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1779u);
    ctx.gpr[31] = (0x08A6A20Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A20Cu) goto L_08A6A20C;
    return;
L_08A6A20C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A1A0;
      }
      goto L_08A6A214;
    }
L_08A6A214:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1781u);
    ctx.gpr[31] = (0x08A6A230u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A230u) goto L_08A6A230;
    return;
L_08A6A230:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A1A0;
      }
      goto L_08A6A238;
    }
L_08A6A238:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1785u);
    ctx.gpr[31] = (0x08A6A254u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A254u) goto L_08A6A254;
    return;
L_08A6A254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A1A0;
      }
      goto L_08A6A25C;
    }
L_08A6A25C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1787u);
    ctx.gpr[31] = (0x08A6A278u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A278u) goto L_08A6A278;
    return;
L_08A6A278:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A1A0;
      }
      goto L_08A6A280;
    }
L_08A6A280:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1773u);
    ctx.gpr[31] = (0x08A6A29Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A29Cu) goto L_08A6A29C;
    return;
L_08A6A29C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A1A0;
      }
      goto L_08A6A2A4;
    }
L_08A6A2A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1777u);
    ctx.gpr[31] = (0x08A6A2C0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A2C0u) goto L_08A6A2C0;
    return;
L_08A6A2C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A1A0;
      }
      goto L_08A6A2C8;
    }
L_08A6A2C8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1783u);
    ctx.gpr[31] = (0x08A6A2E4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A2E4u) goto L_08A6A2E4;
    return;
L_08A6A2E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A1A0;
      }
      goto L_08A6A2EC;
    }
L_08A6A2EC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6A300u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A6A300u) goto L_08A6A300;
    return;
L_08A6A300:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A30C:
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
          goto L_08A6A4B4;
      }
      goto L_08A6A330;
    }
L_08A6A330:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30968)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A348:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1792u);
    ctx.gpr[31] = (0x08A6A364u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A364u) goto L_08A6A364;
    return;
L_08A6A364:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6A368;
L_08A6A368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A4C8;
      }
      goto L_08A6A370;
    }
L_08A6A370:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1795u);
    ctx.gpr[31] = (0x08A6A38Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A38Cu) goto L_08A6A38C;
    return;
L_08A6A38C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A368;
      }
      goto L_08A6A394;
    }
L_08A6A394:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1799u);
    ctx.gpr[31] = (0x08A6A3B0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A3B0u) goto L_08A6A3B0;
    return;
L_08A6A3B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A368;
      }
      goto L_08A6A3B8;
    }
L_08A6A3B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1803u);
    ctx.gpr[31] = (0x08A6A3D4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A3D4u) goto L_08A6A3D4;
    return;
L_08A6A3D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A368;
      }
      goto L_08A6A3DC;
    }
L_08A6A3DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1805u);
    ctx.gpr[31] = (0x08A6A3F8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A3F8u) goto L_08A6A3F8;
    return;
L_08A6A3F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A368;
      }
      goto L_08A6A400;
    }
L_08A6A400:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1809u);
    ctx.gpr[31] = (0x08A6A41Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A41Cu) goto L_08A6A41C;
    return;
L_08A6A41C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A368;
      }
      goto L_08A6A424;
    }
L_08A6A424:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1811u);
    ctx.gpr[31] = (0x08A6A440u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A440u) goto L_08A6A440;
    return;
L_08A6A440:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A368;
      }
      goto L_08A6A448;
    }
L_08A6A448:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1797u);
    ctx.gpr[31] = (0x08A6A464u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A464u) goto L_08A6A464;
    return;
L_08A6A464:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A368;
      }
      goto L_08A6A46C;
    }
L_08A6A46C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1801u);
    ctx.gpr[31] = (0x08A6A488u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A488u) goto L_08A6A488;
    return;
L_08A6A488:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A368;
      }
      goto L_08A6A490;
    }
L_08A6A490:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1807u);
    ctx.gpr[31] = (0x08A6A4ACu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A4ACu) goto L_08A6A4AC;
    return;
L_08A6A4AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A368;
      }
      goto L_08A6A4B4;
    }
L_08A6A4B4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6A4C8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A6A4C8u) goto L_08A6A4C8;
    return;
L_08A6A4C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A4D4:
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
          goto L_08A6A67C;
      }
      goto L_08A6A4F8;
    }
L_08A6A4F8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30808)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A510:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1816u);
    ctx.gpr[31] = (0x08A6A52Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A52Cu) goto L_08A6A52C;
    return;
L_08A6A52C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6A530;
L_08A6A530:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A690;
      }
      goto L_08A6A538;
    }
L_08A6A538:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1819u);
    ctx.gpr[31] = (0x08A6A554u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A554u) goto L_08A6A554;
    return;
L_08A6A554:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A530;
      }
      goto L_08A6A55C;
    }
L_08A6A55C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1824u);
    ctx.gpr[31] = (0x08A6A578u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A578u) goto L_08A6A578;
    return;
L_08A6A578:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A530;
      }
      goto L_08A6A580;
    }
L_08A6A580:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1828u);
    ctx.gpr[31] = (0x08A6A59Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A59Cu) goto L_08A6A59C;
    return;
L_08A6A59C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A530;
      }
      goto L_08A6A5A4;
    }
L_08A6A5A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1830u);
    ctx.gpr[31] = (0x08A6A5C0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A5C0u) goto L_08A6A5C0;
    return;
L_08A6A5C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A530;
      }
      goto L_08A6A5C8;
    }
L_08A6A5C8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1834u);
    ctx.gpr[31] = (0x08A6A5E4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A5E4u) goto L_08A6A5E4;
    return;
L_08A6A5E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A530;
      }
      goto L_08A6A5EC;
    }
L_08A6A5EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1836u);
    ctx.gpr[31] = (0x08A6A608u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A608u) goto L_08A6A608;
    return;
L_08A6A608:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A530;
      }
      goto L_08A6A610;
    }
L_08A6A610:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1822u);
    ctx.gpr[31] = (0x08A6A62Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A62Cu) goto L_08A6A62C;
    return;
L_08A6A62C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A530;
      }
      goto L_08A6A634;
    }
L_08A6A634:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1826u);
    ctx.gpr[31] = (0x08A6A650u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A650u) goto L_08A6A650;
    return;
L_08A6A650:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A530;
      }
      goto L_08A6A658;
    }
L_08A6A658:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1832u);
    ctx.gpr[31] = (0x08A6A674u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A674u) goto L_08A6A674;
    return;
L_08A6A674:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A530;
      }
      goto L_08A6A67C;
    }
L_08A6A67C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6A690u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A6A690u) goto L_08A6A690;
    return;
L_08A6A690:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A69C:
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
          goto L_08A6A844;
      }
      goto L_08A6A6C0;
    }
L_08A6A6C0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30648)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A6D8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1841u);
    ctx.gpr[31] = (0x08A6A6F4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A6F4u) goto L_08A6A6F4;
    return;
L_08A6A6F4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6A6F8;
L_08A6A6F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A858;
      }
      goto L_08A6A700;
    }
L_08A6A700:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1844u);
    ctx.gpr[31] = (0x08A6A71Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A71Cu) goto L_08A6A71C;
    return;
L_08A6A71C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A6F8;
      }
      goto L_08A6A724;
    }
L_08A6A724:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1848u);
    ctx.gpr[31] = (0x08A6A740u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A740u) goto L_08A6A740;
    return;
L_08A6A740:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A6F8;
      }
      goto L_08A6A748;
    }
L_08A6A748:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1852u);
    ctx.gpr[31] = (0x08A6A764u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A764u) goto L_08A6A764;
    return;
L_08A6A764:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A6F8;
      }
      goto L_08A6A76C;
    }
L_08A6A76C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1854u);
    ctx.gpr[31] = (0x08A6A788u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A788u) goto L_08A6A788;
    return;
L_08A6A788:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A6F8;
      }
      goto L_08A6A790;
    }
L_08A6A790:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1858u);
    ctx.gpr[31] = (0x08A6A7ACu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A7ACu) goto L_08A6A7AC;
    return;
L_08A6A7AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A6F8;
      }
      goto L_08A6A7B4;
    }
L_08A6A7B4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1860u);
    ctx.gpr[31] = (0x08A6A7D0u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A7D0u) goto L_08A6A7D0;
    return;
L_08A6A7D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A6F8;
      }
      goto L_08A6A7D8;
    }
L_08A6A7D8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1846u);
    ctx.gpr[31] = (0x08A6A7F4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A7F4u) goto L_08A6A7F4;
    return;
L_08A6A7F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A6F8;
      }
      goto L_08A6A7FC;
    }
L_08A6A7FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1850u);
    ctx.gpr[31] = (0x08A6A818u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A818u) goto L_08A6A818;
    return;
L_08A6A818:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A6F8;
      }
      goto L_08A6A820;
    }
L_08A6A820:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1856u);
    ctx.gpr[31] = (0x08A6A83Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A83Cu) goto L_08A6A83C;
    return;
L_08A6A83C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A6F8;
      }
      goto L_08A6A844;
    }
L_08A6A844:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6A858u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A6A858u) goto L_08A6A858;
    return;
L_08A6A858:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A864:
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
          goto L_08A6AA0C;
      }
      goto L_08A6A888;
    }
L_08A6A888:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30488)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A8A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1865u);
    ctx.gpr[31] = (0x08A6A8BCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A8BCu) goto L_08A6A8BC;
    return;
L_08A6A8BC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6A8C0;
L_08A6A8C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AA20;
      }
      goto L_08A6A8C8;
    }
L_08A6A8C8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1868u);
    ctx.gpr[31] = (0x08A6A8E4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A8E4u) goto L_08A6A8E4;
    return;
L_08A6A8E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A8C0;
      }
      goto L_08A6A8EC;
    }
L_08A6A8EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1873u);
    ctx.gpr[31] = (0x08A6A908u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A908u) goto L_08A6A908;
    return;
L_08A6A908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A8C0;
      }
      goto L_08A6A910;
    }
L_08A6A910:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1877u);
    ctx.gpr[31] = (0x08A6A92Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A92Cu) goto L_08A6A92C;
    return;
L_08A6A92C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A8C0;
      }
      goto L_08A6A934;
    }
L_08A6A934:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1879u);
    ctx.gpr[31] = (0x08A6A950u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A950u) goto L_08A6A950;
    return;
L_08A6A950:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A8C0;
      }
      goto L_08A6A958;
    }
L_08A6A958:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1883u);
    ctx.gpr[31] = (0x08A6A974u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A974u) goto L_08A6A974;
    return;
L_08A6A974:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A8C0;
      }
      goto L_08A6A97C;
    }
L_08A6A97C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1885u);
    ctx.gpr[31] = (0x08A6A998u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A998u) goto L_08A6A998;
    return;
L_08A6A998:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A8C0;
      }
      goto L_08A6A9A0;
    }
L_08A6A9A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1871u);
    ctx.gpr[31] = (0x08A6A9BCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A9BCu) goto L_08A6A9BC;
    return;
L_08A6A9BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A8C0;
      }
      goto L_08A6A9C4;
    }
L_08A6A9C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1875u);
    ctx.gpr[31] = (0x08A6A9E0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A9E0u) goto L_08A6A9E0;
    return;
L_08A6A9E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A8C0;
      }
      goto L_08A6A9E8;
    }
L_08A6A9E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1881u);
    ctx.gpr[31] = (0x08A6AA04u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AA04u) goto L_08A6AA04;
    return;
L_08A6AA04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6A8C0;
      }
      goto L_08A6AA0C;
    }
L_08A6AA0C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6AA20u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A6AA20u) goto L_08A6AA20;
    return;
L_08A6AA20:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6AA2C:
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
          goto L_08A6ABD4;
      }
      goto L_08A6AA50;
    }
L_08A6AA50:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30328)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6AA68:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1890u);
    ctx.gpr[31] = (0x08A6AA84u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AA84u) goto L_08A6AA84;
    return;
L_08A6AA84:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6AA88;
L_08A6AA88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6ABE8;
      }
      goto L_08A6AA90;
    }
L_08A6AA90:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1893u);
    ctx.gpr[31] = (0x08A6AAACu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AAACu) goto L_08A6AAAC;
    return;
L_08A6AAAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AA88;
      }
      goto L_08A6AAB4;
    }
L_08A6AAB4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1898u);
    ctx.gpr[31] = (0x08A6AAD0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AAD0u) goto L_08A6AAD0;
    return;
L_08A6AAD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AA88;
      }
      goto L_08A6AAD8;
    }
L_08A6AAD8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1902u);
    ctx.gpr[31] = (0x08A6AAF4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AAF4u) goto L_08A6AAF4;
    return;
L_08A6AAF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AA88;
      }
      goto L_08A6AAFC;
    }
L_08A6AAFC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1904u);
    ctx.gpr[31] = (0x08A6AB18u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AB18u) goto L_08A6AB18;
    return;
L_08A6AB18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AA88;
      }
      goto L_08A6AB20;
    }
L_08A6AB20:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1906u);
    ctx.gpr[31] = (0x08A6AB3Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AB3Cu) goto L_08A6AB3C;
    return;
L_08A6AB3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AA88;
      }
      goto L_08A6AB44;
    }
L_08A6AB44:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1910u);
    ctx.gpr[31] = (0x08A6AB60u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AB60u) goto L_08A6AB60;
    return;
L_08A6AB60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AA88;
      }
      goto L_08A6AB68;
    }
L_08A6AB68:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1896u);
    ctx.gpr[31] = (0x08A6AB84u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AB84u) goto L_08A6AB84;
    return;
L_08A6AB84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AA88;
      }
      goto L_08A6AB8C;
    }
L_08A6AB8C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1900u);
    ctx.gpr[31] = (0x08A6ABA8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6ABA8u) goto L_08A6ABA8;
    return;
L_08A6ABA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AA88;
      }
      goto L_08A6ABB0;
    }
L_08A6ABB0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1908u);
    ctx.gpr[31] = (0x08A6ABCCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6ABCCu) goto L_08A6ABCC;
    return;
L_08A6ABCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AA88;
      }
      goto L_08A6ABD4;
    }
L_08A6ABD4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6ABE8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A6ABE8u) goto L_08A6ABE8;
    return;
L_08A6ABE8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6ABF4:
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
          goto L_08A6AD9C;
      }
      goto L_08A6AC18;
    }
L_08A6AC18:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30168)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6AC30:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1914u);
    ctx.gpr[31] = (0x08A6AC4Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AC4Cu) goto L_08A6AC4C;
    return;
L_08A6AC4C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6AC50;
L_08A6AC50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6ADB0;
      }
      goto L_08A6AC58;
    }
L_08A6AC58:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1917u);
    ctx.gpr[31] = (0x08A6AC74u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AC74u) goto L_08A6AC74;
    return;
L_08A6AC74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AC50;
      }
      goto L_08A6AC7C;
    }
L_08A6AC7C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1921u);
    ctx.gpr[31] = (0x08A6AC98u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AC98u) goto L_08A6AC98;
    return;
L_08A6AC98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AC50;
      }
      goto L_08A6ACA0;
    }
L_08A6ACA0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1925u);
    ctx.gpr[31] = (0x08A6ACBCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6ACBCu) goto L_08A6ACBC;
    return;
L_08A6ACBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AC50;
      }
      goto L_08A6ACC4;
    }
L_08A6ACC4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1927u);
    ctx.gpr[31] = (0x08A6ACE0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6ACE0u) goto L_08A6ACE0;
    return;
L_08A6ACE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AC50;
      }
      goto L_08A6ACE8;
    }
L_08A6ACE8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1931u);
    ctx.gpr[31] = (0x08A6AD04u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AD04u) goto L_08A6AD04;
    return;
L_08A6AD04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AC50;
      }
      goto L_08A6AD0C;
    }
L_08A6AD0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1933u);
    ctx.gpr[31] = (0x08A6AD28u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AD28u) goto L_08A6AD28;
    return;
L_08A6AD28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AC50;
      }
      goto L_08A6AD30;
    }
L_08A6AD30:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1919u);
    ctx.gpr[31] = (0x08A6AD4Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AD4Cu) goto L_08A6AD4C;
    return;
L_08A6AD4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AC50;
      }
      goto L_08A6AD54;
    }
L_08A6AD54:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1923u);
    ctx.gpr[31] = (0x08A6AD70u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AD70u) goto L_08A6AD70;
    return;
L_08A6AD70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AC50;
      }
      goto L_08A6AD78;
    }
L_08A6AD78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1929u);
    ctx.gpr[31] = (0x08A6AD94u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AD94u) goto L_08A6AD94;
    return;
L_08A6AD94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AC50;
      }
      goto L_08A6AD9C;
    }
L_08A6AD9C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6ADB0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A6ADB0u) goto L_08A6ADB0;
    return;
L_08A6ADB0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6ADBC:
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
          goto L_08A6AF64;
      }
      goto L_08A6ADE0;
    }
L_08A6ADE0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30008)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6ADF8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1938u);
    ctx.gpr[31] = (0x08A6AE14u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AE14u) goto L_08A6AE14;
    return;
L_08A6AE14:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6AE18;
L_08A6AE18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AF78;
      }
      goto L_08A6AE20;
    }
L_08A6AE20:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1941u);
    ctx.gpr[31] = (0x08A6AE3Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AE3Cu) goto L_08A6AE3C;
    return;
L_08A6AE3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AE18;
      }
      goto L_08A6AE44;
    }
L_08A6AE44:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1945u);
    ctx.gpr[31] = (0x08A6AE60u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AE60u) goto L_08A6AE60;
    return;
L_08A6AE60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AE18;
      }
      goto L_08A6AE68;
    }
L_08A6AE68:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1949u);
    ctx.gpr[31] = (0x08A6AE84u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AE84u) goto L_08A6AE84;
    return;
L_08A6AE84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AE18;
      }
      goto L_08A6AE8C;
    }
L_08A6AE8C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1951u);
    ctx.gpr[31] = (0x08A6AEA8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AEA8u) goto L_08A6AEA8;
    return;
L_08A6AEA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AE18;
      }
      goto L_08A6AEB0;
    }
L_08A6AEB0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1955u);
    ctx.gpr[31] = (0x08A6AECCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AECCu) goto L_08A6AECC;
    return;
L_08A6AECC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AE18;
      }
      goto L_08A6AED4;
    }
L_08A6AED4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1957u);
    ctx.gpr[31] = (0x08A6AEF0u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AEF0u) goto L_08A6AEF0;
    return;
L_08A6AEF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AE18;
      }
      goto L_08A6AEF8;
    }
L_08A6AEF8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1943u);
    ctx.gpr[31] = (0x08A6AF14u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AF14u) goto L_08A6AF14;
    return;
L_08A6AF14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AE18;
      }
      goto L_08A6AF1C;
    }
L_08A6AF1C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1947u);
    ctx.gpr[31] = (0x08A6AF38u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AF38u) goto L_08A6AF38;
    return;
L_08A6AF38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AE18;
      }
      goto L_08A6AF40;
    }
L_08A6AF40:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1953u);
    ctx.gpr[31] = (0x08A6AF5Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AF5Cu) goto L_08A6AF5C;
    return;
L_08A6AF5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AE18;
      }
      goto L_08A6AF64;
    }
L_08A6AF64:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6AF78u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A6AF78u) goto L_08A6AF78;
    return;
L_08A6AF78:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6AF84:
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
          goto L_08A6B12C;
      }
      goto L_08A6AFA8;
    }
L_08A6AFA8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29848)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6AFC0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1962u);
    ctx.gpr[31] = (0x08A6AFDCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AFDCu) goto L_08A6AFDC;
    return;
L_08A6AFDC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6AFE0;
L_08A6AFE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B140;
      }
      goto L_08A6AFE8;
    }
L_08A6AFE8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1965u);
    ctx.gpr[31] = (0x08A6B004u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B004u) goto L_08A6B004;
    return;
L_08A6B004:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AFE0;
      }
      goto L_08A6B00C;
    }
L_08A6B00C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1970u);
    ctx.gpr[31] = (0x08A6B028u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B028u) goto L_08A6B028;
    return;
L_08A6B028:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AFE0;
      }
      goto L_08A6B030;
    }
L_08A6B030:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1974u);
    ctx.gpr[31] = (0x08A6B04Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B04Cu) goto L_08A6B04C;
    return;
L_08A6B04C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AFE0;
      }
      goto L_08A6B054;
    }
L_08A6B054:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1976u);
    ctx.gpr[31] = (0x08A6B070u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B070u) goto L_08A6B070;
    return;
L_08A6B070:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AFE0;
      }
      goto L_08A6B078;
    }
L_08A6B078:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1980u);
    ctx.gpr[31] = (0x08A6B094u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B094u) goto L_08A6B094;
    return;
L_08A6B094:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AFE0;
      }
      goto L_08A6B09C;
    }
L_08A6B09C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1982u);
    ctx.gpr[31] = (0x08A6B0B8u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B0B8u) goto L_08A6B0B8;
    return;
L_08A6B0B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AFE0;
      }
      goto L_08A6B0C0;
    }
L_08A6B0C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1968u);
    ctx.gpr[31] = (0x08A6B0DCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B0DCu) goto L_08A6B0DC;
    return;
L_08A6B0DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AFE0;
      }
      goto L_08A6B0E4;
    }
L_08A6B0E4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1972u);
    ctx.gpr[31] = (0x08A6B100u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B100u) goto L_08A6B100;
    return;
L_08A6B100:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AFE0;
      }
      goto L_08A6B108;
    }
L_08A6B108:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1978u);
    ctx.gpr[31] = (0x08A6B124u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B124u) goto L_08A6B124;
    return;
L_08A6B124:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6AFE0;
      }
      goto L_08A6B12C;
    }
L_08A6B12C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6B140u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A6B140u) goto L_08A6B140;
    return;
L_08A6B140:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B14C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 123 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A6B224;
      }
      goto L_08A6B16C;
    }
L_08A6B16C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 156 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-123));
      if (branch_taken) {
          goto L_08A6B224;
      }
      goto L_08A6B178;
    }
L_08A6B178:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29688)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B190:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2805u);
    ctx.gpr[31] = (0x08A6B1ACu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B1ACu) goto L_08A6B1AC;
    return;
L_08A6B1AC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6B1B0;
L_08A6B1B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B234;
      }
      goto L_08A6B1B8;
    }
L_08A6B1B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2809u);
    ctx.gpr[31] = (0x08A6B1D4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B1D4u) goto L_08A6B1D4;
    return;
L_08A6B1D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B1B0;
      }
      goto L_08A6B1DC;
    }
L_08A6B1DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2811u);
    ctx.gpr[31] = (0x08A6B1F8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B1F8u) goto L_08A6B1F8;
    return;
L_08A6B1F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B1B0;
      }
      goto L_08A6B200;
    }
L_08A6B200:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2814u);
    ctx.gpr[31] = (0x08A6B21Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B21Cu) goto L_08A6B21C;
    return;
L_08A6B21C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B1B0;
      }
      goto L_08A6B224;
    }
L_08A6B224:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A6B234u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A6B234u) goto L_08A6B234;
    return;
L_08A6B234:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B240:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 123 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A6B318;
      }
      goto L_08A6B260;
    }
L_08A6B260:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 156 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-123));
      if (branch_taken) {
          goto L_08A6B318;
      }
      goto L_08A6B26C;
    }
L_08A6B26C:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29552)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B284:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5234u);
    ctx.gpr[31] = (0x08A6B2A0u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B2A0u) goto L_08A6B2A0;
    return;
L_08A6B2A0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6B2A4;
L_08A6B2A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B328;
      }
      goto L_08A6B2AC;
    }
L_08A6B2AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5238u);
    ctx.gpr[31] = (0x08A6B2C8u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B2C8u) goto L_08A6B2C8;
    return;
L_08A6B2C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B2A4;
      }
      goto L_08A6B2D0;
    }
L_08A6B2D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5242u);
    ctx.gpr[31] = (0x08A6B2ECu);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B2ECu) goto L_08A6B2EC;
    return;
L_08A6B2EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B2A4;
      }
      goto L_08A6B2F4;
    }
L_08A6B2F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5247u);
    ctx.gpr[31] = (0x08A6B310u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B310u) goto L_08A6B310;
    return;
L_08A6B310:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B2A4;
      }
      goto L_08A6B318;
    }
L_08A6B318:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A6B328u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A6B328u) goto L_08A6B328;
    return;
L_08A6B328:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B334:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 123 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A6B40C;
      }
      goto L_08A6B354;
    }
L_08A6B354:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 156 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-123));
      if (branch_taken) {
          goto L_08A6B40C;
      }
      goto L_08A6B360;
    }
L_08A6B360:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29416)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B378:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3749u);
    ctx.gpr[31] = (0x08A6B394u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B394u) goto L_08A6B394;
    return;
L_08A6B394:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6B398;
L_08A6B398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B41C;
      }
      goto L_08A6B3A0;
    }
L_08A6B3A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3753u);
    ctx.gpr[31] = (0x08A6B3BCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B3BCu) goto L_08A6B3BC;
    return;
L_08A6B3BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B398;
      }
      goto L_08A6B3C4;
    }
L_08A6B3C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3756u);
    ctx.gpr[31] = (0x08A6B3E0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B3E0u) goto L_08A6B3E0;
    return;
L_08A6B3E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B398;
      }
      goto L_08A6B3E8;
    }
L_08A6B3E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3758u);
    ctx.gpr[31] = (0x08A6B404u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B404u) goto L_08A6B404;
    return;
L_08A6B404:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B398;
      }
      goto L_08A6B40C;
    }
L_08A6B40C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A6B41Cu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A6B41Cu) goto L_08A6B41C;
    return;
L_08A6B41C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B428:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 123 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A6B500;
      }
      goto L_08A6B448;
    }
L_08A6B448:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 156 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-123));
      if (branch_taken) {
          goto L_08A6B500;
      }
      goto L_08A6B454;
    }
L_08A6B454:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29280)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B46C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2290u);
    ctx.gpr[31] = (0x08A6B488u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B488u) goto L_08A6B488;
    return;
L_08A6B488:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6B48C;
L_08A6B48C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B510;
      }
      goto L_08A6B494;
    }
L_08A6B494:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2295u);
    ctx.gpr[31] = (0x08A6B4B0u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B4B0u) goto L_08A6B4B0;
    return;
L_08A6B4B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B48C;
      }
      goto L_08A6B4B8;
    }
L_08A6B4B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2299u);
    ctx.gpr[31] = (0x08A6B4D4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B4D4u) goto L_08A6B4D4;
    return;
L_08A6B4D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B48C;
      }
      goto L_08A6B4DC;
    }
L_08A6B4DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2302u);
    ctx.gpr[31] = (0x08A6B4F8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B4F8u) goto L_08A6B4F8;
    return;
L_08A6B4F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B48C;
      }
      goto L_08A6B500;
    }
L_08A6B500:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A6B510u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A6B510u) goto L_08A6B510;
    return;
L_08A6B510:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B51C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (0u | 155u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A6B59C;
      }
      goto L_08A6B53C;
    }
L_08A6B53C:
    ctx.gpr[7] = (0u | 144u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 123u);
      if (branch_taken) {
          goto L_08A6B578;
      }
      goto L_08A6B548;
    }
L_08A6B548:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A6B5C0;
      }
      goto L_08A6B550;
    }
L_08A6B550:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2281u);
    ctx.gpr[31] = (0x08A6B56Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B56Cu) goto L_08A6B56C;
    return;
L_08A6B56C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6B570;
L_08A6B570:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B5D0;
      }
      goto L_08A6B578;
    }
L_08A6B578:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2278u);
    ctx.gpr[31] = (0x08A6B594u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B594u) goto L_08A6B594;
    return;
L_08A6B594:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B570;
      }
      goto L_08A6B59C;
    }
L_08A6B59C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2284u);
    ctx.gpr[31] = (0x08A6B5B8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B5B8u) goto L_08A6B5B8;
    return;
L_08A6B5B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B570;
      }
      goto L_08A6B5C0;
    }
L_08A6B5C0:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A6B5D0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A6B5D0u) goto L_08A6B5D0;
    return;
L_08A6B5D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B5DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 123 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A6B6B4;
      }
      goto L_08A6B5FC;
    }
L_08A6B5FC:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 156 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-123));
      if (branch_taken) {
          goto L_08A6B6B4;
      }
      goto L_08A6B608;
    }
L_08A6B608:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29144)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B620:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1060u);
    ctx.gpr[31] = (0x08A6B63Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B63Cu) goto L_08A6B63C;
    return;
L_08A6B63C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6B640;
L_08A6B640:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B6C4;
      }
      goto L_08A6B648;
    }
L_08A6B648:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1063u);
    ctx.gpr[31] = (0x08A6B664u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B664u) goto L_08A6B664;
    return;
L_08A6B664:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B640;
      }
      goto L_08A6B66C;
    }
L_08A6B66C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1065u);
    ctx.gpr[31] = (0x08A6B688u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B688u) goto L_08A6B688;
    return;
L_08A6B688:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B640;
      }
      goto L_08A6B690;
    }
L_08A6B690:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1068u);
    ctx.gpr[31] = (0x08A6B6ACu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B6ACu) goto L_08A6B6AC;
    return;
L_08A6B6AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B640;
      }
      goto L_08A6B6B4;
    }
L_08A6B6B4:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A6B6C4u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A6B6C4u) goto L_08A6B6C4;
    return;
L_08A6B6C4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B6D0:
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
          goto L_08A6B878;
      }
      goto L_08A6B6F4;
    }
L_08A6B6F4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29008)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B70C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2838u);
    ctx.gpr[31] = (0x08A6B728u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B728u) goto L_08A6B728;
    return;
L_08A6B728:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6B72C;
L_08A6B72C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B88C;
      }
      goto L_08A6B734;
    }
L_08A6B734:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2842u);
    ctx.gpr[31] = (0x08A6B750u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B750u) goto L_08A6B750;
    return;
L_08A6B750:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B72C;
      }
      goto L_08A6B758;
    }
L_08A6B758:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2846u);
    ctx.gpr[31] = (0x08A6B774u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B774u) goto L_08A6B774;
    return;
L_08A6B774:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B72C;
      }
      goto L_08A6B77C;
    }
L_08A6B77C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2850u);
    ctx.gpr[31] = (0x08A6B798u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B798u) goto L_08A6B798;
    return;
L_08A6B798:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B72C;
      }
      goto L_08A6B7A0;
    }
L_08A6B7A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2852u);
    ctx.gpr[31] = (0x08A6B7BCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B7BCu) goto L_08A6B7BC;
    return;
L_08A6B7BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B72C;
      }
      goto L_08A6B7C4;
    }
L_08A6B7C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2856u);
    ctx.gpr[31] = (0x08A6B7E0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B7E0u) goto L_08A6B7E0;
    return;
L_08A6B7E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B72C;
      }
      goto L_08A6B7E8;
    }
L_08A6B7E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2858u);
    ctx.gpr[31] = (0x08A6B804u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B804u) goto L_08A6B804;
    return;
L_08A6B804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B72C;
      }
      goto L_08A6B80C;
    }
L_08A6B80C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2844u);
    ctx.gpr[31] = (0x08A6B828u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B828u) goto L_08A6B828;
    return;
L_08A6B828:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B72C;
      }
      goto L_08A6B830;
    }
L_08A6B830:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2848u);
    ctx.gpr[31] = (0x08A6B84Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B84Cu) goto L_08A6B84C;
    return;
L_08A6B84C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B72C;
      }
      goto L_08A6B854;
    }
L_08A6B854:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2854u);
    ctx.gpr[31] = (0x08A6B870u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B870u) goto L_08A6B870;
    return;
L_08A6B870:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B72C;
      }
      goto L_08A6B878;
    }
L_08A6B878:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6B88Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A6B88Cu) goto L_08A6B88C;
    return;
L_08A6B88C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B898:
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
          goto L_08A6B9F8;
      }
      goto L_08A6B8BC;
    }
L_08A6B8BC:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28848)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B8D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 392u);
    ctx.gpr[31] = (0x08A6B8F0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B8F0u) goto L_08A6B8F0;
    return;
L_08A6B8F0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6B8F4;
L_08A6B8F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BA0C;
      }
      goto L_08A6B8FC;
    }
L_08A6B8FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 395u);
    ctx.gpr[31] = (0x08A6B918u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B918u) goto L_08A6B918;
    return;
L_08A6B918:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B8F4;
      }
      goto L_08A6B920;
    }
L_08A6B920:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 401u);
    ctx.gpr[31] = (0x08A6B93Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B93Cu) goto L_08A6B93C;
    return;
L_08A6B93C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B8F4;
      }
      goto L_08A6B944;
    }
L_08A6B944:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 405u);
    ctx.gpr[31] = (0x08A6B960u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B960u) goto L_08A6B960;
    return;
L_08A6B960:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B8F4;
      }
      goto L_08A6B968;
    }
L_08A6B968:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 408u);
    ctx.gpr[31] = (0x08A6B984u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B984u) goto L_08A6B984;
    return;
L_08A6B984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B8F4;
      }
      goto L_08A6B98C;
    }
L_08A6B98C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 399u);
    ctx.gpr[31] = (0x08A6B9A8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B9A8u) goto L_08A6B9A8;
    return;
L_08A6B9A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B8F4;
      }
      goto L_08A6B9B0;
    }
L_08A6B9B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 403u);
    ctx.gpr[31] = (0x08A6B9CCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B9CCu) goto L_08A6B9CC;
    return;
L_08A6B9CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B8F4;
      }
      goto L_08A6B9D4;
    }
L_08A6B9D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 410u);
    ctx.gpr[31] = (0x08A6B9F0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B9F0u) goto L_08A6B9F0;
    return;
L_08A6B9F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6B8F4;
      }
      goto L_08A6B9F8;
    }
L_08A6B9F8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6BA0Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A6BA0Cu) goto L_08A6BA0C;
    return;
L_08A6BA0C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BA18:
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
          goto L_08A6BB9C;
      }
      goto L_08A6BA3C;
    }
L_08A6BA3C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28688)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BA54:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 434u);
    ctx.gpr[31] = (0x08A6BA70u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BA70u) goto L_08A6BA70;
    return;
L_08A6BA70:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6BA74;
L_08A6BA74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BBB0;
      }
      goto L_08A6BA7C;
    }
L_08A6BA7C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 413u);
    ctx.gpr[31] = (0x08A6BA98u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BA98u) goto L_08A6BA98;
    return;
L_08A6BA98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BA74;
      }
      goto L_08A6BAA0;
    }
L_08A6BAA0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 416u);
    ctx.gpr[31] = (0x08A6BABCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BABCu) goto L_08A6BABC;
    return;
L_08A6BABC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BA74;
      }
      goto L_08A6BAC4;
    }
L_08A6BAC4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 421u);
    ctx.gpr[31] = (0x08A6BAE0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BAE0u) goto L_08A6BAE0;
    return;
L_08A6BAE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BA74;
      }
      goto L_08A6BAE8;
    }
L_08A6BAE8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 426u);
    ctx.gpr[31] = (0x08A6BB04u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BB04u) goto L_08A6BB04;
    return;
L_08A6BB04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BA74;
      }
      goto L_08A6BB0C;
    }
L_08A6BB0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 429u);
    ctx.gpr[31] = (0x08A6BB28u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BB28u) goto L_08A6BB28;
    return;
L_08A6BB28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BA74;
      }
      goto L_08A6BB30;
    }
L_08A6BB30:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 419u);
    ctx.gpr[31] = (0x08A6BB4Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BB4Cu) goto L_08A6BB4C;
    return;
L_08A6BB4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BA74;
      }
      goto L_08A6BB54;
    }
L_08A6BB54:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 424u);
    ctx.gpr[31] = (0x08A6BB70u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BB70u) goto L_08A6BB70;
    return;
L_08A6BB70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BA74;
      }
      goto L_08A6BB78;
    }
L_08A6BB78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 431u);
    ctx.gpr[31] = (0x08A6BB94u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BB94u) goto L_08A6BB94;
    return;
L_08A6BB94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BA74;
      }
      goto L_08A6BB9C;
    }
L_08A6BB9C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6BBB0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A6BBB0u) goto L_08A6BBB0;
    return;
L_08A6BBB0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BBBC:
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
          goto L_08A6BD1C;
      }
      goto L_08A6BBE0;
    }
L_08A6BBE0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28528)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BBF8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1986u);
    ctx.gpr[31] = (0x08A6BC14u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BC14u) goto L_08A6BC14;
    return;
L_08A6BC14:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6BC18;
L_08A6BC18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BD30;
      }
      goto L_08A6BC20;
    }
L_08A6BC20:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1989u);
    ctx.gpr[31] = (0x08A6BC3Cu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BC3Cu) goto L_08A6BC3C;
    return;
L_08A6BC3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BC18;
      }
      goto L_08A6BC44;
    }
L_08A6BC44:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1994u);
    ctx.gpr[31] = (0x08A6BC60u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BC60u) goto L_08A6BC60;
    return;
L_08A6BC60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BC18;
      }
      goto L_08A6BC68;
    }
L_08A6BC68:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1998u);
    ctx.gpr[31] = (0x08A6BC84u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BC84u) goto L_08A6BC84;
    return;
L_08A6BC84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BC18;
      }
      goto L_08A6BC8C;
    }
L_08A6BC8C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2001u);
    ctx.gpr[31] = (0x08A6BCA8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BCA8u) goto L_08A6BCA8;
    return;
L_08A6BCA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BC18;
      }
      goto L_08A6BCB0;
    }
L_08A6BCB0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1992u);
    ctx.gpr[31] = (0x08A6BCCCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BCCCu) goto L_08A6BCCC;
    return;
L_08A6BCCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BC18;
      }
      goto L_08A6BCD4;
    }
L_08A6BCD4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1996u);
    ctx.gpr[31] = (0x08A6BCF0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BCF0u) goto L_08A6BCF0;
    return;
L_08A6BCF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BC18;
      }
      goto L_08A6BCF8;
    }
L_08A6BCF8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2003u);
    ctx.gpr[31] = (0x08A6BD14u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BD14u) goto L_08A6BD14;
    return;
L_08A6BD14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BC18;
      }
      goto L_08A6BD1C;
    }
L_08A6BD1C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6BD30u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A6BD30u) goto L_08A6BD30;
    return;
L_08A6BD30:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BD3C:
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
          goto L_08A6BE9C;
      }
      goto L_08A6BD60;
    }
L_08A6BD60:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28368)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BD78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2010u);
    ctx.gpr[31] = (0x08A6BD94u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BD94u) goto L_08A6BD94;
    return;
L_08A6BD94:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6BD98;
L_08A6BD98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BEB0;
      }
      goto L_08A6BDA0;
    }
L_08A6BDA0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2013u);
    ctx.gpr[31] = (0x08A6BDBCu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BDBCu) goto L_08A6BDBC;
    return;
L_08A6BDBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BD98;
      }
      goto L_08A6BDC4;
    }
L_08A6BDC4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2019u);
    ctx.gpr[31] = (0x08A6BDE0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BDE0u) goto L_08A6BDE0;
    return;
L_08A6BDE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BD98;
      }
      goto L_08A6BDE8;
    }
L_08A6BDE8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2023u);
    ctx.gpr[31] = (0x08A6BE04u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BE04u) goto L_08A6BE04;
    return;
L_08A6BE04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BD98;
      }
      goto L_08A6BE0C;
    }
L_08A6BE0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2026u);
    ctx.gpr[31] = (0x08A6BE28u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BE28u) goto L_08A6BE28;
    return;
L_08A6BE28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BD98;
      }
      goto L_08A6BE30;
    }
L_08A6BE30:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2017u);
    ctx.gpr[31] = (0x08A6BE4Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BE4Cu) goto L_08A6BE4C;
    return;
L_08A6BE4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BD98;
      }
      goto L_08A6BE54;
    }
L_08A6BE54:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2021u);
    ctx.gpr[31] = (0x08A6BE70u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BE70u) goto L_08A6BE70;
    return;
L_08A6BE70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BD98;
      }
      goto L_08A6BE78;
    }
L_08A6BE78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2028u);
    ctx.gpr[31] = (0x08A6BE94u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BE94u) goto L_08A6BE94;
    return;
L_08A6BE94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BD98;
      }
      goto L_08A6BE9C;
    }
L_08A6BE9C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6BEB0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A6BEB0u) goto L_08A6BEB0;
    return;
L_08A6BEB0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BEBC:
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
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 5u, 0x08A6C040u>(ctx, &aot_mem); return;
      }
      goto L_08A6BEE0;
    }
L_08A6BEE0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28208)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BEF8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 624u);
    ctx.gpr[31] = (0x08A6BF14u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BF14u) goto L_08A6BF14;
    return;
L_08A6BF14:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6BF18;
L_08A6BF18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 6u, 0x08A6C054u>(ctx, &aot_mem); return;
      }
      goto L_08A6BF20;
    }
L_08A6BF20:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 639u);
    ctx.gpr[31] = (0x08A6BF3Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BF3Cu) goto L_08A6BF3C;
    return;
L_08A6BF3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BF18;
      }
      goto L_08A6BF44;
    }
L_08A6BF44:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 642u);
    ctx.gpr[31] = (0x08A6BF60u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BF60u) goto L_08A6BF60;
    return;
L_08A6BF60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BF18;
      }
      goto L_08A6BF68;
    }
L_08A6BF68:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 636u);
    ctx.gpr[31] = (0x08A6BF84u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BF84u) goto L_08A6BF84;
    return;
L_08A6BF84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BF18;
      }
      goto L_08A6BF8C;
    }
L_08A6BF8C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 631u);
    ctx.gpr[31] = (0x08A6BFA8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BFA8u) goto L_08A6BFA8;
    return;
L_08A6BFA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BF18;
      }
      goto L_08A6BFB0;
    }
L_08A6BFB0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 627u);
    ctx.gpr[31] = (0x08A6BFCCu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BFCCu) goto L_08A6BFCC;
    return;
L_08A6BFCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BF18;
      }
      goto L_08A6BFD4;
    }
L_08A6BFD4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 634u);
    ctx.gpr[31] = (0x08A6BFF0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BFF0u) goto L_08A6BFF0;
    return;
L_08A6BFF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6BF18;
      }
      goto L_08A6BFF8;
    }
L_08A6BFF8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = 0x08A6C000u; return;
}

void recomp_unit_0153(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0153_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_153(Runtime &runtime) {
    runtime.register_generated_unit(153u, 0x08A68000u, 16384u, &recomp_unit_0153, &recomp_unit_0153_entry);
    runtime.register_function(0x08A68000u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6801Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68024u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68040u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68048u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68064u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6806Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68088u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68090u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A680ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A680B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A680D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A680D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A680F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A680FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68118u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68120u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6813Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68144u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68158u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68164u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68188u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A681A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A681BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A681C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A681C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A681E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A681ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68208u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68210u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6822Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68234u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68250u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68258u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68274u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6827Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68298u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A682A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A682BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A682C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A682E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A682E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68304u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6830Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68328u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68330u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6834Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68354u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68370u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68378u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6838Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68398u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A683BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A683D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A683F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A683F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A683FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68418u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68420u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6843Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68444u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68460u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68468u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68484u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6848Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A684A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A684B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A684CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A684D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A684F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A684F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68514u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6851Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68538u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68540u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6855Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68564u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68580u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68588u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A685A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A685ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A685C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A685D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A685ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A685F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68610u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68618u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6862Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68638u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6865Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68674u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68690u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68694u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6869Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A686B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A686C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A686DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A686E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68700u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68708u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68724u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6872Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68748u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68750u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6876Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68774u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68790u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68798u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A687B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A687BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A687D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A687E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A687FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68804u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68820u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68828u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68844u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6884Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68868u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68870u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68880u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68890u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A688A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A688B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A688D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A688ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68908u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6890Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68914u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68930u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68938u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68954u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6895Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68978u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68980u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6899Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A689A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A689C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A689C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A689E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A689ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A08u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A2Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A34u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A50u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A58u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A74u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68AA0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68AB0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68ACCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68AD4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68AF0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68AF8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B0Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B54u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B70u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B74u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68BA0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68BBCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68BC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68BE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68BE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C0Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C28u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C30u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C4Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C54u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C70u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C94u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C9Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68CB8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68CC0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68CDCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68CE4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68CF4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D2Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D38u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D5Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D74u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D90u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D94u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D9Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68DB8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68DC0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68DDCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68DE4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E00u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E08u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E24u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E2Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E48u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E50u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E6Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E74u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E90u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68EB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68EBCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68ED8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68EE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68EFCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F14u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F30u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F38u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F48u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F5Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F68u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F8Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68FA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68FC0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68FC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68FCCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68FE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68FF0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6900Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69014u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69030u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69038u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69054u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6905Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69078u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69080u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6909Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A690A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A690C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A690C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A690E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A690ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69108u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69110u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69120u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69130u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69144u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69150u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69158u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69160u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69184u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6919Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A691B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A691BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A691C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A691E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A691E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69204u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6920Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69228u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69230u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6924Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69254u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69270u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69278u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69294u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6929Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A692B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A692C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A692DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A692E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69300u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69308u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6931Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69328u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6934Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69364u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69380u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69384u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6938Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A693A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A693B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A693CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A693D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A693F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A693F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69414u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6941Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69438u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69440u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6945Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69464u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69480u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69488u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A694A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A694ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A694C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A694D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A694E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A694F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69514u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6952Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69548u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6954Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69554u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69570u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69578u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69594u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6959Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A695B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A695C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A695DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A695E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69600u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69608u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69624u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6962Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69648u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69650u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6966Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69674u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69688u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69694u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A696B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A696D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A696ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A696F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A696F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69714u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6971Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69738u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69740u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6975Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69764u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69780u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69788u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A697A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A697ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A697C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A697D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A697ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A697F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69810u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69818u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69834u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6983Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69850u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6985Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69880u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69898u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69900u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69908u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69924u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6992Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69948u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69950u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6996Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69974u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69990u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69998u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A699B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A699BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A699D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A699E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A699FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A24u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A48u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A80u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A88u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69AA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69AACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69AC8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69AD0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69AECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69AF4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B34u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B58u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69BA0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69BA8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69BC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69BCCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69BE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69BECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C28u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C44u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C48u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C50u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C6Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C74u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C90u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69CB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69CBCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69CD8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69CE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69CFCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D20u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D28u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D44u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D4Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D68u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D70u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D8Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D94u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69DA8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69DB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69DD8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69DF0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E0Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E34u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E58u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69EA0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69EA8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69EC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69ECCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69EE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69EF0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F0Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F14u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F30u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F38u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F54u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F5Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F70u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69FA0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69FB8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69FD4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69FD8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69FE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69FFCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A004u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A020u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A028u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A044u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A04Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A068u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A070u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A08Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A094u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A0B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A0B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A0D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A0DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A0F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A100u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A11Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A124u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A138u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A144u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A168u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A180u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A19Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A1A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A1A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A1C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A1CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A1E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A1F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A20Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A214u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A230u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A238u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A254u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A25Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A278u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A280u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A29Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A2A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A2C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A2C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A2E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A2ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A300u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A30Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A330u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A348u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A364u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A368u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A370u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A38Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A394u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A3B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A3B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A3D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A3DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A3F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A400u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A41Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A424u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A440u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A448u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A464u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A46Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A488u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A490u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A4ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A4B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A4C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A4D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A4F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A510u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A52Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A530u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A538u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A554u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A55Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A578u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A580u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A59Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A5A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A5C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A5C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A5E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A5ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A608u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A610u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A62Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A634u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A650u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A658u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A674u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A67Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A690u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A69Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A6C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A6D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A6F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A6F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A700u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A71Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A724u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A740u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A748u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A764u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A76Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A788u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A790u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A7ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A7B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A7D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A7D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A7F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A7FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A818u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A820u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A83Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A844u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A858u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A864u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A888u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A8A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A8BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A8C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A8C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A8E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A8ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A908u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A910u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A92Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A934u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A950u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A958u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A974u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A97Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A998u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A9A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A9BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A9C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A9E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A9E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA0Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA20u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA2Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA50u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA68u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA88u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA90u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AAACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AAB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AAD0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AAD8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AAF4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AAFCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB20u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB44u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB68u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB8Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ABA8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ABB0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ABCCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ABD4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ABE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ABF4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC30u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC4Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC50u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC58u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC74u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ACA0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ACBCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ACC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ACE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ACE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD0Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD28u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD30u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD4Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD54u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD70u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD94u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD9Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ADB0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ADBCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ADE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ADF8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE14u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE20u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE44u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE68u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE8Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AEA8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AEB0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AECCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AED4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AEF0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AEF8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF14u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF1Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF38u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF40u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF5Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF64u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AFA8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AFC0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AFDCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AFE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AFE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B004u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B00Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B028u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B030u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B04Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B054u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B070u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B078u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B094u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B09Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B0B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B0C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B0DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B0E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B100u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B108u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B124u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B12Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B140u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B14Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B16Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B178u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B190u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B1ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B1B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B1B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B1D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B1DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B1F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B200u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B21Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B224u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B234u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B240u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B260u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B26Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B284u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B2A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B2A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B2ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B2C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B2D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B2ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B2F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B310u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B318u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B328u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B334u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B354u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B360u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B378u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B394u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B398u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B3A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B3BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B3C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B3E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B3E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B404u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B40Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B41Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B428u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B448u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B454u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B46Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B488u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B48Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B494u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B4B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B4B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B4D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B4DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B4F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B500u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B510u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B51Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B53Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B548u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B550u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B56Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B570u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B578u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B594u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B59Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B608u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B620u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B63Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B640u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B648u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B664u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B66Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B688u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B690u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B6ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B6B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B6C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B6D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B6F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B70Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B728u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B72Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B734u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B750u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B758u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B774u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B77Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B798u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B7A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B7BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B7C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B7E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B7E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B804u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B80Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B828u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B830u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B84Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B854u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B870u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B878u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B88Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B898u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B918u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B920u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B93Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B944u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B960u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B968u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B984u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B98Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA0Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA54u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA70u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA74u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BAA0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BABCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BAC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BAE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BAE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB0Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB28u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB30u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB4Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB54u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB70u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB94u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB9Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BBB0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BBBCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BBE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BBF8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC14u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC20u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC44u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC68u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC8Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BCA8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BCB0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BCCCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BCD4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BCF0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BCF8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD14u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD1Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD30u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD94u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BDA0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BDBCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BDC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BDE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BDE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE0Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE28u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE30u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE4Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE54u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE70u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE94u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE9Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BEB0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BEBCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BEE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BEF8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF14u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF20u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF44u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF68u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF8Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFA8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFB0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFCCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFD4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFF0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFF8u, &recomp_unit_0153, "recomp_unit_0153");
}
} // namespace psprecomp
