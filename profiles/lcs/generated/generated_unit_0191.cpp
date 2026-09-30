#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0191[4092] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 8, 0, 0,
    0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 13, 0, 0, 14,
    0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0,
    0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0,
    0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0,
    0, 33, 0, 34, 0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0,
    45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51,
    0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0,
    58, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0,
    0, 0, 64, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 76, 0, 0, 77,
    0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0,
    0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0,
    0, 99, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 105, 0, 0, 106, 0, 107,
    0, 108, 0, 0, 0, 0, 109, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 0, 119, 0, 120, 0, 121, 0,
    0, 0, 0, 0, 122, 0, 0, 123, 124, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129,
    0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 135, 136, 0, 0, 137, 0, 0, 138, 0,
    0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 142,
    0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 0,
    0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 158, 0, 0, 159,
    0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 162, 163, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 169,
    170, 0, 0, 0, 171, 0, 172, 0, 173, 0, 0, 174, 0, 0, 0, 175, 0, 176, 177, 0, 178, 179, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 184, 0, 185, 0, 186, 0, 187, 0, 0, 0, 188, 0, 189, 0, 0, 0, 190,
    0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0,
    201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221,
    0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 0, 225, 0, 0, 226, 0, 227, 228, 0, 229, 0, 0, 0, 230, 0, 0, 231,
    0, 232, 0, 233, 0, 234, 0, 0, 0, 235, 0, 0, 236, 0, 237, 238, 0, 239, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242,
    0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 250, 0,
    251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 256, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0,
    0, 0, 259, 0, 0, 0, 260, 0, 0, 261, 0, 262, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0,
    0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0,
    274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 277, 0, 278, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0,
    0, 281, 282, 0, 283, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 289, 290, 0, 291, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 294, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0,
    0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0,
    0, 302, 303, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0,
    311, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0,
    0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 322, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 326, 0, 327, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0,
    0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0,
    0, 0, 333, 0, 334, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 339, 340, 0, 0, 341, 0, 0, 342, 0, 343,
    0, 344, 0, 0, 345, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0,
    356, 0, 357, 0, 358, 359, 0, 360, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 365, 0, 0, 0, 366, 0, 0,
    0, 0, 0, 0, 367, 368, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 374, 0, 0, 0, 0,
    375, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 379, 0, 380, 381, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 384,
    0, 0, 0, 0, 385, 0, 0, 386, 387, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 392,
    0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0,
    396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 399, 0, 0, 400, 0, 401, 0, 0, 402, 0, 403, 0, 0, 404, 0, 405, 0, 0, 406, 0,
    407, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 411, 412, 0, 413, 0, 414, 0, 0, 0, 415, 0, 416, 0, 0, 0, 417, 0, 418,
    419, 0, 0, 420, 0, 421, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 426,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 431, 0, 432, 0, 0,
    433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 436, 0, 0, 437, 0, 438, 0, 439, 0, 0, 0, 440, 0, 0, 441, 0, 442, 443,
    0, 444, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0,
    449, 0, 0, 0, 450, 0, 451, 0, 452, 0, 453, 0, 454, 0, 0, 455, 0, 456, 0, 457, 0, 458, 0, 459, 0, 0, 460, 0, 461, 0, 462, 0,
    463, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 466, 467, 0, 468, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0,
    0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0,
    0, 0, 0, 0, 482, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 490, 0, 491, 492, 0, 0, 0, 0, 493, 0, 494, 0, 495, 0, 496, 0, 0, 0, 0, 497, 0, 0, 498, 0, 499, 500, 0,
    0, 0, 501, 0, 0, 502, 0, 503, 0, 504, 0, 0, 0, 505, 0, 0, 506, 0, 507, 0, 0, 0, 508, 0, 0, 509, 0, 510, 511, 0, 0, 0,
    512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0,
    517, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 520, 521, 0, 0, 0,
    0, 0, 0, 522, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0,
    525, 0, 0, 0, 0, 0, 526, 0, 527, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0,
    0, 0, 533, 0, 534, 0, 535, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 539, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 541, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 549, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 0, 0, 0, 0, 0, 558, 0,
    0, 559, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 561, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0,
    568, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 573, 0, 0, 0,
    0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0,
    0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0, 582, 0, 0, 583,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0,
    586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 590, 591, 0, 0, 0, 592, 0, 0, 593, 0, 0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 596, 0, 597, 0, 0, 598, 0,
    0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 602, 0, 603, 0, 0, 604, 0, 0, 0, 0, 0, 0, 605, 0,
    0, 0, 0, 0, 0, 606, 0, 607, 0, 608, 0, 0, 609, 0, 610, 611, 0, 612, 0, 613, 0, 0, 0, 0, 614, 0, 0, 615, 0, 0, 0, 616,
    0, 0, 617, 0, 618, 0, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 625, 0, 626, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 629, 0, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 0,
    0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0, 0, 636, 0, 637, 0, 638,
    0, 639, 640, 0, 641, 0, 642, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 644, 0, 0, 645, 0, 0, 0, 646, 0, 0, 647, 0, 648, 649,
    0, 650, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0,
    0, 657, 0, 0, 0, 658, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 660, 0, 661, 0, 662, 663, 0, 664, 0, 0, 0, 0, 0, 0, 665, 0,
    0, 0, 0, 666, 0, 0, 667, 0, 0, 668, 0, 669, 0, 0, 0, 0, 670, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 673, 0, 0,
    674, 0, 675, 676, 0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 679, 0, 0, 680, 0, 0, 0, 681, 0, 0, 682, 0, 683, 684, 0, 0, 685, 0,
    0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 690, 691, 0, 0, 0, 692, 0, 0, 0, 0, 693,
    0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 695, 696, 0, 0, 697, 0, 698, 0, 0, 699, 0, 700, 0, 0, 701, 0, 702, 0, 0, 703, 0, 704,
    0, 705, 0, 0, 0, 0, 0, 0, 0, 706, 0, 707, 0, 708, 709, 0, 710, 0, 711, 0, 0, 0, 712, 0, 713, 0, 0, 0, 714, 0, 715, 716,
    0, 0, 717, 0, 718, 0, 719, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 721, 0, 722, 0, 723, 0, 0, 0, 724, 0, 0, 725, 726,
    0, 727, 0, 728, 0, 0, 0, 0, 729, 0, 0, 0, 0, 730, 0, 0, 0, 731, 0, 0, 0, 732, 0, 0, 733, 0, 734, 0, 0, 0, 735, 0,
    736, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738,
    0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 741, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743,
    0, 0, 744, 0, 0, 0, 745, 0, 0, 0, 746, 747, 0, 748, 749, 0, 0, 0, 0, 750, 0, 0, 751, 0, 0, 0, 752, 0, 0, 0, 753, 754,
    0, 755, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 758, 0, 0, 0, 0, 0, 0, 0, 759, 760, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 763, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    765, 766, 0, 0, 0, 0, 0, 767, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 769, 0, 0, 770, 0, 771, 772, 0, 0, 0, 0, 0, 0, 0,
    0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 776, 0, 777, 0, 0, 0, 0, 0, 0,
    0, 778, 0, 0, 0, 0, 779, 0, 0, 0, 0, 780, 0, 0, 0, 781, 0, 0, 782, 0, 0, 783, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0,
    0, 785, 0, 0, 0, 0, 0, 786, 0, 0, 0, 787, 0, 788, 0, 0, 0, 0, 789, 0, 0, 0, 0, 790, 0, 0, 0, 791, 0, 0, 792, 0,
    0, 793, 0, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 0, 795, 796, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    798, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 0, 0, 0, 800, 0, 0, 801, 802, 0, 803, 0, 804,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 806, 0, 807, 0, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 810, 0, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 812, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 815, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 818, 0,
    819, 0, 0, 0, 820, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 823, 0, 0, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 825, 0, 826, 0, 0, 0, 0, 0, 0, 827, 0, 828, 0, 0, 829, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 831, 0, 832, 0, 0,
    0, 0, 0, 0, 833, 0, 834, 0, 0, 0, 835, 0, 0, 836, 0, 0, 0, 837, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 838, 0, 0,
    0, 0, 0, 0, 0, 0, 839, 0, 840, 0, 0, 0, 841, 0, 0, 842, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 845, 0, 0, 0, 0, 846, 0, 0, 0, 0, 0, 0, 847, 0, 848, 0, 0, 0, 0, 0, 0, 849, 0, 850, 0, 0,
    851, 0, 0, 852, 0, 0, 0, 0, 0, 0, 853, 0, 854, 0, 855, 0, 0, 0, 856, 0, 0, 0, 0, 0, 0, 0, 0, 0, 857, 0, 0, 0,
    0, 858, 0, 0, 0, 0, 0, 0, 859, 0, 860, 0, 0, 0, 0, 0, 0, 861, 0, 862, 0, 863, 0, 0, 864, 0, 0, 0, 865, 0, 0, 866,
    0, 0, 0, 0, 0, 0, 0, 867, 0, 0, 0, 0, 868, 869, 0, 0, 0, 0, 0, 0, 870, 871, 0, 0, 0, 872, 0, 873,
};
void recomp_unit_0191_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B00000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0191[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B00000;
    case 2u: goto L_08B00010;
    case 3u: goto L_08B0002C;
    case 4u: goto L_08B00034;
    case 5u: goto L_08B00050;
    case 6u: goto L_08B00058;
    case 7u: goto L_08B00068;
    case 8u: goto L_08B00074;
    case 9u: goto L_08B00084;
    case 10u: goto L_08B000B4;
    case 11u: goto L_08B000D8;
    case 12u: goto L_08B000E0;
    case 13u: goto L_08B000F0;
    case 14u: goto L_08B000FC;
    case 15u: goto L_08B00108;
    case 16u: goto L_08B00130;
    case 17u: goto L_08B00158;
    case 18u: goto L_08B0016C;
    case 19u: goto L_08B00188;
    case 20u: goto L_08B00190;
    case 21u: goto L_08B001AC;
    case 22u: goto L_08B001B4;
    case 23u: goto L_08B001C0;
    case 24u: goto L_08B001CC;
    case 25u: goto L_08B001E8;
    case 26u: goto L_08B001F0;
    case 27u: goto L_08B001F8;
    case 28u: goto L_08B00208;
    case 29u: goto L_08B00230;
    case 30u: goto L_08B00244;
    case 31u: goto L_08B00260;
    case 32u: goto L_08B00268;
    case 33u: goto L_08B00284;
    case 34u: goto L_08B0028C;
    case 35u: goto L_08B00294;
    case 36u: goto L_08B002A0;
    case 37u: goto L_08B002B0;
    case 38u: goto L_08B002BC;
    case 39u: goto L_08B002DC;
    case 40u: goto L_08B00318;
    case 41u: goto L_08B00324;
    case 42u: goto L_08B0034C;
    case 43u: goto L_08B00368;
    case 44u: goto L_08B00370;
    case 45u: goto L_08B00380;
    case 46u: goto L_08B0038C;
    case 47u: goto L_08B003B0;
    case 48u: goto L_08B003BC;
    case 49u: goto L_08B003CC;
    case 50u: goto L_08B003F4;
    case 51u: goto L_08B003FC;
    case 52u: goto L_08B00418;
    case 53u: goto L_08B00420;
    case 54u: goto L_08B0042C;
    case 55u: goto L_08B00440;
    case 56u: goto L_08B0045C;
    case 57u: goto L_08B00464;
    case 58u: goto L_08B00480;
    case 59u: goto L_08B00488;
    case 60u: goto L_08B00498;
    case 61u: goto L_08B004A4;
    case 62u: goto L_08B004B4;
    case 63u: goto L_08B004E4;
    case 64u: goto L_08B00508;
    case 65u: goto L_08B00510;
    case 66u: goto L_08B00520;
    case 67u: goto L_08B0052C;
    case 68u: goto L_08B00538;
    case 69u: goto L_08B00560;
    case 70u: goto L_08B00588;
    case 71u: goto L_08B0059C;
    case 72u: goto L_08B005B8;
    case 73u: goto L_08B005C0;
    case 74u: goto L_08B005DC;
    case 75u: goto L_08B005E4;
    case 76u: goto L_08B005F0;
    case 77u: goto L_08B005FC;
    case 78u: goto L_08B00618;
    case 79u: goto L_08B00620;
    case 80u: goto L_08B00628;
    case 81u: goto L_08B00638;
    case 82u: goto L_08B00660;
    case 83u: goto L_08B00674;
    case 84u: goto L_08B00690;
    case 85u: goto L_08B00698;
    case 86u: goto L_08B006B4;
    case 87u: goto L_08B006BC;
    case 88u: goto L_08B006C4;
    case 89u: goto L_08B006D0;
    case 90u: goto L_08B006E0;
    case 91u: goto L_08B006EC;
    case 92u: goto L_08B0070C;
    case 93u: goto L_08B00728;
    case 94u: goto L_08B00730;
    case 95u: goto L_08B00744;
    case 96u: goto L_08B00754;
    case 97u: goto L_08B0076C;
    case 98u: goto L_08B00778;
    case 99u: goto L_08B00784;
    case 100u: goto L_08B0078C;
    case 101u: goto L_08B00798;
    case 102u: goto L_08B007BC;
    case 103u: goto L_08B007D8;
    case 104u: goto L_08B007E0;
    case 105u: goto L_08B007E8;
    case 106u: goto L_08B007F4;
    case 107u: goto L_08B007FC;
    case 108u: goto L_08B00804;
    case 109u: goto L_08B00818;
    case 110u: goto L_08B0081C;
    case 111u: goto L_08B00824;
    case 112u: goto L_08B0082C;
    case 113u: goto L_08B00834;
    case 114u: goto L_08B0083C;
    case 115u: goto L_08B00844;
    case 116u: goto L_08B0084C;
    case 117u: goto L_08B00854;
    case 118u: goto L_08B0085C;
    case 119u: goto L_08B00868;
    case 120u: goto L_08B00870;
    case 121u: goto L_08B00878;
    case 122u: goto L_08B00890;
    case 123u: goto L_08B0089C;
    case 124u: goto L_08B008A0;
    case 125u: goto L_08B008A8;
    case 126u: goto L_08B008B0;
    case 127u: goto L_08B008CC;
    case 128u: goto L_08B008F0;
    case 129u: goto L_08B008FC;
    case 130u: goto L_08B00904;
    case 131u: goto L_08B00910;
    case 132u: goto L_08B0092C;
    case 133u: goto L_08B00948;
    case 134u: goto L_08B00954;
    case 135u: goto L_08B0095C;
    case 136u: goto L_08B00960;
    case 137u: goto L_08B0096C;
    case 138u: goto L_08B00978;
    case 139u: goto L_08B0098C;
    case 140u: goto L_08B009E0;
    case 141u: goto L_08B009F0;
    case 142u: goto L_08B009FC;
    case 143u: goto L_08B00A04;
    case 144u: goto L_08B00A1C;
    case 145u: goto L_08B00A34;
    case 146u: goto L_08B00A48;
    case 147u: goto L_08B00A58;
    case 148u: goto L_08B00A68;
    case 149u: goto L_08B00A74;
    case 150u: goto L_08B00A88;
    case 151u: goto L_08B00A98;
    case 152u: goto L_08B00AA0;
    case 153u: goto L_08B00AB0;
    case 154u: goto L_08B00ABC;
    case 155u: goto L_08B00AD0;
    case 156u: goto L_08B00ADC;
    case 157u: goto L_08B00AE8;
    case 158u: goto L_08B00AF0;
    case 159u: goto L_08B00AFC;
    case 160u: goto L_08B00B10;
    case 161u: goto L_08B00B20;
    case 162u: goto L_08B00B28;
    case 163u: goto L_08B00B2C;
    case 164u: goto L_08B00B34;
    case 165u: goto L_08B00B44;
    case 166u: goto L_08B00B50;
    case 167u: goto L_08B00B64;
    case 168u: goto L_08B00B74;
    case 169u: goto L_08B00B7C;
    case 170u: goto L_08B00B80;
    case 171u: goto L_08B00B90;
    case 172u: goto L_08B00B98;
    case 173u: goto L_08B00BA0;
    case 174u: goto L_08B00BAC;
    case 175u: goto L_08B00BBC;
    case 176u: goto L_08B00BC4;
    case 177u: goto L_08B00BC8;
    case 178u: goto L_08B00BD0;
    case 179u: goto L_08B00BD4;
    case 180u: goto L_08B00BDC;
    case 181u: goto L_08B00BE4;
    case 182u: goto L_08B00C1C;
    case 183u: goto L_08B00C30;
    case 184u: goto L_08B00C3C;
    case 185u: goto L_08B00C44;
    case 186u: goto L_08B00C4C;
    case 187u: goto L_08B00C54;
    case 188u: goto L_08B00C64;
    case 189u: goto L_08B00C6C;
    case 190u: goto L_08B00C7C;
    case 191u: goto L_08B00C88;
    case 192u: goto L_08B00C94;
    case 193u: goto L_08B00CA0;
    case 194u: goto L_08B00CA8;
    case 195u: goto L_08B00CB4;
    case 196u: goto L_08B00CC4;
    case 197u: goto L_08B00CD0;
    case 198u: goto L_08B00CE0;
    case 199u: goto L_08B00CEC;
    case 200u: goto L_08B00CF8;
    case 201u: goto L_08B00D00;
    case 202u: goto L_08B00D0C;
    case 203u: goto L_08B00D28;
    case 204u: goto L_08B00D30;
    case 205u: goto L_08B00D3C;
    case 206u: goto L_08B00D44;
    case 207u: goto L_08B00D58;
    case 208u: goto L_08B00D70;
    case 209u: goto L_08B00D84;
    case 210u: goto L_08B00DA0;
    case 211u: goto L_08B00DAC;
    case 212u: goto L_08B00DB8;
    case 213u: goto L_08B00DC0;
    case 214u: goto L_08B00DD4;
    case 215u: goto L_08B00DE8;
    case 216u: goto L_08B00DFC;
    case 217u: goto L_08B00E3C;
    case 218u: goto L_08B00E48;
    case 219u: goto L_08B00E54;
    case 220u: goto L_08B00E68;
    case 221u: goto L_08B00E7C;
    case 222u: goto L_08B00E98;
    case 223u: goto L_08B00EA4;
    case 224u: goto L_08B00EB0;
    case 225u: goto L_08B00EC0;
    case 226u: goto L_08B00ECC;
    case 227u: goto L_08B00ED4;
    case 228u: goto L_08B00ED8;
    case 229u: goto L_08B00EE0;
    case 230u: goto L_08B00EF0;
    case 231u: goto L_08B00EFC;
    case 232u: goto L_08B00F04;
    case 233u: goto L_08B00F0C;
    case 234u: goto L_08B00F14;
    case 235u: goto L_08B00F24;
    case 236u: goto L_08B00F30;
    case 237u: goto L_08B00F38;
    case 238u: goto L_08B00F3C;
    case 239u: goto L_08B00F44;
    case 240u: goto L_08B00F4C;
    case 241u: goto L_08B00F60;
    case 242u: goto L_08B00F7C;
    case 243u: goto L_08B00F90;
    case 244u: goto L_08B00F9C;
    case 245u: goto L_08B00FB0;
    case 246u: goto L_08B00FBC;
    case 247u: goto L_08B00FC8;
    case 248u: goto L_08B00FD8;
    case 249u: goto L_08B00FF4;
    case 250u: goto L_08B00FF8;
    case 251u: goto L_08B01000;
    case 252u: goto L_08B0101C;
    case 253u: goto L_08B01030;
    case 254u: goto L_08B0103C;
    case 255u: goto L_08B01048;
    case 256u: goto L_08B01050;
    case 257u: goto L_08B01064;
    case 258u: goto L_08B0106C;
    case 259u: goto L_08B01088;
    case 260u: goto L_08B01098;
    case 261u: goto L_08B010A4;
    case 262u: goto L_08B010AC;
    case 263u: goto L_08B010B0;
    case 264u: goto L_08B010C0;
    case 265u: goto L_08B010D0;
    case 266u: goto L_08B010E0;
    case 267u: goto L_08B010EC;
    case 268u: goto L_08B01108;
    case 269u: goto L_08B01118;
    case 270u: goto L_08B01128;
    case 271u: goto L_08B01154;
    case 272u: goto L_08B01160;
    case 273u: goto L_08B01174;
    case 274u: goto L_08B01180;
    case 275u: goto L_08B01188;
    case 276u: goto L_08B011C0;
    case 277u: goto L_08B011C4;
    case 278u: goto L_08B011CC;
    case 279u: goto L_08B011D8;
    case 280u: goto L_08B011E8;
    case 281u: goto L_08B01204;
    case 282u: goto L_08B01208;
    case 283u: goto L_08B01210;
    case 284u: goto L_08B0121C;
    case 285u: goto L_08B0122C;
    case 286u: goto L_08B0123C;
    case 287u: goto L_08B01258;
    case 288u: goto L_08B01260;
    case 289u: goto L_08B01268;
    case 290u: goto L_08B0126C;
    case 291u: goto L_08B01274;
    case 292u: goto L_08B012A0;
    case 293u: goto L_08B012CC;
    case 294u: goto L_08B012D0;
    case 295u: goto L_08B012E0;
    case 296u: goto L_08B012F4;
    case 297u: goto L_08B01314;
    case 298u: goto L_08B01338;
    case 299u: goto L_08B01344;
    case 300u: goto L_08B01350;
    case 301u: goto L_08B01364;
    case 302u: goto L_08B01384;
    case 303u: goto L_08B01388;
    case 304u: goto L_08B013A0;
    case 305u: goto L_08B013AC;
    case 306u: goto L_08B013B4;
    case 307u: goto L_08B013C0;
    case 308u: goto L_08B013D0;
    case 309u: goto L_08B013EC;
    case 310u: goto L_08B013F8;
    case 311u: goto L_08B01400;
    case 312u: goto L_08B01404;
    case 313u: goto L_08B01418;
    case 314u: goto L_08B01438;
    case 315u: goto L_08B01444;
    case 316u: goto L_08B01458;
    case 317u: goto L_08B01470;
    case 318u: goto L_08B01488;
    case 319u: goto L_08B014B0;
    case 320u: goto L_08B014BC;
    case 321u: goto L_08B014DC;
    case 322u: goto L_08B014E0;
    case 323u: goto L_08B01514;
    case 324u: goto L_08B0152C;
    case 325u: goto L_08B0153C;
    case 326u: goto L_08B01548;
    case 327u: goto L_08B01550;
    case 328u: goto L_08B01560;
    case 329u: goto L_08B01568;
    case 330u: goto L_08B01584;
    case 331u: goto L_08B015E4;
    case 332u: goto L_08B015EC;
    case 333u: goto L_08B01608;
    case 334u: goto L_08B01610;
    case 335u: goto L_08B01620;
    case 336u: goto L_08B0162C;
    case 337u: goto L_08B01640;
    case 338u: goto L_08B0164C;
    case 339u: goto L_08B01658;
    case 340u: goto L_08B0165C;
    case 341u: goto L_08B01668;
    case 342u: goto L_08B01674;
    case 343u: goto L_08B0167C;
    case 344u: goto L_08B01684;
    case 345u: goto L_08B01690;
    case 346u: goto L_08B01694;
    case 347u: goto L_08B0169C;
    case 348u: goto L_08B016E0;
    case 349u: goto L_08B01708;
    case 350u: goto L_08B01724;
    case 351u: goto L_08B01730;
    case 352u: goto L_08B01738;
    case 353u: goto L_08B01750;
    case 354u: goto L_08B0176C;
    case 355u: goto L_08B01778;
    case 356u: goto L_08B01780;
    case 357u: goto L_08B01788;
    case 358u: goto L_08B01790;
    case 359u: goto L_08B01794;
    case 360u: goto L_08B0179C;
    case 361u: goto L_08B017A4;
    case 362u: goto L_08B017B8;
    case 363u: goto L_08B017CC;
    case 364u: goto L_08B017D8;
    case 365u: goto L_08B017E4;
    case 366u: goto L_08B017F4;
    case 367u: goto L_08B01810;
    case 368u: goto L_08B01814;
    case 369u: goto L_08B0181C;
    case 370u: goto L_08B01838;
    case 371u: goto L_08B0184C;
    case 372u: goto L_08B01858;
    case 373u: goto L_08B01864;
    case 374u: goto L_08B0186C;
    case 375u: goto L_08B01880;
    case 376u: goto L_08B01888;
    case 377u: goto L_08B018A4;
    case 378u: goto L_08B018B4;
    case 379u: goto L_08B018C0;
    case 380u: goto L_08B018C8;
    case 381u: goto L_08B018CC;
    case 382u: goto L_08B018DC;
    case 383u: goto L_08B018F0;
    case 384u: goto L_08B018FC;
    case 385u: goto L_08B01910;
    case 386u: goto L_08B0191C;
    case 387u: goto L_08B01920;
    case 388u: goto L_08B0192C;
    case 389u: goto L_08B0193C;
    case 390u: goto L_08B01960;
    case 391u: goto L_08B01970;
    case 392u: goto L_08B0197C;
    case 393u: goto L_08B01994;
    case 394u: goto L_08B01A58;
    case 395u: goto L_08B01A6C;
    case 396u: goto L_08B01A80;
    case 397u: goto L_08B01A8C;
    case 398u: goto L_08B01AAC;
    case 399u: goto L_08B01AB0;
    case 400u: goto L_08B01ABC;
    case 401u: goto L_08B01AC4;
    case 402u: goto L_08B01AD0;
    case 403u: goto L_08B01AD8;
    case 404u: goto L_08B01AE4;
    case 405u: goto L_08B01AEC;
    case 406u: goto L_08B01AF8;
    case 407u: goto L_08B01B00;
    case 408u: goto L_08B01B08;
    case 409u: goto L_08B01B28;
    case 410u: goto L_08B01B30;
    case 411u: goto L_08B01B38;
    case 412u: goto L_08B01B3C;
    case 413u: goto L_08B01B44;
    case 414u: goto L_08B01B4C;
    case 415u: goto L_08B01B5C;
    case 416u: goto L_08B01B64;
    case 417u: goto L_08B01B74;
    case 418u: goto L_08B01B7C;
    case 419u: goto L_08B01B80;
    case 420u: goto L_08B01B8C;
    case 421u: goto L_08B01B94;
    case 422u: goto L_08B01B9C;
    case 423u: goto L_08B01BB0;
    case 424u: goto L_08B01BC8;
    case 425u: goto L_08B01BF4;
    case 426u: goto L_08B01BFC;
    case 427u: goto L_08B01C30;
    case 428u: goto L_08B01C40;
    case 429u: goto L_08B01C58;
    case 430u: goto L_08B01C60;
    case 431u: goto L_08B01C6C;
    case 432u: goto L_08B01C74;
    case 433u: goto L_08B01C80;
    case 434u: goto L_08B01C9C;
    case 435u: goto L_08B01CA8;
    case 436u: goto L_08B01CB8;
    case 437u: goto L_08B01CC4;
    case 438u: goto L_08B01CCC;
    case 439u: goto L_08B01CD4;
    case 440u: goto L_08B01CE4;
    case 441u: goto L_08B01CF0;
    case 442u: goto L_08B01CF8;
    case 443u: goto L_08B01CFC;
    case 444u: goto L_08B01D04;
    case 445u: goto L_08B01D0C;
    case 446u: goto L_08B01D20;
    case 447u: goto L_08B01D44;
    case 448u: goto L_08B01D70;
    case 449u: goto L_08B01D80;
    case 450u: goto L_08B01D90;
    case 451u: goto L_08B01D98;
    case 452u: goto L_08B01DA0;
    case 453u: goto L_08B01DA8;
    case 454u: goto L_08B01DB0;
    case 455u: goto L_08B01DBC;
    case 456u: goto L_08B01DC4;
    case 457u: goto L_08B01DCC;
    case 458u: goto L_08B01DD4;
    case 459u: goto L_08B01DDC;
    case 460u: goto L_08B01DE8;
    case 461u: goto L_08B01DF0;
    case 462u: goto L_08B01DF8;
    case 463u: goto L_08B01E00;
    case 464u: goto L_08B01E08;
    case 465u: goto L_08B01E20;
    case 466u: goto L_08B01E2C;
    case 467u: goto L_08B01E30;
    case 468u: goto L_08B01E38;
    case 469u: goto L_08B01E40;
    case 470u: goto L_08B01E5C;
    case 471u: goto L_08B01E8C;
    case 472u: goto L_08B01EB4;
    case 473u: goto L_08B01ED4;
    case 474u: goto L_08B01EE4;
    case 475u: goto L_08B01EF0;
    case 476u: goto L_08B01F04;
    case 477u: goto L_08B01F18;
    case 478u: goto L_08B01F38;
    case 479u: goto L_08B01F54;
    case 480u: goto L_08B01F60;
    case 481u: goto L_08B01F6C;
    case 482u: goto L_08B01F90;
    case 483u: goto L_08B01F98;
    case 484u: goto L_08B01FB4;
    case 485u: goto L_08B01FCC;
    case 486u: goto L_08B01FE0;
    case 487u: goto L_08B02030;
    case 488u: goto L_08B0203C;
    case 489u: goto L_08B02044;
    case 490u: goto L_08B02094;
    case 491u: goto L_08B0209C;
    case 492u: goto L_08B020A0;
    case 493u: goto L_08B020B4;
    case 494u: goto L_08B020BC;
    case 495u: goto L_08B020C4;
    case 496u: goto L_08B020CC;
    case 497u: goto L_08B020E0;
    case 498u: goto L_08B020EC;
    case 499u: goto L_08B020F4;
    case 500u: goto L_08B020F8;
    case 501u: goto L_08B02108;
    case 502u: goto L_08B02114;
    case 503u: goto L_08B0211C;
    case 504u: goto L_08B02124;
    case 505u: goto L_08B02134;
    case 506u: goto L_08B02140;
    case 507u: goto L_08B02148;
    case 508u: goto L_08B02158;
    case 509u: goto L_08B02164;
    case 510u: goto L_08B0216C;
    case 511u: goto L_08B02170;
    case 512u: goto L_08B02180;
    case 513u: goto L_08B0219C;
    case 514u: goto L_08B021B8;
    case 515u: goto L_08B021BC;
    case 516u: goto L_08B021E8;
    case 517u: goto L_08B02200;
    case 518u: goto L_08B0220C;
    case 519u: goto L_08B0225C;
    case 520u: goto L_08B0226C;
    case 521u: goto L_08B02270;
    case 522u: goto L_08B0228C;
    case 523u: goto L_08B02298;
    case 524u: goto L_08B022F0;
    case 525u: goto L_08B02300;
    case 526u: goto L_08B02318;
    case 527u: goto L_08B02320;
    case 528u: goto L_08B02330;
    case 529u: goto L_08B02348;
    case 530u: goto L_08B02374;
    case 531u: goto L_08B023BC;
    case 532u: goto L_08B023F0;
    case 533u: goto L_08B02408;
    case 534u: goto L_08B02410;
    case 535u: goto L_08B02418;
    case 536u: goto L_08B02438;
    case 537u: goto L_08B02474;
    case 538u: goto L_08B024A8;
    case 539u: goto L_08B024B4;
    case 540u: goto L_08B024B8;
    case 541u: goto L_08B0250C;
    case 542u: goto L_08B02514;
    case 543u: goto L_08B02558;
    case 544u: goto L_08B025AC;
    case 545u: goto L_08B025B4;
    case 546u: goto L_08B025D8;
    case 547u: goto L_08B025E4;
    case 548u: goto L_08B02634;
    case 549u: goto L_08B02638;
    case 550u: goto L_08B02654;
    case 551u: goto L_08B026CC;
    case 552u: goto L_08B026D8;
    case 553u: goto L_08B02714;
    case 554u: goto L_08B02728;
    case 555u: goto L_08B02734;
    case 556u: goto L_08B02750;
    case 557u: goto L_08B0275C;
    case 558u: goto L_08B02778;
    case 559u: goto L_08B02784;
    case 560u: goto L_08B027A4;
    case 561u: goto L_08B027B0;
    case 562u: goto L_08B027BC;
    case 563u: goto L_08B02804;
    case 564u: goto L_08B02818;
    case 565u: goto L_08B0284C;
    case 566u: goto L_08B0285C;
    case 567u: goto L_08B02878;
    case 568u: goto L_08B02880;
    case 569u: goto L_08B0288C;
    case 570u: goto L_08B028A0;
    case 571u: goto L_08B028DC;
    case 572u: goto L_08B028E4;
    case 573u: goto L_08B028F0;
    case 574u: goto L_08B0290C;
    case 575u: goto L_08B02948;
    case 576u: goto L_08B02954;
    case 577u: goto L_08B02968;
    case 578u: goto L_08B0298C;
    case 579u: goto L_08B029B8;
    case 580u: goto L_08B029D8;
    case 581u: goto L_08B029E4;
    case 582u: goto L_08B029F0;
    case 583u: goto L_08B029FC;
    case 584u: goto L_08B02A2C;
    case 585u: goto L_08B02A74;
    case 586u: goto L_08B02A80;
    case 587u: goto L_08B02AC0;
    case 588u: goto L_08B02ACC;
    case 589u: goto L_08B02AEC;
    case 590u: goto L_08B02B14;
    case 591u: goto L_08B02B18;
    case 592u: goto L_08B02B28;
    case 593u: goto L_08B02B34;
    case 594u: goto L_08B02B4C;
    case 595u: goto L_08B02B5C;
    case 596u: goto L_08B02B64;
    case 597u: goto L_08B02B6C;
    case 598u: goto L_08B02B78;
    case 599u: goto L_08B02B88;
    case 600u: goto L_08B02B98;
    case 601u: goto L_08B02BBC;
    case 602u: goto L_08B02BC8;
    case 603u: goto L_08B02BD0;
    case 604u: goto L_08B02BDC;
    case 605u: goto L_08B02BF8;
    case 606u: goto L_08B02C14;
    case 607u: goto L_08B02C1C;
    case 608u: goto L_08B02C24;
    case 609u: goto L_08B02C30;
    case 610u: goto L_08B02C38;
    case 611u: goto L_08B02C3C;
    case 612u: goto L_08B02C44;
    case 613u: goto L_08B02C4C;
    case 614u: goto L_08B02C60;
    case 615u: goto L_08B02C6C;
    case 616u: goto L_08B02C7C;
    case 617u: goto L_08B02C88;
    case 618u: goto L_08B02C90;
    case 619u: goto L_08B02CA0;
    case 620u: goto L_08B02CA8;
    case 621u: goto L_08B02CC4;
    case 622u: goto L_08B02D24;
    case 623u: goto L_08B02D2C;
    case 624u: goto L_08B02D64;
    case 625u: goto L_08B02D68;
    case 626u: goto L_08B02D70;
    case 627u: goto L_08B02D9C;
    case 628u: goto L_08B02DC4;
    case 629u: goto L_08B02DCC;
    case 630u: goto L_08B02DD8;
    case 631u: goto L_08B02DF4;
    case 632u: goto L_08B02E18;
    case 633u: goto L_08B02E34;
    case 634u: goto L_08B02E44;
    case 635u: goto L_08B02E60;
    case 636u: goto L_08B02E6C;
    case 637u: goto L_08B02E74;
    case 638u: goto L_08B02E7C;
    case 639u: goto L_08B02E84;
    case 640u: goto L_08B02E88;
    case 641u: goto L_08B02E90;
    case 642u: goto L_08B02E98;
    case 643u: goto L_08B02EAC;
    case 644u: goto L_08B02EC8;
    case 645u: goto L_08B02ED4;
    case 646u: goto L_08B02EE4;
    case 647u: goto L_08B02EF0;
    case 648u: goto L_08B02EF8;
    case 649u: goto L_08B02EFC;
    case 650u: goto L_08B02F04;
    case 651u: goto L_08B02F10;
    case 652u: goto L_08B02F24;
    case 653u: goto L_08B02F50;
    case 654u: goto L_08B0304C;
    case 655u: goto L_08B030A0;
    case 656u: goto L_08B030F8;
    case 657u: goto L_08B03104;
    case 658u: goto L_08B03114;
    case 659u: goto L_08B03124;
    case 660u: goto L_08B03140;
    case 661u: goto L_08B03148;
    case 662u: goto L_08B03150;
    case 663u: goto L_08B03154;
    case 664u: goto L_08B0315C;
    case 665u: goto L_08B03178;
    case 666u: goto L_08B0318C;
    case 667u: goto L_08B03198;
    case 668u: goto L_08B031A4;
    case 669u: goto L_08B031AC;
    case 670u: goto L_08B031C0;
    case 671u: goto L_08B031C8;
    case 672u: goto L_08B031E4;
    case 673u: goto L_08B031F4;
    case 674u: goto L_08B03200;
    case 675u: goto L_08B03208;
    case 676u: goto L_08B0320C;
    case 677u: goto L_08B0321C;
    case 678u: goto L_08B03230;
    case 679u: goto L_08B03238;
    case 680u: goto L_08B03244;
    case 681u: goto L_08B03254;
    case 682u: goto L_08B03260;
    case 683u: goto L_08B03268;
    case 684u: goto L_08B0326C;
    case 685u: goto L_08B03278;
    case 686u: goto L_08B03288;
    case 687u: goto L_08B032A8;
    case 688u: goto L_08B032B8;
    case 689u: goto L_08B032C8;
    case 690u: goto L_08B032D4;
    case 691u: goto L_08B032D8;
    case 692u: goto L_08B032E8;
    case 693u: goto L_08B032FC;
    case 694u: goto L_08B03308;
    case 695u: goto L_08B03328;
    case 696u: goto L_08B0332C;
    case 697u: goto L_08B03338;
    case 698u: goto L_08B03340;
    case 699u: goto L_08B0334C;
    case 700u: goto L_08B03354;
    case 701u: goto L_08B03360;
    case 702u: goto L_08B03368;
    case 703u: goto L_08B03374;
    case 704u: goto L_08B0337C;
    case 705u: goto L_08B03384;
    case 706u: goto L_08B033A4;
    case 707u: goto L_08B033AC;
    case 708u: goto L_08B033B4;
    case 709u: goto L_08B033B8;
    case 710u: goto L_08B033C0;
    case 711u: goto L_08B033C8;
    case 712u: goto L_08B033D8;
    case 713u: goto L_08B033E0;
    case 714u: goto L_08B033F0;
    case 715u: goto L_08B033F8;
    case 716u: goto L_08B033FC;
    case 717u: goto L_08B03408;
    case 718u: goto L_08B03410;
    case 719u: goto L_08B03418;
    case 720u: goto L_08B03434;
    case 721u: goto L_08B0344C;
    case 722u: goto L_08B03454;
    case 723u: goto L_08B0345C;
    case 724u: goto L_08B0346C;
    case 725u: goto L_08B03478;
    case 726u: goto L_08B0347C;
    case 727u: goto L_08B03484;
    case 728u: goto L_08B0348C;
    case 729u: goto L_08B034A0;
    case 730u: goto L_08B034B4;
    case 731u: goto L_08B034C4;
    case 732u: goto L_08B034D4;
    case 733u: goto L_08B034E0;
    case 734u: goto L_08B034E8;
    case 735u: goto L_08B034F8;
    case 736u: goto L_08B03500;
    case 737u: goto L_08B0351C;
    case 738u: goto L_08B0357C;
    case 739u: goto L_08B03584;
    case 740u: goto L_08B035BC;
    case 741u: goto L_08B035C0;
    case 742u: goto L_08B035C8;
    case 743u: goto L_08B035FC;
    case 744u: goto L_08B03608;
    case 745u: goto L_08B03618;
    case 746u: goto L_08B03628;
    case 747u: goto L_08B0362C;
    case 748u: goto L_08B03634;
    case 749u: goto L_08B03638;
    case 750u: goto L_08B0364C;
    case 751u: goto L_08B03658;
    case 752u: goto L_08B03668;
    case 753u: goto L_08B03678;
    case 754u: goto L_08B0367C;
    case 755u: goto L_08B03684;
    case 756u: goto L_08B03688;
    case 757u: goto L_08B036B4;
    case 758u: goto L_08B036BC;
    case 759u: goto L_08B036DC;
    case 760u: goto L_08B036E0;
    case 761u: goto L_08B03714;
    case 762u: goto L_08B03734;
    case 763u: goto L_08B03740;
    case 764u: goto L_08B03754;
    case 765u: goto L_08B03780;
    case 766u: goto L_08B03784;
    case 767u: goto L_08B0379C;
    case 768u: goto L_08B037AC;
    case 769u: goto L_08B037C8;
    case 770u: goto L_08B037D4;
    case 771u: goto L_08B037DC;
    case 772u: goto L_08B037E0;
    case 773u: goto L_08B03804;
    case 774u: goto L_08B03828;
    case 775u: goto L_08B03854;
    case 776u: goto L_08B0385C;
    case 777u: goto L_08B03864;
    case 778u: goto L_08B03884;
    case 779u: goto L_08B03898;
    case 780u: goto L_08B038AC;
    case 781u: goto L_08B038BC;
    case 782u: goto L_08B038C8;
    case 783u: goto L_08B038D4;
    case 784u: goto L_08B038E4;
    case 785u: goto L_08B03904;
    case 786u: goto L_08B0391C;
    case 787u: goto L_08B0392C;
    case 788u: goto L_08B03934;
    case 789u: goto L_08B03948;
    case 790u: goto L_08B0395C;
    case 791u: goto L_08B0396C;
    case 792u: goto L_08B03978;
    case 793u: goto L_08B03984;
    case 794u: goto L_08B03994;
    case 795u: goto L_08B039B8;
    case 796u: goto L_08B039BC;
    case 797u: goto L_08B039D8;
    case 798u: goto L_08B03A00;
    case 799u: goto L_08B03A3C;
    case 800u: goto L_08B03A5C;
    case 801u: goto L_08B03A68;
    case 802u: goto L_08B03A6C;
    case 803u: goto L_08B03A74;
    case 804u: goto L_08B03A7C;
    case 805u: goto L_08B03AA4;
    case 806u: goto L_08B03AAC;
    case 807u: goto L_08B03AB4;
    case 808u: goto L_08B03AD0;
    case 809u: goto L_08B03AE4;
    case 810u: goto L_08B03B0C;
    case 811u: goto L_08B03B28;
    case 812u: goto L_08B03B3C;
    case 813u: goto L_08B03B4C;
    case 814u: goto L_08B03B6C;
    case 815u: goto L_08B03BA8;
    case 816u: goto L_08B03BB4;
    case 817u: goto L_08B03BDC;
    case 818u: goto L_08B03BF8;
    case 819u: goto L_08B03C00;
    case 820u: goto L_08B03C10;
    case 821u: goto L_08B03C1C;
    case 822u: goto L_08B03C40;
    case 823u: goto L_08B03C4C;
    case 824u: goto L_08B03C5C;
    case 825u: goto L_08B03C84;
    case 826u: goto L_08B03C8C;
    case 827u: goto L_08B03CA8;
    case 828u: goto L_08B03CB0;
    case 829u: goto L_08B03CBC;
    case 830u: goto L_08B03CD0;
    case 831u: goto L_08B03CEC;
    case 832u: goto L_08B03CF4;
    case 833u: goto L_08B03D10;
    case 834u: goto L_08B03D18;
    case 835u: goto L_08B03D28;
    case 836u: goto L_08B03D34;
    case 837u: goto L_08B03D44;
    case 838u: goto L_08B03D74;
    case 839u: goto L_08B03D98;
    case 840u: goto L_08B03DA0;
    case 841u: goto L_08B03DB0;
    case 842u: goto L_08B03DBC;
    case 843u: goto L_08B03DC8;
    case 844u: goto L_08B03DF0;
    case 845u: goto L_08B03E18;
    case 846u: goto L_08B03E2C;
    case 847u: goto L_08B03E48;
    case 848u: goto L_08B03E50;
    case 849u: goto L_08B03E6C;
    case 850u: goto L_08B03E74;
    case 851u: goto L_08B03E80;
    case 852u: goto L_08B03E8C;
    case 853u: goto L_08B03EA8;
    case 854u: goto L_08B03EB0;
    case 855u: goto L_08B03EB8;
    case 856u: goto L_08B03EC8;
    case 857u: goto L_08B03EF0;
    case 858u: goto L_08B03F04;
    case 859u: goto L_08B03F20;
    case 860u: goto L_08B03F28;
    case 861u: goto L_08B03F44;
    case 862u: goto L_08B03F4C;
    case 863u: goto L_08B03F54;
    case 864u: goto L_08B03F60;
    case 865u: goto L_08B03F70;
    case 866u: goto L_08B03F7C;
    case 867u: goto L_08B03F9C;
    case 868u: goto L_08B03FB0;
    case 869u: goto L_08B03FB4;
    case 870u: goto L_08B03FD0;
    case 871u: goto L_08B03FD4;
    case 872u: goto L_08B03FE4;
    case 873u: goto L_08B03FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B00000:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00034;
      }
      goto L_08B00010;
    }
