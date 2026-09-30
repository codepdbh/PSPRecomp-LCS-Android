#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0038[4089] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8,
    0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    20, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0,
    24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 33, 34, 0, 35, 0, 0, 36,
    0, 37, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 40, 0, 41, 0, 42, 0, 43, 44, 0, 0, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0,
    0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 0, 65, 0, 66, 0, 67,
    0, 0, 0, 0, 68, 0, 0, 0, 69, 70, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 76, 0,
    77, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0,
    89, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 94, 0, 0, 0, 0, 95, 0, 96, 0, 0, 97, 0, 98, 0, 99, 0, 0, 0,
    0, 100, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 103, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0,
    0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 117, 0, 118, 0, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0,
    0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0,
    0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0,
    0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 165, 0, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0,
    171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0,
    0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0,
    0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198,
    0, 0, 199, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0,
    207, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 211, 0, 0, 212, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0,
    0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 220, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0,
    0, 0, 0, 223, 0, 224, 0, 225, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 230, 0, 231, 0, 232, 0, 233, 0,
    234, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0,
    242, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 258, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266,
    0, 0, 267, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    275, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 282, 0,
    0, 283, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 289, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0,
    292, 293, 0, 294, 0, 295, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 300, 0, 0, 301, 0, 302, 0, 303, 0,
    0, 0, 304, 305, 0, 0, 306, 0, 307, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 314, 0, 315, 0, 0, 0, 316, 0, 317, 0,
    0, 0, 318, 0, 0, 0, 319, 320, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 325, 0, 326, 0, 327, 0,
    0, 0, 328, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 337, 0, 0,
    0, 338, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 362, 0, 363, 0, 364,
    0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 369, 0, 0, 0, 370, 0, 371, 0, 372, 0, 0, 0, 0, 373,
    0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 376, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0,
    381, 0, 382, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 389, 0, 0,
    0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0,
    0, 0, 0, 397, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0,
    404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0,
    0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0,
    414, 0, 0, 415, 0, 416, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0,
    0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 426,
    0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0,
    0, 0, 433, 0, 0, 434, 0, 435, 0, 436, 0, 437, 0, 0, 438, 0, 0, 0, 439, 0, 440, 0, 441, 0, 442, 0, 443, 0, 444, 0, 0, 0,
    0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 449, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452,
    0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 459, 0, 0, 0,
    0, 460, 0, 0, 461, 0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 466, 467, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0,
    471, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0,
    0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 480, 0,
    0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 487, 0,
    488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 491, 0, 492, 0, 0, 0, 493, 0, 494, 0, 495, 0, 496, 497,
    498, 0, 0, 0, 499, 0, 0, 0, 500, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 504, 0, 0, 505, 0, 0, 506, 0, 0, 0,
    507, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 514, 0,
    0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 518, 0, 0, 0, 519, 0, 0, 520, 0, 0, 521, 0, 0,
    0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 528, 0,
    0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 535, 0,
    536, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 541,
    0, 0, 542, 0, 0, 543, 0, 544, 0, 545, 0, 546, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 550, 0, 551, 0, 0, 0,
    0, 552, 0, 0, 553, 0, 0, 554, 0, 0, 555, 0, 556, 0, 557, 0, 558, 0, 559, 0, 0, 560, 0, 0, 0, 0, 561, 0, 562, 0, 563, 0,
    0, 0, 564, 0, 565, 0, 566, 0, 567, 0, 568, 0, 569, 0, 570, 0, 571, 572, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 574, 0, 575, 0, 0, 576, 0, 577, 578, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0,
    582, 0, 583, 0, 0, 584, 0, 0, 0, 585, 586, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    589, 0, 0, 590, 0, 0, 0, 591, 0, 592, 0, 593, 0, 594, 0, 0, 0, 595, 596, 0, 597, 0, 0, 0, 598, 0, 599, 0, 600, 0, 601, 0,
    0, 0, 0, 0, 0, 602, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 0, 607, 0, 0, 608, 0,
    0, 0, 609, 0, 610, 0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0, 614, 0, 0, 0, 615, 0, 0, 616, 0, 617, 0, 618, 0, 0, 619,
    0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 623, 0, 0, 0, 624, 0, 625, 0,
    626, 627, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 631, 0, 0, 0, 0, 632, 0, 0,
    633, 0, 0, 0, 634, 0, 0, 0, 635, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 639, 640, 0, 641, 0, 0,
    0, 0, 0, 0, 642, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 647, 0, 0, 0, 0, 648, 0, 0, 649, 0, 0, 0, 0, 650, 0, 651, 0, 0, 0, 0, 0, 652, 653, 0, 0, 0, 0, 654, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 656, 0, 657, 0, 0, 658, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 662, 0, 0, 0, 663, 0, 0, 0, 664, 0, 0, 0, 0, 0, 665, 666, 0, 0, 0, 0, 0, 667, 0, 0, 0, 668, 0, 669, 0, 0, 670,
    0, 0, 0, 671, 0, 672, 0, 0, 0, 0, 673, 0, 674, 0, 0, 0, 0, 675, 0, 0, 676, 0, 0, 0, 677, 0, 678, 0, 0, 0, 0, 679,
    0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0,
    684, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 687, 0, 0, 688, 689, 0, 0, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 692, 0, 693, 0,
    0, 0, 694, 0, 0, 0, 695, 0, 0, 0, 696, 0, 697, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 700, 0, 0, 701, 0, 0, 702, 0, 703,
    0, 0, 704, 0, 0, 705, 0, 0, 706, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 0, 0, 0, 710, 0,
    0, 0, 0, 0, 0, 711, 0, 712, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 715,
    0, 716, 0, 717, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 721, 0, 0, 0, 722, 0, 723, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 724, 0, 725, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 727, 0, 728, 0, 729, 0, 0, 0, 0, 0, 0, 730,
    0, 0, 731, 0, 0, 732, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 735, 0, 736, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0, 741, 0, 0, 0, 742,
    0, 0, 743, 0, 0, 744, 0, 745, 746, 0, 747, 0, 748, 0, 0, 749, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 751, 0, 752, 0, 0, 0,
    0, 753, 0, 754, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 757, 0, 0, 0, 758, 0, 0, 0, 0, 0, 759, 0,
    0, 0, 0, 0, 0, 760, 0, 761, 0, 762, 0, 763, 0, 764, 0, 765, 0, 766, 767, 0, 768, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0,
    770, 0, 0, 0, 0, 771, 0, 772, 0, 773, 0, 774, 0, 0, 775, 0, 0, 0, 776, 0, 777, 778, 0, 779, 780, 0, 0, 781, 0, 0, 782, 0,
    0, 0, 783, 0, 784, 785, 0, 786, 0, 787, 0, 0, 788, 0, 789, 0, 790, 791, 0, 792, 0, 0, 793, 0, 0, 794, 0, 795, 796, 0, 797, 0,
    0, 798, 0, 799, 0, 0, 800, 0, 801, 0, 0, 0, 802, 0, 803, 804, 0, 805, 0, 0, 0, 806, 0, 807, 0, 0, 0, 808, 0, 809, 0, 810,
    0, 0, 0, 0, 0, 0, 811, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 813, 0, 0, 0, 814, 0, 815, 0, 816, 0, 0, 0, 817, 0, 0, 0, 818, 0, 819, 0, 820, 0, 0, 0, 821, 0, 822, 823, 0,
    824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 826, 827, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 0,
    0, 0, 0, 0, 830, 0, 831, 832, 0, 833, 0, 0, 0, 834, 0, 0, 835, 0, 836, 0, 837, 0, 838, 0, 839, 0, 840, 0, 0, 0, 0, 0,
    841, 0, 0, 842, 0, 843, 844, 0, 845, 0, 0, 0, 846, 0, 847, 0, 848, 0, 849, 850, 0, 851, 0, 0, 0, 0, 852, 0, 0, 853, 0, 0,
    854, 0, 855, 0, 856, 857, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 859, 0, 0, 860, 0, 861, 0, 862, 0, 863, 0, 864, 0, 865, 0, 866,
    0, 0, 867, 0, 0, 0, 868, 0, 869, 0, 870, 0, 871, 0, 872, 0, 0, 873, 0, 874, 0, 0, 875, 0, 0, 0, 876, 0, 0, 877, 0, 878,
    0, 879, 0, 0, 880, 0, 881, 882, 0, 0, 0, 0, 883, 0, 0, 884, 0, 885, 0, 886, 0, 887, 888, 0, 889,
};
void recomp_unit_0038_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0889C000u;
        entry_id = (entry_delta < 16356u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0038[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0889C000;
    case 2u: goto L_0889C028;
    case 3u: goto L_0889C030;
    case 4u: goto L_0889C088;
    case 5u: goto L_0889C0C4;
    case 6u: goto L_0889C0C8;
    case 7u: goto L_0889C0D8;
    case 8u: goto L_0889C17C;
    case 9u: goto L_0889C184;
    case 10u: goto L_0889C1C8;
    case 11u: goto L_0889C1D0;
    case 12u: goto L_0889C244;
    case 13u: goto L_0889C250;
    case 14u: goto L_0889C268;
    case 15u: goto L_0889C288;
    case 16u: goto L_0889C2A0;
    case 17u: goto L_0889C2BC;
    case 18u: goto L_0889C2D8;
    case 19u: goto L_0889C2F4;
    case 20u: goto L_0889C300;
    case 21u: goto L_0889C308;
    case 22u: goto L_0889C324;
    case 23u: goto L_0889C374;
    case 24u: goto L_0889C380;
    case 25u: goto L_0889C388;
    case 26u: goto L_0889C3C4;
    case 27u: goto L_0889C3D0;
    case 28u: goto L_0889C40C;
    case 29u: goto L_0889C420;
    case 30u: goto L_0889C440;
    case 31u: goto L_0889C454;
    case 32u: goto L_0889C45C;
    case 33u: goto L_0889C464;
    case 34u: goto L_0889C468;
    case 35u: goto L_0889C470;
    case 36u: goto L_0889C47C;
    case 37u: goto L_0889C484;
    case 38u: goto L_0889C488;
    case 39u: goto L_0889C4C0;
    case 40u: goto L_0889C50C;
    case 41u: goto L_0889C514;
    case 42u: goto L_0889C51C;
    case 43u: goto L_0889C524;
    case 44u: goto L_0889C528;
    case 45u: goto L_0889C538;
    case 46u: goto L_0889C540;
    case 47u: goto L_0889C550;
    case 48u: goto L_0889C570;
    case 49u: goto L_0889C578;
    case 50u: goto L_0889C598;
    case 51u: goto L_0889C5A0;
    case 52u: goto L_0889C5A8;
    case 53u: goto L_0889C5C0;
    case 54u: goto L_0889C5C8;
    case 55u: goto L_0889C5D0;
    case 56u: goto L_0889C5F0;
    case 57u: goto L_0889C600;
    case 58u: goto L_0889C620;
    case 59u: goto L_0889C628;
    case 60u: goto L_0889C638;
    case 61u: goto L_0889C644;
    case 62u: goto L_0889C64C;
    case 63u: goto L_0889C654;
    case 64u: goto L_0889C65C;
    case 65u: goto L_0889C66C;
    case 66u: goto L_0889C674;
    case 67u: goto L_0889C67C;
    case 68u: goto L_0889C690;
    case 69u: goto L_0889C6A0;
    case 70u: goto L_0889C6A4;
    case 71u: goto L_0889C6B0;
    case 72u: goto L_0889C6C4;
    case 73u: goto L_0889C6D8;
    case 74u: goto L_0889C6E8;
    case 75u: goto L_0889C6F0;
    case 76u: goto L_0889C6F8;
    case 77u: goto L_0889C700;
    case 78u: goto L_0889C708;
    case 79u: goto L_0889C718;
    case 80u: goto L_0889C728;
    case 81u: goto L_0889C730;
    case 82u: goto L_0889C73C;
    case 83u: goto L_0889C74C;
    case 84u: goto L_0889C768;
    case 85u: goto L_0889C79C;
    case 86u: goto L_0889C7BC;
    case 87u: goto L_0889C7C4;
    case 88u: goto L_0889C7F4;
    case 89u: goto L_0889C800;
    case 90u: goto L_0889C808;
    case 91u: goto L_0889C818;
    case 92u: goto L_0889C828;
    case 93u: goto L_0889C830;
    case 94u: goto L_0889C838;
    case 95u: goto L_0889C84C;
    case 96u: goto L_0889C854;
    case 97u: goto L_0889C860;
    case 98u: goto L_0889C868;
    case 99u: goto L_0889C870;
    case 100u: goto L_0889C884;
    case 101u: goto L_0889C898;
    case 102u: goto L_0889C8A4;
    case 103u: goto L_0889C8B8;
    case 104u: goto L_0889C8BC;
    case 105u: goto L_0889C8CC;
    case 106u: goto L_0889C8E4;
    case 107u: goto L_0889C8F8;
    case 108u: goto L_0889C904;
    case 109u: goto L_0889C90C;
    case 110u: goto L_0889C928;
    case 111u: goto L_0889C970;
    case 112u: goto L_0889C994;
    case 113u: goto L_0889C9A0;
    case 114u: goto L_0889C9AC;
    case 115u: goto L_0889C9C8;
    case 116u: goto L_0889C9D8;
    case 117u: goto L_0889C9E0;
    case 118u: goto L_0889C9E8;
    case 119u: goto L_0889CA04;
    case 120u: goto L_0889CA14;
    case 121u: goto L_0889CA24;
    case 122u: goto L_0889CA34;
    case 123u: goto L_0889CA3C;
    case 124u: goto L_0889CA4C;
    case 125u: goto L_0889CA64;
    case 126u: goto L_0889CA78;
    case 127u: goto L_0889CA88;
    case 128u: goto L_0889CA9C;
    case 129u: goto L_0889CAAC;
    case 130u: goto L_0889CAB4;
    case 131u: goto L_0889CAC4;
    case 132u: goto L_0889CAD4;
    case 133u: goto L_0889CAE8;
    case 134u: goto L_0889CAF0;
    case 135u: goto L_0889CB04;
    case 136u: goto L_0889CB34;
    case 137u: goto L_0889CB48;
    case 138u: goto L_0889CB54;
    case 139u: goto L_0889CB68;
    case 140u: goto L_0889CB70;
    case 141u: goto L_0889CB88;
    case 142u: goto L_0889CB90;
    case 143u: goto L_0889CBA0;
    case 144u: goto L_0889CBB0;
    case 145u: goto L_0889CBC4;
    case 146u: goto L_0889CBE8;
    case 147u: goto L_0889CBF0;
    case 148u: goto L_0889CC00;
    case 149u: goto L_0889CC28;
    case 150u: goto L_0889CC3C;
    case 151u: goto L_0889CC4C;
    case 152u: goto L_0889CC60;
    case 153u: goto L_0889CC74;
    case 154u: goto L_0889CC84;
    case 155u: goto L_0889CC94;
    case 156u: goto L_0889CCB0;
    case 157u: goto L_0889CCBC;
    case 158u: goto L_0889CCC4;
    case 159u: goto L_0889CCDC;
    case 160u: goto L_0889CD18;
    case 161u: goto L_0889CD28;
    case 162u: goto L_0889CD30;
    case 163u: goto L_0889CD50;
    case 164u: goto L_0889CD80;
    case 165u: goto L_0889CD88;
    case 166u: goto L_0889CD94;
    case 167u: goto L_0889CD9C;
    case 168u: goto L_0889CDA4;
    case 169u: goto L_0889CDBC;
    case 170u: goto L_0889CDF8;
    case 171u: goto L_0889CE00;
    case 172u: goto L_0889CE10;
    case 173u: goto L_0889CE20;
    case 174u: goto L_0889CE44;
    case 175u: goto L_0889CE54;
    case 176u: goto L_0889CE64;
    case 177u: goto L_0889CE74;
    case 178u: goto L_0889CE84;
    case 179u: goto L_0889CE94;
    case 180u: goto L_0889CEA4;
    case 181u: goto L_0889CEB4;
    case 182u: goto L_0889CEBC;
    case 183u: goto L_0889CEC4;
    case 184u: goto L_0889CEDC;
    case 185u: goto L_0889CF1C;
    case 186u: goto L_0889CF24;
    case 187u: goto L_0889CF30;
    case 188u: goto L_0889CF58;
    case 189u: goto L_0889CF64;
    case 190u: goto L_0889CF84;
    case 191u: goto L_0889CF90;
    case 192u: goto L_0889CF9C;
    case 193u: goto L_0889CFBC;
    case 194u: goto L_0889CFC8;
    case 195u: goto L_0889CFD4;
    case 196u: goto L_0889CFDC;
    case 197u: goto L_0889CFEC;
    case 198u: goto L_0889CFFC;
    case 199u: goto L_0889D008;
    case 200u: goto L_0889D01C;
    case 201u: goto L_0889D024;
    case 202u: goto L_0889D034;
    case 203u: goto L_0889D040;
    case 204u: goto L_0889D050;
    case 205u: goto L_0889D068;
    case 206u: goto L_0889D070;
    case 207u: goto L_0889D080;
    case 208u: goto L_0889D088;
    case 209u: goto L_0889D098;
    case 210u: goto L_0889D0A4;
    case 211u: goto L_0889D0AC;
    case 212u: goto L_0889D0B8;
    case 213u: goto L_0889D0C0;
    case 214u: goto L_0889D0CC;
    case 215u: goto L_0889D0E8;
    case 216u: goto L_0889D0F8;
    case 217u: goto L_0889D108;
    case 218u: goto L_0889D11C;
    case 219u: goto L_0889D148;
    case 220u: goto L_0889D14C;
    case 221u: goto L_0889D154;
    case 222u: goto L_0889D16C;
    case 223u: goto L_0889D18C;
    case 224u: goto L_0889D194;
    case 225u: goto L_0889D19C;
    case 226u: goto L_0889D1A4;
    case 227u: goto L_0889D1B0;
    case 228u: goto L_0889D1C8;
    case 229u: goto L_0889D1D8;
    case 230u: goto L_0889D1E0;
    case 231u: goto L_0889D1E8;
    case 232u: goto L_0889D1F0;
    case 233u: goto L_0889D1F8;
    case 234u: goto L_0889D200;
    case 235u: goto L_0889D208;
    case 236u: goto L_0889D218;
    case 237u: goto L_0889D22C;
    case 238u: goto L_0889D240;
    case 239u: goto L_0889D250;
    case 240u: goto L_0889D260;
    case 241u: goto L_0889D270;
    case 242u: goto L_0889D280;
    case 243u: goto L_0889D288;
    case 244u: goto L_0889D2A0;
    case 245u: goto L_0889D2DC;
    case 246u: goto L_0889D358;
    case 247u: goto L_0889D3E4;
    case 248u: goto L_0889D3EC;
    case 249u: goto L_0889D420;
    case 250u: goto L_0889D444;
    case 251u: goto L_0889D44C;
    case 252u: goto L_0889D480;
    case 253u: goto L_0889D4B8;
    case 254u: goto L_0889D4C0;
    case 255u: goto L_0889D4D8;
    case 256u: goto L_0889D514;
    case 257u: goto L_0889D520;
    case 258u: goto L_0889D528;
    case 259u: goto L_0889D53C;
    case 260u: goto L_0889D544;
    case 261u: goto L_0889D55C;
    case 262u: goto L_0889D598;
    case 263u: goto L_0889D5A0;
    case 264u: goto L_0889D5A8;
    case 265u: goto L_0889D5C0;
    case 266u: goto L_0889D5FC;
    case 267u: goto L_0889D608;
    case 268u: goto L_0889D610;
    case 269u: goto L_0889D620;
    case 270u: goto L_0889D630;
    case 271u: goto L_0889D638;
    case 272u: goto L_0889D648;
    case 273u: goto L_0889D658;
    case 274u: goto L_0889D670;
    case 275u: goto L_0889D680;
    case 276u: goto L_0889D688;
    case 277u: goto L_0889D6A0;
    case 278u: goto L_0889D6B8;
    case 279u: goto L_0889D6C4;
    case 280u: goto L_0889D6D8;
    case 281u: goto L_0889D6E4;
    case 282u: goto L_0889D6F8;
    case 283u: goto L_0889D704;
    case 284u: goto L_0889D718;
    case 285u: goto L_0889D720;
    case 286u: goto L_0889D73C;
    case 287u: goto L_0889D75C;
    case 288u: goto L_0889D768;
    case 289u: goto L_0889D76C;
    case 290u: goto L_0889D7A8;
    case 291u: goto L_0889D7F8;
    case 292u: goto L_0889D800;
    case 293u: goto L_0889D804;
    case 294u: goto L_0889D80C;
    case 295u: goto L_0889D814;
    case 296u: goto L_0889D81C;
    case 297u: goto L_0889D82C;
    case 298u: goto L_0889D840;
    case 299u: goto L_0889D854;
    case 300u: goto L_0889D85C;
    case 301u: goto L_0889D868;
    case 302u: goto L_0889D870;
    case 303u: goto L_0889D878;
    case 304u: goto L_0889D888;
    case 305u: goto L_0889D88C;
    case 306u: goto L_0889D898;
    case 307u: goto L_0889D8A0;
    case 308u: goto L_0889D8B4;
    case 309u: goto L_0889D8C0;
    case 310u: goto L_0889D8D0;
    case 311u: goto L_0889D8F4;
    case 312u: goto L_0889D940;
    case 313u: goto L_0889D950;
    case 314u: goto L_0889D958;
    case 315u: goto L_0889D960;
    case 316u: goto L_0889D970;
    case 317u: goto L_0889D978;
    case 318u: goto L_0889D988;
    case 319u: goto L_0889D998;
    case 320u: goto L_0889D99C;
    case 321u: goto L_0889D9A8;
    case 322u: goto L_0889D9BC;
    case 323u: goto L_0889D9D0;
    case 324u: goto L_0889D9E0;
    case 325u: goto L_0889D9E8;
    case 326u: goto L_0889D9F0;
    case 327u: goto L_0889D9F8;
    case 328u: goto L_0889DA08;
    case 329u: goto L_0889DA18;
    case 330u: goto L_0889DA24;
    case 331u: goto L_0889DA40;
    case 332u: goto L_0889DA60;
    case 333u: goto L_0889DAA8;
    case 334u: goto L_0889DAB0;
    case 335u: goto L_0889DAE0;
    case 336u: goto L_0889DAEC;
    case 337u: goto L_0889DAF4;
    case 338u: goto L_0889DB04;
    case 339u: goto L_0889DB08;
    case 340u: goto L_0889DB1C;
    case 341u: goto L_0889DB48;
    case 342u: goto L_0889DB70;
    case 343u: goto L_0889DB98;
    case 344u: goto L_0889DBC0;
    case 345u: goto L_0889DBE8;
    case 346u: goto L_0889DC10;
    case 347u: goto L_0889DC38;
    case 348u: goto L_0889DC60;
    case 349u: goto L_0889DC88;
    case 350u: goto L_0889DCB0;
    case 351u: goto L_0889DCD8;
    case 352u: goto L_0889DD1C;
    case 353u: goto L_0889DD24;
    case 354u: goto L_0889DD3C;
    case 355u: goto L_0889DD44;
    case 356u: goto L_0889DD50;
    case 357u: goto L_0889DD94;
    case 358u: goto L_0889DDAC;
    case 359u: goto L_0889DDBC;
    case 360u: goto L_0889DDD0;
    case 361u: goto L_0889DDE0;
    case 362u: goto L_0889DDEC;
    case 363u: goto L_0889DDF4;
    case 364u: goto L_0889DDFC;
    case 365u: goto L_0889DE10;
    case 366u: goto L_0889DE20;
    case 367u: goto L_0889DE30;
    case 368u: goto L_0889DE40;
    case 369u: goto L_0889DE48;
    case 370u: goto L_0889DE58;
    case 371u: goto L_0889DE60;
    case 372u: goto L_0889DE68;
    case 373u: goto L_0889DE7C;
    case 374u: goto L_0889DE90;
    case 375u: goto L_0889DE9C;
    case 376u: goto L_0889DEB0;
    case 377u: goto L_0889DEB4;
    case 378u: goto L_0889DEC4;
    case 379u: goto L_0889DEE0;
    case 380u: goto L_0889DEF4;
    case 381u: goto L_0889DF00;
    case 382u: goto L_0889DF08;
    case 383u: goto L_0889DF18;
    case 384u: goto L_0889DF28;
    case 385u: goto L_0889DF38;
    case 386u: goto L_0889DF48;
    case 387u: goto L_0889DF58;
    case 388u: goto L_0889DF60;
    case 389u: goto L_0889DF74;
    case 390u: goto L_0889DF84;
    case 391u: goto L_0889DF8C;
    case 392u: goto L_0889DFA8;
    case 393u: goto L_0889DFC4;
    case 394u: goto L_0889DFD0;
    case 395u: goto L_0889DFE4;
    case 396u: goto L_0889DFF0;
    case 397u: goto L_0889E00C;
    case 398u: goto L_0889E014;
    case 399u: goto L_0889E024;
    case 400u: goto L_0889E03C;
    case 401u: goto L_0889E050;
    case 402u: goto L_0889E064;
    case 403u: goto L_0889E074;
    case 404u: goto L_0889E080;
    case 405u: goto L_0889E08C;
    case 406u: goto L_0889E0B8;
    case 407u: goto L_0889E0C4;
    case 408u: goto L_0889E0DC;
    case 409u: goto L_0889E0F8;
    case 410u: goto L_0889E10C;
    case 411u: goto L_0889E120;
    case 412u: goto L_0889E138;
    case 413u: goto L_0889E178;
    case 414u: goto L_0889E180;
    case 415u: goto L_0889E18C;
    case 416u: goto L_0889E194;
    case 417u: goto L_0889E19C;
    case 418u: goto L_0889E1B4;
    case 419u: goto L_0889E1F0;
    case 420u: goto L_0889E204;
    case 421u: goto L_0889E214;
    case 422u: goto L_0889E228;
    case 423u: goto L_0889E238;
    case 424u: goto L_0889E25C;
    case 425u: goto L_0889E26C;
    case 426u: goto L_0889E27C;
    case 427u: goto L_0889E288;
    case 428u: goto L_0889E2AC;
    case 429u: goto L_0889E2B8;
    case 430u: goto L_0889E2C0;
    case 431u: goto L_0889E2D0;
    case 432u: goto L_0889E2E8;
    case 433u: goto L_0889E308;
    case 434u: goto L_0889E314;
    case 435u: goto L_0889E31C;
    case 436u: goto L_0889E324;
    case 437u: goto L_0889E32C;
    case 438u: goto L_0889E338;
    case 439u: goto L_0889E348;
    case 440u: goto L_0889E350;
    case 441u: goto L_0889E358;
    case 442u: goto L_0889E360;
    case 443u: goto L_0889E368;
    case 444u: goto L_0889E370;
    case 445u: goto L_0889E388;
    case 446u: goto L_0889E398;
    case 447u: goto L_0889E3AC;
    case 448u: goto L_0889E3BC;
    case 449u: goto L_0889E3CC;
    case 450u: goto L_0889E3D4;
    case 451u: goto L_0889E3E4;
    case 452u: goto L_0889E3FC;
    case 453u: goto L_0889E40C;
    case 454u: goto L_0889E414;
    case 455u: goto L_0889E42C;
    case 456u: goto L_0889E444;
    case 457u: goto L_0889E450;
    case 458u: goto L_0889E464;
    case 459u: goto L_0889E470;
    case 460u: goto L_0889E484;
    case 461u: goto L_0889E490;
    case 462u: goto L_0889E4A4;
    case 463u: goto L_0889E4AC;
    case 464u: goto L_0889E4C8;
    case 465u: goto L_0889E4E8;
    case 466u: goto L_0889E4F4;
    case 467u: goto L_0889E4F8;
    case 468u: goto L_0889E520;
    case 469u: goto L_0889E5B4;
    case 470u: goto L_0889E5E0;
    case 471u: goto L_0889E600;
    case 472u: goto L_0889E620;
    case 473u: goto L_0889E648;
    case 474u: goto L_0889E664;
    case 475u: goto L_0889E678;
    case 476u: goto L_0889E690;
    case 477u: goto L_0889E6AC;
    case 478u: goto L_0889E6C8;
    case 479u: goto L_0889E6EC;
    case 480u: goto L_0889E6F8;
    case 481u: goto L_0889E714;
    case 482u: goto L_0889E728;
    case 483u: goto L_0889E734;
    case 484u: goto L_0889E740;
    case 485u: goto L_0889E75C;
    case 486u: goto L_0889E770;
    case 487u: goto L_0889E778;
    case 488u: goto L_0889E780;
    case 489u: goto L_0889E79C;
    case 490u: goto L_0889E7B4;
    case 491u: goto L_0889E7C8;
    case 492u: goto L_0889E7D0;
    case 493u: goto L_0889E7E0;
    case 494u: goto L_0889E7E8;
    case 495u: goto L_0889E7F0;
    case 496u: goto L_0889E7F8;
    case 497u: goto L_0889E7FC;
    case 498u: goto L_0889E800;
    case 499u: goto L_0889E810;
    case 500u: goto L_0889E820;
    case 501u: goto L_0889E828;
    case 502u: goto L_0889E83C;
    case 503u: goto L_0889E84C;
    case 504u: goto L_0889E858;
    case 505u: goto L_0889E864;
    case 506u: goto L_0889E870;
    case 507u: goto L_0889E880;
    case 508u: goto L_0889E890;
    case 509u: goto L_0889E8AC;
    case 510u: goto L_0889E8B4;
    case 511u: goto L_0889E8C8;
    case 512u: goto L_0889E8D4;
    case 513u: goto L_0889E8EC;
    case 514u: goto L_0889E8F8;
    case 515u: goto L_0889E918;
    case 516u: goto L_0889E934;
    case 517u: goto L_0889E944;
    case 518u: goto L_0889E94C;
    case 519u: goto L_0889E95C;
    case 520u: goto L_0889E968;
    case 521u: goto L_0889E974;
    case 522u: goto L_0889E98C;
    case 523u: goto L_0889E9A0;
    case 524u: goto L_0889E9B4;
    case 525u: goto L_0889E9CC;
    case 526u: goto L_0889E9E4;
    case 527u: goto L_0889E9F0;
    case 528u: goto L_0889E9F8;
    case 529u: goto L_0889EA04;
    case 530u: goto L_0889EA14;
    case 531u: goto L_0889EA38;
    case 532u: goto L_0889EA44;
    case 533u: goto L_0889EA60;
    case 534u: goto L_0889EA6C;
    case 535u: goto L_0889EA78;
    case 536u: goto L_0889EA80;
    case 537u: goto L_0889EA98;
    case 538u: goto L_0889EAB4;
    case 539u: goto L_0889EAD8;
    case 540u: goto L_0889EAF0;
    case 541u: goto L_0889EAFC;
    case 542u: goto L_0889EB08;
    case 543u: goto L_0889EB14;
    case 544u: goto L_0889EB1C;
    case 545u: goto L_0889EB24;
    case 546u: goto L_0889EB2C;
    case 547u: goto L_0889EB38;
    case 548u: goto L_0889EB48;
    case 549u: goto L_0889EB58;
    case 550u: goto L_0889EB68;
    case 551u: goto L_0889EB70;
    case 552u: goto L_0889EB84;
    case 553u: goto L_0889EB90;
    case 554u: goto L_0889EB9C;
    case 555u: goto L_0889EBA8;
    case 556u: goto L_0889EBB0;
    case 557u: goto L_0889EBB8;
    case 558u: goto L_0889EBC0;
    case 559u: goto L_0889EBC8;
    case 560u: goto L_0889EBD4;
    case 561u: goto L_0889EBE8;
    case 562u: goto L_0889EBF0;
    case 563u: goto L_0889EBF8;
    case 564u: goto L_0889EC08;
    case 565u: goto L_0889EC10;
    case 566u: goto L_0889EC18;
    case 567u: goto L_0889EC20;
    case 568u: goto L_0889EC28;
    case 569u: goto L_0889EC30;
    case 570u: goto L_0889EC38;
    case 571u: goto L_0889EC40;
    case 572u: goto L_0889EC44;
    case 573u: goto L_0889EC4C;
    case 574u: goto L_0889ED18;
    case 575u: goto L_0889ED20;
    case 576u: goto L_0889ED2C;
    case 577u: goto L_0889ED34;
    case 578u: goto L_0889ED38;
    case 579u: goto L_0889ED4C;
    case 580u: goto L_0889ED64;
    case 581u: goto L_0889ED74;
    case 582u: goto L_0889ED80;
    case 583u: goto L_0889ED88;
    case 584u: goto L_0889ED94;
    case 585u: goto L_0889EDA4;
    case 586u: goto L_0889EDA8;
    case 587u: goto L_0889EDB4;
    case 588u: goto L_0889EDC4;
    case 589u: goto L_0889EE00;
    case 590u: goto L_0889EE0C;
    case 591u: goto L_0889EE1C;
    case 592u: goto L_0889EE24;
    case 593u: goto L_0889EE2C;
    case 594u: goto L_0889EE34;
    case 595u: goto L_0889EE44;
    case 596u: goto L_0889EE48;
    case 597u: goto L_0889EE50;
    case 598u: goto L_0889EE60;
    case 599u: goto L_0889EE68;
    case 600u: goto L_0889EE70;
    case 601u: goto L_0889EE78;
    case 602u: goto L_0889EE94;
    case 603u: goto L_0889EE9C;
    case 604u: goto L_0889EEB0;
    case 605u: goto L_0889EEC4;
    case 606u: goto L_0889EEE0;
    case 607u: goto L_0889EEEC;
    case 608u: goto L_0889EEF8;
    case 609u: goto L_0889EF08;
    case 610u: goto L_0889EF10;
    case 611u: goto L_0889EF18;
    case 612u: goto L_0889EF20;
    case 613u: goto L_0889EF3C;
    case 614u: goto L_0889EF44;
    case 615u: goto L_0889EF54;
    case 616u: goto L_0889EF60;
    case 617u: goto L_0889EF68;
    case 618u: goto L_0889EF70;
    case 619u: goto L_0889EF7C;
    case 620u: goto L_0889EF90;
    case 621u: goto L_0889EFC0;
    case 622u: goto L_0889EFD4;
    case 623u: goto L_0889EFE0;
    case 624u: goto L_0889EFF0;
    case 625u: goto L_0889EFF8;
    case 626u: goto L_0889F000;
    case 627u: goto L_0889F004;
    case 628u: goto L_0889F00C;
    case 629u: goto L_0889F028;
    case 630u: goto L_0889F054;
    case 631u: goto L_0889F060;
    case 632u: goto L_0889F074;
    case 633u: goto L_0889F080;
    case 634u: goto L_0889F090;
    case 635u: goto L_0889F0A0;
    case 636u: goto L_0889F0A8;
    case 637u: goto L_0889F0BC;
    case 638u: goto L_0889F0D0;
    case 639u: goto L_0889F0E8;
    case 640u: goto L_0889F0EC;
    case 641u: goto L_0889F0F4;
    case 642u: goto L_0889F110;
    case 643u: goto L_0889F120;
    case 644u: goto L_0889F144;
    case 645u: goto L_0889F1BC;
    case 646u: goto L_0889F1C4;
    case 647u: goto L_0889F204;
    case 648u: goto L_0889F218;
    case 649u: goto L_0889F224;
    case 650u: goto L_0889F238;
    case 651u: goto L_0889F240;
    case 652u: goto L_0889F258;
    case 653u: goto L_0889F25C;
    case 654u: goto L_0889F270;
    case 655u: goto L_0889F29C;
    case 656u: goto L_0889F2AC;
    case 657u: goto L_0889F2B4;
    case 658u: goto L_0889F2C0;
    case 659u: goto L_0889F2C8;
    case 660u: goto L_0889F340;
    case 661u: goto L_0889F348;
    case 662u: goto L_0889F384;
    case 663u: goto L_0889F394;
    case 664u: goto L_0889F3A4;
    case 665u: goto L_0889F3BC;
    case 666u: goto L_0889F3C0;
    case 667u: goto L_0889F3D8;
    case 668u: goto L_0889F3E8;
    case 669u: goto L_0889F3F0;
    case 670u: goto L_0889F3FC;
    case 671u: goto L_0889F40C;
    case 672u: goto L_0889F414;
    case 673u: goto L_0889F428;
    case 674u: goto L_0889F430;
    case 675u: goto L_0889F444;
    case 676u: goto L_0889F450;
    case 677u: goto L_0889F460;
    case 678u: goto L_0889F468;
    case 679u: goto L_0889F47C;
    case 680u: goto L_0889F484;
    case 681u: goto L_0889F4D4;
    case 682u: goto L_0889F4E4;
    case 683u: goto L_0889F4F4;
    case 684u: goto L_0889F500;
    case 685u: goto L_0889F50C;
    case 686u: goto L_0889F524;
    case 687u: goto L_0889F52C;
    case 688u: goto L_0889F538;
    case 689u: goto L_0889F53C;
    case 690u: goto L_0889F554;
    case 691u: goto L_0889F564;
    case 692u: goto L_0889F570;
    case 693u: goto L_0889F578;
    case 694u: goto L_0889F588;
    case 695u: goto L_0889F598;
    case 696u: goto L_0889F5A8;
    case 697u: goto L_0889F5B0;
    case 698u: goto L_0889F5BC;
    case 699u: goto L_0889F5CC;
    case 700u: goto L_0889F5DC;
    case 701u: goto L_0889F5E8;
    case 702u: goto L_0889F5F4;
    case 703u: goto L_0889F5FC;
    case 704u: goto L_0889F608;
    case 705u: goto L_0889F614;
    case 706u: goto L_0889F620;
    case 707u: goto L_0889F634;
    case 708u: goto L_0889F650;
    case 709u: goto L_0889F660;
    case 710u: goto L_0889F678;
    case 711u: goto L_0889F694;
    case 712u: goto L_0889F69C;
    case 713u: goto L_0889F6B0;
    case 714u: goto L_0889F6EC;
    case 715u: goto L_0889F6FC;
    case 716u: goto L_0889F704;
    case 717u: goto L_0889F70C;
    case 718u: goto L_0889F72C;
    case 719u: goto L_0889F748;
    case 720u: goto L_0889F750;
    case 721u: goto L_0889F758;
    case 722u: goto L_0889F768;
    case 723u: goto L_0889F770;
    case 724u: goto L_0889F798;
    case 725u: goto L_0889F7A0;
    case 726u: goto L_0889F7B4;
    case 727u: goto L_0889F7D0;
    case 728u: goto L_0889F7D8;
    case 729u: goto L_0889F7E0;
    case 730u: goto L_0889F7FC;
    case 731u: goto L_0889F808;
    case 732u: goto L_0889F814;
    case 733u: goto L_0889F824;
    case 734u: goto L_0889F854;
    case 735u: goto L_0889F88C;
    case 736u: goto L_0889F894;
    case 737u: goto L_0889F8A4;
    case 738u: goto L_0889F8C0;
    case 739u: goto L_0889F8D0;
    case 740u: goto L_0889F8E0;
    case 741u: goto L_0889F8EC;
    case 742u: goto L_0889F8FC;
    case 743u: goto L_0889F908;
    case 744u: goto L_0889F914;
    case 745u: goto L_0889F91C;
    case 746u: goto L_0889F920;
    case 747u: goto L_0889F928;
    case 748u: goto L_0889F930;
    case 749u: goto L_0889F93C;
    case 750u: goto L_0889F958;
    case 751u: goto L_0889F968;
    case 752u: goto L_0889F970;
    case 753u: goto L_0889F984;
    case 754u: goto L_0889F98C;
    case 755u: goto L_0889F9A4;
    case 756u: goto L_0889F9C0;
    case 757u: goto L_0889F9D0;
    case 758u: goto L_0889F9E0;
    case 759u: goto L_0889F9F8;
    case 760u: goto L_0889FA14;
    case 761u: goto L_0889FA1C;
    case 762u: goto L_0889FA24;
    case 763u: goto L_0889FA2C;
    case 764u: goto L_0889FA34;
    case 765u: goto L_0889FA3C;
    case 766u: goto L_0889FA44;
    case 767u: goto L_0889FA48;
    case 768u: goto L_0889FA50;
    case 769u: goto L_0889FA68;
    case 770u: goto L_0889FA80;
    case 771u: goto L_0889FA94;
    case 772u: goto L_0889FA9C;
    case 773u: goto L_0889FAA4;
    case 774u: goto L_0889FAAC;
    case 775u: goto L_0889FAB8;
    case 776u: goto L_0889FAC8;
    case 777u: goto L_0889FAD0;
    case 778u: goto L_0889FAD4;
    case 779u: goto L_0889FADC;
    case 780u: goto L_0889FAE0;
    case 781u: goto L_0889FAEC;
    case 782u: goto L_0889FAF8;
    case 783u: goto L_0889FB08;
    case 784u: goto L_0889FB10;
    case 785u: goto L_0889FB14;
    case 786u: goto L_0889FB1C;
    case 787u: goto L_0889FB24;
    case 788u: goto L_0889FB30;
    case 789u: goto L_0889FB38;
    case 790u: goto L_0889FB40;
    case 791u: goto L_0889FB44;
    case 792u: goto L_0889FB4C;
    case 793u: goto L_0889FB58;
    case 794u: goto L_0889FB64;
    case 795u: goto L_0889FB6C;
    case 796u: goto L_0889FB70;
    case 797u: goto L_0889FB78;
    case 798u: goto L_0889FB84;
    case 799u: goto L_0889FB8C;
    case 800u: goto L_0889FB98;
    case 801u: goto L_0889FBA0;
    case 802u: goto L_0889FBB0;
    case 803u: goto L_0889FBB8;
    case 804u: goto L_0889FBBC;
    case 805u: goto L_0889FBC4;
    case 806u: goto L_0889FBD4;
    case 807u: goto L_0889FBDC;
    case 808u: goto L_0889FBEC;
    case 809u: goto L_0889FBF4;
    case 810u: goto L_0889FBFC;
    case 811u: goto L_0889FC18;
    case 812u: goto L_0889FC28;
    case 813u: goto L_0889FC8C;
    case 814u: goto L_0889FC9C;
    case 815u: goto L_0889FCA4;
    case 816u: goto L_0889FCAC;
    case 817u: goto L_0889FCBC;
    case 818u: goto L_0889FCCC;
    case 819u: goto L_0889FCD4;
    case 820u: goto L_0889FCDC;
    case 821u: goto L_0889FCEC;
    case 822u: goto L_0889FCF4;
    case 823u: goto L_0889FCF8;
    case 824u: goto L_0889FD00;
    case 825u: goto L_0889FD30;
    case 826u: goto L_0889FD38;
    case 827u: goto L_0889FD3C;
    case 828u: goto L_0889FD44;
    case 829u: goto L_0889FD74;
    case 830u: goto L_0889FD90;
    case 831u: goto L_0889FD98;
    case 832u: goto L_0889FD9C;
    case 833u: goto L_0889FDA4;
    case 834u: goto L_0889FDB4;
    case 835u: goto L_0889FDC0;
    case 836u: goto L_0889FDC8;
    case 837u: goto L_0889FDD0;
    case 838u: goto L_0889FDD8;
    case 839u: goto L_0889FDE0;
    case 840u: goto L_0889FDE8;
    case 841u: goto L_0889FE00;
    case 842u: goto L_0889FE0C;
    case 843u: goto L_0889FE14;
    case 844u: goto L_0889FE18;
    case 845u: goto L_0889FE20;
    case 846u: goto L_0889FE30;
    case 847u: goto L_0889FE38;
    case 848u: goto L_0889FE40;
    case 849u: goto L_0889FE48;
    case 850u: goto L_0889FE4C;
    case 851u: goto L_0889FE54;
    case 852u: goto L_0889FE68;
    case 853u: goto L_0889FE74;
    case 854u: goto L_0889FE80;
    case 855u: goto L_0889FE88;
    case 856u: goto L_0889FE90;
    case 857u: goto L_0889FE94;
    case 858u: goto L_0889FE9C;
    case 859u: goto L_0889FEC0;
    case 860u: goto L_0889FECC;
    case 861u: goto L_0889FED4;
    case 862u: goto L_0889FEDC;
    case 863u: goto L_0889FEE4;
    case 864u: goto L_0889FEEC;
    case 865u: goto L_0889FEF4;
    case 866u: goto L_0889FEFC;
    case 867u: goto L_0889FF08;
    case 868u: goto L_0889FF18;
    case 869u: goto L_0889FF20;
    case 870u: goto L_0889FF28;
    case 871u: goto L_0889FF30;
    case 872u: goto L_0889FF38;
    case 873u: goto L_0889FF44;
    case 874u: goto L_0889FF4C;
    case 875u: goto L_0889FF58;
    case 876u: goto L_0889FF68;
    case 877u: goto L_0889FF74;
    case 878u: goto L_0889FF7C;
    case 879u: goto L_0889FF84;
    case 880u: goto L_0889FF90;
    case 881u: goto L_0889FF98;
    case 882u: goto L_0889FF9C;
    case 883u: goto L_0889FFB0;
    case 884u: goto L_0889FFBC;
    case 885u: goto L_0889FFC4;
    case 886u: goto L_0889FFCC;
    case 887u: goto L_0889FFD4;
    case 888u: goto L_0889FFD8;
    case 889u: goto L_0889FFE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0889C000:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 15u);
    ctx.gpr[20] = (0u | 999u);
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C030;
      }
      goto L_0889C028;
    }
