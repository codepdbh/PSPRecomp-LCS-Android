#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0056[4093] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3,
    0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18,
    0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25, 0, 26, 27, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 31, 0,
    32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 38, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 46, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0,
    0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 53, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0,
    58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 71, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0,
    76, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81,
    0, 0, 0, 0, 82, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85, 86, 0, 0, 0, 87, 0, 0, 0, 0, 88, 89, 0, 0, 0, 90, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 93, 0, 0, 0, 94, 0, 95, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0,
    0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 102, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 112,
    0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0,
    0, 129, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0,
    143, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149,
    0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 152, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 170, 0, 171, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 175, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0,
    0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 182, 0, 183, 0, 0, 0, 184, 185, 0, 0, 0, 0, 0, 0,
    0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 191, 0, 192, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 205, 0, 206, 0, 0, 0,
    0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 210, 0, 211, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0,
    220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 233, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0,
    244, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 251, 252, 0, 253, 0, 254,
    0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 260, 261, 0, 0,
    0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 267, 0, 268, 0,
    0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 272, 273, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 280, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 288, 0, 0, 289,
    0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0,
    0, 296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0,
    0, 0, 303, 0, 0, 304, 0, 0, 0, 305, 0, 0, 306, 0, 307, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0,
    312, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0,
    0, 0, 0, 318, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325,
    0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0,
    0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0,
    0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0,
    0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0,
    352, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 355, 0, 356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 361, 362, 0, 0, 0, 0, 0,
    0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 368, 0, 369, 0, 0, 0, 0,
    0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0,
    0, 373, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 381,
    0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 393, 0, 394, 395, 0,
    0, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 401, 0, 402,
    0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 406, 0, 0, 0, 407, 0, 0,
    0, 0, 408, 0, 409, 410, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0,
    0, 0, 0, 415, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 419, 0, 0, 0, 0, 0, 0, 0, 0,
    420, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 425, 0, 426, 0, 0, 0, 0, 0, 0, 427,
    0, 0, 0, 428, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 431, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0,
    435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 438, 0, 439, 0, 440, 441, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0,
    0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 447, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0,
    451, 0, 0, 0, 452, 0, 453, 454, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0,
    0, 0, 0, 0, 0, 459, 460, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0,
    464, 0, 0, 0, 0, 465, 466, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0,
    0, 0, 0, 0, 471, 472, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 478, 479, 0,
    0, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 484, 485, 0, 486,
    487, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0,
    0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0,
    498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 502, 0, 503, 0, 504, 0, 505, 0, 0, 0, 0, 0, 506, 0,
    0, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    510, 0, 0, 0, 0, 511, 0, 512, 0, 513, 0, 514, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 0,
    0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 521,
    0, 0, 0, 522, 523, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 0, 0, 0,
    0, 0, 528, 529, 0, 530, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0,
    0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 535, 536, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0,
    0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 541, 542, 0, 543, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 0,
    0, 547, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 552, 0, 553, 0, 0, 0, 554, 0,
    0, 0, 555, 556, 0, 0, 557, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 561, 0, 0, 562, 0, 563, 564, 0, 0, 565, 0,
    0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 572, 0,
    0, 573, 0, 574, 575, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 0, 0,
    581, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 585, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 588,
    0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 591, 0, 0, 0, 0, 0,
    0, 592, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 595, 0, 596, 0, 0, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 601, 0, 0, 0, 602, 0, 603, 0, 0, 0,
    0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 608, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0,
    0, 612, 0, 0, 613, 0, 0, 614, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 618, 0, 0, 619, 0, 0, 620, 0, 621, 0,
    0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 623, 0, 624, 0, 625, 0, 0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 628, 0, 0, 0, 0, 0,
    629, 0, 630, 0, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 635, 0, 0, 0, 636, 0, 637,
    0, 638, 0, 0, 0, 639, 0, 0, 0, 640, 641, 0, 0, 642, 0, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 645, 0, 0, 0, 0, 0, 0,
    0, 646, 0, 647, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 649, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 653, 0, 0, 0, 0, 0, 654, 0, 655, 0, 0, 0, 0, 0, 0,
    656, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 660, 0, 0, 0, 0, 0, 661, 0,
    0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 664, 0, 0, 665, 0, 0, 666, 0, 0, 0, 667, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 0,
    670, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 0, 674, 0, 675, 0, 0, 676, 0, 677, 0, 0,
    678, 0, 0, 0, 0, 0, 679, 0, 680, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 683, 684, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 686, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 689, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 692, 0, 693, 0, 0, 0, 694, 0, 695, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0,
    0, 698, 0, 0, 0, 0, 0, 699, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 702, 0, 703, 0, 0, 704, 705, 0, 0, 0, 0, 0, 0, 0,
    0, 706, 0, 707, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 710, 711, 0, 712, 0, 0, 0, 0, 0, 713,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 715, 0, 0, 716, 0, 0, 717, 718, 0, 0, 0, 0, 0, 0, 0, 0,
    719, 0, 720, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 723, 724, 0, 725, 0, 0, 0, 0, 0, 0, 726,
    0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 730, 0, 0, 731, 0, 732, 733, 0, 0, 0,
    0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 739,
    740, 0, 741, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745,
    746, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 752, 0, 0, 0, 753, 0, 0, 754, 0, 0, 755, 0, 0, 0, 756, 0, 757, 0, 0, 0, 0, 0, 0, 758, 0, 759, 0,
    0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 762, 763, 0, 764, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0,
    766, 0, 0, 0, 0, 767, 0, 768, 0, 769, 770, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 772, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0,
    0, 774, 0, 0, 0, 0, 0, 0, 775, 776, 0, 777, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 779, 0, 0, 780, 0, 0, 0, 0, 781, 0,
    782, 0, 0, 0, 0, 783, 0, 784, 0, 0, 0, 0, 0, 785, 0, 0, 786, 0, 0, 787, 0, 0, 788, 0, 789, 0, 0, 0, 0, 0, 0, 790,
    0, 0, 0, 791, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794,
    0, 0, 795, 0, 796, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 798, 799, 0, 800, 0, 801, 802, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 804, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0,
    0, 806, 0, 0, 0, 0, 0, 0, 807, 808, 0, 809, 0, 0, 0, 0, 0, 810, 0, 0, 0, 811, 0, 812, 0, 813, 0, 0, 0, 0, 0, 814,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 817, 0, 0, 0, 818, 0, 0,
    0, 0, 0, 0, 0, 0, 819, 0, 820, 0, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 823, 824, 0, 825, 0,
    0, 0, 0, 0, 826, 0, 0, 0, 827, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 830, 0, 0, 0, 831, 0, 0,
    0, 0, 0, 0, 0, 0, 832, 0, 833, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 835, 0, 0, 0, 0, 0, 0, 836, 837, 0, 838, 0,
    0, 0, 0, 0, 0, 839, 0, 0, 0, 840, 0, 0, 841, 0, 0, 0, 842, 0, 0, 0, 843, 0, 844, 0, 0, 0, 0, 0, 0, 0, 845, 0,
    846, 0, 0, 847, 0, 0, 848, 0, 0, 0, 0, 0, 0, 0, 0, 849, 0, 850, 0, 0, 0, 0, 0, 851, 0, 0, 0, 852, 0, 0, 0, 853,
    854, 0, 0, 855, 0, 856, 0, 0, 857, 858, 0, 0, 0, 0, 0, 0, 859, 860, 0, 0, 0, 0, 0, 0, 0, 0, 861, 0, 862, 0, 0, 0,
    0, 0, 0, 863, 0, 0, 0, 0, 864, 0, 0, 0, 0, 0, 0, 865, 866, 0, 867, 0, 0, 0, 0, 0, 868, 0, 0, 0, 869,
};
void recomp_unit_0056_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088E4000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0056[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088E4000;
    case 2u: goto L_088E40EC;
    case 3u: goto L_088E40FC;
    case 4u: goto L_088E4108;
    case 5u: goto L_088E4110;
    case 6u: goto L_088E4118;
    case 7u: goto L_088E4120;
    case 8u: goto L_088E4128;
    case 9u: goto L_088E4130;
    case 10u: goto L_088E4138;
    case 11u: goto L_088E4140;
    case 12u: goto L_088E414C;
    case 13u: goto L_088E4154;
    case 14u: goto L_088E415C;
    case 15u: goto L_088E4164;
    case 16u: goto L_088E416C;
    case 17u: goto L_088E4174;
    case 18u: goto L_088E417C;
    case 19u: goto L_088E4184;
    case 20u: goto L_088E418C;
    case 21u: goto L_088E4194;
    case 22u: goto L_088E419C;
    case 23u: goto L_088E41A4;
    case 24u: goto L_088E41AC;
    case 25u: goto L_088E41B4;
    case 26u: goto L_088E41BC;
    case 27u: goto L_088E41C0;
    case 28u: goto L_088E41C8;
    case 29u: goto L_088E41D8;
    case 30u: goto L_088E41F0;
    case 31u: goto L_088E41F8;
    case 32u: goto L_088E4200;
    case 33u: goto L_088E4208;
    case 34u: goto L_088E4210;
    case 35u: goto L_088E4218;
    case 36u: goto L_088E4220;
    case 37u: goto L_088E4228;
    case 38u: goto L_088E4230;
    case 39u: goto L_088E4234;
    case 40u: goto L_088E423C;
    case 41u: goto L_088E4264;
    case 42u: goto L_088E4280;
    case 43u: goto L_088E4298;
    case 44u: goto L_088E42A8;
    case 45u: goto L_088E42B4;
    case 46u: goto L_088E42BC;
    case 47u: goto L_088E42C0;
    case 48u: goto L_088E42E4;
    case 49u: goto L_088E42EC;
    case 50u: goto L_088E4308;
    case 51u: goto L_088E431C;
    case 52u: goto L_088E4338;
    case 53u: goto L_088E433C;
    case 54u: goto L_088E4344;
    case 55u: goto L_088E435C;
    case 56u: goto L_088E4368;
    case 57u: goto L_088E4378;
    case 58u: goto L_088E4380;
    case 59u: goto L_088E4388;
    case 60u: goto L_088E4390;
    case 61u: goto L_088E4398;
    case 62u: goto L_088E43A0;
    case 63u: goto L_088E43A8;
    case 64u: goto L_088E43B0;
    case 65u: goto L_088E43B4;
    case 66u: goto L_088E43D8;
    case 67u: goto L_088E43E0;
    case 68u: goto L_088E43FC;
    case 69u: goto L_088E4410;
    case 70u: goto L_088E442C;
    case 71u: goto L_088E4430;
    case 72u: goto L_088E4438;
    case 73u: goto L_088E4454;
    case 74u: goto L_088E4464;
    case 75u: goto L_088E4470;
    case 76u: goto L_088E4480;
    case 77u: goto L_088E4490;
    case 78u: goto L_088E4498;
    case 79u: goto L_088E44B0;
    case 80u: goto L_088E44E8;
    case 81u: goto L_088E44FC;
    case 82u: goto L_088E4510;
    case 83u: goto L_088E4514;
    case 84u: goto L_088E4524;
    case 85u: goto L_088E4538;
    case 86u: goto L_088E453C;
    case 87u: goto L_088E454C;
    case 88u: goto L_088E4560;
    case 89u: goto L_088E4564;
    case 90u: goto L_088E4574;
    case 91u: goto L_088E4588;
    case 92u: goto L_088E45A4;
    case 93u: goto L_088E45A8;
    case 94u: goto L_088E45B8;
    case 95u: goto L_088E45C0;
    case 96u: goto L_088E45C4;
    case 97u: goto L_088E45E8;
    case 98u: goto L_088E45F0;
    case 99u: goto L_088E460C;
    case 100u: goto L_088E4620;
    case 101u: goto L_088E463C;
    case 102u: goto L_088E4640;
    case 103u: goto L_088E4648;
    case 104u: goto L_088E4660;
    case 105u: goto L_088E4688;
    case 106u: goto L_088E46A4;
    case 107u: goto L_088E46B4;
    case 108u: goto L_088E46CC;
    case 109u: goto L_088E46D8;
    case 110u: goto L_088E46E8;
    case 111u: goto L_088E46F4;
    case 112u: goto L_088E46FC;
    case 113u: goto L_088E4718;
    case 114u: goto L_088E4754;
    case 115u: goto L_088E4770;
    case 116u: goto L_088E47B0;
    case 117u: goto L_088E47D0;
    case 118u: goto L_088E47E0;
    case 119u: goto L_088E4800;
    case 120u: goto L_088E4808;
    case 121u: goto L_088E4820;
    case 122u: goto L_088E482C;
    case 123u: goto L_088E4834;
    case 124u: goto L_088E483C;
    case 125u: goto L_088E4844;
    case 126u: goto L_088E4850;
    case 127u: goto L_088E4860;
    case 128u: goto L_088E4868;
    case 129u: goto L_088E4884;
    case 130u: goto L_088E4894;
    case 131u: goto L_088E48A0;
    case 132u: goto L_088E48C4;
    case 133u: goto L_088E48CC;
    case 134u: goto L_088E48EC;
    case 135u: goto L_088E48F4;
    case 136u: goto L_088E4910;
    case 137u: goto L_088E4920;
    case 138u: goto L_088E4930;
    case 139u: goto L_088E4944;
    case 140u: goto L_088E4954;
    case 141u: goto L_088E495C;
    case 142u: goto L_088E4978;
    case 143u: goto L_088E4980;
    case 144u: goto L_088E498C;
    case 145u: goto L_088E4994;
    case 146u: goto L_088E49B0;
    case 147u: goto L_088E49C0;
    case 148u: goto L_088E49DC;
    case 149u: goto L_088E49FC;
    case 150u: goto L_088E4A0C;
    case 151u: goto L_088E4A60;
    case 152u: goto L_088E4A88;
    case 153u: goto L_088E4A90;
    case 154u: goto L_088E4A98;
    case 155u: goto L_088E4AA0;
    case 156u: goto L_088E4AA8;
    case 157u: goto L_088E4AB0;
    case 158u: goto L_088E4AC8;
    case 159u: goto L_088E4AD0;
    case 160u: goto L_088E4AD8;
    case 161u: goto L_088E4AE0;
    case 162u: goto L_088E4AE8;
    case 163u: goto L_088E4B00;
    case 164u: goto L_088E4B24;
    case 165u: goto L_088E4B44;
    case 166u: goto L_088E4B54;
    case 167u: goto L_088E4BA8;
    case 168u: goto L_088E4BD0;
    case 169u: goto L_088E4BD8;
    case 170u: goto L_088E4BF0;
    case 171u: goto L_088E4BF8;
    case 172u: goto L_088E4C00;
    case 173u: goto L_088E4C30;
    case 174u: goto L_088E4C38;
    case 175u: goto L_088E4C48;
    case 176u: goto L_088E4C4C;
    case 177u: goto L_088E4C70;
    case 178u: goto L_088E4C78;
    case 179u: goto L_088E4C94;
    case 180u: goto L_088E4CA8;
    case 181u: goto L_088E4CC4;
    case 182u: goto L_088E4CC8;
    case 183u: goto L_088E4CD0;
    case 184u: goto L_088E4CE0;
    case 185u: goto L_088E4CE4;
    case 186u: goto L_088E4D08;
    case 187u: goto L_088E4D10;
    case 188u: goto L_088E4D2C;
    case 189u: goto L_088E4D40;
    case 190u: goto L_088E4D5C;
    case 191u: goto L_088E4D60;
    case 192u: goto L_088E4D68;
    case 193u: goto L_088E4D80;
    case 194u: goto L_088E4D98;
    case 195u: goto L_088E4DA0;
    case 196u: goto L_088E4DBC;
    case 197u: goto L_088E4DCC;
    case 198u: goto L_088E4DD8;
    case 199u: goto L_088E4DF0;
    case 200u: goto L_088E4E04;
    case 201u: goto L_088E4E0C;
    case 202u: goto L_088E4E28;
    case 203u: goto L_088E4E58;
    case 204u: goto L_088E4E64;
    case 205u: goto L_088E4E68;
    case 206u: goto L_088E4E70;
    case 207u: goto L_088E4E8C;
    case 208u: goto L_088E4EBC;
    case 209u: goto L_088E4EC8;
    case 210u: goto L_088E4ECC;
    case 211u: goto L_088E4ED4;
    case 212u: goto L_088E4EDC;
    case 213u: goto L_088E4EF4;
    case 214u: goto L_088E4F04;
    case 215u: goto L_088E4F1C;
    case 216u: goto L_088E4F34;
    case 217u: goto L_088E4F3C;
    case 218u: goto L_088E4F44;
    case 219u: goto L_088E4F78;
    case 220u: goto L_088E4F80;
    case 221u: goto L_088E4F98;
    case 222u: goto L_088E4FB8;
    case 223u: goto L_088E4FC0;
    case 224u: goto L_088E4FC8;
    case 225u: goto L_088E5008;
    case 226u: goto L_088E5010;
    case 227u: goto L_088E5018;
    case 228u: goto L_088E5034;
    case 229u: goto L_088E5044;
    case 230u: goto L_088E5050;
    case 231u: goto L_088E5060;
    case 232u: goto L_088E5070;
    case 233u: goto L_088E5078;
    case 234u: goto L_088E5090;
    case 235u: goto L_088E50C4;
    case 236u: goto L_088E50F0;
    case 237u: goto L_088E5110;
    case 238u: goto L_088E5120;
    case 239u: goto L_088E5130;
    case 240u: goto L_088E5138;
    case 241u: goto L_088E5154;
    case 242u: goto L_088E5164;
    case 243u: goto L_088E5174;
    case 244u: goto L_088E5180;
    case 245u: goto L_088E5188;
    case 246u: goto L_088E51A0;
    case 247u: goto L_088E51B0;
    case 248u: goto L_088E51B8;
    case 249u: goto L_088E51D0;
    case 250u: goto L_088E51E0;
    case 251u: goto L_088E51E8;
    case 252u: goto L_088E51EC;
    case 253u: goto L_088E51F4;
    case 254u: goto L_088E51FC;
    case 255u: goto L_088E521C;
    case 256u: goto L_088E5224;
    case 257u: goto L_088E5240;
    case 258u: goto L_088E5250;
    case 259u: goto L_088E5268;
    case 260u: goto L_088E5270;
    case 261u: goto L_088E5274;
    case 262u: goto L_088E5298;
    case 263u: goto L_088E52A0;
    case 264u: goto L_088E52BC;
    case 265u: goto L_088E52D0;
    case 266u: goto L_088E52EC;
    case 267u: goto L_088E52F0;
    case 268u: goto L_088E52F8;
    case 269u: goto L_088E5314;
    case 270u: goto L_088E5324;
    case 271u: goto L_088E5334;
    case 272u: goto L_088E533C;
    case 273u: goto L_088E5340;
    case 274u: goto L_088E5348;
    case 275u: goto L_088E5364;
    case 276u: goto L_088E536C;
    case 277u: goto L_088E5388;
    case 278u: goto L_088E539C;
    case 279u: goto L_088E53B8;
    case 280u: goto L_088E53BC;
    case 281u: goto L_088E53C4;
    case 282u: goto L_088E53E0;
    case 283u: goto L_088E540C;
    case 284u: goto L_088E5414;
    case 285u: goto L_088E5430;
    case 286u: goto L_088E5454;
    case 287u: goto L_088E5460;
    case 288u: goto L_088E5470;
    case 289u: goto L_088E547C;
    case 290u: goto L_088E548C;
    case 291u: goto L_088E5498;
    case 292u: goto L_088E54C4;
    case 293u: goto L_088E54CC;
    case 294u: goto L_088E54E8;
    case 295u: goto L_088E54F8;
    case 296u: goto L_088E5504;
    case 297u: goto L_088E5514;
    case 298u: goto L_088E5524;
    case 299u: goto L_088E552C;
    case 300u: goto L_088E5548;
    case 301u: goto L_088E556C;
    case 302u: goto L_088E5578;
    case 303u: goto L_088E5588;
    case 304u: goto L_088E5594;
    case 305u: goto L_088E55A4;
    case 306u: goto L_088E55B0;
    case 307u: goto L_088E55B8;
    case 308u: goto L_088E55C0;
    case 309u: goto L_088E55D8;
    case 310u: goto L_088E55E8;
    case 311u: goto L_088E55F8;
    case 312u: goto L_088E5600;
    case 313u: goto L_088E560C;
    case 314u: goto L_088E5614;
    case 315u: goto L_088E5630;
    case 316u: goto L_088E5668;
    case 317u: goto L_088E5670;
    case 318u: goto L_088E568C;
    case 319u: goto L_088E5698;
    case 320u: goto L_088E56A0;
    case 321u: goto L_088E56BC;
    case 322u: goto L_088E56C8;
    case 323u: goto L_088E56D0;
    case 324u: goto L_088E56EC;
    case 325u: goto L_088E56FC;
    case 326u: goto L_088E5710;
    case 327u: goto L_088E571C;
    case 328u: goto L_088E5734;
    case 329u: goto L_088E573C;
    case 330u: goto L_088E5754;
    case 331u: goto L_088E575C;
    case 332u: goto L_088E5778;
    case 333u: goto L_088E5788;
    case 334u: goto L_088E57A0;
    case 335u: goto L_088E57C0;
    case 336u: goto L_088E57C4;
    case 337u: goto L_088E57E8;
    case 338u: goto L_088E57F0;
    case 339u: goto L_088E580C;
    case 340u: goto L_088E5820;
    case 341u: goto L_088E583C;
    case 342u: goto L_088E5840;
    case 343u: goto L_088E5848;
    case 344u: goto L_088E5868;
    case 345u: goto L_088E5878;
    case 346u: goto L_088E5898;
    case 347u: goto L_088E58AC;
    case 348u: goto L_088E58B4;
    case 349u: goto L_088E58D0;
    case 350u: goto L_088E58E0;
    case 351u: goto L_088E58EC;
    case 352u: goto L_088E5900;
    case 353u: goto L_088E5914;
    case 354u: goto L_088E591C;
    case 355u: goto L_088E5934;
    case 356u: goto L_088E593C;
    case 357u: goto L_088E5944;
    case 358u: goto L_088E594C;
    case 359u: goto L_088E5954;
    case 360u: goto L_088E595C;
    case 361u: goto L_088E5964;
    case 362u: goto L_088E5968;
    case 363u: goto L_088E598C;
    case 364u: goto L_088E5994;
    case 365u: goto L_088E59B0;
    case 366u: goto L_088E59C4;
    case 367u: goto L_088E59E0;
    case 368u: goto L_088E59E4;
    case 369u: goto L_088E59EC;
    case 370u: goto L_088E5A08;
    case 371u: goto L_088E5A64;
    case 372u: goto L_088E5A6C;
    case 373u: goto L_088E5A84;
    case 374u: goto L_088E5A90;
    case 375u: goto L_088E5AA4;
    case 376u: goto L_088E5AB4;
    case 377u: goto L_088E5ABC;
    case 378u: goto L_088E5AD0;
    case 379u: goto L_088E5AE4;
    case 380u: goto L_088E5AEC;
    case 381u: goto L_088E5AFC;
    case 382u: goto L_088E5B08;
    case 383u: goto L_088E5B10;
    case 384u: goto L_088E5B2C;
    case 385u: goto L_088E5B3C;
    case 386u: goto L_088E5B54;
    case 387u: goto L_088E5B5C;
    case 388u: goto L_088E5B78;
    case 389u: goto L_088E5BAC;
    case 390u: goto L_088E5BC0;
    case 391u: goto L_088E5BD4;
    case 392u: goto L_088E5BE4;
    case 393u: goto L_088E5BEC;
    case 394u: goto L_088E5BF4;
    case 395u: goto L_088E5BF8;
    case 396u: goto L_088E5C1C;
    case 397u: goto L_088E5C24;
    case 398u: goto L_088E5C40;
    case 399u: goto L_088E5C54;
    case 400u: goto L_088E5C70;
    case 401u: goto L_088E5C74;
    case 402u: goto L_088E5C7C;
    case 403u: goto L_088E5C94;
    case 404u: goto L_088E5CCC;
    case 405u: goto L_088E5CE0;
    case 406u: goto L_088E5CE4;
    case 407u: goto L_088E5CF4;
    case 408u: goto L_088E5D08;
    case 409u: goto L_088E5D10;
    case 410u: goto L_088E5D14;
    case 411u: goto L_088E5D38;
    case 412u: goto L_088E5D40;
    case 413u: goto L_088E5D5C;
    case 414u: goto L_088E5D70;
    case 415u: goto L_088E5D8C;
    case 416u: goto L_088E5D90;
    case 417u: goto L_088E5D98;
    case 418u: goto L_088E5DD8;
    case 419u: goto L_088E5DDC;
    case 420u: goto L_088E5E00;
    case 421u: goto L_088E5E08;
    case 422u: goto L_088E5E24;
    case 423u: goto L_088E5E38;
    case 424u: goto L_088E5E54;
    case 425u: goto L_088E5E58;
    case 426u: goto L_088E5E60;
    case 427u: goto L_088E5E7C;
    case 428u: goto L_088E5E8C;
    case 429u: goto L_088E5E98;
    case 430u: goto L_088E5EAC;
    case 431u: goto L_088E5EB8;
    case 432u: goto L_088E5EC0;
    case 433u: goto L_088E5EDC;
    case 434u: goto L_088E5EEC;
    case 435u: goto L_088E5F00;
    case 436u: goto L_088E5F10;
    case 437u: goto L_088E5F20;
    case 438u: goto L_088E5F2C;
    case 439u: goto L_088E5F34;
    case 440u: goto L_088E5F3C;
    case 441u: goto L_088E5F40;
    case 442u: goto L_088E5F64;
    case 443u: goto L_088E5F6C;
    case 444u: goto L_088E5F88;
    case 445u: goto L_088E5F9C;
    case 446u: goto L_088E5FB8;
    case 447u: goto L_088E5FBC;
    case 448u: goto L_088E5FC4;
    case 449u: goto L_088E5FDC;
    case 450u: goto L_088E5FEC;
    case 451u: goto L_088E6000;
    case 452u: goto L_088E6010;
    case 453u: goto L_088E6018;
    case 454u: goto L_088E601C;
    case 455u: goto L_088E6040;
    case 456u: goto L_088E6048;
    case 457u: goto L_088E6064;
    case 458u: goto L_088E6078;
    case 459u: goto L_088E6094;
    case 460u: goto L_088E6098;
    case 461u: goto L_088E60A0;
    case 462u: goto L_088E60B8;
    case 463u: goto L_088E60EC;
    case 464u: goto L_088E6100;
    case 465u: goto L_088E6114;
    case 466u: goto L_088E6118;
    case 467u: goto L_088E613C;
    case 468u: goto L_088E6144;
    case 469u: goto L_088E6160;
    case 470u: goto L_088E6174;
    case 471u: goto L_088E6190;
    case 472u: goto L_088E6194;
    case 473u: goto L_088E619C;
    case 474u: goto L_088E61B4;
    case 475u: goto L_088E61C4;
    case 476u: goto L_088E61D4;
    case 477u: goto L_088E61E4;
    case 478u: goto L_088E61F4;
    case 479u: goto L_088E61F8;
    case 480u: goto L_088E621C;
    case 481u: goto L_088E6224;
    case 482u: goto L_088E6240;
    case 483u: goto L_088E6254;
    case 484u: goto L_088E6270;
    case 485u: goto L_088E6274;
    case 486u: goto L_088E627C;
    case 487u: goto L_088E6280;
    case 488u: goto L_088E629C;
    case 489u: goto L_088E62D4;
    case 490u: goto L_088E62F0;
    case 491u: goto L_088E630C;
    case 492u: goto L_088E631C;
    case 493u: goto L_088E6330;
    case 494u: goto L_088E6340;
    case 495u: goto L_088E6350;
    case 496u: goto L_088E6364;
    case 497u: goto L_088E6378;
    case 498u: goto L_088E6380;
    case 499u: goto L_088E6398;
    case 500u: goto L_088E63A8;
    case 501u: goto L_088E63B8;
    case 502u: goto L_088E63C8;
    case 503u: goto L_088E63D0;
    case 504u: goto L_088E63D8;
    case 505u: goto L_088E63E0;
    case 506u: goto L_088E63F8;
    case 507u: goto L_088E6414;
    case 508u: goto L_088E6424;
    case 509u: goto L_088E6430;
    case 510u: goto L_088E6480;
    case 511u: goto L_088E6494;
    case 512u: goto L_088E649C;
    case 513u: goto L_088E64A4;
    case 514u: goto L_088E64AC;
    case 515u: goto L_088E64B4;
    case 516u: goto L_088E64EC;
    case 517u: goto L_088E64F4;
    case 518u: goto L_088E6510;
    case 519u: goto L_088E6544;
    case 520u: goto L_088E6558;
    case 521u: goto L_088E657C;
    case 522u: goto L_088E658C;
    case 523u: goto L_088E6590;
    case 524u: goto L_088E65B4;
    case 525u: goto L_088E65BC;
    case 526u: goto L_088E65D8;
    case 527u: goto L_088E65EC;
    case 528u: goto L_088E6608;
    case 529u: goto L_088E660C;
    case 530u: goto L_088E6614;
    case 531u: goto L_088E6630;
    case 532u: goto L_088E6664;
    case 533u: goto L_088E6678;
    case 534u: goto L_088E669C;
    case 535u: goto L_088E66AC;
    case 536u: goto L_088E66B0;
    case 537u: goto L_088E66D4;
    case 538u: goto L_088E66DC;
    case 539u: goto L_088E66F8;
    case 540u: goto L_088E670C;
    case 541u: goto L_088E6728;
    case 542u: goto L_088E672C;
    case 543u: goto L_088E6734;
    case 544u: goto L_088E6750;
    case 545u: goto L_088E6760;
    case 546u: goto L_088E6774;
    case 547u: goto L_088E6784;
    case 548u: goto L_088E6794;
    case 549u: goto L_088E67A8;
    case 550u: goto L_088E67C0;
    case 551u: goto L_088E67D0;
    case 552u: goto L_088E67E0;
    case 553u: goto L_088E67E8;
    case 554u: goto L_088E67F8;
    case 555u: goto L_088E6808;
    case 556u: goto L_088E680C;
    case 557u: goto L_088E6818;
    case 558u: goto L_088E6820;
    case 559u: goto L_088E6838;
    case 560u: goto L_088E6848;
    case 561u: goto L_088E6854;
    case 562u: goto L_088E6860;
    case 563u: goto L_088E6868;
    case 564u: goto L_088E686C;
    case 565u: goto L_088E6878;
    case 566u: goto L_088E6890;
    case 567u: goto L_088E68F0;
    case 568u: goto L_088E6930;
    case 569u: goto L_088E6944;
    case 570u: goto L_088E695C;
    case 571u: goto L_088E696C;
    case 572u: goto L_088E6978;
    case 573u: goto L_088E6984;
    case 574u: goto L_088E698C;
    case 575u: goto L_088E6990;
    case 576u: goto L_088E699C;
    case 577u: goto L_088E69B4;
    case 578u: goto L_088E6A18;
    case 579u: goto L_088E6A58;
    case 580u: goto L_088E6A6C;
    case 581u: goto L_088E6A80;
    case 582u: goto L_088E6A88;
    case 583u: goto L_088E6AA0;
    case 584u: goto L_088E6AB0;
    case 585u: goto L_088E6AB8;
    case 586u: goto L_088E6AC0;
    case 587u: goto L_088E6ADC;
    case 588u: goto L_088E6AFC;
    case 589u: goto L_088E6B04;
    case 590u: goto L_088E6B60;
    case 591u: goto L_088E6B68;
    case 592u: goto L_088E6B84;
    case 593u: goto L_088E6B94;
    case 594u: goto L_088E6BA8;
    case 595u: goto L_088E6C08;
    case 596u: goto L_088E6C10;
    case 597u: goto L_088E6C28;
    case 598u: goto L_088E6C38;
    case 599u: goto L_088E6C44;
    case 600u: goto L_088E6C50;
    case 601u: goto L_088E6C58;
    case 602u: goto L_088E6C68;
    case 603u: goto L_088E6C70;
    case 604u: goto L_088E6C8C;
    case 605u: goto L_088E6C9C;
    case 606u: goto L_088E6CA8;
    case 607u: goto L_088E6CBC;
    case 608u: goto L_088E6CC8;
    case 609u: goto L_088E6CD0;
    case 610u: goto L_088E6CE8;
    case 611u: goto L_088E6CF8;
    case 612u: goto L_088E6D04;
    case 613u: goto L_088E6D10;
    case 614u: goto L_088E6D1C;
    case 615u: goto L_088E6D24;
    case 616u: goto L_088E6D3C;
    case 617u: goto L_088E6D4C;
    case 618u: goto L_088E6D58;
    case 619u: goto L_088E6D64;
    case 620u: goto L_088E6D70;
    case 621u: goto L_088E6D78;
    case 622u: goto L_088E6D90;
    case 623u: goto L_088E6DA8;
    case 624u: goto L_088E6DB0;
    case 625u: goto L_088E6DB8;
    case 626u: goto L_088E6DC4;
    case 627u: goto L_088E6DE0;
    case 628u: goto L_088E6DE8;
    case 629u: goto L_088E6E00;
    case 630u: goto L_088E6E08;
    case 631u: goto L_088E6E18;
    case 632u: goto L_088E6E28;
    case 633u: goto L_088E6E38;
    case 634u: goto L_088E6E5C;
    case 635u: goto L_088E6E64;
    case 636u: goto L_088E6E74;
    case 637u: goto L_088E6E7C;
    case 638u: goto L_088E6E84;
    case 639u: goto L_088E6E94;
    case 640u: goto L_088E6EA4;
    case 641u: goto L_088E6EA8;
    case 642u: goto L_088E6EB4;
    case 643u: goto L_088E6EC8;
    case 644u: goto L_088E6ED8;
    case 645u: goto L_088E6EE4;
    case 646u: goto L_088E6F04;
    case 647u: goto L_088E6F0C;
    case 648u: goto L_088E6F2C;
    case 649u: goto L_088E6F44;
    case 650u: goto L_088E6F54;
    case 651u: goto L_088E6FA8;
    case 652u: goto L_088E6FBC;
    case 653u: goto L_088E6FC4;
    case 654u: goto L_088E6FDC;
    case 655u: goto L_088E6FE4;
    case 656u: goto L_088E7000;
    case 657u: goto L_088E7010;
    case 658u: goto L_088E7024;
    case 659u: goto L_088E7058;
    case 660u: goto L_088E7060;
    case 661u: goto L_088E7078;
    case 662u: goto L_088E7088;
    case 663u: goto L_088E7098;
    case 664u: goto L_088E70A8;
    case 665u: goto L_088E70B4;
    case 666u: goto L_088E70C0;
    case 667u: goto L_088E70D0;
    case 668u: goto L_088E70D8;
    case 669u: goto L_088E70F0;
    case 670u: goto L_088E7100;
    case 671u: goto L_088E7118;
    case 672u: goto L_088E7138;
    case 673u: goto L_088E7140;
    case 674u: goto L_088E7158;
    case 675u: goto L_088E7160;
    case 676u: goto L_088E716C;
    case 677u: goto L_088E7174;
    case 678u: goto L_088E7180;
    case 679u: goto L_088E7198;
    case 680u: goto L_088E71A0;
    case 681u: goto L_088E71BC;
    case 682u: goto L_088E71E8;
    case 683u: goto L_088E71F4;
    case 684u: goto L_088E71F8;
    case 685u: goto L_088E7238;
    case 686u: goto L_088E7240;
    case 687u: goto L_088E725C;
    case 688u: goto L_088E72B4;
    case 689u: goto L_088E72BC;
    case 690u: goto L_088E72D8;
    case 691u: goto L_088E72E8;
    case 692u: goto L_088E7314;
    case 693u: goto L_088E731C;
    case 694u: goto L_088E732C;
    case 695u: goto L_088E7334;
    case 696u: goto L_088E7350;
    case 697u: goto L_088E7360;
    case 698u: goto L_088E7384;
    case 699u: goto L_088E739C;
    case 700u: goto L_088E73AC;
    case 701u: goto L_088E73BC;
    case 702u: goto L_088E73C8;
    case 703u: goto L_088E73D0;
    case 704u: goto L_088E73DC;
    case 705u: goto L_088E73E0;
    case 706u: goto L_088E7404;
    case 707u: goto L_088E740C;
    case 708u: goto L_088E7428;
    case 709u: goto L_088E743C;
    case 710u: goto L_088E7458;
    case 711u: goto L_088E745C;
    case 712u: goto L_088E7464;
    case 713u: goto L_088E747C;
    case 714u: goto L_088E74B0;
    case 715u: goto L_088E74C0;
    case 716u: goto L_088E74CC;
    case 717u: goto L_088E74D8;
    case 718u: goto L_088E74DC;
    case 719u: goto L_088E7500;
    case 720u: goto L_088E7508;
    case 721u: goto L_088E7524;
    case 722u: goto L_088E7538;
    case 723u: goto L_088E7554;
    case 724u: goto L_088E7558;
    case 725u: goto L_088E7560;
    case 726u: goto L_088E757C;
    case 727u: goto L_088E758C;
    case 728u: goto L_088E75A8;
    case 729u: goto L_088E75CC;
    case 730u: goto L_088E75D8;
    case 731u: goto L_088E75E4;
    case 732u: goto L_088E75EC;
    case 733u: goto L_088E75F0;
    case 734u: goto L_088E7604;
    case 735u: goto L_088E7628;
    case 736u: goto L_088E7630;
    case 737u: goto L_088E764C;
    case 738u: goto L_088E7660;
    case 739u: goto L_088E767C;
    case 740u: goto L_088E7680;
    case 741u: goto L_088E7688;
    case 742u: goto L_088E76A0;
    case 743u: goto L_088E76BC;
    case 744u: goto L_088E76D4;
    case 745u: goto L_088E76FC;
    case 746u: goto L_088E7700;
    case 747u: goto L_088E7710;
    case 748u: goto L_088E772C;
    case 749u: goto L_088E773C;
    case 750u: goto L_088E774C;
    case 751u: goto L_088E7764;
    case 752u: goto L_088E7794;
    case 753u: goto L_088E77A4;
    case 754u: goto L_088E77B0;
    case 755u: goto L_088E77BC;
    case 756u: goto L_088E77CC;
    case 757u: goto L_088E77D4;
    case 758u: goto L_088E77F0;
    case 759u: goto L_088E77F8;
    case 760u: goto L_088E7814;
    case 761u: goto L_088E7828;
    case 762u: goto L_088E7844;
    case 763u: goto L_088E7848;
    case 764u: goto L_088E7850;
    case 765u: goto L_088E7868;
    case 766u: goto L_088E7880;
    case 767u: goto L_088E7894;
    case 768u: goto L_088E789C;
    case 769u: goto L_088E78A4;
    case 770u: goto L_088E78A8;
    case 771u: goto L_088E78CC;
    case 772u: goto L_088E78D4;
    case 773u: goto L_088E78F0;
    case 774u: goto L_088E7904;
    case 775u: goto L_088E7920;
    case 776u: goto L_088E7924;
    case 777u: goto L_088E792C;
    case 778u: goto L_088E7948;
    case 779u: goto L_088E7958;
    case 780u: goto L_088E7964;
    case 781u: goto L_088E7978;
    case 782u: goto L_088E7980;
    case 783u: goto L_088E7994;
    case 784u: goto L_088E799C;
    case 785u: goto L_088E79B4;
    case 786u: goto L_088E79C0;
    case 787u: goto L_088E79CC;
    case 788u: goto L_088E79D8;
    case 789u: goto L_088E79E0;
    case 790u: goto L_088E79FC;
    case 791u: goto L_088E7A0C;
    case 792u: goto L_088E7A1C;
    case 793u: goto L_088E7A38;
    case 794u: goto L_088E7A7C;
    case 795u: goto L_088E7A88;
    case 796u: goto L_088E7A90;
    case 797u: goto L_088E7AB0;
    case 798u: goto L_088E7B10;
    case 799u: goto L_088E7B14;
    case 800u: goto L_088E7B1C;
    case 801u: goto L_088E7B24;
    case 802u: goto L_088E7B28;
    case 803u: goto L_088E7B4C;
    case 804u: goto L_088E7B54;
    case 805u: goto L_088E7B70;
    case 806u: goto L_088E7B84;
    case 807u: goto L_088E7BA0;
    case 808u: goto L_088E7BA4;
    case 809u: goto L_088E7BAC;
    case 810u: goto L_088E7BC4;
    case 811u: goto L_088E7BD4;
    case 812u: goto L_088E7BDC;
    case 813u: goto L_088E7BE4;
    case 814u: goto L_088E7BFC;
    case 815u: goto L_088E7C30;
    case 816u: goto L_088E7C5C;
    case 817u: goto L_088E7C64;
    case 818u: goto L_088E7C74;
    case 819u: goto L_088E7C98;
    case 820u: goto L_088E7CA0;
    case 821u: goto L_088E7CBC;
    case 822u: goto L_088E7CD0;
    case 823u: goto L_088E7CEC;
    case 824u: goto L_088E7CF0;
    case 825u: goto L_088E7CF8;
    case 826u: goto L_088E7D10;
    case 827u: goto L_088E7D20;
    case 828u: goto L_088E7D34;
    case 829u: goto L_088E7D5C;
    case 830u: goto L_088E7D64;
    case 831u: goto L_088E7D74;
    case 832u: goto L_088E7D98;
    case 833u: goto L_088E7DA0;
    case 834u: goto L_088E7DBC;
    case 835u: goto L_088E7DD0;
    case 836u: goto L_088E7DEC;
    case 837u: goto L_088E7DF0;
    case 838u: goto L_088E7DF8;
    case 839u: goto L_088E7E14;
    case 840u: goto L_088E7E24;
    case 841u: goto L_088E7E30;
    case 842u: goto L_088E7E40;
    case 843u: goto L_088E7E50;
    case 844u: goto L_088E7E58;
    case 845u: goto L_088E7E78;
    case 846u: goto L_088E7E80;
    case 847u: goto L_088E7E8C;
    case 848u: goto L_088E7E98;
    case 849u: goto L_088E7EBC;
    case 850u: goto L_088E7EC4;
    case 851u: goto L_088E7EDC;
    case 852u: goto L_088E7EEC;
    case 853u: goto L_088E7EFC;
    case 854u: goto L_088E7F00;
    case 855u: goto L_088E7F0C;
    case 856u: goto L_088E7F14;
    case 857u: goto L_088E7F20;
    case 858u: goto L_088E7F24;
    case 859u: goto L_088E7F40;
    case 860u: goto L_088E7F44;
    case 861u: goto L_088E7F68;
    case 862u: goto L_088E7F70;
    case 863u: goto L_088E7F8C;
    case 864u: goto L_088E7FA0;
    case 865u: goto L_088E7FBC;
    case 866u: goto L_088E7FC0;
    case 867u: goto L_088E7FC8;
    case 868u: goto L_088E7FE0;
    case 869u: goto L_088E7FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088E4000:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21352)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21380)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[14] = (2227u << 16u);
    ctx.gpr[13] = (2227u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(21360), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[2] = (2274u << 16u);
    ctx.gpr[15] = (2227u << 16u);
    ctx.gpr[24] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(19552));
    ctx.gpr[10] = (16179u << 16u);
    ctx.gpr[9] = (ctx.gpr[10] | 13107u);
    ctx.gpr[3] = (49024u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[11] = (15948u << 16u);
    ctx.gpr[10] = (ctx.gpr[11] | 52429u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(21368), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[12] = (16128u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(21364), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21372), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(19552), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(21376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(21384), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E40EC:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 97 ? 1u : 0u);
      if (branch_taken) {
          goto L_088E4138;
      }
      goto L_088E40FC;
    }
L_088E40FC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
        goto L_088E4128;
    }
    goto L_088E4108;
