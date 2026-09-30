#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0041[4095] = {
    1, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 7, 0, 8, 0, 9,
    0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 0, 19, 0, 20, 21, 22, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 26,
    0, 27, 0, 0, 28, 0, 0, 29, 0, 30, 31, 32, 0, 33, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 40, 41, 0, 42, 0, 43, 44, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 50, 51, 0, 52, 0, 53, 0, 54, 55, 0, 0, 0,
    0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 60, 0, 0, 61, 0, 62,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 66, 0, 0, 0, 67, 0, 68, 0, 69, 0, 70, 0,
    0, 0, 71, 0, 0, 0, 72, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 78, 0, 79, 0, 80, 81,
    0, 82, 0, 83, 0, 84, 0, 0, 85, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97,
    0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0,
    0, 0, 0, 0, 105, 0, 0, 106, 107, 0, 108, 0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 114, 0, 0, 115, 0, 116, 0, 117, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 122, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 145, 0, 146, 0, 147, 0, 0, 0,
    0, 0, 148, 149, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157,
    0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 165, 166,
    167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0,
    173, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0,
    181, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 187, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 193, 0, 194, 0, 195, 0, 0, 0,
    0, 0, 196, 197, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 201, 0, 202, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 208,
    0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0,
    0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0,
    0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 234, 0, 235, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0,
    0, 241, 0, 0, 0, 242, 0, 243, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 248, 0, 0, 249,
    0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254,
    0, 0, 0, 0, 0, 0, 255, 256, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0,
    261, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266,
    0, 267, 0, 0, 0, 0, 268, 0, 269, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 276, 0, 277, 0, 278, 0, 279,
    0, 280, 0, 0, 0, 281, 0, 282, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287,
    0, 0, 288, 0, 0, 289, 0, 0, 290, 291, 0, 292, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0,
    0, 297, 0, 0, 0, 298, 0, 299, 0, 300, 301, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 304, 0, 0, 0, 305, 0, 0,
    306, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 311, 0, 0, 0, 0, 0, 312, 313, 314, 0, 315, 0, 0, 0, 0, 316, 0, 317, 0, 318, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 321,
    322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327,
    0, 328, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 331, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 335, 0, 0, 0,
    0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 339, 340, 0, 0, 0, 0,
    0, 0, 341, 0, 0, 0, 342, 0, 343, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 347, 348, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 351, 352, 353, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0,
    0, 356, 0, 357, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 362,
    0, 0, 363, 0, 364, 365, 0, 0, 0, 366, 0, 0, 0, 367, 0, 368, 369, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0,
    0, 373, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0,
    0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 383, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387,
    0, 388, 0, 0, 0, 389, 0, 0, 0, 390, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 402,
    0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0,
    0, 407, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0,
    0, 412, 0, 0, 0, 413, 0, 0, 0, 414, 415, 0, 416, 0, 417, 0, 0, 0, 0, 0, 418, 419, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    421, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0,
    0, 428, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 0, 433, 0, 0, 0, 434, 435, 0, 436, 437, 0, 0, 0, 0,
    0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 442, 0, 0, 0, 0, 0,
    443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 446,
    0, 0, 447, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 458, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 463,
    0, 464, 0, 0, 0, 465, 0, 0, 0, 466, 467, 0, 468, 0, 469, 0, 0, 0, 0, 0, 470, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 477, 0, 0, 0, 478, 0, 0, 0, 479, 480, 0, 481,
    0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 485, 0,
    0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 0, 489, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 493,
    0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 0, 0, 497, 0, 0, 0, 498, 499, 0, 500, 0, 0, 0, 0,
    0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 507, 0, 0, 0, 508, 509, 0, 510, 511, 0, 0, 0, 0, 0, 0, 512, 0,
    0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 517, 0, 0, 0, 0, 518, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 0, 522, 0, 0, 0, 523, 524,
    0, 525, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 529,
    0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0,
    0, 0, 0, 533, 0, 534, 0, 535, 0, 536, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538,
    0, 539, 0, 0, 540, 0, 541, 0, 542, 0, 0, 0, 543, 0, 0, 0, 544, 545, 0, 546, 0, 547, 0, 0, 0, 0, 0, 548, 549, 550, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 552, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 556, 0, 557,
    0, 558, 0, 559, 0, 560, 0, 561, 0, 562, 0, 563, 0, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 0, 0, 567, 0, 0, 0, 0, 568, 0,
    0, 569, 0, 570, 0, 0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 573, 0, 0, 574, 0, 575, 0, 576, 0, 577, 0, 578, 0, 0, 579,
    0, 580, 0, 0, 581, 0, 582, 0, 583, 0, 0, 584, 0, 0, 585, 0, 586, 0, 587, 0, 588, 0, 0, 589, 0, 0, 590, 0, 591, 0, 0, 592,
    0, 0, 593, 0, 594, 0, 0, 595, 0, 596, 0, 0, 597, 0, 598, 0, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 602, 0,
    0, 603, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 606, 0, 607, 0, 608, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610,
    0, 611, 0, 612, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616,
    0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 620, 0, 621, 0, 622, 0, 623, 0, 624, 0,
    0, 0, 0, 0, 0, 0, 625, 0, 626, 0, 627, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 630, 0, 0, 0, 0, 0, 631,
    0, 632, 0, 0, 633, 0, 0, 634, 0, 635, 0, 0, 636, 0, 0, 637, 0, 638, 0, 0, 639, 0, 0, 0, 0, 0, 0, 640, 0, 0, 641, 0,
    0, 642, 0, 643, 0, 644, 0, 645, 0, 646, 0, 0, 647, 0, 0, 648, 0, 649, 0, 650, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0, 0, 0,
    653, 0, 654, 0, 655, 0, 656, 0, 657, 0, 0, 658, 0, 659, 0, 0, 660, 0, 0, 661, 0, 0, 662, 0, 0, 663, 0, 0, 664, 0, 0, 665,
    0, 0, 666, 0, 0, 667, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 672, 0, 0, 673, 0, 0, 674, 675, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 677,
    678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 680, 0, 681, 0, 682, 0, 0, 0, 0, 0, 683, 0, 684, 0, 0,
    0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 0, 0, 0,
    0, 0, 690, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 693, 0, 694, 0, 695, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 698, 0, 0, 699, 0, 700, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 703, 0, 0, 0,
    0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 708,
    0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 711, 0, 712, 0, 0, 0, 0, 713, 0, 714, 0, 715, 0, 716, 0, 717,
    0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 0, 721, 0, 722, 723, 0, 724, 0, 0, 0, 0, 725, 0, 0, 726,
    727, 0, 728, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 732, 0, 0,
    0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 736, 0, 0, 0, 0, 737, 0,
    0, 0, 738, 0, 0, 0, 739, 0, 0, 0, 0, 0, 740, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 743, 0, 0, 0,
    744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 746, 0, 747, 748, 0, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 755, 0, 0,
    0, 0, 0, 756, 0, 0, 757, 0, 0, 758, 0, 759, 0, 0, 760, 0, 0, 761, 0, 0, 0, 762, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 765, 0, 0, 0, 0, 766, 0, 767, 0, 0, 0, 0, 0, 0, 768, 0,
    769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 771, 0, 772, 0, 0, 0, 0, 0, 0, 773, 0, 0, 774, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 776, 0, 0, 777, 0, 778, 0, 779, 0, 0, 780, 0, 0, 781, 0, 0, 0, 0,
    0, 782, 783, 0, 0, 0, 0, 784, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 787, 0, 0, 0, 0, 788, 0, 0, 789, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 791, 0, 0, 792, 0, 0, 793, 0, 0, 794, 0, 0, 795, 0, 796, 0, 797, 0, 798,
    0, 799, 0, 0, 0, 800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 801, 0, 0, 802, 0, 0, 803, 0, 0, 804, 0, 805, 0, 806,
    0, 807, 0, 0, 808, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 0, 811, 0, 0, 812,
    0, 0, 0, 0, 0, 813, 0, 0, 814, 0, 815, 0, 816, 0, 0, 0, 0, 0, 817, 0, 0, 818, 0, 819, 0, 820, 0, 0, 0, 0, 0, 0,
    821, 0, 0, 822, 0, 0, 823, 0, 0, 824, 0, 0, 0, 825, 0, 826, 0, 827, 0, 828, 0, 0, 0, 829, 0, 0, 830, 0, 831, 0, 832, 0,
    0, 0, 833, 0, 0, 0, 834, 0, 0, 835, 0, 836, 0, 0, 0, 0, 837, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 839, 0, 0, 840, 0, 0, 841, 0, 0, 842, 0, 843, 0, 844, 0, 845, 0, 0, 0, 0, 0, 0, 0, 846, 0, 0, 0, 847, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0, 0, 0, 849, 0, 0, 850, 0, 851, 0, 852, 0, 0, 853, 0, 0, 854, 0, 855, 0, 856, 0,
    0, 0, 0, 0, 0, 857, 0, 0, 0, 858, 0, 859, 0, 860, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 861, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 862, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 864, 0, 865, 866, 0, 867, 0, 0, 0, 0, 0, 0, 0, 0, 868, 0, 869, 870, 0, 871, 0,
    0, 0, 872, 0, 873, 0, 0, 0, 874, 0, 0, 0, 0, 875, 876, 0, 0, 0, 0, 877, 878, 0, 0, 0, 0, 879, 0, 0, 880, 0, 0, 0,
    0, 881, 0, 0, 882, 0, 0, 0, 883, 884, 0, 0, 0, 0, 885, 0, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    887, 0, 0, 888, 0, 0, 0, 889, 890, 0, 891, 0, 0, 0, 892, 0, 893, 0, 0, 894, 0, 0, 0, 0, 0, 895, 0, 0, 0, 896, 0, 897,
    898, 0, 899, 0, 0, 0, 900, 0, 901, 902, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 903, 0, 0, 904, 0, 0, 905, 906, 0, 907, 0,
    0, 908, 0, 0, 0, 909, 0, 0, 910, 0, 0, 0, 911, 0, 912, 913, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 914, 0, 0, 915,
};
void recomp_unit_0041_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088A8000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0041[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A8000;
    case 2u: goto L_088A8010;
    case 3u: goto L_088A8014;
    case 4u: goto L_088A8030;
    case 5u: goto L_088A8058;
    case 6u: goto L_088A8060;
    case 7u: goto L_088A806C;
    case 8u: goto L_088A8074;
    case 9u: goto L_088A807C;
    case 10u: goto L_088A808C;
    case 11u: goto L_088A8098;
    case 12u: goto L_088A80A8;
    case 13u: goto L_088A80BC;
    case 14u: goto L_088A80C8;
    case 15u: goto L_088A80E4;
    case 16u: goto L_088A8120;
    case 17u: goto L_088A8128;
    case 18u: goto L_088A8134;
    case 19u: goto L_088A8140;
    case 20u: goto L_088A8148;
    case 21u: goto L_088A814C;
    case 22u: goto L_088A8150;
    case 23u: goto L_088A8158;
    case 24u: goto L_088A816C;
    case 25u: goto L_088A8174;
    case 26u: goto L_088A817C;
    case 27u: goto L_088A8184;
    case 28u: goto L_088A8190;
    case 29u: goto L_088A819C;
    case 30u: goto L_088A81A4;
    case 31u: goto L_088A81A8;
    case 32u: goto L_088A81AC;
    case 33u: goto L_088A81B4;
    case 34u: goto L_088A81C8;
    case 35u: goto L_088A81D0;
    case 36u: goto L_088A81F0;
    case 37u: goto L_088A8218;
    case 38u: goto L_088A8224;
    case 39u: goto L_088A823C;
    case 40u: goto L_088A8248;
    case 41u: goto L_088A824C;
    case 42u: goto L_088A8254;
    case 43u: goto L_088A825C;
    case 44u: goto L_088A8260;
    case 45u: goto L_088A826C;
    case 46u: goto L_088A8288;
    case 47u: goto L_088A82A0;
    case 48u: goto L_088A82AC;
    case 49u: goto L_088A82C4;
    case 50u: goto L_088A82D0;
    case 51u: goto L_088A82D4;
    case 52u: goto L_088A82DC;
    case 53u: goto L_088A82E4;
    case 54u: goto L_088A82EC;
    case 55u: goto L_088A82F0;
    case 56u: goto L_088A8304;
    case 57u: goto L_088A832C;
    case 58u: goto L_088A8334;
    case 59u: goto L_088A8364;
    case 60u: goto L_088A8368;
    case 61u: goto L_088A8374;
    case 62u: goto L_088A837C;
    case 63u: goto L_088A83A0;
    case 64u: goto L_088A83AC;
    case 65u: goto L_088A83CC;
    case 66u: goto L_088A83D0;
    case 67u: goto L_088A83E0;
    case 68u: goto L_088A83E8;
    case 69u: goto L_088A83F0;
    case 70u: goto L_088A83F8;
    case 71u: goto L_088A8408;
    case 72u: goto L_088A8418;
    case 73u: goto L_088A841C;
    case 74u: goto L_088A843C;
    case 75u: goto L_088A8448;
    case 76u: goto L_088A8454;
    case 77u: goto L_088A8460;
    case 78u: goto L_088A8468;
    case 79u: goto L_088A8470;
    case 80u: goto L_088A8478;
    case 81u: goto L_088A847C;
    case 82u: goto L_088A8484;
    case 83u: goto L_088A848C;
    case 84u: goto L_088A8494;
    case 85u: goto L_088A84A0;
    case 86u: goto L_088A84A4;
    case 87u: goto L_088A84AC;
    case 88u: goto L_088A84B4;
    case 89u: goto L_088A84BC;
    case 90u: goto L_088A84C4;
    case 91u: goto L_088A84CC;
    case 92u: goto L_088A84D4;
    case 93u: goto L_088A84DC;
    case 94u: goto L_088A84E4;
    case 95u: goto L_088A84EC;
    case 96u: goto L_088A84F4;
    case 97u: goto L_088A84FC;
    case 98u: goto L_088A8504;
    case 99u: goto L_088A850C;
    case 100u: goto L_088A8514;
    case 101u: goto L_088A8530;
    case 102u: goto L_088A8548;
    case 103u: goto L_088A856C;
    case 104u: goto L_088A8578;
    case 105u: goto L_088A8590;
    case 106u: goto L_088A859C;
    case 107u: goto L_088A85A0;
    case 108u: goto L_088A85A8;
    case 109u: goto L_088A85B0;
    case 110u: goto L_088A85BC;
    case 111u: goto L_088A85C4;
    case 112u: goto L_088A85D8;
    case 113u: goto L_088A85F0;
    case 114u: goto L_088A8608;
    case 115u: goto L_088A8614;
    case 116u: goto L_088A861C;
    case 117u: goto L_088A8624;
    case 118u: goto L_088A8630;
    case 119u: goto L_088A8638;
    case 120u: goto L_088A8658;
    case 121u: goto L_088A8674;
    case 122u: goto L_088A8678;
    case 123u: goto L_088A8690;
    case 124u: goto L_088A86A0;
    case 125u: goto L_088A86B0;
    case 126u: goto L_088A86C0;
    case 127u: goto L_088A86D4;
    case 128u: goto L_088A86E4;
    case 129u: goto L_088A86F8;
    case 130u: goto L_088A8740;
    case 131u: goto L_088A8750;
    case 132u: goto L_088A8764;
    case 133u: goto L_088A8780;
    case 134u: goto L_088A8790;
    case 135u: goto L_088A879C;
    case 136u: goto L_088A87B8;
    case 137u: goto L_088A87C8;
    case 138u: goto L_088A87D4;
    case 139u: goto L_088A8800;
    case 140u: goto L_088A8810;
    case 141u: goto L_088A8830;
    case 142u: goto L_088A883C;
    case 143u: goto L_088A884C;
    case 144u: goto L_088A885C;
    case 145u: goto L_088A8860;
    case 146u: goto L_088A8868;
    case 147u: goto L_088A8870;
    case 148u: goto L_088A8888;
    case 149u: goto L_088A888C;
    case 150u: goto L_088A8890;
    case 151u: goto L_088A88B8;
    case 152u: goto L_088A88C0;
    case 153u: goto L_088A88C4;
    case 154u: goto L_088A88CC;
    case 155u: goto L_088A8918;
    case 156u: goto L_088A892C;
    case 157u: goto L_088A897C;
    case 158u: goto L_088A8984;
    case 159u: goto L_088A8990;
    case 160u: goto L_088A899C;
    case 161u: goto L_088A89A8;
    case 162u: goto L_088A89B0;
    case 163u: goto L_088A89E4;
    case 164u: goto L_088A89EC;
    case 165u: goto L_088A89F8;
    case 166u: goto L_088A89FC;
    case 167u: goto L_088A8A00;
    case 168u: goto L_088A8A20;
    case 169u: goto L_088A8A7C;
    case 170u: goto L_088A8A90;
    case 171u: goto L_088A8AE0;
    case 172u: goto L_088A8AF4;
    case 173u: goto L_088A8B00;
    case 174u: goto L_088A8B18;
    case 175u: goto L_088A8B20;
    case 176u: goto L_088A8B3C;
    case 177u: goto L_088A8B44;
    case 178u: goto L_088A8B50;
    case 179u: goto L_088A8B5C;
    case 180u: goto L_088A8B6C;
    case 181u: goto L_088A8B80;
    case 182u: goto L_088A8B8C;
    case 183u: goto L_088A8B9C;
    case 184u: goto L_088A8BA4;
    case 185u: goto L_088A8BD8;
    case 186u: goto L_088A8BE0;
    case 187u: goto L_088A8BE4;
    case 188u: goto L_088A8C14;
    case 189u: goto L_088A8C34;
    case 190u: goto L_088A8C3C;
    case 191u: goto L_088A8C4C;
    case 192u: goto L_088A8C5C;
    case 193u: goto L_088A8C60;
    case 194u: goto L_088A8C68;
    case 195u: goto L_088A8C70;
    case 196u: goto L_088A8C88;
    case 197u: goto L_088A8C8C;
    case 198u: goto L_088A8C90;
    case 199u: goto L_088A8CC0;
    case 200u: goto L_088A8CC8;
    case 201u: goto L_088A8CCC;
    case 202u: goto L_088A8CD4;
    case 203u: goto L_088A8CE8;
    case 204u: goto L_088A8CF4;
    case 205u: goto L_088A8D44;
    case 206u: goto L_088A8D58;
    case 207u: goto L_088A8D74;
    case 208u: goto L_088A8D7C;
    case 209u: goto L_088A8D94;
    case 210u: goto L_088A8DA0;
    case 211u: goto L_088A8DC0;
    case 212u: goto L_088A8DD4;
    case 213u: goto L_088A8E14;
    case 214u: goto L_088A8E30;
    case 215u: goto L_088A8E78;
    case 216u: goto L_088A8E8C;
    case 217u: goto L_088A8EA4;
    case 218u: goto L_088A8EAC;
    case 219u: goto L_088A8EC8;
    case 220u: goto L_088A8ED0;
    case 221u: goto L_088A8EE8;
    case 222u: goto L_088A8EF0;
    case 223u: goto L_088A8F08;
    case 224u: goto L_088A8F14;
    case 225u: goto L_088A8F34;
    case 226u: goto L_088A8F48;
    case 227u: goto L_088A8F88;
    case 228u: goto L_088A8FA4;
    case 229u: goto L_088A8FAC;
    case 230u: goto L_088A9028;
    case 231u: goto L_088A9034;
    case 232u: goto L_088A903C;
    case 233u: goto L_088A9048;
    case 234u: goto L_088A9084;
    case 235u: goto L_088A908C;
    case 236u: goto L_088A9090;
    case 237u: goto L_088A90A8;
    case 238u: goto L_088A90D0;
    case 239u: goto L_088A90E0;
    case 240u: goto L_088A90EC;
    case 241u: goto L_088A9104;
    case 242u: goto L_088A9114;
    case 243u: goto L_088A911C;
    case 244u: goto L_088A912C;
    case 245u: goto L_088A9138;
    case 246u: goto L_088A9158;
    case 247u: goto L_088A9160;
    case 248u: goto L_088A9170;
    case 249u: goto L_088A917C;
    case 250u: goto L_088A9184;
    case 251u: goto L_088A91B8;
    case 252u: goto L_088A91C8;
    case 253u: goto L_088A91E4;
    case 254u: goto L_088A91FC;
    case 255u: goto L_088A9218;
    case 256u: goto L_088A921C;
    case 257u: goto L_088A922C;
    case 258u: goto L_088A9240;
    case 259u: goto L_088A9254;
    case 260u: goto L_088A9264;
    case 261u: goto L_088A9280;
    case 262u: goto L_088A9288;
    case 263u: goto L_088A92A4;
    case 264u: goto L_088A92AC;
    case 265u: goto L_088A92B4;
    case 266u: goto L_088A92FC;
    case 267u: goto L_088A9304;
    case 268u: goto L_088A9318;
    case 269u: goto L_088A9320;
    case 270u: goto L_088A9328;
    case 271u: goto L_088A9330;
    case 272u: goto L_088A9338;
    case 273u: goto L_088A9340;
    case 274u: goto L_088A9348;
    case 275u: goto L_088A935C;
    case 276u: goto L_088A9364;
    case 277u: goto L_088A936C;
    case 278u: goto L_088A9374;
    case 279u: goto L_088A937C;
    case 280u: goto L_088A9384;
    case 281u: goto L_088A9394;
    case 282u: goto L_088A939C;
    case 283u: goto L_088A93A0;
    case 284u: goto L_088A93B0;
    case 285u: goto L_088A93C8;
    case 286u: goto L_088A93F0;
    case 287u: goto L_088A93FC;
    case 288u: goto L_088A9408;
    case 289u: goto L_088A9414;
    case 290u: goto L_088A9420;
    case 291u: goto L_088A9424;
    case 292u: goto L_088A942C;
    case 293u: goto L_088A9434;
    case 294u: goto L_088A943C;
    case 295u: goto L_088A946C;
    case 296u: goto L_088A9478;
    case 297u: goto L_088A9484;
    case 298u: goto L_088A9494;
    case 299u: goto L_088A949C;
    case 300u: goto L_088A94A4;
    case 301u: goto L_088A94A8;
    case 302u: goto L_088A94B0;
    case 303u: goto L_088A94E0;
    case 304u: goto L_088A94E4;
    case 305u: goto L_088A94F4;
    case 306u: goto L_088A9500;
    case 307u: goto L_088A950C;
    case 308u: goto L_088A9530;
    case 309u: goto L_088A9538;
    case 310u: goto L_088A9558;
    case 311u: goto L_088A9584;
    case 312u: goto L_088A959C;
    case 313u: goto L_088A95A0;
    case 314u: goto L_088A95A4;
    case 315u: goto L_088A95AC;
    case 316u: goto L_088A95C0;
    case 317u: goto L_088A95C8;
    case 318u: goto L_088A95D0;
    case 319u: goto L_088A95E0;
    case 320u: goto L_088A95E8;
    case 321u: goto L_088A95FC;
    case 322u: goto L_088A9600;
    case 323u: goto L_088A962C;
    case 324u: goto L_088A9638;
    case 325u: goto L_088A9644;
    case 326u: goto L_088A9664;
    case 327u: goto L_088A967C;
    case 328u: goto L_088A9684;
    case 329u: goto L_088A969C;
    case 330u: goto L_088A96A4;
    case 331u: goto L_088A96B4;
    case 332u: goto L_088A96BC;
    case 333u: goto L_088A96C8;
    case 334u: goto L_088A96EC;
    case 335u: goto L_088A96F0;
    case 336u: goto L_088A9714;
    case 337u: goto L_088A974C;
    case 338u: goto L_088A9760;
    case 339u: goto L_088A9768;
    case 340u: goto L_088A976C;
    case 341u: goto L_088A9788;
    case 342u: goto L_088A9798;
    case 343u: goto L_088A97A0;
    case 344u: goto L_088A97B0;
    case 345u: goto L_088A97C0;
    case 346u: goto L_088A97D0;
    case 347u: goto L_088A97D8;
    case 348u: goto L_088A97DC;
    case 349u: goto L_088A9828;
    case 350u: goto L_088A983C;
    case 351u: goto L_088A984C;
    case 352u: goto L_088A9850;
    case 353u: goto L_088A9854;
    case 354u: goto L_088A9864;
    case 355u: goto L_088A986C;
    case 356u: goto L_088A9884;
    case 357u: goto L_088A988C;
    case 358u: goto L_088A98A4;
    case 359u: goto L_088A98AC;
    case 360u: goto L_088A98D8;
    case 361u: goto L_088A98E8;
    case 362u: goto L_088A98FC;
    case 363u: goto L_088A9908;
    case 364u: goto L_088A9910;
    case 365u: goto L_088A9914;
    case 366u: goto L_088A9924;
    case 367u: goto L_088A9934;
    case 368u: goto L_088A993C;
    case 369u: goto L_088A9940;
    case 370u: goto L_088A9954;
    case 371u: goto L_088A9964;
    case 372u: goto L_088A9970;
    case 373u: goto L_088A9984;
    case 374u: goto L_088A9990;
    case 375u: goto L_088A99A4;
    case 376u: goto L_088A99B0;
    case 377u: goto L_088A99DC;
    case 378u: goto L_088A99F4;
    case 379u: goto L_088A9A10;
    case 380u: goto L_088A9A28;
    case 381u: goto L_088A9A38;
    case 382u: goto L_088A9A60;
    case 383u: goto L_088A9A64;
    case 384u: goto L_088A9A8C;
    case 385u: goto L_088A9AD4;
    case 386u: goto L_088A9ADC;
    case 387u: goto L_088A9AFC;
    case 388u: goto L_088A9B04;
    case 389u: goto L_088A9B14;
    case 390u: goto L_088A9B24;
    case 391u: goto L_088A9B28;
    case 392u: goto L_088A9B30;
    case 393u: goto L_088A9B50;
    case 394u: goto L_088A9B70;
    case 395u: goto L_088A9BA4;
    case 396u: goto L_088A9BB0;
    case 397u: goto L_088A9BBC;
    case 398u: goto L_088A9BD0;
    case 399u: goto L_088A9BD8;
    case 400u: goto L_088A9BE8;
    case 401u: goto L_088A9BF8;
    case 402u: goto L_088A9BFC;
    case 403u: goto L_088A9C04;
    case 404u: goto L_088A9C24;
    case 405u: goto L_088A9C44;
    case 406u: goto L_088A9C78;
    case 407u: goto L_088A9C84;
    case 408u: goto L_088A9C8C;
    case 409u: goto L_088A9C9C;
    case 410u: goto L_088A9CD0;
    case 411u: goto L_088A9CF8;
    case 412u: goto L_088A9D04;
    case 413u: goto L_088A9D14;
    case 414u: goto L_088A9D24;
    case 415u: goto L_088A9D28;
    case 416u: goto L_088A9D30;
    case 417u: goto L_088A9D38;
    case 418u: goto L_088A9D50;
    case 419u: goto L_088A9D54;
    case 420u: goto L_088A9D58;
    case 421u: goto L_088A9D80;
    case 422u: goto L_088A9D8C;
    case 423u: goto L_088A9D94;
    case 424u: goto L_088A9DAC;
    case 425u: goto L_088A9DBC;
    case 426u: goto L_088A9DD4;
    case 427u: goto L_088A9DF8;
    case 428u: goto L_088A9E04;
    case 429u: goto L_088A9E14;
    case 430u: goto L_088A9E1C;
    case 431u: goto L_088A9E34;
    case 432u: goto L_088A9E3C;
    case 433u: goto L_088A9E4C;
    case 434u: goto L_088A9E5C;
    case 435u: goto L_088A9E60;
    case 436u: goto L_088A9E68;
    case 437u: goto L_088A9E6C;
    case 438u: goto L_088A9E84;
    case 439u: goto L_088A9EA4;
    case 440u: goto L_088A9ED4;
    case 441u: goto L_088A9EE4;
    case 442u: goto L_088A9EE8;
    case 443u: goto L_088A9F00;
    case 444u: goto L_088A9F48;
    case 445u: goto L_088A9F70;
    case 446u: goto L_088A9F7C;
    case 447u: goto L_088A9F88;
    case 448u: goto L_088A9F98;
    case 449u: goto L_088A9FA0;
    case 450u: goto L_088A9FC4;
    case 451u: goto L_088A9FCC;
    case 452u: goto L_088A9FFC;
    case 453u: goto L_088AA040;
    case 454u: goto L_088AA04C;
    case 455u: goto L_088AA084;
    case 456u: goto L_088AA09C;
    case 457u: goto L_088AA0A8;
    case 458u: goto L_088AA0B0;
    case 459u: goto L_088AA0C8;
    case 460u: goto L_088AA0D0;
    case 461u: goto L_088AA0EC;
    case 462u: goto L_088AA0F4;
    case 463u: goto L_088AA0FC;
    case 464u: goto L_088AA104;
    case 465u: goto L_088AA114;
    case 466u: goto L_088AA124;
    case 467u: goto L_088AA128;
    case 468u: goto L_088AA130;
    case 469u: goto L_088AA138;
    case 470u: goto L_088AA150;
    case 471u: goto L_088AA154;
    case 472u: goto L_088AA170;
    case 473u: goto L_088AA1A8;
    case 474u: goto L_088AA1C8;
    case 475u: goto L_088AA21C;
    case 476u: goto L_088AA248;
    case 477u: goto L_088AA250;
    case 478u: goto L_088AA260;
    case 479u: goto L_088AA270;
    case 480u: goto L_088AA274;
    case 481u: goto L_088AA27C;
    case 482u: goto L_088AA29C;
    case 483u: goto L_088AA2BC;
    case 484u: goto L_088AA2EC;
    case 485u: goto L_088AA2F8;
    case 486u: goto L_088AA308;
    case 487u: goto L_088AA31C;
    case 488u: goto L_088AA33C;
    case 489u: goto L_088AA344;
    case 490u: goto L_088AA34C;
    case 491u: goto L_088AA35C;
    case 492u: goto L_088AA374;
    case 493u: goto L_088AA37C;
    case 494u: goto L_088AA38C;
    case 495u: goto L_088AA3B8;
    case 496u: goto L_088AA3C0;
    case 497u: goto L_088AA3D0;
    case 498u: goto L_088AA3E0;
    case 499u: goto L_088AA3E4;
    case 500u: goto L_088AA3EC;
    case 501u: goto L_088AA40C;
    case 502u: goto L_088AA430;
    case 503u: goto L_088AA464;
    case 504u: goto L_088AA478;
    case 505u: goto L_088AA4A4;
    case 506u: goto L_088AA4AC;
    case 507u: goto L_088AA4BC;
    case 508u: goto L_088AA4CC;
    case 509u: goto L_088AA4D0;
    case 510u: goto L_088AA4D8;
    case 511u: goto L_088AA4DC;
    case 512u: goto L_088AA4F8;
    case 513u: goto L_088AA518;
    case 514u: goto L_088AA544;
    case 515u: goto L_088AA550;
    case 516u: goto L_088AA560;
    case 517u: goto L_088AA590;
    case 518u: goto L_088AA5A4;
    case 519u: goto L_088AA5A8;
    case 520u: goto L_088AA5D0;
    case 521u: goto L_088AA5D8;
    case 522u: goto L_088AA5E8;
    case 523u: goto L_088AA5F8;
    case 524u: goto L_088AA5FC;
    case 525u: goto L_088AA604;
    case 526u: goto L_088AA624;
    case 527u: goto L_088AA644;
    case 528u: goto L_088AA670;
    case 529u: goto L_088AA67C;
    case 530u: goto L_088AA684;
    case 531u: goto L_088AA6A8;
    case 532u: goto L_088AA6F8;
    case 533u: goto L_088AA70C;
    case 534u: goto L_088AA714;
    case 535u: goto L_088AA71C;
    case 536u: goto L_088AA724;
    case 537u: goto L_088AA72C;
    case 538u: goto L_088AA77C;
    case 539u: goto L_088AA784;
    case 540u: goto L_088AA790;
    case 541u: goto L_088AA798;
    case 542u: goto L_088AA7A0;
    case 543u: goto L_088AA7B0;
    case 544u: goto L_088AA7C0;
    case 545u: goto L_088AA7C4;
    case 546u: goto L_088AA7CC;
    case 547u: goto L_088AA7D4;
    case 548u: goto L_088AA7EC;
    case 549u: goto L_088AA7F0;
    case 550u: goto L_088AA7F4;
    case 551u: goto L_088AA824;
    case 552u: goto L_088AA82C;
    case 553u: goto L_088AA834;
    case 554u: goto L_088AA848;
    case 555u: goto L_088AA860;
    case 556u: goto L_088AA874;
    case 557u: goto L_088AA87C;
    case 558u: goto L_088AA884;
    case 559u: goto L_088AA88C;
    case 560u: goto L_088AA894;
    case 561u: goto L_088AA89C;
    case 562u: goto L_088AA8A4;
    case 563u: goto L_088AA8AC;
    case 564u: goto L_088AA8BC;
    case 565u: goto L_088AA8C8;
    case 566u: goto L_088AA8D4;
    case 567u: goto L_088AA8E4;
    case 568u: goto L_088AA8F8;
    case 569u: goto L_088AA904;
    case 570u: goto L_088AA90C;
    case 571u: goto L_088AA918;
    case 572u: goto L_088AA934;
    case 573u: goto L_088AA944;
    case 574u: goto L_088AA950;
    case 575u: goto L_088AA958;
    case 576u: goto L_088AA960;
    case 577u: goto L_088AA968;
    case 578u: goto L_088AA970;
    case 579u: goto L_088AA97C;
    case 580u: goto L_088AA984;
    case 581u: goto L_088AA990;
    case 582u: goto L_088AA998;
    case 583u: goto L_088AA9A0;
    case 584u: goto L_088AA9AC;
    case 585u: goto L_088AA9B8;
    case 586u: goto L_088AA9C0;
    case 587u: goto L_088AA9C8;
    case 588u: goto L_088AA9D0;
    case 589u: goto L_088AA9DC;
    case 590u: goto L_088AA9E8;
    case 591u: goto L_088AA9F0;
    case 592u: goto L_088AA9FC;
    case 593u: goto L_088AAA08;
    case 594u: goto L_088AAA10;
    case 595u: goto L_088AAA1C;
    case 596u: goto L_088AAA24;
    case 597u: goto L_088AAA30;
    case 598u: goto L_088AAA38;
    case 599u: goto L_088AAA4C;
    case 600u: goto L_088AAA5C;
    case 601u: goto L_088AAA6C;
    case 602u: goto L_088AAA78;
    case 603u: goto L_088AAA84;
    case 604u: goto L_088AAA90;
    case 605u: goto L_088AAA98;
    case 606u: goto L_088AAAB0;
    case 607u: goto L_088AAAB8;
    case 608u: goto L_088AAAC0;
    case 609u: goto L_088AAAC8;
    case 610u: goto L_088AAAFC;
    case 611u: goto L_088AAB04;
    case 612u: goto L_088AAB0C;
    case 613u: goto L_088AAB14;
    case 614u: goto L_088AAB44;
    case 615u: goto L_088AAB4C;
    case 616u: goto L_088AAB7C;
    case 617u: goto L_088AAB84;
    case 618u: goto L_088AAB9C;
    case 619u: goto L_088AABD0;
    case 620u: goto L_088AABD8;
    case 621u: goto L_088AABE0;
    case 622u: goto L_088AABE8;
    case 623u: goto L_088AABF0;
    case 624u: goto L_088AABF8;
    case 625u: goto L_088AAC18;
    case 626u: goto L_088AAC20;
    case 627u: goto L_088AAC28;
    case 628u: goto L_088AAC48;
    case 629u: goto L_088AAC58;
    case 630u: goto L_088AAC64;
    case 631u: goto L_088AAC7C;
    case 632u: goto L_088AAC84;
    case 633u: goto L_088AAC90;
    case 634u: goto L_088AAC9C;
    case 635u: goto L_088AACA4;
    case 636u: goto L_088AACB0;
    case 637u: goto L_088AACBC;
    case 638u: goto L_088AACC4;
    case 639u: goto L_088AACD0;
    case 640u: goto L_088AACEC;
    case 641u: goto L_088AACF8;
    case 642u: goto L_088AAD04;
    case 643u: goto L_088AAD0C;
    case 644u: goto L_088AAD14;
    case 645u: goto L_088AAD1C;
    case 646u: goto L_088AAD24;
    case 647u: goto L_088AAD30;
    case 648u: goto L_088AAD3C;
    case 649u: goto L_088AAD44;
    case 650u: goto L_088AAD4C;
    case 651u: goto L_088AAD60;
    case 652u: goto L_088AAD68;
    case 653u: goto L_088AAD80;
    case 654u: goto L_088AAD88;
    case 655u: goto L_088AAD90;
    case 656u: goto L_088AAD98;
    case 657u: goto L_088AADA0;
    case 658u: goto L_088AADAC;
    case 659u: goto L_088AADB4;
    case 660u: goto L_088AADC0;
    case 661u: goto L_088AADCC;
    case 662u: goto L_088AADD8;
    case 663u: goto L_088AADE4;
    case 664u: goto L_088AADF0;
    case 665u: goto L_088AADFC;
    case 666u: goto L_088AAE08;
    case 667u: goto L_088AAE14;
    case 668u: goto L_088AAE1C;
    case 669u: goto L_088AAE54;
    case 670u: goto L_088AAE88;
    case 671u: goto L_088AAEA8;
    case 672u: goto L_088AAEB4;
    case 673u: goto L_088AAEC0;
    case 674u: goto L_088AAECC;
    case 675u: goto L_088AAED0;
    case 676u: goto L_088AAEF0;
    case 677u: goto L_088AAEFC;
    case 678u: goto L_088AAF00;
    case 679u: goto L_088AAF30;
    case 680u: goto L_088AAF44;
    case 681u: goto L_088AAF4C;
    case 682u: goto L_088AAF54;
    case 683u: goto L_088AAF6C;
    case 684u: goto L_088AAF74;
    case 685u: goto L_088AAF84;
    case 686u: goto L_088AAFA8;
    case 687u: goto L_088AAFC4;
    case 688u: goto L_088AAFD8;
    case 689u: goto L_088AAFE8;
    case 690u: goto L_088AB008;
    case 691u: goto L_088AB014;
    case 692u: goto L_088AB038;
    case 693u: goto L_088AB040;
    case 694u: goto L_088AB048;
    case 695u: goto L_088AB050;
    case 696u: goto L_088AB064;
    case 697u: goto L_088AB0BC;
    case 698u: goto L_088AB0CC;
    case 699u: goto L_088AB0D8;
    case 700u: goto L_088AB0E0;
    case 701u: goto L_088AB128;
    case 702u: goto L_088AB15C;
    case 703u: goto L_088AB170;
    case 704u: goto L_088AB18C;
    case 705u: goto L_088AB1A8;
    case 706u: goto L_088AB1BC;
    case 707u: goto L_088AB1E0;
    case 708u: goto L_088AB1FC;
    case 709u: goto L_088AB210;
    case 710u: goto L_088AB234;
    case 711u: goto L_088AB240;
    case 712u: goto L_088AB248;
    case 713u: goto L_088AB25C;
    case 714u: goto L_088AB264;
    case 715u: goto L_088AB26C;
    case 716u: goto L_088AB274;
    case 717u: goto L_088AB27C;
    case 718u: goto L_088AB290;
    case 719u: goto L_088AB2B4;
    case 720u: goto L_088AB2BC;
    case 721u: goto L_088AB2C8;
    case 722u: goto L_088AB2D0;
    case 723u: goto L_088AB2D4;
    case 724u: goto L_088AB2DC;
    case 725u: goto L_088AB2F0;
    case 726u: goto L_088AB2FC;
    case 727u: goto L_088AB300;
    case 728u: goto L_088AB308;
    case 729u: goto L_088AB310;
    case 730u: goto L_088AB33C;
    case 731u: goto L_088AB368;
    case 732u: goto L_088AB374;
    case 733u: goto L_088AB384;
    case 734u: goto L_088AB3B8;
    case 735u: goto L_088AB3D8;
    case 736u: goto L_088AB3E4;
    case 737u: goto L_088AB3F8;
    case 738u: goto L_088AB408;
    case 739u: goto L_088AB418;
    case 740u: goto L_088AB430;
    case 741u: goto L_088AB43C;
    case 742u: goto L_088AB460;
    case 743u: goto L_088AB470;
    case 744u: goto L_088AB480;
    case 745u: goto L_088AB4AC;
    case 746u: goto L_088AB4BC;
    case 747u: goto L_088AB4C4;
    case 748u: goto L_088AB4C8;
    case 749u: goto L_088AB4D4;
    case 750u: goto L_088AB4E8;
    case 751u: goto L_088AB51C;
    case 752u: goto L_088AB528;
    case 753u: goto L_088AB540;
    case 754u: goto L_088AB56C;
    case 755u: goto L_088AB574;
    case 756u: goto L_088AB58C;
    case 757u: goto L_088AB598;
    case 758u: goto L_088AB5A4;
    case 759u: goto L_088AB5AC;
    case 760u: goto L_088AB5B8;
    case 761u: goto L_088AB5C4;
    case 762u: goto L_088AB5D4;
    case 763u: goto L_088AB5EC;
    case 764u: goto L_088AB634;
    case 765u: goto L_088AB640;
    case 766u: goto L_088AB654;
    case 767u: goto L_088AB65C;
    case 768u: goto L_088AB678;
    case 769u: goto L_088AB680;
    case 770u: goto L_088AB6BC;
    case 771u: goto L_088AB6C8;
    case 772u: goto L_088AB6D0;
    case 773u: goto L_088AB6EC;
    case 774u: goto L_088AB6F8;
    case 775u: goto L_088AB728;
    case 776u: goto L_088AB738;
    case 777u: goto L_088AB744;
    case 778u: goto L_088AB74C;
    case 779u: goto L_088AB754;
    case 780u: goto L_088AB760;
    case 781u: goto L_088AB76C;
    case 782u: goto L_088AB784;
    case 783u: goto L_088AB788;
    case 784u: goto L_088AB79C;
    case 785u: goto L_088AB7A8;
    case 786u: goto L_088AB7C8;
    case 787u: goto L_088AB7D4;
    case 788u: goto L_088AB7E8;
    case 789u: goto L_088AB7F4;
    case 790u: goto L_088AB828;
    case 791u: goto L_088AB834;
    case 792u: goto L_088AB840;
    case 793u: goto L_088AB84C;
    case 794u: goto L_088AB858;
    case 795u: goto L_088AB864;
    case 796u: goto L_088AB86C;
    case 797u: goto L_088AB874;
    case 798u: goto L_088AB87C;
    case 799u: goto L_088AB884;
    case 800u: goto L_088AB894;
    case 801u: goto L_088AB8C8;
    case 802u: goto L_088AB8D4;
    case 803u: goto L_088AB8E0;
    case 804u: goto L_088AB8EC;
    case 805u: goto L_088AB8F4;
    case 806u: goto L_088AB8FC;
    case 807u: goto L_088AB904;
    case 808u: goto L_088AB910;
    case 809u: goto L_088AB920;
    case 810u: goto L_088AB954;
    case 811u: goto L_088AB970;
    case 812u: goto L_088AB97C;
    case 813u: goto L_088AB994;
    case 814u: goto L_088AB9A0;
    case 815u: goto L_088AB9A8;
    case 816u: goto L_088AB9B0;
    case 817u: goto L_088AB9C8;
    case 818u: goto L_088AB9D4;
    case 819u: goto L_088AB9DC;
    case 820u: goto L_088AB9E4;
    case 821u: goto L_088ABA00;
    case 822u: goto L_088ABA0C;
    case 823u: goto L_088ABA18;
    case 824u: goto L_088ABA24;
    case 825u: goto L_088ABA34;
    case 826u: goto L_088ABA3C;
    case 827u: goto L_088ABA44;
    case 828u: goto L_088ABA4C;
    case 829u: goto L_088ABA5C;
    case 830u: goto L_088ABA68;
    case 831u: goto L_088ABA70;
    case 832u: goto L_088ABA78;
    case 833u: goto L_088ABA88;
    case 834u: goto L_088ABA98;
    case 835u: goto L_088ABAA4;
    case 836u: goto L_088ABAAC;
    case 837u: goto L_088ABAC0;
    case 838u: goto L_088ABAD0;
    case 839u: goto L_088ABB04;
    case 840u: goto L_088ABB10;
    case 841u: goto L_088ABB1C;
    case 842u: goto L_088ABB28;
    case 843u: goto L_088ABB30;
    case 844u: goto L_088ABB38;
    case 845u: goto L_088ABB40;
    case 846u: goto L_088ABB60;
    case 847u: goto L_088ABB70;
    case 848u: goto L_088ABBA4;
    case 849u: goto L_088ABBB4;
    case 850u: goto L_088ABBC0;
    case 851u: goto L_088ABBC8;
    case 852u: goto L_088ABBD0;
    case 853u: goto L_088ABBDC;
    case 854u: goto L_088ABBE8;
    case 855u: goto L_088ABBF0;
    case 856u: goto L_088ABBF8;
    case 857u: goto L_088ABC14;
    case 858u: goto L_088ABC24;
    case 859u: goto L_088ABC2C;
    case 860u: goto L_088ABC34;
    case 861u: goto L_088ABC60;
    case 862u: goto L_088ABC8C;
    case 863u: goto L_088ABCBC;
    case 864u: goto L_088ABD2C;
    case 865u: goto L_088ABD34;
    case 866u: goto L_088ABD38;
    case 867u: goto L_088ABD40;
    case 868u: goto L_088ABD64;
    case 869u: goto L_088ABD6C;
    case 870u: goto L_088ABD70;
    case 871u: goto L_088ABD78;
    case 872u: goto L_088ABD88;
    case 873u: goto L_088ABD90;
    case 874u: goto L_088ABDA0;
    case 875u: goto L_088ABDB4;
    case 876u: goto L_088ABDB8;
    case 877u: goto L_088ABDCC;
    case 878u: goto L_088ABDD0;
    case 879u: goto L_088ABDE4;
    case 880u: goto L_088ABDF0;
    case 881u: goto L_088ABE04;
    case 882u: goto L_088ABE10;
    case 883u: goto L_088ABE20;
    case 884u: goto L_088ABE24;
    case 885u: goto L_088ABE38;
    case 886u: goto L_088ABE4C;
    case 887u: goto L_088ABE80;
    case 888u: goto L_088ABE8C;
    case 889u: goto L_088ABE9C;
    case 890u: goto L_088ABEA0;
    case 891u: goto L_088ABEA8;
    case 892u: goto L_088ABEB8;
    case 893u: goto L_088ABEC0;
    case 894u: goto L_088ABECC;
    case 895u: goto L_088ABEE4;
    case 896u: goto L_088ABEF4;
    case 897u: goto L_088ABEFC;
    case 898u: goto L_088ABF00;
    case 899u: goto L_088ABF08;
    case 900u: goto L_088ABF18;
    case 901u: goto L_088ABF20;
    case 902u: goto L_088ABF24;
    case 903u: goto L_088ABF54;
    case 904u: goto L_088ABF60;
    case 905u: goto L_088ABF6C;
    case 906u: goto L_088ABF70;
    case 907u: goto L_088ABF78;
    case 908u: goto L_088ABF84;
    case 909u: goto L_088ABF94;
    case 910u: goto L_088ABFA0;
    case 911u: goto L_088ABFB0;
    case 912u: goto L_088ABFB8;
    case 913u: goto L_088ABFBC;
    case 914u: goto L_088ABFEC;
    case 915u: goto L_088ABFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088A8000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    goto L_088A8010;
L_088A8010:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_088A8014;
L_088A8014:
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
L_088A8030:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20652)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A8060;
      }
      goto L_088A8058;
    }