L_0889C028:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889C488;
      }
      goto L_0889C030;
    }
L_0889C030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C2F4;
      }
      goto L_0889C088;
    }
L_0889C088:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C2D8;
      }
      goto L_0889C0C4;
    }
L_0889C0C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[30]);
    goto L_0889C0C8;
L_0889C0C8:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0889C0D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 431u, 0x088A6D9Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C0D8u) goto L_0889C0D8;
    return;
L_0889C0D8:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (16153u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0889C17Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 328u, 0x088C5AA4u>(ctx, &aot_mem) && ctx.pc == 0x0889C17Cu) goto L_0889C17C;
    return;
L_0889C17C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
      if (branch_taken) {
          goto L_0889C2BC;
      }
      goto L_0889C184;
    }
L_0889C184:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0889C1C8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x0889C1C8u) goto L_0889C1C8;
    return;
L_0889C1C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C2BC;
      }
      goto L_0889C1D0;
    }
L_0889C1D0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
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
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0889C244u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x0889C244u) goto L_0889C244;
    return;
L_0889C244:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C288;
      }
      goto L_0889C250;
    }
L_0889C250:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889C2BC;
      }
      goto L_0889C268;
    }
L_0889C268:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0889C2BC;
      }
      goto L_0889C288;
    }
L_0889C288:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889C2BC;
      }
      goto L_0889C2A0;
    }