L_088E4108:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088E4118;
      }
      goto L_088E4110;
    }
L_088E4110:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4120;
      }
      goto L_088E4118;
    }
L_088E4118:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E41C0;
      }
      goto L_088E4120;
    }
L_088E4120:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088E41C0;
      }
      goto L_088E4128;
    }
L_088E4128:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4164;
      }
      goto L_088E4130;
    }
L_088E4130:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E417C;
      }
      goto L_088E4138;
    }
L_088E4138:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 105 ? 1u : 0u);
        goto L_088E4154;
    }
    goto L_088E4140;
L_088E4140:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4118;
      }
      goto L_088E414C;
    }
L_088E414C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4194;
      }
      goto L_088E4154;
    }
L_088E4154:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4118;
      }
      goto L_088E415C;
    }
L_088E415C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E41AC;
      }
      goto L_088E4164;
    }
L_088E4164:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4174;
      }
      goto L_088E416C;
    }
L_088E416C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4118;
      }
      goto L_088E4174;
    }
L_088E4174:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088E41C0;
      }
      goto L_088E417C;
    }
L_088E417C:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E418C;
      }
      goto L_088E4184;
    }
L_088E4184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4118;
      }
      goto L_088E418C;
    }
L_088E418C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088E41C0;
      }
      goto L_088E4194;
    }