L_088A8058:
    ctx.gpr[31] = (0x088A8060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8060u) goto L_088A8060;
    return;
L_088A8060:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088A8074;
      }
      goto L_088A806C;
    }
L_088A806C:
    ctx.gpr[31] = (0x088A8074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8074u) goto L_088A8074;
    return;
L_088A8074:
    ctx.gpr[31] = (0x088A807Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20652)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 289u, 0x08A0928Cu>(ctx, &aot_mem) && ctx.pc == 0x088A807Cu) goto L_088A807C;
    return;
L_088A807C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A808Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 222u, 0x08A08E2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A808Cu) goto L_088A808C;
    return;
L_088A808C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088A8098u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088A8098u) goto L_088A8098;
    return;
L_088A8098:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A80A8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x088A80A8u) goto L_088A80A8;
    return;
L_088A80A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088A80C8;
      }
      goto L_088A80BC;
    }
L_088A80BC:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A80C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088A80C8u) goto L_088A80C8;
    return;
L_088A80C8:
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
L_088A80E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[17] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & 65535u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1884));
      if (branch_taken) {
          goto L_088A817C;
      }
      goto L_088A8120;
    }
L_088A8120:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8150;
      }
      goto L_088A8128;
    }
L_088A8128:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x088A8134u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088A8134u) goto L_088A8134;
    return;