L_0889C2A0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[18] = (0u | 1u);
    goto L_0889C2BC;
L_0889C2BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[30]);
        goto L_0889C0C8;
    }
    goto L_0889C2D8;
L_0889C2D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C088;
      }
      goto L_0889C2F4;
    }
L_0889C2F4:
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C388;
      }
      goto L_0889C300;
    }
L_0889C300:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C324;
      }
      goto L_0889C308;
    }
L_0889C308:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_0889C374;
      }
      goto L_0889C324;
    }
L_0889C324:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0889C374;
L_0889C374:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0889C380u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(328));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 109u, 0x08884810u>(ctx, &aot_mem) && ctx.pc == 0x0889C380u) goto L_0889C380;
    return;
L_0889C380:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889C488;
      }
      goto L_0889C388;
    }
L_0889C388:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (18804u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 9214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x0889C3C4u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 369u, 0x0897572Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C3C4u) goto L_0889C3C4;
    return;
L_0889C3C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0889C484;
      }
      goto L_0889C3D0;
    }
L_0889C3D0:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0889C40Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 431u, 0x088A6D9Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C40Cu) goto L_0889C40C;
    return;
L_0889C40C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (0x0889C420u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A065B8u>(ctx, &aot_mem) && ctx.pc == 0x0889C420u) goto L_0889C420;
    return;
L_0889C420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0889C45C;
      }
      goto L_0889C440;
    }
L_0889C440:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889C45C;
      }
      goto L_0889C454;
    }
L_0889C454:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0889C468;
      }
      goto L_0889C45C;
    }
L_0889C45C:
    ctx.gpr[31] = (0x0889C464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C464u) goto L_0889C464;
    return;
L_0889C464:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0889C468;
L_0889C468:
    ctx.gpr[31] = (0x0889C470u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x0889C470u) goto L_0889C470;
    return;
L_0889C470:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0889C47Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(340));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 109u, 0x08884810u>(ctx, &aot_mem) && ctx.pc == 0x0889C47Cu) goto L_0889C47C;
    return;
L_0889C47C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889C488;
      }
      goto L_0889C484;
    }
L_0889C484:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889C488;
L_0889C488:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889C4C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[31]);
    ctx.gpr[21] = (ctx.gpr[7] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0889C50Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0889C50Cu) goto L_0889C50C;
    return;
L_0889C50C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C528;
      }
      goto L_0889C514;
    }
L_0889C514:
    ctx.gpr[31] = (0x0889C51Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 409u, 0x08ACA85Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C51Cu) goto L_0889C51C;
    return;
L_0889C51C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C528;
      }
      goto L_0889C524;
    }
L_0889C524:
    ctx.gpr[17] = (0u | 1u);
    goto L_0889C528;
L_0889C528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C5F0;
      }
      goto L_0889C538;
    }