L_088E4194:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E41A4;
      }
      goto L_088E419C;
    }
L_088E419C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4118;
      }
      goto L_088E41A4;
    }
L_088E41A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088E41C0;
      }
      goto L_088E41AC;
    }
L_088E41AC:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E41BC;
      }
      goto L_088E41B4;
    }
L_088E41B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4118;
      }
      goto L_088E41BC;
    }
L_088E41BC:
    ctx.gpr[2] = (0u | 1u);
    goto L_088E41C0;
L_088E41C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E41C8:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E41F8;
      }
      goto L_088E41D8;
    }
L_088E41D8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(14264)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E41F0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4200;
      }
      goto L_088E41F8;
    }
L_088E41F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E4234;
      }
      goto L_088E4200;
    }
L_088E4200:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088E4234;
      }
      goto L_088E4208;
    }
L_088E4208:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4218;
      }
      goto L_088E4210;
    }
L_088E4210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E41F8;
      }
      goto L_088E4218;
    }
L_088E4218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088E4234;
      }
      goto L_088E4220;
    }
L_088E4220:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4230;
      }
      goto L_088E4228;
    }
L_088E4228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E41F8;
      }
      goto L_088E4230;
    }
L_088E4230:
    ctx.gpr[2] = (0u | 1u);
    goto L_088E4234;