L_088A8134:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A814C;
      }
      goto L_088A8140;
    }
L_088A8140:
    ctx.gpr[31] = (0x088A8148u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088A8148u) goto L_088A8148;
    return;
L_088A8148:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_088A814C;
L_088A814C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[19]);
    goto L_088A8150;
L_088A8150:
    ctx.gpr[31] = (0x088A8158u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088A84FC;
L_088A8158:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088A816Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088A816Cu) goto L_088A816C;
    return;
L_088A816C:
    ctx.gpr[31] = (0x088A8174u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 293u, 0x08913158u>(ctx, &aot_mem) && ctx.pc == 0x088A8174u) goto L_088A8174;
    return;
L_088A8174:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A81D0;
      }
      goto L_088A817C;
    }
L_088A817C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A81AC;
      }
      goto L_088A8184;
    }
L_088A8184:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x088A8190u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088A8190u) goto L_088A8190;
    return;
L_088A8190:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A81A8;
      }
      goto L_088A819C;
    }
L_088A819C:
    ctx.gpr[31] = (0x088A81A4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088A81A4u) goto L_088A81A4;
    return;
L_088A81A4:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_088A81A8;
L_088A81A8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[19]);
    goto L_088A81AC;
L_088A81AC:
    ctx.gpr[31] = (0x088A81B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088A850C;
L_088A81B4:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088A81C8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088A81C8u) goto L_088A81C8;
    return;