L_0889C538:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C5F0;
      }
      goto L_0889C540;
    }
L_0889C540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C5D0;
      }
      goto L_0889C550;
    }
L_0889C550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0889C570u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850D9Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C570u) goto L_0889C570;
    return;
L_0889C570:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C598;
      }
      goto L_0889C578;
    }
L_0889C578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889C5A8;
      }
      goto L_0889C598;
    }
L_0889C598:
    ctx.gpr[31] = (0x0889C5A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 518u, 0x0889AAB4u>(ctx, &aot_mem) && ctx.pc == 0x0889C5A0u) goto L_0889C5A0;
    return;
L_0889C5A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C5C8;
      }
      goto L_0889C5A8;
    }
L_0889C5A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_0889C638;
    }
    goto L_0889C5C0;
L_0889C5C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C644;
      }
      goto L_0889C5C8;
    }
L_0889C5C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889D76C;
      }
      goto L_0889C5D0;
    }
L_0889C5D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889C5A8;
      }
      goto L_0889C5F0;
    }
L_0889C5F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C5A8;
      }
      goto L_0889C600;
    }
L_0889C600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0889C620u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850D9Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C620u) goto L_0889C620;
    return;
L_0889C620:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C5A8;
      }
      goto L_0889C628;
    }
L_0889C628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889C5A8;
      }
      goto L_0889C638;
    }
L_0889C638:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C65C;
      }
      goto L_0889C644;
    }
L_0889C644:
    ctx.gpr[31] = (0x0889C64Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0889C64Cu) goto L_0889C64C;
    return;
L_0889C64C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C674;
      }
      goto L_0889C654;
    }
L_0889C654:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C6F8;
      }
      goto L_0889C65C;
    }
L_0889C65C:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889C66Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C66Cu) goto L_0889C66C;
    return;
L_0889C66C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0889D76C;
      }
      goto L_0889C674;
    }
L_0889C674:
    ctx.gpr[31] = (0x0889C67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0889C67Cu) goto L_0889C67C;
    return;
L_0889C67C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[6] = (0u | 6u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2094))))));
        goto L_0889C6A4;
    }
    goto L_0889C690;
L_0889C690:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2094))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C6D8;
      }
      goto L_0889C6A0;
    }
L_0889C6A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2094))))));
    goto L_0889C6A4;
L_0889C6A4:
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C6D8;
      }
      goto L_0889C6B0;
    }
L_0889C6B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C6D8;
      }
      goto L_0889C6C4;
    }
L_0889C6C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C6F8;
      }
      goto L_0889C6D8;
    }
L_0889C6D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0889C6F0;
      }
      goto L_0889C6E8;
    }
L_0889C6E8:
    ctx.gpr[31] = (0x0889C6F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x0889C6F0u) goto L_0889C6F0;
    return;
L_0889C6F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0889D76C;
      }
      goto L_0889C6F8;
    }
L_0889C6F8:
    ctx.gpr[31] = (0x0889C700u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0889C700u) goto L_0889C700;
    return;
L_0889C700:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C74C;
      }
      goto L_0889C708;
    }
L_0889C708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C74C;
      }
      goto L_0889C718;
    }
L_0889C718:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C74C;
      }
      goto L_0889C728;
    }
L_0889C728:
    ctx.gpr[31] = (0x0889C730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0889C730u) goto L_0889C730;
    return;
L_0889C730:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2088)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0889C74C;
      }
      goto L_0889C73C;
    }
L_0889C73C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C7F4;
      }
      goto L_0889C74C;
    }
L_0889C74C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889C7C4;
      }
      goto L_0889C768;
    }
L_0889C768:
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
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0889C79Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C79Cu) goto L_0889C79C;
    return;
L_0889C79C:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = ctx.fpr[24] / ctx.fpr[26];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C818;
      }
      goto L_0889C7BC;
    }
L_0889C7BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
      if (branch_taken) {
          goto L_0889C808;
      }
      goto L_0889C7C4;
    }
L_0889C7C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889D76C;
      }
      goto L_0889C7F4;
    }
L_0889C7F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889C800u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x0889C800u) goto L_0889C800;
    return;
L_0889C800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889D76C;
      }
      goto L_0889C808;
    }
L_0889C808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D154;
      }
      goto L_0889C818;
    }
L_0889C818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[19] = (0u | 6u);
      if (branch_taken) {
          goto L_0889C854;
      }
      goto L_0889C828;
    }
L_0889C828:
    ctx.gpr[31] = (0x0889C830u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x0889C830u) goto L_0889C830;
    return;
L_0889C830:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C854;
      }
      goto L_0889C838;
    }
L_0889C838:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0889C84Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x0889C84Cu) goto L_0889C84C;
    return;
L_0889C84C:
    ctx.gpr[31] = (0x0889C854u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 795u, 0x0899FF58u>(ctx, &aot_mem) && ctx.pc == 0x0889C854u) goto L_0889C854;
    return;
L_0889C854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0889C90C;
      }
      goto L_0889C860;
    }
L_0889C860:
    ctx.gpr[31] = (0x0889C868u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0889C868u) goto L_0889C868;
    return;
L_0889C868:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C90C;
      }
      goto L_0889C870;
    }
L_0889C870:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2077)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C8BC;
      }
      goto L_0889C884;
    }
L_0889C884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C8A4;
      }
      goto L_0889C898;
    }
L_0889C898:
    ctx.gpr[4] = (16480u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889C8BC;
      }
      goto L_0889C8A4;
    }
L_0889C8A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C8BC;
      }
      goto L_0889C8B8;
    }
L_0889C8B8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2077), static_cast<std::uint8_t>(0u));
    goto L_0889C8BC;
L_0889C8BC:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889C90C;
      }
      goto L_0889C8CC;
    }
L_0889C8CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1776)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C8F8;
      }
      goto L_0889C8E4;
    }
L_0889C8E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C90C;
      }
      goto L_0889C8F8;
    }
L_0889C8F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x0889C904u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 617u, 0x08A8EFD4u>(ctx, &aot_mem) && ctx.pc == 0x0889C904u) goto L_0889C904;
    return;
L_0889C904:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0889D76C;
      }
      goto L_0889C90C;
    }
L_0889C90C:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889C994;
      }
      goto L_0889C928;
    }
L_0889C928:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889C994;
      }
      goto L_0889C970;
    }
L_0889C970:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0889C994;
L_0889C994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1816)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C9C8;
      }
      goto L_0889C9A0;
    }
L_0889C9A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1820)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C9C8;
      }
      goto L_0889C9AC;
    }
L_0889C9AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1820)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C9E0;
      }
      goto L_0889C9C8;
    }
L_0889C9C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
        goto L_0889CA04;
    }
    goto L_0889C9D8;
L_0889C9D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CC28;
      }
      goto L_0889C9E0;
    }
L_0889C9E0:
    ctx.gpr[31] = (0x0889C9E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 84u, 0x089A0660u>(ctx, &aot_mem) && ctx.pc == 0x0889C9E8u) goto L_0889C9E8;
    return;
L_0889C9E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1816), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0889D76C;
      }
      goto L_0889CA04;
    }
L_0889CA04:
    ctx.gpr[21] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CC28;
      }
      goto L_0889CA14;
    }
L_0889CA14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889CC28;
      }
      goto L_0889CA24;
    }
L_0889CA24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CC28;
      }
      goto L_0889CA34;
    }
L_0889CA34:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CC28;
      }
      goto L_0889CA3C;
    }
L_0889CA3C:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[22] = (0u | 58u);
      if (branch_taken) {
          goto L_0889CAC4;
      }
      goto L_0889CA4C;
    }
L_0889CA4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1776)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CAC4;
      }
      goto L_0889CA64;
    }
L_0889CA64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889CAC4;
      }
      goto L_0889CA78;
    }
L_0889CA78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0889CA9C;
      }
      goto L_0889CA88;
    }
L_0889CA88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889CAAC;
      }
      goto L_0889CA9C;
    }
L_0889CA9C:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889CAC4;
      }
      goto L_0889CAAC;
    }
L_0889CAAC:
    ctx.gpr[31] = (0x0889CAB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0889CAB4u) goto L_0889CAB4;
    return;
L_0889CAB4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CC28;
      }
      goto L_0889CAC4;
    }
L_0889CAC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0889CAE8;
      }
      goto L_0889CAD4;
    }
L_0889CAD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889CAF0;
      }
      goto L_0889CAE8;
    }
L_0889CAE8:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0889CAF0;
L_0889CAF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CB90;
      }
      goto L_0889CB04;
    }
L_0889CB04:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0889CB48;
      }
      goto L_0889CB34;
    }
L_0889CB34:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0889CB48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 472u, 0x08899D50u>(ctx, &aot_mem) && ctx.pc == 0x0889CB48u) goto L_0889CB48;
    return;
L_0889CB48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CB70;
      }
      goto L_0889CB54;
    }
L_0889CB54:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[31] = (0x0889CB68u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 719u, 0x08977A28u>(ctx, &aot_mem) && ctx.pc == 0x0889CB68u) goto L_0889CB68;
    return;
L_0889CB68:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0889CB70;
L_0889CB70:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[31] = (0x0889CB88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 303u, 0x089A1630u>(ctx, &aot_mem) && ctx.pc == 0x0889CB88u) goto L_0889CB88;
    return;
L_0889CB88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CBA0;
      }
      goto L_0889CB90;
    }
L_0889CB90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889CBA0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 328u, 0x089A1774u>(ctx, &aot_mem) && ctx.pc == 0x0889CBA0u) goto L_0889CBA0;
    return;
L_0889CBA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_0889CBF0;
      }
      goto L_0889CBB0;
    }
L_0889CBB0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889CBF0;
      }
      goto L_0889CBC4;
    }
L_0889CBC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889CBE8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0889CBE8u) goto L_0889CBE8;
    return;
L_0889CBE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D14C;
      }
      goto L_0889CBF0;
    }
L_0889CBF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D14C;
      }
      goto L_0889CC00;
    }
L_0889CC00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (63488u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889D14C;
      }
      goto L_0889CC28;
    }
L_0889CC28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CE00;
      }
      goto L_0889CC3C;
    }
L_0889CC3C:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889CE00;
      }
      goto L_0889CC4C;
    }
L_0889CC4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889CE00;
      }
      goto L_0889CC60;
    }
L_0889CC60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889CE00;
      }
      goto L_0889CC74;
    }
L_0889CC74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CC94;
      }
      goto L_0889CC84;
    }
L_0889CC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CD88;
      }
      goto L_0889CC94;
    }
L_0889CC94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x0889CCB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 224u, 0x088D915Cu>(ctx, &aot_mem) && ctx.pc == 0x0889CCB0u) goto L_0889CCB0;
    return;
L_0889CCB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x0889CCBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 505u, 0x0899ED08u>(ctx, &aot_mem) && ctx.pc == 0x0889CCBCu) goto L_0889CCBC;
    return;
L_0889CCBC:
    ctx.gpr[31] = (0x0889CCC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0889CCC4u) goto L_0889CCC4;
    return;
L_0889CCC4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15892)));
    ctx.gpr[31] = (0x0889CCDCu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15888)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0889CCDCu) goto L_0889CCDC;
    return;
L_0889CCDC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15900)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15896)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889CD18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 254u, 0x089A1230u>(ctx, &aot_mem) && ctx.pc == 0x0889CD18u) goto L_0889CD18;
    return;
L_0889CD18:
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889CD9C;
      }
      goto L_0889CD28;
    }
L_0889CD28:
    ctx.gpr[31] = (0x0889CD30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0889CD30u) goto L_0889CD30;
    return;
L_0889CD30:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15908)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15904)));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0889CD50u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0889CD50u) goto L_0889CD50;
    return;
L_0889CD50:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889CD80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 239u, 0x089A10F0u>(ctx, &aot_mem) && ctx.pc == 0x0889CD80u) goto L_0889CD80;
    return;
L_0889CD80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D108;
      }
      goto L_0889CD88;
    }
L_0889CD88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889CD94u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 683u, 0x088877D0u>(ctx, &aot_mem) && ctx.pc == 0x0889CD94u) goto L_0889CD94;
    return;
L_0889CD94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0889D76C;
      }
      goto L_0889CD9C;
    }
L_0889CD9C:
    ctx.gpr[31] = (0x0889CDA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0889CDA4u) goto L_0889CDA4;
    return;
L_0889CDA4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15916)));
    ctx.gpr[31] = (0x0889CDBCu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15912)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0889CDBCu) goto L_0889CDBC;
    return;
L_0889CDBC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15848)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889CDF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 239u, 0x089A10F0u>(ctx, &aot_mem) && ctx.pc == 0x0889CDF8u) goto L_0889CDF8;
    return;
L_0889CDF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D108;
      }
      goto L_0889CE00;
    }
L_0889CE00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CE44;
      }
      goto L_0889CE10;
    }
L_0889CE10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CE44;
      }
      goto L_0889CE20;
    }
L_0889CE20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (63488u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    goto L_0889CE44;
L_0889CE44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D108;
      }
      goto L_0889CE54;
    }
L_0889CE54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D108;
      }
      goto L_0889CE64;
    }
L_0889CE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CEA4;
      }
      goto L_0889CE74;
    }
L_0889CE74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CEA4;
      }
      goto L_0889CE84;
    }
L_0889CE84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CEA4;
      }
      goto L_0889CE94;
    }
L_0889CE94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CEBC;
      }
      goto L_0889CEA4;
    }
L_0889CEA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CF24;
      }
      goto L_0889CEB4;
    }
L_0889CEB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CFDC;
      }
      goto L_0889CEBC;
    }
L_0889CEBC:
    ctx.gpr[31] = (0x0889CEC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0889CEC4u) goto L_0889CEC4;
    return;
L_0889CEC4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15924)));
    ctx.gpr[31] = (0x0889CEDCu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15920)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0889CEDCu) goto L_0889CEDC;
    return;
L_0889CEDC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15804)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15800)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889CF1Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 656u, 0x088875FCu>(ctx, &aot_mem) && ctx.pc == 0x0889CF1Cu) goto L_0889CF1C;
    return;
L_0889CF1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0889D76C;
      }
      goto L_0889CF24;
    }
L_0889CF24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0889CFD4;
      }
      goto L_0889CF30;
    }
L_0889CF30:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 18 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CF84;
      }
      goto L_0889CF58;
    }
L_0889CF58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CF90;
      }
      goto L_0889CF64;
    }
L_0889CF64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CF90;
      }
      goto L_0889CF84;
    }
L_0889CF84:
    ctx.gpr[4] = (16576u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889CFDC;
      }
      goto L_0889CF90;
    }
L_0889CF90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CFC8;
      }
      goto L_0889CF9C;
    }
L_0889CF9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CFC8;
      }
      goto L_0889CFBC;
    }
L_0889CFBC:
    ctx.gpr[4] = (16512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889CFDC;
      }
      goto L_0889CFC8;
    }
L_0889CFC8:
    ctx.gpr[4] = (16384u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889CFDC;
      }
      goto L_0889CFD4;
    }
L_0889CFD4:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0889CFDC;
L_0889CFDC:
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889D0C0;
      }
      goto L_0889CFEC;
    }
L_0889CFEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D108;
      }
      goto L_0889CFFC;
    }
L_0889CFFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0889D108;
      }
      goto L_0889D008;
    }
L_0889D008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D108;
      }
      goto L_0889D01C;
    }
L_0889D01C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D108;
      }
      goto L_0889D024;
    }
L_0889D024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D108;
      }
      goto L_0889D034;
    }
L_0889D034:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D040u);
    ctx.gpr[5] = (0u | 138u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D040u) goto L_0889D040;
    return;
L_0889D040:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D050u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 328u, 0x089A1774u>(ctx, &aot_mem) && ctx.pc == 0x0889D050u) goto L_0889D050;
    return;
L_0889D050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0889D108;
      }
      goto L_0889D068;
    }
L_0889D068:
    ctx.gpr[31] = (0x0889D070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0889D070u) goto L_0889D070;
    return;
L_0889D070:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2088)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D108;
      }
      goto L_0889D080;
    }
L_0889D080:
    ctx.gpr[31] = (0x0889D088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0889D088u) goto L_0889D088;
    return;
L_0889D088:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D0AC;
      }
      goto L_0889D098;
    }
L_0889D098:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D0A4u);
    ctx.gpr[5] = (0u | 133u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D0A4u) goto L_0889D0A4;
    return;
L_0889D0A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D108;
      }
      goto L_0889D0AC;
    }
L_0889D0AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D0B8u);
    ctx.gpr[5] = (0u | 131u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D0B8u) goto L_0889D0B8;
    return;
L_0889D0B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D108;
      }
      goto L_0889D0C0;
    }