L_08B00010:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B0002Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 628u, 0x08AFEB90u>(ctx, &aot_mem) && ctx.pc == 0x08B0002Cu) goto L_08B0002C;
    return;
L_08B0002C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B002BC;
      }
      goto L_08B00034;
    }
L_08B00034:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B00050u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 628u, 0x08AFEB90u>(ctx, &aot_mem) && ctx.pc == 0x08B00050u) goto L_08B00050;
    return;
L_08B00050:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B002BC;
      }
      goto L_08B00058;
    }
L_08B00058:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B00068u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 658u, 0x08AFEDCCu>(ctx, &aot_mem) && ctx.pc == 0x08B00068u) goto L_08B00068;
    return;
L_08B00068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B002BC;
      }
      goto L_08B00074;
    }
L_08B00074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B000FC;
      }
      goto L_08B00084;
    }
L_08B00084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B000E0;
      }
      goto L_08B000B4;
    }
L_08B000B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B000D8u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 628u, 0x08AFEB90u>(ctx, &aot_mem) && ctx.pc == 0x08B000D8u) goto L_08B000D8;
    return;
L_08B000D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B002BC;
      }
      goto L_08B000E0;
    }
L_08B000E0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B000F0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 658u, 0x08AFEDCCu>(ctx, &aot_mem) && ctx.pc == 0x08B000F0u) goto L_08B000F0;
    return;