L_088A81C8:
    ctx.gpr[31] = (0x088A81D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 293u, 0x08913158u>(ctx, &aot_mem) && ctx.pc == 0x088A81D0u) goto L_088A81D0;
    return;
L_088A81D0:
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
L_088A81F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A8218u);
    ctx.gpr[6] = (0u | 1u);
    goto L_088A87D4;
L_088A8218:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088A824C;
      }
      goto L_088A8224;
    }
L_088A8224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A823Cu);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A823Cu) goto L_088A823C;
    return;
L_088A823C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A824C;
      }
      goto L_088A8248;
    }
L_088A8248:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_088A824C;
L_088A824C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8260;
      }
      goto L_088A8254;
    }
L_088A8254:
    ctx.gpr[31] = (0x088A825Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 144u, 0x08980A9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A825Cu) goto L_088A825C;
    return;
L_088A825C:
    ctx.gpr[19] = (ctx.gpr[2] & 255u);
    goto L_088A8260;
L_088A8260:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A826Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_088A80E4;
L_088A826C:
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
L_088A8288:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A82A0u);
    ctx.gpr[6] = (0u | 1u);
    goto L_088A87D4;
L_088A82A0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088A82D4;
      }
      goto L_088A82AC;
    }
L_088A82AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A82C4u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A82C4u) goto L_088A82C4;
    return;
L_088A82C4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A82D4;
      }
      goto L_088A82D0;
    }
L_088A82D0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_088A82D4;
L_088A82D4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A82EC;
      }
      goto L_088A82DC;
    }
L_088A82DC:
    ctx.gpr[31] = (0x088A82E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 144u, 0x08980A9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A82E4u) goto L_088A82E4;
    return;
L_088A82E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A82F0;
      }
      goto L_088A82EC;
    }
L_088A82EC:
    ctx.gpr[2] = (0u | 65535u);
    goto L_088A82F0;
L_088A82F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8304:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088A8334;
      }
      goto L_088A832C;
    }
L_088A832C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A841C;
      }
      goto L_088A8334;
    }
L_088A8334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088A83E0;
      }
      goto L_088A8364;
    }
L_088A8364:
    ctx.gpr[17] = (0u | 1u);
    goto L_088A8368;
L_088A8368:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A8374u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_088A8288;
L_088A8374:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A83A0;
      }
      goto L_088A837C;
    }
L_088A837C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
      if (branch_taken) {
          goto L_088A83D0;
      }
      goto L_088A83A0;
    }
L_088A83A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A83ACu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_088A8288;
L_088A83AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
      if (branch_taken) {
          goto L_088A83D0;
      }
      goto L_088A83CC;
    }
L_088A83CC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088A83D0;
L_088A83D0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8368;
      }
      goto L_088A83E0;
    }
L_088A83E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088A83F8;
      }
      goto L_088A83E8;
    }
L_088A83E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088A83F8;
      }
      goto L_088A83F0;
    }
L_088A83F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A841C;
      }
      goto L_088A83F8;
    }
L_088A83F8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088A8408u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4196));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088A8408u) goto L_088A8408;
    return;
L_088A8408:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A8418u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4220));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088A8418u) goto L_088A8418;
    return;
L_088A8418:
    ctx.gpr[2] = (0u | 1u);
    goto L_088A841C;
L_088A841C:
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
L_088A843C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8470;
      }
      goto L_088A8448;
    }
L_088A8448:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A8468;
      }
      goto L_088A8454;
    }
L_088A8454:
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8478;
      }
      goto L_088A8460;
    }
L_088A8460:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088A847C;
      }
      goto L_088A8468;
    }
L_088A8468:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088A847C;
      }
      goto L_088A8470;
    }
L_088A8470:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A847C;
      }
      goto L_088A8478;
    }
L_088A8478:
    ctx.gpr[2] = (0u | 0u);
    goto L_088A847C;
L_088A847C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8484:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A848C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8494:
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A84A4;
      }
      goto L_088A84A0;
    }
L_088A84A0:
    ctx.gpr[5] = (0u | 2u);
    goto L_088A84A4;
L_088A84A4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A84AC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A84B4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A84BC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A84C4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A84CC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A84D4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A84DC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A84E4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A84EC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A84F4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A84FC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(57)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8504:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A850C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(58)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8514:
    ctx.gpr[4] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[2] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16484));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8530:
    ctx.gpr[4] = (ctx.gpr[5] & 65535u);
    ctx.gpr[2] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16484));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8548:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A856Cu);
    ctx.gpr[6] = (0u | 1u);
    goto L_088A87D4;
L_088A856C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088A85A0;
      }
      goto L_088A8578;
    }
L_088A8578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A8590u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8590u) goto L_088A8590;
    return;
L_088A8590:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A85A0;
      }
      goto L_088A859C;
    }
L_088A859C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_088A85A0;
L_088A85A0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A85C4;
      }
      goto L_088A85A8;
    }
L_088A85A8:
    ctx.gpr[31] = (0x088A85B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 144u, 0x08980A9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A85B0u) goto L_088A85B0;
    return;
L_088A85B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A85BCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_088A8514;
L_088A85BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A85D8;
      }
      goto L_088A85C4;
    }
L_088A85C4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_088A85D8;
L_088A85D8:
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
L_088A85F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16484));
      if (branch_taken) {
          goto L_088A8624;
      }
      goto L_088A8608;
    }
L_088A8608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A861C;
      }
      goto L_088A8614;
    }
L_088A8614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8630;
      }
      goto L_088A861C;
    }
L_088A861C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088A8630;
      }
      goto L_088A8624;
    }
L_088A8624:
    ctx.gpr[4] = (ctx.gpr[5] & 15u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    goto L_088A8630;
L_088A8630:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8638:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088A8678;
      }
      goto L_088A8658;
    }
L_088A8658:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 12u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8678;
      }
      goto L_088A8674;
    }
L_088A8674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(336)));
    goto L_088A8678;
L_088A8678:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-6968)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_088A86B0;
      }
      goto L_088A8690;
    }
L_088A8690:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A86B0;
      }
      goto L_088A86A0;
    }
L_088A86A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088A86C0;
      }
      goto L_088A86B0;
    }
L_088A86B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    goto L_088A86C0;
L_088A86C0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A86D4u);
    ctx.gpr[7] = (0u | 1u);
    goto L_088AB540;
L_088A86D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A86E4u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088A879C;
L_088A86E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A86F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-6968)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A8740u);
    ctx.gpr[7] = (0u | 1u);
    goto L_088AB540;
L_088A8740:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A8750u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088A879C;
L_088A8750:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8764:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(225)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088A8790;
      }
      goto L_088A8780;
    }
L_088A8780:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088A8790u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 236u, 0x0886D93Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8790u) goto L_088A8790;
    return;
L_088A8790:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A879C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(225)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088A87C8;
      }
      goto L_088A87B8;
    }
L_088A87B8:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088A87C8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 248u, 0x0886DA2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A87C8u) goto L_088A87C8;
    return;
L_088A87C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A87D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_088A88C0;
      }
      goto L_088A8800;
    }
L_088A8800:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A88C0;
      }
      goto L_088A8810;
    }
L_088A8810:
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8868;
      }
      goto L_088A8830;
    }
L_088A8830:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_088A883C;
L_088A883C:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_088A885C;
    }
    goto L_088A884C;
L_088A884C:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088A8860;
      }
      goto L_088A885C;
    }
L_088A885C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088A8860;
L_088A8860:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_088A883C;
    }
    goto L_088A8868;
L_088A8868:
    if (ctx.gpr[5] == ctx.gpr[7]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
        goto L_088A888C;
    }
    goto L_088A8870;
L_088A8870:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
        goto L_088A8890;
    }
    goto L_088A8888;
L_088A8888:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_088A888C;
L_088A888C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088A8890;
L_088A8890:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A88C0;
      }
      goto L_088A88B8;
    }
L_088A88B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088A88C4;
      }
      goto L_088A88C0;
    }
L_088A88C0:
    ctx.gpr[2] = (0u | 0u);
    goto L_088A88C4;
L_088A88C4:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A88CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[4]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088A89FC;
      }
      goto L_088A8918;
    }
L_088A8918:
    ctx.gpr[19] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A89FC;
      }
      goto L_088A892C;
    }
L_088A892C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] ^ ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A89FC;
      }
      goto L_088A897C;
    }
L_088A897C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_088A8984;
L_088A8984:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A89A8;
      }
      goto L_088A8990;
    }
L_088A8990:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088A89A8;
      }
      goto L_088A899C;
    }
L_088A899C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088A89EC;
      }
      goto L_088A89A8;
    }
L_088A89A8:
    ctx.gpr[31] = (0x088A89B0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x088A89B0u) goto L_088A89B0;
    return;
L_088A89B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] ^ ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088A8984;
      }
      goto L_088A89E4;
    }
L_088A89E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
      if (branch_taken) {
          goto L_088A89F8;
      }
      goto L_088A89EC;
    }
L_088A89EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088A8A00;
      }
      goto L_088A89F8;
    }
L_088A89F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    goto L_088A89FC;
L_088A89FC:
    ctx.gpr[2] = (0u | 0u);
    goto L_088A8A00;
L_088A8A00:
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
L_088A8A20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] << 24u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 24u));
      if (branch_taken) {
          goto L_088A8BE0;
      }
      goto L_088A8A7C;
    }
L_088A8A7C:
    ctx.gpr[18] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8BE0;
      }
      goto L_088A8A90;
    }
L_088A8A90:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] ^ ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8BE0;
      }
      goto L_088A8AE0;
    }
L_088A8AE0:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (0u | 2u);
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_088A8AF4;
L_088A8AF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8B9C;
      }
      goto L_088A8B00;
    }
L_088A8B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088A8B18u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8B18u) goto L_088A8B18;
    return;
L_088A8B18:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088A8B44;
      }
      goto L_088A8B20;
    }
L_088A8B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088A8B3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8B3Cu) goto L_088A8B3C;
    return;
L_088A8B3C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088A8B9C;
      }
      goto L_088A8B44;
    }
L_088A8B44:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8B9C;
      }
      goto L_088A8B50;
    }
L_088A8B50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_088A8B80;
    }
    goto L_088A8B5C;
L_088A8B5C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088A8B6Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x088A8B6Cu) goto L_088A8B6C;
    return;
L_088A8B6C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_088A8B80;
L_088A8B80:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(206))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088A8B9C;
      }
      goto L_088A8B8C;
    }
L_088A8B8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
      if (branch_taken) {
          goto L_088A8BE4;
      }
      goto L_088A8B9C;
    }
L_088A8B9C:
    ctx.gpr[31] = (0x088A8BA4u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x088A8BA4u) goto L_088A8BA4;
    return;
L_088A8BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] ^ ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[30] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_088A8AF4;
      }
      goto L_088A8BD8;
    }
L_088A8BD8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    goto L_088A8BE0;
L_088A8BE0:
    ctx.gpr[2] = (0u | 0u);
    goto L_088A8BE4;
L_088A8BE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8C14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8C68;
      }
      goto L_088A8C34;
    }
L_088A8C34:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_088A8C3C;
L_088A8C3C:
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_088A8C5C;
    }
    goto L_088A8C4C;
L_088A8C4C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088A8C60;
      }
      goto L_088A8C5C;
    }
L_088A8C5C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088A8C60;
L_088A8C60:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_088A8C3C;
    }
    goto L_088A8C68;
L_088A8C68:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_088A8C8C;
    }
    goto L_088A8C70;
L_088A8C70:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
        goto L_088A8C90;
    }
    goto L_088A8C88;
L_088A8C88:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_088A8C8C;
L_088A8C8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_088A8C90;
L_088A8C90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8CC8;
      }
      goto L_088A8CC0;
    }
L_088A8CC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A8CCC;
      }
      goto L_088A8CC8;
    }
L_088A8CC8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_088A8CCC;
L_088A8CCC:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8CD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A8CE8u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    goto L_088A8E30;
L_088A8CE8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8CF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[7] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(5992));
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8D7C;
      }
      goto L_088A8D44;
    }
L_088A8D44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8E14;
      }
      goto L_088A8D58;
    }
L_088A8D58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088A8D74u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8D74u) goto L_088A8D74;
    return;
L_088A8D74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8E14;
      }
      goto L_088A8D7C;
    }
L_088A8D7C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A8D94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4244));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088A8D94u) goto L_088A8D94;
    return;
L_088A8D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8DD4;
      }
      goto L_088A8DA0;
    }
L_088A8DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(4300));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A8DC0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8DC0u) goto L_088A8DC0;
    return;
L_088A8DC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x088A8DD4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088A8DD4u) goto L_088A8DD4;
    return;
L_088A8DD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6954)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A8E14u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088A879C;
L_088A8E14:
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
L_088A8E30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (2232u << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(5992));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] ^ ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088A8ED0;
      }
      goto L_088A8E78;
    }
L_088A8E78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8F88;
      }
      goto L_088A8E8C;
    }
L_088A8E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A8EA4u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8EA4u) goto L_088A8EA4;
    return;
L_088A8EA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8F88;
      }
      goto L_088A8EAC;
    }
L_088A8EAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088A8EC8u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8EC8u) goto L_088A8EC8;
    return;
L_088A8EC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8F88;
      }
      goto L_088A8ED0;
    }
L_088A8ED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A8EE8u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8EE8u) goto L_088A8EE8;
    return;
L_088A8EE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8F88;
      }
      goto L_088A8EF0;
    }
L_088A8EF0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A8F08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4332));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x088A8F08u) goto L_088A8F08;
    return;
L_088A8F08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8F48;
      }
      goto L_088A8F14;
    }
L_088A8F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(4300));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A8F34u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8F34u) goto L_088A8F34;
    return;
L_088A8F34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x088A8F48u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x088A8F48u) goto L_088A8F48;
    return;
L_088A8F48:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6954)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A8F88u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088A879C;
L_088A8F88:
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
L_088A8FA4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8FAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088A9084;
      }
      goto L_088A9028;
    }
L_088A9028:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A903C;
      }
      goto L_088A9034;
    }
L_088A9034:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088A908C;
      }
      goto L_088A903C;
    }
L_088A903C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088A9048u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x088A9048u) goto L_088A9048;
    return;
L_088A9048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] ^ ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A9028;
      }
      goto L_088A9084;
    }
L_088A9084:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A9090;
      }
      goto L_088A908C;
    }
L_088A908C:
    ctx.gpr[2] = (0u | 1u);
    goto L_088A9090;
L_088A9090:
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
L_088A90A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A90D0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 531u, 0x08AFE458u>(ctx, &aot_mem) && ctx.pc == 0x088A90D0u) goto L_088A90D0;
    return;
L_088A90D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088A90EC;
      }
      goto L_088A90E0;
    }
L_088A90E0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_088A90EC;
L_088A90EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A911C;
      }
      goto L_088A9104;
    }
L_088A9104:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088A911C;
      }
      goto L_088A9114;
    }
L_088A9114:
    ctx.gpr[31] = (0x088A911Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088A911Cu) goto L_088A911C;
    return;
L_088A911C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A912C:
    ctx.gpr[4] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27732)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9138:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088A9160;
      }
      goto L_088A9158;
    }
L_088A9158:
    ctx.gpr[31] = (0x088A9160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9160u) goto L_088A9160;
    return;
L_088A9160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A917C;
      }
      goto L_088A9170;
    }
L_088A9170:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A9184;
      }
      goto L_088A917C;
    }
L_088A917C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9304;
      }
      goto L_088A9184;
    }
L_088A9184:
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[8] = (32768u << 16u);
    ctx.gpr[10] = (2230u << 16u);
    goto L_088A91B8;
L_088A91B8:
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A921C;
      }
      goto L_088A91C8;
    }
L_088A91C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[16] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(248)));
      if (branch_taken) {
          goto L_088A91FC;
      }
      goto L_088A91E4;
    }
L_088A91E4:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_088A9218;
      }
      goto L_088A91FC;
    }
L_088A91FC:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[2]);
    goto L_088A9218;
L_088A9218:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(248), ctx.gpr[6]);
    goto L_088A921C;
L_088A921C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A91B8;
      }
      goto L_088A922C;
    }
L_088A922C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(102) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A9254;
      }
      goto L_088A9240;
    }
L_088A9240:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(101));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-7868)));
    goto L_088A9254;
L_088A9254:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A9304;
      }
      goto L_088A9264;
    }
L_088A9264:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(252)));
      if (branch_taken) {
          goto L_088A92A4;
      }
      goto L_088A9280;
    }
L_088A9280:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A92A4;
      }
      goto L_088A9288;
    }
L_088A9288:
    ctx.gpr[5] = (0u | 59u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_088A92B4;
      }
      goto L_088A92A4;
    }
L_088A92A4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_088A92B4;
      }
      goto L_088A92AC;
    }
