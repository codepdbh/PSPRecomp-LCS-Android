#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0086[4086] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7,
    0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0,
    0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 46, 0, 0, 0,
    0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 87, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0,
    0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0,
    0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0,
    0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0,
    0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0,
    0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0,
    0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197,
    0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 204,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235,
    0, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0,
    0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 0, 251, 0, 0,
    252, 0, 253, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0,
    0, 260, 0, 0, 0, 0, 261, 0, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0, 0, 0, 0, 267, 0, 0, 268, 0, 269, 0, 0, 0, 0,
    270, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 278, 0, 0, 0,
    0, 279, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0,
    287, 288, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 0, 294, 295, 0, 296, 0, 0, 297, 0, 0, 298,
    0, 0, 0, 0, 299, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 301, 0, 0, 302, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 307, 0, 0, 308, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0,
    0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 318, 0, 0, 319, 0, 0,
    0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 326, 0, 327, 0, 0,
    0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0,
    0, 335, 0, 0, 0, 336, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 341, 0, 0, 342, 343, 0, 0, 0,
    0, 0, 344, 0, 345, 0, 0, 346, 0, 347, 0, 0, 348, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 352, 0,
    0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0,
    358, 0, 0, 0, 359, 0, 360, 361, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365,
    0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 370, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0,
    373, 374, 0, 375, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0,
    0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385,
    0, 0, 0, 0, 0, 386, 0, 387, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0,
    391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0,
    0, 0, 397, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 402, 0, 403, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405,
    0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 410, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0,
    0, 413, 0, 0, 0, 414, 0, 415, 416, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422,
    0, 423, 0, 424, 425, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0,
    0, 0, 430, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 0, 436,
    0, 0, 0, 437, 0, 0, 0, 438, 0, 439, 440, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 444, 0, 445, 0, 0, 0,
    0, 0, 0, 0, 0, 446, 0, 447, 0, 448, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0,
    0, 453, 0, 0, 0, 0, 0, 0, 454, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0,
    0, 458, 0, 459, 0, 0, 0, 0, 0, 460, 0, 461, 0, 462, 0, 0, 463, 0, 0, 464, 0, 0, 0, 465, 466, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 467, 0, 0, 468, 469, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 477, 0, 0, 478, 0, 479, 0, 0, 480,
    0, 0, 481, 0, 0, 0, 482, 483, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 487, 488, 489, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 490, 0, 0, 491, 492, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0,
    0, 497, 0, 0, 498, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 502, 0, 503, 0, 0, 504, 0, 505, 0, 0, 506, 0,
    507, 0, 508, 0, 509, 0, 0, 510, 0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0,
    0, 517, 0, 518, 0, 519, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 0,
    525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 528, 529, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 532,
    0, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 537, 0, 538, 0, 0, 0, 0, 0,
    0, 539, 0, 0, 0, 540, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 0,
    0, 545, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0,
    550, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 554, 555, 0, 556, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 0, 0, 564, 0, 565, 0, 566, 0, 567, 0, 0, 568,
    0, 0, 0, 569, 0, 570, 0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 573, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 577, 0, 0,
    0, 0, 0, 0, 0, 578, 0, 579, 0, 580, 0, 581, 0, 0, 0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 584, 0, 0, 0, 0, 585, 0, 586,
    0, 0, 0, 587, 0, 0, 0, 588, 0, 589, 0, 590, 591, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0,
    0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 596, 597, 0, 598, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0,
    606, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0,
    0, 0, 0, 612, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 615, 0, 616, 617, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 619, 0, 0,
    0, 0, 0, 0, 620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 622, 623, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 625, 0, 0, 0, 626, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 630, 0, 631, 0, 632, 633,
    0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 635, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 638, 639, 0,
    0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 642, 0, 643, 0, 0, 0, 644, 0, 0, 645,
    0, 0, 646, 0, 647, 0, 648, 0, 649, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 652,
    0, 653, 0, 0, 0, 654, 0, 0, 655, 0, 0, 656, 0, 657, 0, 658, 0, 659, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 661, 0, 0, 0, 0, 662, 0, 663, 0, 0, 0, 664, 0, 0, 665, 0, 0, 666, 0, 667, 0, 668, 0, 669, 0, 0, 0, 0, 0, 670,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 674, 0, 0, 675, 0, 0, 676, 0, 677,
    0, 678, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 683, 0, 684, 0, 685,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 690, 0, 0, 0, 0,
    0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0, 0, 693, 0, 694, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 696,
    0, 0, 697, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 700, 0, 701, 702,
    0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 704, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 708, 0,
    709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 711, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 714,
    715, 0, 716, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 719, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0,
    0, 0, 0, 722, 723, 0, 724, 0, 725, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 731, 0, 0, 0, 732, 0, 0, 733, 734, 0, 735,
    0, 0, 0, 0, 0, 736, 0, 737, 0, 0, 0, 738, 0, 0, 739, 0, 0, 740, 0, 741, 0, 0, 0, 0, 0, 742, 0, 0, 0, 743, 0, 0,
    0, 744, 0, 745, 746, 0, 0, 0, 747, 0, 0, 0, 0, 748, 0, 0, 749, 0, 0, 0, 0, 750, 0, 0, 751, 0, 752, 0, 0, 0, 753, 0,
    0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 756, 0, 757, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 759, 0, 760, 0, 0, 761, 0, 0, 0, 762, 0, 763, 0,
    764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 766, 0, 0, 0, 0, 0, 0, 0, 767, 0, 768,
    0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 771, 0, 0, 0, 0, 772, 0, 0, 773, 0, 0, 0, 0, 774, 0, 0, 775, 0, 776, 0, 0, 0, 777, 0, 0, 0, 778, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 780, 0, 781, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 783, 0, 784, 0, 0, 785, 0, 0, 0, 786, 0, 787, 0, 788, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 790, 0, 0, 0, 0, 0, 0, 0, 791, 0, 792, 0, 0, 0, 0, 0, 0,
    793, 0, 0, 0, 794, 0, 0, 0, 0, 795, 0, 0, 0, 796, 0, 797, 798, 0, 799, 0, 800, 0, 801, 802, 0, 0, 0, 0, 0, 0, 0, 0,
    803, 0, 804, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 807, 808, 0, 809, 0, 0, 0, 0, 0, 0, 810,
    0, 0, 0, 811, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813,
    0, 814, 0, 815, 816, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 818, 0, 0, 0, 0, 0, 0, 819, 0, 0, 0, 0, 820, 0, 0, 0, 0,
    0, 0, 821, 822, 0, 823, 0, 0, 0, 0, 0, 824, 0, 0, 0, 825, 0, 0, 0, 826, 0, 827, 828, 0, 829, 0, 0, 0, 0, 0, 830, 0,
    831, 832, 0, 0, 0, 0, 0, 0, 0, 0, 833, 0, 834, 0, 0, 0, 0, 0, 0, 835, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 0, 837,
    838, 0, 839, 0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 841,
};
void recomp_unit_0086_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0895C000u;
        entry_id = (entry_delta < 16344u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0086[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0895C000;
    case 2u: goto L_0895C014;
    case 3u: goto L_0895C028;
    case 4u: goto L_0895C044;
    case 5u: goto L_0895C04C;
    case 6u: goto L_0895C074;
    case 7u: goto L_0895C07C;
    case 8u: goto L_0895C098;
    case 9u: goto L_0895C0AC;
    case 10u: goto L_0895C0C8;
    case 11u: goto L_0895C0CC;
    case 12u: goto L_0895C0E0;
    case 13u: goto L_0895C10C;
    case 14u: goto L_0895C11C;
    case 15u: goto L_0895C124;
    case 16u: goto L_0895C13C;
    case 17u: goto L_0895C170;
    case 18u: goto L_0895C180;
    case 19u: goto L_0895C1AC;
    case 20u: goto L_0895C1B4;
    case 21u: goto L_0895C1DC;
    case 22u: goto L_0895C1E4;
    case 23u: goto L_0895C200;
    case 24u: goto L_0895C214;
    case 25u: goto L_0895C230;
    case 26u: goto L_0895C238;
    case 27u: goto L_0895C260;
    case 28u: goto L_0895C268;
    case 29u: goto L_0895C284;
    case 30u: goto L_0895C298;
    case 31u: goto L_0895C2B4;
    case 32u: goto L_0895C2BC;
    case 33u: goto L_0895C2E4;
    case 34u: goto L_0895C2EC;
    case 35u: goto L_0895C314;
    case 36u: goto L_0895C31C;
    case 37u: goto L_0895C338;
    case 38u: goto L_0895C34C;
    case 39u: goto L_0895C368;
    case 40u: goto L_0895C370;
    case 41u: goto L_0895C398;
    case 42u: goto L_0895C3A0;
    case 43u: goto L_0895C3BC;
    case 44u: goto L_0895C3D0;
    case 45u: goto L_0895C3EC;
    case 46u: goto L_0895C3F0;
    case 47u: goto L_0895C404;
    case 48u: goto L_0895C440;
    case 49u: goto L_0895C450;
    case 50u: goto L_0895C458;
    case 51u: goto L_0895C46C;
    case 52u: goto L_0895C480;
    case 53u: goto L_0895C498;
    case 54u: goto L_0895C4AC;
    case 55u: goto L_0895C4C0;
    case 56u: goto L_0895C4D8;
    case 57u: goto L_0895C4EC;
    case 58u: goto L_0895C500;
    case 59u: goto L_0895C518;
    case 60u: goto L_0895C52C;
    case 61u: goto L_0895C540;
    case 62u: goto L_0895C558;
    case 63u: goto L_0895C56C;
    case 64u: goto L_0895C580;
    case 65u: goto L_0895C598;
    case 66u: goto L_0895C5AC;
    case 67u: goto L_0895C5C0;
    case 68u: goto L_0895C5D8;
    case 69u: goto L_0895C5EC;
    case 70u: goto L_0895C600;
    case 71u: goto L_0895C618;
    case 72u: goto L_0895C62C;
    case 73u: goto L_0895C640;
    case 74u: goto L_0895C658;
    case 75u: goto L_0895C66C;
    case 76u: goto L_0895C680;
    case 77u: goto L_0895C698;
    case 78u: goto L_0895C6AC;
    case 79u: goto L_0895C6C0;
    case 80u: goto L_0895C6D8;
    case 81u: goto L_0895C6EC;
    case 82u: goto L_0895C700;
    case 83u: goto L_0895C718;
    case 84u: goto L_0895C72C;
    case 85u: goto L_0895C740;
    case 86u: goto L_0895C758;
    case 87u: goto L_0895C75C;
    case 88u: goto L_0895C784;
    case 89u: goto L_0895C7C0;
    case 90u: goto L_0895C7DC;
    case 91u: goto L_0895C7F0;
    case 92u: goto L_0895C804;
    case 93u: goto L_0895C81C;
    case 94u: goto L_0895C830;
    case 95u: goto L_0895C844;
    case 96u: goto L_0895C85C;
    case 97u: goto L_0895C870;
    case 98u: goto L_0895C884;
    case 99u: goto L_0895C89C;
    case 100u: goto L_0895C8B0;
    case 101u: goto L_0895C8C4;
    case 102u: goto L_0895C8DC;
    case 103u: goto L_0895C8F0;
    case 104u: goto L_0895C904;
    case 105u: goto L_0895C920;
    case 106u: goto L_0895C934;
    case 107u: goto L_0895C948;
    case 108u: goto L_0895C960;
    case 109u: goto L_0895C974;
    case 110u: goto L_0895C988;
    case 111u: goto L_0895C9A4;
    case 112u: goto L_0895C9B8;
    case 113u: goto L_0895C9CC;
    case 114u: goto L_0895C9E4;
    case 115u: goto L_0895C9F8;
    case 116u: goto L_0895CA0C;
    case 117u: goto L_0895CA28;
    case 118u: goto L_0895CA3C;
    case 119u: goto L_0895CA50;
    case 120u: goto L_0895CA68;
    case 121u: goto L_0895CA7C;
    case 122u: goto L_0895CA90;
    case 123u: goto L_0895CAAC;
    case 124u: goto L_0895CAC0;
    case 125u: goto L_0895CAD4;
    case 126u: goto L_0895CAEC;
    case 127u: goto L_0895CB00;
    case 128u: goto L_0895CB14;
    case 129u: goto L_0895CB30;
    case 130u: goto L_0895CB44;
    case 131u: goto L_0895CB58;
    case 132u: goto L_0895CB70;
    case 133u: goto L_0895CB84;
    case 134u: goto L_0895CB98;
    case 135u: goto L_0895CBB4;
    case 136u: goto L_0895CBC8;
    case 137u: goto L_0895CBDC;
    case 138u: goto L_0895CBF4;
    case 139u: goto L_0895CC08;
    case 140u: goto L_0895CC1C;
    case 141u: goto L_0895CC38;
    case 142u: goto L_0895CC4C;
    case 143u: goto L_0895CC60;
    case 144u: goto L_0895CC78;
    case 145u: goto L_0895CC8C;
    case 146u: goto L_0895CCA0;
    case 147u: goto L_0895CCBC;
    case 148u: goto L_0895CCD0;
    case 149u: goto L_0895CCE4;
    case 150u: goto L_0895CCFC;
    case 151u: goto L_0895CD10;
    case 152u: goto L_0895CD2C;
    case 153u: goto L_0895CD50;
    case 154u: goto L_0895CD64;
    case 155u: goto L_0895CD80;
    case 156u: goto L_0895CDA4;
    case 157u: goto L_0895CDB8;
    case 158u: goto L_0895CDCC;
    case 159u: goto L_0895CDF0;
    case 160u: goto L_0895CE04;
    case 161u: goto L_0895CE18;
    case 162u: goto L_0895CE3C;
    case 163u: goto L_0895CE50;
    case 164u: goto L_0895CE64;
    case 165u: goto L_0895CE88;
    case 166u: goto L_0895CE9C;
    case 167u: goto L_0895CEB0;
    case 168u: goto L_0895CED4;
    case 169u: goto L_0895CEE8;
    case 170u: goto L_0895CF04;
    case 171u: goto L_0895CF28;
    case 172u: goto L_0895CF3C;
    case 173u: goto L_0895CF58;
    case 174u: goto L_0895CF7C;
    case 175u: goto L_0895CF90;
    case 176u: goto L_0895CFA4;
    case 177u: goto L_0895CFC8;
    case 178u: goto L_0895CFDC;
    case 179u: goto L_0895CFF0;
    case 180u: goto L_0895D014;
    case 181u: goto L_0895D028;
    case 182u: goto L_0895D03C;
    case 183u: goto L_0895D060;
    case 184u: goto L_0895D074;
    case 185u: goto L_0895D088;
    case 186u: goto L_0895D0AC;
    case 187u: goto L_0895D0C0;
    case 188u: goto L_0895D0D4;
    case 189u: goto L_0895D0E4;
    case 190u: goto L_0895D0F8;
    case 191u: goto L_0895D10C;
    case 192u: goto L_0895D11C;
    case 193u: goto L_0895D130;
    case 194u: goto L_0895D144;
    case 195u: goto L_0895D154;
    case 196u: goto L_0895D168;
    case 197u: goto L_0895D17C;
    case 198u: goto L_0895D18C;
    case 199u: goto L_0895D1A0;
    case 200u: goto L_0895D1B4;
    case 201u: goto L_0895D1C4;
    case 202u: goto L_0895D1D8;
    case 203u: goto L_0895D1EC;
    case 204u: goto L_0895D1FC;
    case 205u: goto L_0895D210;
    case 206u: goto L_0895D224;
    case 207u: goto L_0895D234;
    case 208u: goto L_0895D248;
    case 209u: goto L_0895D25C;
    case 210u: goto L_0895D26C;
    case 211u: goto L_0895D280;
    case 212u: goto L_0895D294;
    case 213u: goto L_0895D2AC;
    case 214u: goto L_0895D2C0;
    case 215u: goto L_0895D2D4;
    case 216u: goto L_0895D2EC;
    case 217u: goto L_0895D300;
    case 218u: goto L_0895D314;
    case 219u: goto L_0895D32C;
    case 220u: goto L_0895D340;
    case 221u: goto L_0895D354;
    case 222u: goto L_0895D36C;
    case 223u: goto L_0895D380;
    case 224u: goto L_0895D394;
    case 225u: goto L_0895D3AC;
    case 226u: goto L_0895D3C0;
    case 227u: goto L_0895D3D4;
    case 228u: goto L_0895D3EC;
    case 229u: goto L_0895D400;
    case 230u: goto L_0895D414;
    case 231u: goto L_0895D42C;
    case 232u: goto L_0895D440;
    case 233u: goto L_0895D454;
    case 234u: goto L_0895D46C;
    case 235u: goto L_0895D47C;
    case 236u: goto L_0895D48C;
    case 237u: goto L_0895D498;
    case 238u: goto L_0895D4A4;
    case 239u: goto L_0895D4B4;
    case 240u: goto L_0895D4C4;
    case 241u: goto L_0895D4D0;
    case 242u: goto L_0895D4DC;
    case 243u: goto L_0895D4EC;
    case 244u: goto L_0895D508;
    case 245u: goto L_0895D514;
    case 246u: goto L_0895D520;
    case 247u: goto L_0895D530;
    case 248u: goto L_0895D54C;
    case 249u: goto L_0895D558;
    case 250u: goto L_0895D564;
    case 251u: goto L_0895D574;
    case 252u: goto L_0895D580;
    case 253u: goto L_0895D588;
    case 254u: goto L_0895D590;
    case 255u: goto L_0895D598;
    case 256u: goto L_0895D5BC;
    case 257u: goto L_0895D5CC;
    case 258u: goto L_0895D5D8;
    case 259u: goto L_0895D5E8;
    case 260u: goto L_0895D604;
    case 261u: goto L_0895D618;
    case 262u: goto L_0895D624;
    case 263u: goto L_0895D62C;
    case 264u: goto L_0895D634;
    case 265u: goto L_0895D63C;
    case 266u: goto L_0895D644;
    case 267u: goto L_0895D658;
    case 268u: goto L_0895D664;
    case 269u: goto L_0895D66C;
    case 270u: goto L_0895D680;
    case 271u: goto L_0895D690;
    case 272u: goto L_0895D698;
    case 273u: goto L_0895D6AC;
    case 274u: goto L_0895D6BC;
    case 275u: goto L_0895D6C4;
    case 276u: goto L_0895D6D8;
    case 277u: goto L_0895D6E8;
    case 278u: goto L_0895D6F0;
    case 279u: goto L_0895D704;
    case 280u: goto L_0895D714;
    case 281u: goto L_0895D71C;
    case 282u: goto L_0895D730;
    case 283u: goto L_0895D740;
    case 284u: goto L_0895D754;
    case 285u: goto L_0895D760;
    case 286u: goto L_0895D76C;
    case 287u: goto L_0895D780;
    case 288u: goto L_0895D784;
    case 289u: goto L_0895D78C;
    case 290u: goto L_0895D7A0;
    case 291u: goto L_0895D7B0;
    case 292u: goto L_0895D7BC;
    case 293u: goto L_0895D7C8;
    case 294u: goto L_0895D7D8;
    case 295u: goto L_0895D7DC;
    case 296u: goto L_0895D7E4;
    case 297u: goto L_0895D7F0;
    case 298u: goto L_0895D7FC;
    case 299u: goto L_0895D810;
    case 300u: goto L_0895D814;
    case 301u: goto L_0895D88C;
    case 302u: goto L_0895D898;
    case 303u: goto L_0895D89C;
    case 304u: goto L_0895D900;
    case 305u: goto L_0895D914;
    case 306u: goto L_0895D920;
    case 307u: goto L_0895D92C;
    case 308u: goto L_0895D938;
    case 309u: goto L_0895D940;
    case 310u: goto L_0895D950;
    case 311u: goto L_0895D974;
    case 312u: goto L_0895D98C;
    case 313u: goto L_0895D998;
    case 314u: goto L_0895D9B0;
    case 315u: goto L_0895D9B8;
    case 316u: goto L_0895D9D0;
    case 317u: goto L_0895D9E0;
    case 318u: goto L_0895D9E8;
    case 319u: goto L_0895D9F4;
    case 320u: goto L_0895DA0C;
    case 321u: goto L_0895DA14;
    case 322u: goto L_0895DA30;
    case 323u: goto L_0895DA40;
    case 324u: goto L_0895DA4C;
    case 325u: goto L_0895DA58;
    case 326u: goto L_0895DA6C;
    case 327u: goto L_0895DA74;
    case 328u: goto L_0895DA8C;
    case 329u: goto L_0895DAA4;
    case 330u: goto L_0895DAB0;
    case 331u: goto L_0895DAC0;
    case 332u: goto L_0895DAC8;
    case 333u: goto L_0895DAE0;
    case 334u: goto L_0895DAF0;
    case 335u: goto L_0895DB04;
    case 336u: goto L_0895DB14;
    case 337u: goto L_0895DB1C;
    case 338u: goto L_0895DB24;
    case 339u: goto L_0895DB50;
    case 340u: goto L_0895DB58;
    case 341u: goto L_0895DB60;
    case 342u: goto L_0895DB6C;
    case 343u: goto L_0895DB70;
    case 344u: goto L_0895DB88;
    case 345u: goto L_0895DB90;
    case 346u: goto L_0895DB9C;
    case 347u: goto L_0895DBA4;
    case 348u: goto L_0895DBB0;
    case 349u: goto L_0895DBB4;
    case 350u: goto L_0895DBBC;
    case 351u: goto L_0895DBF0;
    case 352u: goto L_0895DBF8;
    case 353u: goto L_0895DC10;
    case 354u: goto L_0895DC20;
    case 355u: goto L_0895DC50;
    case 356u: goto L_0895DC58;
    case 357u: goto L_0895DC70;
    case 358u: goto L_0895DC80;
    case 359u: goto L_0895DC90;
    case 360u: goto L_0895DC98;
    case 361u: goto L_0895DC9C;
    case 362u: goto L_0895DCA4;
    case 363u: goto L_0895DCBC;
    case 364u: goto L_0895DCCC;
    case 365u: goto L_0895DCFC;
    case 366u: goto L_0895DD04;
    case 367u: goto L_0895DD1C;
    case 368u: goto L_0895DD2C;
    case 369u: goto L_0895DD3C;
    case 370u: goto L_0895DD44;
    case 371u: goto L_0895DD48;
    case 372u: goto L_0895DD74;
    case 373u: goto L_0895DD80;
    case 374u: goto L_0895DD84;
    case 375u: goto L_0895DD8C;
    case 376u: goto L_0895DD94;
    case 377u: goto L_0895DDA8;
    case 378u: goto L_0895DDD4;
    case 379u: goto L_0895DDEC;
    case 380u: goto L_0895DDF4;
    case 381u: goto L_0895DE04;
    case 382u: goto L_0895DE30;
    case 383u: goto L_0895DE48;
    case 384u: goto L_0895DE50;
    case 385u: goto L_0895DE7C;
    case 386u: goto L_0895DE94;
    case 387u: goto L_0895DE9C;
    case 388u: goto L_0895DEA4;
    case 389u: goto L_0895DED4;
    case 390u: goto L_0895DEEC;
    case 391u: goto L_0895DF00;
    case 392u: goto L_0895DF18;
    case 393u: goto L_0895DF4C;
    case 394u: goto L_0895DF54;
    case 395u: goto L_0895DF68;
    case 396u: goto L_0895DF70;
    case 397u: goto L_0895DF88;
    case 398u: goto L_0895DF98;
    case 399u: goto L_0895DFA4;
    case 400u: goto L_0895DFB4;
    case 401u: goto L_0895DFC4;
    case 402u: goto L_0895DFCC;
    case 403u: goto L_0895DFD4;
    case 404u: goto L_0895DFD8;
    case 405u: goto L_0895DFFC;
    case 406u: goto L_0895E004;
    case 407u: goto L_0895E020;
    case 408u: goto L_0895E034;
    case 409u: goto L_0895E050;
    case 410u: goto L_0895E054;
    case 411u: goto L_0895E05C;
    case 412u: goto L_0895E074;
    case 413u: goto L_0895E084;
    case 414u: goto L_0895E094;
    case 415u: goto L_0895E09C;
    case 416u: goto L_0895E0A0;
    case 417u: goto L_0895E0A8;
    case 418u: goto L_0895E0C4;
    case 419u: goto L_0895E0CC;
    case 420u: goto L_0895E0D4;
    case 421u: goto L_0895E0DC;
    case 422u: goto L_0895E0FC;
    case 423u: goto L_0895E104;
    case 424u: goto L_0895E10C;
    case 425u: goto L_0895E110;
    case 426u: goto L_0895E134;
    case 427u: goto L_0895E13C;
    case 428u: goto L_0895E158;
    case 429u: goto L_0895E16C;
    case 430u: goto L_0895E188;
    case 431u: goto L_0895E18C;
    case 432u: goto L_0895E1A0;
    case 433u: goto L_0895E1CC;
    case 434u: goto L_0895E1DC;
    case 435u: goto L_0895E1E4;
    case 436u: goto L_0895E1FC;
    case 437u: goto L_0895E20C;
    case 438u: goto L_0895E21C;
    case 439u: goto L_0895E224;
    case 440u: goto L_0895E228;
    case 441u: goto L_0895E230;
    case 442u: goto L_0895E258;
    case 443u: goto L_0895E260;
    case 444u: goto L_0895E268;
    case 445u: goto L_0895E270;
    case 446u: goto L_0895E294;
    case 447u: goto L_0895E29C;
    case 448u: goto L_0895E2A4;
    case 449u: goto L_0895E2A8;
    case 450u: goto L_0895E2CC;
    case 451u: goto L_0895E2D4;
    case 452u: goto L_0895E2F0;
    case 453u: goto L_0895E304;
    case 454u: goto L_0895E320;
    case 455u: goto L_0895E324;
    case 456u: goto L_0895E338;
    case 457u: goto L_0895E374;
    case 458u: goto L_0895E384;
    case 459u: goto L_0895E38C;
    case 460u: goto L_0895E3A4;
    case 461u: goto L_0895E3AC;
    case 462u: goto L_0895E3B4;
    case 463u: goto L_0895E3C0;
    case 464u: goto L_0895E3CC;
    case 465u: goto L_0895E3DC;
    case 466u: goto L_0895E3E0;
    case 467u: goto L_0895E40C;
    case 468u: goto L_0895E418;
    case 469u: goto L_0895E41C;
    case 470u: goto L_0895E424;
    case 471u: goto L_0895E44C;
    case 472u: goto L_0895E498;
    case 473u: goto L_0895E4A4;
    case 474u: goto L_0895E4AC;
    case 475u: goto L_0895E4BC;
    case 476u: goto L_0895E4D4;
    case 477u: goto L_0895E4DC;
    case 478u: goto L_0895E4E8;
    case 479u: goto L_0895E4F0;
    case 480u: goto L_0895E4FC;
    case 481u: goto L_0895E508;
    case 482u: goto L_0895E518;
    case 483u: goto L_0895E51C;
    case 484u: goto L_0895E538;
    case 485u: goto L_0895E548;
    case 486u: goto L_0895E554;
    case 487u: goto L_0895E564;
    case 488u: goto L_0895E568;
    case 489u: goto L_0895E56C;
    case 490u: goto L_0895E598;
    case 491u: goto L_0895E5A4;
    case 492u: goto L_0895E5A8;
    case 493u: goto L_0895E5B0;
    case 494u: goto L_0895E5F4;
    case 495u: goto L_0895E61C;
    case 496u: goto L_0895E668;
    case 497u: goto L_0895E684;
    case 498u: goto L_0895E690;
    case 499u: goto L_0895E698;
    case 500u: goto L_0895E6A8;
    case 501u: goto L_0895E6C0;
    case 502u: goto L_0895E6D0;
    case 503u: goto L_0895E6D8;
    case 504u: goto L_0895E6E4;
    case 505u: goto L_0895E6EC;
    case 506u: goto L_0895E6F8;
    case 507u: goto L_0895E700;
    case 508u: goto L_0895E708;
    case 509u: goto L_0895E710;
    case 510u: goto L_0895E71C;
    case 511u: goto L_0895E724;
    case 512u: goto L_0895E730;
    case 513u: goto L_0895E748;
    case 514u: goto L_0895E750;
    case 515u: goto L_0895E768;
    case 516u: goto L_0895E778;
    case 517u: goto L_0895E784;
    case 518u: goto L_0895E78C;
    case 519u: goto L_0895E794;
    case 520u: goto L_0895E79C;
    case 521u: goto L_0895E7B8;
    case 522u: goto L_0895E7C4;
    case 523u: goto L_0895E7DC;
    case 524u: goto L_0895E7E4;
    case 525u: goto L_0895E800;
    case 526u: goto L_0895E810;
    case 527u: goto L_0895E838;
    case 528u: goto L_0895E844;
    case 529u: goto L_0895E848;
    case 530u: goto L_0895E850;
    case 531u: goto L_0895E874;
    case 532u: goto L_0895E87C;
    case 533u: goto L_0895E888;
    case 534u: goto L_0895E890;
    case 535u: goto L_0895E8C4;
    case 536u: goto L_0895E8D4;
    case 537u: goto L_0895E8E0;
    case 538u: goto L_0895E8E8;
    case 539u: goto L_0895E904;
    case 540u: goto L_0895E914;
    case 541u: goto L_0895E920;
    case 542u: goto L_0895E944;
    case 543u: goto L_0895E95C;
    case 544u: goto L_0895E974;
    case 545u: goto L_0895E984;
    case 546u: goto L_0895E990;
    case 547u: goto L_0895E9B0;
    case 548u: goto L_0895E9C0;
    case 549u: goto L_0895E9F8;
    case 550u: goto L_0895EA00;
    case 551u: goto L_0895EA1C;
    case 552u: goto L_0895EA2C;
    case 553u: goto L_0895EA54;
    case 554u: goto L_0895EA60;
    case 555u: goto L_0895EA64;
    case 556u: goto L_0895EA6C;
    case 557u: goto L_0895EAA0;
    case 558u: goto L_0895EACC;
    case 559u: goto L_0895EAE4;
    case 560u: goto L_0895EAEC;
    case 561u: goto L_0895EB18;
    case 562u: goto L_0895EB30;
    case 563u: goto L_0895EB40;
    case 564u: goto L_0895EB58;
    case 565u: goto L_0895EB60;
    case 566u: goto L_0895EB68;
    case 567u: goto L_0895EB70;
    case 568u: goto L_0895EB7C;
    case 569u: goto L_0895EB8C;
    case 570u: goto L_0895EB94;
    case 571u: goto L_0895EB9C;
    case 572u: goto L_0895EBB8;
    case 573u: goto L_0895EBC0;
    case 574u: goto L_0895EBC8;
    case 575u: goto L_0895EBE4;
    case 576u: goto L_0895EBEC;
    case 577u: goto L_0895EBF4;
    case 578u: goto L_0895EC14;
    case 579u: goto L_0895EC1C;
    case 580u: goto L_0895EC24;
    case 581u: goto L_0895EC2C;
    case 582u: goto L_0895EC44;
    case 583u: goto L_0895EC54;
    case 584u: goto L_0895EC60;
    case 585u: goto L_0895EC74;
    case 586u: goto L_0895EC7C;
    case 587u: goto L_0895EC8C;
    case 588u: goto L_0895EC9C;
    case 589u: goto L_0895ECA4;
    case 590u: goto L_0895ECAC;
    case 591u: goto L_0895ECB0;
    case 592u: goto L_0895ECD4;
    case 593u: goto L_0895ECDC;
    case 594u: goto L_0895ECF8;
    case 595u: goto L_0895ED0C;
    case 596u: goto L_0895ED28;
    case 597u: goto L_0895ED2C;
    case 598u: goto L_0895ED34;
    case 599u: goto L_0895ED50;
    case 600u: goto L_0895ED60;
    case 601u: goto L_0895EDA4;
    case 602u: goto L_0895EDB4;
    case 603u: goto L_0895EDC4;
    case 604u: goto L_0895EDE0;
    case 605u: goto L_0895EDF0;
    case 606u: goto L_0895EE00;
    case 607u: goto L_0895EE1C;
    case 608u: goto L_0895EE2C;
    case 609u: goto L_0895EE40;
    case 610u: goto L_0895EE5C;
    case 611u: goto L_0895EE70;
    case 612u: goto L_0895EE8C;
    case 613u: goto L_0895EE9C;
    case 614u: goto L_0895EEB4;
    case 615u: goto L_0895EEBC;
    case 616u: goto L_0895EEC4;
    case 617u: goto L_0895EEC8;
    case 618u: goto L_0895EEEC;
    case 619u: goto L_0895EEF4;
    case 620u: goto L_0895EF10;
    case 621u: goto L_0895EF24;
    case 622u: goto L_0895EF40;
    case 623u: goto L_0895EF44;
    case 624u: goto L_0895EF58;
    case 625u: goto L_0895EF84;
    case 626u: goto L_0895EF94;
    case 627u: goto L_0895EF9C;
    case 628u: goto L_0895EFB8;
    case 629u: goto L_0895EFC8;
    case 630u: goto L_0895EFE8;
    case 631u: goto L_0895EFF0;
    case 632u: goto L_0895EFF8;
    case 633u: goto L_0895EFFC;
    case 634u: goto L_0895F020;
    case 635u: goto L_0895F028;
    case 636u: goto L_0895F044;
    case 637u: goto L_0895F058;
    case 638u: goto L_0895F074;
    case 639u: goto L_0895F078;
    case 640u: goto L_0895F08C;
    case 641u: goto L_0895F0C8;
    case 642u: goto L_0895F0D8;
    case 643u: goto L_0895F0E0;
    case 644u: goto L_0895F0F0;
    case 645u: goto L_0895F0FC;
    case 646u: goto L_0895F108;
    case 647u: goto L_0895F110;
    case 648u: goto L_0895F118;
    case 649u: goto L_0895F120;
    case 650u: goto L_0895F138;
    case 651u: goto L_0895F164;
    case 652u: goto L_0895F17C;
    case 653u: goto L_0895F184;
    case 654u: goto L_0895F194;
    case 655u: goto L_0895F1A0;
    case 656u: goto L_0895F1AC;
    case 657u: goto L_0895F1B4;
    case 658u: goto L_0895F1BC;
    case 659u: goto L_0895F1C4;
    case 660u: goto L_0895F1DC;
    case 661u: goto L_0895F208;
    case 662u: goto L_0895F21C;
    case 663u: goto L_0895F224;
    case 664u: goto L_0895F234;
    case 665u: goto L_0895F240;
    case 666u: goto L_0895F24C;
    case 667u: goto L_0895F254;
    case 668u: goto L_0895F25C;
    case 669u: goto L_0895F264;
    case 670u: goto L_0895F27C;
    case 671u: goto L_0895F2A8;
    case 672u: goto L_0895F2C4;
    case 673u: goto L_0895F2CC;
    case 674u: goto L_0895F2DC;
    case 675u: goto L_0895F2E8;
    case 676u: goto L_0895F2F4;
    case 677u: goto L_0895F2FC;
    case 678u: goto L_0895F304;
    case 679u: goto L_0895F30C;
    case 680u: goto L_0895F324;
    case 681u: goto L_0895F350;
    case 682u: goto L_0895F364;
    case 683u: goto L_0895F36C;
    case 684u: goto L_0895F374;
    case 685u: goto L_0895F37C;
    case 686u: goto L_0895F3AC;
    case 687u: goto L_0895F3B4;
    case 688u: goto L_0895F3D0;
    case 689u: goto L_0895F3E4;
    case 690u: goto L_0895F3EC;
    case 691u: goto L_0895F40C;
    case 692u: goto L_0895F420;
    case 693u: goto L_0895F434;
    case 694u: goto L_0895F43C;
    case 695u: goto L_0895F458;
    case 696u: goto L_0895F47C;
    case 697u: goto L_0895F488;
    case 698u: goto L_0895F48C;
    case 699u: goto L_0895F4E8;
    case 700u: goto L_0895F4F0;
    case 701u: goto L_0895F4F8;
    case 702u: goto L_0895F4FC;
    case 703u: goto L_0895F520;
    case 704u: goto L_0895F528;
    case 705u: goto L_0895F544;
    case 706u: goto L_0895F558;
    case 707u: goto L_0895F574;
    case 708u: goto L_0895F578;
    case 709u: goto L_0895F580;
    case 710u: goto L_0895F5A8;
    case 711u: goto L_0895F5B0;
    case 712u: goto L_0895F5CC;
    case 713u: goto L_0895F5E0;
    case 714u: goto L_0895F5FC;
    case 715u: goto L_0895F600;
    case 716u: goto L_0895F608;
    case 717u: goto L_0895F610;
    case 718u: goto L_0895F638;
    case 719u: goto L_0895F640;
    case 720u: goto L_0895F65C;
    case 721u: goto L_0895F670;
    case 722u: goto L_0895F68C;
    case 723u: goto L_0895F690;
    case 724u: goto L_0895F698;
    case 725u: goto L_0895F6A0;
    case 726u: goto L_0895F6A4;
    case 727u: goto L_0895F6D4;
    case 728u: goto L_0895F70C;
    case 729u: goto L_0895F728;
    case 730u: goto L_0895F740;
    case 731u: goto L_0895F754;
    case 732u: goto L_0895F764;
    case 733u: goto L_0895F770;
    case 734u: goto L_0895F774;
    case 735u: goto L_0895F77C;
    case 736u: goto L_0895F794;
    case 737u: goto L_0895F79C;
    case 738u: goto L_0895F7AC;
    case 739u: goto L_0895F7B8;
    case 740u: goto L_0895F7C4;
    case 741u: goto L_0895F7CC;
    case 742u: goto L_0895F7E4;
    case 743u: goto L_0895F7F4;
    case 744u: goto L_0895F804;
    case 745u: goto L_0895F80C;
    case 746u: goto L_0895F810;
    case 747u: goto L_0895F820;
    case 748u: goto L_0895F834;
    case 749u: goto L_0895F840;
    case 750u: goto L_0895F854;
    case 751u: goto L_0895F860;
    case 752u: goto L_0895F868;
    case 753u: goto L_0895F878;
    case 754u: goto L_0895F888;
    case 755u: goto L_0895F8D8;
    case 756u: goto L_0895F8F0;
    case 757u: goto L_0895F8F8;
    case 758u: goto L_0895F944;
    case 759u: goto L_0895F94C;
    case 760u: goto L_0895F954;
    case 761u: goto L_0895F960;
    case 762u: goto L_0895F970;
    case 763u: goto L_0895F978;
    case 764u: goto L_0895F980;
    case 765u: goto L_0895F9CC;
    case 766u: goto L_0895F9D4;
    case 767u: goto L_0895F9F4;
    case 768u: goto L_0895F9FC;
    case 769u: goto L_0895FA14;
    case 770u: goto L_0895FA48;
    case 771u: goto L_0895FA88;
    case 772u: goto L_0895FA9C;
    case 773u: goto L_0895FAA8;
    case 774u: goto L_0895FABC;
    case 775u: goto L_0895FAC8;
    case 776u: goto L_0895FAD0;
    case 777u: goto L_0895FAE0;
    case 778u: goto L_0895FAF0;
    case 779u: goto L_0895FB40;
    case 780u: goto L_0895FB58;
    case 781u: goto L_0895FB60;
    case 782u: goto L_0895FBAC;
    case 783u: goto L_0895FBB4;
    case 784u: goto L_0895FBBC;
    case 785u: goto L_0895FBC8;
    case 786u: goto L_0895FBD8;
    case 787u: goto L_0895FBE0;
    case 788u: goto L_0895FBE8;
    case 789u: goto L_0895FC34;
    case 790u: goto L_0895FC3C;
    case 791u: goto L_0895FC5C;
    case 792u: goto L_0895FC64;
    case 793u: goto L_0895FC80;
    case 794u: goto L_0895FC90;
    case 795u: goto L_0895FCA4;
    case 796u: goto L_0895FCB4;
    case 797u: goto L_0895FCBC;
    case 798u: goto L_0895FCC0;
    case 799u: goto L_0895FCC8;
    case 800u: goto L_0895FCD0;
    case 801u: goto L_0895FCD8;
    case 802u: goto L_0895FCDC;
    case 803u: goto L_0895FD00;
    case 804u: goto L_0895FD08;
    case 805u: goto L_0895FD24;
    case 806u: goto L_0895FD38;
    case 807u: goto L_0895FD54;
    case 808u: goto L_0895FD58;
    case 809u: goto L_0895FD60;
    case 810u: goto L_0895FD7C;
    case 811u: goto L_0895FD8C;
    case 812u: goto L_0895FDC4;
    case 813u: goto L_0895FDFC;
    case 814u: goto L_0895FE04;
    case 815u: goto L_0895FE0C;
    case 816u: goto L_0895FE10;
    case 817u: goto L_0895FE34;
    case 818u: goto L_0895FE3C;
    case 819u: goto L_0895FE58;
    case 820u: goto L_0895FE6C;
    case 821u: goto L_0895FE88;
    case 822u: goto L_0895FE8C;
    case 823u: goto L_0895FE94;
    case 824u: goto L_0895FEAC;
    case 825u: goto L_0895FEBC;
    case 826u: goto L_0895FECC;
    case 827u: goto L_0895FED4;
    case 828u: goto L_0895FED8;
    case 829u: goto L_0895FEE0;
    case 830u: goto L_0895FEF8;
    case 831u: goto L_0895FF00;
    case 832u: goto L_0895FF04;
    case 833u: goto L_0895FF28;
    case 834u: goto L_0895FF30;
    case 835u: goto L_0895FF4C;
    case 836u: goto L_0895FF60;
    case 837u: goto L_0895FF7C;
    case 838u: goto L_0895FF80;
    case 839u: goto L_0895FF88;
    case 840u: goto L_0895FFA0;
    case 841u: goto L_0895FFD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0895C000:
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895C028;
    }
    goto L_0895C014;
L_0895C014:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C0CC;
      }
      goto L_0895C028;
    }