L_0889D0C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D0CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D0CCu) goto L_0889D0CC;
    return;
L_0889D0CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D108;
      }
      goto L_0889D0E8;
    }
L_0889D0E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D108;
      }
      goto L_0889D0F8;
    }
L_0889D0F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1788), ctx.gpr[4]);
    ctx.gpr[31] = (0x0889D108u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x0889D108u) goto L_0889D108;
    return;
L_0889D108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D14C;
      }
      goto L_0889D11C;
    }
L_0889D11C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x0889D148u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D148u) goto L_0889D148;
    return;
L_0889D148:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0889D14C;
L_0889D14C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D768;
      }
      goto L_0889D154;
    }
L_0889D154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D1E0;
      }
      goto L_0889D16C;
    }
L_0889D16C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D1E0;
      }
      goto L_0889D18C;
    }
L_0889D18C:
    ctx.gpr[31] = (0x0889D194u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0889D194u) goto L_0889D194;
    return;
L_0889D194:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D1B0;
      }
      goto L_0889D19C;
    }
L_0889D19C:
    ctx.gpr[31] = (0x0889D1A4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0889D1A4u) goto L_0889D1A4;
    return;
L_0889D1A4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D1E0;
      }
      goto L_0889D1B0;
    }
L_0889D1B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0889D1C8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x0889D1C8u) goto L_0889D1C8;
    return;
L_0889D1C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D1F0;
      }
      goto L_0889D1D8;
    }
L_0889D1D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D208;
      }
      goto L_0889D1E0;
    }
L_0889D1E0:
    ctx.gpr[31] = (0x0889D1E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x0889D1E8u) goto L_0889D1E8;
    return;
L_0889D1E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0889D76C;
      }
      goto L_0889D1F0;
    }
L_0889D1F0:
    ctx.gpr[31] = (0x0889D1F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x0889D1F8u) goto L_0889D1F8;
    return;
L_0889D1F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D208;
      }
      goto L_0889D200;
    }
L_0889D200:
    ctx.gpr[31] = (0x0889D208u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 795u, 0x0899FF58u>(ctx, &aot_mem) && ctx.pc == 0x0889D208u) goto L_0889D208;
    return;
L_0889D208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D768;
      }
      goto L_0889D218;
    }
L_0889D218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D768;
      }
      goto L_0889D22C;
    }
L_0889D22C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D610;
      }
      goto L_0889D240;
    }
L_0889D240:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889D610;
      }
      goto L_0889D250;
    }
L_0889D250:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889D610;
      }
      goto L_0889D260;
    }
L_0889D260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x0889D270u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 224u, 0x088D915Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D270u) goto L_0889D270;
    return;
L_0889D270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x0889D280u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 505u, 0x0899ED08u>(ctx, &aot_mem) && ctx.pc == 0x0889D280u) goto L_0889D280;
    return;
L_0889D280:
    ctx.gpr[31] = (0x0889D288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0889D288u) goto L_0889D288;
    return;
L_0889D288:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15908)));
    ctx.gpr[31] = (0x0889D2A0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15904)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0889D2A0u) goto L_0889D2A0;
    return;
L_0889D2A0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15812)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15808)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889D2DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 254u, 0x089A1230u>(ctx, &aot_mem) && ctx.pc == 0x0889D2DCu) goto L_0889D2DC;
    return;
L_0889D2DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889D528;
      }
      goto L_0889D358;
    }
L_0889D358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889D3EC;
      }
      goto L_0889D3E4;
    }
L_0889D3E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0889D420;
      }
      goto L_0889D3EC;
    }
L_0889D3EC:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0889D420;
L_0889D420:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889D44C;
      }
      goto L_0889D444;
    }
L_0889D444:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0889D480;
      }
      goto L_0889D44C;
    }
L_0889D44C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0889D480;
L_0889D480:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889D520;
      }
      goto L_0889D4B8;
    }
L_0889D4B8:
    ctx.gpr[31] = (0x0889D4C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0889D4C0u) goto L_0889D4C0;
    return;
L_0889D4C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15932)));
    ctx.gpr[31] = (0x0889D4D8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15928)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0889D4D8u) goto L_0889D4D8;
    return;
L_0889D4D8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15844)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15840)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889D514u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 239u, 0x089A10F0u>(ctx, &aot_mem) && ctx.pc == 0x0889D514u) goto L_0889D514;
    return;
L_0889D514:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D520u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D520u) goto L_0889D520;
    return;
L_0889D520:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D608;
      }
      goto L_0889D528;
    }
L_0889D528:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889D5A0;
      }
      goto L_0889D53C;
    }
L_0889D53C:
    ctx.gpr[31] = (0x0889D544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0889D544u) goto L_0889D544;
    return;
L_0889D544:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15828)));
    ctx.gpr[31] = (0x0889D55Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15824)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0889D55Cu) goto L_0889D55C;
    return;
L_0889D55C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15836)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15832)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889D598u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 239u, 0x089A10F0u>(ctx, &aot_mem) && ctx.pc == 0x0889D598u) goto L_0889D598;
    return;
L_0889D598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D608;
      }
      goto L_0889D5A0;
    }
L_0889D5A0:
    ctx.gpr[31] = (0x0889D5A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0889D5A8u) goto L_0889D5A8;
    return;
L_0889D5A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15932)));
    ctx.gpr[31] = (0x0889D5C0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15928)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0889D5C0u) goto L_0889D5C0;
    return;
L_0889D5C0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15844)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15840)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889D5FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 239u, 0x089A10F0u>(ctx, &aot_mem) && ctx.pc == 0x0889D5FCu) goto L_0889D5FC;
    return;
L_0889D5FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D608u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D608u) goto L_0889D608;
    return;
L_0889D608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D768;
      }
      goto L_0889D610;
    }
L_0889D610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D768;
      }
      goto L_0889D620;
    }
L_0889D620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D768;
      }
      goto L_0889D630;
    }
L_0889D630:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D768;
      }
      goto L_0889D638;
    }
L_0889D638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D768;
      }
      goto L_0889D648;
    }
L_0889D648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D670;
      }
      goto L_0889D658;
    }
L_0889D658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D688;
      }
      goto L_0889D670;
    }
L_0889D670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x0889D680u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 264u, 0x088854B4u>(ctx, &aot_mem) && ctx.pc == 0x0889D680u) goto L_0889D680;
    return;
L_0889D680:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D768;
      }
      goto L_0889D688;
    }
L_0889D688:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D6B8;
      }
      goto L_0889D6A0;
    }
L_0889D6A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D6C4;
      }
      goto L_0889D6B8;
    }
L_0889D6B8:
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0889D720;
      }
      goto L_0889D6C4;
    }
L_0889D6C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D6E4;
      }
      goto L_0889D6D8;
    }
L_0889D6D8:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0889D720;
      }
      goto L_0889D6E4;
    }
L_0889D6E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D704;
      }
      goto L_0889D6F8;
    }
L_0889D6F8:
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0889D720;
      }
      goto L_0889D704;
    }
L_0889D704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D720;
      }
      goto L_0889D718;
    }
L_0889D718:
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0889D720;
L_0889D720:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D73Cu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 469u, 0x0888E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0889D73Cu) goto L_0889D73C;
    return;
L_0889D73C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[31] = (0x0889D75Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 670u, 0x089A2CB4u>(ctx, &aot_mem) && ctx.pc == 0x0889D75Cu) goto L_0889D75C;
    return;
L_0889D75C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D768u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D768u) goto L_0889D768;
    return;
L_0889D768:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889D76C;
L_0889D76C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D7A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x0889D7F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0889D7F8u) goto L_0889D7F8;
    return;
L_0889D7F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D804;
      }
      goto L_0889D800;
    }
L_0889D800:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    goto L_0889D804;
L_0889D804:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D8F4;
      }
      goto L_0889D80C;
    }
L_0889D80C:
    ctx.gpr[31] = (0x0889D814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 409u, 0x08ACA85Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D814u) goto L_0889D814;
    return;
L_0889D814:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D854;
      }
      goto L_0889D81C;
    }
L_0889D81C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D8F4;
      }
      goto L_0889D82C;
    }
L_0889D82C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_0889D8F4;
      }
      goto L_0889D840;
    }
L_0889D840:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889D8F4;
      }
      goto L_0889D854;
    }
L_0889D854:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D898;
      }
      goto L_0889D85C;
    }
L_0889D85C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2949)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D898;
      }
      goto L_0889D868;
    }
L_0889D868:
    ctx.gpr[31] = (0x0889D870u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 837u, 0x089A380Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D870u) goto L_0889D870;
    return;
L_0889D870:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
        goto L_0889D88C;
    }
    goto L_0889D878;
L_0889D878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D898;
      }
      goto L_0889D888;
    }
L_0889D888:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    goto L_0889D88C;
L_0889D88C:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D8A0;
      }
      goto L_0889D898;
    }
L_0889D898:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0889D8F4;
      }
      goto L_0889D8A0;
    }
L_0889D8A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[6] = (0u | 1000u);
    ctx.gpr[31] = (0x0889D8B4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x0889D8B4u) goto L_0889D8B4;
    return;
L_0889D8B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D8C0u);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 598u, 0x0899F2C4u>(ctx, &aot_mem) && ctx.pc == 0x0889D8C0u) goto L_0889D8C0;
    return;
L_0889D8C0:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D8D0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D8D0u) goto L_0889D8D0;
    return;
L_0889D8D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0889E4F8;
      }
      goto L_0889D8F4;
    }
L_0889D8F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (63488u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D950;
      }
      goto L_0889D940;
    }
L_0889D940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D960;
      }
      goto L_0889D950;
    }
L_0889D950:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D978;
      }
      goto L_0889D958;
    }
L_0889D958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D9F0;
      }
      goto L_0889D960;
    }
L_0889D960:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D970u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D970u) goto L_0889D970;
    return;
L_0889D970:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0889E4F8;
      }
      goto L_0889D978;
    }
L_0889D978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2094))))));
        goto L_0889D99C;
    }
    goto L_0889D988;
L_0889D988:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2094))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D9D0;
      }
      goto L_0889D998;
    }
L_0889D998:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2094))))));
    goto L_0889D99C;
L_0889D99C:
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D9D0;
      }
      goto L_0889D9A8;
    }
L_0889D9A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D9D0;
      }
      goto L_0889D9BC;
    }
L_0889D9BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D9F0;
      }
      goto L_0889D9D0;
    }
L_0889D9D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D9E8;
      }
      goto L_0889D9E0;
    }
L_0889D9E0:
    ctx.gpr[31] = (0x0889D9E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x0889D9E8u) goto L_0889D9E8;
    return;
L_0889D9E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889E4F8;
      }
      goto L_0889D9F0;
    }
L_0889D9F0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DA24;
      }
      goto L_0889D9F8;
    }
L_0889D9F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DA24;
      }
      goto L_0889DA08;
    }
L_0889DA08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DA24;
      }
      goto L_0889DA18;
    }
L_0889DA18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2088)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0889DAE0;
      }
      goto L_0889DA24;
    }
L_0889DA24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889DAB0;
      }
      goto L_0889DA40;
    }
L_0889DA40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0889DA60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x0889DA60u) goto L_0889DA60;
    return;
L_0889DA60:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_0889DB08;
      }
      goto L_0889DAA8;
    }
L_0889DAA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
      if (branch_taken) {
          goto L_0889DAF4;
      }
      goto L_0889DAB0;
    }
L_0889DAB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889E4F8;
      }
      goto L_0889DAE0;
    }
L_0889DAE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889DAECu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x0889DAECu) goto L_0889DAEC;
    return;
L_0889DAEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889E4F8;
      }
      goto L_0889DAF4;
    }
L_0889DAF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DB48;
      }
      goto L_0889DB04;
    }
L_0889DB04:
    ctx.gpr[4] = (16384u << 16u);
    goto L_0889DB08;
L_0889DB08:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889DB48;
      }
      goto L_0889DB1C;
    }
L_0889DB1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889DDAC;
      }
      goto L_0889DB48;
    }
L_0889DB48:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DCD8;
      }
      goto L_0889DB70;
    }
L_0889DB70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DCD8;
      }
      goto L_0889DB98;
    }
L_0889DB98:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DCD8;
      }
      goto L_0889DBC0;
    }
L_0889DBC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DCD8;
      }
      goto L_0889DBE8;
    }
L_0889DBE8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DCD8;
      }
      goto L_0889DC10;
    }
L_0889DC10:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DCD8;
      }
      goto L_0889DC38;
    }
L_0889DC38:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DCD8;
      }
      goto L_0889DC60;
    }
L_0889DC60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DCD8;
      }
      goto L_0889DC88;
    }
L_0889DC88:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DCD8;
      }
      goto L_0889DCB0;
    }
L_0889DCB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DD24;
      }
      goto L_0889DCD8;
    }
L_0889DCD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0889DD1C;
    }
    goto L_0889DD1C;
L_0889DD1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DDAC;
      }
      goto L_0889DD24;
    }
L_0889DD24:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889DD50;
      }
      goto L_0889DD3C;
    }
L_0889DD3C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DD50;
      }
      goto L_0889DD44;
    }
L_0889DD44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2998)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DDAC;
      }
      goto L_0889DD50;
    }
L_0889DD50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0889DD94;
    }
    goto L_0889DD94;
L_0889DD94:
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DDAC;
      }
      goto L_0889DDAC;
    }
L_0889DDAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DDD0;
      }
      goto L_0889DDBC;
    }
L_0889DDBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E2C0;
      }
      goto L_0889DDD0;
    }
L_0889DDD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DDEC;
      }
      goto L_0889DDE0;
    }
L_0889DDE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889DE48;
      }
      goto L_0889DDEC;
    }
L_0889DDEC:
    ctx.gpr[31] = (0x0889DDF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x0889DDF4u) goto L_0889DDF4;
    return;
L_0889DDF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DE48;
      }
      goto L_0889DDFC;
    }
L_0889DDFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0889DE10u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x0889DE10u) goto L_0889DE10;
    return;
L_0889DE10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DE40;
      }
      goto L_0889DE20;
    }
L_0889DE20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DE40;
      }
      goto L_0889DE30;
    }
L_0889DE30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DE48;
      }
      goto L_0889DE40;
    }
L_0889DE40:
    ctx.gpr[31] = (0x0889DE48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 795u, 0x0899FF58u>(ctx, &aot_mem) && ctx.pc == 0x0889DE48u) goto L_0889DE48;
    return;
L_0889DE48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DF08;
      }
      goto L_0889DE58;
    }
L_0889DE58:
    ctx.gpr[31] = (0x0889DE60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0889DE60u) goto L_0889DE60;
    return;
L_0889DE60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DF08;
      }
      goto L_0889DE68;
    }
L_0889DE68:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2077)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DEB4;
      }
      goto L_0889DE7C;
    }
L_0889DE7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DE9C;
      }
      goto L_0889DE90;
    }
L_0889DE90:
    ctx.gpr[4] = (16480u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889DEB4;
      }
      goto L_0889DE9C;
    }
L_0889DE9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DEB4;
      }
      goto L_0889DEB0;
    }
L_0889DEB0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2077), static_cast<std::uint8_t>(0u));
    goto L_0889DEB4;
L_0889DEB4:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889DF08;
      }
      goto L_0889DEC4;
    }
L_0889DEC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1776)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889DEF4;
      }
      goto L_0889DEE0;
    }
L_0889DEE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DF08;
      }
      goto L_0889DEF4;
    }
L_0889DEF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x0889DF00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 617u, 0x08A8EFD4u>(ctx, &aot_mem) && ctx.pc == 0x0889DF00u) goto L_0889DF00;
    return;
L_0889DF00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0889E4F8;
      }
      goto L_0889DF08;
    }
L_0889DF08:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889E014;
      }
      goto L_0889DF18;
    }
L_0889DF18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E014;
      }
      goto L_0889DF28;
    }
L_0889DF28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E014;
      }
      goto L_0889DF38;
    }
L_0889DF38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DF58;
      }
      goto L_0889DF48;
    }
L_0889DF48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E014;
      }
      goto L_0889DF58;
    }
L_0889DF58:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E014;
      }
      goto L_0889DF60;
    }
L_0889DF60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889DF8C;
      }
      goto L_0889DF74;
    }
L_0889DF74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889DF84u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 328u, 0x089A1774u>(ctx, &aot_mem) && ctx.pc == 0x0889DF84u) goto L_0889DF84;
    return;
L_0889DF84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E00C;
      }
      goto L_0889DF8C;
    }
L_0889DF8C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889DFC4;
      }
      goto L_0889DFA8;
    }