L_088A92AC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_088A92B4;
L_088A92B4:
    ctx.gpr[9] = (ctx.gpr[5] & 255u);
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-6952)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[9]));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(21), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(25), ctx.gpr[7]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(29), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A92FCu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088A879C;
L_088A92FC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088A9304;
L_088A9304:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9318:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9320:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9328:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9330:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9338:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9340:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9348:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A935Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_088A84CC;
L_088A935C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088A939C;
      }
      goto L_088A9364;
    }
L_088A9364:
    ctx.gpr[31] = (0x088A936Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088A9318;
L_088A936C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A939C;
      }
      goto L_088A9374;
    }
L_088A9374:
    ctx.gpr[31] = (0x088A937Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088A9320;
L_088A937C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A939C;
      }
      goto L_088A9384;
    }
L_088A9384:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A939C;
      }
      goto L_088A9394;
    }
L_088A9394:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088A93A0;
      }
      goto L_088A939C;
    }
L_088A939C:
    ctx.gpr[2] = (0u | 0u);
    goto L_088A93A0;
L_088A93A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A93B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088A93F0;
      }
      goto L_088A93C8;
    }
L_088A93C8:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6951)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088A93F0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088A879C;
L_088A93F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A93FC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9408:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9420;
      }
      goto L_088A9414;
    }
L_088A9414:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088A9424;
      }
      goto L_088A9420;
    }
L_088A9420:
    ctx.gpr[2] = (0u | 1u);
    goto L_088A9424;
L_088A9424:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A942C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9434:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A943C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A94A4;
      }
      goto L_088A946C;
    }
L_088A946C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9484;
      }
      goto L_088A9478;
    }
L_088A9478:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A949C;
      }
      goto L_088A9484;
    }
L_088A9484:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A946C;
      }
      goto L_088A9494;
    }
L_088A9494:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A94A4;
      }
      goto L_088A949C;
    }
L_088A949C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088A94A8;
      }
      goto L_088A94A4;
    }
L_088A94A4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088A94A8;
L_088A94A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A94B0:
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[10] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_088A9530;
      }
      goto L_088A94E0;
    }
L_088A94E0:
    ctx.gpr[9] = (0u | 0u);
    goto L_088A94E4;
L_088A94E4:
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
        goto L_088A950C;
    }
    goto L_088A94F4;
L_088A94F4:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[11] != ctx.gpr[6]) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
        goto L_088A950C;
    }
    goto L_088A9500;
L_088A9500:
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    goto L_088A950C;
L_088A950C:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[5]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[11] = (ctx.gpr[11] >> 30u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[10] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A94E4;
      }
      goto L_088A9530;
    }
L_088A9530:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9538:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(269)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(269), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9558:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088A95A0;
      }
      goto L_088A9584;
    }
L_088A9584:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 0 ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] ^ 1u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_088A95A4;
      }
      goto L_088A959C;
    }
L_088A959C:
    ctx.gpr[6] = (0u | 1u);
    goto L_088A95A0;
L_088A95A0:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_088A95A4;
L_088A95A4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A95C0;
      }
      goto L_088A95AC;
    }
L_088A95AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088A95C8;
      }
      goto L_088A95C0;
    }
L_088A95C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A96F0;
      }
      goto L_088A95C8;
    }
L_088A95C8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A95E8;
      }
      goto L_088A95D0;
    }
L_088A95D0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_088A95E8;
      }
      goto L_088A95E0;
    }
L_088A95E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[7] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_088A9600;
      }
      goto L_088A95E8;
    }
L_088A95E8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[4] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088A95C8;
      }
      goto L_088A95FC;
    }
L_088A95FC:
    ctx.gpr[17] = (ctx.gpr[7] + static_cast<std::uint32_t>(100));
    goto L_088A9600;
L_088A9600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2232u << 16u);
      if (branch_taken) {
          goto L_088A96EC;
      }
      goto L_088A962C;
    }
L_088A962C:
    ctx.gpr[20] = (0u | 2u);
    ctx.gpr[21] = (0u | 3u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5992));
    goto L_088A9638;
L_088A9638:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A96BC;
      }
      goto L_088A9644;
    }
L_088A9644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A96BC;
      }
      goto L_088A9664;
    }
L_088A9664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A967Cu);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A967Cu) goto L_088A967C;
    return;
L_088A967C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088A96A4;
      }
      goto L_088A9684;
    }
L_088A9684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A969Cu);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A969Cu) goto L_088A969C;
    return;
L_088A969C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088A96BC;
      }
      goto L_088A96A4;
    }
L_088A96A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088A96BC;
      }
      goto L_088A96B4;
    }
L_088A96B4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    goto L_088A96BC;
L_088A96BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088A96C8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x088A96C8u) goto L_088A96C8;
    return;
L_088A96C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A9638;
      }
      goto L_088A96EC;
    }
L_088A96EC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_088A96F0;
L_088A96F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9714:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A9788;
      }
      goto L_088A974C;
    }
L_088A974C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088A976C;
      }
      goto L_088A9760;
    }
L_088A9760:
    ctx.gpr[31] = (0x088A9768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9768u) goto L_088A9768;
    return;
L_088A9768:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088A976C;
L_088A976C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9A64;
      }
      goto L_088A9788;
    }
L_088A9788:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(4380));
    ctx.gpr[31] = (0x088A9798u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088ABC60;
L_088A9798:
    ctx.gpr[31] = (0x088A97A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088ABC34;
L_088A97A0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A97B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4428));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088A97B0u) goto L_088A97B0;
    return;
L_088A97B0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088A9924;
      }
      goto L_088A97C0;
    }
L_088A97C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20648)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088A97DC;
      }
      goto L_088A97D0;
    }
L_088A97D0:
    ctx.gpr[31] = (0x088A97D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA4BCu>(ctx, &aot_mem) && ctx.pc == 0x088A97D8u) goto L_088A97D8;
    return;
L_088A97D8:
    ctx.gpr[5] = (2230u << 16u);
    goto L_088A97DC;
L_088A97DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20648)));
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(280), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(281), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(282), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(120));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(283), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(284), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(285), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088A9850;
      }
      goto L_088A9828;
    }
L_088A9828:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(280));
      if (branch_taken) {
          goto L_088A9850;
      }
      goto L_088A983C;
    }
L_088A983C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_088A9854;
      }
      goto L_088A984C;
    }
L_088A984C:
    ctx.gpr[5] = (0u | 1u);
    goto L_088A9850;
L_088A9850:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_088A9854;
L_088A9854:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9914;
      }
      goto L_088A9864;
    }
L_088A9864:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088A9910;
      }
      goto L_088A986C;
    }
L_088A986C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[21] = (2225u << 16u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4460));
      if (branch_taken) {
          goto L_088A988C;
      }
      goto L_088A9884;
    }
L_088A9884:
    ctx.gpr[31] = (0x088A988Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088A988Cu) goto L_088A988C;
    return;
L_088A988C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20648)));
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
      if (branch_taken) {
          goto L_088A98AC;
      }
      goto L_088A98A4;
    }
L_088A98A4:
    ctx.gpr[31] = (0x088A98ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA4BCu>(ctx, &aot_mem) && ctx.pc == 0x088A98ACu) goto L_088A98AC;
    return;
L_088A98AC:
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20648)));
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(120));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A98D8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 200u, 0x08A08D04u>(ctx, &aot_mem) && ctx.pc == 0x088A98D8u) goto L_088A98D8;
    return;
L_088A98D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088A98E8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x088A98E8u) goto L_088A98E8;
    return;
L_088A98E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088A9908;
      }
      goto L_088A98FC;
    }
L_088A98FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[31] = (0x088A9908u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9908u) goto L_088A9908;
    return;
L_088A9908:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9924;
      }
      goto L_088A9910;
    }
L_088A9910:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_088A9914;
L_088A9914:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A97C0;
      }
      goto L_088A9924;
    }
L_088A9924:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_088A9940;
      }
      goto L_088A9934;
    }
L_088A9934:
    ctx.gpr[31] = (0x088A993Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x088A993Cu) goto L_088A993C;
    return;
L_088A993C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_088A9940;
L_088A9940:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A9954u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21000)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088A9954u) goto L_088A9954;
    return;
L_088A9954:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A9964u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x088A9964u) goto L_088A9964;
    return;
L_088A9964:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088A9970u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 781u, 0x0883BFA4u>(ctx, &aot_mem) && ctx.pc == 0x088A9970u) goto L_088A9970;
    return;
L_088A9970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088A9990;
      }
      goto L_088A9984;
    }
L_088A9984:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088A9990u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9990u) goto L_088A9990;
    return;
L_088A9990:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x088A99A4u);
    ctx.gpr[5] = (ctx.gpr[17] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 102u, 0x089C0814u>(ctx, &aot_mem) && ctx.pc == 0x088A99A4u) goto L_088A99A4;
    return;
L_088A99A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088A99B0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 448u, 0x0886E9E8u>(ctx, &aot_mem) && ctx.pc == 0x088A99B0u) goto L_088A99B0;
    return;
L_088A99B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9A60;
      }
      goto L_088A99DC;
    }
L_088A99DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
        goto L_088A9A38;
    }
    goto L_088A99F4;
L_088A99F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
        goto L_088A9A38;
    }
    goto L_088A9A10;
L_088A9A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088A9A28u);
    ctx.gpr[5] = (0u | 3u);
    goto L_088AB128;
L_088A9A28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    goto L_088A9A38;
L_088A9A38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A99DC;
      }
      goto L_088A9A60;
    }
L_088A9A60:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    goto L_088A9A64;
L_088A9A64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9A8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(5992));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_088A9BBC;
      }
      goto L_088A9AD4;
    }
L_088A9AD4:
    ctx.gpr[31] = (0x088A9ADCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    goto L_088A9F00;
L_088A9ADC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_088A9B30;
      }
      goto L_088A9AFC;
    }
L_088A9AFC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    goto L_088A9B04;
L_088A9B04:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
        goto L_088A9B24;
    }
    goto L_088A9B14;
L_088A9B14:
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088A9B28;
      }
      goto L_088A9B24;
    }
L_088A9B24:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_088A9B28;
L_088A9B28:
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
        goto L_088A9B04;
    }
    goto L_088A9B30;
L_088A9B30:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[7] ^ ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088A9B70;
      }
      goto L_088A9B50;
    }
L_088A9B50:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9BB0;
      }
      goto L_088A9B70;
    }
L_088A9B70:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x088A9BA4u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 918u, 0x08AFFEACu>(ctx, &aot_mem) && ctx.pc == 0x088A9BA4u) goto L_088A9BA4;
    return;
L_088A9BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_088A9BB0;
L_088A9BB0:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088A9C8C;
      }
      goto L_088A9BBC;
    }
L_088A9BBC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088A9C04;
      }
      goto L_088A9BD0;
    }
L_088A9BD0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_088A9BD8;
L_088A9BD8:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
        goto L_088A9BF8;
    }
    goto L_088A9BE8;
L_088A9BE8:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088A9BFC;
      }
      goto L_088A9BF8;
    }
L_088A9BF8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_088A9BFC;
L_088A9BFC:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_088A9BD8;
    }
    goto L_088A9C04;
L_088A9C04:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[6] ^ ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088A9C44;
      }
      goto L_088A9C24;
    }
L_088A9C24:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9C84;
      }
      goto L_088A9C44;
    }
L_088A9C44:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x088A9C78u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 918u, 0x08AFFEACu>(ctx, &aot_mem) && ctx.pc == 0x088A9C78u) goto L_088A9C78;
    return;
L_088A9C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_088A9C84;
L_088A9C84:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_088A9C8C;
L_088A9C8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9C9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (ctx.gpr[18] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A9DBC;
      }
      goto L_088A9CD0;
    }
L_088A9CD0:
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088A9D30;
      }
      goto L_088A9CF8;
    }
L_088A9CF8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_088A9D04;
L_088A9D04:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
        goto L_088A9D24;
    }
    goto L_088A9D14;
L_088A9D14:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088A9D28;
      }
      goto L_088A9D24;
    }
L_088A9D24:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_088A9D28;
L_088A9D28:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_088A9D04;
    }
    goto L_088A9D30;
L_088A9D30:
    if (ctx.gpr[6] == ctx.gpr[5]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_088A9D54;
    }
    goto L_088A9D38;
L_088A9D38:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
        goto L_088A9D58;
    }
    goto L_088A9D50;
L_088A9D50:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_088A9D54;
L_088A9D54:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    goto L_088A9D58;
L_088A9D58:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x088A9D80u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 777u, 0x08AFF67Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9D80u) goto L_088A9D80;
    return;
L_088A9D80:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9D94;
      }
      goto L_088A9D8C;
    }
L_088A9D8C:
    ctx.gpr[31] = (0x088A9D94u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x088A9D94u) goto L_088A9D94;
    return;
L_088A9D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9DBC;
      }
      goto L_088A9DAC;
    }
L_088A9DAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.gpr[31] = (0x088A9DBCu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 550u, 0x08AFE588u>(ctx, &aot_mem) && ctx.pc == 0x088A9DBCu) goto L_088A9DBC;
    return;
L_088A9DBC:
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
L_088A9DD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A9E14;
      }
      goto L_088A9DF8;
    }
L_088A9DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9E14;
      }
      goto L_088A9E04;
    }
L_088A9E04:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(104));
    ctx.gpr[31] = (0x088A9E14u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 550u, 0x08AFE588u>(ctx, &aot_mem) && ctx.pc == 0x088A9E14u) goto L_088A9E14;
    return;
L_088A9E14:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9EE8;
      }
      goto L_088A9E1C;
    }
L_088A9E1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
        goto L_088A9E6C;
    }
    goto L_088A9E34;
L_088A9E34:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_088A9E3C;
L_088A9E3C:
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_088A9E5C;
    }
    goto L_088A9E4C;
L_088A9E4C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088A9E60;
      }
      goto L_088A9E5C;
    }
L_088A9E5C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088A9E60;
L_088A9E60:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_088A9E3C;
    }
    goto L_088A9E68;
L_088A9E68:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_088A9E6C;
L_088A9E6C:
    ctx.gpr[6] = (ctx.gpr[4] ^ ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_088A9EA4;
      }
      goto L_088A9E84;
    }
L_088A9E84:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
        goto L_088A9EE4;
    }
    goto L_088A9EA4;
L_088A9EA4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x088A9ED4u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 865u, 0x08AFFA7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9ED4u) goto L_088A9ED4;
    return;
L_088A9ED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    goto L_088A9EE4;
L_088A9EE4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_088A9EE8;
L_088A9EE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9F00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(100));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_088A9F48;
L_088A9F48:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088A9FC4;
      }
      goto L_088A9F70;
    }
L_088A9F70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9F98;
      }
      goto L_088A9F7C;
    }
L_088A9F7C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088A9F98;
      }
      goto L_088A9F88;
    }
L_088A9F88:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_088A9FC4;
      }
      goto L_088A9F98;
    }
L_088A9F98:
    ctx.gpr[31] = (0x088A9FA0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x088A9FA0u) goto L_088A9FA0;
    return;
L_088A9FA0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A9F70;
      }
      goto L_088A9FC4;
    }
L_088A9FC4:
    if (ctx.gpr[18] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_088A9F48;
    }
    goto L_088A9FCC;
L_088A9FCC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(156), static_cast<std::uint16_t>(ctx.gpr[4]));
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
L_088A9FFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-6954)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[31] = (0x088AA040u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088A879C;
L_088AA040:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA04C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(225)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088AA0F4;
      }
      goto L_088AA084;
    }
L_088AA084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA0F4;
      }
      goto L_088AA09C;
    }
L_088AA09C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088AA0A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 267u, 0x0886DBA8u>(ctx, &aot_mem) && ctx.pc == 0x088AA0A8u) goto L_088AA0A8;
    return;
L_088AA0A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA0D0;
      }
      goto L_088AA0B0;
    }
L_088AA0B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
      if (branch_taken) {
          goto L_088AA0FC;
      }
      goto L_088AA0C8;
    }
L_088AA0C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA130;
      }
      goto L_088AA0D0;
    }
L_088AA0D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4500));
    ctx.gpr[31] = (0x088AA0ECu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088AA0ECu) goto L_088AA0EC;
    return;
L_088AA0EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA1A8;
      }
      goto L_088AA0F4;
    }
L_088AA0F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA1A8;
      }
      goto L_088AA0FC;
    }
L_088AA0FC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_088AA104;
L_088AA104:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_088AA124;
    }
    goto L_088AA114;
L_088AA114:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088AA128;
      }
      goto L_088AA124;
    }
L_088AA124:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088AA128;
L_088AA128:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_088AA104;
    }
    goto L_088AA130;
L_088AA130:
    if (ctx.gpr[5] == ctx.gpr[16]) {
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
        goto L_088AA154;
    }
    goto L_088AA138;
L_088AA138:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA154;
      }
      goto L_088AA150;
    }
L_088AA150:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088AA154;
L_088AA154:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088AA1A8;
      }
      goto L_088AA170;
    }
L_088AA170:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[19] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x088AA1A8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AA1A8u) goto L_088AA1A8;
    return;
