#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0188[4093] = {
    1, 0, 0, 2, 0, 0, 3, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 9, 0,
    0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 13, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0,
    23, 24, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33,
    34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0,
    0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0,
    0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0,
    61, 0, 62, 0, 63, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0,
    0, 70, 0, 71, 0, 0, 72, 0, 73, 0, 0, 74, 0, 75, 0, 0, 76, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0,
    82, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 86, 0, 87, 0, 0, 88, 0, 0, 89, 0, 90, 0, 0, 91, 0, 92, 0, 0, 93, 0, 94,
    0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0,
    0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 105, 0, 0, 0, 106,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 110, 0, 111, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 115, 116, 0, 0, 0, 117, 118, 0, 119, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 125, 0, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 130, 0, 0,
    131, 0, 0, 132, 133, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0,
    0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0,
    165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0,
    0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0,
    0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0,
    0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 221,
    0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0,
    0, 227, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0,
    0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 246, 0, 247, 248, 0, 0, 0,
    249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 254, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0,
    267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0,
    0, 273, 0, 274, 0, 0, 275, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280,
    281, 0, 0, 282, 0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 0, 286, 287, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 293, 294, 0, 295, 0, 296, 0, 0, 0, 297, 0, 0, 0, 298, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 307,
    0, 308, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 315, 0, 0, 316, 0, 317, 0, 318, 0, 0, 319, 320, 0, 321, 0, 322, 0, 323, 0,
    0, 0, 0, 0, 324, 325, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 335, 0, 0, 336, 0, 337, 0, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 347, 0, 348, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0,
    0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 359, 0, 0, 360, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 362, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 368, 369, 0, 0, 0,
    370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 374, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0,
    377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0,
    0, 383, 0, 384, 0, 0, 0, 0, 385, 0, 386, 0, 387, 0, 388, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 395, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 397, 0, 398, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 402, 403, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 406,
    0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 411, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 415, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 418, 0, 419, 0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0,
    0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 429, 0, 430, 0, 0, 0, 431,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 436, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0,
    442, 443, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 448, 449, 0, 0, 0, 0, 0, 450, 0, 451,
    0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 455, 0, 0,
    0, 0, 0, 0, 0, 456, 0, 457, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 0, 464, 0,
    0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 469, 0, 0, 0, 0, 470, 0, 471, 0, 0,
    0, 0, 0, 0, 472, 0, 0, 473, 474, 0, 0, 475, 0, 0, 476, 0, 477, 478, 0, 0, 479, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 487, 0, 0, 488,
    489, 0, 490, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0,
    497, 0, 0, 0, 498, 0, 499, 0, 500, 501, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0,
    0, 504, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 508, 509, 0, 0, 510, 0, 511, 0, 512, 0, 513, 0, 0, 0, 0,
    0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 516, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0,
    0, 519, 0, 520, 0, 521, 522, 0, 523, 0, 0, 524, 0, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0, 528, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 531, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534,
    0, 535, 0, 0, 536, 0, 0, 0, 537, 0, 0, 538, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 543, 0,
    0, 544, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 550, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553,
    0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 0, 559, 560, 0, 561,
    0, 562, 0, 0, 563, 0, 0, 0, 0, 0, 0, 564, 0, 565, 0, 566, 0, 0, 567, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0,
    0, 570, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 572, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 574, 0, 0, 575, 0, 0, 576, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0, 0,
    581, 582, 583, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 0, 589, 0, 0, 0, 0, 590, 0,
    0, 591, 0, 592, 0, 0, 593, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 596, 0, 597, 0, 0, 598, 599, 0, 0, 0, 0, 600,
    0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 603, 604, 605, 0, 606, 0, 0, 0, 607, 0, 0, 0, 0, 0, 608, 0, 0, 609, 0, 610,
    0, 0, 0, 0, 0, 0, 611, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 614, 615, 0, 616, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 617, 0, 0, 618, 0, 0, 0, 0, 0, 0, 619, 620, 0, 0, 621, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 629, 0, 630, 0, 631, 0, 0,
    632, 0, 0, 0, 633, 0, 634, 0, 0, 635, 0, 0, 636, 0, 637, 0, 0, 638, 639, 0, 640, 0, 641, 0, 642, 643, 0, 0, 644, 0, 0, 0,
    0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 649, 650, 0, 651, 0, 652, 0, 653, 0, 0, 0, 654, 655,
    656, 0, 657, 0, 0, 0, 658, 659, 0, 660, 0, 0, 0, 0, 0, 661, 0, 0, 662, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 664, 0, 0, 665, 0, 0, 666, 0, 667, 0, 0, 0, 668, 0, 0, 0, 0, 669, 670, 0, 0, 0, 671, 672, 673, 0,
    0, 0, 674, 0, 675, 0, 676, 0, 677, 0, 0, 0, 0, 0, 0, 678, 0, 679, 680, 0, 681, 0, 0, 682, 683, 0, 684, 0, 0, 685, 0, 0,
    686, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 690, 0, 0,
    691, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 697, 0, 698, 0, 0,
    0, 699, 0, 700, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 702, 0, 703, 0, 704, 705, 0, 706, 0, 0, 707, 0, 708, 0, 709, 0, 710, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 713, 0, 714, 715, 0, 0, 0, 716, 0, 0, 0, 0, 0,
    0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 720, 721, 0, 0, 722, 723, 0, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0,
    0, 725, 0, 0, 0, 726, 0, 727, 0, 728, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 732, 0, 0, 0, 733, 0, 734, 0, 0, 0, 735, 0, 0, 736,
    0, 737, 0, 0, 0, 738, 0, 0, 0, 0, 0, 739, 0, 0, 740, 0, 0, 0, 741, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 743, 0, 744, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0,
    748, 0, 0, 749, 750, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 753, 0, 0, 754, 0, 0, 755, 756,
    0, 0, 0, 757, 0, 758, 0, 0, 759, 0, 760, 0, 761, 0, 0, 0, 762, 0, 763, 0, 0, 764, 0, 0, 765, 0, 0, 0, 0, 766, 0, 0,
    0, 0, 767, 0, 0, 0, 0, 0, 0, 768, 0, 769, 0, 0, 0, 0, 0, 0, 0, 770, 0, 771, 0, 0, 0, 0, 0, 772, 0, 773, 0, 774,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 776, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 777, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0,
    0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 783, 0, 0, 784, 785, 0, 0, 0, 786, 0, 0, 787, 0, 0, 0, 0, 788, 0,
    0, 0, 789, 0, 0, 0, 0, 0, 0, 790, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 793, 0, 794, 0, 0, 0, 0, 795, 0,
    0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 797, 0, 798, 0, 799, 0, 0, 0, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 0, 0,
    0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 804, 0, 0, 0, 805, 0, 0, 0, 0, 806, 0, 0, 0, 807,
    0, 0, 0, 0, 0, 0, 808, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 0, 811, 0, 812, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 814, 0, 0, 0, 0, 0, 815, 0, 816, 0, 0, 0, 0, 0, 0, 817, 818, 0, 0, 0, 0, 0,
    819, 0, 820, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 823, 824, 0, 0, 0, 0,
    0, 0, 825, 0, 0, 0, 0, 0, 826, 0, 827, 0, 0, 0, 0, 0, 0, 828, 829, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 831, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 833, 0, 834, 0, 0, 835, 0, 0, 0, 836, 0, 0, 0, 0, 837,
    0, 0, 838, 0, 0, 0, 0, 0, 0, 839, 0, 840, 0, 0, 0, 841, 0, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 843, 0, 0, 0, 0, 0, 0, 844, 0, 0, 0, 845, 0, 0, 0, 846, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0, 848, 0, 0,
    0, 0, 0, 0, 0, 0, 849, 0, 0, 0, 850, 0, 0, 851, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 853, 0, 0, 0, 854,
};
void recomp_unit_0188_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AF4004u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0188[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AF4004;
    case 2u: goto L_08AF4010;
    case 3u: goto L_08AF401C;
    case 4u: goto L_08AF4020;
    case 5u: goto L_08AF4034;
    case 6u: goto L_08AF4060;
    case 7u: goto L_08AF406C;
    case 8u: goto L_08AF4078;
    case 9u: goto L_08AF407C;
    case 10u: goto L_08AF4090;
    case 11u: goto L_08AF40BC;
    case 12u: goto L_08AF40C8;
    case 13u: goto L_08AF40D4;
    case 14u: goto L_08AF40D8;
    case 15u: goto L_08AF40EC;
    case 16u: goto L_08AF4110;
    case 17u: goto L_08AF411C;
    case 18u: goto L_08AF4128;
    case 19u: goto L_08AF412C;
    case 20u: goto L_08AF4140;
    case 21u: goto L_08AF416C;
    case 22u: goto L_08AF4178;
    case 23u: goto L_08AF4184;
    case 24u: goto L_08AF4188;
    case 25u: goto L_08AF419C;
    case 26u: goto L_08AF41A4;
    case 27u: goto L_08AF41AC;
    case 28u: goto L_08AF41B4;
    case 29u: goto L_08AF41BC;
    case 30u: goto L_08AF41C4;
    case 31u: goto L_08AF41D8;
    case 32u: goto L_08AF41EC;
    case 33u: goto L_08AF4200;
    case 34u: goto L_08AF4204;
    case 35u: goto L_08AF4214;
    case 36u: goto L_08AF4230;
    case 37u: goto L_08AF4250;
    case 38u: goto L_08AF425C;
    case 39u: goto L_08AF4278;
    case 40u: goto L_08AF4288;
    case 41u: goto L_08AF4290;
    case 42u: goto L_08AF42B4;
    case 43u: goto L_08AF42BC;
    case 44u: goto L_08AF42D4;
    case 45u: goto L_08AF4328;
    case 46u: goto L_08AF4330;
    case 47u: goto L_08AF4340;
    case 48u: goto L_08AF435C;
    case 49u: goto L_08AF437C;
    case 50u: goto L_08AF4388;
    case 51u: goto L_08AF4398;
    case 52u: goto L_08AF43A8;
    case 53u: goto L_08AF43BC;
    case 54u: goto L_08AF4408;
    case 55u: goto L_08AF4418;
    case 56u: goto L_08AF4428;
    case 57u: goto L_08AF4444;
    case 58u: goto L_08AF444C;
    case 59u: goto L_08AF4468;
    case 60u: goto L_08AF4478;
    case 61u: goto L_08AF4484;
    case 62u: goto L_08AF448C;
    case 63u: goto L_08AF4494;
    case 64u: goto L_08AF4498;
    case 65u: goto L_08AF44B0;
    case 66u: goto L_08AF44C0;
    case 67u: goto L_08AF44E0;
    case 68u: goto L_08AF44F0;
    case 69u: goto L_08AF44F8;
    case 70u: goto L_08AF4508;
    case 71u: goto L_08AF4510;
    case 72u: goto L_08AF451C;
    case 73u: goto L_08AF4524;
    case 74u: goto L_08AF4530;
    case 75u: goto L_08AF4538;
    case 76u: goto L_08AF4544;
    case 77u: goto L_08AF4550;
    case 78u: goto L_08AF4558;
    case 79u: goto L_08AF4560;
    case 80u: goto L_08AF4570;
    case 81u: goto L_08AF457C;
    case 82u: goto L_08AF4584;
    case 83u: goto L_08AF4594;
    case 84u: goto L_08AF459C;
    case 85u: goto L_08AF45A8;
    case 86u: goto L_08AF45B0;
    case 87u: goto L_08AF45B8;
    case 88u: goto L_08AF45C4;
    case 89u: goto L_08AF45D0;
    case 90u: goto L_08AF45D8;
    case 91u: goto L_08AF45E4;
    case 92u: goto L_08AF45EC;
    case 93u: goto L_08AF45F8;
    case 94u: goto L_08AF4600;
    case 95u: goto L_08AF460C;
    case 96u: goto L_08AF4614;
    case 97u: goto L_08AF461C;
    case 98u: goto L_08AF463C;
    case 99u: goto L_08AF4658;
    case 100u: goto L_08AF4674;
    case 101u: goto L_08AF467C;
    case 102u: goto L_08AF46A0;
    case 103u: goto L_08AF46C0;
    case 104u: goto L_08AF46EC;
    case 105u: goto L_08AF46F0;
    case 106u: goto L_08AF4700;
    case 107u: goto L_08AF4728;
    case 108u: goto L_08AF4738;
    case 109u: goto L_08AF4740;
    case 110u: goto L_08AF4798;
    case 111u: goto L_08AF47A0;
    case 112u: goto L_08AF47A8;
    case 113u: goto L_08AF47B4;
    case 114u: goto L_08AF47C4;
    case 115u: goto L_08AF4820;
    case 116u: goto L_08AF4824;
    case 117u: goto L_08AF4834;
    case 118u: goto L_08AF4838;
    case 119u: goto L_08AF4840;
    case 120u: goto L_08AF484C;
    case 121u: goto L_08AF4854;
    case 122u: goto L_08AF4864;
    case 123u: goto L_08AF4894;
    case 124u: goto L_08AF48B8;
    case 125u: goto L_08AF48BC;
    case 126u: goto L_08AF48C8;
    case 127u: goto L_08AF48D8;
    case 128u: goto L_08AF48E4;
    case 129u: goto L_08AF48F0;
    case 130u: goto L_08AF48F8;
    case 131u: goto L_08AF4904;
    case 132u: goto L_08AF4910;
    case 133u: goto L_08AF4914;
    case 134u: goto L_08AF491C;
    case 135u: goto L_08AF4930;
    case 136u: goto L_08AF4940;
    case 137u: goto L_08AF494C;
    case 138u: goto L_08AF4954;
    case 139u: goto L_08AF4978;
    case 140u: goto L_08AF49AC;
    case 141u: goto L_08AF49BC;
    case 142u: goto L_08AF49DC;
    case 143u: goto L_08AF4A00;
    case 144u: goto L_08AF4A14;
    case 145u: goto L_08AF4A2C;
    case 146u: goto L_08AF4A38;
    case 147u: goto L_08AF4A60;
    case 148u: goto L_08AF4A68;
    case 149u: goto L_08AF4A70;
    case 150u: goto L_08AF4A88;
    case 151u: goto L_08AF4AA0;
    case 152u: goto L_08AF4AAC;
    case 153u: goto L_08AF4AC0;
    case 154u: goto L_08AF4AE0;
    case 155u: goto L_08AF4AE8;
    case 156u: goto L_08AF4AFC;
    case 157u: goto L_08AF4B14;
    case 158u: goto L_08AF4B1C;
    case 159u: goto L_08AF4B24;
    case 160u: goto L_08AF4B2C;
    case 161u: goto L_08AF4B34;
    case 162u: goto L_08AF4B54;
    case 163u: goto L_08AF4B60;
    case 164u: goto L_08AF4B6C;
    case 165u: goto L_08AF4B84;
    case 166u: goto L_08AF4B8C;
    case 167u: goto L_08AF4BAC;
    case 168u: goto L_08AF4BB8;
    case 169u: goto L_08AF4BD8;
    case 170u: goto L_08AF4C10;
    case 171u: goto L_08AF4C68;
    case 172u: goto L_08AF4C74;
    case 173u: goto L_08AF4CB4;
    case 174u: goto L_08AF4CB8;
    case 175u: goto L_08AF4CC4;
    case 176u: goto L_08AF4CD4;
    case 177u: goto L_08AF4CE4;
    case 178u: goto L_08AF4D0C;
    case 179u: goto L_08AF4D24;
    case 180u: goto L_08AF4D34;
    case 181u: goto L_08AF4D54;
    case 182u: goto L_08AF4D64;
    case 183u: goto L_08AF4D74;
    case 184u: goto L_08AF4D88;
    case 185u: goto L_08AF4DB8;
    case 186u: goto L_08AF4DD8;
    case 187u: goto L_08AF4DF4;
    case 188u: goto L_08AF4DFC;
    case 189u: goto L_08AF4E24;
    case 190u: goto L_08AF4E30;
    case 191u: goto L_08AF4E3C;
    case 192u: goto L_08AF4E48;
    case 193u: goto L_08AF4E6C;
    case 194u: goto L_08AF4E74;
    case 195u: goto L_08AF4E98;
    case 196u: goto L_08AF4EB4;
    case 197u: goto L_08AF4ED4;
    case 198u: goto L_08AF4F10;
    case 199u: goto L_08AF4F20;
    case 200u: goto L_08AF4F2C;
    case 201u: goto L_08AF4F34;
    case 202u: goto L_08AF4F44;
    case 203u: goto L_08AF4F6C;
    case 204u: goto L_08AF4F74;
    case 205u: goto L_08AF4F88;
    case 206u: goto L_08AF4F90;
    case 207u: goto L_08AF4F98;
    case 208u: goto L_08AF4FB0;
    case 209u: goto L_08AF4FB8;
    case 210u: goto L_08AF4FDC;
    case 211u: goto L_08AF4FF0;
    case 212u: goto L_08AF500C;
    case 213u: goto L_08AF5024;
    case 214u: goto L_08AF5038;
    case 215u: goto L_08AF5064;
    case 216u: goto L_08AF508C;
    case 217u: goto L_08AF50B4;
    case 218u: goto L_08AF50D0;
    case 219u: goto L_08AF50DC;
    case 220u: goto L_08AF50EC;
    case 221u: goto L_08AF5100;
    case 222u: goto L_08AF5108;
    case 223u: goto L_08AF511C;
    case 224u: goto L_08AF5138;
    case 225u: goto L_08AF5170;
    case 226u: goto L_08AF517C;
    case 227u: goto L_08AF5188;
    case 228u: goto L_08AF5190;
    case 229u: goto L_08AF51A4;
    case 230u: goto L_08AF51FC;
    case 231u: goto L_08AF5204;
    case 232u: goto L_08AF5250;
    case 233u: goto L_08AF5264;
    case 234u: goto L_08AF52A0;
    case 235u: goto L_08AF52B4;
    case 236u: goto L_08AF530C;
    case 237u: goto L_08AF5314;
    case 238u: goto L_08AF5360;
    case 239u: goto L_08AF537C;
    case 240u: goto L_08AF5388;
    case 241u: goto L_08AF5398;
    case 242u: goto L_08AF53A4;
    case 243u: goto L_08AF53BC;
    case 244u: goto L_08AF53C8;
    case 245u: goto L_08AF53D0;
    case 246u: goto L_08AF53E8;
    case 247u: goto L_08AF53F0;
    case 248u: goto L_08AF53F4;
    case 249u: goto L_08AF5404;
    case 250u: goto L_08AF5414;
    case 251u: goto L_08AF5420;
    case 252u: goto L_08AF5440;
    case 253u: goto L_08AF544C;
    case 254u: goto L_08AF5454;
    case 255u: goto L_08AF5458;
    case 256u: goto L_08AF5474;
    case 257u: goto L_08AF5484;
    case 258u: goto L_08AF549C;
    case 259u: goto L_08AF54A8;
    case 260u: goto L_08AF54B4;
    case 261u: goto L_08AF54C0;
    case 262u: goto L_08AF54CC;
    case 263u: goto L_08AF54D8;
    case 264u: goto L_08AF54E4;
    case 265u: goto L_08AF54F0;
    case 266u: goto L_08AF54FC;
    case 267u: goto L_08AF5504;
    case 268u: goto L_08AF550C;
    case 269u: goto L_08AF5540;
    case 270u: goto L_08AF554C;
    case 271u: goto L_08AF5560;
    case 272u: goto L_08AF5578;
    case 273u: goto L_08AF5588;
    case 274u: goto L_08AF5590;
    case 275u: goto L_08AF559C;
    case 276u: goto L_08AF55AC;
    case 277u: goto L_08AF55B8;
    case 278u: goto L_08AF55CC;
    case 279u: goto L_08AF55D8;
    case 280u: goto L_08AF5600;
    case 281u: goto L_08AF5604;
    case 282u: goto L_08AF5610;
    case 283u: goto L_08AF5618;
    case 284u: goto L_08AF5628;
    case 285u: goto L_08AF5634;
    case 286u: goto L_08AF5640;
    case 287u: goto L_08AF5644;
    case 288u: goto L_08AF5650;
    case 289u: goto L_08AF565C;
    case 290u: goto L_08AF5670;
    case 291u: goto L_08AF56A4;
    case 292u: goto L_08AF56B8;
    case 293u: goto L_08AF56C8;
    case 294u: goto L_08AF56CC;
    case 295u: goto L_08AF56D4;
    case 296u: goto L_08AF56DC;
    case 297u: goto L_08AF56EC;
    case 298u: goto L_08AF56FC;
    case 299u: goto L_08AF572C;
    case 300u: goto L_08AF5740;
    case 301u: goto L_08AF574C;
    case 302u: goto L_08AF5760;
    case 303u: goto L_08AF5784;
    case 304u: goto L_08AF57C8;
    case 305u: goto L_08AF57EC;
    case 306u: goto L_08AF57F4;
    case 307u: goto L_08AF5800;
    case 308u: goto L_08AF5808;
    case 309u: goto L_08AF5810;
    case 310u: goto L_08AF581C;
    case 311u: goto L_08AF5828;
    case 312u: goto L_08AF5834;
    case 313u: goto L_08AF58A0;
    case 314u: goto L_08AF58A8;
    case 315u: goto L_08AF58B8;
    case 316u: goto L_08AF58C4;
    case 317u: goto L_08AF58CC;
    case 318u: goto L_08AF58D4;
    case 319u: goto L_08AF58E0;
    case 320u: goto L_08AF58E4;
    case 321u: goto L_08AF58EC;
    case 322u: goto L_08AF58F4;
    case 323u: goto L_08AF58FC;
    case 324u: goto L_08AF5914;
    case 325u: goto L_08AF5918;
    case 326u: goto L_08AF5920;
    case 327u: goto L_08AF592C;
    case 328u: goto L_08AF5950;
    case 329u: goto L_08AF5958;
    case 330u: goto L_08AF5964;
    case 331u: goto L_08AF596C;
    case 332u: goto L_08AF5994;
    case 333u: goto L_08AF599C;
    case 334u: goto L_08AF59A4;
    case 335u: goto L_08AF59AC;
    case 336u: goto L_08AF59B8;
    case 337u: goto L_08AF59C0;
    case 338u: goto L_08AF59D0;
    case 339u: goto L_08AF59DC;
    case 340u: goto L_08AF59E8;
    case 341u: goto L_08AF5A1C;
    case 342u: goto L_08AF5A48;
    case 343u: goto L_08AF5A54;
    case 344u: goto L_08AF5AA4;
    case 345u: goto L_08AF5ABC;
    case 346u: goto L_08AF5AE4;
    case 347u: goto L_08AF5B0C;
    case 348u: goto L_08AF5B14;
    case 349u: goto L_08AF5B1C;
    case 350u: goto L_08AF5B24;
    case 351u: goto L_08AF5B40;
    case 352u: goto L_08AF5B58;
    case 353u: goto L_08AF5B68;
    case 354u: goto L_08AF5B7C;
    case 355u: goto L_08AF5B90;
    case 356u: goto L_08AF5BC0;
    case 357u: goto L_08AF5BD4;
    case 358u: goto L_08AF5BE0;
    case 359u: goto L_08AF5BF0;
    case 360u: goto L_08AF5BFC;
    case 361u: goto L_08AF5C24;
    case 362u: goto L_08AF5C8C;
    case 363u: goto L_08AF5C94;
    case 364u: goto L_08AF5C9C;
    case 365u: goto L_08AF5CC0;
    case 366u: goto L_08AF5CD4;
    case 367u: goto L_08AF5CE4;
    case 368u: goto L_08AF5CF0;
    case 369u: goto L_08AF5CF4;
    case 370u: goto L_08AF5D04;
    case 371u: goto L_08AF5D10;
    case 372u: goto L_08AF5D34;
    case 373u: goto L_08AF5D48;
    case 374u: goto L_08AF5D50;
    case 375u: goto L_08AF5D58;
    case 376u: goto L_08AF5D60;
    case 377u: goto L_08AF5D84;
    case 378u: goto L_08AF5D9C;
    case 379u: goto L_08AF5DC4;
    case 380u: goto L_08AF5DD0;
    case 381u: goto L_08AF5DEC;
    case 382u: goto L_08AF5DFC;
    case 383u: goto L_08AF5E08;
    case 384u: goto L_08AF5E10;
    case 385u: goto L_08AF5E24;
    case 386u: goto L_08AF5E2C;
    case 387u: goto L_08AF5E34;
    case 388u: goto L_08AF5E3C;
    case 389u: goto L_08AF5E48;
    case 390u: goto L_08AF5E50;
    case 391u: goto L_08AF5E94;
    case 392u: goto L_08AF5E9C;
    case 393u: goto L_08AF5EC0;
    case 394u: goto L_08AF5ECC;
    case 395u: goto L_08AF5ED4;
    case 396u: goto L_08AF5EE0;
    case 397u: goto L_08AF5F08;
    case 398u: goto L_08AF5F10;
    case 399u: goto L_08AF5F18;
    case 400u: goto L_08AF5F24;
    case 401u: goto L_08AF5F4C;
    case 402u: goto L_08AF5F50;
    case 403u: goto L_08AF5F54;
    case 404u: goto L_08AF5F60;
    case 405u: goto L_08AF5F70;
    case 406u: goto L_08AF5F80;
    case 407u: goto L_08AF5F88;
    case 408u: goto L_08AF5F98;
    case 409u: goto L_08AF5FC4;
    case 410u: goto L_08AF5FCC;
    case 411u: goto L_08AF5FD0;
    case 412u: goto L_08AF5FD4;
    case 413u: goto L_08AF601C;
    case 414u: goto L_08AF6024;
    case 415u: goto L_08AF602C;
    case 416u: goto L_08AF6030;
    case 417u: goto L_08AF6048;
    case 418u: goto L_08AF608C;
    case 419u: goto L_08AF6094;
    case 420u: goto L_08AF609C;
    case 421u: goto L_08AF60A4;
    case 422u: goto L_08AF60C8;
    case 423u: goto L_08AF60F0;
    case 424u: goto L_08AF60F8;
    case 425u: goto L_08AF6108;
    case 426u: goto L_08AF6118;
    case 427u: goto L_08AF614C;
    case 428u: goto L_08AF6158;
    case 429u: goto L_08AF6168;
    case 430u: goto L_08AF6170;
    case 431u: goto L_08AF6180;
    case 432u: goto L_08AF61B4;
    case 433u: goto L_08AF61C0;
    case 434u: goto L_08AF61DC;
    case 435u: goto L_08AF61E4;
    case 436u: goto L_08AF61F4;
    case 437u: goto L_08AF6238;
    case 438u: goto L_08AF6244;
    case 439u: goto L_08AF6258;
    case 440u: goto L_08AF6268;
    case 441u: goto L_08AF6274;
    case 442u: goto L_08AF6284;
    case 443u: goto L_08AF6288;
    case 444u: goto L_08AF629C;
    case 445u: goto L_08AF62A4;
    case 446u: goto L_08AF62C4;
    case 447u: goto L_08AF62CC;
    case 448u: goto L_08AF62DC;
    case 449u: goto L_08AF62E0;
    case 450u: goto L_08AF62F8;
    case 451u: goto L_08AF6300;
    case 452u: goto L_08AF630C;
    case 453u: goto L_08AF636C;
    case 454u: goto L_08AF6374;
    case 455u: goto L_08AF6378;
    case 456u: goto L_08AF6398;
    case 457u: goto L_08AF63A0;
    case 458u: goto L_08AF63A4;
    case 459u: goto L_08AF6408;
    case 460u: goto L_08AF6424;
    case 461u: goto L_08AF6448;
    case 462u: goto L_08AF6460;
    case 463u: goto L_08AF6468;
    case 464u: goto L_08AF647C;
    case 465u: goto L_08AF6488;
    case 466u: goto L_08AF64A8;
    case 467u: goto L_08AF64C0;
    case 468u: goto L_08AF64D8;
    case 469u: goto L_08AF64DC;
    case 470u: goto L_08AF64F0;
    case 471u: goto L_08AF64F8;
    case 472u: goto L_08AF6514;
    case 473u: goto L_08AF6520;
    case 474u: goto L_08AF6524;
    case 475u: goto L_08AF6530;
    case 476u: goto L_08AF653C;
    case 477u: goto L_08AF6544;
    case 478u: goto L_08AF6548;
    case 479u: goto L_08AF6554;
    case 480u: goto L_08AF655C;
    case 481u: goto L_08AF656C;
    case 482u: goto L_08AF65A0;
    case 483u: goto L_08AF65AC;
    case 484u: goto L_08AF65C0;
    case 485u: goto L_08AF65D0;
    case 486u: goto L_08AF65E8;
    case 487u: goto L_08AF65F4;
    case 488u: goto L_08AF6600;
    case 489u: goto L_08AF6604;
    case 490u: goto L_08AF660C;
    case 491u: goto L_08AF661C;
    case 492u: goto L_08AF6624;
    case 493u: goto L_08AF6640;
    case 494u: goto L_08AF6648;
    case 495u: goto L_08AF6658;
    case 496u: goto L_08AF667C;
    case 497u: goto L_08AF6684;
    case 498u: goto L_08AF6694;
    case 499u: goto L_08AF669C;
    case 500u: goto L_08AF66A4;
    case 501u: goto L_08AF66A8;
    case 502u: goto L_08AF66C0;
    case 503u: goto L_08AF66F0;
    case 504u: goto L_08AF6708;
    case 505u: goto L_08AF6718;
    case 506u: goto L_08AF6720;
    case 507u: goto L_08AF673C;
    case 508u: goto L_08AF6748;
    case 509u: goto L_08AF674C;
    case 510u: goto L_08AF6758;
    case 511u: goto L_08AF6760;
    case 512u: goto L_08AF6768;
    case 513u: goto L_08AF6770;
    case 514u: goto L_08AF6790;
    case 515u: goto L_08AF67C4;
    case 516u: goto L_08AF67D0;
    case 517u: goto L_08AF67DC;
    case 518u: goto L_08AF67EC;
    case 519u: goto L_08AF6808;
    case 520u: goto L_08AF6810;
    case 521u: goto L_08AF6818;
    case 522u: goto L_08AF681C;
    case 523u: goto L_08AF6824;
    case 524u: goto L_08AF6830;
    case 525u: goto L_08AF683C;
    case 526u: goto L_08AF6844;
    case 527u: goto L_08AF6864;
    case 528u: goto L_08AF686C;
    case 529u: goto L_08AF689C;
    case 530u: goto L_08AF68A4;
    case 531u: goto L_08AF68BC;
    case 532u: goto L_08AF68C8;
    case 533u: goto L_08AF68EC;
    case 534u: goto L_08AF6900;
    case 535u: goto L_08AF6908;
    case 536u: goto L_08AF6914;
    case 537u: goto L_08AF6924;
    case 538u: goto L_08AF6930;
    case 539u: goto L_08AF693C;
    case 540u: goto L_08AF694C;
    case 541u: goto L_08AF6968;
    case 542u: goto L_08AF6974;
    case 543u: goto L_08AF697C;
    case 544u: goto L_08AF6988;
    case 545u: goto L_08AF698C;
    case 546u: goto L_08AF699C;
    case 547u: goto L_08AF69C0;
    case 548u: goto L_08AF69D4;
    case 549u: goto L_08AF69E0;
    case 550u: goto L_08AF6A08;
    case 551u: goto L_08AF6A14;
    case 552u: goto L_08AF6A38;
    case 553u: goto L_08AF6A80;
    case 554u: goto L_08AF6A8C;
    case 555u: goto L_08AF6AB0;
    case 556u: goto L_08AF6AB8;
    case 557u: goto L_08AF6ADC;
    case 558u: goto L_08AF6AE4;
    case 559u: goto L_08AF6AF4;
    case 560u: goto L_08AF6AF8;
    case 561u: goto L_08AF6B00;
    case 562u: goto L_08AF6B08;
    case 563u: goto L_08AF6B14;
    case 564u: goto L_08AF6B30;
    case 565u: goto L_08AF6B38;
    case 566u: goto L_08AF6B40;
    case 567u: goto L_08AF6B4C;
    case 568u: goto L_08AF6B58;
    case 569u: goto L_08AF6B7C;
    case 570u: goto L_08AF6B88;
    case 571u: goto L_08AF6BA8;
    case 572u: goto L_08AF6BBC;
    case 573u: goto L_08AF6BC0;
    case 574u: goto L_08AF6C1C;
    case 575u: goto L_08AF6C28;
    case 576u: goto L_08AF6C34;
    case 577u: goto L_08AF6C40;
    case 578u: goto L_08AF6C50;
    case 579u: goto L_08AF6C64;
    case 580u: goto L_08AF6C6C;
    case 581u: goto L_08AF6C84;
    case 582u: goto L_08AF6C88;
    case 583u: goto L_08AF6C8C;
    case 584u: goto L_08AF6C94;
    case 585u: goto L_08AF6CB0;
    case 586u: goto L_08AF6CB8;
    case 587u: goto L_08AF6CC0;
    case 588u: goto L_08AF6CDC;
    case 589u: goto L_08AF6CE8;
    case 590u: goto L_08AF6CFC;
    case 591u: goto L_08AF6D08;
    case 592u: goto L_08AF6D10;
    case 593u: goto L_08AF6D1C;
    case 594u: goto L_08AF6D20;
    case 595u: goto L_08AF6D48;
    case 596u: goto L_08AF6D54;
    case 597u: goto L_08AF6D5C;
    case 598u: goto L_08AF6D68;
    case 599u: goto L_08AF6D6C;
    case 600u: goto L_08AF6D80;
    case 601u: goto L_08AF6D88;
    case 602u: goto L_08AF6D98;
    case 603u: goto L_08AF6DB4;
    case 604u: goto L_08AF6DB8;
    case 605u: goto L_08AF6DBC;
    case 606u: goto L_08AF6DC4;
    case 607u: goto L_08AF6DD4;
    case 608u: goto L_08AF6DEC;
    case 609u: goto L_08AF6DF8;
    case 610u: goto L_08AF6E00;
    case 611u: goto L_08AF6E1C;
    case 612u: goto L_08AF6E28;
    case 613u: goto L_08AF6E54;
    case 614u: goto L_08AF6E60;
    case 615u: goto L_08AF6E64;
    case 616u: goto L_08AF6E6C;
    case 617u: goto L_08AF6E98;
    case 618u: goto L_08AF6EA4;
    case 619u: goto L_08AF6EC0;
    case 620u: goto L_08AF6EC4;
    case 621u: goto L_08AF6ED0;
    case 622u: goto L_08AF6EDC;
    case 623u: goto L_08AF6F10;
    case 624u: goto L_08AF6F1C;
    case 625u: goto L_08AF6F38;
    case 626u: goto L_08AF6F44;
    case 627u: goto L_08AF6F54;
    case 628u: goto L_08AF6F64;
    case 629u: goto L_08AF6F68;
    case 630u: goto L_08AF6F70;
    case 631u: goto L_08AF6F78;
    case 632u: goto L_08AF6F84;
    case 633u: goto L_08AF6F94;
    case 634u: goto L_08AF6F9C;
    case 635u: goto L_08AF6FA8;
    case 636u: goto L_08AF6FB4;
    case 637u: goto L_08AF6FBC;
    case 638u: goto L_08AF6FC8;
    case 639u: goto L_08AF6FCC;
    case 640u: goto L_08AF6FD4;
    case 641u: goto L_08AF6FDC;
    case 642u: goto L_08AF6FE4;
    case 643u: goto L_08AF6FE8;
    case 644u: goto L_08AF6FF4;
    case 645u: goto L_08AF7008;
    case 646u: goto L_08AF7020;
    case 647u: goto L_08AF7034;
    case 648u: goto L_08AF7048;
    case 649u: goto L_08AF7050;
    case 650u: goto L_08AF7054;
    case 651u: goto L_08AF705C;
    case 652u: goto L_08AF7064;
    case 653u: goto L_08AF706C;
    case 654u: goto L_08AF707C;
    case 655u: goto L_08AF7080;
    case 656u: goto L_08AF7084;
    case 657u: goto L_08AF708C;
    case 658u: goto L_08AF709C;
    case 659u: goto L_08AF70A0;
    case 660u: goto L_08AF70A8;
    case 661u: goto L_08AF70C0;
    case 662u: goto L_08AF70CC;
    case 663u: goto L_08AF70D0;
    case 664u: goto L_08AF711C;
    case 665u: goto L_08AF7128;
    case 666u: goto L_08AF7134;
    case 667u: goto L_08AF713C;
    case 668u: goto L_08AF714C;
    case 669u: goto L_08AF7160;
    case 670u: goto L_08AF7164;
    case 671u: goto L_08AF7174;
    case 672u: goto L_08AF7178;
    case 673u: goto L_08AF717C;
    case 674u: goto L_08AF718C;
    case 675u: goto L_08AF7194;
    case 676u: goto L_08AF719C;
    case 677u: goto L_08AF71A4;
    case 678u: goto L_08AF71C0;
    case 679u: goto L_08AF71C8;
    case 680u: goto L_08AF71CC;
    case 681u: goto L_08AF71D4;
    case 682u: goto L_08AF71E0;
    case 683u: goto L_08AF71E4;
    case 684u: goto L_08AF71EC;
    case 685u: goto L_08AF71F8;
    case 686u: goto L_08AF7204;
    case 687u: goto L_08AF720C;
    case 688u: goto L_08AF7238;
    case 689u: goto L_08AF7264;
    case 690u: goto L_08AF7278;
    case 691u: goto L_08AF7284;
    case 692u: goto L_08AF7298;
    case 693u: goto L_08AF72B0;
    case 694u: goto L_08AF72C0;
    case 695u: goto L_08AF72D4;
    case 696u: goto L_08AF72E0;
    case 697u: goto L_08AF72F0;
    case 698u: goto L_08AF72F8;
    case 699u: goto L_08AF7308;
    case 700u: goto L_08AF7310;
    case 701u: goto L_08AF731C;
    case 702u: goto L_08AF733C;
    case 703u: goto L_08AF7344;
    case 704u: goto L_08AF734C;
    case 705u: goto L_08AF7350;
    case 706u: goto L_08AF7358;
    case 707u: goto L_08AF7364;
    case 708u: goto L_08AF736C;
    case 709u: goto L_08AF7374;
    case 710u: goto L_08AF737C;
    case 711u: goto L_08AF73A4;
    case 712u: goto L_08AF73B4;
    case 713u: goto L_08AF73D0;
    case 714u: goto L_08AF73D8;
    case 715u: goto L_08AF73DC;
    case 716u: goto L_08AF73EC;
    case 717u: goto L_08AF740C;
    case 718u: goto L_08AF741C;
    case 719u: goto L_08AF7438;
    case 720u: goto L_08AF7440;
    case 721u: goto L_08AF7444;
    case 722u: goto L_08AF7450;
    case 723u: goto L_08AF7454;
    case 724u: goto L_08AF747C;
    case 725u: goto L_08AF7488;
    case 726u: goto L_08AF7498;
    case 727u: goto L_08AF74A0;
    case 728u: goto L_08AF74A8;
    case 729u: goto L_08AF74C0;
    case 730u: goto L_08AF757C;
    case 731u: goto L_08AF75BC;
    case 732u: goto L_08AF75CC;
    case 733u: goto L_08AF75DC;
    case 734u: goto L_08AF75E4;
    case 735u: goto L_08AF75F4;
    case 736u: goto L_08AF7600;
    case 737u: goto L_08AF7608;
    case 738u: goto L_08AF7618;
    case 739u: goto L_08AF7630;
    case 740u: goto L_08AF763C;
    case 741u: goto L_08AF764C;
    case 742u: goto L_08AF7654;
    case 743u: goto L_08AF7688;
    case 744u: goto L_08AF7690;
    case 745u: goto L_08AF7698;
    case 746u: goto L_08AF76D4;
    case 747u: goto L_08AF76E8;
    case 748u: goto L_08AF7704;
    case 749u: goto L_08AF7710;
    case 750u: goto L_08AF7714;
    case 751u: goto L_08AF7724;
    case 752u: goto L_08AF7758;
    case 753u: goto L_08AF7764;
    case 754u: goto L_08AF7770;
    case 755u: goto L_08AF777C;
    case 756u: goto L_08AF7780;
    case 757u: goto L_08AF7790;
    case 758u: goto L_08AF7798;
    case 759u: goto L_08AF77A4;
    case 760u: goto L_08AF77AC;
    case 761u: goto L_08AF77B4;
    case 762u: goto L_08AF77C4;
    case 763u: goto L_08AF77CC;
    case 764u: goto L_08AF77D8;
    case 765u: goto L_08AF77E4;
    case 766u: goto L_08AF77F8;
    case 767u: goto L_08AF780C;
    case 768u: goto L_08AF7828;
    case 769u: goto L_08AF7830;
    case 770u: goto L_08AF7850;
    case 771u: goto L_08AF7858;
    case 772u: goto L_08AF7870;
    case 773u: goto L_08AF7878;
    case 774u: goto L_08AF7880;
    case 775u: goto L_08AF78E0;
    case 776u: goto L_08AF78FC;
    case 777u: goto L_08AF7998;
    case 778u: goto L_08AF79A4;
    case 779u: goto L_08AF79C4;
    case 780u: goto L_08AF79FC;
    case 781u: goto L_08AF7A10;
    case 782u: goto L_08AF7A34;
    case 783u: goto L_08AF7A3C;
    case 784u: goto L_08AF7A48;
    case 785u: goto L_08AF7A4C;
    case 786u: goto L_08AF7A5C;
    case 787u: goto L_08AF7A68;
    case 788u: goto L_08AF7A7C;
    case 789u: goto L_08AF7A8C;
    case 790u: goto L_08AF7AA8;
    case 791u: goto L_08AF7AAC;
    case 792u: goto L_08AF7AD4;
    case 793u: goto L_08AF7AE0;
    case 794u: goto L_08AF7AE8;
    case 795u: goto L_08AF7AFC;
    case 796u: goto L_08AF7B18;
    case 797u: goto L_08AF7B34;
    case 798u: goto L_08AF7B3C;
    case 799u: goto L_08AF7B44;
    case 800u: goto L_08AF7B5C;
    case 801u: goto L_08AF7B6C;
    case 802u: goto L_08AF7B88;
    case 803u: goto L_08AF7BC4;
    case 804u: goto L_08AF7BCC;
    case 805u: goto L_08AF7BDC;
    case 806u: goto L_08AF7BF0;
    case 807u: goto L_08AF7C00;
    case 808u: goto L_08AF7C1C;
    case 809u: goto L_08AF7C24;
    case 810u: goto L_08AF7C4C;
    case 811u: goto L_08AF7C68;
    case 812u: goto L_08AF7C70;
    case 813u: goto L_08AF7CA0;
    case 814u: goto L_08AF7CAC;
    case 815u: goto L_08AF7CC4;
    case 816u: goto L_08AF7CCC;
    case 817u: goto L_08AF7CE8;
    case 818u: goto L_08AF7CEC;
    case 819u: goto L_08AF7D04;
    case 820u: goto L_08AF7D0C;
    case 821u: goto L_08AF7D20;
    case 822u: goto L_08AF7D50;
    case 823u: goto L_08AF7D6C;
    case 824u: goto L_08AF7D70;
    case 825u: goto L_08AF7D8C;
    case 826u: goto L_08AF7DA4;
    case 827u: goto L_08AF7DAC;
    case 828u: goto L_08AF7DC8;
    case 829u: goto L_08AF7DCC;
    case 830u: goto L_08AF7DE8;
    case 831u: goto L_08AF7DFC;
    case 832u: goto L_08AF7E2C;
    case 833u: goto L_08AF7E48;
    case 834u: goto L_08AF7E50;
    case 835u: goto L_08AF7E5C;
    case 836u: goto L_08AF7E6C;
    case 837u: goto L_08AF7E80;
    case 838u: goto L_08AF7E8C;
    case 839u: goto L_08AF7EA8;
    case 840u: goto L_08AF7EB0;
    case 841u: goto L_08AF7EC0;
    case 842u: goto L_08AF7EDC;
    case 843u: goto L_08AF7F0C;
    case 844u: goto L_08AF7F28;
    case 845u: goto L_08AF7F38;
    case 846u: goto L_08AF7F48;
    case 847u: goto L_08AF7F5C;
    case 848u: goto L_08AF7F78;
    case 849u: goto L_08AF7F9C;
    case 850u: goto L_08AF7FAC;
    case 851u: goto L_08AF7FB8;
    case 852u: goto L_08AF7FD4;
    case 853u: goto L_08AF7FE4;
    case 854u: goto L_08AF7FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AF4004:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AF4020;
      }
      goto L_08AF4010;
    }