L_0889DFA8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0889DFC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 472u, 0x08899D50u>(ctx, &aot_mem) && ctx.pc == 0x0889DFC4u) goto L_0889DFC4;
    return;
L_0889DFC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DFF0;
      }
      goto L_0889DFD0;
    }
L_0889DFD0:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[31] = (0x0889DFE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 719u, 0x08977A28u>(ctx, &aot_mem) && ctx.pc == 0x0889DFE4u) goto L_0889DFE4;
    return;
L_0889DFE4:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0889DFF0;
L_0889DFF0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[31] = (0x0889E00Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 303u, 0x089A1630u>(ctx, &aot_mem) && ctx.pc == 0x0889E00Cu) goto L_0889E00C;
    return;
L_0889E00C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E4F4;
      }
      goto L_0889E014;
    }
L_0889E014:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889E204;
      }
      goto L_0889E024;
    }
L_0889E024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E204;
      }
      goto L_0889E03C;
    }
L_0889E03C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E204;
      }
      goto L_0889E050;
    }
L_0889E050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E204;
      }
      goto L_0889E064;
    }
L_0889E064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E180;
      }
      goto L_0889E074;
    }
L_0889E074:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E080u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E080u) goto L_0889E080;
    return;
L_0889E080:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x0889E08Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 224u, 0x088D915Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E08Cu) goto L_0889E08C;
    return;
L_0889E08C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0889E0B8u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E0B8u) goto L_0889E0B8;
    return;
L_0889E0B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0889E0C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0889E0C4u) goto L_0889E0C4;
    return;
L_0889E0C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15812)));
    ctx.gpr[31] = (0x0889E0DCu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15808)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0889E0DCu) goto L_0889E0DC;
    return;
L_0889E0DC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889E0F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 254u, 0x089A1230u>(ctx, &aot_mem) && ctx.pc == 0x0889E0F8u) goto L_0889E0F8;
    return;
L_0889E0F8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E194;
      }
      goto L_0889E10C;
    }
L_0889E10C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0889E120u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0889E120u) goto L_0889E120;
    return;
L_0889E120:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15940)));
    ctx.gpr[31] = (0x0889E138u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15936)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0889E138u) goto L_0889E138;
    return;
L_0889E138:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15916)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15912)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0889E178u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 239u, 0x089A10F0u>(ctx, &aot_mem) && ctx.pc == 0x0889E178u) goto L_0889E178;
    return;
L_0889E178:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E1F0;
      }
      goto L_0889E180;
    }
L_0889E180:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E18Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 683u, 0x088877D0u>(ctx, &aot_mem) && ctx.pc == 0x0889E18Cu) goto L_0889E18C;
    return;
L_0889E18C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889E4F8;
      }
      goto L_0889E194;
    }
L_0889E194:
    ctx.gpr[31] = (0x0889E19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0889E19Cu) goto L_0889E19C;
    return;
L_0889E19C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15948)));
    ctx.gpr[31] = (0x0889E1B4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15944)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0889E1B4u) goto L_0889E1B4;
    return;
L_0889E1B4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15848)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889E1F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 239u, 0x089A10F0u>(ctx, &aot_mem) && ctx.pc == 0x0889E1F0u) goto L_0889E1F0;
    return;
L_0889E1F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889E4F4;
      }
      goto L_0889E204;
    }
L_0889E204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E25C;
      }
      goto L_0889E214;
    }
L_0889E214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E25C;
      }
      goto L_0889E228;
    }
L_0889E228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E25C;
      }
      goto L_0889E238;
    }
L_0889E238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (63488u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    goto L_0889E25C;
L_0889E25C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E4F4;
      }
      goto L_0889E26C;
    }
L_0889E26C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E4F4;
      }
      goto L_0889E27C;
    }
L_0889E27C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E288u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E288u) goto L_0889E288;
    return;
L_0889E288:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E4F4;
      }
      goto L_0889E2AC;
    }
L_0889E2AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E2B8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 599u, 0x088DAAD4u>(ctx, &aot_mem) && ctx.pc == 0x0889E2B8u) goto L_0889E2B8;
    return;
L_0889E2B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E4F4;
      }
      goto L_0889E2C0;
    }
L_0889E2C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E4F4;
      }
      goto L_0889E2D0;
    }
L_0889E2D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E338;
      }
      goto L_0889E2E8;
    }
L_0889E2E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_0889E338;
      }
      goto L_0889E308;
    }
L_0889E308:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E338;
      }
      goto L_0889E314;
    }
L_0889E314:
    ctx.gpr[31] = (0x0889E31Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0889E31Cu) goto L_0889E31C;
    return;
L_0889E31C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E370;
      }
      goto L_0889E324;
    }
L_0889E324:
    ctx.gpr[31] = (0x0889E32Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0889E32Cu) goto L_0889E32C;
    return;
L_0889E32C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E370;
      }
      goto L_0889E338;
    }
L_0889E338:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E360;
      }
      goto L_0889E348;
    }
L_0889E348:
    ctx.gpr[31] = (0x0889E350u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E350u) goto L_0889E350;
    return;
L_0889E350:
    ctx.gpr[31] = (0x0889E358u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x0889E358u) goto L_0889E358;
    return;
L_0889E358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0889E4F8;
      }
      goto L_0889E360;
    }
L_0889E360:
    ctx.gpr[31] = (0x0889E368u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x0889E368u) goto L_0889E368;
    return;
L_0889E368:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0889E4F8;
      }
      goto L_0889E370;
    }
L_0889E370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0889E388u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x0889E388u) goto L_0889E388;
    return;
L_0889E388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E4F4;
      }
      goto L_0889E398;
    }
L_0889E398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E4F4;
      }
      goto L_0889E3AC;
    }
L_0889E3AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E4F4;
      }
      goto L_0889E3BC;
    }
L_0889E3BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E4F4;
      }
      goto L_0889E3CC;
    }
L_0889E3CC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E4F4;
      }
      goto L_0889E3D4;
    }
L_0889E3D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E3FC;
      }
      goto L_0889E3E4;
    }
L_0889E3E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E414;
      }
      goto L_0889E3FC;
    }
L_0889E3FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x0889E40Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 264u, 0x088854B4u>(ctx, &aot_mem) && ctx.pc == 0x0889E40Cu) goto L_0889E40C;
    return;
L_0889E40C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E4F4;
      }
      goto L_0889E414;
    }
L_0889E414:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E444;
      }
      goto L_0889E42C;
    }
L_0889E42C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E450;
      }
      goto L_0889E444;
    }
L_0889E444:
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0889E4AC;
      }
      goto L_0889E450;
    }
L_0889E450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E470;
      }
      goto L_0889E464;
    }
L_0889E464:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0889E4AC;
      }
      goto L_0889E470;
    }
L_0889E470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E490;
      }
      goto L_0889E484;
    }
L_0889E484:
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0889E4AC;
      }
      goto L_0889E490;
    }
L_0889E490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E4AC;
      }
      goto L_0889E4A4;
    }
L_0889E4A4:
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0889E4AC;
L_0889E4AC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889E4C8u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 469u, 0x0888E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0889E4C8u) goto L_0889E4C8;
    return;
L_0889E4C8:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[31] = (0x0889E4E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 670u, 0x089A2CB4u>(ctx, &aot_mem) && ctx.pc == 0x0889E4E8u) goto L_0889E4E8;
    return;
L_0889E4E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E4F4u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E4F4u) goto L_0889E4F4;
    return;
L_0889E4F4:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889E4F8;
L_0889E4F8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E520:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15692)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15696), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15688)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15700), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15704), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15708), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15712), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15716)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15720), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E5B4:
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
L_0889E5E0:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E600:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(32);
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
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 4u, 3u);
      ctx.read_vfpu_vector_ct<8u, 3u>(vfpu_target_raw);
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
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E620:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
L_0889E648:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E664:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
L_0889E678:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
L_0889E690:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
L_0889E6AC:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
L_0889E6C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E714;
      }
      goto L_0889E6EC;
    }
L_0889E6EC:
    ctx.gpr[5] = (0u | 45u);
    ctx.gpr[31] = (0x0889E6F8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 32u, 0x089181ECu>(ctx, &aot_mem) && ctx.pc == 0x0889E6F8u) goto L_0889E6F8;
    return;
L_0889E6F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(152));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889E714u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889E714u) goto L_0889E714;
    return;
L_0889E714:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0889E770;
      }
      goto L_0889E728;
    }
L_0889E728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E75C;
      }
      goto L_0889E734;
    }
L_0889E734:
    ctx.gpr[5] = (0u | 45u);
    ctx.gpr[31] = (0x0889E740u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 32u, 0x089181ECu>(ctx, &aot_mem) && ctx.pc == 0x0889E740u) goto L_0889E740;
    return;
L_0889E740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(152));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889E75Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889E75Cu) goto L_0889E75C;
    return;
L_0889E75C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889E728;
      }
      goto L_0889E770;
    }
L_0889E770:
    ctx.gpr[31] = (0x0889E778u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x0889E778u) goto L_0889E778;
    return;
L_0889E778:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E79C;
      }
      goto L_0889E780;
    }
L_0889E780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0889E79Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889E79Cu) goto L_0889E79C;
    return;
L_0889E79C:
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
L_0889E7B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E7C8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0889E810;
L_0889E7C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E7E8;
      }
      goto L_0889E7D0;
    }
L_0889E7D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0889E7F8;
      }
      goto L_0889E7E0;
    }
L_0889E7E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
      if (branch_taken) {
          goto L_0889E7F0;
      }
      goto L_0889E7E8;
    }
L_0889E7E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889E800;
      }
      goto L_0889E7F0;
    }
L_0889E7F0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E7FC;
      }
      goto L_0889E7F8;
    }
L_0889E7F8:
    ctx.gpr[4] = (0u | 1u);
    goto L_0889E7FC;
L_0889E7FC:
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    goto L_0889E800;
L_0889E800:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E810:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E828;
      }
      goto L_0889E820;
    }
L_0889E820:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889E84C;
      }
      goto L_0889E828;
    }
L_0889E828:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889E83Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 510u, 0x08AFE288u>(ctx, &aot_mem) && ctx.pc == 0x0889E83Cu) goto L_0889E83C;
    return;
L_0889E83C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 61 ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[4] & ctx.gpr[2]);
    goto L_0889E84C;
L_0889E84C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E858:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E864:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E870:
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
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E880:
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
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E890:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E8AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E8B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E8C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 498u, 0x08AFE144u>(ctx, &aot_mem) && ctx.pc == 0x0889E8C8u) goto L_0889E8C8;
    return;
L_0889E8C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E8D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E8ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 506u, 0x08AFE218u>(ctx, &aot_mem) && ctx.pc == 0x0889E8ECu) goto L_0889E8EC;
    return;
L_0889E8EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E8F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0889EA80;
      }
      goto L_0889E918;
    }
L_0889E918:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19896));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(500), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0889E94C;
      }
      goto L_0889E934;
    }
L_0889E934:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0889E944u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 97u, 0x08864728u>(ctx, &aot_mem) && ctx.pc == 0x0889E944u) goto L_0889E944;
    return;
L_0889E944:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    goto L_0889E94C;
L_0889E94C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0889E95Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 509u, 0x08AFE25Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E95Cu) goto L_0889E95C;
    return;
L_0889E95C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x0889E968u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 20u, 0x08968154u>(ctx, &aot_mem) && ctx.pc == 0x0889E968u) goto L_0889E968;
    return;
L_0889E968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E98C;
      }
      goto L_0889E974;
    }
L_0889E974:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(152));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889E98Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889E98Cu) goto L_0889E98C;
    return;
L_0889E98C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E9E4;
      }
      goto L_0889E9A0;
    }
L_0889E9A0:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E9CC;
      }
      goto L_0889E9B4;
    }
L_0889E9B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(152));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889E9CCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889E9CCu) goto L_0889E9CC;
    return;
L_0889E9CC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E9A0;
      }
      goto L_0889E9E4;
    }
L_0889E9E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(580)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E9F8;
      }
      goto L_0889E9F0;
    }
L_0889E9F0:
    ctx.gpr[31] = (0x0889E9F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 545u, 0x0884E1D0u>(ctx, &aot_mem) && ctx.pc == 0x0889E9F8u) goto L_0889E9F8;
    return;
L_0889E9F8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889EA04u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 386u, 0x089EE420u>(ctx, &aot_mem) && ctx.pc == 0x0889EA04u) goto L_0889EA04;
    return;
L_0889EA04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EA38;
      }
      goto L_0889EA14;
    }
L_0889EA14:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17164)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17164), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    goto L_0889EA38;
L_0889EA38:
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_0889EA60;
      }
      goto L_0889EA44;
    }
L_0889EA44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17160)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17160), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0889EA60;
L_0889EA60:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889EA6Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 187u, 0x08A0D74Cu>(ctx, &aot_mem) && ctx.pc == 0x0889EA6Cu) goto L_0889EA6C;
    return;
L_0889EA6C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EA80;
      }
      goto L_0889EA78;
    }
L_0889EA78:
    ctx.gpr[31] = (0x0889EA80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0889E8D4;
L_0889EA80:
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
L_0889EA98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889EAB4u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 598u, 0x08A2EB48u>(ctx, &aot_mem) && ctx.pc == 0x0889EAB4u) goto L_0889EAB4;
    return;
L_0889EAB4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15440)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1028))))));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(498), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15440)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1029))))));
    ctx.gpr[31] = (0x0889EAD8u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(499), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 307u, 0x08876AC8u>(ctx, &aot_mem) && ctx.pc == 0x0889EAD8u) goto L_0889EAD8;
    return;
L_0889EAD8:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(544), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EAF0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(541)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889EB24;
      }
      goto L_0889EAFC;
    }
L_0889EAFC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(543)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889EB1C;
      }
      goto L_0889EB08;
    }
L_0889EB08:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_0889EB2C;
      }
      goto L_0889EB14;
    }
L_0889EB14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EB58;
      }
      goto L_0889EB1C;
    }
L_0889EB1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889EC44;
      }
      goto L_0889EB24;
    }
L_0889EB24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889EC44;
      }
      goto L_0889EB2C;
    }
L_0889EB2C:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889EB68;
      }
      goto L_0889EB38;
    }
L_0889EB38:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(844)));
    ctx.gpr[8] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0889EB58;
      }
      goto L_0889EB48;
    }
L_0889EB48:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(844)));
    ctx.gpr[7] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0889EB68;
      }
      goto L_0889EB58;
    }
L_0889EB58:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 50u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u | 55u);
      if (branch_taken) {
          goto L_0889EB70;
      }
      goto L_0889EB68;
    }
L_0889EB68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889EC44;
      }
      goto L_0889EB70;
    }
L_0889EB70:
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EBA8;
      }
      goto L_0889EB84;
    }
L_0889EB84:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889EBB8;
      }
      goto L_0889EB90;
    }
L_0889EB90:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0889EBA8;
      }
      goto L_0889EB9C;
    }
L_0889EB9C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0889EBB8;
      }
      goto L_0889EBA8;
    }
L_0889EBA8:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(844)));
        goto L_0889EBC0;
    }
    goto L_0889EBB0;
L_0889EBB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EBD4;
      }
      goto L_0889EBB8;
    }
L_0889EBB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889EC44;
      }
      goto L_0889EBC0;
    }
L_0889EBC0:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0889EBD4;
      }
      goto L_0889EBC8;
    }
L_0889EBC8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0889EBF0;
      }
      goto L_0889EBD4;
    }
L_0889EBD4:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889EB70;
      }
      goto L_0889EBE8;
    }
L_0889EBE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EBF8;
      }
      goto L_0889EBF0;
    }
L_0889EBF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889EC44;
      }
      goto L_0889EBF8;
    }
L_0889EBF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EC40;
      }
      goto L_0889EC08;
    }
L_0889EC08:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889EC40;
      }
      goto L_0889EC10;
    }
L_0889EC10:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0889EC30;
      }
      goto L_0889EC18;
    }
L_0889EC18:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889EC38;
      }
      goto L_0889EC20;
    }
L_0889EC20:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0889EC38;
      }
      goto L_0889EC28;
    }
L_0889EC28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889EC44;
      }
      goto L_0889EC30;
    }
L_0889EC30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889EC44;
      }
      goto L_0889EC38;
    }
L_0889EC38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889EC44;
      }
      goto L_0889EC40;
    }
L_0889EC40:
    ctx.gpr[2] = (0u | 1u);
    goto L_0889EC44;
L_0889EC44:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EC4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x0889ED18u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 478u, 0x088C68F4u>(ctx, &aot_mem) && ctx.pc == 0x0889ED18u) goto L_0889ED18;
    return;
L_0889ED18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889ED34;
      }
      goto L_0889ED20;
    }
L_0889ED20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0889ED34;
      }
      goto L_0889ED2C;
    }