L_088E4234:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E423C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1006));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(99) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E627C;
      }
      goto L_088E4264;
    }
L_088E4264:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1006));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(14336)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4280:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E4298u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E4298u) goto L_088E4298;
    return;
L_088E4298:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E42A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E42A8u) goto L_088E42A8;
    return;
L_088E42A8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088E42B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x088E42B4u) goto L_088E42B4;
    return;
L_088E42B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E42C0;
      }
      goto L_088E42BC;
    }
L_088E42BC:
    ctx.gpr[17] = (0u | 1u);
    goto L_088E42C0;
L_088E42C0:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E42EC;
      }
      goto L_088E42E4;
    }
L_088E42E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088E433C;
      }
      goto L_088E42EC;
    }
L_088E42EC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E431C;
    }
    goto L_088E4308;
L_088E4308:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E433C;
      }
      goto L_088E431C;
    }
L_088E431C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E433C;
      }
      goto L_088E4338;
    }
L_088E4338:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E433C;
L_088E433C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4344;
    }
L_088E4344:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E435Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E435Cu) goto L_088E435C;
    return;
L_088E435C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4378;
      }
      goto L_088E4368;
    }
L_088E4368:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-17135), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E4380;
      }
      goto L_088E4378;
    }
L_088E4378:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-17135), static_cast<std::uint8_t>(0u));
    goto L_088E4380;
L_088E4380:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4388;
    }
L_088E4388:
    ctx.gpr[31] = (0x088E4390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 278u, 0x08879994u>(ctx, &aot_mem) && ctx.pc == 0x088E4390u) goto L_088E4390;
    return;
L_088E4390:
    ctx.gpr[31] = (0x088E4398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 492u, 0x08986E94u>(ctx, &aot_mem) && ctx.pc == 0x088E4398u) goto L_088E4398;
    return;
L_088E4398:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E43A0;
    }
L_088E43A0:
    ctx.gpr[31] = (0x088E43A8u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 463u, 0x0897AED8u>(ctx, &aot_mem) && ctx.pc == 0x088E43A8u) goto L_088E43A8;
    return;
L_088E43A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E43B4;
      }
      goto L_088E43B0;
    }
L_088E43B0:
    ctx.gpr[17] = (0u | 1u);
    goto L_088E43B4;
L_088E43B4:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E43E0;
      }
      goto L_088E43D8;
    }
L_088E43D8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088E4430;
      }
      goto L_088E43E0;
    }
L_088E43E0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E4410;
    }
    goto L_088E43FC;
L_088E43FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E4430;
      }
      goto L_088E4410;
    }
L_088E4410:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4430;
      }
      goto L_088E442C;
    }
L_088E442C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E4430;
L_088E4430:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4438;
    }
L_088E4438:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E4454u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E4454u) goto L_088E4454;
    return;
L_088E4454:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E4464u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E4464u) goto L_088E4464;
    return;
L_088E4464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E4480;
      }
      goto L_088E4470;
    }
L_088E4470:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1510))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1510), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E4490;
      }
      goto L_088E4480;
    }
L_088E4480:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1510))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1510), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E4490;
L_088E4490:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4498;
    }
L_088E4498:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E44B0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E44B0u) goto L_088E44B0;
    return;
L_088E44B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088E4514;
    }
    goto L_088E44E8;
L_088E44E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 38 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088E4514;
    }
    goto L_088E44FC;
L_088E44FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 36u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088E45A8;
    }
    goto L_088E4510;
L_088E4510:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088E4514;
L_088E4514:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 41 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088E453C;
    }
    goto L_088E4524;
L_088E4524:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 46 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088E45A8;
    }
    goto L_088E4538;
L_088E4538:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088E453C;
L_088E453C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 47 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088E4564;
    }
    goto L_088E454C;
L_088E454C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 63 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088E45A8;
    }
    goto L_088E4560;
L_088E4560:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088E4564;
L_088E4564:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088E45A8;
    }
    goto L_088E4574;
L_088E4574:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088E45A8;
    }
    goto L_088E4588;
L_088E4588:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1208)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E45B8;
      }
      goto L_088E45A4;
    }
L_088E45A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088E45A8;
L_088E45A8:
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E45C0;
      }
      goto L_088E45B8;
    }
L_088E45B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088E45C4;
      }
      goto L_088E45C0;
    }
L_088E45C0:
    ctx.gpr[4] = (0u | 0u);
    goto L_088E45C4;
L_088E45C4:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E45F0;
      }
      goto L_088E45E8;
    }
L_088E45E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E4640;
      }
      goto L_088E45F0;
    }
L_088E45F0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E4620;
    }
    goto L_088E460C;
L_088E460C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E4640;
      }
      goto L_088E4620;
    }
L_088E4620:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4640;
      }
      goto L_088E463C;
    }
L_088E463C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E4640;
L_088E4640:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4648;
    }
L_088E4648:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E4660u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E4660u) goto L_088E4660;
    return;
L_088E4660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[31] = (0x088E4688u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088E4688u) goto L_088E4688;
    return;
L_088E4688:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E46A4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 261u, 0x089D9164u>(ctx, &aot_mem) && ctx.pc == 0x088E46A4u) goto L_088E46A4;
    return;
L_088E46A4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(936), static_cast<std::uint8_t>(ctx.gpr[17]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E46B4;
    }
L_088E46B4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E46CCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E46CCu) goto L_088E46CC;
    return;
L_088E46CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E46E8;
      }
      goto L_088E46D8;
    }
L_088E46D8:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6855), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E46F4;
      }
      goto L_088E46E8;
    }
L_088E46E8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6855), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E46F4;
L_088E46F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E46FC;
    }
L_088E46FC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E4718u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E4718u) goto L_088E4718;
    return;
L_088E4718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11468)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4754;
    }
L_088E4754:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E4770u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E4770u) goto L_088E4770;
    return;
L_088E4770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11468)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (~(ctx.gpr[7] | 0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E47B0;
    }
L_088E47B0:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E47D0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E47D0u) goto L_088E47D0;
    return;
L_088E47D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E47E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E47E0u) goto L_088E47E0;
    return;
L_088E47E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(496)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(497)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x088E4800u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x088E4800u) goto L_088E4800;
    return;
L_088E4800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4808;
    }
L_088E4808:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E4820u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E4820u) goto L_088E4820;
    return;
L_088E4820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E483C;
      }
      goto L_088E482C;
    }
L_088E482C:
    ctx.gpr[31] = (0x088E4834u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 71u, 0x088C4530u>(ctx, &aot_mem) && ctx.pc == 0x088E4834u) goto L_088E4834;
    return;
L_088E4834:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4860;
      }
      goto L_088E483C;
    }
L_088E483C:
    ctx.gpr[31] = (0x088E4844u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 71u, 0x088C4530u>(ctx, &aot_mem) && ctx.pc == 0x088E4844u) goto L_088E4844;
    return;
L_088E4844:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x088E4850u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4850u) goto L_088E4850;
    return;
L_088E4850:
    ctx.gpr[5] = (17786u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E4860u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 80u, 0x088C45B4u>(ctx, &aot_mem) && ctx.pc == 0x088E4860u) goto L_088E4860;
    return;
L_088E4860:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4868;
    }
L_088E4868:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E4884u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E4884u) goto L_088E4884;
    return;
L_088E4884:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E4894u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E4894u) goto L_088E4894;
    return;
L_088E4894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E48C4;
      }
      goto L_088E48A0;
    }
L_088E48A0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E48EC;
      }
      goto L_088E48C4;
    }
L_088E48C4:
    ctx.gpr[31] = (0x088E48CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 112u, 0x088A0804u>(ctx, &aot_mem) && ctx.pc == 0x088E48CCu) goto L_088E48CC;
    return;
L_088E48CC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E48EC;
L_088E48EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E48F4;
    }
L_088E48F4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x088E4910u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E4910u) goto L_088E4910;
    return;
L_088E4910:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[31] = (0x088E4920u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E4920u) goto L_088E4920;
    return;
L_088E4920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E4930u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E4930u) goto L_088E4930;
    return;
L_088E4930:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E4944u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 625u, 0x089A2A7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4944u) goto L_088E4944;
    return;
L_088E4944:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E4954u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 625u, 0x089A2A7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4954u) goto L_088E4954;
    return;
L_088E4954:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E495C;
    }
L_088E495C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E4978u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E4978u) goto L_088E4978;
    return;
L_088E4978:
    ctx.gpr[31] = (0x088E4980u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088E4980u) goto L_088E4980;
    return;
L_088E4980:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088E498Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 644u, 0x08A96C40u>(ctx, &aot_mem) && ctx.pc == 0x088E498Cu) goto L_088E498C;
    return;
L_088E498C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4994;
    }
L_088E4994:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E49B0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E49B0u) goto L_088E49B0;
    return;
L_088E49B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E49C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E49C0u) goto L_088E49C0;
    return;
L_088E49C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(1916), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 16384u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E49DC;
    }
L_088E49DC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088E49FCu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E49FCu) goto L_088E49FC;
    return;
L_088E49FC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[31] = (0x088E4A0Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x088E4A0Cu) goto L_088E4A0C;
    return;
L_088E4A0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088E4A60u);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x088E4A60u) goto L_088E4A60;
    return;
L_088E4A60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E4A88u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x088E4A88u) goto L_088E4A88;
    return;
L_088E4A88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4A90;
    }
L_088E4A90:
    ctx.gpr[31] = (0x088E4A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 115u, 0x088449ACu>(ctx, &aot_mem) && ctx.pc == 0x088E4A98u) goto L_088E4A98;
    return;
L_088E4A98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4AA0;
    }
L_088E4AA0:
    ctx.gpr[31] = (0x088E4AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 116u, 0x088449C0u>(ctx, &aot_mem) && ctx.pc == 0x088E4AA8u) goto L_088E4AA8;
    return;
L_088E4AA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4AB0;
    }
L_088E4AB0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E4AC8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E4AC8u) goto L_088E4AC8;
    return;
L_088E4AC8:
    ctx.gpr[31] = (0x088E4AD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 120u, 0x08844A08u>(ctx, &aot_mem) && ctx.pc == 0x088E4AD0u) goto L_088E4AD0;
    return;
L_088E4AD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4AD8;
    }
L_088E4AD8:
    ctx.gpr[31] = (0x088E4AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 117u, 0x088449D4u>(ctx, &aot_mem) && ctx.pc == 0x088E4AE0u) goto L_088E4AE0;
    return;
L_088E4AE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4AE8;
    }
L_088E4AE8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E4B00u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E4B00u) goto L_088E4B00;
    return;
L_088E4B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(19632));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4B24;
    }
L_088E4B24:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088E4B44u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E4B44u) goto L_088E4B44;
    return;
L_088E4B44:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x088E4B54u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E4B54u) goto L_088E4B54;
    return;
L_088E4B54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088E4BA8u);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x088E4BA8u) goto L_088E4BA8;
    return;
L_088E4BA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E4BD0u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x088E4BD0u) goto L_088E4BD0;
    return;
L_088E4BD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4BD8;
    }
L_088E4BD8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E4BF0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E4BF0u) goto L_088E4BF0;
    return;
L_088E4BF0:
    ctx.gpr[31] = (0x088E4BF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 183u, 0x08844F50u>(ctx, &aot_mem) && ctx.pc == 0x088E4BF8u) goto L_088E4BF8;
    return;
L_088E4BF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4C00;
    }
L_088E4C00:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088E4C30u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 462u, 0x089D70D4u>(ctx, &aot_mem) && ctx.pc == 0x088E4C30u) goto L_088E4C30;
    return;
L_088E4C30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4C38;
    }
L_088E4C38:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-29195)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E4C4C;
      }
      goto L_088E4C48;
    }
L_088E4C48:
    ctx.gpr[4] = (0u | 1u);
    goto L_088E4C4C;
L_088E4C4C:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E4C78;
      }
      goto L_088E4C70;
    }
L_088E4C70:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E4CC8;
      }
      goto L_088E4C78;
    }
L_088E4C78:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E4CA8;
    }
    goto L_088E4C94;
L_088E4C94:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E4CC8;
      }
      goto L_088E4CA8;
    }
L_088E4CA8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4CC8;
      }
      goto L_088E4CC4;
    }
L_088E4CC4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E4CC8;
L_088E4CC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4CD0;
    }
L_088E4CD0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-29194)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E4CE4;
      }
      goto L_088E4CE0;
    }
L_088E4CE0:
    ctx.gpr[4] = (0u | 1u);
    goto L_088E4CE4;
L_088E4CE4:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E4D10;
      }
      goto L_088E4D08;
    }
L_088E4D08:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E4D60;
      }
      goto L_088E4D10;
    }
L_088E4D10:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E4D40;
    }
    goto L_088E4D2C;
L_088E4D2C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E4D60;
      }
      goto L_088E4D40;
    }
L_088E4D40:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4D60;
      }
      goto L_088E4D5C;
    }
L_088E4D5C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E4D60;
L_088E4D60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4D68;
    }
L_088E4D68:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E4D80u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E4D80u) goto L_088E4D80;
    return;
L_088E4D80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[31] = (0x088E4D98u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 183u, 0x08864CF0u>(ctx, &aot_mem) && ctx.pc == 0x088E4D98u) goto L_088E4D98;
    return;
L_088E4D98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4DA0;
    }
L_088E4DA0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E4DBCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E4DBCu) goto L_088E4DBC;
    return;
L_088E4DBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E4DCCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E4DCCu) goto L_088E4DCC;
    return;
L_088E4DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E4DF0;
      }
      goto L_088E4DD8;
    }
L_088E4DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E4E04;
      }
      goto L_088E4DF0;
    }
L_088E4DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_088E4E04;
L_088E4E04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4E0C;
    }
L_088E4E0C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E4E28u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E4E28u) goto L_088E4E28;
    return;
L_088E4E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4E64;
      }
      goto L_088E4E58;
    }
L_088E4E58:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(361), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E4E68;
      }
      goto L_088E4E64;
    }
L_088E4E64:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(361), static_cast<std::uint8_t>(0u));
    goto L_088E4E68;
L_088E4E68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4E70;
    }
L_088E4E70:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E4E8Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E4E8Cu) goto L_088E4E8C;
    return;