L_088AA1A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA1C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088AA344;
      }
      goto L_088AA21C;
    }
L_088AA21C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_088AA27C;
      }
      goto L_088AA248;
    }
L_088AA248:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_088AA250;
L_088AA250:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_088AA270;
    }
    goto L_088AA260;
L_088AA260:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088AA274;
      }
      goto L_088AA270;
    }
L_088AA270:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088AA274;
L_088AA274:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_088AA250;
    }
    goto L_088AA27C;
L_088AA27C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] ^ ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088AA2BC;
      }
      goto L_088AA29C;
    }
L_088AA29C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA2F8;
      }
      goto L_088AA2BC;
    }
L_088AA2BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x088AA2ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 918u, 0x08AFFEACu>(ctx, &aot_mem) && ctx.pc == 0x088AA2ECu) goto L_088AA2EC;
    return;
L_088AA2EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_088AA2F8;
L_088AA2F8:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA33C;
      }
      goto L_088AA308;
    }
L_088AA308:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AA33C;
      }
      goto L_088AA31C;
    }
L_088AA31C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x088AA33Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AA33Cu) goto L_088AA33C;
    return;
L_088AA33C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA684;
      }
      goto L_088AA344;
    }
L_088AA344:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088AA684;
      }
      goto L_088AA34C;
    }
L_088AA34C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088AA684;
      }
      goto L_088AA35C;
    }
L_088AA35C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA684;
      }
      goto L_088AA374;
    }
L_088AA374:
    ctx.gpr[31] = (0x088AA37Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088A9F00;
L_088AA37C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088AA684;
      }
      goto L_088AA38C;
    }
L_088AA38C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_088AA3EC;
      }
      goto L_088AA3B8;
    }
L_088AA3B8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_088AA3C0;
L_088AA3C0:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
        goto L_088AA3E0;
    }
    goto L_088AA3D0;
L_088AA3D0:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088AA3E4;
      }
      goto L_088AA3E0;
    }
L_088AA3E0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_088AA3E4;
L_088AA3E4:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_088AA3C0;
    }
    goto L_088AA3EC;
L_088AA3EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] ^ ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
      if (branch_taken) {
          goto L_088AA430;
      }
      goto L_088AA40C;
    }
L_088AA40C:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
        goto L_088AA478;
    }
    goto L_088AA430;
L_088AA430:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x088AA464u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 918u, 0x08AFFEACu>(ctx, &aot_mem) && ctx.pc == 0x088AA464u) goto L_088AA464;
    return;
L_088AA464:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    goto L_088AA478;
L_088AA478:
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
        goto L_088AA4DC;
    }
    goto L_088AA4A4;
L_088AA4A4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_088AA4AC;
L_088AA4AC:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_088AA4CC;
    }
    goto L_088AA4BC;
L_088AA4BC:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088AA4D0;
      }
      goto L_088AA4CC;
    }
L_088AA4CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088AA4D0;
L_088AA4D0:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_088AA4AC;
    }
    goto L_088AA4D8;
L_088AA4D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    goto L_088AA4DC;
L_088AA4DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] ^ ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088AA518;
      }
      goto L_088AA4F8;
    }
L_088AA4F8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA550;
      }
      goto L_088AA518;
    }
L_088AA518:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(132), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(124));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x088AA544u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 918u, 0x08AFFEACu>(ctx, &aot_mem) && ctx.pc == 0x088AA544u) goto L_088AA544;
    return;
L_088AA544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    goto L_088AA550;
L_088AA550:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
      if (branch_taken) {
          goto L_088AA5A8;
      }
      goto L_088AA560;
    }
L_088AA560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[21] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x088AA590u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AA590u) goto L_088AA590;
    return;
L_088AA590:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088AA5A4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 175u, 0x08A4CB0Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA5A4u) goto L_088AA5A4;
    return;
L_088AA5A4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    goto L_088AA5A8;
L_088AA5A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[18] & 65535u);
      if (branch_taken) {
          goto L_088AA604;
      }
      goto L_088AA5D0;
    }
L_088AA5D0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_088AA5D8;
L_088AA5D8:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_088AA5F8;
    }
    goto L_088AA5E8;
L_088AA5E8:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088AA5FC;
      }
      goto L_088AA5F8;
    }
L_088AA5F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088AA5FC;
L_088AA5FC:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_088AA5D8;
    }
    goto L_088AA604;
L_088AA604:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] ^ ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088AA644;
      }
      goto L_088AA624;
    }
L_088AA624:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(152), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA67C;
      }
      goto L_088AA644;
    }
L_088AA644:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(168), static_cast<std::uint16_t>(ctx.gpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.gpr[31] = (0x088AA670u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 918u, 0x08AFFEACu>(ctx, &aot_mem) && ctx.pc == 0x088AA670u) goto L_088AA670;
    return;
L_088AA670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    goto L_088AA67C;
L_088AA67C:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    goto L_088AA684;
L_088AA684:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA6A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[8] = (ctx.gpr[7] ^ ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088AA70C;
      }
      goto L_088AA6F8;
    }
L_088AA6F8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
        goto L_088AA714;
    }
    goto L_088AA70C;
L_088AA70C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088AA714;
      }
      goto L_088AA714;
    }
L_088AA714:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AA784;
      }
      goto L_088AA71C;
    }
L_088AA71C:
    ctx.gpr[31] = (0x088AA724u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 267u, 0x0886DBA8u>(ctx, &aot_mem) && ctx.pc == 0x088AA724u) goto L_088AA724;
    return;
L_088AA724:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA784;
      }
      goto L_088AA72C;
    }
L_088AA72C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(6), ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088AA798;
      }
      goto L_088AA77C;
    }
L_088AA77C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA7CC;
      }
      goto L_088AA784;
    }
L_088AA784:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088AA790u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4560));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088AA790u) goto L_088AA790;
    return;
L_088AA790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA848;
      }
      goto L_088AA798;
    }
L_088AA798:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_088AA7A0;
L_088AA7A0:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_088AA7C0;
    }
    goto L_088AA7B0;
L_088AA7B0:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088AA7C4;
      }
      goto L_088AA7C0;
    }
L_088AA7C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088AA7C4;
L_088AA7C4:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_088AA7A0;
    }
    goto L_088AA7CC;
L_088AA7CC:
    if (ctx.gpr[5] == ctx.gpr[16]) {
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
        goto L_088AA7F0;
    }
    goto L_088AA7D4;
L_088AA7D4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
        goto L_088AA7F4;
    }
    goto L_088AA7EC;
L_088AA7EC:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088AA7F0;
L_088AA7F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_088AA7F4;
L_088AA7F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[16] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_088AA82C;
    }
    goto L_088AA824;
L_088AA824:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088AA82C;
      }
      goto L_088AA82C;
    }
L_088AA82C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA848;
      }
      goto L_088AA834;
    }
L_088AA834:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AA848u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 643u, 0x08A5B83Cu>(ctx, &aot_mem) && ctx.pc == 0x088AA848u) goto L_088AA848;
    return;
L_088AA848:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA860:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AA874u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x088AA874u) goto L_088AA874;
    return;
L_088AA874:
    ctx.gpr[31] = (0x088AA87Cu);
    ctx.gpr[4] = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x088AA87Cu) goto L_088AA87C;
    return;
L_088AA87C:
    ctx.gpr[31] = (0x088AA884u);
    ctx.gpr[4] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x088AA884u) goto L_088AA884;
    return;
L_088AA884:
    ctx.gpr[31] = (0x088AA88Cu);
    ctx.gpr[4] = (0u | 133u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x088AA88Cu) goto L_088AA88C;
    return;
L_088AA88C:
    ctx.gpr[31] = (0x088AA894u);
    ctx.gpr[4] = (0u | 187u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x088AA894u) goto L_088AA894;
    return;
L_088AA894:
    ctx.gpr[31] = (0x088AA89Cu);
    ctx.gpr[4] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x088AA89Cu) goto L_088AA89C;
    return;
L_088AA89C:
    ctx.gpr[31] = (0x088AA8A4u);
    ctx.gpr[4] = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x088AA8A4u) goto L_088AA8A4;
    return;
L_088AA8A4:
    ctx.gpr[31] = (0x088AA8ACu);
    ctx.gpr[4] = (0u | 162u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x088AA8ACu) goto L_088AA8AC;
    return;
L_088AA8AC:
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[31] = (0x088AA8BCu);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(558)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x088AA8BCu) goto L_088AA8BC;
    return;
L_088AA8BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[31] = (0x088AA8C8u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(560)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x088AA8C8u) goto L_088AA8C8;
    return;
L_088AA8C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[31] = (0x088AA8D4u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(562)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x088AA8D4u) goto L_088AA8D4;
    return;
L_088AA8D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA8E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 157u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AA8F8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AA8F8u) goto L_088AA8F8;
    return;
L_088AA8F8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088AA904u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AA904u) goto L_088AA904;
    return;
L_088AA904:
    ctx.gpr[31] = (0x088AA90Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x088AA90Cu) goto L_088AA90C;
    return;
L_088AA90C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA918:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AA934u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_088A848C;
L_088AA934:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088AAA90;
      }
      goto L_088AA944;
    }
L_088AA944:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088AA984;
      }
      goto L_088AA950;
    }
L_088AA950:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088AAA10;
      }
      goto L_088AA958;
    }
L_088AA958:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AAA24;
      }
      goto L_088AA960;
    }
L_088AA960:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_088AAA90;
      }
      goto L_088AA968;
    }
L_088AA968:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088AAA38;
      }
      goto L_088AA970;
    }
L_088AA970:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(54)));
    ctx.gpr[31] = (0x088AA97Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AA97Cu) goto L_088AA97C;
    return;
L_088AA97C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAA90;
      }
      goto L_088AA984;
    }
L_088AA984:
    ctx.gpr[4] = (0u | 140u);
    ctx.gpr[31] = (0x088AA990u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AA990u) goto L_088AA990;
    return;
L_088AA990:
    ctx.gpr[31] = (0x088AA998u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088A84AC;
L_088AA998:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AA9C0;
      }
      goto L_088AA9A0;
    }
L_088AA9A0:
    ctx.gpr[4] = (0u | 132u);
    ctx.gpr[31] = (0x088AA9ACu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AA9ACu) goto L_088AA9AC;
    return;
L_088AA9AC:
    ctx.gpr[4] = (0u | 133u);
    ctx.gpr[31] = (0x088AA9B8u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AA9B8u) goto L_088AA9B8;
    return;
L_088AA9B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAA08;
      }
      goto L_088AA9C0;
    }
L_088AA9C0:
    ctx.gpr[31] = (0x088AA9C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088A84AC;
L_088AA9C8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088AA9F0;
      }
      goto L_088AA9D0;
    }
L_088AA9D0:
    ctx.gpr[4] = (0u | 133u);
    ctx.gpr[31] = (0x088AA9DCu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AA9DCu) goto L_088AA9DC;
    return;
L_088AA9DC:
    ctx.gpr[4] = (0u | 187u);
    ctx.gpr[31] = (0x088AA9E8u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AA9E8u) goto L_088AA9E8;
    return;
L_088AA9E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAA08;
      }
      goto L_088AA9F0;
    }
L_088AA9F0:
    ctx.gpr[4] = (0u | 144u);
    ctx.gpr[31] = (0x088AA9FCu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AA9FCu) goto L_088AA9FC;
    return;
L_088AA9FC:
    ctx.gpr[4] = (0u | 187u);
    ctx.gpr[31] = (0x088AAA08u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AAA08u) goto L_088AAA08;
    return;
L_088AAA08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAA90;
      }
      goto L_088AAA10;
    }
L_088AAA10:
    ctx.gpr[4] = (0u | 140u);
    ctx.gpr[31] = (0x088AAA1Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AAA1Cu) goto L_088AAA1C;
    return;
L_088AAA1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAA90;
      }
      goto L_088AAA24;
    }
L_088AAA24:
    ctx.gpr[4] = (0u | 162u);
    ctx.gpr[31] = (0x088AAA30u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AAA30u) goto L_088AAA30;
    return;
L_088AAA30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAA90;
      }
      goto L_088AAA38;
    }
L_088AAA38:
    ctx.gpr[18] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x088AAA4Cu);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(558)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AAA4Cu) goto L_088AAA4C;
    return;
L_088AAA4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x088AAA5Cu);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(560)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AAA5Cu) goto L_088AAA5C;
    return;
L_088AAA5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x088AAA6Cu);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(562)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AAA6Cu) goto L_088AAA6C;
    return;
L_088AAA6C:
    ctx.gpr[4] = (0u | 150u);
    ctx.gpr[31] = (0x088AAA78u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AAA78u) goto L_088AAA78;
    return;
L_088AAA78:
    ctx.gpr[4] = (0u | 133u);
    ctx.gpr[31] = (0x088AAA84u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AAA84u) goto L_088AAA84;
    return;
L_088AAA84:
    ctx.gpr[4] = (0u | 160u);
    ctx.gpr[31] = (0x088AAA90u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AAA90u) goto L_088AAA90;
    return;
L_088AAA90:
    ctx.gpr[31] = (0x088AAA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 924u, 0x089C7C84u>(ctx, &aot_mem) && ctx.pc == 0x088AAA98u) goto L_088AAA98;
    return;
L_088AAA98:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088AAAB0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 4u, 0x089C804Cu>(ctx, &aot_mem) && ctx.pc == 0x088AAAB0u) goto L_088AAAB0;
    return;
L_088AAAB0:
    ctx.gpr[31] = (0x088AAAB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 484u, 0x08AB71B4u>(ctx, &aot_mem) && ctx.pc == 0x088AAAB8u) goto L_088AAAB8;
    return;
L_088AAAB8:
    ctx.gpr[31] = (0x088AAAC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088A84AC;
L_088AAAC0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (17538u << 16u);
      if (branch_taken) {
          goto L_088AAB04;
      }
      goto L_088AAAC8;
    }
L_088AAAC8:
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (50253u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088AAAFCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 295u, 0x08985D40u>(ctx, &aot_mem) && ctx.pc == 0x088AAAFCu) goto L_088AAAFC;
    return;
L_088AAAFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAB7C;
      }
      goto L_088AAB04;
    }
L_088AAB04:
    ctx.gpr[31] = (0x088AAB0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088A84AC;
L_088AAB0C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (17300u << 16u);
      if (branch_taken) {
          goto L_088AAB4C;
      }
      goto L_088AAB14;
    }
L_088AAB14:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (50323u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16844u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x088AAB44u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 295u, 0x08985D40u>(ctx, &aot_mem) && ctx.pc == 0x088AAB44u) goto L_088AAB44;
    return;
L_088AAB44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAB7C;
      }
      goto L_088AAB4C;
    }
L_088AAB4C:
    ctx.gpr[4] = (50170u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (17058u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x088AAB7Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 295u, 0x08985D40u>(ctx, &aot_mem) && ctx.pc == 0x088AAB7Cu) goto L_088AAB7C;
    return;
L_088AAB7C:
    ctx.gpr[31] = (0x088AAB84u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x088AAB84u) goto L_088AAB84;
    return;
L_088AAB84:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AAB9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AABD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 561u, 0x089C661Cu>(ctx, &aot_mem) && ctx.pc == 0x088AABD0u) goto L_088AABD0;
    return;
L_088AABD0:
    ctx.gpr[30] = (0u | 7u);
    ctx.gpr[18] = (2229u << 16u);
    goto L_088AABD8;
L_088AABD8:
    ctx.gpr[31] = (0x088AABE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 17u, 0x089C8124u>(ctx, &aot_mem) && ctx.pc == 0x088AABE0u) goto L_088AABE0;
    return;
L_088AABE0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AABD8;
      }
      goto L_088AABE8;
    }
L_088AABE8:
    ctx.gpr[31] = (0x088AABF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 907u, 0x089C7B40u>(ctx, &aot_mem) && ctx.pc == 0x088AABF0u) goto L_088AABF0;
    return;
L_088AABF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AABE8;
      }
      goto L_088AABF8;
    }
L_088AABF8:
    ctx.gpr[23] = (2225u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[21] = (0u | 6u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4592));
    ctx.gpr[20] = (2229u << 16u);
    goto L_088AAC18;
L_088AAC18:
    ctx.gpr[31] = (0x088AAC20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 658u, 0x089C6C50u>(ctx, &aot_mem) && ctx.pc == 0x088AAC20u) goto L_088AAC20;
    return;
L_088AAC20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAD4C;
      }
      goto L_088AAC28;
    }
L_088AAC28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAD4C;
      }
      goto L_088AAC48;
    }
L_088AAC48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AAD4C;
      }
      goto L_088AAC58;
    }
L_088AAC58:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088AAC64u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088AAC64u) goto L_088AAC64;
    return;
L_088AAC64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAC90;
      }
      goto L_088AAC7C;
    }
L_088AAC7C:
    ctx.gpr[31] = (0x088AAC84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x088AAC84u) goto L_088AAC84;
    return;