L_0889ED2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889ED38;
      }
      goto L_0889ED34;
    }
L_0889ED34:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_0889ED38;
L_0889ED38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889ED4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889ED64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 314u, 0x08925F38u>(ctx, &aot_mem) && ctx.pc == 0x0889ED64u) goto L_0889ED64;
    return;
L_0889ED64:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0889ED88;
      }
      goto L_0889ED74;
    }
L_0889ED74:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0889EDA8;
      }
      goto L_0889ED80;
    }
L_0889ED80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0889EDA8;
      }
      goto L_0889ED88;
    }
L_0889ED88:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EDA8;
      }
      goto L_0889ED94;
    }
L_0889ED94:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889EDA8;
      }
      goto L_0889EDA4;
    }
L_0889EDA4:
    ctx.gpr[4] = (0u | 255u);
    goto L_0889EDA8;
L_0889EDA8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889EDB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 313u, 0x08925F24u>(ctx, &aot_mem) && ctx.pc == 0x0889EDB4u) goto L_0889EDB4;
    return;
L_0889EDB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EDC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0889EEB0;
      }
      goto L_0889EE00;
    }
L_0889EE00:
    ctx.gpr[5] = (0u | 41u);
    ctx.gpr[31] = (0x0889EE0Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 32u, 0x089181ECu>(ctx, &aot_mem) && ctx.pc == 0x0889EE0Cu) goto L_0889EE0C;
    return;
L_0889EE0C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
      if (branch_taken) {
          goto L_0889EE48;
      }
      goto L_0889EE1C;
    }
L_0889EE1C:
    ctx.gpr[31] = (0x0889EE24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0889EE24u) goto L_0889EE24;
    return;
L_0889EE24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
      if (branch_taken) {
          goto L_0889EE48;
      }
      goto L_0889EE2C;
    }
L_0889EE2C:
    ctx.gpr[31] = (0x0889EE34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 311u, 0x08A828F8u>(ctx, &aot_mem) && ctx.pc == 0x0889EE34u) goto L_0889EE34;
    return;
L_0889EE34:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889EE44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 119u, 0x088A8638u>(ctx, &aot_mem) && ctx.pc == 0x0889EE44u) goto L_0889EE44;
    return;
L_0889EE44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    goto L_0889EE48;
L_0889EE48:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EEB0;
      }
      goto L_0889EE50;
    }
L_0889EE50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0889EE9C;
      }
      goto L_0889EE60;
    }
L_0889EE60:
    ctx.gpr[31] = (0x0889EE68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 424u, 0x089A1DB8u>(ctx, &aot_mem) && ctx.pc == 0x0889EE68u) goto L_0889EE68;
    return;
L_0889EE68:
    ctx.gpr[31] = (0x0889EE70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0889EE70u) goto L_0889EE70;
    return;
L_0889EE70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889EEB0;
      }
      goto L_0889EE78;
    }
L_0889EE78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(152));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889EE94u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889EE94u) goto L_0889EE94;
    return;
L_0889EE94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EEB0;
      }
      goto L_0889EE9C;
    }
L_0889EE9C:
    ctx.gpr[6] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[31] = (0x0889EEB0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 144u, 0x089B07D0u>(ctx, &aot_mem) && ctx.pc == 0x0889EEB0u) goto L_0889EEB0;
    return;
L_0889EEB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16512u << 16u);
      if (branch_taken) {
          goto L_0889EF90;
      }
      goto L_0889EEC4;
    }
L_0889EEC4:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[21] = (2232u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 50u);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(5992));
    ctx.gpr[22] = (2229u << 16u);
    goto L_0889EEE0;
L_0889EEE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EF7C;
      }
      goto L_0889EEEC;
    }
L_0889EEEC:
    ctx.gpr[5] = (0u | 41u);
    ctx.gpr[31] = (0x0889EEF8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 32u, 0x089181ECu>(ctx, &aot_mem) && ctx.pc == 0x0889EEF8u) goto L_0889EEF8;
    return;
L_0889EEF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0889EF44;
      }
      goto L_0889EF08;
    }
L_0889EF08:
    ctx.gpr[31] = (0x0889EF10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 424u, 0x089A1DB8u>(ctx, &aot_mem) && ctx.pc == 0x0889EF10u) goto L_0889EF10;
    return;
L_0889EF10:
    ctx.gpr[31] = (0x0889EF18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0889EF18u) goto L_0889EF18;
    return;
L_0889EF18:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889EF54;
      }
      goto L_0889EF20;
    }
L_0889EF20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(152));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889EF3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889EF3Cu) goto L_0889EF3C;
    return;
L_0889EF3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EF54;
      }
      goto L_0889EF44;
    }
L_0889EF44:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[31] = (0x0889EF54u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 144u, 0x089B07D0u>(ctx, &aot_mem) && ctx.pc == 0x0889EF54u) goto L_0889EF54;
    return;
L_0889EF54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EF7C;
      }
      goto L_0889EF60;
    }
L_0889EF60:
    ctx.gpr[31] = (0x0889EF68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0889EF68u) goto L_0889EF68;
    return;
L_0889EF68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EF7C;
      }
      goto L_0889EF70;
    }
L_0889EF70:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0889EF7Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 119u, 0x088A8638u>(ctx, &aot_mem) && ctx.pc == 0x0889EF7Cu) goto L_0889EF7C;
    return;
L_0889EF7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889EEE0;
      }
      goto L_0889EF90;
    }
L_0889EF90:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EFC0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(544)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F000;
      }
      goto L_0889EFD4;
    }
L_0889EFD4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889EFF8;
      }
      goto L_0889EFE0;
    }
L_0889EFE0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889EFD4;
      }
      goto L_0889EFF0;
    }
L_0889EFF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F000;
      }
      goto L_0889EFF8;
    }
L_0889EFF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889F004;
      }
      goto L_0889F000;
    }
L_0889F000:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889F004;
L_0889F004:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F00C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(646)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0889F110;
      }
      goto L_0889F028;
    }
L_0889F028:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (16773u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 21845u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0889F060;
      }
      goto L_0889F054;
    }
L_0889F054:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0889F074;
      }
      goto L_0889F060;
    }
L_0889F060:
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_0889F074;
L_0889F074:
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F090;
      }
      goto L_0889F080;
    }
L_0889F080:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(646), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(646)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
      if (branch_taken) {
          goto L_0889F0A0;
      }
      goto L_0889F090;
    }
L_0889F090:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(646), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(646)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    goto L_0889F0A0;
L_0889F0A0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F0EC;
      }
      goto L_0889F0A8;
    }
L_0889F0A8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0889F0EC;
      }
      goto L_0889F0BC;
    }
L_0889F0BC:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-512));
    ctx.gpr[7] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889F0EC;
      }
      goto L_0889F0D0;
    }
L_0889F0D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 29u);
    ctx.gpr[31] = (0x0889F0E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0889F0E8u) goto L_0889F0E8;
    return;
L_0889F0E8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(646)));
    goto L_0889F0EC;
L_0889F0EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0889F110;
      }
      goto L_0889F0F4;
    }
L_0889F0F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(648)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(280));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0889F110u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889F110u) goto L_0889F110;
    return;
L_0889F110:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F120:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 5u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0889F1C4;
      }
      goto L_0889F144;
    }
L_0889F144:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (48291u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x0889F1BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x0889F1BCu) goto L_0889F1BC;
    return;
L_0889F1BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F204;
      }
      goto L_0889F1C4;
    }
L_0889F1C4:
    ctx.gpr[4] = (48716u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[18];
    ctx.gpr[31] = (0x0889F204u);
    ctx.fpr[16] = ctx.fpr[19] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x0889F204u) goto L_0889F204;
    return;
L_0889F204:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0889F258;
      }
      goto L_0889F218;
    }
L_0889F218:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F240;
      }
      goto L_0889F224;
    }
L_0889F224:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889F218;
      }
      goto L_0889F238;
    }
L_0889F238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F258;
      }
      goto L_0889F240;
    }
L_0889F240:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(540)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(540), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889F25C;
      }
      goto L_0889F258;
    }
L_0889F258:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889F25C;
L_0889F25C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F270:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[7] & 2u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0889F2B4;
      }
      goto L_0889F29C;
    }
L_0889F29C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889F2C8;
      }
      goto L_0889F2AC;
    }
L_0889F2AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (48716u << 16u);
      if (branch_taken) {
          goto L_0889F348;
      }
      goto L_0889F2B4;
    }
L_0889F2B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889F2C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0889F120;
L_0889F2C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F3C0;
      }
      goto L_0889F2C8;
    }
L_0889F2C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (48291u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x0889F340u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x0889F340u) goto L_0889F340;
    return;
L_0889F340:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F384;
      }
      goto L_0889F348;
    }
L_0889F348:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[18];
    ctx.gpr[31] = (0x0889F384u);
    ctx.fpr[16] = ctx.fpr[19] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x0889F384u) goto L_0889F384;
    return;
L_0889F384:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_0889F3BC;
      }
      goto L_0889F394;
    }
L_0889F394:
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F3BC;
      }
      goto L_0889F3A4;
    }
L_0889F3A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(540)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(508), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(540), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889F3C0;
      }
      goto L_0889F3BC;
    }
L_0889F3BC:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889F3C0;
L_0889F3C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F3D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[7] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0889F430;
      }
      goto L_0889F3E8;
    }
L_0889F3E8:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_0889F3F0;
L_0889F3F0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889F414;
      }
      goto L_0889F3FC;
    }
L_0889F3FC:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889F3F0;
      }
      goto L_0889F40C;
    }
L_0889F40C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F428;
      }
      goto L_0889F414;
    }
L_0889F414:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(508), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(540), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0889F47C;
      }
      goto L_0889F428;
    }
L_0889F428:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F47C;
      }
      goto L_0889F430;
    }
L_0889F430:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(544)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0889F47C;
      }
      goto L_0889F444;
    }
L_0889F444:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889F468;
      }
      goto L_0889F450;
    }
L_0889F450:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889F444;
      }
      goto L_0889F460;
    }
L_0889F460:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F47C;
      }
      goto L_0889F468;
    }
L_0889F468:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(508), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(540), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0889F47C;
      }
      goto L_0889F47C;
    }
L_0889F47C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F484:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[30]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889F4D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0889F4D4u) goto L_0889F4D4;
    return;
L_0889F4D4:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[10] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0889F50C;
      }
      goto L_0889F4E4;
    }
L_0889F4E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889F50C;
      }
      goto L_0889F4F4;
    }
L_0889F4F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0889F50C;
      }
      goto L_0889F500;
    }
L_0889F500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0889F52C;
      }
      goto L_0889F50C;
    }
L_0889F50C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[7];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(544)));
      if (branch_taken) {
          goto L_0889F538;
      }
      goto L_0889F524;
    }
L_0889F524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F53C;
      }
      goto L_0889F52C;
    }
L_0889F52C:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
      if (branch_taken) {
          goto L_0889F824;
      }
      goto L_0889F538;
    }
L_0889F538:
    ctx.gpr[4] = (0u | 1u);
    goto L_0889F53C;
L_0889F53C:
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[6]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_0889F5CC;
      }
      goto L_0889F554;
    }
L_0889F554:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[29] | 0u);
    ctx.gpr[10] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (256u << 16u);
    goto L_0889F564;
L_0889F564:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F5BC;
      }
      goto L_0889F570;
    }
L_0889F570:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0889F5BC;
      }
      goto L_0889F578;
    }
L_0889F578:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(412)));
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F5BC;
      }
      goto L_0889F588;
    }
L_0889F588:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) <= 0;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889F5A8;
      }
      goto L_0889F598;
    }
L_0889F598:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889F5BC;
      }
      goto L_0889F5A8;
    }
L_0889F5A8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F5BC;
      }
      goto L_0889F5B0;
    }
L_0889F5B0:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    goto L_0889F5BC;
L_0889F5BC:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889F564;
      }
      goto L_0889F5CC;
    }
L_0889F5CC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0889F650;
      }
      goto L_0889F5DC;
    }
L_0889F5DC:
    ctx.gpr[22] = (0u | 6u);
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
    goto L_0889F5E8;
L_0889F5E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0889F5F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0889F5F4u) goto L_0889F5F4;
    return;
L_0889F5F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F634;
      }
      goto L_0889F5FC;
    }
L_0889F5FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0889F634;
      }
      goto L_0889F608;
    }
L_0889F608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0889F634;
      }
      goto L_0889F614;
    }
L_0889F614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0889F634;
      }
      goto L_0889F620;
    }
L_0889F620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
      if (branch_taken) {
          goto L_0889F824;
      }
      goto L_0889F634;
    }
L_0889F634:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889F5E8;
      }
      goto L_0889F650;
    }
L_0889F650:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 1800u);
      if (branch_taken) {
          goto L_0889F6EC;
      }
      goto L_0889F660;
    }
L_0889F660:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16204)));
    ctx.gpr[21] = (ctx.gpr[29] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16200)));
    ctx.gpr[19] = (2230u << 16u);
    goto L_0889F678;
L_0889F678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1772), ctx.gpr[6]);
    ctx.gpr[31] = (0x0889F694u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x0889F694u) goto L_0889F694;
    return;
L_0889F694:
    ctx.gpr[31] = (0x0889F69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0889F69Cu) goto L_0889F69C;
    return;
L_0889F69C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889F6B0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0889F6B0u) goto L_0889F6B0;
    return;
L_0889F6B0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889F678;
      }
      goto L_0889F6EC;
    }
L_0889F6EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F824;
      }
      goto L_0889F6FC;
    }
L_0889F6FC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0889F824;
      }
      goto L_0889F704;
    }
L_0889F704:
    ctx.gpr[31] = (0x0889F70Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0889F70Cu) goto L_0889F70C;
    return;
L_0889F70C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16196)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16192)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0889F72Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0889F72Cu) goto L_0889F72C;
    return;
L_0889F72C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0889F750;
      }
      goto L_0889F748;
    }
L_0889F748:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0889F750;
      }
      goto L_0889F750;
    }
L_0889F750:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F824;
      }
      goto L_0889F758;
    }
L_0889F758:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_0889F824;
      }
      goto L_0889F768;
    }
L_0889F768:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[22] = (8u << 16u);
    goto L_0889F770;
L_0889F770:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (ctx.gpr[4] ^ 20u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 5u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F7E0;
      }
      goto L_0889F798;
    }
L_0889F798:
    ctx.gpr[31] = (0x0889F7A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0889F7A0u) goto L_0889F7A0;
    return;
L_0889F7A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0889F7B4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0889F7B4u) goto L_0889F7B4;
    return;
L_0889F7B4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0889F7D8;
      }
      goto L_0889F7D0;
    }
L_0889F7D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0889F7D8;
      }
      goto L_0889F7D8;
    }
L_0889F7D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F814;
      }
      goto L_0889F7E0;
    }
L_0889F7E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(420)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1772), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F808;
      }
      goto L_0889F7FC;
    }
L_0889F7FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_0889F808;
L_0889F808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_0889F814;
L_0889F814:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889F770;
      }
      goto L_0889F824;
    }
L_0889F824:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F854:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(601), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889F88Cu);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0889F88Cu) goto L_0889F88C;
    return;
L_0889F88C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0889F98C;
      }
      goto L_0889F894;
    }
L_0889F894:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 157u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_0889F930;
      }
      goto L_0889F8A4;
    }
L_0889F8A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5552)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F930;
      }
      goto L_0889F8C0;
    }
L_0889F8C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F920;
      }
      goto L_0889F8D0;
    }
L_0889F8D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[31] = (0x0889F8E0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 26u, 0x089441E4u>(ctx, &aot_mem) && ctx.pc == 0x0889F8E0u) goto L_0889F8E0;
    return;
L_0889F8E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-129));
      if (branch_taken) {
          goto L_0889F908;
      }
      goto L_0889F8EC;
    }
L_0889F8EC:
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0889F8FCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x0889F8FCu) goto L_0889F8FC;
    return;
L_0889F8FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[4] & ctx.gpr[17]);
      if (branch_taken) {
          goto L_0889F91C;
      }
      goto L_0889F908;
    }
L_0889F908:
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[31] = (0x0889F914u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 654u, 0x0899F668u>(ctx, &aot_mem) && ctx.pc == 0x0889F914u) goto L_0889F914;
    return;
L_0889F914:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[17] = (ctx.gpr[4] & ctx.gpr[17]);
    goto L_0889F91C;
L_0889F91C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_0889F920;
L_0889F920:
    ctx.gpr[31] = (0x0889F928u);
    ctx.gpr[4] = (0u | 277u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x0889F928u) goto L_0889F928;
    return;