L_088E4E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4EC8;
      }
      goto L_088E4EBC;
    }
L_088E4EBC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(362), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E4ECC;
      }
      goto L_088E4EC8;
    }
L_088E4EC8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(362), static_cast<std::uint8_t>(0u));
    goto L_088E4ECC;
L_088E4ECC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4ED4;
    }
L_088E4ED4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4EDC;
    }
L_088E4EDC:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E4EF4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E4EF4u) goto L_088E4EF4;
    return;
L_088E4EF4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6998))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088E4F3C;
      }
      goto L_088E4F04;
    }
L_088E4F04:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (0u | 65533u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4F34;
      }
      goto L_088E4F1C;
    }
L_088E4F1C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (0u | 65535u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E4F3C;
      }
      goto L_088E4F34;
    }
L_088E4F34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E4F3C;
    }
L_088E4F3C:
    ctx.gpr[31] = (0x088E4F44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 755u, 0x0891B674u>(ctx, &aot_mem) && ctx.pc == 0x088E4F44u) goto L_088E4F44;
    return;
L_088E4F44:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13712));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[16] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    // nop
      if (branch_taken) {
          goto L_088E4F80;
      }
      goto L_088E4F78;
    }
L_088E4F78:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7004)));
    goto L_088E4F80;
L_088E4F80:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29360)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E4F98u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 209u, 0x088B91ACu>(ctx, &aot_mem) && ctx.pc == 0x088E4F98u) goto L_088E4F98;
    return;
L_088E4F98:
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6980)));
    ctx.gpr[31] = (0x088E4FB8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 206u, 0x088B9158u>(ctx, &aot_mem) && ctx.pc == 0x088E4FB8u) goto L_088E4FB8;
    return;
L_088E4FB8:
    ctx.gpr[31] = (0x088E4FC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6980)));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 24u, 0x0895815Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4FC0u) goto L_088E4FC0;
    return;
L_088E4FC0:
    ctx.gpr[31] = (0x088E4FC8u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 757u, 0x0891B698u>(ctx, &aot_mem) && ctx.pc == 0x088E4FC8u) goto L_088E4FC8;
    return;
L_088E4FC8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(526), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(537), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6854), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7010))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7008))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E5008u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x088E5008u) goto L_088E5008;
    return;
L_088E5008:
    ctx.gpr[31] = (0x088E5010u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 540u, 0x08957940u>(ctx, &aot_mem) && ctx.pc == 0x088E5010u) goto L_088E5010;
    return;
L_088E5010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E5018;
    }
L_088E5018:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E5034u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E5034u) goto L_088E5034;
    return;
L_088E5034:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E5044u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x088E5044u) goto L_088E5044;
    return;
L_088E5044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E5060;
      }
      goto L_088E5050;
    }
L_088E5050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E5070;
      }
      goto L_088E5060;
    }
L_088E5060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_088E5070;
L_088E5070:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E5078;
    }
L_088E5078:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E5090u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E5090u) goto L_088E5090;
    return;
L_088E5090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736), 0u);
      if (branch_taken) {
          goto L_088E5120;
      }
      goto L_088E50C4;
    }
L_088E50C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088E5110;
      }
      goto L_088E50F0;
    }
L_088E50F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[7] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-2736), ctx.gpr[6]);
    goto L_088E5110;
L_088E5110:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E50C4;
      }
      goto L_088E5120;
    }
L_088E5120:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E5130u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x088E5130u) goto L_088E5130;
    return;
L_088E5130:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E5138;
    }
L_088E5138:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E5154u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E5154u) goto L_088E5154;
    return;
L_088E5154:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E5164u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E5164u) goto L_088E5164;
    return;
L_088E5164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E5180;
      }
      goto L_088E5174;
    }
L_088E5174:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E5180u);
    ctx.gpr[5] = (0u | 147u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5180u) goto L_088E5180;
    return;
L_088E5180:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E5188;
    }
L_088E5188:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E51A0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E51A0u) goto L_088E51A0;
    return;
L_088E51A0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x088E51B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 192u, 0x088ED7D8u>(ctx, &aot_mem) && ctx.pc == 0x088E51B0u) goto L_088E51B0;
    return;
L_088E51B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E51B8;
    }
L_088E51B8:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E51D0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E51D0u) goto L_088E51D0;
    return;
L_088E51D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088E51EC;
      }
      goto L_088E51E0;
    }
L_088E51E0:
    ctx.gpr[31] = (0x088E51E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088E51E8u) goto L_088E51E8;
    return;
L_088E51E8:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088E51EC;
L_088E51EC:
    ctx.gpr[31] = (0x088E51F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x088E51F4u) goto L_088E51F4;
    return;
L_088E51F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E521C;
      }
      goto L_088E51FC;
    }
L_088E51FC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x088E521Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 192u, 0x08864D8Cu>(ctx, &aot_mem) && ctx.pc == 0x088E521Cu) goto L_088E521C;
    return;
L_088E521C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E5224;
    }
L_088E5224:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E5240u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E5240u) goto L_088E5240;
    return;
L_088E5240:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E5250u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E5250u) goto L_088E5250;
    return;
L_088E5250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[31] = (0x088E5268u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 25u, 0x0893C1FCu>(ctx, &aot_mem) && ctx.pc == 0x088E5268u) goto L_088E5268;
    return;
L_088E5268:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5274;
      }
      goto L_088E5270;
    }
L_088E5270:
    ctx.gpr[17] = (0u | 1u);
    goto L_088E5274;
L_088E5274:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E52A0;
      }
      goto L_088E5298;
    }
L_088E5298:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088E52F0;
      }
      goto L_088E52A0;
    }
L_088E52A0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E52D0;
    }
    goto L_088E52BC;
L_088E52BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E52F0;
      }
      goto L_088E52D0;
    }
L_088E52D0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E52F0;
      }
      goto L_088E52EC;
    }
L_088E52EC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E52F0;
L_088E52F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E52F8;
    }
L_088E52F8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E5314u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E5314u) goto L_088E5314;
    return;
L_088E5314:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E5324u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E5324u) goto L_088E5324;
    return;
L_088E5324:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088E533C;
      }
      goto L_088E5334;
    }
L_088E5334:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1564), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E5340;
      }
      goto L_088E533C;
    }
L_088E533C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E5340;
L_088E5340:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E5348;
    }
L_088E5348:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E536C;
      }
      goto L_088E5364;
    }
L_088E5364:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E53BC;
      }
      goto L_088E536C;
    }
L_088E536C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E539C;
    }
    goto L_088E5388;
L_088E5388:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E53BC;
      }
      goto L_088E539C;
    }
L_088E539C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E53BC;
      }
      goto L_088E53B8;
    }
L_088E53B8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E53BC;
L_088E53BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E53C4;
    }
L_088E53C4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E53E0u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E53E0u) goto L_088E53E0;
    return;
L_088E53E0:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088E540Cu);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x088E540Cu) goto L_088E540C;
    return;
L_088E540C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E5414;
    }
L_088E5414:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x088E5430u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E5430u) goto L_088E5430;
    return;
L_088E5430:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088E5460;
      }
      goto L_088E5454;
    }
L_088E5454:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_088E5460;
L_088E5460:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E547C;
      }
      goto L_088E5470;
    }
L_088E5470:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_088E547C;
L_088E547C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E5498;
      }
      goto L_088E548C;
    }
L_088E548C:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_088E5498;
L_088E5498:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x088E54C4u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 656u, 0x08977310u>(ctx, &aot_mem) && ctx.pc == 0x088E54C4u) goto L_088E54C4;
    return;
L_088E54C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E54CC;
    }
L_088E54CC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E54E8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E54E8u) goto L_088E54E8;
    return;
L_088E54E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E54F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E54F8u) goto L_088E54F8;
    return;
L_088E54F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E5514;
      }
      goto L_088E5504;
    }
L_088E5504:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5524;
      }
      goto L_088E5514;
    }
L_088E5514:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E5524;
L_088E5524:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E552C;
    }
L_088E552C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x088E5548u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E5548u) goto L_088E5548;
    return;
L_088E5548:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088E5578;
      }
      goto L_088E556C;
    }
L_088E556C:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_088E5578;
L_088E5578:
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E5594;
      }
      goto L_088E5588;
    }
L_088E5588:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_088E5594;
L_088E5594:
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E55B0;
      }
      goto L_088E55A4;
    }
L_088E55A4:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_088E55B0;
L_088E55B0:
    ctx.gpr[31] = (0x088E55B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 52u, 0x088C439Cu>(ctx, &aot_mem) && ctx.pc == 0x088E55B8u) goto L_088E55B8;
    return;
L_088E55B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E55C0;
    }
L_088E55C0:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E55D8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E55D8u) goto L_088E55D8;
    return;
L_088E55D8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29194)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5600;
      }
      goto L_088E55E8;
    }
L_088E55E8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x088E55F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 184u, 0x08844F5Cu>(ctx, &aot_mem) && ctx.pc == 0x088E55F8u) goto L_088E55F8;
    return;
L_088E55F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E560C;
      }
      goto L_088E5600;
    }
L_088E5600:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x088E560Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 184u, 0x08844F5Cu>(ctx, &aot_mem) && ctx.pc == 0x088E560Cu) goto L_088E560C;
    return;
L_088E560C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E5614;
    }
L_088E5614:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E5630u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E5630u) goto L_088E5630;
    return;
L_088E5630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (16025u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088E5668u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x088E5668u) goto L_088E5668;
    return;
L_088E5668:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E5670;
    }
L_088E5670:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E568Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E568Cu) goto L_088E568C;
    return;
L_088E568C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x088E5698u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 106u, 0x08844918u>(ctx, &aot_mem) && ctx.pc == 0x088E5698u) goto L_088E5698;
    return;
L_088E5698:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E56A0;
    }
L_088E56A0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E56BCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E56BCu) goto L_088E56BC;
    return;
L_088E56BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x088E56C8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 111u, 0x0884495Cu>(ctx, &aot_mem) && ctx.pc == 0x088E56C8u) goto L_088E56C8;
    return;
L_088E56C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E56D0;
    }
L_088E56D0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x088E56ECu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E56ECu) goto L_088E56EC;
    return;
L_088E56EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E56FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E56FCu) goto L_088E56FC;
    return;
L_088E56FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E5710u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E5710u) goto L_088E5710;
    return;
L_088E5710:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E573C;
      }
      goto L_088E571C;
    }
L_088E571C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088E5734u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 278u, 0x089BD470u>(ctx, &aot_mem) && ctx.pc == 0x088E5734u) goto L_088E5734;
    return;
L_088E5734:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5754;
      }
      goto L_088E573C;
    }
L_088E573C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088E5754u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 278u, 0x089BD470u>(ctx, &aot_mem) && ctx.pc == 0x088E5754u) goto L_088E5754;
    return;
L_088E5754:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E575C;
    }
L_088E575C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E5778u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E5778u) goto L_088E5778;
    return;
L_088E5778:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E5788u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E5788u) goto L_088E5788;
    return;
L_088E5788:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(544)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E57C4;
      }
      goto L_088E57A0;
    }
L_088E57A0:
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E57C4;
      }
      goto L_088E57C0;
    }
L_088E57C0:
    ctx.gpr[4] = (0u | 1u);
    goto L_088E57C4;
L_088E57C4:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E57F0;
      }
      goto L_088E57E8;
    }
L_088E57E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5840;
      }
      goto L_088E57F0;
    }
L_088E57F0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E5820;
    }
    goto L_088E580C;
L_088E580C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5840;
      }
      goto L_088E5820;
    }
L_088E5820:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5840;
      }
      goto L_088E583C;
    }
L_088E583C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E5840;
L_088E5840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E5848;
    }
L_088E5848:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E5868u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E5868u) goto L_088E5868;
    return;
L_088E5868:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E5878u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E5878u) goto L_088E5878;
    return;
L_088E5878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    ctx.gpr[31] = (0x088E5898u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x088E5898u) goto L_088E5898;
    return;
L_088E5898:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E58ACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x088E58ACu) goto L_088E58AC;
    return;
L_088E58AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E58B4;
    }
L_088E58B4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E58D0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E58D0u) goto L_088E58D0;
    return;
L_088E58D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E58E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E58E0u) goto L_088E58E0;
    return;
L_088E58E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E5900;
      }
      goto L_088E58EC;
    }
L_088E58EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E5914;
      }
      goto L_088E5900;
    }
L_088E5900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_088E5914;
L_088E5914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E591C;
    }
L_088E591C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E5934u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E5934u) goto L_088E5934;
    return;
L_088E5934:
    ctx.gpr[31] = (0x088E593Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 544u, 0x08A8E9B8u>(ctx, &aot_mem) && ctx.pc == 0x088E593Cu) goto L_088E593C;
    return;
L_088E593C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E5944;
    }
L_088E5944:
    ctx.gpr[31] = (0x088E594Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 546u, 0x08A8E9D8u>(ctx, &aot_mem) && ctx.pc == 0x088E594Cu) goto L_088E594C;
    return;
L_088E594C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E5954;
    }
L_088E5954:
    ctx.gpr[31] = (0x088E595Cu);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 548u, 0x08A8EA00u>(ctx, &aot_mem) && ctx.pc == 0x088E595Cu) goto L_088E595C;
    return;
L_088E595C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5968;
      }
      goto L_088E5964;
    }
L_088E5964:
    ctx.gpr[17] = (0u | 1u);
    goto L_088E5968;
L_088E5968:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E5994;
      }
      goto L_088E598C;
    }
L_088E598C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088E59E4;
      }
      goto L_088E5994;
    }
L_088E5994:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E59C4;
    }
    goto L_088E59B0;
L_088E59B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E59E4;
      }
      goto L_088E59C4;
    }
L_088E59C4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E59E4;
      }
      goto L_088E59E0;
    }
L_088E59E0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E59E4;
L_088E59E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E59EC;
    }
L_088E59EC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x088E5A08u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E5A08u) goto L_088E5A08;
    return;
L_088E5A08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088E5A64u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088E5A64u) goto L_088E5A64;
    return;
L_088E5A64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E5A6C;
    }
L_088E5A6C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E5A84u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E5A84u) goto L_088E5A84;
    return;
L_088E5A84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5AA4;
      }
      goto L_088E5A90;
    }
L_088E5A90:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5AB4;
      }
      goto L_088E5AA4;
    }
L_088E5AA4:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E5AB4;
L_088E5AB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E5ABC;
    }
L_088E5ABC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E5AD0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 150u, 0x08864AC0u>(ctx, &aot_mem) && ctx.pc == 0x088E5AD0u) goto L_088E5AD0;
    return;
L_088E5AD0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E5AE4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 144u, 0x08864A54u>(ctx, &aot_mem) && ctx.pc == 0x088E5AE4u) goto L_088E5AE4;
    return;
L_088E5AE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E5AEC;
    }
L_088E5AEC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[31] = (0x088E5AFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 156u, 0x08864B28u>(ctx, &aot_mem) && ctx.pc == 0x088E5AFCu) goto L_088E5AFC;
    return;
L_088E5AFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E5B08u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 150u, 0x08864AC0u>(ctx, &aot_mem) && ctx.pc == 0x088E5B08u) goto L_088E5B08;
    return;
L_088E5B08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E5B10;
    }