L_08AF4010:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5592)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF4020;
      }
      goto L_08AF401C;
    }
L_08AF401C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08AF4020;
L_08AF4020:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4034:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5592), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF4060u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 462u, 0x08AEA1DCu>(ctx, &aot_mem) && ctx.pc == 0x08AF4060u) goto L_08AF4060;
    return;
L_08AF4060:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AF407C;
      }
      goto L_08AF406C;
    }
L_08AF406C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5592)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF407C;
      }
      goto L_08AF4078;
    }
L_08AF4078:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08AF407C;
L_08AF407C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4090:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5592), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF40BCu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 526u, 0x08AEA4C4u>(ctx, &aot_mem) && ctx.pc == 0x08AF40BCu) goto L_08AF40BC;
    return;
L_08AF40BC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AF40D8;
      }
      goto L_08AF40C8;
    }
L_08AF40C8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5592)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF40D8;
      }
      goto L_08AF40D4;
    }
L_08AF40D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08AF40D8;
L_08AF40D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF40EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5592), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF4110u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 508u, 0x08AEA3CCu>(ctx, &aot_mem) && ctx.pc == 0x08AF4110u) goto L_08AF4110;
    return;
L_08AF4110:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AF412C;
      }
      goto L_08AF411C;
    }
L_08AF411C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5592)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF412C;
      }
      goto L_08AF4128;
    }