L_08B000F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B002BC;
      }
      goto L_08B000FC;
    }
L_08B000FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B00108u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 891u, 0x08AFBD1Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00108u) goto L_08B00108;
    return;
L_08B00108:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B001B4;
      }
      goto L_08B00130;
    }
L_08B00130:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B001B4;
      }
      goto L_08B00158;
    }
L_08B00158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00190;
      }
      goto L_08B0016C;
    }
L_08B0016C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B00188u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 628u, 0x08AFEB90u>(ctx, &aot_mem) && ctx.pc == 0x08B00188u) goto L_08B00188;
    return;
L_08B00188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B002BC;
      }
      goto L_08B00190;
    }
L_08B00190:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B001ACu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 628u, 0x08AFEB90u>(ctx, &aot_mem) && ctx.pc == 0x08B001ACu) goto L_08B001AC;
    return;
L_08B001AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B002BC;
      }
      goto L_08B001B4;
    }
L_08B001B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B001C0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x08B001C0u) goto L_08B001C0;
    return;
L_08B001C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B001E8;
      }
      goto L_08B001CC;
    }
L_08B001CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(110), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    goto L_08B001E8;
L_08B001E8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0028C;
      }
      goto L_08B001F0;
    }
L_08B001F0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0028C;
      }
      goto L_08B001F8;
    }