L_088E5B10:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E5B2Cu);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E5B2Cu) goto L_088E5B2C;
    return;
L_088E5B2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E5B3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E5B3Cu) goto L_088E5B3C;
    return;
L_088E5B3C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E5B54u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x088E5B54u) goto L_088E5B54;
    return;
L_088E5B54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E5B5C;
    }
L_088E5B5C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E5B78u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E5B78u) goto L_088E5B78;
    return;
L_088E5B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E5BACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E5BACu) goto L_088E5BAC;
    return;
L_088E5BAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E5BF4;
      }
      goto L_088E5BC0;
    }
L_088E5BC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E5BF4;
      }
      goto L_088E5BD4;
    }
L_088E5BD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E5BEC;
      }
      goto L_088E5BE4;
    }
L_088E5BE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088E5BF8;
      }
      goto L_088E5BEC;
    }
L_088E5BEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E5BF8;
      }
      goto L_088E5BF4;
    }
L_088E5BF4:
    ctx.gpr[4] = (0u | 0u);
    goto L_088E5BF8;
L_088E5BF8:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E5C24;
      }
      goto L_088E5C1C;
    }
L_088E5C1C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5C74;
      }
      goto L_088E5C24;
    }
L_088E5C24:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E5C54;
    }
    goto L_088E5C40;
L_088E5C40:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5C74;
      }
      goto L_088E5C54;
    }
L_088E5C54:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5C74;
      }
      goto L_088E5C70;
    }
L_088E5C70:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E5C74;
L_088E5C74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E5C7C;
    }
L_088E5C7C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E5C94u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E5C94u) goto L_088E5C94;
    return;
L_088E5C94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088E5CE4;
    }
    goto L_088E5CCC;
L_088E5CCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E5D08;
      }
      goto L_088E5CE0;
    }
L_088E5CE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088E5CE4;
L_088E5CE4:
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E5D10;
      }
      goto L_088E5CF4;
    }
L_088E5CF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E5D10;
      }
      goto L_088E5D08;
    }
L_088E5D08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088E5D14;
      }
      goto L_088E5D10;
    }
L_088E5D10:
    ctx.gpr[4] = (0u | 0u);
    goto L_088E5D14;
L_088E5D14:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E5D40;
      }
      goto L_088E5D38;
    }
L_088E5D38:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5D90;
      }
      goto L_088E5D40;
    }
L_088E5D40:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E5D70;
    }
    goto L_088E5D5C;
L_088E5D5C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5D90;
      }
      goto L_088E5D70;
    }
L_088E5D70:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5D90;
      }
      goto L_088E5D8C;
    }
L_088E5D8C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E5D90;
L_088E5D90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E5D98;
    }
L_088E5D98:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16180)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16178)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16179)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16173)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16174)));
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E5DDC;
      }
      goto L_088E5DD8;
    }
L_088E5DD8:
    ctx.gpr[4] = (0u | 1u);
    goto L_088E5DDC;
L_088E5DDC:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E5E08;
      }
      goto L_088E5E00;
    }
L_088E5E00:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5E58;
      }
      goto L_088E5E08;
    }
L_088E5E08:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E5E38;
    }
    goto L_088E5E24;
L_088E5E24:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5E58;
      }
      goto L_088E5E38;
    }
L_088E5E38:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5E58;
      }
      goto L_088E5E54;
    }
L_088E5E54:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E5E58;
L_088E5E58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E5E60;
    }
L_088E5E60:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E5E7Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E5E7Cu) goto L_088E5E7C;
    return;
L_088E5E7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E5E8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E5E8Cu) goto L_088E5E8C;
    return;
L_088E5E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E5EAC;
      }
      goto L_088E5E98;
    }
L_088E5E98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E5EB8;
      }
      goto L_088E5EAC;
    }
L_088E5EAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_088E5EB8;
L_088E5EB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E5EC0;
    }
L_088E5EC0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E5EDCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E5EDCu) goto L_088E5EDC;
    return;
L_088E5EDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E5EECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E5EECu) goto L_088E5EEC;
    return;
L_088E5EEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E5F00u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E5F00u) goto L_088E5F00;
    return;
L_088E5F00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E5F3C;
      }
      goto L_088E5F10;
    }
L_088E5F10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E5F3C;
      }
      goto L_088E5F20;
    }
L_088E5F20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E5F34;
      }
      goto L_088E5F2C;
    }
L_088E5F2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088E5F40;
      }
      goto L_088E5F34;
    }
L_088E5F34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E5F40;
      }
      goto L_088E5F3C;
    }
L_088E5F3C:
    ctx.gpr[4] = (0u | 0u);
    goto L_088E5F40;
L_088E5F40:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E5F6C;
      }
      goto L_088E5F64;
    }
L_088E5F64:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5FBC;
      }
      goto L_088E5F6C;
    }
L_088E5F6C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E5F9C;
    }
    goto L_088E5F88;
L_088E5F88:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E5FBC;
      }
      goto L_088E5F9C;
    }
L_088E5F9C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5FBC;
      }
      goto L_088E5FB8;
    }
L_088E5FB8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E5FBC;
L_088E5FBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E5FC4;
    }
L_088E5FC4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E5FDCu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E5FDCu) goto L_088E5FDC;
    return;
L_088E5FDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E5FECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E5FECu) goto L_088E5FEC;
    return;
L_088E5FEC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E6018;
      }
      goto L_088E6000;
    }
L_088E6000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E6018;
      }
      goto L_088E6010;
    }
L_088E6010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088E601C;
      }
      goto L_088E6018;
    }
L_088E6018:
    ctx.gpr[4] = (0u | 0u);
    goto L_088E601C;
L_088E601C:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E6048;
      }
      goto L_088E6040;
    }
L_088E6040:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E6098;
      }
      goto L_088E6048;
    }
L_088E6048:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E6078;
    }
    goto L_088E6064;
L_088E6064:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E6098;
      }
      goto L_088E6078;
    }
L_088E6078:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6098;
      }
      goto L_088E6094;
    }
L_088E6094:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E6098;
L_088E6098:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E60A0;
    }
L_088E60A0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E60B8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E60B8u) goto L_088E60B8;
    return;
L_088E60B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6118;
      }
      goto L_088E60EC;
    }
L_088E60EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 17u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088E6118;
      }
      goto L_088E6100;
    }
L_088E6100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E6118;
      }
      goto L_088E6114;
    }
L_088E6114:
    ctx.gpr[5] = (0u | 1u);
    goto L_088E6118;
L_088E6118:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E6144;
      }
      goto L_088E613C;
    }
L_088E613C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088E6194;
      }
      goto L_088E6144;
    }
L_088E6144:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E6174;
    }
    goto L_088E6160;
L_088E6160:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E6194;
      }
      goto L_088E6174;
    }
L_088E6174:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6194;
      }
      goto L_088E6190;
    }
L_088E6190:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E6194;
L_088E6194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E619C;
    }
L_088E619C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E61B4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E61B4u) goto L_088E61B4;
    return;
L_088E61B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E61C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E61C4u) goto L_088E61C4;
    return;
L_088E61C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088E61F8;
      }
      goto L_088E61D4;
    }
L_088E61D4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    ctx.gpr[7] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088E61F8;
      }
      goto L_088E61E4;
    }
L_088E61E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E61F8;
      }
      goto L_088E61F4;
    }
L_088E61F4:
    ctx.gpr[5] = (0u | 1u);
    goto L_088E61F8;
L_088E61F8:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E6224;
      }
      goto L_088E621C;
    }
L_088E621C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088E6274;
      }
      goto L_088E6224;
    }
L_088E6224:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E6254;
    }
    goto L_088E6240;
L_088E6240:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E6274;
      }
      goto L_088E6254;
    }
L_088E6254:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6274;
      }
      goto L_088E6270;
    }
L_088E6270:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E6274;
L_088E6274:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6280;
      }
      goto L_088E627C;
    }
L_088E627C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088E6280;
L_088E6280:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E629C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1106));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(99) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 148u, 0x088E8B4Cu>(ctx, &aot_mem); return;
      }
      goto L_088E62D4;
    }
L_088E62D4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1106));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(14736)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E62F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x088E630Cu);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x088E630Cu) goto L_088E630C;
    return;
L_088E630C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6364;
      }
      goto L_088E631C;
    }
L_088E631C:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E6350;
      }
      goto L_088E6330;
    }
L_088E6330:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6350;
      }
      goto L_088E6340;
    }
L_088E6340:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_088E6350;
L_088E6350:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E631C;
      }
      goto L_088E6364;
    }
L_088E6364:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x088E6378u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 376u, 0x089C18DCu>(ctx, &aot_mem) && ctx.pc == 0x088E6378u) goto L_088E6378;
    return;
L_088E6378:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E6380;
    }
L_088E6380:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E6398u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E6398u) goto L_088E6398;
    return;
L_088E6398:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E63A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E63A8u) goto L_088E63A8;
    return;
L_088E63A8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E63B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x088E63B8u) goto L_088E63B8;
    return;
L_088E63B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E63C8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 222u, 0x089ED770u>(ctx, &aot_mem) && ctx.pc == 0x088E63C8u) goto L_088E63C8;
    return;
L_088E63C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E63D0;
    }
L_088E63D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E63D8;
    }
L_088E63D8:
    ctx.gpr[31] = (0x088E63E0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088E63E0u) goto L_088E63E0;
    return;
L_088E63E0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E63F8;
    }
L_088E63F8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088E6414u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E6414u) goto L_088E6414;
    return;
L_088E6414:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[31] = (0x088E6424u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x088E6424u) goto L_088E6424;
    return;
L_088E6424:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E6430u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x088E6430u) goto L_088E6430;
    return;
L_088E6430:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088E6480u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x088E6480u) goto L_088E6480;
    return;
L_088E6480:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (0x088E6494u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x088E6494u) goto L_088E6494;
    return;
L_088E6494:
    ctx.gpr[31] = (0x088E649Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x088E649Cu) goto L_088E649C;
    return;
L_088E649C:
    ctx.gpr[31] = (0x088E64A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x088E64A4u) goto L_088E64A4;
    return;
L_088E64A4:
    ctx.gpr[31] = (0x088E64ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x088E64ACu) goto L_088E64AC;
    return;
L_088E64AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E64B4;
    }
L_088E64B4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2144)));
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2148)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-2736), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2152)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E64ECu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x088E64ECu) goto L_088E64EC;
    return;
L_088E64EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E64F4;
    }
L_088E64F4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E6510u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E6510u) goto L_088E6510;
    return;
L_088E6510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E6544u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E6544u) goto L_088E6544;
    return;
L_088E6544:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6590;
      }
      goto L_088E6558;
    }
L_088E6558:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 6u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6590;
      }
      goto L_088E657C;
    }
L_088E657C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E6590;
      }
      goto L_088E658C;
    }
L_088E658C:
    ctx.gpr[4] = (0u | 1u);
    goto L_088E6590;
L_088E6590:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E65BC;
      }
      goto L_088E65B4;
    }
L_088E65B4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E660C;
      }
      goto L_088E65BC;
    }
L_088E65BC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E65EC;
    }
    goto L_088E65D8;
L_088E65D8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E660C;
      }
      goto L_088E65EC;
    }
L_088E65EC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E660C;
      }
      goto L_088E6608;
    }
L_088E6608:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E660C;
L_088E660C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E6614;
    }
L_088E6614:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E6630u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E6630u) goto L_088E6630;
    return;
L_088E6630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E6664u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x088E6664u) goto L_088E6664;
    return;
L_088E6664:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088E66B0;
      }
      goto L_088E6678;
    }
L_088E6678:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 8u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E66B0;
      }
      goto L_088E669C;
    }
L_088E669C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E66B0;
      }
      goto L_088E66AC;
    }
L_088E66AC:
    ctx.gpr[5] = (0u | 1u);
    goto L_088E66B0;
L_088E66B0:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E66DC;
      }
      goto L_088E66D4;
    }
L_088E66D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088E672C;
      }
      goto L_088E66DC;
    }
L_088E66DC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E670C;
    }
    goto L_088E66F8;
L_088E66F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E672C;
      }
      goto L_088E670C;
    }
L_088E670C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E672C;
      }
      goto L_088E6728;
    }
L_088E6728:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E672C;
L_088E672C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E6734;
    }
L_088E6734:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x088E6750u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x088E6750u) goto L_088E6750;
    return;
L_088E6750:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E67A8;
      }
      goto L_088E6760;
    }
L_088E6760:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E6794;
      }
      goto L_088E6774;
    }
L_088E6774:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6794;
      }
      goto L_088E6784;
    }
L_088E6784:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_088E6794;
L_088E6794:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6760;
      }
      goto L_088E67A8;
    }
L_088E67A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[31] = (0x088E67C0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 404u, 0x08AED66Cu>(ctx, &aot_mem) && ctx.pc == 0x088E67C0u) goto L_088E67C0;
    return;
L_088E67C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6992)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6818;
      }
      goto L_088E67D0;
    }
L_088E67D0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088E67E0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 404u, 0x08AED66Cu>(ctx, &aot_mem) && ctx.pc == 0x088E67E0u) goto L_088E67E0;
    return;
L_088E67E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E680C;
      }
      goto L_088E67E8;
    }
L_088E67E8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E67F8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 618u, 0x08957CCCu>(ctx, &aot_mem) && ctx.pc == 0x088E67F8u) goto L_088E67F8;
    return;
L_088E67F8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E6808u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6852));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 624u, 0x08957D04u>(ctx, &aot_mem) && ctx.pc == 0x088E6808u) goto L_088E6808;
    return;
L_088E6808:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(524), static_cast<std::uint8_t>(0u));
    goto L_088E680C;
L_088E680C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E67D0;
      }
      goto L_088E6818;
    }
L_088E6818:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E6820;
    }
L_088E6820:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E6838u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E6838u) goto L_088E6838;
    return;
L_088E6838:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_088E6878;
    }
    goto L_088E6848;
L_088E6848:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088E6854u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088E6854u) goto L_088E6854;
    return;
L_088E6854:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E686C;
      }
      goto L_088E6860;
    }
L_088E6860:
    ctx.gpr[31] = (0x088E6868u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088E6868u) goto L_088E6868;
    return;
L_088E6868:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_088E686C;
L_088E686C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_088E6878;
L_088E6878:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088E6890u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088E6890u) goto L_088E6890;
    return;
L_088E6890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-6848)));
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[7] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (2274u << 16u);
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[7]);
    ctx.gpr[18] = (ctx.gpr[8] + static_cast<std::uint32_t>(23488));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E68F0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E68F0u) goto L_088E68F0;
    return;
L_088E68F0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-6848)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[11] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(44));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088E6930u);
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 517u, 0x0887B1ACu>(ctx, &aot_mem) && ctx.pc == 0x088E6930u) goto L_088E6930;
    return;
L_088E6930:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-6848)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(-6848), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E6944;
    }
L_088E6944:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E695Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E695Cu) goto L_088E695C;
    return;
L_088E695C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_088E699C;
    }
    goto L_088E696C;
L_088E696C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088E6978u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088E6978u) goto L_088E6978;
    return;
L_088E6978:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6990;
      }
      goto L_088E6984;
    }
L_088E6984:
    ctx.gpr[31] = (0x088E698Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088E698Cu) goto L_088E698C;
    return;