L_08AF4128:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08AF412C;
L_08AF412C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4140:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5592), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF416Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 541u, 0x08AEA568u>(ctx, &aot_mem) && ctx.pc == 0x08AF416Cu) goto L_08AF416C;
    return;
L_08AF416C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AF4188;
      }
      goto L_08AF4178;
    }
L_08AF4178:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5592)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF4188;
      }
      goto L_08AF4184;
    }
L_08AF4184:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08AF4188;
L_08AF4188:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF419C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    goto L_08AF41A4;
L_08AF41A4:
    ctx.gpr[31] = (0x08AF41ACu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 493u, 0x08AEA30Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF41ACu) goto L_08AF41AC;
    return;
L_08AF41AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF41A4;
      }
      goto L_08AF41B4;
    }
L_08AF41B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF41BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF41C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_08AF4204;
      }
      goto L_08AF41D8;
    }
L_08AF41D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08AF41ECu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 666u, 0x08AA31E0u>(ctx, &aot_mem) && ctx.pc == 0x08AF41ECu) goto L_08AF41EC;
    return;
L_08AF41EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08AF4278;
      }
      goto L_08AF4200;
    }
L_08AF4200:
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    goto L_08AF4204;
L_08AF4204:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08AF4230;
    }
    goto L_08AF4214;
L_08AF4214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4230:
    ctx.gpr[6] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08AF4250u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 666u, 0x08AA31E0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4250u) goto L_08AF4250;
    return;
L_08AF4250:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AF4278;
      }
      goto L_08AF425C;
    }
L_08AF425C:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4278:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4288:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF42B4;
      }
      goto L_08AF4290;
    }
L_08AF4290:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AF42B4;
L_08AF42B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF42BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_08AF42D4;
L_08AF42D4:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[11] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[11] = (ctx.gpr[11] >> 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[11] = (ctx.gpr[7] >> 16u);
    ctx.gpr[2] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[7] << 16u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[7] = (ctx.gpr[7] >> 16u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF42D4;
      }
      goto L_08AF4328;
    }
L_08AF4328:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF43A8;
      }
      goto L_08AF4330;
    }
L_08AF4330:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[10] << 2u);
        goto L_08AF4398;
    }
    goto L_08AF4340;
L_08AF4340:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AF435Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08AF41C4;
L_08AF435C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08AF437Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF437Cu) goto L_08AF437C;
    return;
L_08AF437C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08AF4388u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08AF4288;
L_08AF4388:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[10] << 2u);
    goto L_08AF4398;
L_08AF4398:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    goto L_08AF43A8;
L_08AF43A8:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF43BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (0u | 9u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF4418;
      }
      goto L_08AF4408;
    }
L_08AF4408:
    ctx.gpr[6] = (ctx.gpr[6] << 1u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF4408;
      }
      goto L_08AF4418;
    }
L_08AF4418:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF4428u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08AF41C4;
L_08AF4428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[20] = (0u | 9u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF4484;
      }
      goto L_08AF4444;
    }
L_08AF4444:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AF444C;
L_08AF444C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF4468u);
    ctx.gpr[6] = (0u | 10u);
    goto L_08AF42BC;
L_08AF4468:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF444C;
      }
      goto L_08AF4478;
    }
L_08AF4478:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF448C;
      }
      goto L_08AF4484;
    }
L_08AF4484:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    goto L_08AF448C;
L_08AF448C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF44C0;
      }
      goto L_08AF4494;
    }
L_08AF4494:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    goto L_08AF4498;
L_08AF4498:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF44B0u);
    ctx.gpr[6] = (0u | 10u);
    goto L_08AF42BC;
L_08AF44B0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
        goto L_08AF4498;
    }
    goto L_08AF44C0;
L_08AF44C0:
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
L_08AF44E0:
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF44F8;
      }
      goto L_08AF44F0;
    }
L_08AF44F0:
    ctx.gpr[2] = (0u | 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    goto L_08AF44F8;
L_08AF44F8:
    ctx.gpr[5] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (61440u << 16u);
      if (branch_taken) {
          goto L_08AF4510;
      }
      goto L_08AF4508;
    }
L_08AF4508:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    goto L_08AF4510;
L_08AF4510:
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (49152u << 16u);
      if (branch_taken) {
          goto L_08AF4524;
      }
      goto L_08AF451C;
    }
L_08AF451C:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    goto L_08AF4524;
L_08AF4524:
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (32768u << 16u);
      if (branch_taken) {
          goto L_08AF4538;
      }
      goto L_08AF4530;
    }
L_08AF4530:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    goto L_08AF4538;
L_08AF4538:
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (16384u << 16u);
      if (branch_taken) {
          goto L_08AF4558;
      }
      goto L_08AF4544;
    }
L_08AF4544:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF4558;
      }
      goto L_08AF4550;
    }
L_08AF4550:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 32u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4558:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4560:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] & 7u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08AF45A8;
      }
      goto L_08AF4570;
    }
L_08AF4570:
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 2u);
      if (branch_taken) {
          goto L_08AF4594;
      }
      goto L_08AF457C;
    }
L_08AF457C:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] >> 2u);
        goto L_08AF459C;
    }
    goto L_08AF4584;
L_08AF4584:
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4594:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF459C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 2u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF45A8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF45B8;
      }
      goto L_08AF45B0;
    }
L_08AF45B0:
    ctx.gpr[2] = (0u | 16u);
    ctx.gpr[5] = (ctx.gpr[5] >> 16u);
    goto L_08AF45B8;
L_08AF45B8:
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 15u);
      if (branch_taken) {
          goto L_08AF45D0;
      }
      goto L_08AF45C4;
    }
L_08AF45C4:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[5] & 15u);
    goto L_08AF45D0;
L_08AF45D0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 3u);
      if (branch_taken) {
          goto L_08AF45E4;
      }
      goto L_08AF45D8;
    }
L_08AF45D8:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    ctx.gpr[6] = (ctx.gpr[5] & 3u);
    goto L_08AF45E4;
L_08AF45E4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08AF45F8;
      }
      goto L_08AF45EC;
    }
L_08AF45EC:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[5] >> 2u);
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
    goto L_08AF45F8;
L_08AF45F8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF4614;
      }
      goto L_08AF4600;
    }
L_08AF4600:
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF4614;
      }
      goto L_08AF460C;
    }
L_08AF460C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 32u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4614:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF461C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF463Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08AF41C4;
L_08AF463C:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4658:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF467C;
      }
      goto L_08AF4674;
    }
L_08AF4674:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08AF467C;
L_08AF467C:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[8] << 2u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_08AF46A0;
    }
    goto L_08AF46A0;
L_08AF46A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[31] = (0x08AF46C0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08AF41C4;
L_08AF46C0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[3] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[12] = (ctx.gpr[9] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AF4700;
      }
      goto L_08AF46EC;
    }
L_08AF46EC:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), 0u);
    goto L_08AF46F0;
L_08AF46F0:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[12] = (ctx.gpr[9] < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[12] != 0u) {
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), 0u);
        goto L_08AF46F0;
    }
    goto L_08AF4700;
L_08AF4700:
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (ctx.gpr[9] << 2u);
    ctx.gpr[3] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[6]);
    ctx.gpr[11] = (ctx.gpr[3] + ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[10] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF4834;
      }
      goto L_08AF4728;
    }
L_08AF4728:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[13] & 65535u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.gpr[9] = (ctx.gpr[3] | 0u);
      if (branch_taken) {
          goto L_08AF47A8;
      }
      goto L_08AF4738;
    }
L_08AF4738:
    ctx.gpr[13] = (ctx.gpr[5] | 0u);
    ctx.gpr[12] = (0u | 0u);
    goto L_08AF4740;
L_08AF4740:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (ctx.gpr[15] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[25])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[15] = (ctx.gpr[15] >> 16u);
    ctx.gpr[25] = (ctx.gpr[24] & 65535u);
    ctx.gpr[24] = (ctx.gpr[24] >> 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[15] = (ctx.gpr[31] + ctx.gpr[25]);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[12]);
    ctx.gpr[12] = (ctx.gpr[15] >> 16u);
    ctx.gpr[25] = (ctx.lo);
    ctx.gpr[24] = (ctx.gpr[25] + ctx.gpr[24]);
    ctx.gpr[12] = (ctx.gpr[24] + ctx.gpr[12]);
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[12]));
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.gpr[12] = (ctx.gpr[12] >> 16u);
    ctx.gpr[15] = (ctx.gpr[9] < ctx.gpr[11] ? 1u : 0u);
    goto L_08AF4798;
L_08AF4798:
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF4740;
      }
      goto L_08AF47A0;
    }
L_08AF47A0:
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    goto L_08AF47A8;
L_08AF47A8:
    ctx.gpr[14] = (ctx.gpr[13] >> 16u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.gpr[13] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF4824;
      }
      goto L_08AF47B4;
    }
L_08AF47B4:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[3] | 0u);
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[15] = (ctx.gpr[24] | 0u);
    goto L_08AF47C4;
L_08AF47C4:
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.gpr[25] = (ctx.gpr[25] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[25])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[24] = (ctx.gpr[24] >> 16u);
    ctx.gpr[15] = (ctx.lo);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[24]);
    ctx.gpr[12] = (ctx.gpr[15] + ctx.gpr[12]);
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(4));
    ctx.gpr[15] = (ctx.gpr[15] >> 16u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[15] = (ctx.gpr[12] >> 16u);
    ctx.gpr[12] = (ctx.gpr[24] & 65535u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[25] = (ctx.lo);
    ctx.gpr[12] = (ctx.gpr[25] + ctx.gpr[12]);
    ctx.gpr[15] = (ctx.gpr[12] + ctx.gpr[15]);
    ctx.gpr[25] = (ctx.gpr[9] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.gpr[12] = (ctx.gpr[15] >> 16u);
      if (branch_taken) {
          goto L_08AF47C4;
      }
      goto L_08AF4820;
    }
L_08AF4820:
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[15]);
    goto L_08AF4824;
L_08AF4824:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (ctx.gpr[10] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF4728;
      }
      goto L_08AF4834;
    }
L_08AF4834:
    ctx.gpr[13] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_08AF4838;
L_08AF4838:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08AF4854;
      }
      goto L_08AF4840;
    }
L_08AF4840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF4854;
      }
      goto L_08AF484C;
    }
L_08AF484C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF4838;
      }
      goto L_08AF4854;
    }
L_08AF4854:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4864:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] & 3u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AF48BC;
      }
      goto L_08AF4894;
    }
L_08AF4894:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22224));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF48B8u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF42BC;
L_08AF48B8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08AF48BC;
L_08AF48BC:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 2u));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AF4954;
      }
      goto L_08AF48C8;
    }
L_08AF48C8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (ctx.gpr[19] & 1u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 1u));
      if (branch_taken) {
          goto L_08AF48F0;
      }
      goto L_08AF48D8;
    }
L_08AF48D8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AF48E4u);
    ctx.gpr[5] = (0u | 625u);
    goto L_08AF461C;
L_08AF48E4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    goto L_08AF48F0;
L_08AF48F0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AF4914;
      }
      goto L_08AF48F8;
    }
L_08AF48F8:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF4904u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08AF4658;
L_08AF4904:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AF4910u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AF4288;
L_08AF4910:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08AF4914;
L_08AF4914:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AF4954;
      }
      goto L_08AF491C;
    }
L_08AF491C:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[19] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
      if (branch_taken) {
          goto L_08AF494C;
      }
      goto L_08AF4930;
    }
L_08AF4930:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AF4940u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08AF4658;
L_08AF4940:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08AF494C;
L_08AF494C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF48F0;
      }
      goto L_08AF4954;
    }
L_08AF4954:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08AF4978:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[11] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 5u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[11] | 0u);
      if (branch_taken) {
          goto L_08AF49BC;
      }
      goto L_08AF49AC;
    }
L_08AF49AC:
    ctx.gpr[9] = (ctx.gpr[9] << 1u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF49AC;
      }
      goto L_08AF49BC;
    }
L_08AF49BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[31] = (0x08AF49DCu);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    goto L_08AF41C4;
L_08AF49DC:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AF4A14;
      }
      goto L_08AF4A00;
    }
L_08AF4A00:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF4A00;
      }
      goto L_08AF4A14;
    }
L_08AF4A14:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] & 31u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08AF4A70;
      }
      goto L_08AF4A2C;
    }
L_08AF4A2C:
    ctx.gpr[3] = (0u | 32u);
    ctx.gpr[3] = (ctx.gpr[3] - ctx.gpr[6]);
    ctx.gpr[11] = (0u | 0u);
    goto L_08AF4A38;
L_08AF4A38:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[12] << (ctx.gpr[6] & 31u));
    ctx.gpr[11] = (ctx.gpr[12] | ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[12] = (ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] >> (ctx.gpr[3] & 31u));
      if (branch_taken) {
          goto L_08AF4A38;
      }
      goto L_08AF4A60;
    }
L_08AF4A60:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF4A88;
      }
      goto L_08AF4A68;
    }
L_08AF4A68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF4A88;
      }
      goto L_08AF4A70;
    }
L_08AF4A70:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF4A70;
      }
      goto L_08AF4A88;
    }
L_08AF4A88:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF4AA0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08AF4288;
L_08AF4AA0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4AAC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AF4AE0;
      }
      goto L_08AF4AC0;
    }
L_08AF4AC0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08AF4AE8;
      }
      goto L_08AF4AE0;
    }
L_08AF4AE0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4AE8:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF4B1C;
      }
      goto L_08AF4AFC;
    }
L_08AF4AFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08AF4B14;
    }
    goto L_08AF4B14;
L_08AF4B14:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4B1C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08AF4B2C;
      }
      goto L_08AF4B24;
    }
L_08AF4B24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08AF4AE8;
      }
      goto L_08AF4B2C;
    }
L_08AF4B2C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4B34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[11] = (ctx.gpr[5] | 0u);
    ctx.gpr[3] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[11] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF4B54u);
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    goto L_08AF4AAC;
L_08AF4B54:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF4B84;
      }
      goto L_08AF4B60;
    }