L_088AAC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    goto L_088AAC90;
L_088AAC90:
    ctx.gpr[6] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AACB0;
      }
      goto L_088AAC9C;
    }
L_088AAC9C:
    ctx.gpr[31] = (0x088AACA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 624u, 0x089C6A08u>(ctx, &aot_mem) && ctx.pc == 0x088AACA4u) goto L_088AACA4;
    return;
L_088AACA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    goto L_088AACB0;
L_088AACB0:
    ctx.gpr[6] = (ctx.gpr[5] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AACD0;
      }
      goto L_088AACBC;
    }
L_088AACBC:
    ctx.gpr[31] = (0x088AACC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 641u, 0x089C6B2Cu>(ctx, &aot_mem) && ctx.pc == 0x088AACC4u) goto L_088AACC4;
    return;
L_088AACC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    goto L_088AACD0;
L_088AACD0:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088AACF8;
      }
      goto L_088AACEC;
    }
L_088AACEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088AACF8;
L_088AACF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088AAD1C;
      }
      goto L_088AAD04;
    }
L_088AAD04:
    ctx.gpr[31] = (0x088AAD0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 17u, 0x089C8124u>(ctx, &aot_mem) && ctx.pc == 0x088AAD0Cu) goto L_088AAD0C;
    return;
L_088AAD0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AAD04;
      }
      goto L_088AAD14;
    }
L_088AAD14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAD4C;
      }
      goto L_088AAD1C;
    }
L_088AAD1C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088AAD30;
      }
      goto L_088AAD24;
    }
L_088AAD24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088AAD30;
L_088AAD30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088AAD4C;
      }
      goto L_088AAD3C;
    }
L_088AAD3C:
    ctx.gpr[31] = (0x088AAD44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 907u, 0x089C7B40u>(ctx, &aot_mem) && ctx.pc == 0x088AAD44u) goto L_088AAD44;
    return;
L_088AAD44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AAD3C;
      }
      goto L_088AAD4C;
    }
L_088AAD4C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 300 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AAC18;
      }
      goto L_088AAD60;
    }
L_088AAD60:
    ctx.gpr[31] = (0x088AAD68u);
    ctx.gpr[4] = (0u | 157u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x088AAD68u) goto L_088AAD68;
    return;
L_088AAD68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088AAD80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088AAD80u) goto L_088AAD80;
    return;
L_088AAD80:
    ctx.gpr[31] = (0x088AAD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 514u, 0x089C62E8u>(ctx, &aot_mem) && ctx.pc == 0x088AAD88u) goto L_088AAD88;
    return;
L_088AAD88:
    ctx.gpr[31] = (0x088AAD90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 526u, 0x089C63D0u>(ctx, &aot_mem) && ctx.pc == 0x088AAD90u) goto L_088AAD90;
    return;
L_088AAD90:
    ctx.gpr[31] = (0x088AAD98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 40u, 0x089C82ECu>(ctx, &aot_mem) && ctx.pc == 0x088AAD98u) goto L_088AAD98;
    return;
L_088AAD98:
    ctx.gpr[31] = (0x088AADA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 561u, 0x089C661Cu>(ctx, &aot_mem) && ctx.pc == 0x088AADA0u) goto L_088AADA0;
    return;
L_088AADA0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088AADACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 788u, 0x08AA3B74u>(ctx, &aot_mem) && ctx.pc == 0x088AADACu) goto L_088AADAC;
    return;
L_088AADAC:
    ctx.gpr[31] = (0x088AADB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 756u, 0x089CB298u>(ctx, &aot_mem) && ctx.pc == 0x088AADB4u) goto L_088AADB4;
    return;
L_088AADB4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088AADC0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AADC0u) goto L_088AADC0;
    return;
L_088AADC0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088AADCCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AADCCu) goto L_088AADCC;
    return;
L_088AADCC:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x088AADD8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AADD8u) goto L_088AADD8;
    return;
L_088AADD8:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x088AADE4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AADE4u) goto L_088AADE4;
    return;
L_088AADE4:
    ctx.gpr[4] = (0u | 262u);
    ctx.gpr[31] = (0x088AADF0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AADF0u) goto L_088AADF0;
    return;
L_088AADF0:
    ctx.gpr[4] = (0u | 273u);
    ctx.gpr[31] = (0x088AADFCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AADFCu) goto L_088AADFC;
    return;
L_088AADFC:
    ctx.gpr[4] = (0u | 273u);
    ctx.gpr[31] = (0x088AAE08u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AAE08u) goto L_088AAE08;
    return;
L_088AAE08:
    ctx.gpr[4] = (0u | 292u);
    ctx.gpr[31] = (0x088AAE14u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088AAE14u) goto L_088AAE14;
    return;
L_088AAE14:
    ctx.gpr[31] = (0x088AAE1Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x088AAE1Cu) goto L_088AAE1C;
    return;
L_088AAE1C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16660), static_cast<std::uint8_t>(0u));
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
L_088AAE54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_088AAEA8;
      }
      goto L_088AAE88;
    }
L_088AAE88:
    ctx.gpr[4] = (0u - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5168));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_088AAEA8;
L_088AAEA8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x088AAEB4u);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088AAEB4u) goto L_088AAEB4;
    return;
L_088AAEB4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088AAED0;
      }
      goto L_088AAEC0;
    }
L_088AAEC0:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AAECCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 194u, 0x0883D0B8u>(ctx, &aot_mem) && ctx.pc == 0x088AAECCu) goto L_088AAECC;
    return;
L_088AAECC:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_088AAED0;
L_088AAED0:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088AAF00;
      }
      goto L_088AAEF0;
    }
L_088AAEF0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x088AAEFCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x088AAEFCu) goto L_088AAEFC;
    return;
L_088AAEFC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088AAF00;
L_088AAF00:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088AAF30u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x088AAF30u) goto L_088AAF30;
    return;
L_088AAF30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x088AAF44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x088AAF44u) goto L_088AAF44;
    return;
L_088AAF44:
    ctx.gpr[31] = (0x088AAF4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x088AAF4Cu) goto L_088AAF4C;
    return;
L_088AAF4C:
    ctx.gpr[31] = (0x088AAF54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x088AAF54u) goto L_088AAF54;
    return;
L_088AAF54:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088AAF6Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x088AAF6Cu) goto L_088AAF6C;
    return;
L_088AAF6C:
    ctx.gpr[31] = (0x088AAF74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x088AAF74u) goto L_088AAF74;
    return;
L_088AAF74:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[31] = (0x088AAF84u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 797u, 0x08AFB66Cu>(ctx, &aot_mem) && ctx.pc == 0x088AAF84u) goto L_088AAF84;
    return;
L_088AAF84:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AAFA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AAFC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x088AAFC4u) goto L_088AAFC4;
    return;
L_088AAFC4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x088AAFD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 191u, 0x08958B00u>(ctx, &aot_mem) && ctx.pc == 0x088AAFD8u) goto L_088AAFD8;
    return;
L_088AAFD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AAFE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AB008u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x088AB008u) goto L_088AB008;
    return;
L_088AB008:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088AB014u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x088AB014u) goto L_088AB014;
    return;
L_088AB014:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17204u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x088AB038u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x088AB038u) goto L_088AB038;
    return;
L_088AB038:
    ctx.gpr[31] = (0x088AB040u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x088AB040u) goto L_088AB040;
    return;
L_088AB040:
    ctx.gpr[31] = (0x088AB048u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x088AB048u) goto L_088AB048;
    return;
L_088AB048:
    ctx.gpr[31] = (0x088AB050u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x088AB050u) goto L_088AB050;
    return;
L_088AB050:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB064:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(98), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AB0BCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x088AB0BCu) goto L_088AB0BC;
    return;
L_088AB0BC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088AB0E0;
      }
      goto L_088AB0CC;
    }
L_088AB0CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[31] = (0x088AB0D8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x088AB0D8u) goto L_088AB0D8;
    return;
L_088AB0D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_088AB0E0;
L_088AB0E0:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(104), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(108));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB128:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088AB310;
      }
      goto L_088AB15C;
    }
L_088AB15C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_088AB264;
      }
      goto L_088AB170;
    }
L_088AB170:
    ctx.gpr[18] = (2225u << 16u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4632));
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    goto L_088AB18C;
L_088AB18C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088AB210;
      }
      goto L_088AB1A8;
    }
L_088AB1A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088AB1BCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088ABC34;
L_088AB1BC:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-30316), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB1FC;
      }
      goto L_088AB1E0;
    }
L_088AB1E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x088AB1FCu);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AB1FCu) goto L_088AB1FC;
    return;
L_088AB1FC:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-30316), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_088AB25C;
      }
      goto L_088AB210;
    }
L_088AB210:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088AB234u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 777u, 0x08AFF67Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB234u) goto L_088AB234;
    return;
L_088AB234:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB248;
      }
      goto L_088AB240;
    }
L_088AB240:
    ctx.gpr[31] = (0x088AB248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x088AB248u) goto L_088AB248;
    return;
L_088AB248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_088AB25C;
L_088AB25C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
        goto L_088AB18C;
    }
    goto L_088AB264;
L_088AB264:
    if (ctx.gpr[23] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
        goto L_088AB2D4;
    }
    goto L_088AB26C;
L_088AB26C:
    if (ctx.gpr[23] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
        goto L_088AB2D4;
    }
    goto L_088AB274;
L_088AB274:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB2B4;
      }
      goto L_088AB27C;
    }
L_088AB27C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088AB290u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 652u, 0x08AFED68u>(ctx, &aot_mem) && ctx.pc == 0x088AB290u) goto L_088AB290;
    return;
L_088AB290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    goto L_088AB2B4;
L_088AB2B4:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AB2D4;
      }
      goto L_088AB2BC;
    }
L_088AB2BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
        goto L_088AB2D4;
    }
    goto L_088AB2C8;
L_088AB2C8:
    ctx.gpr[31] = (0x088AB2D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x088AB2D0u) goto L_088AB2D0;
    return;
L_088AB2D0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_088AB2D4;
L_088AB2D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_088AB300;
      }
      goto L_088AB2DC;
    }
L_088AB2DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088AB2FC;
      }
      goto L_088AB2F0;
    }
L_088AB2F0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x088AB2FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB2FCu) goto L_088AB2FC;
    return;
L_088AB2FC:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    goto L_088AB300;
L_088AB300:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB310;
      }
      goto L_088AB308;
    }
L_088AB308:
    ctx.gpr[31] = (0x088AB310u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088AB310u) goto L_088AB310;
    return;
L_088AB310:
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
L_088AB33C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AB368u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088A9328;
L_088AB368:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088AB374u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088A9330;
L_088AB374:
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(5), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]));
    ctx.gpr[31] = (0x088AB384u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088A9338;
L_088AB384:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(9), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(248), ctx.gpr[4]);
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(13), ctx.gpr[4]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(252), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB3B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AB3D8u);
    ctx.gpr[6] = (0u | 0u);
    goto L_088A93B0;
L_088AB3D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB3E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AB3F8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x088AB3F8u) goto L_088AB3F8;
    return;
L_088AB3F8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AB408u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x088AB408u) goto L_088AB408;
    return;
L_088AB408:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB418:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AB430u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB430u) goto L_088AB430;
    return;
L_088AB430:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB43C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4664));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AB460u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088AB460u) goto L_088AB460;
    return;
L_088AB460:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AB470u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    goto L_088A9714;
L_088AB470:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB480:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AB4ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4700));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088AB4ACu) goto L_088AB4AC;
    return;
L_088AB4AC:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
        goto L_088AB4C8;
    }
    goto L_088AB4BC;
L_088AB4BC:
    ctx.gpr[31] = (0x088AB4C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB4C4u) goto L_088AB4C4;
    return;
L_088AB4C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_088AB4C8;
L_088AB4C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB528;
      }
      goto L_088AB4D4;
    }
L_088AB4D4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AB4E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4732));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088AB4E8u) goto L_088AB4E8;
    return;
L_088AB4E8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6967)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088AB51Cu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088A879C;
L_088AB51C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.gpr[31] = (0x088AB528u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088A9714;
L_088AB528:
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
L_088AB540:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-21000)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088AB574;
      }
      goto L_088AB56C;
    }
L_088AB56C:
    ctx.gpr[31] = (0x088AB574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x088AB574u) goto L_088AB574;
    return;
L_088AB574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4780));
    ctx.gpr[31] = (0x088AB58Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x088AB58Cu) goto L_088AB58C;
    return;
L_088AB58C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AB598u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BE84u>(ctx, &aot_mem) && ctx.pc == 0x088AB598u) goto L_088AB598;
    return;
L_088AB598:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AB5A4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x088AB5A4u) goto L_088AB5A4;
    return;
L_088AB5A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB5D4;
      }
      goto L_088AB5AC;
    }
L_088AB5AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088AB5B8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 467u, 0x08A0200Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB5B8u) goto L_088AB5B8;
    return;
L_088AB5B8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.gpr[31] = (0x088AB5C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 467u, 0x08A0200Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB5C4u) goto L_088AB5C4;
    return;
L_088AB5C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x088AB5D4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 803u, 0x08997B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB5D4u) goto L_088AB5D4;
    return;
L_088AB5D4:
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
L_088AB5EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(6), ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(11), ctx.gpr[7]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(15), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(19), ctx.gpr[9]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x088AB634u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 936u, 0x08A9B7A8u>(ctx, &aot_mem) && ctx.pc == 0x088AB634u) goto L_088AB634;
    return;
L_088AB634:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB640:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16655)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
        goto L_088AB65C;
    }
    goto L_088AB654;
L_088AB654:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB678;
      }
      goto L_088AB65C;
    }
L_088AB65C:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(7), ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(236), ctx.gpr[6]);
    goto L_088AB678;
L_088AB678:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB680:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(244)));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(6), ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AB6D0;
      }
      goto L_088AB6BC;
    }
L_088AB6BC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088AB6C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3864));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088AB6C8u) goto L_088AB6C8;
    return;
L_088AB6C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB6EC;
      }
      goto L_088AB6D0;
    }
L_088AB6D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088AB6EC;
L_088AB6EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB6F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(6), ctx.gpr[5]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088AB74C;
      }
      goto L_088AB728;
    }
L_088AB728:
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(7), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(10), ctx.gpr[7]));
    ctx.gpr[31] = (0x088AB738u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_088A87D4;
L_088AB738:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AB754;
      }
      goto L_088AB744;
    }
L_088AB744:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB7E8;
      }
      goto L_088AB74C;
    }
L_088AB74C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB7E8;
      }
      goto L_088AB754;
    }
L_088AB754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB788;
      }
      goto L_088AB760;
    }
L_088AB760:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB788;
      }
      goto L_088AB76C;
    }
L_088AB76C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088AB784u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 227u, 0x088892A4u>(ctx, &aot_mem) && ctx.pc == 0x088AB784u) goto L_088AB784;
    return;
L_088AB784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_088AB788;
L_088AB788:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088AB7E8;
      }
      goto L_088AB79C;
    }
L_088AB79C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB7D4;
      }
      goto L_088AB7A8;
    }
L_088AB7A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x088AB7C8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 227u, 0x088892A4u>(ctx, &aot_mem) && ctx.pc == 0x088AB7C8u) goto L_088AB7C8;
    return;
L_088AB7C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_088AB7D4;
L_088AB7D4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AB79C;
      }
      goto L_088AB7E8;
    }
L_088AB7E8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB7F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(6), ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088AB874;
      }
      goto L_088AB828;
    }
L_088AB828:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(7), ctx.gpr[6]));
    ctx.gpr[31] = (0x088AB834u);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(10), ctx.gpr[6]));
    goto L_088A87D4;
L_088AB834:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB86C;
      }
      goto L_088AB840;
    }
L_088AB840:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB864;
      }
      goto L_088AB84C;
    }
L_088AB84C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB87C;
      }
      goto L_088AB858;
    }
L_088AB858:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(840), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088AB884;
      }
      goto L_088AB864;
    }
L_088AB864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB884;
      }
      goto L_088AB86C;
    }
L_088AB86C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB884;
      }
      goto L_088AB874;
    }
L_088AB874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB884;
      }
      goto L_088AB87C;
    }
L_088AB87C:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(840), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088AB884;
L_088AB884:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB894:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(6), ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088AB8FC;
      }
      goto L_088AB8C8;
    }
L_088AB8C8:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(7), ctx.gpr[6]));
    ctx.gpr[31] = (0x088AB8D4u);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(10), ctx.gpr[6]));
    goto L_088A87D4;
L_088AB8D4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB8F4;
      }
      goto L_088AB8E0;
    }
L_088AB8E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AB904;
      }
      goto L_088AB8EC;
    }
L_088AB8EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB910;
      }
      goto L_088AB8F4;
    }
L_088AB8F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB910;
      }
      goto L_088AB8FC;
    }
L_088AB8FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB910;
      }
      goto L_088AB904;
    }