L_0895C028:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C0CC;
      }
      goto L_0895C044;
    }
L_0895C044:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_0895C0CC;
      }
      goto L_0895C04C;
    }
L_0895C04C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895C07C;
      }
      goto L_0895C074;
    }
L_0895C074:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C0CC;
      }
      goto L_0895C07C;
    }
L_0895C07C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895C0AC;
    }
    goto L_0895C098;
L_0895C098:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C0CC;
      }
      goto L_0895C0AC;
    }
L_0895C0AC:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C0CC;
      }
      goto L_0895C0C8;
    }
L_0895C0C8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895C0CC;
L_0895C0CC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C10C;
      }
      goto L_0895C0E0;
    }
L_0895C0E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (49864u << 16u);
    ctx.gpr[31] = (0x0895C10Cu);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0895C10Cu) goto L_0895C10C;
    return;
L_0895C10C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C11C;
      }
      goto L_0895C11C;
    }
L_0895C11C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C75C;
      }
      goto L_0895C124;
    }
L_0895C124:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895C13Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895C13Cu) goto L_0895C13C;
    return;
L_0895C13C:
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
    // nop
      if (branch_taken) {
          goto L_0895C2BC;
      }
      goto L_0895C170;
    }
L_0895C170:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C2BC;
      }
      goto L_0895C180;
    }