L_08AF4B60:
    ctx.gpr[4] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF4B6Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AF41C4;
L_08AF4B6C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4B84:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF4BAC;
      }
      goto L_08AF4B8C;
    }
L_08AF4B8C:
    ctx.gpr[4] = (ctx.gpr[11] | 0u);
    ctx.gpr[11] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[11] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[10] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08AF4BB8;
      }
      goto L_08AF4BAC;
    }
L_08AF4BAC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[11] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (ctx.gpr[10] + static_cast<std::uint32_t>(20));
    goto L_08AF4BB8;
L_08AF4BB8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF4BD8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08AF41C4;
L_08AF4BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[9] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.gpr[3] = (0u | 0u);
    goto L_08AF4C10;
L_08AF4C10:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[10] & 65535u);
    ctx.gpr[13] = (ctx.gpr[11] & 65535u);
    ctx.gpr[12] = (ctx.gpr[12] - ctx.gpr[13]);
    ctx.gpr[13] = (ctx.gpr[12] + ctx.gpr[3]);
    ctx.gpr[10] = (ctx.gpr[10] >> 16u);
    ctx.gpr[11] = (ctx.gpr[11] >> 16u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 16u));
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[3]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[12] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[12] | 0u);
    ctx.gpr[3] = (ctx.gpr[11] | 0u);
    ctx.gpr[13] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08AF4C10;
      }
      goto L_08AF4C68;
    }
L_08AF4C68:
    ctx.gpr[5] = (ctx.gpr[12] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(-4));
        goto L_08AF4CB8;
    }
    goto L_08AF4C74;
L_08AF4C74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[11]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[6] >> 16u);
    ctx.gpr[11] = (ctx.gpr[6] + ctx.gpr[10]);
    ctx.gpr[12] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[8] = (ctx.gpr[12] | 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08AF4C74;
      }
      goto L_08AF4CB4;
    }
L_08AF4CB4:
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(-4));
    goto L_08AF4CB8;
L_08AF4CB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF4CD4;
      }
      goto L_08AF4CC4;
    }
L_08AF4CC4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF4CC4;
      }
      goto L_08AF4CD4;
    }
L_08AF4CD4:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4CE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32752u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (832u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[4] = (0u - ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AF4D24;
      }
      goto L_08AF4D0C;
    }
L_08AF4D0C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4D24:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 20u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_08AF4D54;
      }
      goto L_08AF4D34;
    }
L_08AF4D34:
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> (ctx.gpr[4] & 31u)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4D54:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 31 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF4D74;
      }
      goto L_08AF4D64;
    }
L_08AF4D64:
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] << (ctx.gpr[4] & 31u));
    goto L_08AF4D74;
L_08AF4D74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4D88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-4));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF4DB8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08AF44E0;
L_08AF4DB8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[11] = (0u | 32u);
    ctx.gpr[4] = (ctx.gpr[11] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[5]) < 11 ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[9] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16368u << 16u);
      if (branch_taken) {
          goto L_08AF4E24;
      }
      goto L_08AF4DD8;
    }
L_08AF4DD8:
    ctx.gpr[8] = (0u | 11u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[5]);
    ctx.gpr[9] = (ctx.gpr[6] >> (ctx.gpr[8] & 31u));
    ctx.gpr[4] = (ctx.gpr[9] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF4DFC;
      }
      goto L_08AF4DF4;
    }
L_08AF4DF4:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AF4DFC;
L_08AF4DFC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21));
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] >> (ctx.gpr[8] & 31u));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4E24:
    ctx.gpr[2] = (ctx.gpr[10] | 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF4E3C;
      }
      goto L_08AF4E30;
    }
L_08AF4E30:
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-4));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08AF4E3C;
L_08AF4E3C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
        goto L_08AF4E98;
    }
    goto L_08AF4E48;
L_08AF4E48:
    ctx.gpr[6] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[11] - ctx.gpr[5]);
    ctx.gpr[11] = (ctx.gpr[10] >> (ctx.gpr[4] & 31u));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[9] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF4E74;
      }
      goto L_08AF4E6C;
    }
L_08AF4E6C:
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AF4E74;
L_08AF4E74:
    ctx.gpr[5] = (ctx.gpr[10] << (ctx.gpr[5] & 31u));
    ctx.gpr[4] = (ctx.gpr[6] >> (ctx.gpr[4] & 31u));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4E98:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4EB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF4ED4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08AF41C4;
L_08AF4ED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[10] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.gpr[3] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (ctx.gpr[3] + static_cast<std::uint32_t>(20));
    ctx.gpr[10] = (ctx.gpr[10] >> 20u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AF4F20;
      }
      goto L_08AF4F10;
    }
L_08AF4F10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08AF4F20;
L_08AF4F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF4F90;
      }
      goto L_08AF4F2C;
    }
L_08AF4F2C:
    ctx.gpr[31] = (0x08AF4F34u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_08AF4560;
L_08AF4F34:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF4F6C;
      }
      goto L_08AF4F44;
    }
L_08AF4F44:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[2] = (0u | 32u);
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] << (ctx.gpr[2] & 31u));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] >> (ctx.gpr[5] & 31u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AF4F74;
      }
      goto L_08AF4F6C;
    }
L_08AF4F6C:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AF4F74;
L_08AF4F74:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (0u | 2u);
        goto L_08AF4F88;
    }
    goto L_08AF4F88;
L_08AF4F88:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AF4FB0;
      }
      goto L_08AF4F90;
    }
L_08AF4F90:
    ctx.gpr[31] = (0x08AF4F98u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_08AF4560;
L_08AF4F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[5]);
    goto L_08AF4FB0;
L_08AF4FB0:
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1074));
        goto L_08AF4FDC;
    }
    goto L_08AF4FB8;
L_08AF4FB8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1075));
    ctx.gpr[6] = (0u | 53u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4FDC:
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[11] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08AF4FF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    goto L_08AF44E0;
L_08AF4FF0:
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF500C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[12] = (ctx.gpr[5] | 0u);
    ctx.gpr[13] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF5024u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08AF4D88;
L_08AF5024:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08AF5038u);
    ctx.gpr[4] = (ctx.gpr[12] | 0u);
    goto L_08AF4D88;
L_08AF5038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF508C;
      }
      goto L_08AF5064;
    }
L_08AF5064:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] << 20u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AF50B4;
      }
      goto L_08AF508C;
    }
L_08AF508C:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] << 20u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AF50B4;
L_08AF50B4:
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AF50D0u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    goto L_08AF656C;
L_08AF50D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF50DC:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[12])) && ctx.fpr[12] == ctx.fpr[12]));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AF5188;
      }
      goto L_08AF50EC;
    }
L_08AF50EC:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AF5108;
      }
      goto L_08AF5100;
    }
L_08AF5100:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AF5108;
L_08AF5108:
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1008)));
    ctx.set_fpu_condition((ctx.fpr[4] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AF5250;
      }
      goto L_08AF511C;
    }
L_08AF511C:
    ctx.fpr[12] = ctx.fpr[4] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1004)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[9] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AF5190;
      }
      goto L_08AF5138;
    }
L_08AF5138:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    ctx.gpr[8] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-1000)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[11] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-996)));
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[10] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    ctx.gpr[6] = (2227u << 16u);
    ctx.fpr[8] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-992)));
    ctx.fpr[9] = ctx.fpr[10] + ctx.fpr[11];
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[6] = ctx.fpr[2] + ctx.fpr[8];
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[5] + ctx.fpr[4];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    goto L_08AF5170;
L_08AF5170:
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-972)));
    ctx.fpr[12] = ctx.fpr[4] - ctx.fpr[2];
    goto L_08AF517C;
L_08AF517C:
    ctx.fpr[11] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[4] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[11])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    goto L_08AF5188;
L_08AF5188:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5190:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-988)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[2] = ctx.fpr[12] + ctx.fpr[4];
        goto L_08AF5204;
    }
    goto L_08AF51A4;
L_08AF51A4:
    ctx.gpr[14] = (2227u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(-984)));
    ctx.gpr[13] = (2227u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(-1000)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[10] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    ctx.fpr[8] = ctx.fpr[12] - ctx.fpr[0];
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[7] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-996)));
    ctx.fpr[9] = ctx.fpr[10] + ctx.fpr[4];
    ctx.gpr[11] = (2227u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-992)));
    ctx.gpr[10] = (2227u << 16u);
    ctx.fpr[12] = ctx.fpr[8] / ctx.fpr[9];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-980)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[6] + ctx.fpr[7];
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[19] + ctx.fpr[3];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[4];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    goto L_08AF51FC;
L_08AF51FC:
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    goto L_08AF5170;
L_08AF5204:
    ctx.fpr[6] = ctx.fpr[12] - ctx.fpr[4];
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1000)));
    ctx.gpr[25] = (2227u << 16u);
    ctx.fpr[11] = ctx.fpr[6] / ctx.fpr[2];
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(-996)));
    ctx.gpr[24] = (2227u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(-992)));
    ctx.gpr[15] = (2227u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(-976)));
    { const float fs = ctx.fpr[11]; const float ft = ctx.fpr[11]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[19] + ctx.fpr[3];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[17];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[4];
    { const float fs = ctx.fpr[11]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    goto L_08AF51FC;
L_08AF5250:
    ctx.fpr[7] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-1004)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[7]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[10] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AF52A0;
      }
      goto L_08AF5264;
    }
L_08AF5264:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[10] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-1000)));
    ctx.gpr[8] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-996)));
    { const float fs = ctx.fpr[10]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-992)));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[16];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[10]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[11] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    ctx.fpr[9] = ctx.fpr[11] + ctx.fpr[13];
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[10]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[8] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[8] + ctx.fpr[4];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08AF517C;
L_08AF52A0:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-988)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[2] = ctx.fpr[12] + ctx.fpr[4];
        goto L_08AF5314;
    }
    goto L_08AF52B4;
L_08AF52B4:
    ctx.gpr[15] = (2227u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(-984)));
    ctx.gpr[14] = (2227u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(-1000)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[0];
    ctx.gpr[13] = (2227u << 16u);
    ctx.fpr[11] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(-996)));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[4];
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[8] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-992)));
    ctx.gpr[11] = (2227u << 16u);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[14];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-980)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[10] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    ctx.fpr[9] = ctx.fpr[10] + ctx.fpr[11];
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[6] = ctx.fpr[3] + ctx.fpr[8];
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[5] + ctx.fpr[4];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    goto L_08AF530C;
L_08AF530C:
    ctx.fpr[12] = ctx.fpr[2] + ctx.fpr[0];
    goto L_08AF517C;
L_08AF5314:
    ctx.fpr[10] = ctx.fpr[12] - ctx.fpr[4];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[9] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1000)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[16] = ctx.fpr[10] / ctx.fpr[2];
    ctx.fpr[8] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-996)));
    ctx.gpr[25] = (2227u << 16u);
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(-992)));
    ctx.gpr[24] = (2227u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(-976)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[7] = ctx.fpr[3] + ctx.fpr[8];
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[5] + ctx.fpr[6];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[18] + ctx.fpr[4];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    goto L_08AF530C;
L_08AF5360:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AF5388;
      }
      goto L_08AF537C;
    }
L_08AF537C:
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF53A4;
      }
      goto L_08AF5388;
    }
L_08AF5388:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AF5398u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 541u, 0x08AEA568u>(ctx, &aot_mem) && ctx.pc == 0x08AF5398u) goto L_08AF5398;
    return;
L_08AF5398:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF53A4:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x08AF53BCu);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08AF53E8;
L_08AF53BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF53C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF53D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF53E8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF53F4;
      }
      goto L_08AF53F0;
    }
L_08AF53F0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AF53F4;
L_08AF53F4:
    // nop
    // nop
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5404:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF5414u);
    ctx.gpr[4] = (0u | 4u);
    goto L_08AF5578;
L_08AF5414:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5420:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AF544C;
      }
      goto L_08AF5440;
    }
L_08AF5440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6144)));
    if (ctx.gpr[16] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6144)));
        goto L_08AF5458;
    }
    goto L_08AF544C;
L_08AF544C:
    ctx.gpr[31] = (0x08AF5454u);
    // nop
    goto L_08AF5404;
L_08AF5454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6144)));
    goto L_08AF5458;
L_08AF5458:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-6144), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5474:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF5504;
      }
      goto L_08AF5484;
    }
L_08AF5484:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-1472)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF549C:
    ctx.gpr[2] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1856));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF54A8:
    ctx.gpr[2] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1836));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF54B4:
    ctx.gpr[2] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1780));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF54C0:
    ctx.gpr[2] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1728));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF54CC:
    ctx.gpr[2] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1660));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF54D8:
    ctx.gpr[2] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1628));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF54E4:
    ctx.gpr[2] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1592));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF54F0:
    ctx.gpr[2] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1568));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF54FC:
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1540));
    goto L_08AF5504;
L_08AF5504:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF550C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23884)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF5540u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1484));
    goto L_08AF5474;
L_08AF5540:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF554Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08AF5474;
L_08AF554C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF5560u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 655u, 0x08AEACE0u>(ctx, &aot_mem) && ctx.pc == 0x08AF5560u) goto L_08AF5560;
    return;
L_08AF5560:
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
L_08AF5578:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF5588u);
    // nop
    goto L_08AF550C;
L_08AF5588:
    ctx.gpr[31] = (0x08AF5590u);
    // nop
    goto L_08AF419C;
L_08AF5590:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF559C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF55ACu);
    // nop
    goto L_08AF419C;
L_08AF55AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF55B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF55CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08AF55CCu) goto L_08AF55CC;
    return;
L_08AF55CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF55D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-11512));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF5628;
      }
      goto L_08AF5600;
    }
L_08AF5600:
    ctx.gpr[4] = (1u << 16u);
    goto L_08AF5604;
L_08AF5604:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (0u | 1u);
        goto L_08AF5618;
    }
    goto L_08AF5610;
L_08AF5610:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF5618;
      }
      goto L_08AF5618;
    }
L_08AF5618:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF5604;
      }
      goto L_08AF5628;
    }
L_08AF5628:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF56C8;
      }
      goto L_08AF5634;
    }
L_08AF5634:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AF56CC;
    }
    goto L_08AF5640;
L_08AF5640:
    ctx.gpr[9] = (0u | 0u);
    goto L_08AF5644;
L_08AF5644:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF56B8;
      }
      goto L_08AF5650;
    }
L_08AF5650:
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    goto L_08AF565C;
L_08AF565C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08AF56A4;
    }
    goto L_08AF5670;
L_08AF5670:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08AF56A4;
L_08AF56A4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AF565C;
      }
      goto L_08AF56B8;
    }
L_08AF56B8:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF5644;
      }
      goto L_08AF56C8;
    }
L_08AF56C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AF56CC;
L_08AF56CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF56EC;
      }
      goto L_08AF56D4;
    }
L_08AF56D4:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08AF56DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF56DCu) goto L_08AF56DC;
    return;
L_08AF56DC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF56D4;
      }
      goto L_08AF56EC;
    }
L_08AF56EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF56FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AF5760;
      }
      goto L_08AF572C;
    }
L_08AF572C:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08AF5760;
      }
      goto L_08AF5740;
    }
L_08AF5740:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[16];
    ctx.gpr[31] = (0x08AF574Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF574Cu) goto L_08AF574C;
    return;
L_08AF574C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AF5740;
      }
      goto L_08AF5760;
    }
L_08AF5760:
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
L_08AF5784:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-21084)));
    ctx.gpr[9] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-21084), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF57C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-21104)));
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AF5800;
      }
      goto L_08AF57EC;
    }
L_08AF57EC:
    ctx.gpr[31] = (0x08AF57F4u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF57F4u) goto L_08AF57F4;
    return;
L_08AF57F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5800:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF581C;
      }
      goto L_08AF5808;
    }
L_08AF5808:
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AF5810u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF5810u) goto L_08AF5810;
    return;
L_08AF5810:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF581C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AF5828u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF5828u) goto L_08AF5828;
    return;
L_08AF5828:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5834:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[22] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[2] = (0u < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF58A8;
      }
      goto L_08AF58A0;
    }
L_08AF58A0:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
        goto L_08AF5918;
    }
    goto L_08AF58A8;
L_08AF58A8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[23] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF58FC;
      }
      goto L_08AF58B8;
    }
L_08AF58B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-21104)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_08AF58D4;
      }
      goto L_08AF58C4;
    }
L_08AF58C4:
    ctx.gpr[31] = (0x08AF58CCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08AF58CCu) goto L_08AF58CC;
    return;
L_08AF58CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF58E4;
      }
      goto L_08AF58D4;
    }
L_08AF58D4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AF58E0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF58E0u) goto L_08AF58E0;
    return;
L_08AF58E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AF58E4;
L_08AF58E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF58F4;
      }
      goto L_08AF58EC;
    }
L_08AF58EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-21104)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08AF58F4;
L_08AF58F4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF59E8;
      }
      goto L_08AF58FC;
    }
L_08AF58FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-21104)));
    ctx.gpr[5] = (~(ctx.gpr[19] | 0u));
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    { const bool branch_taken = 0u != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF59E8;
      }
      goto L_08AF5914;
    }
L_08AF5914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    goto L_08AF5918;
L_08AF5918:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AF5950;
      }
      goto L_08AF5920;
    }
L_08AF5920:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08AF592Cu);
    ctx.gpr[6] = (0u | 1u);
    goto L_08AF5784;
L_08AF592C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[22]);
    goto L_08AF5950;
L_08AF5950:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF59D0;
      }
      goto L_08AF5958;
    }
L_08AF5958:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AF59D0;
      }
      goto L_08AF5964;
    }
L_08AF5964:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08AF599C;
      }
      goto L_08AF596C;
    }
L_08AF596C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    jump_target = ctx.gpr[18];
    ctx.gpr[31] = (0x08AF5994u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF5994u) goto L_08AF5994;
    return;
L_08AF5994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF59A4;
      }
      goto L_08AF599C;
    }
L_08AF599C:
    jump_target = ctx.gpr[18];
    ctx.gpr[31] = (0x08AF59A4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF59A4u) goto L_08AF59A4;
    return;
L_08AF59A4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF59B8;
      }
      goto L_08AF59AC;
    }
L_08AF59AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    goto L_08AF59B8;
L_08AF59B8:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[17]);
        goto L_08AF59C0;
    }
    goto L_08AF59C0;
L_08AF59C0:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AF5964;
      }
      goto L_08AF59D0;
    }
L_08AF59D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF59E8;
      }
      goto L_08AF59DC;
    }
L_08AF59DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21084)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-21084), ctx.gpr[5]);
    goto L_08AF59E8;
L_08AF59E8:
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5A1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF5A48u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    goto L_08AF5834;
L_08AF5A48:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5A54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[23]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[23] = (ctx.gpr[8] | 0u);
    ctx.gpr[11] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08AF5B90;
      }
      goto L_08AF5AA4;
    }
L_08AF5AA4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x08AF5ABCu);
    ctx.gpr[6] = (0u | 0u);
    goto L_08AF5784;
L_08AF5ABC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08AF5B1C;
      }
      goto L_08AF5AE4;
    }
L_08AF5AE4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21104)));
    ctx.gpr[4] = (ctx.gpr[21] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (~(ctx.gpr[5] | 0u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AF5B14;
      }
      goto L_08AF5B0C;
    }
L_08AF5B0C:
    ctx.gpr[31] = (0x08AF5B14u);
    // nop
    goto L_08AF5BE0;
L_08AF5B14:
    { const std::uint32_t dividend = ctx.gpr[22]; const std::uint32_t divisor = ctx.gpr[19]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[18] = (ctx.lo);
    goto L_08AF5B1C;
L_08AF5B1C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AF5B68;
      }
      goto L_08AF5B24;
    }
L_08AF5B24:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[21] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AF5B68;
      }
      goto L_08AF5B40;
    }
L_08AF5B40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
    jump_target = ctx.gpr[20];
    ctx.gpr[31] = (0x08AF5B58u);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF5B58u) goto L_08AF5B58;
    return;