L_08B001F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B00230;
      }
      goto L_08B00208;
    }
L_08B00208:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0028C;
      }
      goto L_08B00230;
    }
L_08B00230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00268;
      }
      goto L_08B00244;
    }
L_08B00244:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B00260u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 628u, 0x08AFEB90u>(ctx, &aot_mem) && ctx.pc == 0x08B00260u) goto L_08B00260;
    return;
L_08B00260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B002BC;
      }
      goto L_08B00268;
    }
L_08B00268:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B00284u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 628u, 0x08AFEB90u>(ctx, &aot_mem) && ctx.pc == 0x08B00284u) goto L_08B00284;
    return;
L_08B00284:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B002BC;
      }
      goto L_08B0028C;
    }
L_08B0028C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B002A0;
      }
      goto L_08B00294;
    }
L_08B00294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B002BC;
      }
      goto L_08B002A0;
    }
L_08B002A0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B002B0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 658u, 0x08AFEDCCu>(ctx, &aot_mem) && ctx.pc == 0x08B002B0u) goto L_08B002B0;
    return;
L_08B002B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B002BC;
      }
      goto L_08B002BC;
    }
L_08B002BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B002DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B004A4;
      }
      goto L_08B00318;
    }
L_08B00318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00370;
      }
      goto L_08B00324;
    }
L_08B00324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0038C;
      }
      goto L_08B0034C;
    }
L_08B0034C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B00368u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 723u, 0x08AFF260u>(ctx, &aot_mem) && ctx.pc == 0x08B00368u) goto L_08B00368;
    return;
L_08B00368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B006EC;
      }
      goto L_08B00370;
    }
L_08B00370:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B00380u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 761u, 0x08AFF510u>(ctx, &aot_mem) && ctx.pc == 0x08B00380u) goto L_08B00380;
    return;
L_08B00380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B006EC;
      }
      goto L_08B0038C;
    }
L_08B0038C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00420;
      }
      goto L_08B003B0;
    }
L_08B003B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B003BCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x08B003BCu) goto L_08B003BC;
    return;
L_08B003BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B003FC;
      }
      goto L_08B003CC;
    }
L_08B003CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0042C;
      }
      goto L_08B003F4;
    }
L_08B003F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00488;
      }
      goto L_08B003FC;
    }
L_08B003FC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B00418u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 723u, 0x08AFF260u>(ctx, &aot_mem) && ctx.pc == 0x08B00418u) goto L_08B00418;
    return;
L_08B00418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B006EC;
      }
      goto L_08B00420;
    }
L_08B00420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B006EC;
      }
      goto L_08B0042C;
    }
L_08B0042C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00464;
      }
      goto L_08B00440;
    }
L_08B00440:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B0045Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 723u, 0x08AFF260u>(ctx, &aot_mem) && ctx.pc == 0x08B0045Cu) goto L_08B0045C;
    return;
L_08B0045C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B006EC;
      }
      goto L_08B00464;
    }
L_08B00464:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B00480u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 723u, 0x08AFF260u>(ctx, &aot_mem) && ctx.pc == 0x08B00480u) goto L_08B00480;
    return;
L_08B00480:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B006EC;
      }
      goto L_08B00488;
    }
L_08B00488:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B00498u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 761u, 0x08AFF510u>(ctx, &aot_mem) && ctx.pc == 0x08B00498u) goto L_08B00498;
    return;
L_08B00498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B006EC;
      }
      goto L_08B004A4;
    }
L_08B004A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B0052C;
      }
      goto L_08B004B4;
    }
L_08B004B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00510;
      }
      goto L_08B004E4;
    }
L_08B004E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B00508u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 723u, 0x08AFF260u>(ctx, &aot_mem) && ctx.pc == 0x08B00508u) goto L_08B00508;
    return;
L_08B00508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B006EC;
      }
      goto L_08B00510;
    }
L_08B00510:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B00520u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 761u, 0x08AFF510u>(ctx, &aot_mem) && ctx.pc == 0x08B00520u) goto L_08B00520;
    return;
L_08B00520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B006EC;
      }
      goto L_08B0052C;
    }
L_08B0052C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B00538u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 891u, 0x08AFBD1Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00538u) goto L_08B00538;
    return;
L_08B00538:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B005E4;
      }
      goto L_08B00560;
    }
L_08B00560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B005E4;
      }
      goto L_08B00588;
    }
L_08B00588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B005C0;
      }
      goto L_08B0059C;
    }
L_08B0059C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B005B8u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 723u, 0x08AFF260u>(ctx, &aot_mem) && ctx.pc == 0x08B005B8u) goto L_08B005B8;
    return;
L_08B005B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B006EC;
      }
      goto L_08B005C0;
    }
L_08B005C0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B005DCu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 723u, 0x08AFF260u>(ctx, &aot_mem) && ctx.pc == 0x08B005DCu) goto L_08B005DC;
    return;
L_08B005DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B006EC;
      }
      goto L_08B005E4;
    }
L_08B005E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B005F0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x08B005F0u) goto L_08B005F0;
    return;
L_08B005F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B00618;
      }
      goto L_08B005FC;
    }
L_08B005FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(110), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    goto L_08B00618;
L_08B00618:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B006BC;
      }
      goto L_08B00620;
    }
L_08B00620:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B006BC;
      }
      goto L_08B00628;
    }
L_08B00628:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B00660;
      }
      goto L_08B00638;
    }
L_08B00638:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B006BC;
      }
      goto L_08B00660;
    }
L_08B00660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00698;
      }
      goto L_08B00674;
    }
L_08B00674:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B00690u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 723u, 0x08AFF260u>(ctx, &aot_mem) && ctx.pc == 0x08B00690u) goto L_08B00690;
    return;
L_08B00690:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B006EC;
      }
      goto L_08B00698;
    }
L_08B00698:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B006B4u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 723u, 0x08AFF260u>(ctx, &aot_mem) && ctx.pc == 0x08B006B4u) goto L_08B006B4;
    return;
L_08B006B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B006EC;
      }
      goto L_08B006BC;
    }
L_08B006BC:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B006D0;
      }
      goto L_08B006C4;
    }
L_08B006C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B006EC;
      }
      goto L_08B006D0;
    }
L_08B006D0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B006E0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 761u, 0x08AFF510u>(ctx, &aot_mem) && ctx.pc == 0x08B006E0u) goto L_08B006E0;
    return;
L_08B006E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B006EC;
      }
      goto L_08B006EC;
    }
L_08B006EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0070C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20624)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00730;
      }
      goto L_08B00728;
    }
L_08B00728:
    ctx.gpr[31] = (0x08B00730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x08B00730u) goto L_08B00730;
    return;
L_08B00730:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20624)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00744:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0078C;
      }
      goto L_08B00754;
    }
L_08B00754:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9508));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-19544), 0u);
      if (branch_taken) {
          goto L_08B00778;
      }
      goto L_08B0076C;
    }
L_08B0076C:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9668));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B00778;
L_08B00778:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0078C;
      }
      goto L_08B00784;
    }
L_08B00784:
    ctx.gpr[31] = (0x08B0078Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B0078Cu) goto L_08B0078C;
    return;
L_08B0078C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00798:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B008B0;
      }
      goto L_08B007BC;
    }
L_08B007BC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9492));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B007FC;
      }
      goto L_08B007D8;
    }
L_08B007D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B007FC;
      }
      goto L_08B007E0;
    }
L_08B007E0:
    ctx.gpr[31] = (0x08B007E8u);
    // nop
    goto L_08B008CC;
L_08B007E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B007FC;
      }
      goto L_08B007F4;
    }
L_08B007F4:
    ctx.gpr[31] = (0x08B007FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B007FCu) goto L_08B007FC;
    return;
L_08B007FC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00844;
      }
      goto L_08B00804;
    }
L_08B00804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B00824;
      }
      goto L_08B00818;
    }
L_08B00818:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08B0081C;
L_08B0081C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B0081C;
      }
      goto L_08B00824;
    }
L_08B00824:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00844;
      }
      goto L_08B0082C;
    }
L_08B0082C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00844;
      }
      goto L_08B00834;
    }
L_08B00834:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00844;
      }
      goto L_08B0083C;
    }
L_08B0083C:
    ctx.gpr[31] = (0x08B00844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B00844u) goto L_08B00844;
    return;
L_08B00844:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00870;
      }
      goto L_08B0084C;
    }
L_08B0084C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00870;
      }
      goto L_08B00854;
    }
L_08B00854:
    ctx.gpr[31] = (0x08B0085Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08B008CC;
L_08B0085C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00870;
      }
      goto L_08B00868;
    }
L_08B00868:
    ctx.gpr[31] = (0x08B00870u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B00870u) goto L_08B00870;
    return;
L_08B00870:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08B008A0;
      }
      goto L_08B00878;
    }
L_08B00878:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9508));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19544), 0u);
      if (branch_taken) {
          goto L_08B0089C;
      }
      goto L_08B00890;
    }
L_08B00890:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9668));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B0089C;
L_08B0089C:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    goto L_08B008A0;
L_08B008A0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B008B0;
      }
      goto L_08B008A8;
    }
L_08B008A8:
    ctx.gpr[31] = (0x08B008B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B008B0u) goto L_08B008B0;
    return;
L_08B008B0:
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
L_08B008CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B00910;
      }
      goto L_08B008F0;
    }
L_08B008F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B00904;
      }
      goto L_08B008FC;
    }
L_08B008FC:
    ctx.gpr[31] = (0x08B00904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B00904u) goto L_08B00904;
    return;
L_08B00904:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B008F0;
      }
      goto L_08B00910;
    }
L_08B00910:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0092C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B00948u);
    ctx.gpr[4] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08B00948u) goto L_08B00948;
    return;
L_08B00948:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00960;
      }
      goto L_08B00954;
    }
L_08B00954:
    ctx.gpr[31] = (0x08B0095Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 165u, 0x088B5354u>(ctx, &aot_mem) && ctx.pc == 0x08B0095Cu) goto L_08B0095C;
    return;
L_08B0095C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B00960;
L_08B00960:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x08B0096Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-19544), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 261u, 0x08A2956Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0096Cu) goto L_08B0096C;
    return;
L_08B0096C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-19544)));
    ctx.gpr[31] = (0x08B00978u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 259u, 0x08A29554u>(ctx, &aot_mem) && ctx.pc == 0x08B00978u) goto L_08B00978;
    return;
L_08B00978:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0098C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B009F0;
      }
      goto L_08B009E0;
    }
L_08B009E0:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B009FC;
      }
      goto L_08B009F0;
    }
L_08B009F0:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
    goto L_08B009FC;
L_08B009FC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08B00A58;
      }
      goto L_08B00A04;
    }
L_08B00A04:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B00A1Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B00A1Cu) goto L_08B00A1C;
    return;
L_08B00A1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08B00A58;
      }
      goto L_08B00A34;
    }
L_08B00A34:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B00A48u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B00A48u) goto L_08B00A48;
    return;
L_08B00A48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08B00A58;
L_08B00A58:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B00AA0;
      }
      goto L_08B00A68;
    }
L_08B00A68:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
        goto L_08B00A98;
    }
    goto L_08B00A74;