L_0895C180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x0895C1ACu);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 57u, 0x08A28888u>(ctx, &aot_mem) && ctx.pc == 0x0895C1ACu) goto L_0895C1AC;
    return;
L_0895C1AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C238;
      }
      goto L_0895C1B4;
    }
L_0895C1B4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895C1E4;
      }
      goto L_0895C1DC;
    }
L_0895C1DC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C3F0;
      }
      goto L_0895C1E4;
    }
L_0895C1E4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895C214;
    }
    goto L_0895C200;
L_0895C200:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C3F0;
      }
      goto L_0895C214;
    }
L_0895C214:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C3F0;
      }
      goto L_0895C230;
    }
L_0895C230:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_0895C3F0;
      }
      goto L_0895C238;
    }
L_0895C238:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895C268;
      }
      goto L_0895C260;
    }
L_0895C260:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C3F0;
      }
      goto L_0895C268;
    }
L_0895C268:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895C298;
    }
    goto L_0895C284;
L_0895C284:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C3F0;
      }
      goto L_0895C298;
    }
L_0895C298:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C3F0;
      }
      goto L_0895C2B4;
    }
L_0895C2B4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_0895C3F0;
      }
      goto L_0895C2BC;
    }
L_0895C2BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x0895C2E4u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 57u, 0x08A28888u>(ctx, &aot_mem) && ctx.pc == 0x0895C2E4u) goto L_0895C2E4;
    return;