L_0889F928:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F98C;
      }
      goto L_0889F930;
    }
L_0889F930:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-999));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_0889F98C;
      }
      goto L_0889F93C;
    }
L_0889F93C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5232)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F98C;
      }
      goto L_0889F958;
    }
L_0889F958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x0889F968u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 26u, 0x089441E4u>(ctx, &aot_mem) && ctx.pc == 0x0889F968u) goto L_0889F968;
    return;
L_0889F968:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F984;
      }
      goto L_0889F970;
    }
L_0889F970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0889F984u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x0889F984u) goto L_0889F984;
    return;
L_0889F984:
    ctx.gpr[31] = (0x0889F98Cu);
    ctx.gpr[4] = (0u | 261u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x0889F98Cu) goto L_0889F98C;
    return;
L_0889F98C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(504), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F9A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0889FA24;
      }
      goto L_0889F9C0;
    }
L_0889F9C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FA1C;
      }
      goto L_0889F9D0;
    }
L_0889F9D0:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889F9E0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 37u, 0x08AA01F0u>(ctx, &aot_mem) && ctx.pc == 0x0889F9E0u) goto L_0889F9E0;
    return;
L_0889F9E0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(504), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1332), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889F9F8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1332));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0889F9F8u) goto L_0889F9F8;
    return;
L_0889F9F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
        goto L_0889FA2C;
    }
    goto L_0889FA14;
L_0889FA14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FA50;
      }
      goto L_0889FA1C;
    }
L_0889FA1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FA80;
      }
      goto L_0889FA24;
    }
L_0889FA24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FA80;
      }
      goto L_0889FA2C;
    }
L_0889FA2C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FA48;
      }
      goto L_0889FA34;
    }
L_0889FA34:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_0889FA48;
    }
    goto L_0889FA3C;
L_0889FA3C:
    ctx.gpr[31] = (0x0889FA44u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0889FA44u) goto L_0889FA44;
    return;
L_0889FA44:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_0889FA48;
L_0889FA48:
    ctx.gpr[31] = (0x0889FA50u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x0889FA50u) goto L_0889FA50;
    return;
L_0889FA50:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
      if (branch_taken) {
          goto L_0889FA80;
      }
      goto L_0889FA68;
    }
L_0889FA68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    goto L_0889FA80;
L_0889FA80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FA94:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FAA4;
      }
      goto L_0889FA9C;
    }
L_0889FA9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FAAC;
      }
      goto L_0889FAA4;
    }
L_0889FAA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FAD4;
      }
      goto L_0889FAAC;
    }
L_0889FAAC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FAD0;
      }
      goto L_0889FAB8;
    }
L_0889FAB8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889FAAC;
      }
      goto L_0889FAC8;
    }
L_0889FAC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FAD4;
      }
      goto L_0889FAD0;
    }
L_0889FAD0:
    ctx.gpr[2] = (0u | 1u);
    goto L_0889FAD4;
L_0889FAD4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FADC:
    ctx.gpr[6] = (0u | 0u);
    goto L_0889FAE0;
L_0889FAE0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FAF8;
      }
      goto L_0889FAEC;
    }
L_0889FAEC:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FB10;
      }
      goto L_0889FAF8;
    }
L_0889FAF8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889FAE0;
      }
      goto L_0889FB08;
    }
L_0889FB08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FB14;
      }
      goto L_0889FB10;
    }
L_0889FB10:
    ctx.gpr[2] = (0u | 1u);
    goto L_0889FB14;
L_0889FB14:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FB1C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FB38;
      }
      goto L_0889FB24;
    }
L_0889FB24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889FB40;
      }
      goto L_0889FB30;
    }
L_0889FB30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889FB44;
      }
      goto L_0889FB38;
    }
L_0889FB38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FB44;
      }
      goto L_0889FB40;
    }
L_0889FB40:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889FB44;
L_0889FB44:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FB4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FB6C;
      }
      goto L_0889FB58;
    }
L_0889FB58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FB6C;
      }
      goto L_0889FB64;
    }
L_0889FB64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889FB70;
      }
      goto L_0889FB6C;
    }
L_0889FB6C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889FB70;
L_0889FB70:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FB78:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FBB0;
      }
      goto L_0889FB84;
    }
L_0889FB84:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_0889FB8C;
L_0889FB8C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FBA0;
      }
      goto L_0889FB98;
    }
L_0889FB98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_0889FBB0;
      }
      goto L_0889FBA0;
    }
L_0889FBA0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889FB8C;
      }
      goto L_0889FBB0;
    }
L_0889FBB0:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FBBC;
      }
      goto L_0889FBB8;
    }
L_0889FBB8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(540), static_cast<std::uint8_t>(0u));
    goto L_0889FBBC;
L_0889FBBC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FBC4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_0889FBEC;
      }
      goto L_0889FBD4;
    }
L_0889FBD4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0889FBFC;
      }
      goto L_0889FBDC;
    }
L_0889FBDC:
    ctx.gpr[4] = (49036u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889FC18;
      }
      goto L_0889FBEC;
    }
L_0889FBEC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FBFC;
      }
      goto L_0889FBF4;
    }
L_0889FBF4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0889FC18;
      }
      goto L_0889FBFC;
    }
L_0889FBFC:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    goto L_0889FC18;
L_0889FC18:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    jump_target = ctx.gpr[31];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FC28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FCAC;
      }
      goto L_0889FC8C;
    }
L_0889FC8C:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889FCA4;
      }
      goto L_0889FC9C;
    }
L_0889FC9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FCF8;
      }
      goto L_0889FCA4;
    }
L_0889FCA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0889FCF8;
      }
      goto L_0889FCAC;
    }
L_0889FCAC:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889FCDC;
      }
      goto L_0889FCBC;
    }
L_0889FCBC:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889FCD4;
      }
      goto L_0889FCCC;
    }
L_0889FCCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889FCF8;
      }
      goto L_0889FCD4;
    }
L_0889FCD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FCF8;
      }
      goto L_0889FCDC;
    }
L_0889FCDC:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889FCF4;
      }
      goto L_0889FCEC;
    }
L_0889FCEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_0889FCF8;
      }
      goto L_0889FCF4;
    }
L_0889FCF4:
    ctx.gpr[2] = (0u | 2u);
    goto L_0889FCF8;
L_0889FCF8:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FD00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48998u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889FD38;
      }
      goto L_0889FD30;
    }
L_0889FD30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889FD3C;
      }
      goto L_0889FD38;
    }
L_0889FD38:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889FD3C;
L_0889FD3C:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FD44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (48972u << 16u);
      if (branch_taken) {
          goto L_0889FD90;
      }
      goto L_0889FD74;
    }
L_0889FD74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889FD98;
      }
      goto L_0889FD90;
    }
L_0889FD90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889FD9C;
      }
      goto L_0889FD98;
    }
L_0889FD98:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889FD9C;
L_0889FD9C:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FDA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 147 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 196 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889FDD8;
      }
      goto L_0889FDB4;
    }
L_0889FDB4:
    ctx.gpr[5] = (0u | 138u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-954));
      if (branch_taken) {
          goto L_0889FDD0;
      }
      goto L_0889FDC0;
    }
L_0889FDC0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-982));
      if (branch_taken) {
          goto L_0889FE14;
      }
      goto L_0889FDC8;
    }
L_0889FDC8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FE0C;
      }
      goto L_0889FDD0;
    }
L_0889FDD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889FE18;
      }
      goto L_0889FDD8;
    }
L_0889FDD8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 159 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889FE00;
      }
      goto L_0889FDE0;
    }
L_0889FDE0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-147));
      if (branch_taken) {
          goto L_0889FE0C;
      }
      goto L_0889FDE8;
    }
L_0889FDE8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(3088)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FE00:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 197 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FDD0;
      }
      goto L_0889FE0C;
    }
L_0889FE0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FE18;
      }
      goto L_0889FE14;
    }
L_0889FE14:
    ctx.gpr[2] = (0u | 1u);
    goto L_0889FE18;
L_0889FE18:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FE20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 166u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 151u);
      if (branch_taken) {
          goto L_0889FE40;
      }
      goto L_0889FE30;
    }
L_0889FE30:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 147u);
      if (branch_taken) {
          goto L_0889FE40;
      }
      goto L_0889FE38;
    }
L_0889FE38:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FE48;
      }
      goto L_0889FE40;
    }
L_0889FE40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FE4C;
      }
      goto L_0889FE48;
    }
L_0889FE48:
    ctx.gpr[2] = (0u | 1u);
    goto L_0889FE4C;
L_0889FE4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FE54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[5] & 8192u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FE90;
      }
      goto L_0889FE68;
    }
L_0889FE68:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(498))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FE80;
      }
      goto L_0889FE74;
    }
L_0889FE74:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(499))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FE88;
      }
      goto L_0889FE80;
    }
L_0889FE80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889FE94;
      }
      goto L_0889FE88;
    }
L_0889FE88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FE94;
      }
      goto L_0889FE90;
    }
L_0889FE90:
    ctx.gpr[2] = (0u | 1u);
    goto L_0889FE94;
L_0889FE94:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FE9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(660)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0889FEF4;
      }
      goto L_0889FEC0;
    }
L_0889FEC0:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_0889FEF4;
      }
      goto L_0889FECC;
    }
L_0889FECC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_0889FEF4;
      }
      goto L_0889FED4;
    }
L_0889FED4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FEF4;
      }
      goto L_0889FEDC;
    }
L_0889FEDC:
    ctx.gpr[31] = (0x0889FEE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0889FEE4u) goto L_0889FEE4;
    return;
L_0889FEE4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(660)));
        goto L_0889FEFC;
    }
    goto L_0889FEEC;
L_0889FEEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FF08;
      }
      goto L_0889FEF4;
    }
L_0889FEF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FF9C;
      }
      goto L_0889FEFC;
    }
L_0889FEFC:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FF20;
      }
      goto L_0889FF08;
    }
L_0889FF08:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FF28;
      }
      goto L_0889FF18;
    }
L_0889FF18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FF98;
      }
      goto L_0889FF20;
    }
L_0889FF20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FF9C;
      }
      goto L_0889FF28;
    }
L_0889FF28:
    ctx.gpr[31] = (0x0889FF30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0889FF30u) goto L_0889FF30;
    return;
L_0889FF30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FF98;
      }
      goto L_0889FF38;
    }
L_0889FF38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FF98;
      }
      goto L_0889FF44;
    }
L_0889FF44:
    ctx.gpr[31] = (0x0889FF4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 261u, 0x089A5284u>(ctx, &aot_mem) && ctx.pc == 0x0889FF4Cu) goto L_0889FF4C;
    return;
L_0889FF4C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FF68;
      }
      goto L_0889FF58;
    }
L_0889FF58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(660)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FF7C;
      }
      goto L_0889FF68;
    }
L_0889FF68:
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[16] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(660)));
        goto L_0889FF84;
    }
    goto L_0889FF74;
L_0889FF74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FF98;
      }
      goto L_0889FF7C;
    }
L_0889FF7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FF9C;
      }
      goto L_0889FF84;
    }
L_0889FF84:
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FF98;
      }
      goto L_0889FF90;
    }
L_0889FF90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FF9C;
      }
      goto L_0889FF98;
    }
L_0889FF98:
    ctx.gpr[2] = (0u | 1u);
    goto L_0889FF9C;
L_0889FF9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FFB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(660)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0889FFCC;
      }
      goto L_0889FFBC;
    }
L_0889FFBC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_0889FFCC;
      }
      goto L_0889FFC4;
    }
L_0889FFC4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FFD4;
      }
      goto L_0889FFCC;
    }
L_0889FFCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889FFD8;
      }
      goto L_0889FFD4;
    }
L_0889FFD4:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889FFD8;
L_0889FFD8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FFE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 3u, 0x088A003Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 1u, 0x088A0000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0038(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0038_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_38(Runtime &runtime) {
    runtime.register_generated_unit(38u, 0x0889C000u, 16384u, &recomp_unit_0038, &recomp_unit_0038_entry);
    runtime.register_function(0x0889C000u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C028u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C030u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C088u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C0C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C0C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C0D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C17Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C184u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C1C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C1D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C244u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C250u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C268u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C288u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C2A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C2BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C2D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C2F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C300u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C308u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C324u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C374u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C380u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C388u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C3C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C3D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C40Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C420u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C440u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C454u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C45Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C464u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C468u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C470u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C47Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C484u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C488u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C4C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C50Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C514u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C51Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C524u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C528u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C538u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C540u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C550u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C570u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C578u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C598u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C600u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C620u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C628u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C638u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C644u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C64Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C654u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C65Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C66Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C674u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C67Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C690u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C700u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C708u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C718u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C728u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C730u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C73Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C74Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C768u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C79Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C800u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C808u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C818u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C828u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C830u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C838u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C84Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C854u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C860u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C868u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C870u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C884u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C898u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C904u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C90Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C928u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C970u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C994u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C9A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C9ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C9C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C9D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C9E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C9E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA64u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA78u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA88u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB88u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CBA0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CBB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CBC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CBE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CBF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC74u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCBCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD80u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD88u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CDA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CDBCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CDF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE64u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE74u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEBCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF64u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFBCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D008u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D01Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D024u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D034u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D040u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D050u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D068u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D070u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D080u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D088u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D098u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D108u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D11Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D148u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D14Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D154u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D16Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D18Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D194u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D19Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D200u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D208u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D218u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D22Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D240u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D250u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D260u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D270u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D280u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D288u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D358u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D420u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D444u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D44Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D480u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D4B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D4C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D4D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D514u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D520u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D528u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D53Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D544u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D55Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D598u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D608u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D610u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D620u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D630u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D638u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D648u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D658u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D670u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D680u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D688u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D704u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D718u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D720u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D73Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D75Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D768u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D76Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D800u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D804u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D80Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D814u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D81Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D82Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D840u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D854u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D85Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D868u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D870u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D878u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D888u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D88Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D898u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D940u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D950u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D958u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D960u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D970u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D978u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D988u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D998u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D99Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DAA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DAB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DAE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DAECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DAF4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC88u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DCB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DCD8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDBCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDD0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDF4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEF4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF74u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFD0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E00Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E014u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E024u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E03Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E050u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E064u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E074u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E080u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E08Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E0B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E0C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E0DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E0F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E10Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E120u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E138u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E178u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E180u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E18Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E194u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E19Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E1B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E1F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E204u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E214u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E228u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E238u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E25Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E26Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E27Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E288u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E2ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E2B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E2C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E2D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E2E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E308u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E314u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E31Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E324u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E32Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E338u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E348u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E350u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E358u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E360u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E368u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E370u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E388u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E398u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E3ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E3BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E3CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E3D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E3E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E3FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E40Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E414u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E42Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E444u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E450u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E464u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E470u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E484u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E490u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E4A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E4ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E4C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E4E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E4F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E4F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E520u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E5B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E5E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E600u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E620u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E648u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E664u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E678u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E690u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E6ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E6C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E6ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E6F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E714u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E728u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E734u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E740u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E75Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E770u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E778u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E780u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E79Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E800u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E810u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E820u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E828u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E83Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E84Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E858u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E864u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E870u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E880u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E890u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E8ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E8B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E8C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E8D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E8ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E8F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E918u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E934u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E944u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E94Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E95Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E968u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E974u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E98Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA6Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA78u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA80u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EAB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EAD8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EAF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EAFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED64u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED74u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED80u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED88u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE0Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE78u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EEB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EEC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EEE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EEECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EEF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F000u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F004u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F00Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F028u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F054u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F060u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F074u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F080u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F090u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F0A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F0A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F0BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F0D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F0E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F0ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F0F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F110u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F120u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F144u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F1BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F1C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F204u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F218u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F224u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F238u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F240u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F258u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F25Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F270u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F29Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F2ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F2B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F2C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F2C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F340u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F348u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F384u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F394u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F40Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F414u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F428u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F430u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F444u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F450u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F460u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F468u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F47Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F484u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F500u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F50Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F524u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F52Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F538u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F53Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F554u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F564u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F570u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F578u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F588u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F598u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F608u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F614u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F620u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F634u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F650u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F660u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F678u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F694u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F69Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F6B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F6ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F6FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F704u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F70Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F72Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F748u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F750u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F758u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F768u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F770u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F798u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F808u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F814u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F824u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F854u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F88Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F894u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F908u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F914u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F91Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F920u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F928u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F930u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F93Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F958u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F968u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F970u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F984u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F98Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F9A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F9C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F9D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F9E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F9F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA80u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAD0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FADCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB64u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB6Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB78u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBA0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBBCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBF4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCBCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCCCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCF4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD74u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDD0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDD8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE0Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE74u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE80u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE88u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FEC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FECCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FED4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FEDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FEE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FEECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FEF4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FEFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF74u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFBCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFCCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFD8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFE0u, &recomp_unit_0038, "recomp_unit_0038");
}
} // namespace psprecomp