L_08B00A74:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
        goto L_08B00A98;
    }
    goto L_08B00A88;
L_08B00A88:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    goto L_08B00A98;
L_08B00A98:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B00A68;
      }
      goto L_08B00AA0;
    }
L_08B00AA0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08B00AE8;
      }
      goto L_08B00AB0;
    }
L_08B00AB0:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00ADC;
      }
      goto L_08B00ABC;
    }
L_08B00ABC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00ADC;
      }
      goto L_08B00AD0;
    }
L_08B00AD0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08B00ADC;
L_08B00ADC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B00B2C;
      }
      goto L_08B00AE8;
    }
L_08B00AE8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B00B28;
      }
      goto L_08B00AF0;
    }
L_08B00AF0:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_08B00B20;
    }
    goto L_08B00AFC;
L_08B00AFC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_08B00B20;
    }
    goto L_08B00B10;
L_08B00B10:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08B00B20;
L_08B00B20:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B00AF0;
      }
      goto L_08B00B28;
    }
L_08B00B28:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B00B2C;
L_08B00B2C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00B80;
      }
      goto L_08B00B34;
    }
L_08B00B34:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B00B80;
      }
      goto L_08B00B44;
    }
L_08B00B44:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B00B74;
    }
    goto L_08B00B50;
L_08B00B50:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B00B74;
    }
    goto L_08B00B64;
L_08B00B64:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08B00B74;
L_08B00B74:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B00B44;
      }
      goto L_08B00B7C;
    }
L_08B00B7C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B00B80;
L_08B00B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B00BD4;
      }
      goto L_08B00B90;
    }
L_08B00B90:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_08B00BC8;
    }
    goto L_08B00B98;
L_08B00B98:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_08B00BC8;
    }
    goto L_08B00BA0;
L_08B00BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_08B00BC8;
    }
    goto L_08B00BAC;
L_08B00BAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B00BC4;
      }
      goto L_08B00BBC;
    }
L_08B00BBC:
    ctx.gpr[31] = (0x08B00BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B00BC4u) goto L_08B00BC4;
    return;
L_08B00BC4:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    goto L_08B00BC8;
L_08B00BC8:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08B00B90;
      }
      goto L_08B00BD0;
    }
L_08B00BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08B00BD4;
L_08B00BD4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00BE4;
      }
      goto L_08B00BDC;
    }
L_08B00BDC:
    ctx.gpr[31] = (0x08B00BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B00BE4u) goto L_08B00BE4;
    return;
L_08B00BE4:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00C1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B00C30u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B00C30u) goto L_08B00C30;
    return;
L_08B00C30:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00C3C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00C44:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00C4C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00C54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[2] = (0u | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08B00C64;
    }
    goto L_08B00C64;
L_08B00C64:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00C6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08B00CA8;
      }
      goto L_08B00C7C;
    }
L_08B00C7C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13172));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B00C94;
      }
      goto L_08B00C88;
    }
L_08B00C88:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13268));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_08B00C94;
L_08B00C94:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00CA8;
      }
      goto L_08B00CA0;
    }
L_08B00CA0:
    ctx.gpr[31] = (0x08B00CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B00CA8u) goto L_08B00CA8;
    return;
L_08B00CA8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00CB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08B00D00;
      }
      goto L_08B00CC4;
    }
L_08B00CC4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9444));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B00CEC;
      }
      goto L_08B00CD0;
    }
L_08B00CD0:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13172));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B00CEC;
      }
      goto L_08B00CE0;
    }
L_08B00CE0:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13268));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_08B00CEC;
L_08B00CEC:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00D00;
      }
      goto L_08B00CF8;
    }
L_08B00CF8:
    ctx.gpr[31] = (0x08B00D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B00D00u) goto L_08B00D00;
    return;
L_08B00D00:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00D0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B00D44;
      }
      goto L_08B00D28;
    }
L_08B00D28:
    ctx.gpr[31] = (0x08B00D30u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 174u, 0x08A31220u>(ctx, &aot_mem) && ctx.pc == 0x08B00D30u) goto L_08B00D30;
    return;
L_08B00D30:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00D44;
      }
      goto L_08B00D3C;
    }
L_08B00D3C:
    ctx.gpr[31] = (0x08B00D44u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B00D44u) goto L_08B00D44;
    return;
L_08B00D44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00D58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B00D70u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 582u, 0x088063D8u>(ctx, &aot_mem) && ctx.pc == 0x08B00D70u) goto L_08B00D70;
    return;
L_08B00D70:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00D84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B00DC0;
      }
      goto L_08B00DA0;
    }
L_08B00DA0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08B00DACu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 585u, 0x08806498u>(ctx, &aot_mem) && ctx.pc == 0x08B00DACu) goto L_08B00DAC;
    return;
L_08B00DAC:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00DC0;
      }
      goto L_08B00DB8;
    }
L_08B00DB8:
    ctx.gpr[31] = (0x08B00DC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B00DC0u) goto L_08B00DC0;
    return;
L_08B00DC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00DD4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (~(ctx.gpr[5] | 0u));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00DE8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00DFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]);
    rt.memory().aot_store_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[6]);
    rt.memory().aot_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00E3C:
    ctx.gpr[4] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3432)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00E48:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00E54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B00E68u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 541u, 0x088EAF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00E68u) goto L_08B00E68;
    return;
L_08B00E68:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00E7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B00F4C;
      }
      goto L_08B00E98;
    }
L_08B00E98:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(7128));
    ctx.gpr[31] = (0x08B00EA4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 350u, 0x088E9EE4u>(ctx, &aot_mem) && ctx.pc == 0x08B00EA4u) goto L_08B00EA4;
    return;
L_08B00EA4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(6864));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(6768));
      if (branch_taken) {
          goto L_08B00ED8;
      }
      goto L_08B00EB0;
    }
L_08B00EB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6932)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(6768));
      if (branch_taken) {
          goto L_08B00ED8;
      }
      goto L_08B00EC0;
    }
L_08B00EC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6928)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(6768));
        goto L_08B00ED8;
    }
    goto L_08B00ECC;
L_08B00ECC:
    ctx.gpr[31] = (0x08B00ED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08B00ED4u) goto L_08B00ED4;
    return;
L_08B00ED4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(6768));
    goto L_08B00ED8;
L_08B00ED8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00F04;
      }
      goto L_08B00EE0;
    }
L_08B00EE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6836)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00F04;
      }
      goto L_08B00EF0;
    }
L_08B00EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6832)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00F04;
      }
      goto L_08B00EFC;
    }
L_08B00EFC:
    ctx.gpr[31] = (0x08B00F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08B00F04u) goto L_08B00F04;
    return;
L_08B00F04:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B00F3C;
      }
      goto L_08B00F0C;
    }
L_08B00F0C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B00F3C;
      }
      goto L_08B00F14;
    }
L_08B00F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B00F3C;
      }
      goto L_08B00F24;
    }
L_08B00F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B00F3C;
    }
    goto L_08B00F30;
L_08B00F30:
    ctx.gpr[31] = (0x08B00F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08B00F38u) goto L_08B00F38;
    return;
L_08B00F38:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B00F3C;
L_08B00F3C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00F4C;
      }
      goto L_08B00F44;
    }
L_08B00F44:
    ctx.gpr[31] = (0x08B00F4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B00F4Cu) goto L_08B00F4C;
    return;
L_08B00F4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00F60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B00F7Cu);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08B00F7Cu) goto L_08B00F7C;
    return;
L_08B00F7C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00F90:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(3984));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00F9C:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3984));
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00FB0:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4016));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00FBC:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4016));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00FC8:
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4016));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B00FF4;
      }
      goto L_08B00FD8;
    }
L_08B00FD8:
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(3984));
    ctx.gpr[5] = (ctx.gpr[6] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00FF8;
      }
      goto L_08B00FF4;
    }
L_08B00FF4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08B00FF8;
L_08B00FF8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01000:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B01050;
      }
      goto L_08B0101C;
    }
L_08B0101C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9348));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B01030u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 99u, 0x08AC4CB8u>(ctx, &aot_mem) && ctx.pc == 0x08B01030u) goto L_08B01030;
    return;
L_08B01030:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B0103Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 668u, 0x08AC3F40u>(ctx, &aot_mem) && ctx.pc == 0x08B0103Cu) goto L_08B0103C;
    return;
L_08B0103C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01050;
      }
      goto L_08B01048;
    }
L_08B01048:
    ctx.gpr[31] = (0x08B01050u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B01050u) goto L_08B01050;
    return;
L_08B01050:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01064:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 7u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0106C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B01088u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08B01088u) goto L_08B01088;
    return;
L_08B01088:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[31] = (0x08B01098u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08B01098u) goto L_08B01098;
    return;
L_08B01098:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B010B0;
      }
      goto L_08B010A4;
    }
L_08B010A4:
    ctx.gpr[31] = (0x08B010ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 405u, 0x089197E4u>(ctx, &aot_mem) && ctx.pc == 0x08B010ACu) goto L_08B010AC;
    return;
L_08B010AC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08B010B0;
L_08B010B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B010C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B010E0;
      }
      goto L_08B010D0;
    }
L_08B010D0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08B010E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08B010E0u) goto L_08B010E0;
    return;
L_08B010E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B010EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B01108u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08B01108u) goto L_08B01108;
    return;
L_08B01108:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[31] = (0x08B01118u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08B01118u) goto L_08B01118;
    return;
L_08B01118:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08B01154;
      }
      goto L_08B01128;
    }
L_08B01128:
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(33))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    goto L_08B01154;
L_08B01154:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01160:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B01174u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 407u, 0x08919834u>(ctx, &aot_mem) && ctx.pc == 0x08B01174u) goto L_08B01174;
    return;
L_08B01174:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01180:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01188:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 96u);
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
          goto L_08B011C4;
      }
      goto L_08B011C0;
    }
L_08B011C0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08B011C4;
L_08B011C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B011CC:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4556));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B011D8:
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4556));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01204;
      }
      goto L_08B011E8;
    }
L_08B011E8:
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(3984));
    ctx.gpr[5] = (ctx.gpr[6] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01208;
      }
      goto L_08B01204;
    }
L_08B01204:
    ctx.gpr[4] = (0u | 1u);
    goto L_08B01208;
L_08B01208:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01210:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-24108));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0121C:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24108));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01268;
      }
      goto L_08B0122C;
    }
L_08B0122C:
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4556));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01258;
      }
      goto L_08B0123C;
    }
L_08B0123C:
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(3984));
    ctx.gpr[5] = (ctx.gpr[7] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08B01260;
      }
      goto L_08B01258;
    }
L_08B01258:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08B01260;
L_08B01260:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0126C;
      }
      goto L_08B01268;
    }
L_08B01268:
    ctx.gpr[6] = (0u | 1u);
    goto L_08B0126C;
L_08B0126C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[6] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01274:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B012A0u);
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08B012A0u) goto L_08B012A0;
    return;
L_08B012A0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08B012F4;
      }
      goto L_08B012CC;
    }
L_08B012CC:
    ctx.gpr[18] = (ctx.gpr[19] << 4u);
    goto L_08B012D0;
L_08B012D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B012E0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_08B01458;
L_08B012E0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_08B012D0;
      }
      goto L_08B012F4;
    }
L_08B012F4:
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
L_08B01314:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B01350;
      }
      goto L_08B01338;
    }
L_08B01338:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B01344u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B01418;
L_08B01344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B01338;
      }
      goto L_08B01350;
    }
L_08B01350:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01364:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[7];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08B013C0;
      }
      goto L_08B01384;
    }
L_08B01384:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08B01388;
L_08B01388:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[8] = (0u | 1u);
        goto L_08B013A0;
    }
    goto L_08B013A0;
L_08B013A0:
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B013B4;
      }
      goto L_08B013AC;
    }
L_08B013AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B013C0;
      }
      goto L_08B013B4;
    }
L_08B013B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B01388;
      }
      goto L_08B013C0;
    }
L_08B013C0:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B01400;
      }
      goto L_08B013D0;
    }
L_08B013D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B013ECu);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    goto L_08B01470;
L_08B013EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B013F8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08B01458;
L_08B013F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B01404;
      }
      goto L_08B01400;
    }
L_08B01400:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B01404;
L_08B01404:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01418:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B01438u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B01470;
L_08B01438:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08B01444u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B01458;
L_08B01444:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01458:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01470:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01488:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[31] = (0x08B014B0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08B014B0u) goto L_08B014B0;
    return;
L_08B014B0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08B014BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08B014BCu) goto L_08B014BC;
    return;
L_08B014BC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_08B01514;
      }
      goto L_08B014DC;
    }
L_08B014DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B014E0;
L_08B014E0:
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
        goto L_08B014E0;
    }
    goto L_08B01514;
L_08B01514:
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
L_08B0152C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08B0153C;
L_08B0153C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B01568;
      }
      goto L_08B01548;
    }
L_08B01548:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B01560;
      }
      goto L_08B01550;
    }
L_08B01550:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01568;
      }
      goto L_08B01560;
    }
L_08B01560:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B015E4;
      }
      goto L_08B01568;
    }
L_08B01568:
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0153C;
      }
      goto L_08B01584;
    }
L_08B01584:
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
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08B015E4;
L_08B015E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B015EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01608:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01610:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B01620u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08B0162C;
L_08B01620:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0162C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B01690;
      }
      goto L_08B01640;
    }
L_08B01640:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_08B0164C;
L_08B0164C:
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B01684;
      }
      goto L_08B01658;
    }
L_08B01658:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    goto L_08B0165C;
L_08B0165C:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08B0167C;
      }
      goto L_08B01668;
    }
L_08B01668:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B0165C;
      }
      goto L_08B01674;
    }
L_08B01674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01684;
      }
      goto L_08B0167C;
    }
L_08B0167C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B01694;
      }
      goto L_08B01684;
    }
L_08B01684:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B0164C;
      }
      goto L_08B01690;
    }
L_08B01690:
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
    goto L_08B01694;
L_08B01694:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0169C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B016E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08B016E0u) goto L_08B016E0;
    return;
L_08B016E0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08B01708u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08B017B8;
L_08B01708:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B01738;
      }
      goto L_08B01724;
    }
L_08B01724:
    ctx.gpr[16] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08B01730u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08B01730u) goto L_08B01730;
    return;
L_08B01730:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B01738;
      }
      goto L_08B01738;
    }
L_08B01738:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01750:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B017A4;
      }
      goto L_08B0176C;
    }
L_08B0176C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B01790;
      }
      goto L_08B01778;
    }
L_08B01778:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B01794;
    }
    goto L_08B01780;
L_08B01780:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B01794;
    }
    goto L_08B01788;
L_08B01788:
    ctx.gpr[31] = (0x08B01790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B01790u) goto L_08B01790;
    return;