L_0895C2E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C370;
      }
      goto L_0895C2EC;
    }
L_0895C2EC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895C31C;
      }
      goto L_0895C314;
    }
L_0895C314:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C3F0;
      }
      goto L_0895C31C;
    }
L_0895C31C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895C34C;
    }
    goto L_0895C338;
L_0895C338:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C3F0;
      }
      goto L_0895C34C;
    }
L_0895C34C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C3F0;
      }
      goto L_0895C368;
    }
L_0895C368:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_0895C3F0;
      }
      goto L_0895C370;
    }
L_0895C370:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895C3A0;
      }
      goto L_0895C398;
    }
L_0895C398:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C3F0;
      }
      goto L_0895C3A0;
    }
L_0895C3A0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895C3D0;
    }
    goto L_0895C3BC;
L_0895C3BC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C3F0;
      }
      goto L_0895C3D0;
    }
L_0895C3D0:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C3F0;
      }
      goto L_0895C3EC;
    }
L_0895C3EC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895C3F0;
L_0895C3F0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C440;
      }
      goto L_0895C404;
    }
L_0895C404:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0895C440u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0895C440u) goto L_0895C440;
    return;
L_0895C440:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C450;
      }
      goto L_0895C450;
    }
L_0895C450:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C75C;
      }
      goto L_0895C458;
    }
L_0895C458:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C46Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C46Cu) goto L_0895C46C;
    return;
L_0895C46C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C480u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C480u) goto L_0895C480;
    return;
L_0895C480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C75C;
      }
      goto L_0895C498;
    }
L_0895C498:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C4ACu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C4ACu) goto L_0895C4AC;
    return;
L_0895C4AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C4C0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C4C0u) goto L_0895C4C0;
    return;
L_0895C4C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C75C;
      }
      goto L_0895C4D8;
    }
L_0895C4D8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C4ECu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C4ECu) goto L_0895C4EC;
    return;
L_0895C4EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C500u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C500u) goto L_0895C500;
    return;
L_0895C500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C75C;
      }
      goto L_0895C518;
    }
L_0895C518:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C52Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C52Cu) goto L_0895C52C;
    return;
L_0895C52C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C540u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C540u) goto L_0895C540;
    return;
L_0895C540:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C75C;
      }
      goto L_0895C558;
    }
L_0895C558:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C56Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C56Cu) goto L_0895C56C;
    return;
L_0895C56C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C580u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C580u) goto L_0895C580;
    return;
L_0895C580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C75C;
      }
      goto L_0895C598;
    }
L_0895C598:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C5ACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C5ACu) goto L_0895C5AC;
    return;
L_0895C5AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C5C0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C5C0u) goto L_0895C5C0;
    return;
L_0895C5C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C75C;
      }
      goto L_0895C5D8;
    }
L_0895C5D8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C5ECu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C5ECu) goto L_0895C5EC;
    return;
L_0895C5EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C600u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C600u) goto L_0895C600;
    return;
L_0895C600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C75C;
      }
      goto L_0895C618;
    }
L_0895C618:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C62Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C62Cu) goto L_0895C62C;
    return;
L_0895C62C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C640u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C640u) goto L_0895C640;
    return;
L_0895C640:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C75C;
      }
      goto L_0895C658;
    }
L_0895C658:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C66Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C66Cu) goto L_0895C66C;
    return;
L_0895C66C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C680u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C680u) goto L_0895C680;
    return;
L_0895C680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C75C;
      }
      goto L_0895C698;
    }
L_0895C698:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C6ACu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C6ACu) goto L_0895C6AC;
    return;
L_0895C6AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C6C0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C6C0u) goto L_0895C6C0;
    return;
L_0895C6C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C75C;
      }
      goto L_0895C6D8;
    }
L_0895C6D8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C6ECu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C6ECu) goto L_0895C6EC;
    return;
L_0895C6EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C700u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C700u) goto L_0895C700;
    return;
L_0895C700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C75C;
      }
      goto L_0895C718;
    }
L_0895C718:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C72Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C72Cu) goto L_0895C72C;
    return;
L_0895C72C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C740u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C740u) goto L_0895C740;
    return;
L_0895C740:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C75C;
      }
      goto L_0895C758;
    }
L_0895C758:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0895C75C;
L_0895C75C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895C784:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-100));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(99) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0895F6A0;
      }
      goto L_0895C7C0;
    }
L_0895C7C0:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-100));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31312)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895C7DC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C7F0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C7F0u) goto L_0895C7F0;
    return;
L_0895C7F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C804u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C804u) goto L_0895C804;
    return;
L_0895C804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895C81C;
    }
L_0895C81C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C830u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C830u) goto L_0895C830;
    return;
L_0895C830:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C844u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C844u) goto L_0895C844;
    return;
L_0895C844:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895C85C;
    }
L_0895C85C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C870u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C870u) goto L_0895C870;
    return;
L_0895C870:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C884u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C884u) goto L_0895C884;
    return;
L_0895C884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895C89C;
    }
L_0895C89C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C8B0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C8B0u) goto L_0895C8B0;
    return;
L_0895C8B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C8C4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C8C4u) goto L_0895C8C4;
    return;
L_0895C8C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895C8DC;
    }
L_0895C8DC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C8F0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C8F0u) goto L_0895C8F0;
    return;
L_0895C8F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C904u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C904u) goto L_0895C904;
    return;
L_0895C904:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895C920;
    }
L_0895C920:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C934u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C934u) goto L_0895C934;
    return;
L_0895C934:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C948u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C948u) goto L_0895C948;
    return;
L_0895C948:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895C960;
    }
L_0895C960:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C974u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C974u) goto L_0895C974;
    return;
L_0895C974:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C988u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C988u) goto L_0895C988;
    return;
L_0895C988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895C9A4;
    }
L_0895C9A4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C9B8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C9B8u) goto L_0895C9B8;
    return;
L_0895C9B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C9CCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C9CCu) goto L_0895C9CC;
    return;
L_0895C9CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895C9E4;
    }
L_0895C9E4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C9F8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895C9F8u) goto L_0895C9F8;
    return;
L_0895C9F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CA0Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CA0Cu) goto L_0895CA0C;
    return;
L_0895CA0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895CA28;
    }
L_0895CA28:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CA3Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CA3Cu) goto L_0895CA3C;
    return;
L_0895CA3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CA50u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CA50u) goto L_0895CA50;
    return;
L_0895CA50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895CA68;
    }
L_0895CA68:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CA7Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CA7Cu) goto L_0895CA7C;
    return;
L_0895CA7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CA90u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CA90u) goto L_0895CA90;
    return;
L_0895CA90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895CAAC;
    }
L_0895CAAC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CAC0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CAC0u) goto L_0895CAC0;
    return;
L_0895CAC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CAD4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CAD4u) goto L_0895CAD4;
    return;
L_0895CAD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895CAEC;
    }
L_0895CAEC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CB00u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CB00u) goto L_0895CB00;
    return;
L_0895CB00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CB14u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CB14u) goto L_0895CB14;
    return;
L_0895CB14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895CB30;
    }
L_0895CB30:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CB44u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CB44u) goto L_0895CB44;
    return;
L_0895CB44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CB58u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CB58u) goto L_0895CB58;
    return;
L_0895CB58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895CB70;
    }
L_0895CB70:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CB84u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CB84u) goto L_0895CB84;
    return;
L_0895CB84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CB98u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CB98u) goto L_0895CB98;
    return;
L_0895CB98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895CBB4;
    }
L_0895CBB4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CBC8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CBC8u) goto L_0895CBC8;
    return;
L_0895CBC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CBDCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CBDCu) goto L_0895CBDC;
    return;
L_0895CBDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895CBF4;
    }
L_0895CBF4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CC08u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CC08u) goto L_0895CC08;
    return;
L_0895CC08:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CC1Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CC1Cu) goto L_0895CC1C;
    return;
L_0895CC1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895CC38;
    }
L_0895CC38:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CC4Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CC4Cu) goto L_0895CC4C;
    return;
L_0895CC4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CC60u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CC60u) goto L_0895CC60;
    return;
L_0895CC60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895CC78;
    }
L_0895CC78:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CC8Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CC8Cu) goto L_0895CC8C;
    return;
L_0895CC8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CCA0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CCA0u) goto L_0895CCA0;
    return;
L_0895CCA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895CCBC;
    }
L_0895CCBC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CCD0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CCD0u) goto L_0895CCD0;
    return;
L_0895CCD0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CCE4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CCE4u) goto L_0895CCE4;
    return;
L_0895CCE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895CCFC;
    }
L_0895CCFC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CD10u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CD10u) goto L_0895CD10;
    return;
L_0895CD10:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CD2Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895CD2Cu) goto L_0895CD2C;
    return;
L_0895CD2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895CD50;
    }
L_0895CD50:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CD64u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CD64u) goto L_0895CD64;
    return;
L_0895CD64:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CD80u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895CD80u) goto L_0895CD80;
    return;
L_0895CD80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895CDA4;
    }
L_0895CDA4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CDB8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CDB8u) goto L_0895CDB8;
    return;
L_0895CDB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CDCCu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CDCCu) goto L_0895CDCC;
    return;
L_0895CDCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895CDF0;
    }
L_0895CDF0:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CE04u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CE04u) goto L_0895CE04;
    return;
L_0895CE04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CE18u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CE18u) goto L_0895CE18;
    return;
L_0895CE18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895CE3C;
    }
L_0895CE3C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CE50u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CE50u) goto L_0895CE50;
    return;
L_0895CE50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CE64u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CE64u) goto L_0895CE64;
    return;
L_0895CE64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895CE88;
    }
L_0895CE88:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CE9Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CE9Cu) goto L_0895CE9C;
    return;
L_0895CE9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CEB0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CEB0u) goto L_0895CEB0;
    return;
L_0895CEB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895CED4;
    }
L_0895CED4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CEE8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CEE8u) goto L_0895CEE8;
    return;
L_0895CEE8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CF04u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895CF04u) goto L_0895CF04;
    return;
L_0895CF04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895CF28;
    }
L_0895CF28:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CF3Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CF3Cu) goto L_0895CF3C;
    return;
L_0895CF3C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CF58u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895CF58u) goto L_0895CF58;
    return;
L_0895CF58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895CF7C;
    }
L_0895CF7C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CF90u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CF90u) goto L_0895CF90;
    return;
L_0895CF90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CFA4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CFA4u) goto L_0895CFA4;
    return;
L_0895CFA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895CFC8;
    }
L_0895CFC8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CFDCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CFDCu) goto L_0895CFDC;
    return;
L_0895CFDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CFF0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895CFF0u) goto L_0895CFF0;
    return;
L_0895CFF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D014;
    }
L_0895D014:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D028u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D028u) goto L_0895D028;
    return;
L_0895D028:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D03Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D03Cu) goto L_0895D03C;
    return;
L_0895D03C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D060;
    }
L_0895D060:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D074u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D074u) goto L_0895D074;
    return;
L_0895D074:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D088u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D088u) goto L_0895D088;
    return;
L_0895D088:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D0AC;
    }
L_0895D0AC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D0C0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D0C0u) goto L_0895D0C0;
    return;
L_0895D0C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D0D4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D0D4u) goto L_0895D0D4;
    return;
L_0895D0D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D0E4;
    }
L_0895D0E4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D0F8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D0F8u) goto L_0895D0F8;
    return;
L_0895D0F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D10Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D10Cu) goto L_0895D10C;
    return;
L_0895D10C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D11C;
    }
L_0895D11C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D130u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D130u) goto L_0895D130;
    return;
L_0895D130:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D144u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D144u) goto L_0895D144;
    return;
L_0895D144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D154;
    }
L_0895D154:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D168u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D168u) goto L_0895D168;
    return;
L_0895D168:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D17Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D17Cu) goto L_0895D17C;
    return;
L_0895D17C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D18C;
    }
L_0895D18C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D1A0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D1A0u) goto L_0895D1A0;
    return;
L_0895D1A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D1B4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D1B4u) goto L_0895D1B4;
    return;
L_0895D1B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D1C4;
    }
L_0895D1C4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D1D8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D1D8u) goto L_0895D1D8;
    return;
L_0895D1D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D1ECu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D1ECu) goto L_0895D1EC;
    return;
L_0895D1EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D1FC;
    }
L_0895D1FC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D210u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D210u) goto L_0895D210;
    return;
L_0895D210:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D224u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D224u) goto L_0895D224;
    return;
L_0895D224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D234;
    }
L_0895D234:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D248u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D248u) goto L_0895D248;
    return;
L_0895D248:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D25Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D25Cu) goto L_0895D25C;
    return;
L_0895D25C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D26C;
    }
L_0895D26C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D280u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D280u) goto L_0895D280;
    return;
L_0895D280:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D294u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D294u) goto L_0895D294;
    return;
L_0895D294:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D2AC;
    }
L_0895D2AC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D2C0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D2C0u) goto L_0895D2C0;
    return;
L_0895D2C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D2D4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D2D4u) goto L_0895D2D4;
    return;
L_0895D2D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D2EC;
    }
L_0895D2EC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D300u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D300u) goto L_0895D300;
    return;
L_0895D300:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D314u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D314u) goto L_0895D314;
    return;
L_0895D314:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D32C;
    }
L_0895D32C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D340u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D340u) goto L_0895D340;
    return;
L_0895D340:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D354u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D354u) goto L_0895D354;
    return;
L_0895D354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D36C;
    }
L_0895D36C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D380u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D380u) goto L_0895D380;
    return;
L_0895D380:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D394u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D394u) goto L_0895D394;
    return;
L_0895D394:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D3AC;
    }
L_0895D3AC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D3C0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D3C0u) goto L_0895D3C0;
    return;
L_0895D3C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D3D4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D3D4u) goto L_0895D3D4;
    return;
L_0895D3D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D3EC;
    }
L_0895D3EC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D400u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D400u) goto L_0895D400;
    return;
L_0895D400:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D414u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D414u) goto L_0895D414;
    return;
L_0895D414:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D42C;
    }
L_0895D42C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D440u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D440u) goto L_0895D440;
    return;
L_0895D440:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D454u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D454u) goto L_0895D454;
    return;
L_0895D454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D46C;
    }
L_0895D46C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895D47Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D47Cu) goto L_0895D47C;
    return;
L_0895D47C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0895D498;
    }
    goto L_0895D48C;
L_0895D48C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_0895D498;
      }
      goto L_0895D498;
    }
L_0895D498:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D4A4;
    }
L_0895D4A4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895D4B4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D4B4u) goto L_0895D4B4;
    return;
L_0895D4B4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0895D4D0;
    }
    goto L_0895D4C4;
L_0895D4C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_0895D4D0;
      }
      goto L_0895D4D0;
    }
L_0895D4D0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D4DC;
    }
L_0895D4DC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895D4ECu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D4ECu) goto L_0895D4EC;
    return;
L_0895D4EC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0895D514;
    }
    goto L_0895D508;
L_0895D508:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_0895D514;
      }
      goto L_0895D514;
    }