L_088E698C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_088E6990;
L_088E6990:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_088E699C;
L_088E699C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088E69B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088E69B4u) goto L_088E69B4;
    return;
L_088E69B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(-6848)));
    ctx.gpr[21] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E6A18u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E6A18u) goto L_088E6A18;
    return;
L_088E6A18:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(-6848)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[11] = (ctx.gpr[8] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(44));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088E6A58u);
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 517u, 0x0887B1ACu>(ctx, &aot_mem) && ctx.pc == 0x088E6A58u) goto L_088E6A58;
    return;
L_088E6A58:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(-6848)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(-6848), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E6A6C;
    }
L_088E6A6C:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6846), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E6A80;
    }
L_088E6A80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E6A88;
    }
L_088E6A88:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E6AA0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E6AA0u) goto L_088E6AA0;
    return;
L_088E6AA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E6AB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E6AB0u) goto L_088E6AB0;
    return;
L_088E6AB0:
    ctx.gpr[31] = (0x088E6AB8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 253u, 0x0891D584u>(ctx, &aot_mem) && ctx.pc == 0x088E6AB8u) goto L_088E6AB8;
    return;
L_088E6AB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E6AC0;
    }
L_088E6AC0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E6ADCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E6ADCu) goto L_088E6ADC;
    return;
L_088E6ADC:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[31] = (0x088E6AFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 211u, 0x088ED984u>(ctx, &aot_mem) && ctx.pc == 0x088E6AFCu) goto L_088E6AFC;
    return;
L_088E6AFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E6B04;
    }
L_088E6B04:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2128)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2148)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2132)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2152)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2136)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[5] = (2269u << 16u);
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[17];
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E6B60u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x088E6B60u) goto L_088E6B60;
    return;
L_088E6B60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E6B68;
    }
L_088E6B68:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x088E6B84u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E6B84u) goto L_088E6B84;
    return;
L_088E6B84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E6B94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E6B94u) goto L_088E6B94;
    return;
L_088E6B94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E6BA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E6BA8u) goto L_088E6BA8;
    return;
L_088E6BA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[17];
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E6C08u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 179u, 0x089A4C54u>(ctx, &aot_mem) && ctx.pc == 0x088E6C08u) goto L_088E6C08;
    return;
L_088E6C08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E6C10;
    }
L_088E6C10:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E6C28u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E6C28u) goto L_088E6C28;
    return;
L_088E6C28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E6C38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E6C38u) goto L_088E6C38;
    return;
L_088E6C38:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6C68;
      }
      goto L_088E6C44;
    }
L_088E6C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6C68;
      }
      goto L_088E6C50;
    }
L_088E6C50:
    ctx.gpr[31] = (0x088E6C58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 223u, 0x089A4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6C58u) goto L_088E6C58;
    return;
L_088E6C58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_088E6C68;
L_088E6C68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E6C70;
    }
L_088E6C70:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E6C8Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E6C8Cu) goto L_088E6C8C;
    return;
L_088E6C8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E6C9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E6C9Cu) goto L_088E6C9C;
    return;
L_088E6C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E6CBC;
      }
      goto L_088E6CA8;
    }
L_088E6CA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E6CC8;
      }
      goto L_088E6CBC;
    }
L_088E6CBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E6CC8;
L_088E6CC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E6CD0;
    }
L_088E6CD0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E6CE8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E6CE8u) goto L_088E6CE8;
    return;
L_088E6CE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E6CF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E6CF8u) goto L_088E6CF8;
    return;
L_088E6CF8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6D10;
      }
      goto L_088E6D04;
    }
L_088E6D04:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1918), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E6D1C;
      }
      goto L_088E6D10;
    }
L_088E6D10:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088E6D1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14152));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x088E6D1Cu) goto L_088E6D1C;
    return;
L_088E6D1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E6D24;
    }
L_088E6D24:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E6D3Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E6D3Cu) goto L_088E6D3C;
    return;
L_088E6D3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E6D4Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E6D4Cu) goto L_088E6D4C;
    return;
L_088E6D4C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6D64;
      }
      goto L_088E6D58;
    }
L_088E6D58:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(671), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E6D70;
      }
      goto L_088E6D64;
    }
L_088E6D64:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088E6D70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14208));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x088E6D70u) goto L_088E6D70;
    return;
L_088E6D70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E6D78;
    }
L_088E6D78:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x088E6D90u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E6D90u) goto L_088E6D90;
    return;
L_088E6D90:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088E6DA8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6DA8u) goto L_088E6DA8;
    return;
L_088E6DA8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088E6DB0;
L_088E6DB0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E6FC4;
      }
      goto L_088E6DB8;
    }
L_088E6DB8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_088E6FC4;
      }
      goto L_088E6DC4;
    }
L_088E6DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
      if (branch_taken) {
          goto L_088E6DE8;
      }
      goto L_088E6DE0;
    }
L_088E6DE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6E00;
      }
      goto L_088E6DE8;
    }
L_088E6DE8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_088E6E00;
L_088E6E00:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6FBC;
      }
      goto L_088E6E08;
    }
L_088E6E08:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x088E6E18u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x088E6E18u) goto L_088E6E18;
    return;
L_088E6E18:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6844)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E6FBC;
      }
      goto L_088E6E28;
    }
L_088E6E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_088E6FBC;
      }
      goto L_088E6E38;
    }
L_088E6E38:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x088E6E5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088E40EC;
L_088E6E5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6FBC;
      }
      goto L_088E6E64;
    }
L_088E6E64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E6FBC;
      }
      goto L_088E6E74;
    }
L_088E6E74:
    ctx.gpr[31] = (0x088E6E7Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x088E6E7Cu) goto L_088E6E7C;
    return;
L_088E6E7C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
        goto L_088E6EA8;
    }
    goto L_088E6E84;
L_088E6E84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
        goto L_088E6EA8;
    }
    goto L_088E6E94;
L_088E6E94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E6FBC;
      }
      goto L_088E6EA4;
    }
L_088E6EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    goto L_088E6EA8;
L_088E6EA8:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6FBC;
      }
      goto L_088E6EB4;
    }
L_088E6EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6FBC;
      }
      goto L_088E6EC8;
    }
L_088E6EC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6FBC;
      }
      goto L_088E6ED8;
    }
L_088E6ED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6FBC;
      }
      goto L_088E6EE4;
    }
L_088E6EE4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x088E6F04u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A287F8u>(ctx, &aot_mem) && ctx.pc == 0x088E6F04u) goto L_088E6F04;
    return;
L_088E6F04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088E6FBC;
      }
      goto L_088E6F0C;
    }
L_088E6F0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16672u << 16u);
      if (branch_taken) {
          goto L_088E6FBC;
      }
      goto L_088E6F2C;
    }
L_088E6F2C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E6FBC;
      }
      goto L_088E6F44;
    }
L_088E6F44:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x088E6F54u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x088E6F54u) goto L_088E6F54;
    return;
L_088E6F54:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6844), ctx.gpr[17]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6FBC;
      }
      goto L_088E6FA8;
    }
L_088E6FA8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E6FBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 447u, 0x08957150u>(ctx, &aot_mem) && ctx.pc == 0x088E6FBCu) goto L_088E6FBC;
    return;
L_088E6FBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088E6DB0;
      }
      goto L_088E6FC4;
    }
L_088E6FC4:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E6FDCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x088E6FDCu) goto L_088E6FDC;
    return;
L_088E6FDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E6FE4;
    }
L_088E6FE4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E7000u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E7000u) goto L_088E7000;
    return;
L_088E7000:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7010u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E7010u) goto L_088E7010;
    return;
L_088E7010:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E7024u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E7024u) goto L_088E7024;
    return;
L_088E7024:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 41u);
    ctx.gpr[31] = (0x088E7058u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x088E7058u) goto L_088E7058;
    return;
L_088E7058:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E7060;
    }
L_088E7060:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E7078u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E7078u) goto L_088E7078;
    return;
L_088E7078:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7088u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E7088u) goto L_088E7088;
    return;
L_088E7088:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E70B4;
      }
      goto L_088E7098;
    }
L_088E7098:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E70A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x088E70A8u) goto L_088E70A8;
    return;
L_088E70A8:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088E70C0;
      }
      goto L_088E70B4;
    }
L_088E70B4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    goto L_088E70C0;
L_088E70C0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E70D0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x088E70D0u) goto L_088E70D0;
    return;
L_088E70D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E70D8;
    }
L_088E70D8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E70F0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E70F0u) goto L_088E70F0;
    return;
L_088E70F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7100u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E7100u) goto L_088E7100;
    return;
L_088E7100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E7180;
      }
      goto L_088E7118;
    }
L_088E7118:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(3248));
      if (branch_taken) {
          goto L_088E7140;
      }
      goto L_088E7138;
    }
L_088E7138:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088E7158;
      }
      goto L_088E7140;
    }
L_088E7140:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    goto L_088E7158;
L_088E7158:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7174;
      }
      goto L_088E7160;
    }
L_088E7160:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088E7174;
      }
      goto L_088E716C;
    }
L_088E716C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_088E7174;
L_088E7174:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E7118;
      }
      goto L_088E7180;
    }
L_088E7180:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E7198u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x088E7198u) goto L_088E7198;
    return;
L_088E7198:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E71A0;
    }
L_088E71A0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x088E71BCu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E71BCu) goto L_088E71BC;
    return;
L_088E71BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E71F8;
      }
      goto L_088E71E8;
    }
L_088E71E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088E71F4u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x088E71F4u) goto L_088E71F4;
    return;
L_088E71F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088E71F8;
L_088E71F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (16457u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (17204u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[17];
    ctx.gpr[31] = (0x088E7238u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 152u, 0x088412BCu>(ctx, &aot_mem) && ctx.pc == 0x088E7238u) goto L_088E7238;
    return;
L_088E7238:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E7240;
    }
L_088E7240:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E725Cu);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E725Cu) goto L_088E725C;
    return;
L_088E725C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E72B4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x088E72B4u) goto L_088E72B4;
    return;
L_088E72B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E72BC;
    }
L_088E72BC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E72D8u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E72D8u) goto L_088E72D8;
    return;
L_088E72D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E72E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E72E8u) goto L_088E72E8;
    return;
L_088E72E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E7314u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x088E7314u) goto L_088E7314;
    return;
L_088E7314:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E731C;
    }
L_088E731C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x088E732Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 561u, 0x0887E9B0u>(ctx, &aot_mem) && ctx.pc == 0x088E732Cu) goto L_088E732C;
    return;
L_088E732C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E7334;
    }
L_088E7334:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x088E7350u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E7350u) goto L_088E7350;
    return;
L_088E7350:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7360u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E7360u) goto L_088E7360;
    return;
L_088E7360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E7384;
    }
L_088E7384:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E739Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E739Cu) goto L_088E739C;
    return;
L_088E739C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E73ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E73ACu) goto L_088E73AC;
    return;
L_088E73AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088E73E0;
      }
      goto L_088E73BC;
    }
L_088E73BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E73E0;
      }
      goto L_088E73C8;
    }
L_088E73C8:
    ctx.gpr[31] = (0x088E73D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x088E73D0u) goto L_088E73D0;
    return;
L_088E73D0:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E73E0;
      }
      goto L_088E73DC;
    }
L_088E73DC:
    ctx.gpr[17] = (0u | 1u);
    goto L_088E73E0;
L_088E73E0:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E740C;
      }
      goto L_088E7404;
    }
L_088E7404:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088E745C;
      }
      goto L_088E740C;
    }
L_088E740C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E743C;
    }
    goto L_088E7428;
L_088E7428:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E745C;
      }
      goto L_088E743C;
    }
L_088E743C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E745C;
      }
      goto L_088E7458;
    }
L_088E7458:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E745C;
L_088E745C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E7464;
    }
L_088E7464:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E747Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E747Cu) goto L_088E747C;
    return;
L_088E747C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088E74DC;
      }
      goto L_088E74B0;
    }
L_088E74B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E74DC;
      }
      goto L_088E74C0;
    }
L_088E74C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088E74CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x088E74CCu) goto L_088E74CC;
    return;
L_088E74CC:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E74DC;
      }
      goto L_088E74D8;
    }
L_088E74D8:
    ctx.gpr[17] = (0u | 1u);
    goto L_088E74DC;
L_088E74DC:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E7508;
      }
      goto L_088E7500;
    }
L_088E7500:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088E7558;
      }
      goto L_088E7508;
    }
L_088E7508:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E7538;
    }
    goto L_088E7524;
L_088E7524:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E7558;
      }
      goto L_088E7538;
    }
L_088E7538:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7558;
      }
      goto L_088E7554;
    }
L_088E7554:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E7558;
L_088E7558:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E7560;
    }
L_088E7560:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E757Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E757Cu) goto L_088E757C;
    return;
L_088E757C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E758Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E758Cu) goto L_088E758C;
    return;
L_088E758C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088E7604;
      }
      goto L_088E75A8;
    }
L_088E75A8:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E75F0;
      }
      goto L_088E75CC;
    }
L_088E75CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E75F0;
      }
      goto L_088E75D8;
    }
L_088E75D8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088E75E4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 299u, 0x0899DD38u>(ctx, &aot_mem) && ctx.pc == 0x088E75E4u) goto L_088E75E4;
    return;
L_088E75E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E75F0;
      }
      goto L_088E75EC;
    }
L_088E75EC:
    ctx.gpr[19] = (0u | 1u);
    goto L_088E75F0;
L_088E75F0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E75A8;
      }
      goto L_088E7604;
    }
L_088E7604:
    ctx.gpr[4] = (0u < ctx.gpr[19] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u < ctx.gpr[19] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E7630;
      }
      goto L_088E7628;
    }
L_088E7628:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_088E7680;
      }
      goto L_088E7630;
    }
L_088E7630:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E7660;
    }
    goto L_088E764C;
L_088E764C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E7680;
      }
      goto L_088E7660;
    }
L_088E7660:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[19] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7680;
      }
      goto L_088E767C;
    }
L_088E767C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E7680;
L_088E7680:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E7688;
    }
L_088E7688:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E76A0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E76A0u) goto L_088E76A0;
    return;
L_088E76A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(15728), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E76BC;
    }
L_088E76BC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E76D4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E76D4u) goto L_088E76D4;
    return;
L_088E76D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(15730), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(15730))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088E7700;
      }
      goto L_088E76FC;
    }
L_088E76FC:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(15730))))));
    goto L_088E7700;
L_088E7700:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(15730), static_cast<std::uint16_t>(ctx.gpr[16]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E7710;
    }
L_088E7710:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E772Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E772Cu) goto L_088E772C;
    return;
L_088E772C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E773Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E773Cu) goto L_088E773C;
    return;
L_088E773C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1820), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E774C;
    }
L_088E774C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E7764u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E7764u) goto L_088E7764;
    return;
L_088E7764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E77B0;
      }
      goto L_088E7794;
    }
L_088E7794:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E77A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 509u, 0x08AFE25Cu>(ctx, &aot_mem) && ctx.pc == 0x088E77A4u) goto L_088E77A4;
    return;
L_088E77A4:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088E77BC;
      }
      goto L_088E77B0;
    }
L_088E77B0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    goto L_088E77BC;
L_088E77BC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E77CCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x088E77CCu) goto L_088E77CC;
    return;