L_08B01790:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B01794;
L_08B01794:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B017A4;
      }
      goto L_08B0179C;
    }
L_08B0179C:
    ctx.gpr[31] = (0x08B017A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B017A4u) goto L_08B017A4;
    return;
L_08B017A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B017B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B017CC:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(6092));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B017D8:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(6092));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B017E4:
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(6092));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01810;
      }
      goto L_08B017F4;
    }
L_08B017F4:
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(3984));
    ctx.gpr[5] = (ctx.gpr[6] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01814;
      }
      goto L_08B01810;
    }
L_08B01810:
    ctx.gpr[4] = (0u | 1u);
    goto L_08B01814;
L_08B01814:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0181C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B0186C;
      }
      goto L_08B01838;
    }
L_08B01838:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9180));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B0184Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 99u, 0x08AC4CB8u>(ctx, &aot_mem) && ctx.pc == 0x08B0184Cu) goto L_08B0184C;
    return;
L_08B0184C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B01858u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 668u, 0x08AC3F40u>(ctx, &aot_mem) && ctx.pc == 0x08B01858u) goto L_08B01858;
    return;
L_08B01858:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0186C;
      }
      goto L_08B01864;
    }
L_08B01864:
    ctx.gpr[31] = (0x08B0186Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B0186Cu) goto L_08B0186C;
    return;
L_08B0186C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01880:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 6u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01888:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B018A4u);
    ctx.gpr[4] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08B018A4u) goto L_08B018A4;
    return;
L_08B018A4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 72u);
    ctx.gpr[31] = (0x08B018B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08B018B4u) goto L_08B018B4;
    return;
L_08B018B4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B018CC;
      }
      goto L_08B018C0;
    }
L_08B018C0:
    ctx.gpr[31] = (0x08B018C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 526u, 0x08936414u>(ctx, &aot_mem) && ctx.pc == 0x08B018C8u) goto L_08B018C8;
    return;
L_08B018C8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08B018CC;
L_08B018CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B018DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B0192C;
      }
      goto L_08B018F0;
    }
L_08B018F0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B01920;
      }
      goto L_08B018FC;
    }
L_08B018FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B0191C;
      }
      goto L_08B01910;
    }
L_08B01910:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08B0191Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0191Cu) goto L_08B0191C;
    return;
L_08B0191C:
    ctx.gpr[4] = (2233u << 16u);
    goto L_08B01920;
L_08B01920:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B0192Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0192Cu) goto L_08B0192C;
    return;
L_08B0192C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0193C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B01960u);
    ctx.gpr[4] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08B01960u) goto L_08B01960;
    return;
L_08B01960:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 72u);
    ctx.gpr[31] = (0x08B01970u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08B01970u) goto L_08B01970;
    return;
L_08B01970:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B01A58;
      }
      goto L_08B0197C;
    }
L_08B0197C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B01994u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08B01994u) goto L_08B01994;
    return;
L_08B01994:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B01A58;
L_08B01A58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01A6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B01A80u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 556u, 0x08936714u>(ctx, &aot_mem) && ctx.pc == 0x08B01A80u) goto L_08B01A80;
    return;
L_08B01A80:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01A8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 4u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B01B08;
      }
      goto L_08B01AAC;
    }
L_08B01AAC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08B01AB0;
L_08B01AB0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B01AC4;
    }
    goto L_08B01ABC;
L_08B01ABC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B01B94;
      }
      goto L_08B01AC4;
    }
L_08B01AC4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B01AD8;
    }
    goto L_08B01AD0;
L_08B01AD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B01B94;
      }
      goto L_08B01AD8;
    }
L_08B01AD8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B01AEC;
    }
    goto L_08B01AE4;
L_08B01AE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B01B94;
      }
      goto L_08B01AEC;
    }
L_08B01AEC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B01B00;
      }
      goto L_08B01AF8;
    }
L_08B01AF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B01B94;
      }
      goto L_08B01B00;
    }
L_08B01B00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B01AB0;
      }
      goto L_08B01B08;
    }
L_08B01B08:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B01B3C;
      }
      goto L_08B01B28;
    }
L_08B01B28:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B01B94;
      }
      goto L_08B01B30;
    }
L_08B01B30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B01B80;
      }
      goto L_08B01B38;
    }
L_08B01B38:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    goto L_08B01B3C;
L_08B01B3C:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B01B64;
      }
      goto L_08B01B44;
    }
L_08B01B44:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B01B94;
      }
      goto L_08B01B4C;
    }
L_08B01B4C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B01B64;
    }
    goto L_08B01B5C;
L_08B01B5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B01B94;
      }
      goto L_08B01B64;
    }
L_08B01B64:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B01B7C;
    }
    goto L_08B01B74;
L_08B01B74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B01B94;
      }
      goto L_08B01B7C;
    }
L_08B01B7C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B01B80;
L_08B01B80:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B01B94;
      }
      goto L_08B01B8C;
    }
L_08B01B8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B01B94;
      }
      goto L_08B01B94;
    }
L_08B01B94:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01B9C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01BB0:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15440)));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1030), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15440)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1031), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01BC8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 96u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[5] << 8u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01BF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01BFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(176), 0u);
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(180), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01C30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08B01C74;
      }
      goto L_08B01C40;
    }
L_08B01C40:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9012));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-20156), 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08B01C60;
      }
      goto L_08B01C58;
    }
L_08B01C58:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9668));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B01C60;
L_08B01C60:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01C74;
      }
      goto L_08B01C6C;
    }
L_08B01C6C:
    ctx.gpr[31] = (0x08B01C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B01C74u) goto L_08B01C74;
    return;
L_08B01C74:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01C80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B01D0C;
      }
      goto L_08B01C9C;
    }
L_08B01C9C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01CCC;
      }
      goto L_08B01CA8;
    }
L_08B01CA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01CCC;
      }
      goto L_08B01CB8;
    }
L_08B01CB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01CCC;
      }
      goto L_08B01CC4;
    }
L_08B01CC4:
    ctx.gpr[31] = (0x08B01CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08B01CCCu) goto L_08B01CCC;
    return;
L_08B01CCC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B01CFC;
      }
      goto L_08B01CD4;
    }
L_08B01CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B01CFC;
      }
      goto L_08B01CE4;
    }
L_08B01CE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B01CFC;
    }
    goto L_08B01CF0;
L_08B01CF0:
    ctx.gpr[31] = (0x08B01CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08B01CF8u) goto L_08B01CF8;
    return;
L_08B01CF8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B01CFC;
L_08B01CFC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01D0C;
      }
      goto L_08B01D04;
    }
L_08B01D04:
    ctx.gpr[31] = (0x08B01D0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B01D0Cu) goto L_08B01D0C;
    return;
L_08B01D0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01D20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B01E40;
      }
      goto L_08B01D44;
    }
L_08B01D44:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8996));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(832));
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(7296));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[6] = (0u | 208u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08B01D70u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 356u, 0x08AF5BC0u>(ctx, &aot_mem) && ctx.pc == 0x08B01D70u) goto L_08B01D70;
    return;
L_08B01D70:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B01DA8;
      }
      goto L_08B01D80;
    }
L_08B01D80:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B01DA8;
      }
      goto L_08B01D90;
    }
L_08B01D90:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01DA8;
      }
      goto L_08B01D98;
    }
L_08B01D98:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01DA8;
      }
      goto L_08B01DA0;
    }
L_08B01DA0:
    ctx.gpr[31] = (0x08B01DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B01DA8u) goto L_08B01DA8;
    return;
L_08B01DA8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01DD4;
      }
      goto L_08B01DB0;
    }
L_08B01DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B01DD4;
      }
      goto L_08B01DBC;
    }
L_08B01DBC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01DD4;
      }
      goto L_08B01DC4;
    }
L_08B01DC4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01DD4;
      }
      goto L_08B01DCC;
    }
L_08B01DCC:
    ctx.gpr[31] = (0x08B01DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B01DD4u) goto L_08B01DD4;
    return;
L_08B01DD4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01E00;
      }
      goto L_08B01DDC;
    }
L_08B01DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B01E00;
      }
      goto L_08B01DE8;
    }
L_08B01DE8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01E00;
      }
      goto L_08B01DF0;
    }
L_08B01DF0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01E00;
      }
      goto L_08B01DF8;
    }
L_08B01DF8:
    ctx.gpr[31] = (0x08B01E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B01E00u) goto L_08B01E00;
    return;
L_08B01E00:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08B01E30;
      }
      goto L_08B01E08;
    }
L_08B01E08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9012));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-20156), 0u);
      if (branch_taken) {
          goto L_08B01E2C;
      }
      goto L_08B01E20;
    }
L_08B01E20:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9668));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B01E2C;
L_08B01E2C:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    goto L_08B01E30;
L_08B01E30:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01E40;
      }
      goto L_08B01E38;
    }
L_08B01E38:
    ctx.gpr[31] = (0x08B01E40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B01E40u) goto L_08B01E40;
    return;
L_08B01E40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01E5C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-17764));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01E8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08B01ED4;
      }
      goto L_08B01EB4;
    }
L_08B01EB4:
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B01ED4;
      }
      goto L_08B01ED4;
    }
L_08B01ED4:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08B01EE4u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B01EE4u) goto L_08B01EE4;
    return;
L_08B01EE4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01EF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01F04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01F18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B01FB4;
      }
      goto L_08B01F38;
    }
L_08B01F38:
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[17]);
    ctx.gpr[5] = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01F60;
      }
      goto L_08B01F54;
    }
L_08B01F54:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B01F54;
      }
      goto L_08B01F60;
    }
L_08B01F60:
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08B01F6Cu);
    ctx.gpr[4] = (0u | 0u);
    goto L_08B01FCC;
L_08B01F6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B01F90u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08B01FE0;
L_08B01F90:
    ctx.gpr[31] = (0x08B01F98u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08B01FCC;
L_08B01F98:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B01FB4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B02818;
L_08B01FB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01FCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01FE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    ctx.gpr[19] = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 17 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B021BC;
      }
      goto L_08B02030;
    }
L_08B02030:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    goto L_08B0203C;
L_08B0203C:
    if (ctx.gpr[18] == 0u) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[22]));
        goto L_08B020A0;
    }
    goto L_08B02044;
L_08B02044:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-12));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08B020BC;
      }
      goto L_08B02094;
    }
L_08B02094:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08B020C4;
      }
      goto L_08B0209C;
    }
L_08B0209C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_08B020A0;
L_08B020A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B020B4u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_08B021E8;
L_08B020B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B021BC;
      }
      goto L_08B020BC;
    }
L_08B020BC:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08B020C4;
L_08B020C4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08B02124;
      }
      goto L_08B020CC;
    }
L_08B020CC:
    ctx.gpr[6] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08B020E0;
    }
    goto L_08B020E0;
L_08B020E0:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08B020F8;
    }
    goto L_08B020EC;
L_08B020EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B02170;
      }
      goto L_08B020F4;
    }
L_08B020F4:
    ctx.gpr[4] = (0u | 0u);
    goto L_08B020F8;
L_08B020F8:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08B02108;
    }
    goto L_08B02108;
L_08B02108:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0211C;
      }
      goto L_08B02114;
    }
L_08B02114:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B0216C;
      }
      goto L_08B0211C;
    }
L_08B0211C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B0216C;
      }
      goto L_08B02124;
    }
L_08B02124:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08B02134;
    }
    goto L_08B02134;
L_08B02134:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08B02148;
      }
      goto L_08B02140;
    }
L_08B02140:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B0216C;
      }
      goto L_08B02148;
    }
L_08B02148:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08B02158;
    }
    goto L_08B02158;
L_08B02158:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0216C;
      }
      goto L_08B02164;
    }
L_08B02164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B0216C;
      }
      goto L_08B0216C;
    }
L_08B0216C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08B02170;
L_08B02170:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B02180u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_08B026D8;
L_08B02180:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B0219Cu);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    goto L_08B01FE0;
L_08B0219C:
    ctx.gpr[17] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[23] - ctx.gpr[16]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0203C;
      }
      goto L_08B021B8;
    }
L_08B021B8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_08B021BC;
L_08B021BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B021E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[31] = (0x08B02200u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B0220C;
L_08B02200:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0220C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[8]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[22] = (0u | 12u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B0225Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08B02374;
L_08B0225C:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[17] - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B02300;
      }
      goto L_08B0226C;
    }
L_08B0226C:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_08B02270;
L_08B02270:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08B0228C;
    }
    goto L_08B0228C;
L_08B0228C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B022F0;
      }
      goto L_08B02298;
    }
L_08B02298:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[21]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08B022F0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    goto L_08B02438;
L_08B022F0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02270;
      }
      goto L_08B02300;
    }
L_08B02300:
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[16]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08B02348;
      }
      goto L_08B02318;
    }
L_08B02318:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08B02320;
L_08B02320:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-12));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B02330u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08B02654;
L_08B02330:
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[16]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B02320;
      }
      goto L_08B02348;
    }
L_08B02348:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02374:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    ctx.gpr[20] = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02418;
      }
      goto L_08B023BC;
    }
L_08B023BC:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 1u));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[4] << 2u);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[18]);
    goto L_08B023F0;
L_08B023F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B02408u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    goto L_08B02438;
L_08B02408:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B02418;
      }
      goto L_08B02410;
    }
L_08B02410:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          goto L_08B023F0;
      }
      goto L_08B02418;
    }
L_08B02418:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02438:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0250C;
      }
      goto L_08B02474;
    }
L_08B02474:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-12));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[9] = (0u | 1u);
        goto L_08B024A8;
    }
    goto L_08B024A8;
L_08B024A8:
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B024B8;
      }
      goto L_08B024B4;
    }
L_08B024B4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08B024B8;
L_08B024B8:
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02474;
      }
      goto L_08B0250C;
    }
L_08B0250C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08B02558;
      }
      goto L_08B02514;
    }
L_08B02514:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08B02558;
L_08B02558:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[10]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08B025AC;
L_08B025AC:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B02634;
      }
      goto L_08B025B4;
    }
L_08B025B4:
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[9] = (0u | 1u);
        goto L_08B025D8;
    }
    goto L_08B025D8;
L_08B025D8:
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08B02638;
    }
    goto L_08B025E4;
L_08B025E4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    ctx.gpr[9] = (ctx.gpr[9] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B025AC;
      }
      goto L_08B02634;
    }
L_08B02634:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08B02638;
L_08B02638:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02654:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33))))));
    ctx.gpr[31] = (0x08B026CCu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08B02438;
L_08B026CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B026D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12));
    goto L_08B02714;
L_08B02714:
    ctx.gpr[5] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (0u | 1u);
        goto L_08B02728;
    }
    goto L_08B02728;
L_08B02728:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0275C;
      }
      goto L_08B02734;
    }
L_08B02734:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (0u | 1u);
        goto L_08B02750;
    }
    goto L_08B02750;