L_0895D514:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D520;
    }
L_0895D520:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895D530u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D530u) goto L_0895D530;
    return;
L_0895D530:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0895D558;
    }
    goto L_0895D54C;
L_0895D54C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_0895D558;
      }
      goto L_0895D558;
    }
L_0895D558:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D564;
    }
L_0895D564:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895D574u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D574u) goto L_0895D574;
    return;
L_0895D574:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0895D580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0895D580u) goto L_0895D580;
    return;
L_0895D580:
    ctx.gpr[31] = (0x0895D588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0895D588u) goto L_0895D588;
    return;
L_0895D588:
    ctx.gpr[31] = (0x0895D590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0895D590u) goto L_0895D590;
    return;
L_0895D590:
    ctx.gpr[31] = (0x0895D598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0895D598u) goto L_0895D598;
    return;
L_0895D598:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (14208u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D5BC;
    }
L_0895D5BC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895D5CCu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895D5CCu) goto L_0895D5CC;
    return;
L_0895D5CC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0895D5D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0895D5D8u) goto L_0895D5D8;
    return;
L_0895D5D8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D5E8;
    }
L_0895D5E8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0895D604u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895D604u) goto L_0895D604;
    return;
L_0895D604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0895D740;
      }
      goto L_0895D618;
    }
L_0895D618:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0895D66C;
      }
      goto L_0895D624;
    }
L_0895D624:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0895D698;
      }
      goto L_0895D62C;
    }
L_0895D62C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895D6C4;
      }
      goto L_0895D634;
    }
L_0895D634:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0895D6F0;
      }
      goto L_0895D63C;
    }
L_0895D63C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0895D71C;
      }
      goto L_0895D644;
    }
L_0895D644:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895D664;
      }
      goto L_0895D658;
    }
L_0895D658:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    goto L_0895D664;
L_0895D664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D740;
      }
      goto L_0895D66C;
    }
L_0895D66C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895D690;
      }
      goto L_0895D680;
    }
L_0895D680:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_0895D690;
L_0895D690:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D740;
      }
      goto L_0895D698;
    }
L_0895D698:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895D6BC;
      }
      goto L_0895D6AC;
    }
L_0895D6AC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_0895D6BC;
L_0895D6BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D740;
      }
      goto L_0895D6C4;
    }
L_0895D6C4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895D6E8;
      }
      goto L_0895D6D8;
    }
L_0895D6D8:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_0895D6E8;
L_0895D6E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D740;
      }
      goto L_0895D6F0;
    }
L_0895D6F0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895D714;
      }
      goto L_0895D704;
    }
L_0895D704:
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_0895D714;
L_0895D714:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D740;
      }
      goto L_0895D71C;
    }
L_0895D71C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895D740;
      }
      goto L_0895D730;
    }
L_0895D730:
    ctx.gpr[4] = (0u | 17u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_0895D740;
L_0895D740:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895D78C;
      }
      goto L_0895D754;
    }
L_0895D754:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0895D760u);
    ctx.gpr[4] = (0u | 2128u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 240u, 0x0899D998u>(ctx, &aot_mem) && ctx.pc == 0x0895D760u) goto L_0895D760;
    return;
L_0895D760:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0895D784;
      }
      goto L_0895D76C;
    }
L_0895D76C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0895D780u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 726u, 0x08A8F734u>(ctx, &aot_mem) && ctx.pc == 0x0895D780u) goto L_0895D780;
    return;
L_0895D780:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0895D784;
L_0895D784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D814;
      }
      goto L_0895D78C;
    }
L_0895D78C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0895D7B0;
      }
      goto L_0895D7A0;
    }
L_0895D7A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895D7E4;
      }
      goto L_0895D7B0;
    }
L_0895D7B0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0895D7BCu);
    ctx.gpr[4] = (0u | 2096u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 240u, 0x0899D998u>(ctx, &aot_mem) && ctx.pc == 0x0895D7BCu) goto L_0895D7BC;
    return;
L_0895D7BC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0895D7DC;
      }
      goto L_0895D7C8;
    }
L_0895D7C8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0895D7D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 435u, 0x0894E808u>(ctx, &aot_mem) && ctx.pc == 0x0895D7D8u) goto L_0895D7D8;
    return;
L_0895D7D8:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0895D7DC;
L_0895D7DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D814;
      }
      goto L_0895D7E4;
    }
L_0895D7E4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0895D7F0u);
    ctx.gpr[4] = (0u | 2160u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 240u, 0x0899D998u>(ctx, &aot_mem) && ctx.pc == 0x0895D7F0u) goto L_0895D7F0;
    return;
L_0895D7F0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0895D814;
      }
      goto L_0895D7FC;
    }
L_0895D7FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0895D810u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 143u, 0x089FD478u>(ctx, &aot_mem) && ctx.pc == 0x0895D810u) goto L_0895D810;
    return;
L_0895D810:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0895D814;
L_0895D814:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (65534u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65504u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D89C;
      }
      goto L_0895D88C;
    }
L_0895D88C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0895D898u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x0895D898u) goto L_0895D898;
    return;
L_0895D898:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0895D89C;
L_0895D89C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0895D900u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0895D900u) goto L_0895D900;
    return;
L_0895D900:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (0x0895D914u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x0895D914u) goto L_0895D914;
    return;
L_0895D914:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0895D920u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x0895D920u) goto L_0895D920;
    return;
L_0895D920:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D938;
      }
      goto L_0895D92C;
    }
L_0895D92C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_0895D938;
L_0895D938:
    ctx.gpr[31] = (0x0895D940u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x0895D940u) goto L_0895D940;
    return;
L_0895D940:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[31] = (0x0895D950u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 281u, 0x08871AF4u>(ctx, &aot_mem) && ctx.pc == 0x0895D950u) goto L_0895D950;
    return;
L_0895D950:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(326), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020), ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x0895D974u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x0895D974u) goto L_0895D974;
    return;
L_0895D974:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895D98Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0895D98Cu) goto L_0895D98C;
    return;
L_0895D98C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D9B0;
      }
      goto L_0895D998;
    }
L_0895D998:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x0895D9B0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 447u, 0x08957150u>(ctx, &aot_mem) && ctx.pc == 0x0895D9B0u) goto L_0895D9B0;
    return;
L_0895D9B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895D9B8;
    }
L_0895D9B8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895D9D0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895D9D0u) goto L_0895D9D0;
    return;
L_0895D9D0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x0895D9E0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0895D9E0u) goto L_0895D9E0;
    return;
L_0895D9E0:
    ctx.gpr[31] = (0x0895D9E8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 132u, 0x0887C9B4u>(ctx, &aot_mem) && ctx.pc == 0x0895D9E8u) goto L_0895D9E8;
    return;
L_0895D9E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DA0C;
      }
      goto L_0895D9F4;
    }
L_0895D9F4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x0895DA0Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 191u, 0x08958B00u>(ctx, &aot_mem) && ctx.pc == 0x0895DA0Cu) goto L_0895DA0C;
    return;
L_0895DA0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895DA14;
    }
L_0895DA14:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895DA30u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895DA30u) goto L_0895DA30;
    return;
L_0895DA30:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x0895DA40u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0895DA40u) goto L_0895DA40;
    return;
L_0895DA40:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0895DA4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 455u, 0x089A1F80u>(ctx, &aot_mem) && ctx.pc == 0x0895DA4Cu) goto L_0895DA4C;
    return;
L_0895DA4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0895DA6C;
      }
      goto L_0895DA58;
    }
L_0895DA58:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DAA4;
      }
      goto L_0895DA6C;
    }
L_0895DA6C:
    ctx.gpr[31] = (0x0895DA74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0895DA74u) goto L_0895DA74;
    return;
L_0895DA74:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29292)));
    ctx.gpr[31] = (0x0895DA8Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29296)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0895DA8Cu) goto L_0895DA8C;
    return;
L_0895DA8C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0895DAB0;
      }
      goto L_0895DAA4;
    }
L_0895DAA4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0895DAB0;
L_0895DAB0:
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x0895DAC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x0895DAC0u) goto L_0895DAC0;
    return;
L_0895DAC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895DAC8;
    }
L_0895DAC8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895DAE0u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895DAE0u) goto L_0895DAE0;
    return;
L_0895DAE0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x0895DAF0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0895DAF0u) goto L_0895DAF0;
    return;
L_0895DAF0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895DB58;
      }
      goto L_0895DB04;
    }
L_0895DB04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895DB58;
      }
      goto L_0895DB14;
    }
L_0895DB14:
    ctx.gpr[31] = (0x0895DB1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x0895DB1Cu) goto L_0895DB1C;
    return;
L_0895DB1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DB58;
      }
      goto L_0895DB24;
    }
L_0895DB24:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895DB60;
      }
      goto L_0895DB50;
    }
L_0895DB50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DB70;
      }
      goto L_0895DB58;
    }
L_0895DB58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895DB60;
    }
L_0895DB60:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0895DB6Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x0895DB6Cu) goto L_0895DB6C;
    return;
L_0895DB6C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0895DB70;
L_0895DB70:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_0895DB9C;
    }
    goto L_0895DB88;
L_0895DB88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895DBB0;
      }
      goto L_0895DB90;
    }
L_0895DB90:
    ctx.gpr[17] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DBB4;
      }
      goto L_0895DB9C;
    }
L_0895DB9C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DBB0;
      }
      goto L_0895DBA4;
    }
L_0895DBA4:
    ctx.gpr[17] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DBB4;
      }
      goto L_0895DBB0;
    }
L_0895DBB0:
    ctx.gpr[17] = (0u | 2u);
    goto L_0895DBB4;
L_0895DBB4:
    ctx.gpr[31] = (0x0895DBBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 455u, 0x089A1F80u>(ctx, &aot_mem) && ctx.pc == 0x0895DBBCu) goto L_0895DBBC;
    return;
L_0895DBBC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(916), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[9] = (15u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(16959));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0895DBF0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 432u, 0x089AE34Cu>(ctx, &aot_mem) && ctx.pc == 0x0895DBF0u) goto L_0895DBF0;
    return;
L_0895DBF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895DBF8;
    }
L_0895DBF8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895DC10u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895DC10u) goto L_0895DC10;
    return;
L_0895DC10:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x0895DC20u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0895DC20u) goto L_0895DC20;
    return;
L_0895DC20:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0895DC50u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x0895DC50u) goto L_0895DC50;
    return;
L_0895DC50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895DC58;
    }
L_0895DC58:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895DC70u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895DC70u) goto L_0895DC70;
    return;
L_0895DC70:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x0895DC80u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0895DC80u) goto L_0895DC80;
    return;
L_0895DC80:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DC98;
      }
      goto L_0895DC90;
    }
L_0895DC90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_0895DC9C;
      }
      goto L_0895DC98;
    }
L_0895DC98:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895DC9C;
L_0895DC9C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DCBC;
      }
      goto L_0895DCA4;
    }
L_0895DCA4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DCCC;
      }
      goto L_0895DCBC;
    }
L_0895DCBC:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
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
    goto L_0895DCCC;
L_0895DCCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895DCFCu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0895DCFCu) goto L_0895DCFC;
    return;
L_0895DCFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895DD04;
    }
L_0895DD04:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895DD1Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895DD1Cu) goto L_0895DD1C;
    return;
L_0895DD1C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x0895DD2Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0895DD2Cu) goto L_0895DD2C;
    return;
L_0895DD2C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DD44;
      }
      goto L_0895DD3C;
    }
L_0895DD3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_0895DD48;
      }
      goto L_0895DD44;
    }
L_0895DD44:
    ctx.gpr[17] = (0u | 0u);
    goto L_0895DD48;
L_0895DD48:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895DD84;
      }
      goto L_0895DD74;
    }
L_0895DD74:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0895DD80u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x0895DD80u) goto L_0895DD80;
    return;
L_0895DD80:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0895DD84;
L_0895DD84:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DE9C;
      }
      goto L_0895DD8C;
    }
L_0895DD8C:
    ctx.gpr[31] = (0x0895DD94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FC04u>(ctx, &aot_mem) && ctx.pc == 0x0895DD94u) goto L_0895DD94;
    return;
L_0895DD94:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895DDF4;
      }
      goto L_0895DDA8;
    }
L_0895DDA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895DDD4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895DDD4u) goto L_0895DDD4;
    return;
L_0895DDD4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895DDECu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x0895DDECu) goto L_0895DDEC;
    return;
L_0895DDEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DF68;
      }
      goto L_0895DDF4;
    }
L_0895DDF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895DE50;
      }
      goto L_0895DE04;
    }
L_0895DE04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895DE30u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895DE30u) goto L_0895DE30;
    return;
L_0895DE30:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895DE48u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x0895DE48u) goto L_0895DE48;
    return;
L_0895DE48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DF68;
      }
      goto L_0895DE50;
    }
L_0895DE50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895DE7Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895DE7Cu) goto L_0895DE7C;
    return;
L_0895DE7C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895DE94u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x0895DE94u) goto L_0895DE94;
    return;
L_0895DE94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DF68;
      }
      goto L_0895DE9C;
    }
L_0895DE9C:
    ctx.gpr[31] = (0x0895DEA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FC04u>(ctx, &aot_mem) && ctx.pc == 0x0895DEA4u) goto L_0895DEA4;
    return;
L_0895DEA4:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895DED4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895DED4u) goto L_0895DED4;
    return;
L_0895DED4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895DEECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x0895DEECu) goto L_0895DEEC;
    return;
L_0895DEEC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DF68;
      }
      goto L_0895DF00;
    }
L_0895DF00:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0895DF54;
      }
      goto L_0895DF18;
    }
L_0895DF18:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(104));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895DF4Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895DF4Cu) goto L_0895DF4C;
    return;
L_0895DF4C:
    ctx.gpr[31] = (0x0895DF54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1828)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 771u, 0x08887CE4u>(ctx, &aot_mem) && ctx.pc == 0x0895DF54u) goto L_0895DF54;
    return;
L_0895DF54:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DF00;
      }
      goto L_0895DF68;
    }
L_0895DF68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895DF70;
    }
L_0895DF70:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895DF88u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895DF88u) goto L_0895DF88;
    return;
L_0895DF88:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x0895DF98u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0895DF98u) goto L_0895DF98;
    return;
L_0895DF98:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DFD4;
      }
      goto L_0895DFA4;
    }
L_0895DFA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0895DFC4;
      }
      goto L_0895DFB4;
    }
L_0895DFB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895DFCC;
      }
      goto L_0895DFC4;
    }
L_0895DFC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0895DFD8;
      }
      goto L_0895DFCC;
    }
L_0895DFCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895DFD8;
      }
      goto L_0895DFD4;
    }
L_0895DFD4:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895DFD8;
L_0895DFD8:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895E004;
      }
      goto L_0895DFFC;
    }
L_0895DFFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895E054;
      }
      goto L_0895E004;
    }
L_0895E004:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895E034;
    }
    goto L_0895E020;
L_0895E020:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895E054;
      }
      goto L_0895E034;
    }
L_0895E034:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E054;
      }
      goto L_0895E050;
    }