L_08AF5B58:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF5B40;
      }
      goto L_08AF5B68;
    }
L_08AF5B68:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21084)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-21084), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF5B90;
      }
      goto L_08AF5B7C;
    }
L_08AF5B7C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AF5B90u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    goto L_08AF57C8;
L_08AF5B90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5BC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF5BD4u);
    ctx.gpr[10] = (0u | 0u);
    goto L_08AF5A54;
L_08AF5BD4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5BE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF5BF0u);
    ctx.gpr[4] = (0u | 9u);
    goto L_08AF5578;
L_08AF5BF0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5BFC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[10] = (ctx.lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[4]) * static_cast<std::uint64_t>(ctx.gpr[6]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[9] = (ctx.hi);
    ctx.gpr[2] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[10]);
    jump_target = ctx.gpr[31];
    ctx.gpr[3] = (ctx.gpr[4] + ctx.gpr[9]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5C24:
    ctx.gpr[3] = (31u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] | 65535u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[2]);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[8] < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[3]);
    ctx.gpr[7] = (63u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[7] | 65535u);
    ctx.gpr[20] = (ctx.gpr[4] + 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2047));
    ctx.gpr[4] = (ctx.gpr[20] & ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[21] & ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AF5D58;
      }
      goto L_08AF5C8C;
    }
L_08AF5C8C:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[7];
    ctx.gpr[2] = (ctx.gpr[8] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF5D50;
      }
      goto L_08AF5C94;
    }
L_08AF5C94:
    ctx.gpr[31] = (0x08AF5C9Cu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 0u));
    goto L_08AF67EC;
L_08AF5C9C:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-960)));
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-956)));
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.gpr[5] = (ctx.gpr[3] + 0u);
    ctx.gpr[6] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08AF5CC0u);
    ctx.gpr[7] = (ctx.gpr[17] + 0u);
    goto L_08AF61F4;
L_08AF5CC0:
    ctx.gpr[5] = (ctx.gpr[3] + 0u);
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.gpr[6] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08AF5CD4u);
    ctx.gpr[7] = (ctx.gpr[17] + 0u);
    goto L_08AF61F4;
L_08AF5CD4:
    ctx.gpr[4] = (ctx.gpr[20] + 0u);
    ctx.gpr[18] = (ctx.gpr[2] + 0u);
    ctx.gpr[31] = (0x08AF5CE4u);
    ctx.gpr[19] = (ctx.gpr[3] + 0u);
    goto L_08AF67EC;
L_08AF5CE4:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    ctx.gpr[5] = (ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08AF5D34;
      }
      goto L_08AF5CF0;
    }
L_08AF5CF0:
    ctx.gpr[6] = (ctx.gpr[2] + 0u);
    goto L_08AF5CF4;
L_08AF5CF4:
    ctx.gpr[7] = (ctx.gpr[3] + 0u);
    ctx.gpr[4] = (ctx.gpr[18] + 0u);
    ctx.gpr[31] = (0x08AF5D04u);
    ctx.gpr[5] = (ctx.gpr[19] + 0u);
    goto L_08AF6118;
L_08AF5D04:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.gpr[31] = (0x08AF5D10u);
    ctx.gpr[5] = (ctx.gpr[3] + 0u);
    goto L_08AF6A14;
L_08AF5D10:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5D34:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-952)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[31] = (0x08AF5D48u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-948)));
    goto L_08AF6118;
L_08AF5D48:
    ctx.gpr[6] = (ctx.gpr[2] + 0u);
    goto L_08AF5CF4;
L_08AF5D50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF5C94;
      }
      goto L_08AF5D58;
    }
L_08AF5D58:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF5C94;
      }
      goto L_08AF5D60;
    }
L_08AF5D60:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-2048));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2048));
    ctx.gpr[20] = (ctx.gpr[20] & ctx.gpr[2]);
    ctx.gpr[21] = (ctx.gpr[21] & ctx.gpr[3]);
    ctx.gpr[20] = (ctx.gpr[20] | ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] | ctx.gpr[5]);
    goto L_08AF5C94;
L_08AF5D84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF5D9Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AF6A8C;
L_08AF5D9C:
    ctx.gpr[9] = (0u + 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[8] >> 2u);
    ctx.gpr[9] = (ctx.gpr[9] << 30u);
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[2]);
    ctx.gpr[31] = (0x08AF5DC4u);
    ctx.gpr[8] = (ctx.gpr[8] << 30u);
    goto L_08AF69E0;
L_08AF5DC4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5DD0:
    ctx.gpr[7] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[6] + 0u);
    ctx.gpr[8] = (ctx.gpr[5] + 0u);
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08AF5E24;
      }
      goto L_08AF5DEC;
    }
L_08AF5DEC:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AF5E24;
      }
      goto L_08AF5DFC;
    }
L_08AF5DFC:
    ctx.gpr[2] = (ctx.gpr[4] ^ 4u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
      if (branch_taken) {
          goto L_08AF5E34;
      }
      goto L_08AF5E08;
    }
L_08AF5E08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08AF5E24;
      }
      goto L_08AF5E10;
    }
L_08AF5E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1392));
      if (branch_taken) {
          goto L_08AF5E2C;
      }
      goto L_08AF5E24;
    }
L_08AF5E24:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5E2C:
    ctx.gpr[6] = (ctx.gpr[7] + 0u);
    goto L_08AF5E24;
L_08AF5E34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AF5E24;
      }
      goto L_08AF5E3C;
    }
L_08AF5E3C:
    ctx.gpr[2] = (ctx.gpr[3] ^ 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[4] ^ 2u);
      if (branch_taken) {
          goto L_08AF5E94;
      }
      goto L_08AF5E48;
    }
L_08AF5E48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08AF5E24;
      }
      goto L_08AF5E50;
    }
L_08AF5E50:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[10] + 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08AF5E24;
L_08AF5E94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AF5E24;
      }
      goto L_08AF5E9C;
    }
L_08AF5E9C:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[11] - ctx.gpr[9]);
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.gpr[2] = (0u - ctx.gpr[2]);
        goto L_08AF5EC0;
    }
    goto L_08AF5EC0;
L_08AF5EC0:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF60F0;
      }
      goto L_08AF5ECC;
    }
L_08AF5ECC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF5F10;
      }
      goto L_08AF5ED4;
    }
L_08AF5ED4:
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[24] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[11] - ctx.gpr[9]);
    goto L_08AF5EE0;
L_08AF5EE0:
    ctx.gpr[4] = (ctx.gpr[14] >> 1u);
    ctx.gpr[6] = (ctx.gpr[15] << 31u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[15] >> 1u);
    ctx.gpr[2] = (ctx.gpr[14] & ctx.gpr[24]);
    ctx.gpr[3] = (ctx.gpr[15] & ctx.gpr[25]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[14] = (ctx.gpr[2] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[15] = (ctx.gpr[3] | ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF5EE0;
      }
      goto L_08AF5F08;
    }
L_08AF5F08:
    ctx.gpr[9] = (ctx.gpr[11] + 0u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    goto L_08AF5F10;
L_08AF5F10:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_08AF5F54;
    }
    goto L_08AF5F18;
L_08AF5F18:
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[24] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[9] - ctx.gpr[11]);
    goto L_08AF5F24;
L_08AF5F24:
    ctx.gpr[4] = (ctx.gpr[12] >> 1u);
    ctx.gpr[6] = (ctx.gpr[13] << 31u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[13] >> 1u);
    ctx.gpr[2] = (ctx.gpr[12] & ctx.gpr[24]);
    ctx.gpr[3] = (ctx.gpr[13] & ctx.gpr[25]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[2] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[13] = (ctx.gpr[3] | ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF5F24;
      }
      goto L_08AF5F4C;
    }
L_08AF5F4C:
    ctx.gpr[11] = (ctx.gpr[9] + 0u);
    goto L_08AF5F50;
L_08AF5F50:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_08AF5F54;
L_08AF5F54:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    ctx.gpr[5] = (ctx.gpr[15] - ctx.gpr[13]);
      if (branch_taken) {
          goto L_08AF60C8;
      }
      goto L_08AF5F60;
    }
L_08AF5F60:
    ctx.gpr[2] = (ctx.gpr[14] < ctx.gpr[12] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[14] - ctx.gpr[12]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF5F80;
      }
      goto L_08AF5F70;
    }
L_08AF5F70:
    ctx.gpr[2] = (ctx.gpr[12] < ctx.gpr[14] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[13] - ctx.gpr[15]);
    ctx.gpr[4] = (ctx.gpr[12] - ctx.gpr[14]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[2]);
    goto L_08AF5F80;
L_08AF5F80:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF60A4;
      }
      goto L_08AF5F88;
    }
L_08AF5F88:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), 0u);
    goto L_08AF5F98;
L_08AF5F98:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (4095u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 65535u);
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (ctx.gpr[4] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
        goto L_08AF6030;
    }
    goto L_08AF5FC4;
L_08AF5FC4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF6094;
      }
      goto L_08AF5FCC;
    }
L_08AF5FCC:
    ctx.gpr[3] = (ctx.gpr[8] >> 31u);
    goto L_08AF5FD0;
L_08AF5FD0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    goto L_08AF5FD4;
L_08AF5FD4:
    ctx.gpr[7] = (ctx.gpr[9] << 1u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[3]);
    ctx.gpr[6] = (ctx.gpr[8] << 1u);
    ctx.gpr[11] = (4095u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (ctx.gpr[4] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[3]);
    ctx.gpr[11] = (ctx.gpr[11] | 65535u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (ctx.gpr[11] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[12] = (ctx.gpr[4] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[8] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[9] = (ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08AF602C;
      }
      goto L_08AF601C;
    }
L_08AF601C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[11];
    ctx.gpr[3] = (ctx.gpr[8] >> 31u);
      if (branch_taken) {
          goto L_08AF5FD0;
      }
      goto L_08AF6024;
    }
L_08AF6024:
    if (ctx.gpr[12] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
        goto L_08AF5FD4;
    }
    goto L_08AF602C;
L_08AF602C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    goto L_08AF6030;
L_08AF6030:
    ctx.gpr[3] = (8191u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] | 65535u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3));
    ctx.gpr[3] = (ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF608C;
      }
      goto L_08AF6048;
    }
L_08AF6048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[4] & ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[5] << 31u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[3] = (ctx.gpr[5] & ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
    ctx.gpr[3] = (ctx.gpr[3] | ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_08AF608C;
L_08AF608C:
    ctx.gpr[6] = (ctx.gpr[10] + 0u);
    goto L_08AF5E24;
L_08AF6094:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[3] = (ctx.gpr[8] >> 31u);
      if (branch_taken) {
          goto L_08AF5FD0;
      }
      goto L_08AF609C;
    }
L_08AF609C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    goto L_08AF6030;
L_08AF60A4:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[3] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    goto L_08AF5F98;
L_08AF60C8:
    ctx.gpr[2] = (ctx.gpr[12] + ctx.gpr[14]);
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[14] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[13] + ctx.gpr[15]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    goto L_08AF6030;
L_08AF60F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF6108;
      }
      goto L_08AF60F8;
    }
L_08AF60F8:
    ctx.gpr[14] = (0u + 0u);
    ctx.gpr[15] = (0u + 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_08AF5F54;
L_08AF6108:
    ctx.gpr[12] = (0u + 0u);
    ctx.gpr[13] = (0u + 0u);
    ctx.gpr[11] = (ctx.gpr[9] + 0u);
    goto L_08AF5F50;
L_08AF6118:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    ctx.gpr[31] = (0x08AF614Cu);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    goto L_08AF6E28;
L_08AF614C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08AF6158u);
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    goto L_08AF6E28;
L_08AF6158:
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08AF6168u);
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    goto L_08AF5DD0;
L_08AF6168:
    ctx.gpr[31] = (0x08AF6170u);
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    goto L_08AF6B88;
L_08AF6170:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6180:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[7]);
    ctx.gpr[31] = (0x08AF61B4u);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    goto L_08AF6E28;
L_08AF61B4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08AF61C0u);
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    goto L_08AF6E28;
L_08AF61C0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
    ctx.gpr[31] = (0x08AF61DCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_08AF5DD0;
L_08AF61DC:
    ctx.gpr[31] = (0x08AF61E4u);
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    goto L_08AF6B88;
L_08AF61E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF61F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    ctx.gpr[31] = (0x08AF6238u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    goto L_08AF6E28;
L_08AF6238:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08AF6244u);
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    goto L_08AF6E28;
L_08AF6244:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[29] + 0u);
    ctx.gpr[2] = (ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[12] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08AF6284;
      }
      goto L_08AF6258;
    }
L_08AF6258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08AF62E0;
    }
    goto L_08AF6268;
L_08AF6268:
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[4] ^ 4u);
      if (branch_taken) {
          goto L_08AF62C4;
      }
      goto L_08AF6274;
    }
L_08AF6274:
    ctx.gpr[3] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[2] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1392));
      if (branch_taken) {
          goto L_08AF629C;
      }
      goto L_08AF6284;
    }
L_08AF6284:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AF6288;
L_08AF6288:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    ctx.gpr[2] = (ctx.gpr[2] ^ ctx.gpr[3]);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08AF629C;
L_08AF629C:
    ctx.gpr[31] = (0x08AF62A4u);
    // nop
    goto L_08AF6B88;
L_08AF62A4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF62C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[3] ^ 2u);
      if (branch_taken) {
          goto L_08AF62F8;
      }
      goto L_08AF62CC;
    }
L_08AF62CC:
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] ^ 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1392));
      if (branch_taken) {
          goto L_08AF629C;
      }
      goto L_08AF62DC;
    }
L_08AF62DC:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08AF62E0;
L_08AF62E0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
    ctx.gpr[2] = (ctx.gpr[2] ^ ctx.gpr[3]);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_08AF629C;
L_08AF62F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AF6288;
      }
      goto L_08AF6300;
    }
L_08AF6300:
    ctx.gpr[2] = (ctx.gpr[4] ^ 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AF62E0;
      }
      goto L_08AF630C;
    }
L_08AF630C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[7]) * static_cast<std::uint64_t>(ctx.gpr[6]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[18] = (0u + 0u);
    ctx.gpr[19] = (0u + 0u);
    ctx.gpr[3] = (ctx.hi);
    ctx.gpr[2] = (ctx.lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[5]) * static_cast<std::uint64_t>(ctx.gpr[8]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[11] = (ctx.hi);
    ctx.gpr[10] = (ctx.lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[5]) * static_cast<std::uint64_t>(ctx.gpr[6]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[14] = (ctx.gpr[10] + ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[14] < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[11] + ctx.gpr[3]);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[9]);
    ctx.gpr[21] = (ctx.hi);
    ctx.gpr[20] = (ctx.lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[7]) * static_cast<std::uint64_t>(ctx.gpr[8]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[4] = (ctx.gpr[15] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[7] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.lo);
      if (branch_taken) {
          goto L_08AF655C;
      }
      goto L_08AF636C;
    }
L_08AF636C:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[15];
    ctx.gpr[2] = (ctx.gpr[14] < ctx.gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF6554;
      }
      goto L_08AF6374;
    }
L_08AF6374:
    ctx.gpr[10] = (0u + 0u);
    goto L_08AF6378;
L_08AF6378:
    ctx.gpr[11] = (ctx.gpr[14] << 0u);
    ctx.gpr[24] = (ctx.gpr[6] + ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[24] < ctx.gpr[10] ? 1u : 0u);
    ctx.gpr[25] = (ctx.gpr[7] + ctx.gpr[11]);
    ctx.gpr[25] = (ctx.gpr[25] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[25] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08AF6548;
    }
    goto L_08AF6398;
L_08AF6398:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[25];
    ctx.gpr[2] = (ctx.gpr[24] < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF653C;
      }
      goto L_08AF63A0;
    }
L_08AF63A0:
    ctx.gpr[2] = (ctx.gpr[15] >> 0u);
    goto L_08AF63A4;
L_08AF63A4:
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[20]);
    ctx.gpr[3] = (0u + 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[2] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[21]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[18] + ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[10] < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (8191u << 16u);
    ctx.gpr[11] = (ctx.gpr[19] + ctx.gpr[3]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] | 65535u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[11] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[24] + 0u);
    ctx.gpr[9] = (ctx.gpr[25] + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AF6468;
      }
      goto L_08AF6408;
    }
L_08AF6408:
    ctx.gpr[6] = (8191u << 16u);
    ctx.gpr[15] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[14] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[25] = (32768u << 16u);
    ctx.gpr[24] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[6] = (ctx.gpr[6] | 65535u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    goto L_08AF6424;
L_08AF6424:
    ctx.gpr[3] = (ctx.gpr[11] << 31u);
    ctx.gpr[4] = (ctx.gpr[10] & ctx.gpr[14]);
    ctx.gpr[11] = (ctx.gpr[11] >> 1u);
    ctx.gpr[10] = (ctx.gpr[10] >> 1u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[3] = (ctx.gpr[6] < ctx.gpr[11] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF6460;
      }
      goto L_08AF6448;
    }
L_08AF6448:
    ctx.gpr[2] = (ctx.gpr[9] << 31u);
    ctx.gpr[8] = (ctx.gpr[8] >> 1u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[9] >> 1u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[24]);
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[25]);
    goto L_08AF6460;
L_08AF6460:
    if (ctx.gpr[3] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
        goto L_08AF6424;
    }
    goto L_08AF6468;
L_08AF6468:
    ctx.gpr[2] = (4095u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (4095u << 16u);
      if (branch_taken) {
          goto L_08AF64C0;
      }
      goto L_08AF647C;
    }
L_08AF647C:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | 65535u);
    goto L_08AF6488;
L_08AF6488:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (ctx.gpr[10] >> 31u);
    ctx.gpr[11] = (ctx.gpr[11] << 1u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (ctx.gpr[11] | ctx.gpr[3]);
    ctx.gpr[10] = (ctx.gpr[10] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) < 0;
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF6530;
      }
      goto L_08AF64A8;
    }
L_08AF64A8:
    ctx.gpr[3] = (ctx.gpr[8] >> 31u);
    ctx.gpr[9] = (ctx.gpr[9] << 1u);
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] << 1u);
      if (branch_taken) {
          goto L_08AF6488;
      }
      goto L_08AF64C0;
    }
L_08AF64C0:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(255));
    ctx.gpr[2] = (ctx.gpr[10] & ctx.gpr[2]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[3] = (ctx.gpr[11] & ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AF64F0;
      }
      goto L_08AF64D8;
    }
L_08AF64D8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(3));
    goto L_08AF64DC;
L_08AF64DC:
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[12] + 0u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AF629C;
L_08AF64F0:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AF64DC;
      }
      goto L_08AF64F8;
    }
L_08AF64F8:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[2] = (ctx.gpr[10] & ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[11] & ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
        goto L_08AF6524;
    }
    goto L_08AF6514;
L_08AF6514:
    ctx.gpr[2] = (ctx.gpr[8] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AF64DC;
      }
      goto L_08AF6520;
    }
L_08AF6520:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    goto L_08AF6524;
L_08AF6524:
    ctx.gpr[2] = (ctx.gpr[10] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    goto L_08AF64D8;
L_08AF6530:
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[6]);
    ctx.gpr[11] = (ctx.gpr[11] | ctx.gpr[7]);
    goto L_08AF64A8;
L_08AF653C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (ctx.gpr[15] >> 0u);
      if (branch_taken) {
          goto L_08AF63A4;
      }
      goto L_08AF6544;
    }
L_08AF6544:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AF6548;
L_08AF6548:
    ctx.gpr[2] = (ctx.gpr[18] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[2]);
    goto L_08AF63A0;
L_08AF6554:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[10] = (0u + 0u);
        goto L_08AF6378;
    }
    goto L_08AF655C;
L_08AF655C:
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[10] = (0u + 0u);
    goto L_08AF6378;
L_08AF656C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    ctx.gpr[31] = (0x08AF65A0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08AF6E28;
L_08AF65A0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08AF65ACu);
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    goto L_08AF6E28;
L_08AF65AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[29] + 0u);
    ctx.gpr[2] = (ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08AF6604;
      }
      goto L_08AF65C0;
    }