L_08B02750:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02734;
      }
      goto L_08B0275C;
    }
L_08B0275C:
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[9] = (0u | 1u);
        goto L_08B02778;
    }
    goto L_08B02778;
L_08B02778:
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B027B0;
      }
      goto L_08B02784;
    }
L_08B02784:
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12));
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[9] = (0u | 1u);
        goto L_08B027A4;
    }
    goto L_08B027A4;
L_08B027A4:
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02784;
      }
      goto L_08B027B0;
    }
L_08B027B0:
    ctx.gpr[9] = (ctx.gpr[4] < ctx.gpr[8] ? 1u : 0u);
    if (ctx.gpr[9] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08B02804;
    }
    goto L_08B027BC;
L_08B027BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          goto L_08B02714;
      }
      goto L_08B02804;
    }
L_08B02804:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02818:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[6] = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
      if (branch_taken) {
          goto L_08B02880;
      }
      goto L_08B0284C;
    }
L_08B0284C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x08B0285Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08B028A0;
L_08B0285C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B02878u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08B02AEC;
L_08B02878:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0288C;
      }
      goto L_08B02880;
    }
L_08B02880:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B0288Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B028A0;
L_08B0288C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B028A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B028E4;
      }
      goto L_08B028DC;
    }
L_08B028DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B029FC;
      }
      goto L_08B028E4;
    }
L_08B028E4:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B029FC;
      }
      goto L_08B028F0;
    }
L_08B028F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[23] = (0u | 12u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35))))));
    goto L_08B0290C;
L_08B0290C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[22] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08B02948;
    }
    goto L_08B02948;
L_08B02948:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
        goto L_08B029D8;
    }
    goto L_08B02954;
L_08B02954:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08B02968u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    goto L_08B01EF0;
L_08B02968:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[18] - ctx.gpr[16]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B029B8;
      }
      goto L_08B0298C;
    }
L_08B0298C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-12));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08B0298C;
      }
      goto L_08B029B8;
    }
L_08B029B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B029E4;
      }
      goto L_08B029D8;
    }
L_08B029D8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B029E4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_08B02A2C;
L_08B029E4:
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B0290C;
      }
      goto L_08B029F0;
    }
L_08B029F0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08B029FC;
L_08B029FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02A2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[7] = (0u | 1u);
        goto L_08B02A74;
    }
    goto L_08B02A74;
L_08B02A74:
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02ACC;
      }
      goto L_08B02A80;
    }
L_08B02A80:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[7] = (0u | 1u);
        goto L_08B02AC0;
    }
    goto L_08B02AC0;
L_08B02AC0:
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02A80;
      }
      goto L_08B02ACC;
    }
L_08B02ACC:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02AEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08B02B34;
      }
      goto L_08B02B14;
    }
L_08B02B14:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    goto L_08B02B18;
L_08B02B18:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B02B28u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08B02A2C;
L_08B02B28:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08B02B18;
      }
      goto L_08B02B34;
    }
L_08B02B34:
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
L_08B02B4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08B02B6C;
      }
      goto L_08B02B5C;
    }
L_08B02B5C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02B6C;
      }
      goto L_08B02B64;
    }
L_08B02B64:
    ctx.gpr[31] = (0x08B02B6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B02B6Cu) goto L_08B02B6C;
    return;
L_08B02B6C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02B78:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02B88:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02B98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B02BDC;
      }
      goto L_08B02BBC;
    }
L_08B02BBC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B02BD0;
      }
      goto L_08B02BC8;
    }
L_08B02BC8:
    ctx.gpr[31] = (0x08B02BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B02BD0u) goto L_08B02BD0;
    return;
L_08B02BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B02BBC;
      }
      goto L_08B02BDC;
    }
L_08B02BDC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02BF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B02C4C;
      }
      goto L_08B02C14;
    }
L_08B02C14:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B02C3C;
      }
      goto L_08B02C1C;
    }
L_08B02C1C:
    ctx.gpr[31] = (0x08B02C24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08B02B98;
L_08B02C24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B02C3C;
    }
    goto L_08B02C30;
L_08B02C30:
    ctx.gpr[31] = (0x08B02C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B02C38u) goto L_08B02C38;
    return;
L_08B02C38:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B02C3C;
L_08B02C3C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02C4C;
      }
      goto L_08B02C44;
    }
L_08B02C44:
    ctx.gpr[31] = (0x08B02C4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B02C4Cu) goto L_08B02C4C;
    return;
L_08B02C4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02C60:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(11360));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02C6C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08B02C7C;
L_08B02C7C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B02CA8;
      }
      goto L_08B02C88;
    }
L_08B02C88:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02CA0;
      }
      goto L_08B02C90;
    }
L_08B02C90:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B02CA8;
      }
      goto L_08B02CA0;
    }
L_08B02CA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B02D24;
      }
      goto L_08B02CA8;
    }
L_08B02CA8:
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02C7C;
      }
      goto L_08B02CC4;
    }
L_08B02CC4:
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
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08B02D24;
L_08B02D24:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02D2C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 48u);
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
          goto L_08B02D68;
      }
      goto L_08B02D64;
    }
L_08B02D64:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08B02D68;
L_08B02D68:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02D70:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 48u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[5] << 8u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02D9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B02DCC;
      }
      goto L_08B02DC4;
    }
L_08B02DC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02E18;
      }
      goto L_08B02DCC;
    }
L_08B02DCC:
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B02E18;
      }
      goto L_08B02DD8;
    }
L_08B02DD8:
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    jump_target = ctx.gpr[16];
    ctx.gpr[31] = (0x08B02DF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B02DF4u) goto L_08B02DF4;
    return;
L_08B02DF4:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B02DD8;
      }
      goto L_08B02E18;
    }
L_08B02E18:
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
L_08B02E34:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27100)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02E44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B02E98;
      }
      goto L_08B02E60;
    }
L_08B02E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B02E84;
      }
      goto L_08B02E6C;
    }
L_08B02E6C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B02E88;
    }
    goto L_08B02E74;
L_08B02E74:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B02E88;
    }
    goto L_08B02E7C;
L_08B02E7C:
    ctx.gpr[31] = (0x08B02E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B02E84u) goto L_08B02E84;
    return;
L_08B02E84:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B02E88;
L_08B02E88:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02E98;
      }
      goto L_08B02E90;
    }
L_08B02E90:
    ctx.gpr[31] = (0x08B02E98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B02E98u) goto L_08B02E98;
    return;
L_08B02E98:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02EAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B02F10;
      }
      goto L_08B02EC8;
    }
L_08B02EC8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B02EFC;
      }
      goto L_08B02ED4;
    }
L_08B02ED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B02EFC;
      }
      goto L_08B02EE4;
    }
L_08B02EE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B02EFC;
    }
    goto L_08B02EF0;
L_08B02EF0:
    ctx.gpr[31] = (0x08B02EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08B02EF8u) goto L_08B02EF8;
    return;
L_08B02EF8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B02EFC;
L_08B02EFC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B02F10;
      }
      goto L_08B02F04;
    }
L_08B02F04:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B02F10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08B02F10u) goto L_08B02F10;
    return;
L_08B02F10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02F24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08B02F50u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 481u, 0x08A05DFCu>(ctx, &aot_mem) && ctx.pc == 0x08B02F50u) goto L_08B02F50;
    return;
L_08B02F50:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(178)));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(178), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(181)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(181), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(182)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(182), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(183)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(183), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(192));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(214)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(214), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(216));
    goto L_08B0304C;
L_08B0304C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08B0304C;
      }
      goto L_08B030A0;
    }
L_08B030A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(337)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(337), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(338)));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(338), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(340)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(341))))));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(342)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(342), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(344)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(344), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(345)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(345), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B030F8:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-18268));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B03104:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18268));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08B03150;
      }
      goto L_08B03114;
    }
L_08B03114:
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4556));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B03140;
      }
      goto L_08B03124;
    }
L_08B03124:
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(3984));
    ctx.gpr[5] = (ctx.gpr[7] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08B03148;
      }
      goto L_08B03140;
    }
L_08B03140:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08B03148;
L_08B03148:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03154;
      }
      goto L_08B03150;
    }
L_08B03150:
    ctx.gpr[6] = (0u | 1u);
    goto L_08B03154;
L_08B03154:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[6] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0315C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B031AC;
      }
      goto L_08B03178;
    }
L_08B03178:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8980));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B0318Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 99u, 0x08AC4CB8u>(ctx, &aot_mem) && ctx.pc == 0x08B0318Cu) goto L_08B0318C;
    return;
L_08B0318C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B03198u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 190u, 0x08A499D8u>(ctx, &aot_mem) && ctx.pc == 0x08B03198u) goto L_08B03198;
    return;
L_08B03198:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B031AC;
      }
      goto L_08B031A4;
    }
L_08B031A4:
    ctx.gpr[31] = (0x08B031ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B031ACu) goto L_08B031AC;
    return;
L_08B031AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B031C0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B031C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B031E4u);
    ctx.gpr[4] = (0u | 352u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08B031E4u) goto L_08B031E4;
    return;
L_08B031E4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 352u);
    ctx.gpr[31] = (0x08B031F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08B031F4u) goto L_08B031F4;
    return;
L_08B031F4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B0320C;
      }
      goto L_08B03200;
    }
L_08B03200:
    ctx.gpr[31] = (0x08B03208u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 683u, 0x0897F824u>(ctx, &aot_mem) && ctx.pc == 0x08B03208u) goto L_08B03208;
    return;
L_08B03208:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08B0320C;
L_08B0320C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0321C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B03278;
      }
      goto L_08B03230;
    }
L_08B03230:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B0326C;
      }
      goto L_08B03238;
    }
L_08B03238:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B0326C;
      }
      goto L_08B03244;
    }
L_08B03244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B0326C;
      }
      goto L_08B03254;
    }
L_08B03254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (2233u << 16u);
        goto L_08B0326C;
    }
    goto L_08B03260;
L_08B03260:
    ctx.gpr[31] = (0x08B03268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08B03268u) goto L_08B03268;
    return;
L_08B03268:
    ctx.gpr[4] = (2233u << 16u);
    goto L_08B0326C;
L_08B0326C:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03278u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03278u) goto L_08B03278;
    return;
L_08B03278:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B03288:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B032A8u);
    ctx.gpr[4] = (0u | 352u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08B032A8u) goto L_08B032A8;
    return;
L_08B032A8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 352u);
    ctx.gpr[31] = (0x08B032B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08B032B8u) goto L_08B032B8;
    return;
L_08B032B8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08B032D8;
      }
      goto L_08B032C8;
    }
L_08B032C8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B032D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B02F24;
L_08B032D4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08B032D8;
L_08B032D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B032E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B032FCu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 730u, 0x0897FC60u>(ctx, &aot_mem) && ctx.pc == 0x08B032FCu) goto L_08B032FC;
    return;
L_08B032FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B03308:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 4u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B03384;
      }
      goto L_08B03328;
    }
L_08B03328:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08B0332C;
L_08B0332C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B03340;
    }
    goto L_08B03338;
L_08B03338:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B03410;
      }
      goto L_08B03340;
    }
L_08B03340:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B03354;
    }
    goto L_08B0334C;
L_08B0334C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B03410;
      }
      goto L_08B03354;
    }
L_08B03354:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B03368;
    }
    goto L_08B03360;
L_08B03360:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B03410;
      }
      goto L_08B03368;
    }
L_08B03368:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B0337C;
      }
      goto L_08B03374;
    }
L_08B03374:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B03410;
      }
      goto L_08B0337C;
    }
L_08B0337C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B0332C;
      }
      goto L_08B03384;
    }
L_08B03384:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B033B8;
      }
      goto L_08B033A4;
    }
L_08B033A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B03410;
      }
      goto L_08B033AC;
    }
L_08B033AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B033FC;
      }
      goto L_08B033B4;
    }
L_08B033B4:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    goto L_08B033B8;
L_08B033B8:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B033E0;
      }
      goto L_08B033C0;
    }
L_08B033C0:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B03410;
      }
      goto L_08B033C8;
    }
L_08B033C8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B033E0;
    }
    goto L_08B033D8;
L_08B033D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B03410;
      }
      goto L_08B033E0;
    }
L_08B033E0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B033F8;
    }
    goto L_08B033F0;
L_08B033F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B03410;
      }
      goto L_08B033F8;
    }
L_08B033F8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B033FC;
L_08B033FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B03410;
      }
      goto L_08B03408;
    }
L_08B03408:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B03410;
      }
      goto L_08B03410;
    }
L_08B03410:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B03418:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B0348C;
      }
      goto L_08B03434;
    }
L_08B03434:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16780));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03454;
      }
      goto L_08B0344C;
    }
L_08B0344C:
    ctx.gpr[31] = (0x08B03454u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 585u, 0x08806498u>(ctx, &aot_mem) && ctx.pc == 0x08B03454u) goto L_08B03454;
    return;
L_08B03454:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B0347C;
      }
      goto L_08B0345C;
    }
L_08B0345C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17236));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B03478;
      }
      goto L_08B0346C;
    }
L_08B0346C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13268));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08B03478;
L_08B03478:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B0347C;
L_08B0347C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0348C;
      }
      goto L_08B03484;
    }
L_08B03484:
    ctx.gpr[31] = (0x08B0348Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08B0348Cu) goto L_08B0348C;
    return;
L_08B0348C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B034A0:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B034B4:
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B034C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08B034D4;
L_08B034D4:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B03500;
      }
      goto L_08B034E0;
    }
L_08B034E0:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B034F8;
      }
      goto L_08B034E8;
    }
L_08B034E8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B03500;
      }
      goto L_08B034F8;
    }
L_08B034F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B0357C;
      }
      goto L_08B03500;
    }
L_08B03500:
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B034D4;
      }
      goto L_08B0351C;
    }
L_08B0351C:
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
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(3248));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08B0357C;
L_08B0357C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B03584:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 3248u);
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
          goto L_08B035C0;
      }
      goto L_08B035BC;
    }
L_08B035BC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08B035C0;
L_08B035C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B035C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
        goto L_08B03638;
    }
    goto L_08B035FC;
L_08B035FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B03608;
L_08B03608:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
        goto L_08B03628;
    }
    goto L_08B03618;
L_08B03618:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B0362C;
      }
      goto L_08B03628;
    }
L_08B03628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B0362C;
L_08B0362C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B03608;
    }
    goto L_08B03634;
L_08B03634:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    goto L_08B03638;
L_08B03638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
        goto L_08B03688;
    }
    goto L_08B0364C;
L_08B0364C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08B03658;
L_08B03658:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08B03678;
    }
    goto L_08B03668;
L_08B03668:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B0367C;
      }
      goto L_08B03678;
    }
L_08B03678:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08B0367C;
L_08B0367C:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08B03658;
    }
    goto L_08B03684;