L_0895E050:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895E054;
L_0895E054:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895E05C;
    }
L_0895E05C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895E074u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895E074u) goto L_0895E074;
    return;
L_0895E074:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x0895E084u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0895E084u) goto L_0895E084;
    return;
L_0895E084:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E09C;
      }
      goto L_0895E094;
    }
L_0895E094:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_0895E0A0;
      }
      goto L_0895E09C;
    }
L_0895E09C:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895E0A0;
L_0895E0A0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E0DC;
      }
      goto L_0895E0A8;
    }
L_0895E0A8:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x0895E0C4u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A287F8u>(ctx, &aot_mem) && ctx.pc == 0x0895E0C4u) goto L_0895E0C4;
    return;
L_0895E0C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E0D4;
      }
      goto L_0895E0CC;
    }
L_0895E0CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895E110;
      }
      goto L_0895E0D4;
    }
L_0895E0D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0895E110;
      }
      goto L_0895E0DC;
    }
L_0895E0DC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0895E0FCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A287F8u>(ctx, &aot_mem) && ctx.pc == 0x0895E0FCu) goto L_0895E0FC;
    return;
L_0895E0FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E10C;
      }
      goto L_0895E104;
    }
L_0895E104:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895E110;
      }
      goto L_0895E10C;
    }
L_0895E10C:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895E110;
L_0895E110:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895E13C;
      }
      goto L_0895E134;
    }
L_0895E134:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895E18C;
      }
      goto L_0895E13C;
    }
L_0895E13C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895E16C;
    }
    goto L_0895E158;
L_0895E158:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895E18C;
      }
      goto L_0895E16C;
    }
L_0895E16C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E18C;
      }
      goto L_0895E188;
    }
L_0895E188:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895E18C;
L_0895E18C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E1CC;
      }
      goto L_0895E1A0;
    }
L_0895E1A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (49864u << 16u);
    ctx.gpr[31] = (0x0895E1CCu);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0895E1CCu) goto L_0895E1CC;
    return;
L_0895E1CC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E1DC;
      }
      goto L_0895E1DC;
    }
L_0895E1DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895E1E4;
    }
L_0895E1E4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895E1FCu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895E1FCu) goto L_0895E1FC;
    return;
L_0895E1FC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x0895E20Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0895E20Cu) goto L_0895E20C;
    return;
L_0895E20C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E224;
      }
      goto L_0895E21C;
    }
L_0895E21C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_0895E228;
      }
      goto L_0895E224;
    }
L_0895E224:
    ctx.gpr[5] = (0u | 0u);
    goto L_0895E228;
L_0895E228:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E270;
      }
      goto L_0895E230;
    }
L_0895E230:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0895E258u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 57u, 0x08A28888u>(ctx, &aot_mem) && ctx.pc == 0x0895E258u) goto L_0895E258;
    return;
L_0895E258:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E268;
      }
      goto L_0895E260;
    }
L_0895E260:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895E2A8;
      }
      goto L_0895E268;
    }
L_0895E268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0895E2A8;
      }
      goto L_0895E270;
    }
L_0895E270:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x0895E294u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 57u, 0x08A28888u>(ctx, &aot_mem) && ctx.pc == 0x0895E294u) goto L_0895E294;
    return;
L_0895E294:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E2A4;
      }
      goto L_0895E29C;
    }
L_0895E29C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895E2A8;
      }
      goto L_0895E2A4;
    }
L_0895E2A4:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895E2A8;
L_0895E2A8:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895E2D4;
      }
      goto L_0895E2CC;
    }
L_0895E2CC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895E324;
      }
      goto L_0895E2D4;
    }
L_0895E2D4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895E304;
    }
    goto L_0895E2F0;
L_0895E2F0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895E324;
      }
      goto L_0895E304;
    }
L_0895E304:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E324;
      }
      goto L_0895E320;
    }
L_0895E320:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895E324;
L_0895E324:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E374;
      }
      goto L_0895E338;
    }
L_0895E338:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0895E374u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0895E374u) goto L_0895E374;
    return;
L_0895E374:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E384;
      }
      goto L_0895E384;
    }
L_0895E384:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895E38C;
    }
L_0895E38C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895E3A4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895E3A4u) goto L_0895E3A4;
    return;
L_0895E3A4:
    ctx.gpr[31] = (0x0895E3ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 112u, 0x08A28CB0u>(ctx, &aot_mem) && ctx.pc == 0x0895E3ACu) goto L_0895E3AC;
    return;
L_0895E3AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E4DC;
      }
      goto L_0895E3B4;
    }
L_0895E3B4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0895E3C0u);
    ctx.gpr[4] = (0u | 1424u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x0895E3C0u) goto L_0895E3C0;
    return;
L_0895E3C0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0895E3E0;
      }
      goto L_0895E3CC;
    }
L_0895E3CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0895E3DCu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 403u, 0x08A4DE78u>(ctx, &aot_mem) && ctx.pc == 0x0895E3DCu) goto L_0895E3DC;
    return;
L_0895E3DC:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0895E3E0;
L_0895E3E0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895E41C;
      }
      goto L_0895E40C;
    }
L_0895E40C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0895E418u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x0895E418u) goto L_0895E418;
    return;
L_0895E418:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0895E41C;
L_0895E41C:
    ctx.gpr[31] = (0x0895E424u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FC04u>(ctx, &aot_mem) && ctx.pc == 0x0895E424u) goto L_0895E424;
    return;
L_0895E424:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x0895E44Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x0895E44Cu) goto L_0895E44C;
    return;
L_0895E44C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E4A4;
      }
      goto L_0895E498;
    }
L_0895E498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_0895E4A4;
L_0895E4A4:
    ctx.gpr[31] = (0x0895E4ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x0895E4ACu) goto L_0895E4AC;
    return;
L_0895E4AC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0895E4BCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 509u, 0x08AFE25Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E4BCu) goto L_0895E4BC;
    return;
L_0895E4BC:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895E4D4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0895E4D4u) goto L_0895E4D4;
    return;
L_0895E4D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E6C0;
      }
      goto L_0895E4DC;
    }
L_0895E4DC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x0895E4E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 148u, 0x08A28E68u>(ctx, &aot_mem) && ctx.pc == 0x0895E4E8u) goto L_0895E4E8;
    return;
L_0895E4E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E538;
      }
      goto L_0895E4F0;
    }
L_0895E4F0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0895E4FCu);
    ctx.gpr[4] = (0u | 1472u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x0895E4FCu) goto L_0895E4FC;
    return;
L_0895E4FC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0895E51C;
      }
      goto L_0895E508;
    }
L_0895E508:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0895E518u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 565u, 0x08A378CCu>(ctx, &aot_mem) && ctx.pc == 0x0895E518u) goto L_0895E518;
    return;
L_0895E518:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0895E51C;
L_0895E51C:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E56C;
      }
      goto L_0895E538;
    }
L_0895E538:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x0895E548u);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x0895E548u) goto L_0895E548;
    return;
L_0895E548:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0895E568;
      }
      goto L_0895E554;
    }
L_0895E554:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0895E564u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x0895E564u) goto L_0895E564;
    return;
L_0895E564:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_0895E568;
L_0895E568:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0895E56C;
L_0895E56C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895E5A8;
      }
      goto L_0895E598;
    }
L_0895E598:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0895E5A4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x0895E5A4u) goto L_0895E5A4;
    return;
L_0895E5A4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0895E5A8;
L_0895E5A8:
    ctx.gpr[31] = (0x0895E5B0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FC04u>(ctx, &aot_mem) && ctx.pc == 0x0895E5B0u) goto L_0895E5B0;
    return;
L_0895E5B0:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0895E5F4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x0895E5F4u) goto L_0895E5F4;
    return;
L_0895E5F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0895E61Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 206u, 0x089ED510u>(ctx, &aot_mem) && ctx.pc == 0x0895E61Cu) goto L_0895E61C;
    return;
L_0895E61C:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(395), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(396), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[31] = (0x0895E668u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 281u, 0x08871AF4u>(ctx, &aot_mem) && ctx.pc == 0x0895E668u) goto L_0895E668;
    return;
L_0895E668:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(326), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E690;
      }
      goto L_0895E684;
    }
L_0895E684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_0895E690;
L_0895E690:
    ctx.gpr[31] = (0x0895E698u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x0895E698u) goto L_0895E698;
    return;
L_0895E698:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0895E6A8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 509u, 0x08AFE25Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E6A8u) goto L_0895E6A8;
    return;
L_0895E6A8:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895E6C0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0895E6C0u) goto L_0895E6C0;
    return;
L_0895E6C0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E724;
      }
      goto L_0895E6D0;
    }
L_0895E6D0:
    ctx.gpr[31] = (0x0895E6D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x0895E6D8u) goto L_0895E6D8;
    return;
L_0895E6D8:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0895E708;
      }
      goto L_0895E6E4;
    }
L_0895E6E4:
    ctx.gpr[31] = (0x0895E6ECu);
    ctx.gpr[4] = (0u | 240u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0895E6ECu) goto L_0895E6EC;
    return;
L_0895E6EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E724;
      }
      goto L_0895E6F8;
    }
L_0895E6F8:
    ctx.gpr[31] = (0x0895E700u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 390u, 0x089D9FBCu>(ctx, &aot_mem) && ctx.pc == 0x0895E700u) goto L_0895E700;
    return;
L_0895E700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E724;
      }
      goto L_0895E708;
    }
L_0895E708:
    ctx.gpr[31] = (0x0895E710u);
    ctx.gpr[4] = (0u | 364u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0895E710u) goto L_0895E710;
    return;
L_0895E710:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E724;
      }
      goto L_0895E71C;
    }
L_0895E71C:
    ctx.gpr[31] = (0x0895E724u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 247u, 0x08ABD7E0u>(ctx, &aot_mem) && ctx.pc == 0x0895E724u) goto L_0895E724;
    return;
L_0895E724:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E748;
      }
      goto L_0895E730;
    }
L_0895E730:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x0895E748u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 447u, 0x08957150u>(ctx, &aot_mem) && ctx.pc == 0x0895E748u) goto L_0895E748;
    return;
L_0895E748:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895E750;
    }
L_0895E750:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895E768u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895E768u) goto L_0895E768;
    return;
L_0895E768:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0895E778u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0895E778u) goto L_0895E778;
    return;
L_0895E778:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E7B8;
      }
      goto L_0895E784;
    }
L_0895E784:
    ctx.gpr[31] = (0x0895E78Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x0895E78Cu) goto L_0895E78C;
    return;
L_0895E78C:
    ctx.gpr[31] = (0x0895E794u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 476u, 0x088C309Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E794u) goto L_0895E794;
    return;
L_0895E794:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E7B8;
      }
      goto L_0895E79C;
    }
L_0895E79C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895E7B8u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895E7B8u) goto L_0895E7B8;
    return;
L_0895E7B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E7DC;
      }
      goto L_0895E7C4;
    }
L_0895E7C4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x0895E7DCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 191u, 0x08958B00u>(ctx, &aot_mem) && ctx.pc == 0x0895E7DCu) goto L_0895E7DC;
    return;
L_0895E7DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895E7E4;
    }
L_0895E7E4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0895E800u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895E800u) goto L_0895E800;
    return;
L_0895E800:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0895E810u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0895E810u) goto L_0895E810;
    return;
L_0895E810:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895E848;
      }
      goto L_0895E838;
    }
L_0895E838:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0895E844u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x0895E844u) goto L_0895E844;
    return;
L_0895E844:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0895E848;
L_0895E848:
    ctx.gpr[31] = (0x0895E850u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FC04u>(ctx, &aot_mem) && ctx.pc == 0x0895E850u) goto L_0895E850;
    return;
L_0895E850:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895E874u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 222u, 0x089ED770u>(ctx, &aot_mem) && ctx.pc == 0x0895E874u) goto L_0895E874;
    return;
L_0895E874:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E888;
      }
      goto L_0895E87C;
    }
L_0895E87C:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895E890;
      }
      goto L_0895E888;
    }
L_0895E888:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0895E890;
L_0895E890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
        goto L_0895E8C4;
    }
    goto L_0895E8C4;
L_0895E8C4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0895E8E0;
      }
      goto L_0895E8D4;
    }
L_0895E8D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    goto L_0895E8E0;
L_0895E8E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895E8E8;
    }
L_0895E8E8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895E904u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895E904u) goto L_0895E904;
    return;
L_0895E904:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0895E914u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0895E914u) goto L_0895E914;
    return;
L_0895E914:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0895E920u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 206u, 0x089ED510u>(ctx, &aot_mem) && ctx.pc == 0x0895E920u) goto L_0895E920;
    return;
L_0895E920:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
        goto L_0895E944;
    }
    goto L_0895E944;
L_0895E944:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895E95C;
    }
L_0895E95C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895E974u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895E974u) goto L_0895E974;
    return;
L_0895E974:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0895E984u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0895E984u) goto L_0895E984;
    return;
L_0895E984:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895E990;
    }
L_0895E990:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0895E9B0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895E9B0u) goto L_0895E9B0;
    return;
L_0895E9B0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0895E9C0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0895E9C0u) goto L_0895E9C0;
    return;
L_0895E9C0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895E9F8u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0895E9F8u) goto L_0895E9F8;
    return;
L_0895E9F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895EA00;
    }
L_0895EA00:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0895EA1Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895EA1Cu) goto L_0895EA1C;
    return;
L_0895EA1C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0895EA2Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0895EA2Cu) goto L_0895EA2C;
    return;
L_0895EA2C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895EA64;
      }
      goto L_0895EA54;
    }
L_0895EA54:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0895EA60u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x0895EA60u) goto L_0895EA60;
    return;
L_0895EA60:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0895EA64;
L_0895EA64:
    ctx.gpr[31] = (0x0895EA6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FC04u>(ctx, &aot_mem) && ctx.pc == 0x0895EA6Cu) goto L_0895EA6C;
    return;
L_0895EA6C:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895EAEC;
      }
      goto L_0895EAA0;
    }
L_0895EAA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895EACCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895EACCu) goto L_0895EACC;
    return;
L_0895EACC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EAE4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x0895EAE4u) goto L_0895EAE4;
    return;
L_0895EAE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC24;
      }
      goto L_0895EAEC;
    }
L_0895EAEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895EB18u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895EB18u) goto L_0895EB18;
    return;
L_0895EB18:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EB30u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x0895EB30u) goto L_0895EB30;
    return;
L_0895EB30:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(23) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC24;
      }
      goto L_0895EB40;
    }
L_0895EB40:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30912)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895EB58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC24;
      }
      goto L_0895EB60;
    }
L_0895EB60:
    ctx.gpr[31] = (0x0895EB68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 206u, 0x089ED510u>(ctx, &aot_mem) && ctx.pc == 0x0895EB68u) goto L_0895EB68;
    return;
L_0895EB68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC24;
      }
      goto L_0895EB70;
    }
L_0895EB70:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[31] = (0x0895EB7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EB7Cu) goto L_0895EB7C;
    return;