L_08AF65C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AF6604;
      }
      goto L_08AF65D0;
    }
L_08AF65D0:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[2] = (ctx.gpr[5] ^ 4u);
    ctx.gpr[3] = (ctx.gpr[3] ^ ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AF65F4;
      }
      goto L_08AF65E8;
    }
L_08AF65E8:
    ctx.gpr[2] = (ctx.gpr[5] ^ 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[6] ^ 4u);
      if (branch_taken) {
          goto L_08AF661C;
      }
      goto L_08AF65F4;
    }
L_08AF65F4:
    ctx.gpr[2] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1392));
      if (branch_taken) {
          goto L_08AF6604;
      }
      goto L_08AF6600;
    }
L_08AF6600:
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    goto L_08AF6604;
L_08AF6604:
    ctx.gpr[31] = (0x08AF660Cu);
    // nop
    goto L_08AF6B88;
L_08AF660C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF661C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[6] ^ 2u);
      if (branch_taken) {
          goto L_08AF6640;
      }
      goto L_08AF6624;
    }
L_08AF6624:
    ctx.gpr[2] = (0u + 0u);
    ctx.gpr[3] = (0u + 0u);
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    goto L_08AF6604;
L_08AF6640:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AF6658;
      }
      goto L_08AF6648;
    }
L_08AF6648:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AF6604;
L_08AF6658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[12] = (ctx.gpr[5] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[3] - ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AF6770;
      }
      goto L_08AF667C;
    }
L_08AF667C:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[5];
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF6768;
      }
      goto L_08AF6684;
    }
L_08AF6684:
    ctx.gpr[9] = (4096u << 16u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[14] = (0u + 0u);
    ctx.gpr[15] = (0u + 0u);
    goto L_08AF6694;
L_08AF6694:
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[2] = (ctx.gpr[9] << 31u);
      if (branch_taken) {
          goto L_08AF66C0;
      }
      goto L_08AF669C;
    }
L_08AF669C:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[5];
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF6758;
      }
      goto L_08AF66A4;
    }
L_08AF66A4:
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[10] ? 1u : 0u);
    goto L_08AF66A8;
L_08AF66A8:
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[2]);
    ctx.gpr[14] = (ctx.gpr[14] | ctx.gpr[8]);
    ctx.gpr[15] = (ctx.gpr[15] | ctx.gpr[9]);
    ctx.gpr[2] = (ctx.gpr[9] << 31u);
    goto L_08AF66C0;
L_08AF66C0:
    ctx.gpr[8] = (ctx.gpr[8] >> 1u);
    ctx.gpr[7] = (ctx.gpr[5] << 1u);
    ctx.gpr[3] = (ctx.gpr[4] >> 31u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[9] >> 1u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[3]);
    ctx.gpr[6] = (ctx.gpr[4] << 1u);
    ctx.gpr[2] = (ctx.gpr[8] | ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[6] + 0u);
    ctx.gpr[5] = (ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[12] = (ctx.gpr[7] < ctx.gpr[11] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF6694;
      }
      goto L_08AF66F0;
    }
L_08AF66F0:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(255));
    ctx.gpr[2] = (ctx.gpr[14] & ctx.gpr[2]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[3] = (ctx.gpr[15] & ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AF6718;
      }
      goto L_08AF6708;
    }
L_08AF6708:
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(16), ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(20), ctx.gpr[15]);
    ctx.gpr[4] = (ctx.gpr[13] + 0u);
    goto L_08AF6604;
L_08AF6718:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF6708;
      }
      goto L_08AF6720;
    }
L_08AF6720:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[2] = (ctx.gpr[14] & ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[15] & ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(128));
        goto L_08AF674C;
    }
    goto L_08AF673C;
L_08AF673C:
    ctx.gpr[2] = (ctx.gpr[6] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF6708;
      }
      goto L_08AF6748;
    }
L_08AF6748:
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(128));
    goto L_08AF674C;
L_08AF674C:
    ctx.gpr[2] = (ctx.gpr[14] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[2]);
    goto L_08AF6708;
L_08AF6758:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[2] = (ctx.gpr[9] << 31u);
        goto L_08AF66C0;
    }
    goto L_08AF6760;
L_08AF6760:
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[10] ? 1u : 0u);
    goto L_08AF66A8;
L_08AF6768:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF6684;
      }
      goto L_08AF6770;
    }
L_08AF6770:
    ctx.gpr[2] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[3] = (ctx.gpr[4] >> 31u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[12] = (ctx.gpr[5] < ctx.gpr[11] ? 1u : 0u);
    goto L_08AF6684;
L_08AF6790:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    ctx.gpr[31] = (0x08AF67C4u);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    goto L_08AF6E28;
L_08AF67C4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08AF67D0u);
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    goto L_08AF6E28;
L_08AF67D0:
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08AF67DCu);
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    goto L_08AF6F44;
L_08AF67DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF67EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[3] = (ctx.gpr[4] >> 31u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AF6824;
      }
      goto L_08AF6808;
    }
L_08AF6808:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AF6810;
L_08AF6810:
    ctx.gpr[31] = (0x08AF6818u);
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    goto L_08AF6B88;
L_08AF6818:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08AF681C;
L_08AF681C:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6824:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(60));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF68BC;
      }
      goto L_08AF6830;
    }
L_08AF6830:
    ctx.gpr[2] = (32768u << 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AF68A4;
      }
      goto L_08AF683C;
    }
L_08AF683C:
    ctx.gpr[2] = (0u - ctx.gpr[4]);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    goto L_08AF6844;
L_08AF6844:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.gpr[2] = (4095u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AF6810;
      }
      goto L_08AF6864;
    }
L_08AF6864:
    ctx.gpr[6] = (4095u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 65535u);
    goto L_08AF686C;
L_08AF686C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[3] = (ctx.gpr[3] << 1u);
    ctx.gpr[3] = (ctx.gpr[3] | ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] << 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF686C;
      }
      goto L_08AF689C;
    }
L_08AF689C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08AF6810;
L_08AF68A4:
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-944)));
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-940)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08AF681C;
L_08AF68BC:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    goto L_08AF6844;
L_08AF68C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF68ECu);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    goto L_08AF6E28;
L_08AF68EC:
    ctx.gpr[5] = (0u + 0u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] ^ 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF693C;
      }
      goto L_08AF6900;
    }
L_08AF6900:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
      if (branch_taken) {
          goto L_08AF693C;
      }
      goto L_08AF6908;
    }
L_08AF6908:
    ctx.gpr[3] = (32767u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (32768u << 16u);
      if (branch_taken) {
          goto L_08AF6930;
      }
      goto L_08AF6914;
    }
L_08AF6914:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 31 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF693C;
      }
      goto L_08AF6924;
    }
L_08AF6924:
    ctx.gpr[3] = (32767u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (32768u << 16u);
      if (branch_taken) {
          goto L_08AF694C;
      }
      goto L_08AF6930;
    }
L_08AF6930:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (ctx.gpr[3] | 65535u);
    if (ctx.gpr[2] == 0u) ctx.gpr[5] = (ctx.gpr[3]);
    goto L_08AF693C;
L_08AF693C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[2] = (ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF694C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[4] << 26u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AF6974;
      }
      goto L_08AF6968;
    }
L_08AF6968:
    ctx.gpr[6] = (ctx.gpr[3] >> (ctx.gpr[4] & 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF698C;
      }
      goto L_08AF6974;
    }
L_08AF6974:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[2] >> (ctx.gpr[4] & 31u));
      if (branch_taken) {
          goto L_08AF6988;
      }
      goto L_08AF697C;
    }
L_08AF697C:
    ctx.gpr[8] = (0u - ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[3] << (ctx.gpr[8] & 31u));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[8]);
    goto L_08AF6988;
L_08AF6988:
    ctx.gpr[7] = (ctx.gpr[3] >> (ctx.gpr[4] & 31u));
    goto L_08AF698C;
L_08AF698C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u - ctx.gpr[6]);
    if (ctx.gpr[2] == 0u) ctx.gpr[5] = (ctx.gpr[6]);
    goto L_08AF693C;
L_08AF699C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.gpr[31] = (0x08AF69C0u);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    goto L_08AF6E28;
L_08AF69C0:
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08AF69D4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08AF6B88;
L_08AF69D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF69E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[31] = (0x08AF6A08u);
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    goto L_08AF6B88;
L_08AF6A08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6A14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.gpr[31] = (0x08AF6A38u);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    goto L_08AF6E28;
L_08AF6A38:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (16383u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (ctx.gpr[9] & ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[8] & ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[9] << 2u);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[6]);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[8]);
    ctx.gpr[31] = (0x08AF6A80u);
    ctx.gpr[7] = (ctx.gpr[2] + 0u);
    goto L_08AF6B58;
L_08AF6A80:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6A8C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (127u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] | 65535u);
    ctx.gpr[6] = (ctx.gpr[2] >> 23u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[2] & ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AF6B08;
      }
      goto L_08AF6AB0;
    }
L_08AF6AB0:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF6B00;
      }
      goto L_08AF6AB8;
    }
L_08AF6AB8:
    ctx.gpr[2] = (16383u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] << 7u);
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-126));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3));
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF6AF8;
      }
      goto L_08AF6ADC;
    }
L_08AF6ADC:
    ctx.gpr[4] = (16383u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65535u);
    goto L_08AF6AE4;
L_08AF6AE4:
    ctx.gpr[7] = (ctx.gpr[7] << 1u);
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF6AE4;
      }
      goto L_08AF6AF4;
    }
L_08AF6AF4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_08AF6AF8;
L_08AF6AF8:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6B00:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6B08:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    ctx.gpr[2] = (ctx.gpr[7] << 7u);
      if (branch_taken) {
          goto L_08AF6B30;
      }
      goto L_08AF6B14;
    }
L_08AF6B14:
    ctx.gpr[3] = (16384u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-127));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08AF6B00;
L_08AF6B30:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[2] = (16u << 16u);
        goto L_08AF6B40;
    }
    goto L_08AF6B38;
L_08AF6B38:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(4));
    goto L_08AF6B00;
L_08AF6B40:
    ctx.gpr[2] = (ctx.gpr[7] & ctx.gpr[2]);
    if (ctx.gpr[2] == 0u) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
        goto L_08AF6AF8;
    }
    goto L_08AF6B4C;
L_08AF6B4C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AF6AF8;
L_08AF6B58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[31] = (0x08AF6B7Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    goto L_08AF70A8;
L_08AF6B7C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6B88:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[9] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF6C1C;
      }
      goto L_08AF6BA8;
    }
L_08AF6BA8:
    ctx.gpr[3] = (8u << 16u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[2]);
    ctx.gpr[11] = (ctx.gpr[11] | ctx.gpr[3]);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(2047));
    goto L_08AF6BBC;
L_08AF6BBC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AF6BC0;
L_08AF6BC0:
    ctx.gpr[6] = (15u << 16u);
    ctx.gpr[3] = (65520u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 65535u);
    ctx.gpr[6] = (ctx.gpr[11] & ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[3]);
    ctx.gpr[4] = (32783u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[9] & 2047u);
    ctx.gpr[4] = (ctx.gpr[4] | 65535u);
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 20u);
    ctx.gpr[3] = (32767u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[5]);
    ctx.gpr[3] = (ctx.gpr[3] | 65535u);
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[12] << 31u);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6C1C:
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(2047));
        goto L_08AF6D88;
    }
    goto L_08AF6C28;
L_08AF6C28:
    ctx.gpr[2] = (ctx.gpr[3] ^ 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF6D88;
      }
      goto L_08AF6C34;
    }
L_08AF6C34:
    ctx.gpr[2] = (ctx.gpr[10] | ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AF6BC0;
      }
      goto L_08AF6C40;
    }
L_08AF6C40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1022 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1024 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF6D80;
      }
      goto L_08AF6C50;
    }
L_08AF6C50:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1022));
    ctx.gpr[13] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[13]) < 57 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF6CE8;
      }
      goto L_08AF6C64;
    }
L_08AF6C64:
    ctx.gpr[10] = (0u + 0u);
    ctx.gpr[11] = (0u + 0u);
    goto L_08AF6C6C;
L_08AF6C6C:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(255));
    ctx.gpr[2] = (ctx.gpr[10] & ctx.gpr[2]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[3] = (ctx.gpr[11] & ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AF6CB8;
      }
      goto L_08AF6C84;
    }
L_08AF6C84:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(127));
    goto L_08AF6C88;
L_08AF6C88:
    ctx.gpr[2] = (ctx.gpr[10] < static_cast<std::uint32_t>(127) ? 1u : 0u);
    goto L_08AF6C8C;
L_08AF6C8C:
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[2] = (4095u << 16u);
    goto L_08AF6C94;
L_08AF6C94:
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] >> 8u);
    ctx.gpr[4] = (ctx.gpr[11] << 24u);
    if (ctx.gpr[2] != 0u) ctx.gpr[9] = (ctx.gpr[3]);
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[4]);
    goto L_08AF6CB0;
L_08AF6CB0:
    ctx.gpr[11] = (ctx.gpr[11] >> 8u);
    goto L_08AF6BBC;
L_08AF6CB8:
    if (ctx.gpr[3] != 0u) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(127));
        goto L_08AF6C88;
    }
    goto L_08AF6CC0;
L_08AF6CC0:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[2] = (ctx.gpr[10] & ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[11] & ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[2] = (4095u << 16u);
        goto L_08AF6C94;
    }
    goto L_08AF6CDC;
L_08AF6CDC:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    ctx.gpr[2] = (ctx.gpr[10] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    goto L_08AF6C8C;
L_08AF6CE8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[13] << 26u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AF6D08;
      }
      goto L_08AF6CFC;
    }
L_08AF6CFC:
    ctx.gpr[3] = (ctx.gpr[4] << (ctx.gpr[13] & 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF6D20;
      }
      goto L_08AF6D08;
    }
L_08AF6D08:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[3] = (ctx.gpr[5] << (ctx.gpr[13] & 31u));
      if (branch_taken) {
          goto L_08AF6D1C;
      }
      goto L_08AF6D10;
    }
L_08AF6D10:
    ctx.gpr[6] = (0u - ctx.gpr[13]);
    ctx.gpr[6] = (ctx.gpr[4] >> (ctx.gpr[6] & 31u));
    ctx.gpr[3] = (ctx.gpr[3] | ctx.gpr[6]);
    goto L_08AF6D1C;
L_08AF6D1C:
    ctx.gpr[2] = (ctx.gpr[4] << (ctx.gpr[13] & 31u));
    goto L_08AF6D20;
L_08AF6D20:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[2] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    ctx.gpr[2] = (ctx.gpr[10] & ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[11] & ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    ctx.gpr[8] = (ctx.gpr[13] << 26u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AF6D54;
      }
      goto L_08AF6D48;
    }
L_08AF6D48:
    ctx.gpr[6] = (ctx.gpr[11] >> (ctx.gpr[13] & 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF6D6C;
      }
      goto L_08AF6D54;
    }
L_08AF6D54:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[10] >> (ctx.gpr[13] & 31u));
      if (branch_taken) {
          goto L_08AF6D68;
      }
      goto L_08AF6D5C;
    }
L_08AF6D5C:
    ctx.gpr[8] = (0u - ctx.gpr[13]);
    ctx.gpr[8] = (ctx.gpr[11] << (ctx.gpr[8] & 31u));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[8]);
    goto L_08AF6D68;
L_08AF6D68:
    ctx.gpr[7] = (ctx.gpr[11] >> (ctx.gpr[13] & 31u));
    goto L_08AF6D6C;
L_08AF6D6C:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (0u + 0u);
    ctx.gpr[10] = (ctx.gpr[6] | ctx.gpr[2]);
    ctx.gpr[11] = (ctx.gpr[7] | ctx.gpr[5]);
    goto L_08AF6C6C;
L_08AF6D80:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(2047));
      if (branch_taken) {
          goto L_08AF6D98;
      }
      goto L_08AF6D88;
    }
L_08AF6D88:
    ctx.gpr[10] = (0u + 0u);
    ctx.gpr[11] = (0u + 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AF6BC0;
L_08AF6D98:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(255));
    ctx.gpr[6] = (ctx.gpr[10] & ctx.gpr[2]);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(128));
    ctx.gpr[7] = (ctx.gpr[11] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(1023));
      if (branch_taken) {
          goto L_08AF6DF8;
      }
      goto L_08AF6DB4;
    }
L_08AF6DB4:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(127));
    goto L_08AF6DB8;
L_08AF6DB8:
    ctx.gpr[2] = (ctx.gpr[10] < static_cast<std::uint32_t>(127) ? 1u : 0u);
    goto L_08AF6DBC;
L_08AF6DBC:
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[2] = (8191u << 16u);
    goto L_08AF6DC4;
L_08AF6DC4:
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[11] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[10] = (ctx.gpr[10] >> 8u);
        goto L_08AF6DEC;
    }
    goto L_08AF6DD4;
L_08AF6DD4:
    ctx.gpr[2] = (ctx.gpr[11] << 31u);
    ctx.gpr[10] = (ctx.gpr[10] >> 1u);
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[2]);
    ctx.gpr[11] = (ctx.gpr[11] >> 1u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] >> 8u);
    goto L_08AF6DEC;
L_08AF6DEC:
    ctx.gpr[2] = (ctx.gpr[11] << 24u);
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[2]);
    goto L_08AF6CB0;
L_08AF6DF8:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(127));
        goto L_08AF6DB8;
    }
    goto L_08AF6E00;
L_08AF6E00:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[2] = (ctx.gpr[10] & ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[11] & ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[2] = (8191u << 16u);
        goto L_08AF6DC4;
    }
    goto L_08AF6E1C;
L_08AF6E1C:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    ctx.gpr[2] = (ctx.gpr[10] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    goto L_08AF6DBC;
L_08AF6E28:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (15u << 16u);
    ctx.gpr[10] = (ctx.gpr[5] + 0u);
    ctx.gpr[7] = (ctx.gpr[2] >> 20u);
    ctx.gpr[5] = (ctx.gpr[2] >> 31u);
    ctx.gpr[3] = (ctx.gpr[3] | 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 2047u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF6ED0;
      }
      goto L_08AF6E54;
    }
L_08AF6E54:
    ctx.gpr[2] = (ctx.gpr[8] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[8] >> 24u);
      if (branch_taken) {
          goto L_08AF6E6C;
      }
      goto L_08AF6E60;
    }
L_08AF6E60:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(2));
    goto L_08AF6E64;
L_08AF6E64:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6E6C:
    ctx.gpr[4] = (4095u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] << 8u);
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] | 65535u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1022));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AF6EC4;
      }
      goto L_08AF6E98;
    }
L_08AF6E98:
    ctx.gpr[5] = (4095u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 65535u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1022));
    goto L_08AF6EA4;
L_08AF6EA4:
    ctx.gpr[3] = (ctx.gpr[8] >> 31u);
    ctx.gpr[9] = (ctx.gpr[9] << 1u);
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[5] < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] << 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF6EA4;
      }
      goto L_08AF6EC0;
    }
L_08AF6EC0:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08AF6EC4;
L_08AF6EC4:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6ED0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(2047));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    ctx.gpr[6] = (ctx.gpr[8] >> 24u);
      if (branch_taken) {
          goto L_08AF6F10;
      }
      goto L_08AF6EDC;
    }
L_08AF6EDC:
    ctx.gpr[3] = (ctx.gpr[9] << 8u);
    ctx.gpr[3] = (ctx.gpr[3] | ctx.gpr[6]);
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (ctx.gpr[8] << 8u);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
    ctx.gpr[3] = (ctx.gpr[3] | ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1023));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_08AF6E64;
L_08AF6F10:
    ctx.gpr[2] = (ctx.gpr[8] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF6E64;
      }
      goto L_08AF6F1C;
    }
L_08AF6F1C:
    ctx.gpr[3] = (8u << 16u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (ctx.gpr[8] & ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[9] & ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    if (ctx.gpr[2] == 0u) {
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), 0u);
        goto L_08AF6EC4;
    }
    goto L_08AF6F38;