L_088E77CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E77D4;
    }
L_088E77D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E77F8;
      }
      goto L_088E77F0;
    }
L_088E77F0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E7848;
      }
      goto L_088E77F8;
    }
L_088E77F8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E7828;
    }
    goto L_088E7814;
L_088E7814:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E7848;
      }
      goto L_088E7828;
    }
L_088E7828:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7848;
      }
      goto L_088E7844;
    }
L_088E7844:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E7848;
L_088E7848:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E7850;
    }
L_088E7850:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E7868u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E7868u) goto L_088E7868;
    return;
L_088E7868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088E7894;
      }
      goto L_088E7880;
    }
L_088E7880:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088E7894;
L_088E7894:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E78A4;
      }
      goto L_088E789C;
    }
L_088E789C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088E78A8;
      }
      goto L_088E78A4;
    }
L_088E78A4:
    ctx.gpr[4] = (0u | 0u);
    goto L_088E78A8;
L_088E78A8:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E78D4;
      }
      goto L_088E78CC;
    }
L_088E78CC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E7924;
      }
      goto L_088E78D4;
    }
L_088E78D4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E7904;
    }
    goto L_088E78F0;
L_088E78F0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E7924;
      }
      goto L_088E7904;
    }
L_088E7904:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7924;
      }
      goto L_088E7920;
    }
L_088E7920:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E7924;
L_088E7924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E792C;
    }
L_088E792C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E7948u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E7948u) goto L_088E7948;
    return;
L_088E7948:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7958u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E7958u) goto L_088E7958;
    return;
L_088E7958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E7980;
      }
      goto L_088E7964;
    }
L_088E7964:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088E7978u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 194u, 0x08864DB0u>(ctx, &aot_mem) && ctx.pc == 0x088E7978u) goto L_088E7978;
    return;
L_088E7978:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7994;
      }
      goto L_088E7980;
    }
L_088E7980:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E7994u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 194u, 0x08864DB0u>(ctx, &aot_mem) && ctx.pc == 0x088E7994u) goto L_088E7994;
    return;
L_088E7994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E799C;
    }
L_088E799C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E79B4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E79B4u) goto L_088E79B4;
    return;
L_088E79B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E79CC;
      }
      goto L_088E79C0;
    }
L_088E79C0:
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16182), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088E79D8;
      }
      goto L_088E79CC;
    }
L_088E79CC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16182), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E79D8;
L_088E79D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E79E0;
    }
L_088E79E0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E79FCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E79FCu) goto L_088E79FC;
    return;
L_088E79FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7A0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E7A0Cu) goto L_088E7A0C;
    return;
L_088E7A0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(502), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E7A1C;
    }
L_088E7A1C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088E7A38u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E7A38u) goto L_088E7A38;
    return;
L_088E7A38:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (0u | 0u);
    goto L_088E7A7C;
L_088E7A7C:
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(336) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7B1C;
      }
      goto L_088E7A88;
    }
L_088E7A88:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
      if (branch_taken) {
          goto L_088E7B1C;
      }
      goto L_088E7A90;
    }
L_088E7A90:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (2275u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7B14;
      }
      goto L_088E7AB0;
    }
L_088E7AB0:
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (2275u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E7B14;
      }
      goto L_088E7B10;
    }
L_088E7B10:
    ctx.gpr[4] = (0u | 1u);
    goto L_088E7B14;
L_088E7B14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E7A7C;
      }
      goto L_088E7B1C;
    }
L_088E7B1C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7B28;
      }
      goto L_088E7B24;
    }
L_088E7B24:
    ctx.gpr[6] = (0u | 1u);
    goto L_088E7B28;
L_088E7B28:
    ctx.gpr[4] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E7B54;
      }
      goto L_088E7B4C;
    }
L_088E7B4C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_088E7BA4;
      }
      goto L_088E7B54;
    }
L_088E7B54:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E7B84;
    }
    goto L_088E7B70;
L_088E7B70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E7BA4;
      }
      goto L_088E7B84;
    }
L_088E7B84:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7BA4;
      }
      goto L_088E7BA0;
    }
L_088E7BA0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E7BA4;
L_088E7BA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E7BAC;
    }
L_088E7BAC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E7BC4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E7BC4u) goto L_088E7BC4;
    return;
L_088E7BC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7BD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E7BD4u) goto L_088E7BD4;
    return;
L_088E7BD4:
    ctx.gpr[31] = (0x088E7BDCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 682u, 0x0899F844u>(ctx, &aot_mem) && ctx.pc == 0x088E7BDCu) goto L_088E7BDC;
    return;
L_088E7BDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E7BE4;
    }
L_088E7BE4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E7BFCu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E7BFCu) goto L_088E7BFC;
    return;
L_088E7BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088E7C74;
      }
      goto L_088E7C30;
    }
L_088E7C30:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[4] << 5u);
    ctx.gpr[9] = (ctx.gpr[4] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (2269u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088E7C64;
      }
      goto L_088E7C5C;
    }
L_088E7C5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088E7C74;
      }
      goto L_088E7C64;
    }
L_088E7C64:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7C30;
      }
      goto L_088E7C74;
    }
L_088E7C74:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E7CA0;
      }
      goto L_088E7C98;
    }
L_088E7C98:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088E7CF0;
      }
      goto L_088E7CA0;
    }
L_088E7CA0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E7CD0;
    }
    goto L_088E7CBC;
L_088E7CBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E7CF0;
      }
      goto L_088E7CD0;
    }
L_088E7CD0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7CF0;
      }
      goto L_088E7CEC;
    }
L_088E7CEC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E7CF0;
L_088E7CF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E7CF8;
    }
L_088E7CF8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E7D10u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E7D10u) goto L_088E7D10;
    return;
L_088E7D10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7D20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088E7D20u) goto L_088E7D20;
    return;
L_088E7D20:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088E7D74;
      }
      goto L_088E7D34;
    }
L_088E7D34:
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[8] = (2269u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088E7D64;
      }
      goto L_088E7D5C;
    }
L_088E7D5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088E7D74;
      }
      goto L_088E7D64;
    }
L_088E7D64:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7D34;
      }
      goto L_088E7D74;
    }
L_088E7D74:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E7DA0;
      }
      goto L_088E7D98;
    }
L_088E7D98:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088E7DF0;
      }
      goto L_088E7DA0;
    }
L_088E7DA0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E7DD0;
    }
    goto L_088E7DBC;
L_088E7DBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E7DF0;
      }
      goto L_088E7DD0;
    }
L_088E7DD0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7DF0;
      }
      goto L_088E7DEC;
    }
L_088E7DEC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E7DF0;
L_088E7DF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E7DF8;
    }
L_088E7DF8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E7E14u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E7E14u) goto L_088E7E14;
    return;
L_088E7E14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7E24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E7E24u) goto L_088E7E24;
    return;
L_088E7E24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E7E40;
      }
      goto L_088E7E30;
    }
L_088E7E30:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1510))))));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1510), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E7E50;
      }
      goto L_088E7E40;
    }
L_088E7E40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1510))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1510), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E7E50;
L_088E7E50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E7E58;
    }
L_088E7E58:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E7E78u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E7E78u) goto L_088E7E78;
    return;
L_088E7E78:
    ctx.gpr[31] = (0x088E7E80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088E7E80u) goto L_088E7E80;
    return;
L_088E7E80:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E7E8Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 648u, 0x08A96C60u>(ctx, &aot_mem) && ctx.pc == 0x088E7E8Cu) goto L_088E7E8C;
    return;
L_088E7E8C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[31] = (0x088E7E98u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 652u, 0x08A96CA4u>(ctx, &aot_mem) && ctx.pc == 0x088E7E98u) goto L_088E7E98;
    return;
L_088E7E98:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[31] = (0x088E7EBCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x088E7EBCu) goto L_088E7EBC;
    return;
L_088E7EBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E7EC4;
    }
L_088E7EC4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E7EDCu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E7EDCu) goto L_088E7EDC;
    return;
L_088E7EDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7EECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E7EECu) goto L_088E7EEC;
    return;
L_088E7EEC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(580)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088E7F00;
      }
      goto L_088E7EFC;
    }
L_088E7EFC:
    ctx.gpr[17] = (0u | 1u);
    goto L_088E7F00;
L_088E7F00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7F24;
      }
      goto L_088E7F0C;
    }
L_088E7F0C:
    ctx.gpr[31] = (0x088E7F14u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(848));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 220u, 0x08A292F8u>(ctx, &aot_mem) && ctx.pc == 0x088E7F14u) goto L_088E7F14;
    return;
L_088E7F14:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(225) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7F24;
      }
      goto L_088E7F20;
    }
L_088E7F20:
    ctx.gpr[17] = (0u | 1u);
    goto L_088E7F24;
L_088E7F24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E7F44;
      }
      goto L_088E7F40;
    }
L_088E7F40:
    ctx.gpr[17] = (0u | 1u);
    goto L_088E7F44;
L_088E7F44:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088E7F70;
      }
      goto L_088E7F68;
    }
L_088E7F68:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088E7FC0;
      }
      goto L_088E7F70;
    }
L_088E7F70:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_088E7FA0;
    }
    goto L_088E7F8C;
L_088E7F8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E7FC0;
      }
      goto L_088E7FA0;
    }
L_088E7FA0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7FC0;
      }
      goto L_088E7FBC;
    }
L_088E7FBC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088E7FC0;
L_088E7FC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 149u, 0x088E8B50u>(ctx, &aot_mem); return;
      }
      goto L_088E7FC8;
    }
L_088E7FC8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E7FE0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088E7FE0u) goto L_088E7FE0;
    return;
L_088E7FE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088E7FF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x088E7FF0u) goto L_088E7FF0;
    return;
L_088E7FF0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 13u, 0x088E80D4u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 1u, 0x088E8004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0056(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0056_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_56(Runtime &runtime) {
    runtime.register_generated_unit(56u, 0x088E4000u, 16384u, &recomp_unit_0056, &recomp_unit_0056_entry);
    runtime.register_function(0x088E4000u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E40ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E40FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4108u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4110u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4118u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4120u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4128u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4130u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4138u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4140u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E414Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4154u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E415Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4164u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E416Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4174u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E417Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4184u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E418Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4194u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E419Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4200u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4208u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4210u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4218u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4220u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4228u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4230u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4234u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E423Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4264u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4280u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4298u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4308u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E431Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4338u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E433Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4344u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E435Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4368u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4378u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4380u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4388u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4390u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4398u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4410u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E442Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4430u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4438u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4454u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4464u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4470u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4480u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4490u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4498u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4510u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4514u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4524u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4538u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E453Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E454Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4560u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4564u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4574u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4588u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E460Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4620u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E463Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4640u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4648u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4660u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4688u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4718u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4754u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4770u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E47B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E47D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E47E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4800u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4808u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4820u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E482Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4834u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E483Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4844u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4850u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4860u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4868u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4884u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4894u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4910u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4920u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4930u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4944u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4954u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E495Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4978u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4980u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E498Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4994u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A90u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4AA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4AA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4AB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4AC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4AD0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4AD8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4AE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4AE8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4BA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4BD0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4BD8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4BF0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4BF8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C48u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C78u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CD0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D5Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4DA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4DBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4DCCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4DD8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4DF0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4EBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4EC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4ECCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4ED4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4EDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4EF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F34u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F3Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F78u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4FB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4FC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4FC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5008u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5010u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5018u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5034u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5044u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5050u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5060u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5070u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5078u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5090u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E50C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E50F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5110u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5120u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5130u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5138u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5154u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5164u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5174u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5180u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5188u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E51A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E51B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E51B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E51D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E51E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E51E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E51ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E51F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E51FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E521Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5224u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5240u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5250u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5268u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5270u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5274u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5298u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E52A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E52BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E52D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E52ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E52F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E52F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5314u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5324u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5334u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E533Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5340u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5348u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5364u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E536Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5388u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E539Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E53B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E53BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E53C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E53E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E540Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5414u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5430u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5454u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5460u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5470u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E547Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E548Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5498u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E54C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E54CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E54E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E54F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5504u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5514u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5524u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E552Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5548u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E556Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5578u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5588u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5594u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5600u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E560Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5614u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5630u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5668u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5670u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E568Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5698u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E56A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E56BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E56C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E56D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E56ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E56FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5710u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E571Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5734u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E573Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5754u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E575Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5778u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5788u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E57A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E57C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E57C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E57E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E57F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E580Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5820u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E583Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5840u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5848u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5868u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5878u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5898u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E58ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E58B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E58D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E58E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E58ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5900u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5914u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E591Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5934u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E593Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5944u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E594Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5954u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E595Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5964u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5968u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E598Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5994u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A90u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5AA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5AB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5ABCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5AD0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5AE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5AECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5AFCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B3Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B5Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B78u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BF8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CCCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D5Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D90u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DD8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5EACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5EB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5EC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5EDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5EECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F34u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F3Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F9Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6000u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6010u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6018u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E601Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6040u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6048u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6064u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6078u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6094u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6098u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E60A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E60B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E60ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6100u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6114u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6118u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E613Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6144u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6160u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6174u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6190u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6194u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E619Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E61B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E61C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E61D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E61E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E61F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E61F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E621Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6224u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6240u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6254u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6270u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6274u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E627Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6280u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E629Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E630Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E631Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6330u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6340u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6350u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6364u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6378u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6380u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6398u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6414u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6424u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6430u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6480u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6494u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E649Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E64A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E64ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E64B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E64ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E64F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6510u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6544u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6558u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E657Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E658Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6590u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E65B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E65BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E65D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E65ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6608u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E660Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6614u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6630u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6664u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6678u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E669Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E670Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6728u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E672Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6734u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6750u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6760u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6774u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6784u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6794u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6808u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E680Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6818u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6820u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6838u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6848u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6854u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6860u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6868u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E686Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6878u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6890u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6930u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6944u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E695Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E696Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6978u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6984u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E698Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6990u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E699Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E69B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A18u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6AA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6AB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6AB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6AC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6ADCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6AFCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6BA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C50u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C9Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CD0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CE8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CF8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D3Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D78u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D90u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DE8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E18u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E5Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6ED8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6FA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6FBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6FC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6FDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6FE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7000u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7010u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7024u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7058u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7060u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7078u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7088u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7098u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7100u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7118u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7138u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7140u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7158u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7160u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E716Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7174u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7180u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7198u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7238u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7240u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E725Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E72B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E72BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E72D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E72E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7314u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E731Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E732Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7334u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7350u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7360u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7384u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E739Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7404u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E740Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7428u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E743Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7458u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E745Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7464u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E747Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7500u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7508u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7524u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7538u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7554u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7558u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7560u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E757Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E758Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7604u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7628u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7630u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E764Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7660u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E767Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7680u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7688u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E76A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E76BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E76D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E76FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7700u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7710u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E772Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E773Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E774Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7764u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7794u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7814u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7828u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7844u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7848u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7850u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7868u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7880u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7894u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E789Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7904u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7920u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7924u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E792Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7948u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7958u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7964u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7978u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7980u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7994u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E799Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A90u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7AB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7BA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7BA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7BACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7BC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7BD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7BDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7BE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7BFCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C5Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7CA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7CBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7CD0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7CECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7CF0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7CF8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D34u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D5Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7DA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7DBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7DD0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7DECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7DF0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7DF8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E50u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E78u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7EBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7EC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7EDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7EECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7EFCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FF0u, &recomp_unit_0056, "recomp_unit_0056");
}
} // namespace psprecomp