L_088AB904:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(11), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(14), ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    goto L_088AB910;
L_088AB910:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB920:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(6), ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088AB9E4;
      }
      goto L_088AB954;
    }
L_088AB954:
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(6), ctx.gpr[5]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(7), ctx.gpr[6]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(10), ctx.gpr[6]));
    ctx.gpr[31] = (0x088AB970u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    goto L_088A87D4;
L_088AB970:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB9DC;
      }
      goto L_088AB97C;
    }
L_088AB97C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088AB994u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AB994u) goto L_088AB994;
    return;
L_088AB994:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088AB9B0;
      }
      goto L_088AB9A0;
    }
L_088AB9A0:
    ctx.gpr[31] = (0x088AB9A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 299u, 0x08ABDC34u>(ctx, &aot_mem) && ctx.pc == 0x088AB9A8u) goto L_088AB9A8;
    return;
L_088AB9A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB9DC;
      }
      goto L_088AB9B0;
    }
L_088AB9B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088AB9C8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AB9C8u) goto L_088AB9C8;
    return;
L_088AB9C8:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088AB9DC;
      }
      goto L_088AB9D4;
    }
L_088AB9D4:
    ctx.gpr[31] = (0x088AB9DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 450u, 0x089DA58Cu>(ctx, &aot_mem) && ctx.pc == 0x088AB9DCu) goto L_088AB9DC;
    return;
L_088AB9DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABAC0;
      }
      goto L_088AB9E4;
    }
L_088AB9E4:
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(6), ctx.gpr[5]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(7), ctx.gpr[6]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(10), ctx.gpr[6]));
    ctx.gpr[31] = (0x088ABA00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    goto L_088A87D4;
L_088ABA00:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABAC0;
      }
      goto L_088ABA0C;
    }
L_088ABA0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABAC0;
      }
      goto L_088ABA18;
    }
L_088ABA18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ABA78;
      }
      goto L_088ABA24;
    }
L_088ABA24:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088ABA34u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 81u, 0x0880C5C0u>(ctx, &aot_mem) && ctx.pc == 0x088ABA34u) goto L_088ABA34;
    return;
L_088ABA34:
    ctx.gpr[31] = (0x088ABA3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 211u, 0x0880CFA8u>(ctx, &aot_mem) && ctx.pc == 0x088ABA3Cu) goto L_088ABA3C;
    return;
L_088ABA3C:
    ctx.gpr[31] = (0x088ABA44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 181u, 0x0880CD78u>(ctx, &aot_mem) && ctx.pc == 0x088ABA44u) goto L_088ABA44;
    return;
L_088ABA44:
    ctx.gpr[31] = (0x088ABA4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 196u, 0x0880CE90u>(ctx, &aot_mem) && ctx.pc == 0x088ABA4Cu) goto L_088ABA4C;
    return;
L_088ABA4C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088ABA5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    goto L_088A8C14;
L_088ABA5C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABA70;
      }
      goto L_088ABA68;
    }
L_088ABA68:
    ctx.gpr[31] = (0x088ABA70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 299u, 0x08ABDC34u>(ctx, &aot_mem) && ctx.pc == 0x088ABA70u) goto L_088ABA70;
    return;
L_088ABA70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABAAC;
      }
      goto L_088ABA78;
    }
L_088ABA78:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088ABA88u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 490u, 0x08A36E64u>(ctx, &aot_mem) && ctx.pc == 0x088ABA88u) goto L_088ABA88;
    return;
L_088ABA88:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088ABA98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    goto L_088A8C14;
L_088ABA98:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABAAC;
      }
      goto L_088ABAA4;
    }
L_088ABAA4:
    ctx.gpr[31] = (0x088ABAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 450u, 0x089DA58Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABAACu) goto L_088ABAAC;
    return;
L_088ABAAC:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    goto L_088ABAC0;
L_088ABAC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ABAD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(6), ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088ABB38;
      }
      goto L_088ABB04;
    }
L_088ABB04:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(7), ctx.gpr[6]));
    ctx.gpr[31] = (0x088ABB10u);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(10), ctx.gpr[6]));
    goto L_088A87D4;
L_088ABB10:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABB30;
      }
      goto L_088ABB1C;
    }
L_088ABB1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ABB40;
      }
      goto L_088ABB28;
    }
L_088ABB28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABB60;
      }
      goto L_088ABB30;
    }
L_088ABB30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABB60;
      }
      goto L_088ABB38;
    }
L_088ABB38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABB60;
      }
      goto L_088ABB40;
    }
L_088ABB40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 1u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088ABB60;
L_088ABB60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ABB70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(6), ctx.gpr[5]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088ABBC8;
      }
      goto L_088ABBA4;
    }
L_088ABBA4:
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(7), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(10), ctx.gpr[7]));
    ctx.gpr[31] = (0x088ABBB4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_088A87D4;
L_088ABBB4:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ABBD0;
      }
      goto L_088ABBC0;
    }
L_088ABBC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABC14;
      }
      goto L_088ABBC8;
    }
L_088ABBC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABC14;
      }
      goto L_088ABBD0;
    }
L_088ABBD0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABC14;
      }
      goto L_088ABBDC;
    }
L_088ABBDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ABC14;
      }
      goto L_088ABBE8;
    }
L_088ABBE8:
    ctx.gpr[31] = (0x088ABBF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x088ABBF0u) goto L_088ABBF0;
    return;
L_088ABBF0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABC14;
      }
      goto L_088ABBF8;
    }
L_088ABBF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088ABC14u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ABC14u) goto L_088ABC14;
    return;
L_088ABC14:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ABC24:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ABC2C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ABC34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[11]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ABC60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[11]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ABC8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    ctx.gpr[31] = (0x088ABCBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4800));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088ABCBCu) goto L_088ABCBC;
    return;
L_088ABCBC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_088ABD38;
      }
      goto L_088ABD2C;
    }
L_088ABD2C:
    ctx.gpr[31] = (0x088ABD34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABD34u) goto L_088ABD34;
    return;
L_088ABD34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    goto L_088ABD38;
L_088ABD38:
    ctx.gpr[31] = (0x088ABD40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 289u, 0x08A0928Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABD40u) goto L_088ABD40;
    return;
L_088ABD40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ABD70;
      }
      goto L_088ABD64;
    }
L_088ABD64:
    ctx.gpr[31] = (0x088ABD6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABD6Cu) goto L_088ABD6C;
    return;
L_088ABD6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    goto L_088ABD70;
L_088ABD70:
    ctx.gpr[31] = (0x088ABD78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 289u, 0x08A0928Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABD78u) goto L_088ABD78;
    return;
L_088ABD78:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088ABD88u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B0B724u;
    return;
L_088ABD88:
    ctx.gpr[31] = (0x088ABD90u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088ABD90u) goto L_088ABD90;
    return;
L_088ABD90:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088ABDA0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x088ABDA0u) goto L_088ABDA0;
    return;
L_088ABDA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 58u);
      if (branch_taken) {
          goto L_088ABDE4;
      }
      goto L_088ABDB4;
    }
L_088ABDB4:
    ctx.gpr[7] = (0u | 46u);
    goto L_088ABDB8;
L_088ABDB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088ABDD0;
      }
      goto L_088ABDCC;
    }
L_088ABDCC:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_088ABDD0;
L_088ABDD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ABDB8;
      }
      goto L_088ABDE4;
    }
L_088ABDE4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088ABDF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4828));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 443u, 0x088A6FC8u>(ctx, &aot_mem) && ctx.pc == 0x088ABDF0u) goto L_088ABDF0;
    return;
L_088ABDF0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    ctx.gpr[31] = (0x088ABE04u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x088ABE04u) goto L_088ABE04;
    return;
L_088ABE04:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088ABE24;
      }
      goto L_088ABE10;
    }
L_088ABE10:
    ctx.gpr[5] = (18260u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088ABE20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16691));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 134u, 0x0886D104u>(ctx, &aot_mem) && ctx.pc == 0x088ABE20u) goto L_088ABE20;
    return;
L_088ABE20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    goto L_088ABE24;
L_088ABE24:
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[6] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19484));
    ctx.gpr[31] = (0x088ABE38u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-19432));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 189u, 0x0886D49Cu>(ctx, &aot_mem) && ctx.pc == 0x088ABE38u) goto L_088ABE38;
    return;
L_088ABE38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16628)));
    ctx.gpr[31] = (0x088ABE4Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 204u, 0x0886D5F0u>(ctx, &aot_mem) && ctx.pc == 0x088ABE4Cu) goto L_088ABE4C;
    return;
L_088ABE4C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16336));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[31] = (0x088ABE80u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088ABE80u) goto L_088ABE80;
    return;
L_088ABE80:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_088ABEA0;
      }
      goto L_088ABE8C;
    }
L_088ABE8C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088ABE9Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 513u, 0x08AFE2D8u>(ctx, &aot_mem) && ctx.pc == 0x088ABE9Cu) goto L_088ABE9C;
    return;
L_088ABE9C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088ABEA0;
L_088ABEA0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ABEB8;
      }
      goto L_088ABEA8;
    }
L_088ABEA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_088ABEB8;
L_088ABEB8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ABECC;
      }
      goto L_088ABEC0;
    }
L_088ABEC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088ABECC;
L_088ABECC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_088ABF00;
    }
    goto L_088ABEE4;
L_088ABEE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088ABEFC;
      }
      goto L_088ABEF4;
    }
L_088ABEF4:
    ctx.gpr[31] = (0x088ABEFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088ABEFCu) goto L_088ABEFC;
    return;
L_088ABEFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_088ABF00;
L_088ABF00:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (2227u << 16u);
        goto L_088ABF24;
    }
    goto L_088ABF08;
L_088ABF08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088ABF20;
      }
      goto L_088ABF18;
    }
L_088ABF18:
    ctx.gpr[31] = (0x088ABF20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088ABF20u) goto L_088ABF20;
    return;
L_088ABF20:
    ctx.gpr[4] = (2227u << 16u);
    goto L_088ABF24;
L_088ABF24:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16344));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16344)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[31] = (0x088ABF54u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6954))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088ABF54u) goto L_088ABF54;
    return;
L_088ABF54:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_088ABF70;
      }
      goto L_088ABF60;
    }
L_088ABF60:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088ABF6Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 513u, 0x08AFE2D8u>(ctx, &aot_mem) && ctx.pc == 0x088ABF6Cu) goto L_088ABF6C;
    return;
L_088ABF6C:
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
    goto L_088ABF70;
L_088ABF70:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088ABF84;
      }
      goto L_088ABF78;
    }
L_088ABF78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088ABF84;
L_088ABF84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ABF94u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_088A90A8;
L_088ABF94:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088ABFBC;
      }
      goto L_088ABFA0;
    }
L_088ABFA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ABFB8;
      }
      goto L_088ABFB0;
    }
L_088ABFB0:
    ctx.gpr[31] = (0x088ABFB8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088ABFB8u) goto L_088ABFB8;
    return;
L_088ABFB8:
    ctx.gpr[4] = (2227u << 16u);
    goto L_088ABFBC;
L_088ABFBC:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16352));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[31] = (0x088ABFECu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6957))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088ABFECu) goto L_088ABFEC;
    return;
L_088ABFEC:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 2u, 0x088AC008u>(ctx, &aot_mem); return;
      }
      goto L_088ABFF8;
    }
L_088ABFF8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088AC004u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 513u, 0x08AFE2D8u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0041(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0041_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_41(Runtime &runtime) {
    runtime.register_generated_unit(41u, 0x088A8000u, 16384u, &recomp_unit_0041, &recomp_unit_0041_entry);
    runtime.register_function(0x088A8000u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8010u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8014u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8030u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8058u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8060u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A806Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8074u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A807Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A808Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8098u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8120u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8128u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8134u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8140u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8148u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A814Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8150u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8158u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A816Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8174u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A817Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8184u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8190u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A819Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8218u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8224u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A823Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8248u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A824Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8254u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A825Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8260u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A826Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8288u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8304u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A832Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8334u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8364u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8368u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8374u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A837Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8408u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8418u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A841Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A843Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8448u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8454u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8460u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8468u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8470u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8478u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A847Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8484u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A848Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8494u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8504u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A850Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8514u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8530u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8548u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A856Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8578u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8590u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A859Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8608u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8614u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A861Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8624u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8630u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8638u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8658u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8674u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8678u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8690u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8740u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8750u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8764u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8780u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8790u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A879Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8800u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8810u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8830u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A883Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A884Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A885Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8860u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8868u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8870u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8888u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A888Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8890u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A88B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A88C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A88C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A88CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8918u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A892Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A897Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8984u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8990u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A899Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A20u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A7Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8AE0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8AF4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B20u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B50u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B5Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B80u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BA4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BD8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BE0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C5Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C68u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C70u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CC8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CCCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CD4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CF4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D7Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8DA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8DC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8DD4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8E14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8E30u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8E78u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8E8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8EA4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8EACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8EC8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8ED0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8EE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8EF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F08u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F48u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8FA4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8FACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9028u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9034u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A903Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9048u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9084u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A908Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9090u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A90A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A90D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A90E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A90ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9104u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9114u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A911Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A912Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9138u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9158u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9160u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9170u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A917Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9184u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A91B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A91C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A91E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A91FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9218u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A921Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A922Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9240u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9254u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9264u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9280u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9288u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9304u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9318u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9320u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9328u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9330u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9338u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9340u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9348u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A935Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9364u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A936Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9374u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A937Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9384u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9394u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A939Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9408u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9414u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9420u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9424u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A942Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9434u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A943Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A946Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9478u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9484u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9494u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A949Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9500u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A950Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9530u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9538u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9558u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9584u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A959Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9600u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A962Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9638u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9644u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9664u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A967Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9684u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A969Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A96A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A96B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A96BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A96C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A96ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A96F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9714u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A974Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9760u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9768u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A976Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9788u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9798u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9828u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A983Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A984Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9850u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9854u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9864u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A986Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9884u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A988Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A98A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A98ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A98D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A98E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A98FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9908u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9910u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9914u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9924u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9934u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A993Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9940u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9954u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9964u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9970u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9984u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9990u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A99A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A99B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A99DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A99F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A10u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A38u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A64u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9AD4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9ADCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9AFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B30u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B50u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B70u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BA4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BBCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BD0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BD8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C78u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9CD0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9CF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D30u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D38u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D50u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D54u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D80u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9DACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9DBCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9DD4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9DF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E5Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E68u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9EA4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9ED4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9EE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9EE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F48u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F70u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F7Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F98u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9FA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9FC4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9FCCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9FFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA040u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA04Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA084u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA09Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA104u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA114u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA124u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA128u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA130u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA138u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA150u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA154u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA170u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA1A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA1C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA21Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA248u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA250u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA260u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA270u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA274u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA27Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA29Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA2BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA2ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA2F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA308u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA31Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA33Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA344u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA34Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA35Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA374u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA37Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA38Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA3B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA3C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA3D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA3E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA3E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA3ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA40Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA430u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA464u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA478u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA518u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA544u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA550u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA560u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA590u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA604u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA624u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA644u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA670u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA67Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA684u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA6A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA6F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA70Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA714u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA71Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA724u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA72Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA77Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA784u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA790u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA798u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA824u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA82Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA834u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA848u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA860u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA874u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA87Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA884u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA88Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA894u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA89Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA904u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA90Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA918u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA934u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA944u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA950u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA958u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA960u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA968u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA970u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA97Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA984u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA990u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA998u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA08u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA10u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA30u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA38u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA5Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA78u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA98u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAC8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB0Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB7Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AABD0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AABD8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AABE0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AABE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AABF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AABF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC20u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC48u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC64u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC7Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACA4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACBCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACC4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACD0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD0Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD30u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD68u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD80u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD98u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADB4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADCCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADD8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE08u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE54u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAEA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAEB4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAEC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAECCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAED0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAEF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAEFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF30u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF54u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAFA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAFC4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAFD8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAFE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB008u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB014u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB038u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB040u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB048u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB050u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB064u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB0BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB0CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB0D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB0E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB128u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB15Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB170u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB18Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB210u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB234u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB240u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB248u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB25Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB264u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB26Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB274u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB27Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB290u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB300u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB308u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB310u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB33Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB368u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB374u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB384u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB3B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB3D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB3E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB3F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB408u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB418u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB430u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB43Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB460u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB470u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB480u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB51Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB528u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB540u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB56Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB574u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB58Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB598u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB634u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB640u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB654u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB65Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB678u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB680u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB728u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB738u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB744u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB74Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB754u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB760u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB76Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB784u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB788u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB79Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB828u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB834u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB840u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB84Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB858u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB864u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB86Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB874u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB87Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB884u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB894u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB904u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB910u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB920u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB954u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB970u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB97Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB994u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA0Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA5Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA68u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA70u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA78u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA98u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABAA4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABAACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABAC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABAD0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB10u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB30u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB38u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB40u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB70u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBA4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBB4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBC8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBD0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBDCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABCBCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD38u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD40u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD64u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD70u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD78u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDB4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDCCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDD0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE10u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE20u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE38u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE80u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABECCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEF4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF08u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF20u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF54u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF70u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF78u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFBCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABFF8u, &recomp_unit_0041, "recomp_unit_0041");
}
} // namespace psprecomp