L_08AF6F38:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AF6EC4;
L_08AF6F44:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[7] = (ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AF6F64;
      }
      goto L_08AF6F54;
    }
L_08AF6F54:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
        goto L_08AF6F70;
    }
    goto L_08AF6F64;
L_08AF6F64:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    goto L_08AF6F68;
L_08AF6F68:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6F70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
      if (branch_taken) {
          goto L_08AF6F94;
      }
      goto L_08AF6F78;
    }
L_08AF6F78:
    ctx.gpr[2] = (ctx.gpr[6] ^ 4u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
        goto L_08AF6F94;
    }
    goto L_08AF6F84;
L_08AF6F84:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[3] - ctx.gpr[2]);
    goto L_08AF6F68;
L_08AF6F94:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_08AF6FE8;
    }
    goto L_08AF6F9C;
L_08AF6F9C:
    ctx.gpr[2] = (ctx.gpr[6] ^ 4u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08AF6FCC;
    }
    goto L_08AF6FA8;
L_08AF6FA8:
    ctx.gpr[2] = (ctx.gpr[3] ^ 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[6] ^ 2u);
      if (branch_taken) {
          goto L_08AF6FDC;
      }
      goto L_08AF6FB4;
    }
L_08AF6FB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF6F68;
      }
      goto L_08AF6FBC;
    }
L_08AF6FBC:
    ctx.gpr[2] = (ctx.gpr[3] ^ 2u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[2] = (ctx.gpr[6] ^ 2u);
        goto L_08AF6FDC;
    }
    goto L_08AF6FC8;
L_08AF6FC8:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08AF6FCC;
L_08AF6FCC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AF6FD4;
L_08AF6FD4:
    if (ctx.gpr[3] == 0u) ctx.gpr[4] = (ctx.gpr[2]);
    goto L_08AF6F68;
L_08AF6FDC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_08AF6FF4;
    }
    goto L_08AF6FE4;
L_08AF6FE4:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_08AF6FE8;
L_08AF6FE8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_08AF6FD4;
L_08AF6FF4:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    if (ctx.gpr[6] == 0u) ctx.gpr[4] = (ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF6F68;
      }
      goto L_08AF7008;
    }
L_08AF7008:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    if (ctx.gpr[6] == 0u) ctx.gpr[4] = (ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF6F68;
      }
      goto L_08AF7020;
    }
L_08AF7020:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    if (ctx.gpr[6] == 0u) ctx.gpr[4] = (ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF6F68;
      }
      goto L_08AF7034;
    }
L_08AF7034:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[8] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08AF70A0;
    }
    goto L_08AF7048;
L_08AF7048:
    if (ctx.gpr[8] == ctx.gpr[4]) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_08AF708C;
    }
    goto L_08AF7050;
L_08AF7050:
    ctx.gpr[2] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    goto L_08AF7054;
L_08AF7054:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
        goto L_08AF7080;
    }
    goto L_08AF705C;
L_08AF705C:
    if (ctx.gpr[4] == ctx.gpr[8]) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
        goto L_08AF706C;
    }
    goto L_08AF7064;
L_08AF7064:
    ctx.gpr[4] = (0u + 0u);
    goto L_08AF6F68;
L_08AF706C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (0u + 0u);
        goto L_08AF6F68;
    }
    goto L_08AF707C;
L_08AF707C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    goto L_08AF7080;
L_08AF7080:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AF7084;
L_08AF7084:
    if (ctx.gpr[6] == 0u) ctx.gpr[4] = (ctx.gpr[2]);
    goto L_08AF6F68;
L_08AF708C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[2] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
        goto L_08AF7054;
    }
    goto L_08AF709C;
L_08AF709C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AF70A0;
L_08AF70A0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_08AF7084;
L_08AF70A8:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF711C;
      }
      goto L_08AF70C0;
    }
L_08AF70C0:
    ctx.gpr[2] = (16u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[2]);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(255));
    goto L_08AF70CC;
L_08AF70CC:
    ctx.gpr[3] = (127u << 16u);
    goto L_08AF70D0;
L_08AF70D0:
    ctx.gpr[2] = (65408u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] | 65535u);
    ctx.gpr[3] = (ctx.gpr[5] & ctx.gpr[3]);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[2]);
    ctx.gpr[5] = (32895u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] | 65535u);
    ctx.gpr[4] = (ctx.gpr[4] << 23u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[2] = (32767u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[3] = (ctx.gpr[8] << 31u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF711C:
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(255));
        goto L_08AF71CC;
    }
    goto L_08AF7128;
L_08AF7128:
    ctx.gpr[2] = (ctx.gpr[3] ^ 2u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (0u + 0u);
        goto L_08AF70CC;
    }
    goto L_08AF7134;
L_08AF7134:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[3] = (127u << 16u);
      if (branch_taken) {
          goto L_08AF70D0;
      }
      goto L_08AF713C;
    }
L_08AF713C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[4]) < -126 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[4]) < 128 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF71C0;
      }
      goto L_08AF714C;
    }
L_08AF714C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-126));
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[4]) < 26 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF71A4;
      }
      goto L_08AF7160;
    }
L_08AF7160:
    ctx.gpr[5] = (0u + 0u);
    goto L_08AF7164;
L_08AF7164:
    ctx.gpr[3] = (ctx.gpr[5] & 127u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(64));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.gpr[2] = (ctx.gpr[5] & 128u);
        goto L_08AF7194;
    }
    goto L_08AF7174;
L_08AF7174:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(63));
    goto L_08AF7178;
L_08AF7178:
    ctx.gpr[2] = (16383u << 16u);
    goto L_08AF717C;
L_08AF717C:
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != 0u) ctx.gpr[7] = (ctx.gpr[3]);
    goto L_08AF718C;
L_08AF718C:
    ctx.gpr[5] = (ctx.gpr[5] >> 7u);
    goto L_08AF70CC;
L_08AF7194:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
        goto L_08AF7178;
    }
    goto L_08AF719C;
L_08AF719C:
    ctx.gpr[2] = (16383u << 16u);
    goto L_08AF717C;
L_08AF71A4:
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (ctx.gpr[5] & ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[5] >> (ctx.gpr[4] & 31u));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[3] | ctx.gpr[2]);
    goto L_08AF7164;
L_08AF71C0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[3] = (ctx.gpr[5] & 127u);
        goto L_08AF71D4;
    }
    goto L_08AF71C8;
L_08AF71C8:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(255));
    goto L_08AF71CC;
L_08AF71CC:
    ctx.gpr[5] = (0u + 0u);
    goto L_08AF70CC;
L_08AF71D4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(127));
      if (branch_taken) {
          goto L_08AF71F8;
      }
      goto L_08AF71E0;
    }
L_08AF71E0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(63));
    goto L_08AF71E4;
L_08AF71E4:
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[5] >> 7u);
        goto L_08AF70CC;
    }
    goto L_08AF71EC;
L_08AF71EC:
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08AF718C;
L_08AF71F8:
    ctx.gpr[2] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
        goto L_08AF71E4;
    }
    goto L_08AF7204;
L_08AF7204:
    // nop
    goto L_08AF71E4;
L_08AF720C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[2] = (32836u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-6128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[3] = (ctx.gpr[2] | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AF731C;
      }
      goto L_08AF7238;
    }
L_08AF7238:
    ctx.gpr[9] = (2232u << 16u);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[3] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6008));
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(-6120));
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-1176), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2408));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-1180), ctx.gpr[3]);
    ctx.gpr[3] = (0u + 0u);
    goto L_08AF7264;
L_08AF7264:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[3] < static_cast<std::uint32_t>(608) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7264;
      }
      goto L_08AF7278;
    }
L_08AF7278:
    ctx.gpr[11] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1800));
    ctx.gpr[3] = (0u + 0u);
    goto L_08AF7284;
L_08AF7284:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[3] < static_cast<std::uint32_t>(608) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7284;
      }
      goto L_08AF7298;
    }
L_08AF7298:
    ctx.gpr[14] = (2232u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(448));
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[31] = (0x08AF72B0u);
    ctx.gpr[17] = (ctx.gpr[14] + static_cast<std::uint32_t>(-1192));
    ctx.pc = 0x08B0BA3Cu;
    return;
L_08AF72B0:
    ctx.gpr[13] = (32836u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[3] = (ctx.gpr[13] | 1u);
      if (branch_taken) {
          goto L_08AF731C;
      }
      goto L_08AF72C0;
    }
L_08AF72C0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[31] = (0x08AF72D4u);
    ctx.gpr[16] = (2232u << 16u);
    ctx.pc = 0x08B0BA3Cu;
    return;
L_08AF72D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-1172), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1172));
      if (branch_taken) {
          goto L_08AF7374;
      }
      goto L_08AF72E0;
    }
L_08AF72E0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x08AF72F0u);
    ctx.gpr[6] = (0u + 0u);
    ctx.pc = 0x08B0BA3Cu;
    return;
L_08AF72F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF7364;
      }
      goto L_08AF72F8;
    }
L_08AF72F8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x08AF7308u);
    ctx.gpr[6] = (0u + 0u);
    ctx.pc = 0x08B0BA3Cu;
    return;
L_08AF7308:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF733C;
      }
      goto L_08AF7310;
    }
L_08AF7310:
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-6128), ctx.gpr[16]);
    ctx.gpr[3] = (0u + 0u);
    goto L_08AF731C;
L_08AF731C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF733C:
    ctx.gpr[31] = (0x08AF7344u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08B0BA44u;
    return;
L_08AF7344:
    ctx.gpr[31] = (0x08AF734Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-1172)));
    ctx.pc = 0x08B0BA44u;
    return;
L_08AF734C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08AF7350;
L_08AF7350:
    ctx.gpr[31] = (0x08AF7358u);
    // nop
    ctx.pc = 0x08B0BA44u;
    return;
L_08AF7358:
    ctx.gpr[15] = (32836u << 16u);
    ctx.gpr[3] = (ctx.gpr[15] | 1u);
    goto L_08AF731C;
L_08AF7364:
    ctx.gpr[31] = (0x08AF736Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08B0BA44u;
    return;
L_08AF736C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-1172)));
    goto L_08AF7350;
L_08AF7374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08AF7350;
L_08AF737C:
    ctx.gpr[6] = (0u | 65408u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (ctx.gpr[4] + 0u);
    ctx.gpr[9] = (ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[5] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (32836u << 16u);
    ctx.gpr[2] = (ctx.gpr[6] < ctx.gpr[10] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 16u);
      if (branch_taken) {
          goto L_08AF73DC;
      }
      goto L_08AF73A4;
    }
L_08AF73A4:
    ctx.gpr[3] = (32836u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & 63u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (ctx.gpr[3] | 17u);
      if (branch_taken) {
          goto L_08AF73DC;
      }
      goto L_08AF73B4;
    }
L_08AF73B4:
    ctx.gpr[9] = (2232u << 16u);
    ctx.gpr[7] = (ctx.gpr[8] << 2u);
    ctx.gpr[2] = (32836u << 16u);
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1172));
    ctx.gpr[3] = (ctx.gpr[7] + ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[2] | 17u);
      if (branch_taken) {
          goto L_08AF73DC;
      }
      goto L_08AF73D0;
    }
L_08AF73D0:
    ctx.gpr[31] = (0x08AF73D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BA64u;
    return;
L_08AF73D8:
    ctx.gpr[6] = (ctx.gpr[2] + 0u);
    goto L_08AF73DC;
L_08AF73DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[6] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF73EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[10] = (0u | 32768u);
    ctx.gpr[2] = (32836u << 16u);
    ctx.gpr[11] = (ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[8] = (ctx.gpr[2] | 16u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[9] = (ctx.gpr[10] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF7444;
      }
      goto L_08AF740C;
    }
L_08AF740C:
    ctx.gpr[11] = (32836u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[11] | 10u);
      if (branch_taken) {
          goto L_08AF7444;
      }
      goto L_08AF741C;
    }
L_08AF741C:
    ctx.gpr[12] = (2232u << 16u);
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[9] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1172));
    ctx.gpr[4] = (32836u << 16u);
    ctx.gpr[3] = (ctx.gpr[8] + ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[4] | 10u);
      if (branch_taken) {
          goto L_08AF7444;
      }
      goto L_08AF7438;
    }
L_08AF7438:
    ctx.gpr[31] = (0x08AF7440u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BA34u;
    return;
L_08AF7440:
    ctx.gpr[8] = (ctx.gpr[2] + 0u);
    goto L_08AF7444;
L_08AF7444:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[8] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF7450:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08AF7454;
L_08AF7454:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[3] = (32836u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6128)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[3] | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AF74C0;
      }
      goto L_08AF747C;
    }
L_08AF747C:
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[31] = (0x08AF7488u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-1188)));
    ctx.pc = 0x08B0BA44u;
    return;
L_08AF7488:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-1172)));
    ctx.gpr[31] = (0x08AF7498u);
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1172));
    ctx.pc = 0x08B0BA44u;
    return;
L_08AF7498:
    ctx.gpr[31] = (0x08AF74A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08B0BA44u;
    return;
L_08AF74A0:
    ctx.gpr[31] = (0x08AF74A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0BA44u;
    return;
L_08AF74A8:
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-1176), 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-6128), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-1180), 0u);
    ctx.gpr[4] = (0u + 0u);
    goto L_08AF74C0;
L_08AF74C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF757C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    ctx.gpr[23] = (2232u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AF763C;
      }
      goto L_08AF75BC;
    }
L_08AF75BC:
    ctx.gpr[3] = (2232u << 16u);
    ctx.gpr[30] = (ctx.gpr[3] + 0u);
    ctx.gpr[22] = (ctx.gpr[3] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
    goto L_08AF75CC;
L_08AF75CC:
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] << 8u);
    ctx.gpr[31] = (0x08AF75DCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[22]);
    goto L_08AF7698;
L_08AF75DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[20] = (ctx.gpr[30] + static_cast<std::uint32_t>(-5992));
      if (branch_taken) {
          goto L_08AF7688;
      }
      goto L_08AF75E4;
    }
L_08AF75E4:
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[16] + 0u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(14));
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(112));
    goto L_08AF75F4;
L_08AF75F4:
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08AF7600u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08AF7698;
L_08AF7600:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08AF75F4;
      }
      goto L_08AF7608;
    }
L_08AF7608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[20]);
    ctx.gpr[31] = (0x08AF7618u);
    ctx.gpr[5] = (0u | 32768u);
    ctx.pc = 0x08B0BA2Cu;
    return;
L_08AF7618:
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[7] >> 31u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[8] << 1u);
    ctx.gpr[19] = (ctx.gpr[7] - ctx.gpr[2]);
    goto L_08AF7630;
L_08AF7630:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6124)));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
      if (branch_taken) {
          goto L_08AF75CC;
      }
      goto L_08AF763C;
    }
L_08AF763C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u + 0u);
    ctx.gpr[31] = (0x08AF764Cu);
    ctx.gpr[6] = (0u + 0u);
    ctx.pc = 0x08B0BA2Cu;
    return;
L_08AF764C:
    ctx.gpr[31] = (0x08AF7654u);
    ctx.gpr[4] = (0u + 0u);
    ctx.pc = 0x08B0BBD4u;
    return;
L_08AF7654:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF7688:
    ctx.gpr[31] = (0x08AF7690u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(10000));
    ctx.pc = 0x08B0BBF4u;
    return;
L_08AF7690:
    // nop
    goto L_08AF7630;
L_08AF7698:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[3] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (0u + 0u);
    goto L_08AF76D4;
L_08AF76D4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF76D4;
      }
      goto L_08AF76E8;
    }
L_08AF76E8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[3] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2408));
    ctx.gpr[16] = (ctx.gpr[3] + 0u);
    ctx.gpr[17] = (0u + 0u);
    ctx.gpr[30] = (ctx.gpr[3] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (0u + 0u);
    ctx.gpr[23] = (ctx.gpr[3] + 0u);
    goto L_08AF7704;
L_08AF7704:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_08AF7758;
    }
    goto L_08AF7710;
L_08AF7710:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AF7714;
L_08AF7714:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(76));
      if (branch_taken) {
          goto L_08AF7704;
      }
      goto L_08AF7724;
    }
L_08AF7724:
    ctx.gpr[2] = (ctx.gpr[20] + 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF7758:
    ctx.gpr[6] = (ctx.gpr[3] & 1024u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF77CC;
      }
      goto L_08AF7764;
    }
L_08AF7764:
    ctx.gpr[7] = (ctx.gpr[3] & 256u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AF77AC;
    }
    goto L_08AF7770;
L_08AF7770:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[9] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AF7798;
      }
      goto L_08AF777C;
    }
L_08AF777C:
    ctx.gpr[3] = (2232u << 16u);
    goto L_08AF7780;
L_08AF7780:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1176)));
    ctx.gpr[4] = (ctx.gpr[17] + 0u);
    ctx.gpr[31] = (0x08AF7790u);
    ctx.gpr[5] = (ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 25u, 0x08AF81E0u>(ctx, &aot_mem) && ctx.pc == 0x08AF7790u) goto L_08AF7790;
    return;
L_08AF7790:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AF7714;
L_08AF7798:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-1176)));
    ctx.gpr[31] = (0x08AF77A4u);
    ctx.gpr[4] = (ctx.gpr[17] + 0u);
    goto L_08AF79C4;
L_08AF77A4:
    ctx.gpr[3] = (2232u << 16u);
    goto L_08AF7780;
L_08AF77AC:
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[3] = (2232u << 16u);
        goto L_08AF7780;
    }
    goto L_08AF77B4;
L_08AF77B4:
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1176)));
    ctx.gpr[31] = (0x08AF77C4u);
    ctx.gpr[4] = (ctx.gpr[17] + 0u);
    goto L_08AF7C70;
L_08AF77C4:
    ctx.gpr[3] = (2232u << 16u);
    goto L_08AF7780;
L_08AF77CC:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[3] = (2232u << 16u);
        goto L_08AF7780;
    }
    goto L_08AF77D8;
L_08AF77D8:
    ctx.gpr[12] = (2232u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-1176)));
    ctx.gpr[4] = (0u + 0u);
    goto L_08AF77E4;
L_08AF77E4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (ctx.gpr[4] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF77E4;
      }
      goto L_08AF77F8;
    }
L_08AF77F8:
    ctx.gpr[18] = (ctx.gpr[19] + ctx.gpr[23]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[14] = (ctx.gpr[15] & 256u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[25] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AF7858;
      }
      goto L_08AF780C;
    }
L_08AF780C:
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-1180)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[2];
    ctx.gpr[31] = (0x08AF7828u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF7828u) goto L_08AF7828;
    return;
L_08AF7828:
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), 0u);
        goto L_08AF7830;
    }
    goto L_08AF7830;
L_08AF7830:
    ctx.gpr[24] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-1180)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(-1176)));
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[22] + static_cast<std::uint32_t>(-2356));
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[30]);
    ctx.gpr[31] = (0x08AF7850u);
    ctx.gpr[7] = (ctx.gpr[19] + ctx.gpr[18]);
    goto L_08AF7880;
L_08AF7850:
    ctx.gpr[3] = (2232u << 16u);
    goto L_08AF7780;
L_08AF7858:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(-1176)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[22];
    ctx.gpr[31] = (0x08AF7870u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(112));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF7870u) goto L_08AF7870;
    return;
L_08AF7870:
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), 0u);
        goto L_08AF777C;
    }
    goto L_08AF7878;
L_08AF7878:
    ctx.gpr[3] = (2232u << 16u);
    goto L_08AF7780;
L_08AF7880:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[15] = (ctx.gpr[5] + 0u);
    ctx.gpr[10] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[2] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1344));
    ctx.gpr[19] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[20] = (ctx.gpr[7] + 0u);
    ctx.gpr[12] = (0u + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 4u));
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[2]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(7));
    ctx.gpr[5] = (ctx.gpr[3] & 15u);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(5))))));
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[6];
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08AF79A4;
      }
      goto L_08AF78E0;
    }
L_08AF78E0:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(14));
    ctx.gpr[16] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[4] + 0u);
    ctx.gpr[24] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(32767));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(13));
    goto L_08AF78FC;