L_0895EB7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EB8Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 222u, 0x089ED770u>(ctx, &aot_mem) && ctx.pc == 0x0895EB8Cu) goto L_0895EB8C;
    return;
L_0895EB8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC24;
      }
      goto L_0895EB94;
    }
L_0895EB94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC24;
      }
      goto L_0895EB9C;
    }
L_0895EB9C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(432));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895EBB8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 222u, 0x089ED770u>(ctx, &aot_mem) && ctx.pc == 0x0895EBB8u) goto L_0895EBB8;
    return;
L_0895EBB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC24;
      }
      goto L_0895EBC0;
    }
L_0895EBC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC24;
      }
      goto L_0895EBC8;
    }
L_0895EBC8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(432));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895EBE4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 222u, 0x089ED770u>(ctx, &aot_mem) && ctx.pc == 0x0895EBE4u) goto L_0895EBE4;
    return;
L_0895EBE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC24;
      }
      goto L_0895EBEC;
    }
L_0895EBEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC24;
      }
      goto L_0895EBF4;
    }
L_0895EBF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895EC14u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 222u, 0x089ED770u>(ctx, &aot_mem) && ctx.pc == 0x0895EC14u) goto L_0895EC14;
    return;
L_0895EC14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC24;
      }
      goto L_0895EC1C;
    }
L_0895EC1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC24;
      }
      goto L_0895EC24;
    }
L_0895EC24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895EC2C;
    }
L_0895EC2C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895EC44u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895EC44u) goto L_0895EC44;
    return;
L_0895EC44:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0895EC54u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0895EC54u) goto L_0895EC54;
    return;
L_0895EC54:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ECAC;
      }
      goto L_0895EC60;
    }
L_0895EC60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    ctx.gpr[6] = (0u | 80u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0895EC7C;
      }
      goto L_0895EC74;
    }
L_0895EC74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0895ECB0;
      }
      goto L_0895EC7C;
    }
L_0895EC7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0895ECA4;
      }
      goto L_0895EC8C;
    }
L_0895EC8C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ECA4;
      }
      goto L_0895EC9C;
    }
L_0895EC9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0895ECB0;
      }
      goto L_0895ECA4;
    }
L_0895ECA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895ECB0;
      }
      goto L_0895ECAC;
    }
L_0895ECAC:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895ECB0;
L_0895ECB0:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895ECDC;
      }
      goto L_0895ECD4;
    }
L_0895ECD4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895ED2C;
      }
      goto L_0895ECDC;
    }
L_0895ECDC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895ED0C;
    }
    goto L_0895ECF8;
L_0895ECF8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895ED2C;
      }
      goto L_0895ED0C;
    }
L_0895ED0C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ED2C;
      }
      goto L_0895ED28;
    }
L_0895ED28:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895ED2C;
L_0895ED2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895ED34;
    }
L_0895ED34:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895ED50u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895ED50u) goto L_0895ED50;
    return;
L_0895ED50:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0895ED60u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0895ED60u) goto L_0895ED60;
    return;
L_0895ED60:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
        goto L_0895EDB4;
    }
    goto L_0895EDA4;
L_0895EDA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    goto L_0895EDB4;
L_0895EDB4:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895EDC4;
    }
L_0895EDC4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895EDE0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895EDE0u) goto L_0895EDE0;
    return;
L_0895EDE0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0895EDF0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0895EDF0u) goto L_0895EDF0;
    return;
L_0895EDF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895EE00;
    }
L_0895EE00:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895EE1Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895EE1Cu) goto L_0895EE1C;
    return;
L_0895EE1C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0895EE2Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0895EE2Cu) goto L_0895EE2C;
    return;
L_0895EE2C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895EE5C;
      }
      goto L_0895EE40;
    }
L_0895EE40:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    goto L_0895EE5C;
L_0895EE5C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895EE70;
    }
L_0895EE70:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0895EE8Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895EE8Cu) goto L_0895EE8C;
    return;
L_0895EE8C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0895EE9Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0895EE9Cu) goto L_0895EE9C;
    return;
L_0895EE9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0895EEB4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A287F8u>(ctx, &aot_mem) && ctx.pc == 0x0895EEB4u) goto L_0895EEB4;
    return;
L_0895EEB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EEC4;
      }
      goto L_0895EEBC;
    }
L_0895EEBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895EEC8;
      }
      goto L_0895EEC4;
    }
L_0895EEC4:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895EEC8;
L_0895EEC8:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895EEF4;
      }
      goto L_0895EEEC;
    }
L_0895EEEC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895EF44;
      }
      goto L_0895EEF4;
    }
L_0895EEF4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895EF24;
    }
    goto L_0895EF10;
L_0895EF10:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895EF44;
      }
      goto L_0895EF24;
    }
L_0895EF24:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EF44;
      }
      goto L_0895EF40;
    }
L_0895EF40:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895EF44;
L_0895EF44:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EF84;
      }
      goto L_0895EF58;
    }
L_0895EF58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (49864u << 16u);
    ctx.gpr[31] = (0x0895EF84u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0895EF84u) goto L_0895EF84;
    return;
L_0895EF84:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EF94;
      }
      goto L_0895EF94;
    }
L_0895EF94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895EF9C;
    }
L_0895EF9C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x0895EFB8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895EFB8u) goto L_0895EFB8;
    return;
L_0895EFB8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0895EFC8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0895EFC8u) goto L_0895EFC8;
    return;
L_0895EFC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0895EFE8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 57u, 0x08A28888u>(ctx, &aot_mem) && ctx.pc == 0x0895EFE8u) goto L_0895EFE8;
    return;
L_0895EFE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EFF8;
      }
      goto L_0895EFF0;
    }
L_0895EFF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895EFFC;
      }
      goto L_0895EFF8;
    }
L_0895EFF8:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895EFFC;
L_0895EFFC:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895F028;
      }
      goto L_0895F020;
    }
L_0895F020:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895F078;
      }
      goto L_0895F028;
    }
L_0895F028:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895F058;
    }
    goto L_0895F044;
L_0895F044:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895F078;
      }
      goto L_0895F058;
    }
L_0895F058:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F078;
      }
      goto L_0895F074;
    }
L_0895F074:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895F078;
L_0895F078:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F0C8;
      }
      goto L_0895F08C;
    }
L_0895F08C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0895F0C8u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0895F0C8u) goto L_0895F0C8;
    return;
L_0895F0C8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F0D8;
      }
      goto L_0895F0D8;
    }
L_0895F0D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895F0E0;
    }
L_0895F0E0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0895F120;
      }
      goto L_0895F0F0;
    }
L_0895F0F0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0895F0FCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0895F0FCu) goto L_0895F0FC;
    return;
L_0895F0FC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0895F118;
      }
      goto L_0895F108;
    }
L_0895F108:
    ctx.gpr[31] = (0x0895F110u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0895F110u) goto L_0895F110;
    return;
L_0895F110:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0895F118;
L_0895F118:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0895F120;
L_0895F120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0895F138u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0895F138u) goto L_0895F138;
    return;
L_0895F138:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895F164u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895F164u) goto L_0895F164;
    return;
L_0895F164:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x0895F17Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 286u, 0x08879A48u>(ctx, &aot_mem) && ctx.pc == 0x0895F17Cu) goto L_0895F17C;
    return;
L_0895F17C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895F184;
    }
L_0895F184:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0895F1C4;
      }
      goto L_0895F194;
    }
L_0895F194:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0895F1A0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0895F1A0u) goto L_0895F1A0;
    return;
L_0895F1A0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0895F1BC;
      }
      goto L_0895F1AC;
    }
L_0895F1AC:
    ctx.gpr[31] = (0x0895F1B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0895F1B4u) goto L_0895F1B4;
    return;
L_0895F1B4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0895F1BC;
L_0895F1BC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0895F1C4;
L_0895F1C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0895F1DCu);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0895F1DCu) goto L_0895F1DC;
    return;
L_0895F1DC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895F208u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895F208u) goto L_0895F208;
    return;
L_0895F208:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x0895F21Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 239u, 0x0887942Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F21Cu) goto L_0895F21C;
    return;
L_0895F21C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895F224;
    }
L_0895F224:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0895F264;
      }
      goto L_0895F234;
    }
L_0895F234:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0895F240u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0895F240u) goto L_0895F240;
    return;
L_0895F240:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0895F25C;
      }
      goto L_0895F24C;
    }
L_0895F24C:
    ctx.gpr[31] = (0x0895F254u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0895F254u) goto L_0895F254;
    return;
L_0895F254:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0895F25C;
L_0895F25C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0895F264;
L_0895F264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0895F27Cu);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0895F27Cu) goto L_0895F27C;
    return;
L_0895F27C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895F2A8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895F2A8u) goto L_0895F2A8;
    return;
L_0895F2A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0895F2C4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 256u, 0x08879648u>(ctx, &aot_mem) && ctx.pc == 0x0895F2C4u) goto L_0895F2C4;
    return;
L_0895F2C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895F2CC;
    }
L_0895F2CC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0895F30C;
      }
      goto L_0895F2DC;
    }
L_0895F2DC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0895F2E8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0895F2E8u) goto L_0895F2E8;
    return;
L_0895F2E8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0895F304;
      }
      goto L_0895F2F4;
    }
L_0895F2F4:
    ctx.gpr[31] = (0x0895F2FCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0895F2FCu) goto L_0895F2FC;
    return;
L_0895F2FC:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0895F304;
L_0895F304:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0895F30C;
L_0895F30C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0895F324u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0895F324u) goto L_0895F324;
    return;
L_0895F324:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895F350u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895F350u) goto L_0895F350;
    return;
L_0895F350:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x0895F364u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 262u, 0x08879750u>(ctx, &aot_mem) && ctx.pc == 0x0895F364u) goto L_0895F364;
    return;
L_0895F364:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895F36C;
    }
L_0895F36C:
    ctx.gpr[31] = (0x0895F374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 271u, 0x088798E8u>(ctx, &aot_mem) && ctx.pc == 0x0895F374u) goto L_0895F374;
    return;
L_0895F374:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895F37C;
    }
L_0895F37C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7767)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895F3ACu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0895F3ACu) goto L_0895F3AC;
    return;
L_0895F3AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895F3B4;
    }
L_0895F3B4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895F3D0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895F3D0u) goto L_0895F3D0;
    return;
L_0895F3D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0895F3E4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 57u, 0x0883C3B4u>(ctx, &aot_mem) && ctx.pc == 0x0895F3E4u) goto L_0895F3E4;
    return;
L_0895F3E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895F3EC;
    }
L_0895F3EC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895F40Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895F40Cu) goto L_0895F40C;
    return;
L_0895F40C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0895F420u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 58u, 0x0883C408u>(ctx, &aot_mem) && ctx.pc == 0x0895F420u) goto L_0895F420;
    return;
L_0895F420:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895F434u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0895F434u) goto L_0895F434;
    return;
L_0895F434:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895F43C;
    }
L_0895F43C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0895F458u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895F458u) goto L_0895F458;
    return;
L_0895F458:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895F48C;
      }
      goto L_0895F47C;
    }
L_0895F47C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0895F488u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x0895F488u) goto L_0895F488;
    return;
L_0895F488:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0895F48C;
L_0895F48C:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-464));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_0895F4F0;
      }
      goto L_0895F4E8;
    }
L_0895F4E8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_0895F4F0;
L_0895F4F0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F4FC;
      }
      goto L_0895F4F8;
    }
L_0895F4F8:
    ctx.gpr[4] = (0u | 1u);
    goto L_0895F4FC;
L_0895F4FC:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895F528;
      }
      goto L_0895F520;
    }
L_0895F520:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895F578;
      }
      goto L_0895F528;
    }
L_0895F528:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895F558;
    }
    goto L_0895F544;
L_0895F544:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895F578;
      }
      goto L_0895F558;
    }
L_0895F558:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F578;
      }
      goto L_0895F574;
    }
L_0895F574:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895F578;
L_0895F578:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895F580;
    }
L_0895F580:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895F5B0;
      }
      goto L_0895F5A8;
    }
L_0895F5A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895F600;
      }
      goto L_0895F5B0;
    }
L_0895F5B0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895F5E0;
    }
    goto L_0895F5CC;
L_0895F5CC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895F600;
      }
      goto L_0895F5E0;
    }
L_0895F5E0:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F600;
      }
      goto L_0895F5FC;
    }
L_0895F5FC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895F600;
L_0895F600:
    ctx.gpr[31] = (0x0895F608u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 645u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0895F608u) goto L_0895F608;
    return;
L_0895F608:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895F610;
    }
L_0895F610:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895F640;
      }
      goto L_0895F638;
    }
L_0895F638:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895F690;
      }
      goto L_0895F640;
    }
L_0895F640:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895F670;
    }
    goto L_0895F65C;
L_0895F65C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895F690;
      }
      goto L_0895F670;
    }
L_0895F670:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F690;
      }
      goto L_0895F68C;
    }
L_0895F68C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895F690;
L_0895F690:
    ctx.gpr[31] = (0x0895F698u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 645u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0895F698u) goto L_0895F698;
    return;
L_0895F698:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F6A4;
      }
      goto L_0895F6A0;
    }
L_0895F6A0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0895F6A4;
L_0895F6A4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F6D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-219));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(85) ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 380u, 0x08961BC0u>(ctx, &aot_mem); return;
      }
      goto L_0895F70C;
    }
L_0895F70C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-219));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30816)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F728:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895F740u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895F740u) goto L_0895F740;
    return;
L_0895F740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F774;
      }
      goto L_0895F754;
    }
L_0895F754:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F770;
      }
      goto L_0895F764;
    }
L_0895F764:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895F774;
      }
      goto L_0895F770;
    }
L_0895F770:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(0u));
    goto L_0895F774;
L_0895F774:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 381u, 0x08961BC4u>(ctx, &aot_mem); return;
      }
      goto L_0895F77C;
    }
L_0895F77C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895F794u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895F794u) goto L_0895F794;
    return;
L_0895F794:
    ctx.gpr[31] = (0x0895F79Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 24u, 0x0895815Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F79Cu) goto L_0895F79C;
    return;
L_0895F79C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(526), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 381u, 0x08961BC4u>(ctx, &aot_mem); return;
      }
      goto L_0895F7AC;
    }
L_0895F7AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F7C4;
      }
      goto L_0895F7B8;
    }
L_0895F7B8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x0895F7C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 37u, 0x08958264u>(ctx, &aot_mem) && ctx.pc == 0x0895F7C4u) goto L_0895F7C4;
    return;
L_0895F7C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 381u, 0x08961BC4u>(ctx, &aot_mem); return;
      }
      goto L_0895F7CC;
    }
L_0895F7CC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895F7E4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895F7E4u) goto L_0895F7E4;
    return;
L_0895F7E4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x0895F7F4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0895F7F4u) goto L_0895F7F4;
    return;
L_0895F7F4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F80C;
      }
      goto L_0895F804;
    }
L_0895F804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_0895F810;
      }
      goto L_0895F80C;
    }
L_0895F80C:
    ctx.gpr[19] = (0u | 0u);
    goto L_0895F810;