L_08B03684:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    goto L_08B03688;
L_08B03688:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B036E0;
      }
      goto L_08B036B4;
    }
L_08B036B4:
    ctx.gpr[31] = (0x08B036BCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x08B036BCu) goto L_08B036BC;
    return;
L_08B036BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B036B4;
      }
      goto L_08B036DC;
    }
L_08B036DC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08B036E0;
L_08B036E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08B03780;
      }
      goto L_08B03714;
    }
L_08B03714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B03784;
    }
    goto L_08B03734;
L_08B03734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03804;
      }
      goto L_08B03740;
    }
L_08B03740:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08B03754u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 519u, 0x08AFE390u>(ctx, &aot_mem) && ctx.pc == 0x08B03754u) goto L_08B03754;
    return;
L_08B03754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08B03804;
      }
      goto L_08B03780;
    }
L_08B03780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08B03784;
L_08B03784:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08B03804;
      }
      goto L_08B0379C;
    }
L_08B0379C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B037ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x08B037ACu) goto L_08B037AC;
    return;
L_08B037AC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08B037C8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 777u, 0x08AFF67Cu>(ctx, &aot_mem) && ctx.pc == 0x08B037C8u) goto L_08B037C8;
    return;
L_08B037C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08B037E0;
    }
    goto L_08B037D4;
L_08B037D4:
    ctx.gpr[31] = (0x08B037DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08B037DCu) goto L_08B037DC;
    return;
L_08B037DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B037E0;
L_08B037E0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0379C;
      }
      goto L_08B03804;
    }
L_08B03804:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B03828:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08B03884;
      }
      goto L_08B03854;
    }
L_08B03854:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03934;
      }
      goto L_08B0385C;
    }
L_08B0385C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03884;
      }
      goto L_08B03864;
    }
L_08B03864:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03934;
      }
      goto L_08B03884;
    }
L_08B03884:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08B03898u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B03898u) goto L_08B03898;
    return;
L_08B03898:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B038C8;
      }
      goto L_08B038AC;
    }
L_08B038AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B038BCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B038BCu) goto L_08B038BC;
    return;
L_08B038BC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08B038C8;
L_08B038C8:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B038E4;
      }
      goto L_08B038D4;
    }
L_08B038D4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B038E4;
L_08B038E4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B0391C;
      }
      goto L_08B03904;
    }
L_08B03904:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B039BC;
      }
      goto L_08B0391C;
    }
L_08B0391C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08B039BC;
      }
      goto L_08B0392C;
    }
L_08B0392C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B039BC;
      }
      goto L_08B03934;
    }
L_08B03934:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08B03948u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08B03948u) goto L_08B03948;
    return;
L_08B03948:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B03978;
      }
      goto L_08B0395C;
    }
L_08B0395C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B0396Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08B0396Cu) goto L_08B0396C;
    return;
L_08B0396C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08B03978;
L_08B03978:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03994;
      }
      goto L_08B03984;
    }
L_08B03984:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B03994;
L_08B03994:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B039BC;
      }
      goto L_08B039B8;
    }
L_08B039B8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08B039BC;
L_08B039BC:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B039D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 858u, 0x08AFBB3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B039D8u) goto L_08B039D8;
    return;
L_08B039D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
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
L_08B03A00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B03A74;
      }
      goto L_08B03A3C;
    }
L_08B03A3C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B03A68;
      }
      goto L_08B03A5C;
    }
L_08B03A5C:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B03A6C;
      }
      goto L_08B03A68;
    }
L_08B03A68:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08B03A6C;
L_08B03A6C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03A3C;
      }
      goto L_08B03A74;
    }
L_08B03A74:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B03AE4;
      }
      goto L_08B03A7C;
    }
L_08B03A7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03AB4;
      }
      goto L_08B03AA4;
    }
L_08B03AA4:
    ctx.gpr[31] = (0x08B03AACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 891u, 0x08AFBD1Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03AACu) goto L_08B03AAC;
    return;
L_08B03AAC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B03AE4;
      }
      goto L_08B03AB4;
    }
L_08B03AB4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03AD0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B03828;
L_08B03AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08B03B4C;
      }
      goto L_08B03AE4;
    }
L_08B03AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03B3C;
      }
      goto L_08B03B0C;
    }
L_08B03B0C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03B28u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B03828;
L_08B03B28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08B03B4C;
      }
      goto L_08B03B3C;
    }
L_08B03B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08B03B4C;
L_08B03B4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B03B6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B03D34;
      }
      goto L_08B03BA8;
    }
L_08B03BA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03C00;
      }
      goto L_08B03BB4;
    }
L_08B03BB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03C1C;
      }
      goto L_08B03BDC;
    }
L_08B03BDC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03BF8u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B03828;
L_08B03BF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03F7C;
      }
      goto L_08B03C00;
    }
L_08B03C00:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B03C10u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B03A00;
L_08B03C10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B03F7C;
      }
      goto L_08B03C1C;
    }
L_08B03C1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03CB0;
      }
      goto L_08B03C40;
    }
L_08B03C40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B03C4Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x08B03C4Cu) goto L_08B03C4C;
    return;
L_08B03C4C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B03C8C;
      }
      goto L_08B03C5C;
    }
L_08B03C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03CBC;
      }
      goto L_08B03C84;
    }
L_08B03C84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03D18;
      }
      goto L_08B03C8C;
    }
L_08B03C8C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B03CA8u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B03828;
L_08B03CA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03F7C;
      }
      goto L_08B03CB0;
    }
L_08B03CB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B03F7C;
      }
      goto L_08B03CBC;
    }
L_08B03CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03CF4;
      }
      goto L_08B03CD0;
    }
L_08B03CD0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B03CECu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B03828;
L_08B03CEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03F7C;
      }
      goto L_08B03CF4;
    }
L_08B03CF4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03D10u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B03828;
L_08B03D10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03F7C;
      }
      goto L_08B03D18;
    }
L_08B03D18:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B03D28u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B03A00;
L_08B03D28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B03F7C;
      }
      goto L_08B03D34;
    }
L_08B03D34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B03DBC;
      }
      goto L_08B03D44;
    }
L_08B03D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03DA0;
      }
      goto L_08B03D74;
    }
L_08B03D74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B03D98u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B03828;
L_08B03D98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03F7C;
      }
      goto L_08B03DA0;
    }
L_08B03DA0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B03DB0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B03A00;
L_08B03DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B03F7C;
      }
      goto L_08B03DBC;
    }
L_08B03DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B03DC8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 891u, 0x08AFBD1Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03DC8u) goto L_08B03DC8;
    return;
L_08B03DC8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03E74;
      }
      goto L_08B03DF0;
    }
L_08B03DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03E74;
      }
      goto L_08B03E18;
    }
L_08B03E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03E50;
      }
      goto L_08B03E2C;
    }
L_08B03E2C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B03E48u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B03828;
L_08B03E48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03F7C;
      }
      goto L_08B03E50;
    }
L_08B03E50:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03E6Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B03828;
L_08B03E6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03F7C;
      }
      goto L_08B03E74;
    }
L_08B03E74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B03E80u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x08B03E80u) goto L_08B03E80;
    return;
L_08B03E80:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B03EA8;
      }
      goto L_08B03E8C;
    }
L_08B03E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(110), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    goto L_08B03EA8;
L_08B03EA8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03F4C;
      }
      goto L_08B03EB0;
    }
L_08B03EB0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03F4C;
      }
      goto L_08B03EB8;
    }
L_08B03EB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B03EF0;
      }
      goto L_08B03EC8;
    }
L_08B03EC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03F4C;
      }
      goto L_08B03EF0;
    }
L_08B03EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03F28;
      }
      goto L_08B03F04;
    }
L_08B03F04:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B03F20u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08B03828;
L_08B03F20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03F7C;
      }
      goto L_08B03F28;
    }
L_08B03F28:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03F44u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B03828;
L_08B03F44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03F7C;
      }
      goto L_08B03F4C;
    }
L_08B03F4C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B03F60;
      }
      goto L_08B03F54;
    }
L_08B03F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B03F7C;
      }
      goto L_08B03F60;
    }
L_08B03F60:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B03F70u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B03A00;
L_08B03F70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B03F7C;
      }
      goto L_08B03F7C;
    }
L_08B03F7C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B03F9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B03FE4;
      }
      goto L_08B03FB0;
    }
L_08B03FB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08B03FB4;
L_08B03FB4:
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 128u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03FD4;
      }
      goto L_08B03FD0;
    }
L_08B03FD0:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08B03FD4;
L_08B03FD4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03FB4;
      }
      goto L_08B03FE4;
    }
L_08B03FE4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B03FEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 5u, 0x08B04034u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 1u, 0x08B04000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0191(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0191_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_191(Runtime &runtime) {
    runtime.register_generated_unit(191u, 0x08B00000u, 16384u, &recomp_unit_0191, &recomp_unit_0191_entry);
    runtime.register_function(0x08B00000u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00010u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0002Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00034u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00050u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00058u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00068u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00074u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00084u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B000B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B000D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B000E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B000F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B000FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00108u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00130u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00158u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0016Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00188u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00190u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00208u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00230u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00244u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00260u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00268u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00284u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0028Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00294u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B002A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B002B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B002BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B002DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00318u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00324u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0034Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00368u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00370u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00380u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0038Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B003B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B003BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B003CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B003F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B003FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00418u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00420u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0042Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00440u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0045Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00464u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00480u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00488u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00498u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B004A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B004B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B004E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00508u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00510u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00520u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0052Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00538u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00560u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00588u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0059Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B005B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B005C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B005DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B005E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B005F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B005FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00618u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00620u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00628u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00638u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00660u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00674u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00690u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00698u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0070Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00728u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00730u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00744u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00754u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0076Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00778u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00784u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0078Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00798u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00804u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00818u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0081Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00824u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0082Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00834u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0083Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00844u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0084Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00854u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0085Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00868u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00870u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00878u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00890u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0089Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00904u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00910u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0092Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00948u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00954u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0095Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00960u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0096Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00978u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0098Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A1Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A48u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A58u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A68u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A88u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00AA0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00AB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00ABCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00AD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00ADCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00AE8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00AF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00AFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B20u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B50u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B64u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B80u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BA0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BD4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BDCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BE4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C1Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C30u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C3Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C64u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C88u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C94u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00CA0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00CA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00CB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00CC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00CD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00CE0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00CECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00CF8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D30u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D3Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D58u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D70u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00DA0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00DACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00DB8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00DC0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00DD4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00DE8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00DFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E3Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E48u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E68u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00EA4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00EB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00EC0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00ECCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00ED4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00ED8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00EE0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00EF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00EFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F14u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F30u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F38u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F3Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FD8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FF4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FF8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01000u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0101Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01030u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0103Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01048u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01050u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01064u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0106Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01088u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01098u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01108u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01118u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01128u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01154u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01160u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01174u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01180u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01188u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01204u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01208u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01210u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0121Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0122Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0123Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01258u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01260u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01268u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0126Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01274u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01314u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01338u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01344u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01350u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01364u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01384u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01388u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B013A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B013ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B013B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B013C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B013D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B013ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B013F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01400u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01404u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01418u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01438u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01444u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01458u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01470u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01488u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B014B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B014BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B014DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B014E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01514u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0152Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0153Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01548u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01550u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01560u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01568u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01584u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B015E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B015ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01608u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01610u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01620u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0162Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01640u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0164Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01658u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0165Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01668u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01674u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0167Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01684u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01690u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01694u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0169Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B016E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01708u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01724u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01730u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01738u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01750u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0176Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01778u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01780u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01788u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01790u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01794u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0179Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01810u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01814u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0181Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01838u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0184Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01858u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01864u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0186Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01880u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01888u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01910u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0191Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01920u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0192Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0193Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01960u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01970u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0197Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01994u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01A58u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01A6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01A80u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01A8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01AACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01AB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01ABCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01AC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01AD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01AD8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01AE4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01AECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01AF8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B08u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B30u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B38u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B3Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B64u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B80u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B94u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BF4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C30u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C40u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C58u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C80u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CB8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CCCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CD4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CE4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CF8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D20u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D70u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D80u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DA0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DCCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DD4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DDCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DE8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DF8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E08u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E20u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E30u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E38u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E40u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01EB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01ED4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01EE4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01EF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F38u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FCCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FE0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02030u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0203Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02044u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02094u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0209Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02108u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02114u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0211Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02124u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02134u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02140u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02148u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02158u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02164u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0216Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02170u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02180u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0219Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02200u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0220Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0225Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0226Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02270u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0228Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02298u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B022F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02300u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02318u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02320u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02330u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02348u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02374u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B023BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B023F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02408u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02410u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02418u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02438u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02474u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0250Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02514u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02558u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B025ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B025B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B025D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B025E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02634u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02638u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02654u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B026CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B026D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02714u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02728u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02734u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02750u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0275Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02778u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02784u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B027A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B027B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B027BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02804u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02818u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0284Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0285Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02878u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02880u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0288Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B028A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B028DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B028E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B028F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0290Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02948u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02954u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02968u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0298Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B029B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B029D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B029E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B029F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B029FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02A2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02A74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02A80u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02AC0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02ACCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02AECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B14u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B64u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B78u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B88u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BDCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BF8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C14u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C1Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C30u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C38u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C3Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C88u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CA0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D64u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D68u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D70u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02DC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02DCCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02DD8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02DF4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E88u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02EACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02EC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02ED4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02EE4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02EF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02EF8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02EFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F50u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0304Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B030A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B030F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03104u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03114u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03124u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03140u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03148u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03150u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03154u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0315Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03178u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0318Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03198u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B031A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B031ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B031C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B031C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B031E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B031F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03200u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03208u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0320Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0321Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03230u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03238u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03244u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03254u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03260u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03268u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0326Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03278u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03288u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03308u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03328u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0332Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03338u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03340u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0334Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03354u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03360u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03368u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03374u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0337Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03384u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03408u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03410u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03418u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03434u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0344Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03454u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0345Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0346Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03478u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0347Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03484u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0348Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03500u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0351Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0357Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03584u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03608u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03618u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03628u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0362Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03634u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03638u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0364Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03658u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03668u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03678u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0367Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03684u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03688u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B036B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B036BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B036DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B036E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03714u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03734u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03740u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03754u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03780u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03784u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0379Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03804u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03828u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03854u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0385Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03864u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03884u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03898u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B038ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B038BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B038C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B038D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B038E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03904u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0391Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0392Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03934u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03948u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0395Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0396Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03978u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03984u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03994u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B039B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B039BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B039D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A3Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A68u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03AA4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03AACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03AB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03AD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03AE4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B3Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03BA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03BB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03BDCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03BF8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C1Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C40u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03CA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03CB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03CBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03CD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03CECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03CF4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03DA0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03DB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03DBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03DC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03DF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E48u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E50u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E80u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03EA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03EB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03EB8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03EC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03EF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F20u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F70u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03FB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03FB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03FD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03FD4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03FE4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03FECu, &recomp_unit_0191, "recomp_unit_0191");
}
} // namespace psprecomp