L_08AF78FC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.gpr[15] + ctx.gpr[12]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(32767));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-32768));
    ctx.gpr[5] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[3] = (ctx.gpr[4] << 28u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[24] & 31u)));
    ctx.gpr[3] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[3] << (ctx.gpr[16] & 31u));
    ctx.gpr[10] = (ctx.lo);
    ctx.gpr[3] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 6u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[25]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) ctx.gpr[5] = (ctx.gpr[6]);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < -32768 ? 1u : 0u);
    if (ctx.gpr[10] != 0u) ctx.gpr[5] = (ctx.gpr[7]);
    ctx.gpr[3] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[9] + ctx.gpr[3]);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 6u));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[25]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) ctx.gpr[4] = (ctx.gpr[6]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < -32768 ? 1u : 0u);
    if (ctx.gpr[9] != 0u) ctx.gpr[4] = (ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[10] = (ctx.gpr[5] + 0u);
    ctx.gpr[9] = (ctx.gpr[4] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) >= 0;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF78FC;
      }
      goto L_08AF7998;
    }
L_08AF7998:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[3] = (ctx.gpr[17] + 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AF79A4;
L_08AF79A4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF79C4:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2408));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[5] + 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (0u + 0u);
    goto L_08AF79FC;
L_08AF79FC:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[3] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF79FC;
      }
      goto L_08AF7A10;
    }
L_08AF7A10:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[11] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2408));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[12] + ctx.gpr[11]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF7BCC;
      }
      goto L_08AF7A34;
    }
L_08AF7A34:
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7B3C;
      }
      goto L_08AF7A3C;
    }
L_08AF7A3C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[4]) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08AF7A5C;
    }
    goto L_08AF7A48;
L_08AF7A48:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08AF7A4C;
L_08AF7A4C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF7A5C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[3]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AF7A4C;
      }
      goto L_08AF7A68;
    }
L_08AF7A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[11] != 0u) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
        goto L_08AF7B34;
    }
    goto L_08AF7A7C;
L_08AF7A7C:
    ctx.gpr[11] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-1180)));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[6] = (0u + 0u);
    goto L_08AF7A8C;
L_08AF7A8C:
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7A8C;
      }
      goto L_08AF7AA8;
    }
L_08AF7AA8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AF7AAC;
L_08AF7AAC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2360));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-1180)));
    ctx.gpr[2] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[10] + 0u);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[31] = (0x08AF7AD4u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[17]);
    goto L_08AF7880;
L_08AF7AD4:
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[10];
    ctx.gpr[14] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08AF7B18;
      }
      goto L_08AF7AE0;
    }
L_08AF7AE0:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[14];
    ctx.gpr[12] = (ctx.gpr[17] + static_cast<std::uint32_t>(-48));
      if (branch_taken) {
          goto L_08AF7AFC;
      }
      goto L_08AF7AE8;
    }
L_08AF7AE8:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[12]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[11]);
    goto L_08AF7A48;
L_08AF7AFC:
    ctx.gpr[24] = (ctx.gpr[17] + static_cast<std::uint32_t>(-48));
    ctx.gpr[15] = (ctx.gpr[16] + ctx.gpr[24]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    goto L_08AF7A48;
L_08AF7B18:
    ctx.gpr[3] = (ctx.gpr[17] + static_cast<std::uint32_t>(-48));
    ctx.gpr[25] = (ctx.gpr[16] + ctx.gpr[3]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    goto L_08AF7A48;
L_08AF7B34:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    goto L_08AF7A48;
L_08AF7B3C:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AF7A4C;
      }
      goto L_08AF7B44;
    }
L_08AF7B44:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[14] != 0u) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
        goto L_08AF7B34;
    }
    goto L_08AF7B5C;
L_08AF7B5C:
    ctx.gpr[11] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-1180)));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (0u + 0u);
    goto L_08AF7B6C;
L_08AF7B6C:
    ctx.gpr[24] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[8] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7B6C;
      }
      goto L_08AF7B88;
    }
L_08AF7B88:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2408));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-1180)));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(52));
    ctx.gpr[11] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    ctx.gpr[3] = (ctx.lo);
    ctx.gpr[25] = (ctx.gpr[3] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[3] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[10] + 0u);
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[31] = (0x08AF7BC4u);
    ctx.gpr[6] = (ctx.gpr[3] + ctx.gpr[11]);
    goto L_08AF7880;
L_08AF7BC4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08AF7A4C;
L_08AF7BCC:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AF7A4C;
      }
      goto L_08AF7BDC;
    }
L_08AF7BDC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[13] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(76));
      if (branch_taken) {
          goto L_08AF7C24;
      }
      goto L_08AF7BF0;
    }
L_08AF7BF0:
    ctx.gpr[11] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-1180)));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (0u + 0u);
    goto L_08AF7C00;
L_08AF7C00:
    ctx.gpr[15] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7C00;
      }
      goto L_08AF7C1C;
    }
L_08AF7C1C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AF7AAC;
L_08AF7C24:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[25] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2408));
    ctx.gpr[11] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-1180)));
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[24] = (ctx.lo);
    ctx.gpr[17] = (ctx.gpr[24] + ctx.gpr[25]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[16]);
    goto L_08AF7C4C;
L_08AF7C4C:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7C4C;
      }
      goto L_08AF7C68;
    }
L_08AF7C68:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AF7AAC;
L_08AF7C70:
    ctx.gpr[8] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[10] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2408));
    ctx.gpr[11] = (ctx.gpr[5] + 0u);
    ctx.gpr[3] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[3] + ctx.gpr[6]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF7E50;
      }
      goto L_08AF7CA0;
    }
L_08AF7CA0:
    ctx.gpr[5] = (ctx.gpr[3] & 512u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AF7D8C;
      }
      goto L_08AF7CAC;
    }
L_08AF7CAC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[13] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[11] + 0u);
      if (branch_taken) {
          goto L_08AF7D0C;
      }
      goto L_08AF7CC4;
    }
L_08AF7CC4:
    ctx.gpr[4] = (ctx.gpr[12] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[11] + 0u);
    goto L_08AF7CCC;
L_08AF7CCC:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[6] < static_cast<std::uint32_t>(56) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7CCC;
      }
      goto L_08AF7CE8;
    }
L_08AF7CE8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AF7CEC;
L_08AF7CEC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[14] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2408));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[6] + ctx.gpr[14]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[3] = (ctx.gpr[8] + static_cast<std::uint32_t>(56));
    goto L_08AF7D04;
L_08AF7D04:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF7D0C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[6] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7D0C;
      }
      goto L_08AF7D20;
    }
L_08AF7D20:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2408));
    ctx.gpr[5] = (ctx.gpr[11] + 0u);
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[25] = (ctx.gpr[6] + ctx.gpr[2]);
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(32)));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[15] - ctx.gpr[24]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[12] + ctx.gpr[24]);
      if (branch_taken) {
          goto L_08AF7D6C;
      }
      goto L_08AF7D50;
    }
L_08AF7D50:
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7D50;
      }
      goto L_08AF7D6C;
    }
L_08AF7D6C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AF7D70;
L_08AF7D70:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[12] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2408));
    ctx.gpr[11] = (ctx.lo);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(28), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(32), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF7D8C:
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[15] = (ctx.gpr[5] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[11] + 0u);
      if (branch_taken) {
          goto L_08AF7DE8;
      }
      goto L_08AF7DA4;
    }
L_08AF7DA4:
    ctx.gpr[4] = (ctx.gpr[12] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[11] + 0u);
    goto L_08AF7DAC;
L_08AF7DAC:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[6] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7DAC;
      }
      goto L_08AF7DC8;
    }
L_08AF7DC8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AF7DCC;
L_08AF7DCC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[24] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2408));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[24]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[3] = (ctx.gpr[8] + static_cast<std::uint32_t>(112));
    goto L_08AF7D04;
L_08AF7DE8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[25] = (ctx.gpr[6] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7DE8;
      }
      goto L_08AF7DFC;
    }
L_08AF7DFC:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2408));
    ctx.gpr[5] = (ctx.gpr[11] + 0u);
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[3] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[3] + ctx.gpr[2]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[9] - ctx.gpr[13]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[12] + ctx.gpr[13]);
      if (branch_taken) {
          goto L_08AF7D6C;
      }
      goto L_08AF7E2C;
    }
L_08AF7E2C:
    ctx.gpr[15] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7E2C;
      }
      goto L_08AF7E48;
    }
L_08AF7E48:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AF7D70;
L_08AF7E50:
    ctx.gpr[24] = (ctx.gpr[3] & 512u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(76));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 4u, 0x08AF8020u>(ctx, &aot_mem); return;
      }
      goto L_08AF7E5C;
    }
L_08AF7E5C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[25] = (static_cast<std::int32_t>(ctx.gpr[3]) < 56 ? 1u : 0u);
    if (ctx.gpr[25] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
        goto L_08AF7F48;
    }
    goto L_08AF7E6C;
L_08AF7E6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[13] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[3] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF7EB0;
      }
      goto L_08AF7E80;
    }
L_08AF7E80:
    ctx.gpr[4] = (ctx.gpr[12] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[11] + 0u);
    ctx.gpr[6] = (0u + 0u);
    goto L_08AF7E8C;
L_08AF7E8C:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(56) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7E8C;
      }
      goto L_08AF7EA8;
    }
L_08AF7EA8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AF7CEC;
L_08AF7EB0:
    ctx.gpr[6] = (ctx.gpr[12] + ctx.gpr[4]);
    ctx.gpr[7] = (0u + 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[11] + 0u);
      if (branch_taken) {
          goto L_08AF7EDC;
      }
      goto L_08AF7EC0;
    }
L_08AF7EC0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[15] = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7EC0;
      }
      goto L_08AF7EDC;
    }
L_08AF7EDC:
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2408));
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[25] - ctx.gpr[9]);
    ctx.gpr[24] = (ctx.lo);
    ctx.gpr[11] = (ctx.gpr[24] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF7F28;
      }
      goto L_08AF7F0C;
    }
L_08AF7F0C:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7F0C;
      }
      goto L_08AF7F28;
    }
L_08AF7F28:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2408));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(56));
    goto L_08AF7F38;
L_08AF7F38:
    ctx.gpr[2] = (ctx.lo);
    ctx.gpr[3] = (ctx.gpr[3] - ctx.gpr[9]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08AF7D04;
L_08AF7F48:
    ctx.gpr[6] = (ctx.gpr[11] + 0u);
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[5] = (ctx.gpr[3] - ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[12] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08AF7F78;
      }
      goto L_08AF7F5C;
    }
L_08AF7F5C:
    ctx.gpr[15] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7F5C;
      }
      goto L_08AF7F78;
    }
L_08AF7F78:
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[25])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[24] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2408));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(56));
    ctx.gpr[10] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[8] + 0u);
    goto L_08AF7F9C;
L_08AF7F9C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF7FE4;
      }
      goto L_08AF7FAC;
    }
L_08AF7FAC:
    ctx.gpr[6] = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF7FD4;
      }
      goto L_08AF7FB8;
    }
L_08AF7FB8:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7FB8;
      }
      goto L_08AF7FD4;
    }
L_08AF7FD4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    goto L_08AF7F9C;
L_08AF7FE4:
    ctx.gpr[5] = (ctx.gpr[11] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 2u, 0x08AF8010u>(ctx, &aot_mem); return;
      }
      goto L_08AF7FF4;
    }
L_08AF7FF4:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[7] < ctx.gpr[10] ? 1u : 0u);
    ctx.pc = 0x08AF8000u; return;
}

void recomp_unit_0188(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0188_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_188(Runtime &runtime) {
    runtime.register_generated_unit(188u, 0x08AF4000u, 16384u, &recomp_unit_0188, &recomp_unit_0188_entry);
    runtime.register_function(0x08AF4004u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4010u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF401Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4020u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4034u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4060u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF406Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4078u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF407Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4090u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF40BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF40C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF40D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF40D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF40ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4110u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF411Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4128u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF412Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4140u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF416Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4178u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4184u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4188u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF419Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF41A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF41ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF41B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF41BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF41C4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF41D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF41ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4200u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4204u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4214u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4230u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4250u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF425Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4278u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4288u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4290u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF42B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF42BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF42D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4328u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4330u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4340u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF435Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF437Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4388u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4398u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF43A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF43BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4408u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4418u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4428u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4444u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF444Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4468u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4478u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4484u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF448Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4494u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4498u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF44B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF44C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF44E0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF44F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF44F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4508u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4510u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF451Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4524u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4530u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4538u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4544u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4550u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4558u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4560u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4570u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF457Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4584u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4594u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF459Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF45A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF45B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF45B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF45C4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF45D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF45D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF45E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF45ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF45F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4600u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF460Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4614u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF461Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF463Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4658u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4674u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF467Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF46A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF46C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF46ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF46F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4700u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4728u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4738u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4740u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4798u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF47A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF47A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF47B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF47C4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4820u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4824u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4834u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4838u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4840u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF484Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4854u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4864u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4894u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF48B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF48BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF48C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF48D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF48E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF48F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF48F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4904u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4910u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4914u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF491Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4930u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4940u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF494Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4954u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4978u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF49ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF49BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF49DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A00u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A14u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A2Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A38u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A60u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A68u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A70u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A88u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4AA0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4AACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4AC0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4AE0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4AE8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4AFCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B14u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B1Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B24u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B2Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B34u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B54u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B60u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B84u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B8Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4BACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4BB8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4BD8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C10u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C68u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C74u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4CB4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4CB8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4CC4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4CD4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4CE4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4D0Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4D24u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4D34u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4D54u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4D64u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4D74u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4D88u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4DB8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4DD8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4DF4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4DFCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E24u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E30u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E3Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E48u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E74u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E98u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4EB4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4ED4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4F10u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4F20u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4F2Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4F34u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4F44u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4F6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4F74u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4F88u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4F90u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4F98u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4FB0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4FB8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4FDCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4FF0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF500Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5024u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5038u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5064u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF508Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF50B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF50D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF50DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF50ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5100u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5108u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF511Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5138u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5170u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF517Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5188u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5190u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF51A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF51FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5204u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5250u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5264u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF52A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF52B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF530Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5314u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5360u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF537Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5388u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5398u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF53A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF53BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF53C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF53D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF53E8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF53F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF53F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5404u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5414u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5420u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5440u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF544Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5454u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5458u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5474u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5484u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF549Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF54A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF54B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF54C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF54CCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF54D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF54E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF54F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF54FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5504u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF550Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5540u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF554Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5560u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5578u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5588u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5590u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF559Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF55ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF55B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF55CCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF55D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5600u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5604u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5610u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5618u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5628u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5634u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5640u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5644u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5650u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF565Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5670u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF56A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF56B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF56C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF56CCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF56D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF56DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF56ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF56FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF572Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5740u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF574Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5760u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5784u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF57C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF57ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF57F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5800u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5808u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5810u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF581Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5828u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5834u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58C4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58CCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58E0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5914u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5918u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5920u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF592Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5950u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5958u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5964u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF596Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5994u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF599Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF59A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF59ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF59B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF59C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF59D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF59DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF59E8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A1Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A48u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A54u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5AA4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5ABCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5AE4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B0Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B14u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B1Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B24u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B40u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B58u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B68u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B7Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B90u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5BC0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5BD4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5BE0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5BF0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5BFCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C24u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C8Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C94u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C9Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5CC0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5CD4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5CE4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5CF0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5CF4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D04u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D10u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D34u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D48u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D50u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D58u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D60u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D84u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D9Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5DC4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5DD0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5DECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5DFCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E08u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E10u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E24u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E2Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E34u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E3Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E48u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E50u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E94u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E9Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5EC0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5ECCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5ED4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5EE0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F08u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F10u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F18u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F24u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F4Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F50u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F54u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F60u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F70u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F80u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F88u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F98u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5FC4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5FCCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5FD0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5FD4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF601Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6024u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF602Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6030u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6048u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF608Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6094u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF609Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF60A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF60C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF60F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF60F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6108u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6118u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF614Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6158u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6168u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6170u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6180u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF61B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF61C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF61DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF61E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF61F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6238u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6244u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6258u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6268u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6274u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6284u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6288u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF629Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF62A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF62C4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF62CCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF62DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF62E0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF62F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6300u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF630Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF636Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6374u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6378u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6398u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF63A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF63A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6408u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6424u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6448u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6460u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6468u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF647Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6488u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF64A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF64C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF64D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF64DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF64F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF64F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6514u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6520u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6524u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6530u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF653Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6544u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6548u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6554u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF655Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF656Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF65A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF65ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF65C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF65D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF65E8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF65F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6600u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6604u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF660Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF661Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6624u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6640u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6648u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6658u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF667Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6684u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6694u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF669Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF66A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF66A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF66C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF66F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6708u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6718u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6720u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF673Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6748u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF674Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6758u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6760u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6768u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6770u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6790u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF67C4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF67D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF67DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF67ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6808u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6810u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6818u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF681Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6824u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6830u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF683Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6844u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6864u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF686Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF689Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF68A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF68BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF68C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF68ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6900u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6908u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6914u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6924u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6930u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF693Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF694Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6968u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6974u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF697Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6988u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF698Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF699Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF69C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF69D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF69E0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6A08u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6A14u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6A38u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6A80u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6A8Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6AB0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6AB8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6ADCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6AE4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6AF4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6AF8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B00u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B08u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B14u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B30u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B38u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B40u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B4Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B58u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B7Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B88u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6BA8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6BBCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6BC0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C1Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C28u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C34u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C40u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C50u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C64u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C84u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C88u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C8Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C94u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6CB0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6CB8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6CC0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6CDCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6CE8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6CFCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D08u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D10u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D1Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D20u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D48u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D54u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D5Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D68u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D80u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D88u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D98u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6DB4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6DB8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6DBCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6DC4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6DD4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6DECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6DF8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E00u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E1Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E28u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E54u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E60u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E64u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E98u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6EA4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6EC0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6EC4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6ED0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6EDCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F10u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F1Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F38u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F44u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F54u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F64u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F68u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F70u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F78u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F84u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F94u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F9Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6FA8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6FB4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6FBCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6FC8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6FCCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6FD4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6FDCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6FE4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6FE8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6FF4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7008u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7020u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7034u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7048u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7050u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7054u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF705Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7064u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF706Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF707Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7080u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7084u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF708Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF709Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF70A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF70A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF70C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF70CCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF70D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF711Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7128u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7134u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF713Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF714Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7160u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7164u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7174u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7178u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF717Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF718Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7194u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF719Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF71A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF71C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF71C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF71CCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF71D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF71E0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF71E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF71ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF71F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7204u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF720Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7238u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7264u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7278u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7284u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7298u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF72B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF72C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF72D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF72E0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF72F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF72F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7308u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7310u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF731Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF733Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7344u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF734Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7350u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7358u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7364u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF736Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7374u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF737Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF73A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF73B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF73D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF73D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF73DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF73ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF740Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF741Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7438u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7440u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7444u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7450u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7454u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF747Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7488u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7498u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF74A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF74A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF74C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF757Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF75BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF75CCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF75DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF75E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF75F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7600u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7608u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7618u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7630u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF763Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF764Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7654u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7688u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7690u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7698u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF76D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF76E8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7704u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7710u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7714u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7724u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7758u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7764u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7770u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF777Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7780u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7790u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7798u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF77A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF77ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF77B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF77C4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF77CCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF77D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF77E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF77F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF780Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7828u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7830u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7850u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7858u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7870u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7878u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7880u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF78E0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF78FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7998u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF79A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF79C4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF79FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7A10u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7A34u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7A3Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7A48u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7A4Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7A5Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7A68u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7A7Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7A8Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7AA8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7AACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7AD4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7AE0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7AE8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7AFCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B18u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B34u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B3Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B44u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B5Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B88u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7BC4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7BCCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7BDCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7BF0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7C00u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7C1Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7C24u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7C4Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7C68u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7C70u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7CA0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7CACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7CC4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7CCCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7CE8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7CECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D04u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D0Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D20u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D50u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D70u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D8Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7DA4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7DACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7DC8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7DCCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7DE8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7DFCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E2Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E48u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E50u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E5Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E80u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E8Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7EA8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7EB0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7EC0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7EDCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F0Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F28u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F38u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F48u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F5Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F78u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F9Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7FACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7FB8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7FD4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7FE4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7FF4u, &recomp_unit_0188, "recomp_unit_0188");
}
} // namespace psprecomp