L_0895F810:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0895F820u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 509u, 0x08AFE25Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F820u) goto L_0895F820;
    return;
L_0895F820:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6540)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0895F9D4;
      }
      goto L_0895F834;
    }
L_0895F834:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F9D4;
      }
      goto L_0895F840;
    }
L_0895F840:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x0895F854u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6540)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0895F854u) goto L_0895F854;
    return;
L_0895F854:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F8D8;
      }
      goto L_0895F860;
    }
L_0895F860:
    ctx.gpr[31] = (0x0895F868u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 197u, 0x089ED474u>(ctx, &aot_mem) && ctx.pc == 0x0895F868u) goto L_0895F868;
    return;
L_0895F868:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895F8D8;
      }
      goto L_0895F878;
    }
L_0895F878:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6542)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F8D8;
      }
      goto L_0895F888;
    }
L_0895F888:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17184)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17184), ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176), ctx.gpr[5]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6540)));
    ctx.gpr[31] = (0x0895F8D8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 191u, 0x08958B00u>(ctx, &aot_mem) && ctx.pc == 0x0895F8D8u) goto L_0895F8D8;
    return;
L_0895F8D8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6540), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(596)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895F94C;
      }
      goto L_0895F8F0;
    }
L_0895F8F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0895F9D4;
      }
      goto L_0895F8F8;
    }
L_0895F8F8:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176), ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17184)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17184), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6542), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6540)));
    ctx.gpr[31] = (0x0895F944u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 447u, 0x08957150u>(ctx, &aot_mem) && ctx.pc == 0x0895F944u) goto L_0895F944;
    return;
L_0895F944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F9D4;
      }
      goto L_0895F94C;
    }
L_0895F94C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895F970;
      }
      goto L_0895F954;
    }
L_0895F954:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F980;
      }
      goto L_0895F960;
    }
L_0895F960:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6542), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F9D4;
      }
      goto L_0895F970;
    }
L_0895F970:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895F960;
      }
      goto L_0895F978;
    }
L_0895F978:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F9D4;
      }
      goto L_0895F980;
    }
L_0895F980:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176), ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17172)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17172), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6542), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6540)));
    ctx.gpr[31] = (0x0895F9CCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 447u, 0x08957150u>(ctx, &aot_mem) && ctx.pc == 0x0895F9CCu) goto L_0895F9CC;
    return;
L_0895F9CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F9D4;
      }
      goto L_0895F9D4;
    }
L_0895F9D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6540)));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895F9F4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0895F9F4u) goto L_0895F9F4;
    return;
L_0895F9F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 381u, 0x08961BC4u>(ctx, &aot_mem); return;
      }
      goto L_0895F9FC;
    }
L_0895F9FC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895FA14u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895FA14u) goto L_0895FA14;
    return;
L_0895FA14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FC5C;
      }
      goto L_0895FA48;
    }
L_0895FA48:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0895FA88u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 509u, 0x08AFE25Cu>(ctx, &aot_mem) && ctx.pc == 0x0895FA88u) goto L_0895FA88;
    return;
L_0895FA88:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6540)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0895FC3C;
      }
      goto L_0895FA9C;
    }
L_0895FA9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FC3C;
      }
      goto L_0895FAA8;
    }
L_0895FAA8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x0895FABCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6540)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0895FABCu) goto L_0895FABC;
    return;
L_0895FABC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FB40;
      }
      goto L_0895FAC8;
    }
L_0895FAC8:
    ctx.gpr[31] = (0x0895FAD0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 197u, 0x089ED474u>(ctx, &aot_mem) && ctx.pc == 0x0895FAD0u) goto L_0895FAD0;
    return;
L_0895FAD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895FB40;
      }
      goto L_0895FAE0;
    }
L_0895FAE0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6542)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FB40;
      }
      goto L_0895FAF0;
    }
L_0895FAF0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17184)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17184), ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176), ctx.gpr[5]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6540)));
    ctx.gpr[31] = (0x0895FB40u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 191u, 0x08958B00u>(ctx, &aot_mem) && ctx.pc == 0x0895FB40u) goto L_0895FB40;
    return;
L_0895FB40:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6540), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(596)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895FBB4;
      }
      goto L_0895FB58;
    }
L_0895FB58:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0895FC3C;
      }
      goto L_0895FB60;
    }
L_0895FB60:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176), ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17184)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17184), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6542), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6540)));
    ctx.gpr[31] = (0x0895FBACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 447u, 0x08957150u>(ctx, &aot_mem) && ctx.pc == 0x0895FBACu) goto L_0895FBAC;
    return;
L_0895FBAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FC3C;
      }
      goto L_0895FBB4;
    }
L_0895FBB4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895FBD8;
      }
      goto L_0895FBBC;
    }
L_0895FBBC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FBE8;
      }
      goto L_0895FBC8;
    }
L_0895FBC8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6542), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FC3C;
      }
      goto L_0895FBD8;
    }
L_0895FBD8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895FBC8;
      }
      goto L_0895FBE0;
    }
L_0895FBE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FC3C;
      }
      goto L_0895FBE8;
    }
L_0895FBE8:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176), ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17172)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17172), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6542), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6540)));
    ctx.gpr[31] = (0x0895FC34u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 447u, 0x08957150u>(ctx, &aot_mem) && ctx.pc == 0x0895FC34u) goto L_0895FC34;
    return;
L_0895FC34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FC3C;
      }
      goto L_0895FC3C;
    }
L_0895FC3C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6540)));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895FC5Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0895FC5Cu) goto L_0895FC5C;
    return;
L_0895FC5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 381u, 0x08961BC4u>(ctx, &aot_mem); return;
      }
      goto L_0895FC64;
    }
L_0895FC64:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895FC80u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895FC80u) goto L_0895FC80;
    return;
L_0895FC80:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x0895FC90u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0895FC90u) goto L_0895FC90;
    return;
L_0895FC90:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0895FCA4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0895FCA4u) goto L_0895FCA4;
    return;
L_0895FCA4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FCBC;
      }
      goto L_0895FCB4;
    }
L_0895FCB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_0895FCC0;
      }
      goto L_0895FCBC;
    }
L_0895FCBC:
    ctx.gpr[17] = (0u | 0u);
    goto L_0895FCC0;
L_0895FCC0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FCD8;
      }
      goto L_0895FCC8;
    }
L_0895FCC8:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0895FCD8;
      }
      goto L_0895FCD0;
    }
L_0895FCD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895FCDC;
      }
      goto L_0895FCD8;
    }
L_0895FCD8:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895FCDC;
L_0895FCDC:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895FD08;
      }
      goto L_0895FD00;
    }
L_0895FD00:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895FD58;
      }
      goto L_0895FD08;
    }
L_0895FD08:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895FD38;
    }
    goto L_0895FD24;
L_0895FD24:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895FD58;
      }
      goto L_0895FD38;
    }
L_0895FD38:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FD58;
      }
      goto L_0895FD54;
    }
L_0895FD54:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895FD58;
L_0895FD58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 381u, 0x08961BC4u>(ctx, &aot_mem); return;
      }
      goto L_0895FD60;
    }
L_0895FD60:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895FD7Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895FD7Cu) goto L_0895FD7C;
    return;
L_0895FD7C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0895FD8Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0895FD8Cu) goto L_0895FD8C;
    return;
L_0895FD8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FE0C;
      }
      goto L_0895FDC4;
    }
L_0895FDC4:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0895FE04;
      }
      goto L_0895FDFC;
    }
L_0895FDFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895FE10;
      }
      goto L_0895FE04;
    }
L_0895FE04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0895FE10;
      }
      goto L_0895FE0C;
    }
L_0895FE0C:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895FE10;
L_0895FE10:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895FE3C;
      }
      goto L_0895FE34;
    }
L_0895FE34:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895FE8C;
      }
      goto L_0895FE3C;
    }
L_0895FE3C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895FE6C;
    }
    goto L_0895FE58;
L_0895FE58:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895FE8C;
      }
      goto L_0895FE6C;
    }
L_0895FE6C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FE8C;
      }
      goto L_0895FE88;
    }
L_0895FE88:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895FE8C;
L_0895FE8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 381u, 0x08961BC4u>(ctx, &aot_mem); return;
      }
      goto L_0895FE94;
    }
L_0895FE94:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895FEACu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895FEACu) goto L_0895FEAC;
    return;
L_0895FEAC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x0895FEBCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0895FEBCu) goto L_0895FEBC;
    return;
L_0895FEBC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FED4;
      }
      goto L_0895FECC;
    }
L_0895FECC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_0895FED8;
      }
      goto L_0895FED4;
    }
L_0895FED4:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895FED8;
L_0895FED8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FF00;
      }
      goto L_0895FEE0;
    }
L_0895FEE0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895FF00;
      }
      goto L_0895FEF8;
    }
L_0895FEF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895FF04;
      }
      goto L_0895FF00;
    }
L_0895FF00:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895FF04;
L_0895FF04:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895FF30;
      }
      goto L_0895FF28;
    }
L_0895FF28:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895FF80;
      }
      goto L_0895FF30;
    }
L_0895FF30:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895FF60;
    }
    goto L_0895FF4C;
L_0895FF4C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895FF80;
      }
      goto L_0895FF60;
    }
L_0895FF60:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FF80;
      }
      goto L_0895FF7C;
    }
L_0895FF7C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895FF80;
L_0895FF80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 381u, 0x08961BC4u>(ctx, &aot_mem); return;
      }
      goto L_0895FF88;
    }
L_0895FF88:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895FFA0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895FFA0u) goto L_0895FFA0;
    return;
L_0895FFA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 5u, 0x0896005Cu>(ctx, &aot_mem); return;
      }
      goto L_0895FFD4;
    }
L_0895FFD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.pc = 0x08960000u; return;
}

void recomp_unit_0086(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0086_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_86(Runtime &runtime) {
    runtime.register_generated_unit(86u, 0x0895C000u, 16384u, &recomp_unit_0086, &recomp_unit_0086_entry);
    runtime.register_function(0x0895C000u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C014u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C028u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C044u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C04Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C074u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C07Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C098u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C10Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C11Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C124u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C13Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C170u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C180u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C200u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C214u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C230u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C238u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C260u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C268u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C284u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C298u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C314u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C31Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C338u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C34Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C368u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C370u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C398u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C3A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C3BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C3D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C3ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C3F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C404u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C440u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C450u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C458u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C46Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C480u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C498u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C4ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C4C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C4D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C4ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C500u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C518u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C52Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C540u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C558u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C56Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C580u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C598u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C5ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C5C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C5D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C5ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C600u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C618u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C62Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C640u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C658u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C66Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C680u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C698u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C6ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C6C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C6D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C6ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C700u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C718u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C72Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C740u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C758u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C75Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C784u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C7C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C7DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C7F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C804u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C81Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C830u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C844u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C85Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C870u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C884u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C89Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C8B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C8C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C8DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C8F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C904u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C920u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C934u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C948u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C960u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C974u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C988u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C9A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C9B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C9CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C9E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C9F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAD4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB14u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB30u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB98u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CBB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CBC8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CBDCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CBF4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC08u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC38u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC78u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCA0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCD0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCFCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD10u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDCCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE18u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CEB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CED4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CEE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFC8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFDCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D014u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D028u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D03Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D060u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D074u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D088u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D10Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D11Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D130u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D144u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D154u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D168u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D17Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D18Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D210u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D224u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D234u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D248u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D25Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D26Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D280u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D294u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D300u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D314u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D32Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D340u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D354u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D36Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D380u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D394u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D400u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D414u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D42Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D440u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D454u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D46Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D47Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D48Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D498u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D508u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D514u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D520u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D530u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D54Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D558u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D564u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D574u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D580u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D588u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D590u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D598u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D5BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D5CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D5D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D5E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D604u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D618u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D624u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D62Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D634u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D63Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D644u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D658u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D664u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D66Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D680u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D690u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D698u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D704u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D714u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D71Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D730u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D740u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D754u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D760u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D76Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D780u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D784u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D78Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D810u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D814u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D88Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D898u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D89Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D900u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D914u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D920u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D92Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D938u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D940u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D950u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D974u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D98Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D998u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA14u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA30u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA6Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA74u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAC8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAE0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB14u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB6Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC10u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC20u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC98u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DCA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DCBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DCCCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DCFCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD48u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD74u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDA8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDD4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDF4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE30u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE48u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DEA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DED4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DEECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF18u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF98u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFCCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFD4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFD8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFFCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E004u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E020u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E034u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E050u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E054u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E05Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E074u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E084u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E094u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E09Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E104u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E10Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E110u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E134u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E13Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E158u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E16Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E188u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E18Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E20Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E21Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E224u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E228u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E230u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E258u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E260u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E268u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E270u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E294u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E29Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E2A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E2A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E2CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E2D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E2F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E304u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E320u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E324u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E338u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E374u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E384u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E38Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E3A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E3ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E3B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E3C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E3CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E3DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E3E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E40Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E418u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E41Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E424u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E44Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E498u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E508u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E518u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E51Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E538u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E548u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E554u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E564u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E568u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E56Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E598u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E61Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E668u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E684u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E690u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E698u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E700u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E708u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E710u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E71Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E724u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E730u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E748u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E750u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E768u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E778u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E784u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E78Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E794u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E79Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E800u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E810u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E838u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E844u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E848u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E850u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E874u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E87Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E888u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E890u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E904u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E914u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E920u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E944u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E95Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E974u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E984u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E990u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA6Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAA0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EACCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB18u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB30u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBC8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBF4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC14u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC74u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ECA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ECACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ECB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ECD4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ECDCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ECF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDE0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE5Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EEB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EEBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EEC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EEC8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EEECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EEF4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF10u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFC8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFFCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F020u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F028u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F044u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F058u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F074u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F078u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F08Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F0C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F0D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F0E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F0F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F0FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F108u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F110u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F118u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F120u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F138u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F164u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F17Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F184u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F194u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F208u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F21Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F224u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F234u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F240u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F24Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F254u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F25Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F264u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F27Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F304u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F30Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F324u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F350u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F364u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F36Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F374u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F37Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F3ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F3B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F3D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F3E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F3ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F40Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F420u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F434u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F43Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F458u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F47Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F488u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F48Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F520u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F528u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F544u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F558u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F574u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F578u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F580u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F5A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F5B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F5CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F5E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F5FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F600u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F608u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F610u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F638u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F640u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F65Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F670u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F68Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F690u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F698u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F6A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F6A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F6D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F70Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F728u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F740u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F754u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F764u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F770u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F774u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F77Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F794u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F79Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F7ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F7B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F7C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F7CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F7E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F7F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F804u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F80Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F810u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F820u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F834u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F840u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F854u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F860u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F868u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F878u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F888u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F944u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F94Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F954u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F960u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F970u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F978u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F980u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F9CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F9D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F9F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F9FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA14u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA48u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FAA8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FABCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FAC8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FAD0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FAE0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FAF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBC8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBD8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBE0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC5Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCC8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCD0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCD8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCDCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD08u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD38u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FDC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FDFCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE10u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE6Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FEACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FEBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FECCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FED4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FED8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FEE0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FEF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF30u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FFA0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FFD4u, &recomp_unit_0086, "recomp_unit_0086");
}
} // namespace psprecomp
