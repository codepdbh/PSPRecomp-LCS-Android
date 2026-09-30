#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0180[4095] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0,
    0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 30, 31, 0, 32, 0, 0, 33, 0,
    0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 42,
    0, 43, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 50, 0, 51, 0, 0,
    0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 54, 0, 0, 55, 0, 0, 56, 0, 57, 58, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 66, 67, 0, 68, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 76, 77, 0, 78, 0, 0, 79, 0, 0, 0,
    0, 80, 0, 0, 81, 0, 82, 0, 83, 0, 0, 84, 0, 85, 0, 0, 86, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 93, 94, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0,
    0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 105, 0, 106, 0,
    107, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 116, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0,
    0, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0,
    0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0,
    0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0,
    148, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0, 155, 0, 0, 156, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 158, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0,
    166, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176,
    0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0,
    0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0,
    189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 198, 0,
    199, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0,
    206, 0, 0, 207, 0, 208, 0, 0, 209, 0, 210, 0, 211, 0, 212, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 219, 0, 0, 0, 0, 0,
    0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0,
    223, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 227, 0, 0, 0, 228, 0, 229, 0, 0, 230, 0, 231, 0, 0, 232, 0, 233,
    0, 0, 234, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 239, 240, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 245, 0,
    0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0,
    0, 248, 0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 252, 0, 253, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 258,
    0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0, 266, 0, 0, 267, 0, 268, 0, 269, 0,
    0, 270, 0, 0, 271, 0, 272, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 275, 0, 276, 0, 0, 277, 0, 0, 0, 278, 0, 0, 279, 0,
    0, 0, 280, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 287, 0, 288, 289,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 293, 0, 294, 0, 0, 295,
    0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 0,
    304, 0, 305, 0, 0, 306, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 311, 0, 312, 0, 0, 0, 0, 313,
    0, 314, 0, 0, 315, 0, 316, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0,
    0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 326, 0, 0, 327, 0, 328, 0, 0, 329, 0, 0, 0, 330, 0, 331, 0, 0, 332, 0, 333, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336,
    0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 340, 0, 0, 341, 0, 342, 0, 0, 0, 343, 0, 344, 0, 345, 0,
    0, 346, 0, 347, 0, 348, 0, 0, 349, 0, 0, 350, 0, 351, 0, 0, 352, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 356, 0,
    357, 0, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 369, 0,
    370, 0, 0, 0, 371, 0, 372, 373, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 377, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    381, 0, 382, 0, 383, 0, 0, 384, 0, 0, 0, 385, 0, 386, 0, 0, 0, 387, 0, 0, 388, 0, 0, 389, 0, 390, 0, 0, 0, 391, 0, 392,
    0, 0, 393, 0, 0, 394, 0, 395, 0, 396, 0, 397, 0, 0, 398, 0, 399, 0, 400, 0, 401, 0, 402, 0, 0, 403, 0, 404, 0, 0, 405, 0,
    406, 0, 407, 0, 0, 0, 0, 408, 0, 409, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 413, 0, 414, 0, 0, 0, 415, 0,
    416, 0, 417, 0, 418, 0, 419, 0, 420, 0, 421, 0, 422, 0, 423, 0, 424, 0, 425, 0, 426, 0, 427, 0, 0, 0, 0, 428, 0, 0, 429, 0,
    0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 433, 0, 434, 0, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 438,
    0, 439, 0, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 443, 0, 444, 0, 445, 0, 446, 0, 447, 0, 448, 0, 449, 0, 450, 0, 451, 0, 452,
    0, 453, 0, 454, 0, 455, 0, 456, 0, 457, 0, 0, 458, 0, 459, 460, 0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0,
    0, 465, 0, 466, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0, 470, 0, 0, 471, 0, 472, 0, 473, 0, 474, 0, 475, 0, 0, 476, 0, 477, 0,
    0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 482, 0, 483, 0,
    484, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 489, 0, 0, 490, 491, 0, 0, 0, 0, 492,
    0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0,
    497, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 500, 0, 501, 0, 502, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0,
    0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 508, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0, 0, 0, 512, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 514, 0, 515, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 518, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0,
    0, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0,
    0, 528, 0, 529, 0, 0, 0, 0, 530, 0, 531, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0,
    0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538,
    0, 0, 0, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 547, 0,
    0, 0, 0, 548, 0, 549, 0, 550, 0, 0, 0, 0, 0, 551, 0, 552, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 554, 0, 0, 555, 0, 0, 556, 0, 557, 558, 559, 0, 0, 0, 560, 0, 0, 0, 0, 561, 0, 562, 0, 563, 0, 0, 0, 564, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 0,
    0, 0, 0, 568, 0, 569, 0, 570, 0, 0, 0, 0, 571, 0, 572, 0, 573, 0, 0, 0, 0, 0, 574, 0, 575, 0, 576, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 580, 581, 582, 0, 0, 0, 583, 0, 0, 0, 0, 584,
    0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 592, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0, 0, 595, 596, 0, 597, 0, 0, 598, 0, 0, 0, 599, 0, 600, 0, 601, 0,
    0, 602, 0, 603, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 605, 0, 606, 0, 607, 0, 0, 0, 0, 0, 0, 608, 609, 0, 610, 0, 0,
    0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 614, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 616, 0,
    0, 617, 0, 0, 618, 0, 619, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0, 0, 624, 0,
    0, 0, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0,
    628, 0, 0, 0, 629, 0, 630, 0, 631, 0, 632, 0, 0, 633, 0, 0, 0, 0, 634, 635, 636, 0, 637, 0, 638, 0, 639, 0, 0, 0, 0, 0,
    640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 0, 0, 645, 0, 0, 0, 646, 0, 647, 0, 0, 648, 0,
    0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 653, 0,
    0, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 658, 0, 0, 659, 0, 660, 661, 0, 662, 0, 0, 663, 0, 0,
    664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 666, 0, 0, 667, 0, 668, 669, 670, 0, 0, 671, 0, 0, 0, 0, 672, 0, 0,
    0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 676, 0, 0, 677, 0, 678, 679, 0, 680, 0, 0, 681, 0,
    0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 684, 0, 0, 685, 0, 686, 687, 688, 0, 0, 689, 0, 0, 0, 0, 690, 0,
    0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0, 695, 0, 696, 697, 0, 698, 0, 0, 699, 0, 0, 700, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 702, 0, 0, 703, 0, 704, 705, 706, 0, 0, 707, 0, 0, 0, 0, 708, 0, 0,
    0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 712, 0, 0, 713, 0, 714, 715, 0, 716, 0, 0, 717, 0, 0, 718, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 719, 0, 0, 720, 0, 0, 721, 0, 722, 723, 724, 0, 0, 725, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 730, 0, 0, 731, 0, 732, 733, 0, 734, 0, 0, 735, 0, 0,
    736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 738, 0, 0, 739, 0, 740, 741, 742, 0, 0, 743, 0, 0, 0, 0, 744, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 748, 0, 0, 749, 0, 750, 751,
    0, 752, 0, 0, 753, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 756, 0, 0, 757, 0, 758, 759, 760, 0, 0,
    761, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0,
    766, 0, 0, 767, 0, 768, 769, 0, 770, 0, 0, 771, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 774, 0, 0,
    775, 0, 776, 777, 778, 0, 0, 779, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 783, 0, 0, 784, 0, 0, 785, 0, 0, 786, 0, 787, 788, 0, 789, 0, 0, 790, 0, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0,
    792, 0, 0, 793, 0, 0, 794, 0, 795, 796, 797, 0, 0, 798, 0, 0, 0, 0, 799, 0, 800, 0, 0, 801, 0, 0, 802, 0, 0, 803, 0, 804,
    805, 0, 806, 0, 0, 807, 0, 0, 808, 0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 0, 810, 0, 0, 811, 0, 812, 813, 814, 0, 0, 815,
};
void recomp_unit_0180_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AD4004u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0180[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AD4004;
    case 2u: goto L_08AD4010;
    case 3u: goto L_08AD403C;
    case 4u: goto L_08AD4048;
    case 5u: goto L_08AD4054;
    case 6u: goto L_08AD4060;
    case 7u: goto L_08AD406C;
    case 8u: goto L_08AD407C;
    case 9u: goto L_08AD4088;
    case 10u: goto L_08AD4094;
    case 11u: goto L_08AD40A0;
    case 12u: goto L_08AD40AC;
    case 13u: goto L_08AD40B4;
    case 14u: goto L_08AD40C0;
    case 15u: goto L_08AD40D4;
    case 16u: goto L_08AD40E0;
    case 17u: goto L_08AD40EC;
    case 18u: goto L_08AD40F8;
    case 19u: goto L_08AD4114;
    case 20u: goto L_08AD4160;
    case 21u: goto L_08AD4190;
    case 22u: goto L_08AD42A4;
    case 23u: goto L_08AD43D4;
    case 24u: goto L_08AD45B4;
    case 25u: goto L_08AD478C;
    case 26u: goto L_08AD4820;
    case 27u: goto L_08AD4844;
    case 28u: goto L_08AD4850;
    case 29u: goto L_08AD485C;
    case 30u: goto L_08AD4864;
    case 31u: goto L_08AD4868;
    case 32u: goto L_08AD4870;
    case 33u: goto L_08AD487C;
    case 34u: goto L_08AD4890;
    case 35u: goto L_08AD4898;
    case 36u: goto L_08AD48AC;
    case 37u: goto L_08AD48B4;
    case 38u: goto L_08AD48C8;
    case 39u: goto L_08AD48D0;
    case 40u: goto L_08AD48E4;
    case 41u: goto L_08AD48EC;
    case 42u: goto L_08AD4900;
    case 43u: goto L_08AD4908;
    case 44u: goto L_08AD491C;
    case 45u: goto L_08AD4924;
    case 46u: goto L_08AD4938;
    case 47u: goto L_08AD4940;
    case 48u: goto L_08AD4954;
    case 49u: goto L_08AD495C;
    case 50u: goto L_08AD4970;
    case 51u: goto L_08AD4978;
    case 52u: goto L_08AD498C;
    case 53u: goto L_08AD49A8;
    case 54u: goto L_08AD4A08;
    case 55u: goto L_08AD4A14;
    case 56u: goto L_08AD4A20;
    case 57u: goto L_08AD4A28;
    case 58u: goto L_08AD4A2C;
    case 59u: goto L_08AD4A34;
    case 60u: goto L_08AD4A40;
    case 61u: goto L_08AD4A54;
    case 62u: goto L_08AD4A70;
    case 63u: goto L_08AD4A98;
    case 64u: goto L_08AD4AA4;
    case 65u: goto L_08AD4AB0;
    case 66u: goto L_08AD4AB8;
    case 67u: goto L_08AD4ABC;
    case 68u: goto L_08AD4AC4;
    case 69u: goto L_08AD4AD0;
    case 70u: goto L_08AD4AE4;
    case 71u: goto L_08AD4AF0;
    case 72u: goto L_08AD4B14;
    case 73u: goto L_08AD4B3C;
    case 74u: goto L_08AD4B48;
    case 75u: goto L_08AD4B54;
    case 76u: goto L_08AD4B5C;
    case 77u: goto L_08AD4B60;
    case 78u: goto L_08AD4B68;
    case 79u: goto L_08AD4B74;
    case 80u: goto L_08AD4B88;
    case 81u: goto L_08AD4B94;
    case 82u: goto L_08AD4B9C;
    case 83u: goto L_08AD4BA4;
    case 84u: goto L_08AD4BB0;
    case 85u: goto L_08AD4BB8;
    case 86u: goto L_08AD4BC4;
    case 87u: goto L_08AD4BCC;
    case 88u: goto L_08AD4BD8;
    case 89u: goto L_08AD4BF8;
    case 90u: goto L_08AD4C1C;
    case 91u: goto L_08AD4C28;
    case 92u: goto L_08AD4C34;
    case 93u: goto L_08AD4C3C;
    case 94u: goto L_08AD4C40;
    case 95u: goto L_08AD4C48;
    case 96u: goto L_08AD4C54;
    case 97u: goto L_08AD4C68;
    case 98u: goto L_08AD4C70;
    case 99u: goto L_08AD4C78;
    case 100u: goto L_08AD4C90;
    case 101u: goto L_08AD4C9C;
    case 102u: goto L_08AD4CB8;
    case 103u: goto L_08AD4CE0;
    case 104u: goto L_08AD4CE8;
    case 105u: goto L_08AD4CF4;
    case 106u: goto L_08AD4CFC;
    case 107u: goto L_08AD4D04;
    case 108u: goto L_08AD4D10;
    case 109u: goto L_08AD4D18;
    case 110u: goto L_08AD4D48;
    case 111u: goto L_08AD4D5C;
    case 112u: goto L_08AD4D84;
    case 113u: goto L_08AD4D90;
    case 114u: goto L_08AD4D9C;
    case 115u: goto L_08AD4DA8;
    case 116u: goto L_08AD4DB4;
    case 117u: goto L_08AD4DB8;
    case 118u: goto L_08AD4DC0;
    case 119u: goto L_08AD4E60;
    case 120u: goto L_08AD4E74;
    case 121u: goto L_08AD4E98;
    case 122u: goto L_08AD4EBC;
    case 123u: goto L_08AD4ED8;
    case 124u: goto L_08AD4EE0;
    case 125u: goto L_08AD4EF8;
    case 126u: goto L_08AD4F0C;
    case 127u: goto L_08AD4F18;
    case 128u: goto L_08AD4F28;
    case 129u: goto L_08AD4F3C;
    case 130u: goto L_08AD4F48;
    case 131u: goto L_08AD4F58;
    case 132u: goto L_08AD4F6C;
    case 133u: goto L_08AD4F78;
    case 134u: goto L_08AD4F88;
    case 135u: goto L_08AD4F9C;
    case 136u: goto L_08AD4FA8;
    case 137u: goto L_08AD4FB8;
    case 138u: goto L_08AD4FCC;
    case 139u: goto L_08AD4FD8;
    case 140u: goto L_08AD4FE8;
    case 141u: goto L_08AD4FFC;
    case 142u: goto L_08AD5008;
    case 143u: goto L_08AD5018;
    case 144u: goto L_08AD5090;
    case 145u: goto L_08AD50BC;
    case 146u: goto L_08AD50E8;
    case 147u: goto L_08AD50FC;
    case 148u: goto L_08AD5104;
    case 149u: goto L_08AD510C;
    case 150u: goto L_08AD511C;
    case 151u: goto L_08AD5130;
    case 152u: goto L_08AD5144;
    case 153u: goto L_08AD5154;
    case 154u: goto L_08AD515C;
    case 155u: goto L_08AD5164;
    case 156u: goto L_08AD5170;
    case 157u: goto L_08AD5198;
    case 158u: goto L_08AD5210;
    case 159u: goto L_08AD5218;
    case 160u: goto L_08AD5224;
    case 161u: goto L_08AD5240;
    case 162u: goto L_08AD5248;
    case 163u: goto L_08AD5254;
    case 164u: goto L_08AD5270;
    case 165u: goto L_08AD5278;
    case 166u: goto L_08AD5284;
    case 167u: goto L_08AD528C;
    case 168u: goto L_08AD5298;
    case 169u: goto L_08AD52A8;
    case 170u: goto L_08AD52B0;
    case 171u: goto L_08AD52BC;
    case 172u: goto L_08AD52CC;
    case 173u: goto L_08AD52D4;
    case 174u: goto L_08AD52E0;
    case 175u: goto L_08AD52F0;
    case 176u: goto L_08AD5300;
    case 177u: goto L_08AD5310;
    case 178u: goto L_08AD5328;
    case 179u: goto L_08AD5334;
    case 180u: goto L_08AD5348;
    case 181u: goto L_08AD5354;
    case 182u: goto L_08AD537C;
    case 183u: goto L_08AD5388;
    case 184u: goto L_08AD5398;
    case 185u: goto L_08AD53C0;
    case 186u: goto L_08AD53CC;
    case 187u: goto L_08AD53DC;
    case 188u: goto L_08AD53FC;
    case 189u: goto L_08AD5404;
    case 190u: goto L_08AD5414;
    case 191u: goto L_08AD5430;
    case 192u: goto L_08AD544C;
    case 193u: goto L_08AD5454;
    case 194u: goto L_08AD545C;
    case 195u: goto L_08AD5464;
    case 196u: goto L_08AD546C;
    case 197u: goto L_08AD5474;
    case 198u: goto L_08AD547C;
    case 199u: goto L_08AD5484;
    case 200u: goto L_08AD548C;
    case 201u: goto L_08AD549C;
    case 202u: goto L_08AD54AC;
    case 203u: goto L_08AD54BC;
    case 204u: goto L_08AD54CC;
    case 205u: goto L_08AD54F8;
    case 206u: goto L_08AD5504;
    case 207u: goto L_08AD5510;
    case 208u: goto L_08AD5518;
    case 209u: goto L_08AD5524;
    case 210u: goto L_08AD552C;
    case 211u: goto L_08AD5534;
    case 212u: goto L_08AD553C;
    case 213u: goto L_08AD5540;
    case 214u: goto L_08AD5548;
    case 215u: goto L_08AD5550;
    case 216u: goto L_08AD5558;
    case 217u: goto L_08AD5560;
    case 218u: goto L_08AD5568;
    case 219u: goto L_08AD556C;
    case 220u: goto L_08AD5588;
    case 221u: goto L_08AD55DC;
    case 222u: goto L_08AD55FC;
    case 223u: goto L_08AD5604;
    case 224u: goto L_08AD5618;
    case 225u: goto L_08AD5628;
    case 226u: goto L_08AD5638;
    case 227u: goto L_08AD5640;
    case 228u: goto L_08AD5650;
    case 229u: goto L_08AD5658;
    case 230u: goto L_08AD5664;
    case 231u: goto L_08AD566C;
    case 232u: goto L_08AD5678;
    case 233u: goto L_08AD5680;
    case 234u: goto L_08AD568C;
    case 235u: goto L_08AD5694;
    case 236u: goto L_08AD56A8;
    case 237u: goto L_08AD56C8;
    case 238u: goto L_08AD56D4;
    case 239u: goto L_08AD56DC;
    case 240u: goto L_08AD56E0;
    case 241u: goto L_08AD5708;
    case 242u: goto L_08AD574C;
    case 243u: goto L_08AD5768;
    case 244u: goto L_08AD5778;
    case 245u: goto L_08AD577C;
    case 246u: goto L_08AD579C;
    case 247u: goto L_08AD57F4;
    case 248u: goto L_08AD5808;
    case 249u: goto L_08AD5810;
    case 250u: goto L_08AD581C;
    case 251u: goto L_08AD5824;
    case 252u: goto L_08AD5834;
    case 253u: goto L_08AD583C;
    case 254u: goto L_08AD5848;
    case 255u: goto L_08AD5850;
    case 256u: goto L_08AD586C;
    case 257u: goto L_08AD5874;
    case 258u: goto L_08AD5880;
    case 259u: goto L_08AD5888;
    case 260u: goto L_08AD5898;
    case 261u: goto L_08AD58A8;
    case 262u: goto L_08AD58B4;
    case 263u: goto L_08AD58BC;
    case 264u: goto L_08AD58C8;
    case 265u: goto L_08AD58D8;
    case 266u: goto L_08AD58E0;
    case 267u: goto L_08AD58EC;
    case 268u: goto L_08AD58F4;
    case 269u: goto L_08AD58FC;
    case 270u: goto L_08AD5908;
    case 271u: goto L_08AD5914;
    case 272u: goto L_08AD591C;
    case 273u: goto L_08AD5930;
    case 274u: goto L_08AD593C;
    case 275u: goto L_08AD594C;
    case 276u: goto L_08AD5954;
    case 277u: goto L_08AD5960;
    case 278u: goto L_08AD5970;
    case 279u: goto L_08AD597C;
    case 280u: goto L_08AD598C;
    case 281u: goto L_08AD5994;
    case 282u: goto L_08AD59A4;
    case 283u: goto L_08AD59B4;
    case 284u: goto L_08AD59C0;
    case 285u: goto L_08AD59D8;
    case 286u: goto L_08AD59E4;
    case 287u: goto L_08AD59F4;
    case 288u: goto L_08AD59FC;
    case 289u: goto L_08AD5A00;
    case 290u: goto L_08AD5A40;
    case 291u: goto L_08AD5A58;
    case 292u: goto L_08AD5A60;
    case 293u: goto L_08AD5A6C;
    case 294u: goto L_08AD5A74;
    case 295u: goto L_08AD5A80;
    case 296u: goto L_08AD5A90;
    case 297u: goto L_08AD5AA0;
    case 298u: goto L_08AD5AAC;
    case 299u: goto L_08AD5AB4;
    case 300u: goto L_08AD5ACC;
    case 301u: goto L_08AD5AD4;
    case 302u: goto L_08AD5AE0;
    case 303u: goto L_08AD5AE8;
    case 304u: goto L_08AD5B04;
    case 305u: goto L_08AD5B0C;
    case 306u: goto L_08AD5B18;
    case 307u: goto L_08AD5B20;
    case 308u: goto L_08AD5B34;
    case 309u: goto L_08AD5B50;
    case 310u: goto L_08AD5B58;
    case 311u: goto L_08AD5B64;
    case 312u: goto L_08AD5B6C;
    case 313u: goto L_08AD5B80;
    case 314u: goto L_08AD5B88;
    case 315u: goto L_08AD5B94;
    case 316u: goto L_08AD5B9C;
    case 317u: goto L_08AD5BA4;
    case 318u: goto L_08AD5BB0;
    case 319u: goto L_08AD5BD4;
    case 320u: goto L_08AD5BFC;
    case 321u: goto L_08AD5C0C;
    case 322u: goto L_08AD5C30;
    case 323u: goto L_08AD5C34;
    case 324u: goto L_08AD5C48;
    case 325u: goto L_08AD5C5C;
    case 326u: goto L_08AD5C88;
    case 327u: goto L_08AD5C94;
    case 328u: goto L_08AD5C9C;
    case 329u: goto L_08AD5CA8;
    case 330u: goto L_08AD5CB8;
    case 331u: goto L_08AD5CC0;
    case 332u: goto L_08AD5CCC;
    case 333u: goto L_08AD5CD4;
    case 334u: goto L_08AD5CE0;
    case 335u: goto L_08AD5CF0;
    case 336u: goto L_08AD5D00;
    case 337u: goto L_08AD5D10;
    case 338u: goto L_08AD5D34;
    case 339u: goto L_08AD5D3C;
    case 340u: goto L_08AD5D48;
    case 341u: goto L_08AD5D54;
    case 342u: goto L_08AD5D5C;
    case 343u: goto L_08AD5D6C;
    case 344u: goto L_08AD5D74;
    case 345u: goto L_08AD5D7C;
    case 346u: goto L_08AD5D88;
    case 347u: goto L_08AD5D90;
    case 348u: goto L_08AD5D98;
    case 349u: goto L_08AD5DA4;
    case 350u: goto L_08AD5DB0;
    case 351u: goto L_08AD5DB8;
    case 352u: goto L_08AD5DC4;
    case 353u: goto L_08AD5DD0;
    case 354u: goto L_08AD5DDC;
    case 355u: goto L_08AD5DE8;
    case 356u: goto L_08AD5DFC;
    case 357u: goto L_08AD5E04;
    case 358u: goto L_08AD5E14;
    case 359u: goto L_08AD5E20;
    case 360u: goto L_08AD5E2C;
    case 361u: goto L_08AD5E38;
    case 362u: goto L_08AD5E44;
    case 363u: goto L_08AD5E50;
    case 364u: goto L_08AD5E58;
    case 365u: goto L_08AD5E60;
    case 366u: goto L_08AD5E68;
    case 367u: goto L_08AD5E70;
    case 368u: goto L_08AD5E78;
    case 369u: goto L_08AD5E7C;
    case 370u: goto L_08AD5E84;
    case 371u: goto L_08AD5E94;
    case 372u: goto L_08AD5E9C;
    case 373u: goto L_08AD5EA0;
    case 374u: goto L_08AD5EAC;
    case 375u: goto L_08AD5EB8;
    case 376u: goto L_08AD5EC4;
    case 377u: goto L_08AD5ED0;
    case 378u: goto L_08AD5ED8;
    case 379u: goto L_08AD5EE0;
    case 380u: goto L_08AD5F10;
    case 381u: goto L_08AD5F84;
    case 382u: goto L_08AD5F8C;
    case 383u: goto L_08AD5F94;
    case 384u: goto L_08AD5FA0;
    case 385u: goto L_08AD5FB0;
    case 386u: goto L_08AD5FB8;
    case 387u: goto L_08AD5FC8;
    case 388u: goto L_08AD5FD4;
    case 389u: goto L_08AD5FE0;
    case 390u: goto L_08AD5FE8;
    case 391u: goto L_08AD5FF8;
    case 392u: goto L_08AD6000;
    case 393u: goto L_08AD600C;
    case 394u: goto L_08AD6018;
    case 395u: goto L_08AD6020;
    case 396u: goto L_08AD6028;
    case 397u: goto L_08AD6030;
    case 398u: goto L_08AD603C;
    case 399u: goto L_08AD6044;
    case 400u: goto L_08AD604C;
    case 401u: goto L_08AD6054;
    case 402u: goto L_08AD605C;
    case 403u: goto L_08AD6068;
    case 404u: goto L_08AD6070;
    case 405u: goto L_08AD607C;
    case 406u: goto L_08AD6084;
    case 407u: goto L_08AD608C;
    case 408u: goto L_08AD60A0;
    case 409u: goto L_08AD60A8;
    case 410u: goto L_08AD60B4;
    case 411u: goto L_08AD60C8;
    case 412u: goto L_08AD60D4;
    case 413u: goto L_08AD60E4;
    case 414u: goto L_08AD60EC;
    case 415u: goto L_08AD60FC;
    case 416u: goto L_08AD6104;
    case 417u: goto L_08AD610C;
    case 418u: goto L_08AD6114;
    case 419u: goto L_08AD611C;
    case 420u: goto L_08AD6124;
    case 421u: goto L_08AD612C;
    case 422u: goto L_08AD6134;
    case 423u: goto L_08AD613C;
    case 424u: goto L_08AD6144;
    case 425u: goto L_08AD614C;
    case 426u: goto L_08AD6154;
    case 427u: goto L_08AD615C;
    case 428u: goto L_08AD6170;
    case 429u: goto L_08AD617C;
    case 430u: goto L_08AD6188;
    case 431u: goto L_08AD61A8;
    case 432u: goto L_08AD61B4;
    case 433u: goto L_08AD61C4;
    case 434u: goto L_08AD61CC;
    case 435u: goto L_08AD61DC;
    case 436u: goto L_08AD61E8;
    case 437u: goto L_08AD61F4;
    case 438u: goto L_08AD6200;
    case 439u: goto L_08AD6208;
    case 440u: goto L_08AD6210;
    case 441u: goto L_08AD6220;
    case 442u: goto L_08AD6230;
    case 443u: goto L_08AD6238;
    case 444u: goto L_08AD6240;
    case 445u: goto L_08AD6248;
    case 446u: goto L_08AD6250;
    case 447u: goto L_08AD6258;
    case 448u: goto L_08AD6260;
    case 449u: goto L_08AD6268;
    case 450u: goto L_08AD6270;
    case 451u: goto L_08AD6278;
    case 452u: goto L_08AD6280;
    case 453u: goto L_08AD6288;
    case 454u: goto L_08AD6290;
    case 455u: goto L_08AD6298;
    case 456u: goto L_08AD62A0;
    case 457u: goto L_08AD62A8;
    case 458u: goto L_08AD62B4;
    case 459u: goto L_08AD62BC;
    case 460u: goto L_08AD62C0;
    case 461u: goto L_08AD62C8;
    case 462u: goto L_08AD62D0;
    case 463u: goto L_08AD62EC;
    case 464u: goto L_08AD62F8;
    case 465u: goto L_08AD6308;
    case 466u: goto L_08AD6310;
    case 467u: goto L_08AD631C;
    case 468u: goto L_08AD6328;
    case 469u: goto L_08AD6334;
    case 470u: goto L_08AD633C;
    case 471u: goto L_08AD6348;
    case 472u: goto L_08AD6350;
    case 473u: goto L_08AD6358;
    case 474u: goto L_08AD6360;
    case 475u: goto L_08AD6368;
    case 476u: goto L_08AD6374;
    case 477u: goto L_08AD637C;
    case 478u: goto L_08AD6388;
    case 479u: goto L_08AD63BC;
    case 480u: goto L_08AD63E4;
    case 481u: goto L_08AD63EC;
    case 482u: goto L_08AD63F4;
    case 483u: goto L_08AD63FC;
    case 484u: goto L_08AD6404;
    case 485u: goto L_08AD6414;
    case 486u: goto L_08AD6428;
    case 487u: goto L_08AD644C;
    case 488u: goto L_08AD6454;
    case 489u: goto L_08AD645C;
    case 490u: goto L_08AD6468;
    case 491u: goto L_08AD646C;
    case 492u: goto L_08AD6480;
    case 493u: goto L_08AD6488;
    case 494u: goto L_08AD6538;
    case 495u: goto L_08AD6558;
    case 496u: goto L_08AD6574;
    case 497u: goto L_08AD6584;
    case 498u: goto L_08AD65A8;
    case 499u: goto L_08AD65B8;
    case 500u: goto L_08AD65C4;
    case 501u: goto L_08AD65CC;
    case 502u: goto L_08AD65D4;
    case 503u: goto L_08AD65DC;
    case 504u: goto L_08AD65F4;
    case 505u: goto L_08AD6608;
    case 506u: goto L_08AD6624;
    case 507u: goto L_08AD662C;
    case 508u: goto L_08AD6638;
    case 509u: goto L_08AD6640;
    case 510u: goto L_08AD665C;
    case 511u: goto L_08AD6664;
    case 512u: goto L_08AD667C;
    case 513u: goto L_08AD66A8;
    case 514u: goto L_08AD66B4;
    case 515u: goto L_08AD66BC;
    case 516u: goto L_08AD66C4;
    case 517u: goto L_08AD66DC;
    case 518u: goto L_08AD6710;
    case 519u: goto L_08AD6718;
    case 520u: goto L_08AD6750;
    case 521u: goto L_08AD6758;
    case 522u: goto L_08AD6774;
    case 523u: goto L_08AD6790;
    case 524u: goto L_08AD6798;
    case 525u: goto L_08AD67C0;
    case 526u: goto L_08AD67CC;
    case 527u: goto L_08AD67F4;
    case 528u: goto L_08AD6808;
    case 529u: goto L_08AD6810;
    case 530u: goto L_08AD6824;
    case 531u: goto L_08AD682C;
    case 532u: goto L_08AD6834;
    case 533u: goto L_08AD6860;
    case 534u: goto L_08AD6878;
    case 535u: goto L_08AD6890;
    case 536u: goto L_08AD68BC;
    case 537u: goto L_08AD68D4;
    case 538u: goto L_08AD6900;
    case 539u: goto L_08AD691C;
    case 540u: goto L_08AD6928;
    case 541u: goto L_08AD6958;
    case 542u: goto L_08AD69A0;
    case 543u: goto L_08AD69C0;
    case 544u: goto L_08AD69D0;
    case 545u: goto L_08AD69EC;
    case 546u: goto L_08AD69F4;
    case 547u: goto L_08AD69FC;
    case 548u: goto L_08AD6A10;
    case 549u: goto L_08AD6A18;
    case 550u: goto L_08AD6A20;
    case 551u: goto L_08AD6A38;
    case 552u: goto L_08AD6A40;
    case 553u: goto L_08AD6A48;
    case 554u: goto L_08AD6A90;
    case 555u: goto L_08AD6A9C;
    case 556u: goto L_08AD6AA8;
    case 557u: goto L_08AD6AB0;
    case 558u: goto L_08AD6AB4;
    case 559u: goto L_08AD6AB8;
    case 560u: goto L_08AD6AC8;
    case 561u: goto L_08AD6ADC;
    case 562u: goto L_08AD6AE4;
    case 563u: goto L_08AD6AEC;
    case 564u: goto L_08AD6AFC;
    case 565u: goto L_08AD6B44;
    case 566u: goto L_08AD6B64;
    case 567u: goto L_08AD6B74;
    case 568u: goto L_08AD6B90;
    case 569u: goto L_08AD6B98;
    case 570u: goto L_08AD6BA0;
    case 571u: goto L_08AD6BB4;
    case 572u: goto L_08AD6BBC;
    case 573u: goto L_08AD6BC4;
    case 574u: goto L_08AD6BDC;
    case 575u: goto L_08AD6BE4;
    case 576u: goto L_08AD6BEC;
    case 577u: goto L_08AD6C34;
    case 578u: goto L_08AD6C40;
    case 579u: goto L_08AD6C4C;
    case 580u: goto L_08AD6C54;
    case 581u: goto L_08AD6C58;
    case 582u: goto L_08AD6C5C;
    case 583u: goto L_08AD6C6C;
    case 584u: goto L_08AD6C80;
    case 585u: goto L_08AD6C88;
    case 586u: goto L_08AD6CAC;
    case 587u: goto L_08AD6CE4;
    case 588u: goto L_08AD6CF0;
    case 589u: goto L_08AD6D18;
    case 590u: goto L_08AD6D30;
    case 591u: goto L_08AD6DE0;
    case 592u: goto L_08AD6DF4;
    case 593u: goto L_08AD6E20;
    case 594u: goto L_08AD6E34;
    case 595u: goto L_08AD6E44;
    case 596u: goto L_08AD6E48;
    case 597u: goto L_08AD6E50;
    case 598u: goto L_08AD6E5C;
    case 599u: goto L_08AD6E6C;
    case 600u: goto L_08AD6E74;
    case 601u: goto L_08AD6E7C;
    case 602u: goto L_08AD6E88;
    case 603u: goto L_08AD6E90;
    case 604u: goto L_08AD6EA0;
    case 605u: goto L_08AD6EC0;
    case 606u: goto L_08AD6EC8;
    case 607u: goto L_08AD6ED0;
    case 608u: goto L_08AD6EEC;
    case 609u: goto L_08AD6EF0;
    case 610u: goto L_08AD6EF8;
    case 611u: goto L_08AD6F08;
    case 612u: goto L_08AD6F10;
    case 613u: goto L_08AD6F34;
    case 614u: goto L_08AD6F50;
    case 615u: goto L_08AD6F5C;
    case 616u: goto L_08AD6F7C;
    case 617u: goto L_08AD6F88;
    case 618u: goto L_08AD6F94;
    case 619u: goto L_08AD6F9C;
    case 620u: goto L_08AD6FB0;
    case 621u: goto L_08AD7024;
    case 622u: goto L_08AD7054;
    case 623u: goto L_08AD7070;
    case 624u: goto L_08AD707C;
    case 625u: goto L_08AD7098;
    case 626u: goto L_08AD70A8;
    case 627u: goto L_08AD70E0;
    case 628u: goto L_08AD7104;
    case 629u: goto L_08AD7114;
    case 630u: goto L_08AD711C;
    case 631u: goto L_08AD7124;
    case 632u: goto L_08AD712C;
    case 633u: goto L_08AD7138;
    case 634u: goto L_08AD714C;
    case 635u: goto L_08AD7150;
    case 636u: goto L_08AD7154;
    case 637u: goto L_08AD715C;
    case 638u: goto L_08AD7164;
    case 639u: goto L_08AD716C;
    case 640u: goto L_08AD7184;
    case 641u: goto L_08AD71D8;
    case 642u: goto L_08AD71F0;
    case 643u: goto L_08AD7230;
    case 644u: goto L_08AD7240;
    case 645u: goto L_08AD7258;
    case 646u: goto L_08AD7268;
    case 647u: goto L_08AD7270;
    case 648u: goto L_08AD727C;
    case 649u: goto L_08AD7294;
    case 650u: goto L_08AD72B8;
    case 651u: goto L_08AD72C4;
    case 652u: goto L_08AD72DC;
    case 653u: goto L_08AD72FC;
    case 654u: goto L_08AD7314;
    case 655u: goto L_08AD7324;
    case 656u: goto L_08AD7358;
    case 657u: goto L_08AD73C0;
    case 658u: goto L_08AD73CC;
    case 659u: goto L_08AD73D8;
    case 660u: goto L_08AD73E0;
    case 661u: goto L_08AD73E4;
    case 662u: goto L_08AD73EC;
    case 663u: goto L_08AD73F8;
    case 664u: goto L_08AD7404;
    case 665u: goto L_08AD7430;
    case 666u: goto L_08AD743C;
    case 667u: goto L_08AD7448;
    case 668u: goto L_08AD7450;
    case 669u: goto L_08AD7454;
    case 670u: goto L_08AD7458;
    case 671u: goto L_08AD7464;
    case 672u: goto L_08AD7478;
    case 673u: goto L_08AD749C;
    case 674u: goto L_08AD74DC;
    case 675u: goto L_08AD7544;
    case 676u: goto L_08AD7550;
    case 677u: goto L_08AD755C;
    case 678u: goto L_08AD7564;
    case 679u: goto L_08AD7568;
    case 680u: goto L_08AD7570;
    case 681u: goto L_08AD757C;
    case 682u: goto L_08AD7588;
    case 683u: goto L_08AD75B4;
    case 684u: goto L_08AD75C0;
    case 685u: goto L_08AD75CC;
    case 686u: goto L_08AD75D4;
    case 687u: goto L_08AD75D8;
    case 688u: goto L_08AD75DC;
    case 689u: goto L_08AD75E8;
    case 690u: goto L_08AD75FC;
    case 691u: goto L_08AD7620;
    case 692u: goto L_08AD7660;
    case 693u: goto L_08AD76B0;
    case 694u: goto L_08AD76BC;
    case 695u: goto L_08AD76C8;
    case 696u: goto L_08AD76D0;
    case 697u: goto L_08AD76D4;
    case 698u: goto L_08AD76DC;
    case 699u: goto L_08AD76E8;
    case 700u: goto L_08AD76F4;
    case 701u: goto L_08AD7730;
    case 702u: goto L_08AD773C;
    case 703u: goto L_08AD7748;
    case 704u: goto L_08AD7750;
    case 705u: goto L_08AD7754;
    case 706u: goto L_08AD7758;
    case 707u: goto L_08AD7764;
    case 708u: goto L_08AD7778;
    case 709u: goto L_08AD7788;
    case 710u: goto L_08AD77C0;
    case 711u: goto L_08AD7828;
    case 712u: goto L_08AD7834;
    case 713u: goto L_08AD7840;
    case 714u: goto L_08AD7848;
    case 715u: goto L_08AD784C;
    case 716u: goto L_08AD7854;
    case 717u: goto L_08AD7860;
    case 718u: goto L_08AD786C;
    case 719u: goto L_08AD789C;
    case 720u: goto L_08AD78A8;
    case 721u: goto L_08AD78B4;
    case 722u: goto L_08AD78BC;
    case 723u: goto L_08AD78C0;
    case 724u: goto L_08AD78C4;
    case 725u: goto L_08AD78D0;
    case 726u: goto L_08AD78E4;
    case 727u: goto L_08AD790C;
    case 728u: goto L_08AD794C;
    case 729u: goto L_08AD79C0;
    case 730u: goto L_08AD79CC;
    case 731u: goto L_08AD79D8;
    case 732u: goto L_08AD79E0;
    case 733u: goto L_08AD79E4;
    case 734u: goto L_08AD79EC;
    case 735u: goto L_08AD79F8;
    case 736u: goto L_08AD7A04;
    case 737u: goto L_08AD7A34;
    case 738u: goto L_08AD7A40;
    case 739u: goto L_08AD7A4C;
    case 740u: goto L_08AD7A54;
    case 741u: goto L_08AD7A58;
    case 742u: goto L_08AD7A5C;
    case 743u: goto L_08AD7A68;
    case 744u: goto L_08AD7A7C;
    case 745u: goto L_08AD7AA4;
    case 746u: goto L_08AD7AE8;
    case 747u: goto L_08AD7B5C;
    case 748u: goto L_08AD7B68;
    case 749u: goto L_08AD7B74;
    case 750u: goto L_08AD7B7C;
    case 751u: goto L_08AD7B80;
    case 752u: goto L_08AD7B88;
    case 753u: goto L_08AD7B94;
    case 754u: goto L_08AD7BA0;
    case 755u: goto L_08AD7BD0;
    case 756u: goto L_08AD7BDC;
    case 757u: goto L_08AD7BE8;
    case 758u: goto L_08AD7BF0;
    case 759u: goto L_08AD7BF4;
    case 760u: goto L_08AD7BF8;
    case 761u: goto L_08AD7C04;
    case 762u: goto L_08AD7C18;
    case 763u: goto L_08AD7C40;
    case 764u: goto L_08AD7C84;
    case 765u: goto L_08AD7CF8;
    case 766u: goto L_08AD7D04;
    case 767u: goto L_08AD7D10;
    case 768u: goto L_08AD7D18;
    case 769u: goto L_08AD7D1C;
    case 770u: goto L_08AD7D24;
    case 771u: goto L_08AD7D30;
    case 772u: goto L_08AD7D3C;
    case 773u: goto L_08AD7D6C;
    case 774u: goto L_08AD7D78;
    case 775u: goto L_08AD7D84;
    case 776u: goto L_08AD7D8C;
    case 777u: goto L_08AD7D90;
    case 778u: goto L_08AD7D94;
    case 779u: goto L_08AD7DA0;
    case 780u: goto L_08AD7DB4;
    case 781u: goto L_08AD7DDC;
    case 782u: goto L_08AD7E20;
    case 783u: goto L_08AD7E90;
    case 784u: goto L_08AD7E9C;
    case 785u: goto L_08AD7EA8;
    case 786u: goto L_08AD7EB4;
    case 787u: goto L_08AD7EBC;
    case 788u: goto L_08AD7EC0;
    case 789u: goto L_08AD7EC8;
    case 790u: goto L_08AD7ED4;
    case 791u: goto L_08AD7EE0;
    case 792u: goto L_08AD7F04;
    case 793u: goto L_08AD7F10;
    case 794u: goto L_08AD7F1C;
    case 795u: goto L_08AD7F24;
    case 796u: goto L_08AD7F28;
    case 797u: goto L_08AD7F2C;
    case 798u: goto L_08AD7F38;
    case 799u: goto L_08AD7F4C;
    case 800u: goto L_08AD7F54;
    case 801u: goto L_08AD7F60;
    case 802u: goto L_08AD7F6C;
    case 803u: goto L_08AD7F78;
    case 804u: goto L_08AD7F80;
    case 805u: goto L_08AD7F84;
    case 806u: goto L_08AD7F8C;
    case 807u: goto L_08AD7F98;
    case 808u: goto L_08AD7FA4;
    case 809u: goto L_08AD7FC8;
    case 810u: goto L_08AD7FD4;
    case 811u: goto L_08AD7FE0;
    case 812u: goto L_08AD7FE8;
    case 813u: goto L_08AD7FEC;
    case 814u: goto L_08AD7FF0;
    case 815u: goto L_08AD7FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AD4004:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4010:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD403Cu);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_08AD42A4;
L_08AD403C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AD4048u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD4048u) goto L_08AD4048;
    return;
L_08AD4048:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08AD4054u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD4054u) goto L_08AD4054;
    return;
L_08AD4054:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AD4060u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD4060u) goto L_08AD4060;
    return;
L_08AD4060:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AD406Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD406Cu) goto L_08AD406C;
    return;
L_08AD406C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD40B4;
      }
      goto L_08AD407C;
    }
L_08AD407C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD40B4;
      }
      goto L_08AD4088;
    }
L_08AD4088:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD40B4;
      }
      goto L_08AD4094;
    }
L_08AD4094:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD40B4;
      }
      goto L_08AD40A0;
    }
L_08AD40A0:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08AD40ACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD40ACu) goto L_08AD40AC;
    return;
L_08AD40AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD40C0;
      }
      goto L_08AD40B4;
    }
L_08AD40B4:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08AD40C0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD40C0u) goto L_08AD40C0;
    return;
L_08AD40C0:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD40D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15264));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868074u>(ctx, &aot_mem) && ctx.pc == 0x08AD40D4u) goto L_08AD40D4;
    return;
L_08AD40D4:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AD40E0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD40E0u) goto L_08AD40E0;
    return;
L_08AD40E0:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AD40ECu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD40ECu) goto L_08AD40EC;
    return;
L_08AD40EC:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08AD40F8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AD40F8u) goto L_08AD40F8;
    return;
L_08AD40F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4114:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AD4190;
      }
      goto L_08AD4160;
    }
L_08AD4160:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29100)));
    ctx.gpr[4] = (2230u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29096)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AD4190;
L_08AD4190:
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5644)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15264));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-15264), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (0u | 32768u);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[2]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[2]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[4]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD42A4:
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[8] = (2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-5644)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-15264));
    ctx.fpr[0] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(-15264), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[19] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[19]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[6] = (0u | 32768u);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD43D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[10] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (2230u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-29100)));
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-29096)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.gpr[4] = (18176u << 16u);
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.gpr[10] = (2277u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[1]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(-15264));
    ctx.fpr[7] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[7];
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5644)));
    ctx.fpr[2] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[2]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[7];
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.fpr[1] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(-15264), static_cast<std::uint16_t>(ctx.gpr[3]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[10]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[3]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[7];
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[7];
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[7]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[7];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.fpr[13] = ctx.fpr[19] + ctx.fpr[7];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[7]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[7];
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[7];
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[4]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD45B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[11] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (2230u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-29100)));
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-29096)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5644)));
    ctx.gpr[5] = (18176u << 16u);
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[7] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16128u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[8] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[1]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[8];
    ctx.fpr[2] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[2]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[8];
    ctx.fpr[5] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[3]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[8];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[8];
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[8];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1)));
    ctx.fpr[13] = ctx.fpr[19] + ctx.fpr[8];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(2)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[11]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[8];
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[8];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD478C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29132)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29136)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29108)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2230u << 16u);
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[3] = (2230u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-29128), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2230u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29124), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-29104), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4820:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AD4870;
      }
      goto L_08AD4844;
    }
L_08AD4844:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4850u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4850u) goto L_08AD4850;
    return;
L_08AD4850:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4868;
      }
      goto L_08AD485C;
    }
L_08AD485C:
    ctx.gpr[31] = (0x08AD4864u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD4864u) goto L_08AD4864;
    return;
L_08AD4864:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AD4868;
L_08AD4868:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08AD4870;
L_08AD4870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AD487Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11376));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD487Cu) goto L_08AD487C;
    return;
L_08AD487C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4890u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4890u) goto L_08AD4890;
    return;
L_08AD4890:
    ctx.gpr[31] = (0x08AD4898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4898u) goto L_08AD4898;
    return;
L_08AD4898:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD48ACu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD48ACu) goto L_08AD48AC;
    return;
L_08AD48AC:
    ctx.gpr[31] = (0x08AD48B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AD48B4u) goto L_08AD48B4;
    return;
L_08AD48B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x08AD48C8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD48C8u) goto L_08AD48C8;
    return;
L_08AD48C8:
    ctx.gpr[31] = (0x08AD48D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AD48D0u) goto L_08AD48D0;
    return;
L_08AD48D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 23u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x08AD48E4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD48E4u) goto L_08AD48E4;
    return;
L_08AD48E4:
    ctx.gpr[31] = (0x08AD48ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AD48ECu) goto L_08AD48EC;
    return;
L_08AD48EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[31] = (0x08AD4900u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4900u) goto L_08AD4900;
    return;
L_08AD4900:
    ctx.gpr[31] = (0x08AD4908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4908u) goto L_08AD4908;
    return;
L_08AD4908:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 28u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08AD491Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD491Cu) goto L_08AD491C;
    return;
L_08AD491C:
    ctx.gpr[31] = (0x08AD4924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4924u) goto L_08AD4924;
    return;
L_08AD4924:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08AD4938u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4938u) goto L_08AD4938;
    return;
L_08AD4938:
    ctx.gpr[31] = (0x08AD4940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4940u) goto L_08AD4940;
    return;
L_08AD4940:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08AD4954u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4954u) goto L_08AD4954;
    return;
L_08AD4954:
    ctx.gpr[31] = (0x08AD495Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AD495Cu) goto L_08AD495C;
    return;
L_08AD495C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08AD4970u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4970u) goto L_08AD4970;
    return;
L_08AD4970:
    ctx.gpr[31] = (0x08AD4978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4978u) goto L_08AD4978;
    return;
L_08AD4978:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 31u);
    ctx.gpr[6] = (0u | 200u);
    ctx.gpr[31] = (0x08AD498Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD498Cu) goto L_08AD498C;
    return;
L_08AD498C:
    ctx.gpr[2] = (0u | 0u);
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
L_08AD49A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12144));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AD4A34;
      }
      goto L_08AD4A08;
    }
L_08AD4A08:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4A14u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4A14u) goto L_08AD4A14;
    return;
L_08AD4A14:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4A2C;
      }
      goto L_08AD4A20;
    }
L_08AD4A20:
    ctx.gpr[31] = (0x08AD4A28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD4A28u) goto L_08AD4A28;
    return;
L_08AD4A28:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AD4A2C;
L_08AD4A2C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08AD4A34;
L_08AD4A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AD4A40u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4A40u) goto L_08AD4A40;
    return;
L_08AD4A40:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4A54u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4A54u) goto L_08AD4A54;
    return;
L_08AD4A54:
    ctx.gpr[2] = (0u | 0u);
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
L_08AD4A70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AD4AC4;
      }
      goto L_08AD4A98;
    }
L_08AD4A98:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4AA4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4AA4u) goto L_08AD4AA4;
    return;
L_08AD4AA4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4ABC;
      }
      goto L_08AD4AB0;
    }
L_08AD4AB0:
    ctx.gpr[31] = (0x08AD4AB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD4AB8u) goto L_08AD4AB8;
    return;
L_08AD4AB8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AD4ABC;
L_08AD4ABC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08AD4AC4;
L_08AD4AC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AD4AD0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11360));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4AD0u) goto L_08AD4AD0;
    return;
L_08AD4AD0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4AE4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4AE4u) goto L_08AD4AE4;
    return;
L_08AD4AE4:
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[31] = (0x08AD4AF0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4AF0u) goto L_08AD4AF0;
    return;
L_08AD4AF0:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[2] = (0u | 0u);
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
L_08AD4B14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AD4B68;
      }
      goto L_08AD4B3C;
    }
L_08AD4B3C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4B48u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4B48u) goto L_08AD4B48;
    return;
L_08AD4B48:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4B60;
      }
      goto L_08AD4B54;
    }
L_08AD4B54:
    ctx.gpr[31] = (0x08AD4B5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD4B5Cu) goto L_08AD4B5C;
    return;
L_08AD4B5C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AD4B60;
L_08AD4B60:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08AD4B68;
L_08AD4B68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AD4B74u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11352));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4B74u) goto L_08AD4B74;
    return;
L_08AD4B74:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4B88u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4B88u) goto L_08AD4B88;
    return;
L_08AD4B88:
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[31] = (0x08AD4B94u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4B94u) goto L_08AD4B94;
    return;
L_08AD4B94:
    ctx.gpr[31] = (0x08AD4B9Cu);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4B9Cu) goto L_08AD4B9C;
    return;
L_08AD4B9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4BD8;
      }
      goto L_08AD4BA4;
    }
L_08AD4BA4:
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[31] = (0x08AD4BB0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4BB0u) goto L_08AD4BB0;
    return;
L_08AD4BB0:
    ctx.gpr[31] = (0x08AD4BB8u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4BB8u) goto L_08AD4BB8;
    return;
L_08AD4BB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4BD8;
      }
      goto L_08AD4BC4;
    }
L_08AD4BC4:
    ctx.gpr[31] = (0x08AD4BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4BCCu) goto L_08AD4BCC;
    return;
L_08AD4BCC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x08AD4BD8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 216u, 0x08A292D4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4BD8u) goto L_08AD4BD8;
    return;
L_08AD4BD8:
    ctx.gpr[2] = (0u | 0u);
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
L_08AD4BF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AD4C48;
      }
      goto L_08AD4C1C;
    }
L_08AD4C1C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4C28u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4C28u) goto L_08AD4C28;
    return;
L_08AD4C28:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4C40;
      }
      goto L_08AD4C34;
    }
L_08AD4C34:
    ctx.gpr[31] = (0x08AD4C3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD4C3Cu) goto L_08AD4C3C;
    return;
L_08AD4C3C:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08AD4C40;
L_08AD4C40:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08AD4C48;
L_08AD4C48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AD4C54u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11344));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4C54u) goto L_08AD4C54;
    return;
L_08AD4C54:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4C68u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4C68u) goto L_08AD4C68;
    return;
L_08AD4C68:
    ctx.gpr[31] = (0x08AD4C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4C70u) goto L_08AD4C70;
    return;
L_08AD4C70:
    ctx.gpr[31] = (0x08AD4C78u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4C78u) goto L_08AD4C78;
    return;
L_08AD4C78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08AD4C90;
    }
    goto L_08AD4C90;
L_08AD4C90:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD4C9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 204u, 0x08944DF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4C9Cu) goto L_08AD4C9C;
    return;
L_08AD4C9C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4CB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD4CE0u);
    ctx.gpr[19] = (0u | 162u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD4CE0u) goto L_08AD4CE0;
    return;
L_08AD4CE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4CFC;
      }
      goto L_08AD4CE8;
    }
L_08AD4CE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4CF4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08AD4CF4u) goto L_08AD4CF4;
    return;
L_08AD4CF4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AD4CFC;
L_08AD4CFC:
    ctx.gpr[31] = (0x08AD4D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 561u, 0x089C661Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4D04u) goto L_08AD4D04;
    return;
L_08AD4D04:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD4D10u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AD4D10u) goto L_08AD4D10;
    return;
L_08AD4D10:
    ctx.gpr[31] = (0x08AD4D18u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08AD4D18u) goto L_08AD4D18;
    return;
L_08AD4D18:
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4E98;
      }
      goto L_08AD4D48;
    }
L_08AD4D48:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4D5Cu);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26612)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4D5Cu) goto L_08AD4D5C;
    return;
L_08AD4D5C:
    ctx.gpr[11] = (17096u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4D84u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 369u, 0x0897572Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4D84u) goto L_08AD4D84;
    return;
L_08AD4D84:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AD4E98;
      }
      goto L_08AD4D90;
    }
L_08AD4D90:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4D9Cu);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4D9Cu) goto L_08AD4D9C;
    return;
L_08AD4D9C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AD4DB8;
      }
      goto L_08AD4DA8;
    }
L_08AD4DA8:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD4DB4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x08AD4DB4u) goto L_08AD4DB4;
    return;
L_08AD4DB4:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    goto L_08AD4DB8;
L_08AD4DB8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4E98;
      }
      goto L_08AD4DC0;
    }
L_08AD4DC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (16479u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4E60u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD4E60u) goto L_08AD4E60;
    return;
L_08AD4E60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (0x08AD4E74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08AD4E74u) goto L_08AD4E74;
    return;
L_08AD4E74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AD4E98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4E98u) goto L_08AD4E98;
    return;
L_08AD4E98:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4EBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4EE0;
      }
      goto L_08AD4ED8;
    }
L_08AD4ED8:
    ctx.gpr[31] = (0x08AD4EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4EE0u) goto L_08AD4EE0;
    return;
L_08AD4EE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11336));
    ctx.gpr[31] = (0x08AD4EF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08AD4EF8u) goto L_08AD4EF8;
    return;
L_08AD4EF8:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4F0Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18464));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x08AD4F0Cu) goto L_08AD4F0C;
    return;
L_08AD4F0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4F18u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x08AD4F18u) goto L_08AD4F18;
    return;
L_08AD4F18:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4F28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11320));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08AD4F28u) goto L_08AD4F28;
    return;
L_08AD4F28:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4F3Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18856));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x08AD4F3Cu) goto L_08AD4F3C;
    return;
L_08AD4F3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4F48u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x08AD4F48u) goto L_08AD4F48;
    return;
L_08AD4F48:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4F58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11308));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08AD4F58u) goto L_08AD4F58;
    return;
L_08AD4F58:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4F6Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19056));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x08AD4F6Cu) goto L_08AD4F6C;
    return;
L_08AD4F6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4F78u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x08AD4F78u) goto L_08AD4F78;
    return;
L_08AD4F78:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4F88u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11296));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08AD4F88u) goto L_08AD4F88;
    return;
L_08AD4F88:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4F9Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19220));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x08AD4F9Cu) goto L_08AD4F9C;
    return;
L_08AD4F9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4FA8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x08AD4FA8u) goto L_08AD4FA8;
    return;
L_08AD4FA8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4FB8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11284));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08AD4FB8u) goto L_08AD4FB8;
    return;
L_08AD4FB8:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4FCCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19448));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x08AD4FCCu) goto L_08AD4FCC;
    return;
L_08AD4FCC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4FD8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x08AD4FD8u) goto L_08AD4FD8;
    return;
L_08AD4FD8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4FE8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11272));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08AD4FE8u) goto L_08AD4FE8;
    return;
L_08AD4FE8:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4FFCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19640));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x08AD4FFCu) goto L_08AD4FFC;
    return;
L_08AD4FFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5008u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x08AD5008u) goto L_08AD5008;
    return;
L_08AD5008:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5018:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29084)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29088)));
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
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-29080), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-29072), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-29076), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29068), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29064), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5090:
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
L_08AD50BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 11u);
    ctx.gpr[8] = (0u + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (0u | 2048u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD50E8u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 37u, 0x088B829Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD50E8u) goto L_08AD50E8;
    return;
L_08AD50E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5104;
      }
      goto L_08AD50FC;
    }
L_08AD50FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AD510C;
      }
      goto L_08AD5104;
    }
L_08AD5104:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    goto L_08AD510C;
L_08AD510C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD511C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD5130u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08AD5170;
L_08AD5130:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5144:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08AD5164;
      }
      goto L_08AD5154;
    }
L_08AD5154:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5164;
      }
      goto L_08AD515C;
    }
L_08AD515C:
    ctx.gpr[31] = (0x08AD5164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AD5164u) goto L_08AD5164;
    return;
L_08AD5164:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5170:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD5198u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11248));
    goto L_08AD5090;
L_08AD5198:
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (90u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), 0u);
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(468), 0u);
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(472), 0u);
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(464));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD5210u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11228));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 400u, 0x08A2D988u>(ctx, &aot_mem) && ctx.pc == 0x08AD5210u) goto L_08AD5210;
    return;
L_08AD5210:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AD5224;
      }
      goto L_08AD5218;
    }
L_08AD5218:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5224u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11208));
    goto L_08AD5090;
L_08AD5224:
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(468));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD5240u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11164));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 400u, 0x08A2D988u>(ctx, &aot_mem) && ctx.pc == 0x08AD5240u) goto L_08AD5240;
    return;
L_08AD5240:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5254;
      }
      goto L_08AD5248;
    }
L_08AD5248:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5254u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11144));
    goto L_08AD5090;
L_08AD5254:
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(472));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x08AD5270u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11104));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 400u, 0x08A2D988u>(ctx, &aot_mem) && ctx.pc == 0x08AD5270u) goto L_08AD5270;
    return;
L_08AD5270:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5284;
      }
      goto L_08AD5278;
    }
L_08AD5278:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5284u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11088));
    goto L_08AD5090;
L_08AD5284:
    ctx.gpr[31] = (0x08AD528Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.pc = 0x08B0B82Cu;
    return;
L_08AD528C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD52A8;
      }
      goto L_08AD5298;
    }
L_08AD5298:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD52A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11052));
    goto L_08AD5090;
L_08AD52A8:
    ctx.gpr[31] = (0x08AD52B0u);
    ctx.gpr[4] = (0u | 640u);
    ctx.pc = 0x08B0B87Cu;
    return;
L_08AD52B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD52CC;
      }
      goto L_08AD52BC;
    }
L_08AD52BC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD52CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11016));
    goto L_08AD5090;
L_08AD52CC:
    ctx.gpr[31] = (0x08AD52D4u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0B86Cu;
    return;
L_08AD52D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD52F0;
      }
      goto L_08AD52E0;
    }
L_08AD52E0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD52F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10964));
    goto L_08AD5090;
L_08AD52F0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (0x08AD5300u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10924));
    goto L_08AD5090;
L_08AD5300:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (0x08AD5310u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10904));
    goto L_08AD5090;
L_08AD5310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (21u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1028));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5334;
      }
      goto L_08AD5328;
    }
L_08AD5328:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5334u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10884));
    goto L_08AD5090;
L_08AD5334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (0u | 46043u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5354;
      }
      goto L_08AD5348;
    }
L_08AD5348:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5354u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10836));
    goto L_08AD5090;
L_08AD5354:
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16752));
    ctx.gpr[8] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[16] + static_cast<std::uint32_t>(132));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 640u);
    ctx.gpr[31] = (0x08AD537Cu);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(20668));
    ctx.pc = 0x08B0B804u;
    return;
L_08AD537C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD5398;
      }
      goto L_08AD5388;
    }
L_08AD5388:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD5398u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10792));
    goto L_08AD5090;
L_08AD5398:
    ctx.gpr[5] = (89u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17780));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 512u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08AD53C0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.pc = 0x08B0B884u;
    return;
L_08AD53C0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD53DC;
      }
      goto L_08AD53CC;
    }
L_08AD53CC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD53DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10740));
    goto L_08AD5090;
L_08AD53DC:
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16676), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10704));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AD53FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 827u, 0x08AA3EBCu>(ctx, &aot_mem) && ctx.pc == 0x08AD53FCu) goto L_08AD53FC;
    return;
L_08AD53FC:
    ctx.gpr[31] = (0x08AD5404u);
    ctx.gpr[17] = (ctx.gpr[2] >> 10u);
    ctx.pc = 0x08B0BC24u;
    return;
L_08AD5404:
    ctx.gpr[6] = (ctx.gpr[2] >> 10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5414u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AD5090;
L_08AD5414:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5430:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD544Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10688));
    goto L_08AD5090;
L_08AD544C:
    ctx.gpr[31] = (0x08AD5454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 723u, 0x08AF7454u>(ctx, &aot_mem) && ctx.pc == 0x08AD5454u) goto L_08AD5454;
    return;
L_08AD5454:
    ctx.gpr[31] = (0x08AD545Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.pc = 0x08B0B81Cu;
    return;
L_08AD545C:
    ctx.gpr[31] = (0x08AD5464u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.pc = 0x08B0B7ECu;
    return;
L_08AD5464:
    ctx.gpr[31] = (0x08AD546Cu);
    // nop
    ctx.pc = 0x08B0B84Cu;
    return;
L_08AD546C:
    ctx.gpr[31] = (0x08AD5474u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0BBCCu;
    return;
L_08AD5474:
    ctx.gpr[31] = (0x08AD547Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x08B0BBCCu;
    return;
L_08AD547C:
    ctx.gpr[31] = (0x08AD5484u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.pc = 0x08B0BBCCu;
    return;
L_08AD5484:
    ctx.gpr[31] = (0x08AD548Cu);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B0B8D4u;
    return;
L_08AD548C:
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(472));
    ctx.gpr[31] = (0x08AD549Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 430u, 0x08A2DB58u>(ctx, &aot_mem) && ctx.pc == 0x08AD549Cu) goto L_08AD549C;
    return;
L_08AD549C:
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(468));
    ctx.gpr[31] = (0x08AD54ACu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 430u, 0x08A2DB58u>(ctx, &aot_mem) && ctx.pc == 0x08AD54ACu) goto L_08AD54AC;
    return;
L_08AD54AC:
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(464));
    ctx.gpr[31] = (0x08AD54BCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 430u, 0x08A2DB58u>(ctx, &aot_mem) && ctx.pc == 0x08AD54BCu) goto L_08AD54BC;
    return;
L_08AD54BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD54CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD54F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 705u, 0x08A07940u>(ctx, &aot_mem) && ctx.pc == 0x08AD54F8u) goto L_08AD54F8;
    return;
L_08AD54F8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD5504u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 27u, 0x08878288u>(ctx, &aot_mem) && ctx.pc == 0x08AD5504u) goto L_08AD5504;
    return;
L_08AD5504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AD5548;
      }
      goto L_08AD5510;
    }
L_08AD5510:
    ctx.gpr[31] = (0x08AD5518u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 353u, 0x08839858u>(ctx, &aot_mem) && ctx.pc == 0x08AD5518u) goto L_08AD5518;
    return;
L_08AD5518:
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD553C;
      }
      goto L_08AD5524;
    }
L_08AD5524:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD553C;
      }
      goto L_08AD552C;
    }
L_08AD552C:
    ctx.gpr[31] = (0x08AD5534u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 119u, 0x08868CECu>(ctx, &aot_mem) && ctx.pc == 0x08AD5534u) goto L_08AD5534;
    return;
L_08AD5534:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD5540;
      }
      goto L_08AD553C;
    }
L_08AD553C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AD5540;
L_08AD5540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD556C;
      }
      goto L_08AD5548;
    }
L_08AD5548:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5568;
      }
      goto L_08AD5550;
    }
L_08AD5550:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5568;
      }
      goto L_08AD5558;
    }
L_08AD5558:
    ctx.gpr[31] = (0x08AD5560u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 119u, 0x08868CECu>(ctx, &aot_mem) && ctx.pc == 0x08AD5560u) goto L_08AD5560;
    return;
L_08AD5560:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD556C;
      }
      goto L_08AD5568;
    }
L_08AD5568:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AD556C;
L_08AD556C:
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
L_08AD5588:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-2112));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29052)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2096), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29056)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2084), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2088), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2080), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2092), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2108), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD55DCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 39u, 0x088B82B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD55DCu) goto L_08AD55DC;
    return;
L_08AD55DC:
    ctx.gpr[4] = (ctx.gpr[3] ^ ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[2] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5604;
      }
      goto L_08AD55FC;
    }
L_08AD55FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AD56E0;
      }
      goto L_08AD5604;
    }
L_08AD5604:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD5618u);
    ctx.gpr[6] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 37u, 0x088B829Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD5618u) goto L_08AD5618;
    return;
L_08AD5618:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2048 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5640;
      }
      goto L_08AD5628;
    }
L_08AD5628:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5638u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10664));
    goto L_08AD5090;
L_08AD5638:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AD56E0;
      }
      goto L_08AD5640;
    }
L_08AD5640:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD5650u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0B7FCu;
    return;
L_08AD5650:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD566C;
      }
      goto L_08AD5658;
    }
L_08AD5658:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5664u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10628));
    goto L_08AD5090;
L_08AD5664:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AD56E0;
      }
      goto L_08AD566C;
    }
L_08AD566C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD5678u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B0B824u;
    return;
L_08AD5678:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5694;
      }
      goto L_08AD5680;
    }
L_08AD5680:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD568Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10584));
    goto L_08AD5090;
L_08AD568C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AD56E0;
      }
      goto L_08AD5694;
    }
L_08AD5694:
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AD56A8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 39u, 0x088B82B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD56A8u) goto L_08AD56A8;
    return;
L_08AD56A8:
    ctx.gpr[4] = (ctx.gpr[3] ^ ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[2] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD56DC;
      }
      goto L_08AD56C8;
    }
L_08AD56C8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD56D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10544));
    goto L_08AD5090;
L_08AD56D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AD56E0;
      }
      goto L_08AD56DC;
    }
L_08AD56DC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD56E0;
L_08AD56E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2080)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2084)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2088)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2092)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5708:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (90u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6888));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(452)));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD574Cu);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0B8DCu;
    return;
L_08AD574C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(452), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5778;
      }
      goto L_08AD5768;
    }
L_08AD5768:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AD577C;
      }
      goto L_08AD5778;
    }
L_08AD5778:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD577C;
L_08AD577C:
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
L_08AD579C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(456), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(460), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD57F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10512));
    goto L_08AD5090;
L_08AD57F4:
    ctx.gpr[30] = (ctx.gpr[16] + static_cast<std::uint32_t>(132));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AD5808u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 20u, 0x088B81ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD5808u) goto L_08AD5808;
    return;
L_08AD5808:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD5824;
      }
      goto L_08AD5810;
    }
L_08AD5810:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD581Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10488));
    goto L_08AD5090;
L_08AD581C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5ED0;
      }
      goto L_08AD5824;
    }
L_08AD5824:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AD5834u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 21u, 0x088B81B4u>(ctx, &aot_mem) && ctx.pc == 0x08AD5834u) goto L_08AD5834;
    return;
L_08AD5834:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD5850;
      }
      goto L_08AD583C;
    }
L_08AD583C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5848u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10456));
    goto L_08AD5090;
L_08AD5848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5ED0;
      }
      goto L_08AD5850;
    }
L_08AD5850:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(156));
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(168));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD586Cu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_08AD5588;
L_08AD586C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5888;
      }
      goto L_08AD5874;
    }
L_08AD5874:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5880u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10424));
    goto L_08AD5090;
L_08AD5880:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5ED0;
      }
      goto L_08AD5888;
    }
L_08AD5888:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AD5898u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0B80Cu;
    return;
L_08AD5898:
    ctx.gpr[22] = (68u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[22] = (ctx.gpr[16] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08AD58BC;
      }
      goto L_08AD58A8;
    }
L_08AD58A8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD58B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10396));
    goto L_08AD5090;
L_08AD58B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16744)));
      if (branch_taken) {
          goto L_08AD5EA0;
      }
      goto L_08AD58BC;
    }
L_08AD58BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD58F4;
      }
      goto L_08AD58C8;
    }
L_08AD58C8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AD58D8u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0B80Cu;
    return;
L_08AD58D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD58F4;
      }
      goto L_08AD58E0;
    }
L_08AD58E0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD58ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10352));
    goto L_08AD5090;
L_08AD58EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16744)));
      if (branch_taken) {
          goto L_08AD5EA0;
      }
      goto L_08AD58F4;
    }
L_08AD58F4:
    ctx.gpr[31] = (0x08AD58FCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0B854u;
    return;
L_08AD58FC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16744), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD591C;
      }
      goto L_08AD5908;
    }
L_08AD5908:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5914u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10308));
    goto L_08AD5090;
L_08AD5914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16744)));
      if (branch_taken) {
          goto L_08AD5EA0;
      }
      goto L_08AD591C;
    }
L_08AD591C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD5930u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.pc = 0x08B0B7F4u;
    return;
L_08AD5930:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD5954;
      }
      goto L_08AD593C;
    }
L_08AD593C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD594Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10268));
    goto L_08AD5090;
L_08AD594C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16744)));
      if (branch_taken) {
          goto L_08AD5EA0;
      }
      goto L_08AD5954;
    }
L_08AD5954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
        goto L_08AD5A00;
    }
    goto L_08AD5960;
L_08AD5960:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
    ctx.gpr[31] = (0x08AD5970u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0B894u;
    return;
L_08AD5970:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD5994;
      }
      goto L_08AD597C;
    }
L_08AD597C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD598Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10228));
    goto L_08AD5090;
L_08AD598C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16744)));
      if (branch_taken) {
          goto L_08AD5EA0;
      }
      goto L_08AD5994;
    }
L_08AD5994:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (0x08AD59A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10184));
    goto L_08AD5090;
L_08AD59A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2117 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD59C0;
      }
      goto L_08AD59B4;
    }
L_08AD59B4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD59C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10164));
    goto L_08AD5090;
L_08AD59C0:
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1664));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x08AD59D8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0B7F4u;
    return;
L_08AD59D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD59FC;
      }
      goto L_08AD59E4;
    }
L_08AD59E4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD59F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10120));
    goto L_08AD5090;
L_08AD59F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16744)));
      if (branch_taken) {
          goto L_08AD5EA0;
      }
      goto L_08AD59FC;
    }
L_08AD59FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    goto L_08AD5A00;
L_08AD5A00:
    ctx.gpr[5] = (68u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16728), ctx.gpr[4]);
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16736), ctx.gpr[6]);
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16732), ctx.gpr[23]);
    ctx.gpr[5] = (68u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16740), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AD5A40u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0B8D4u;
    return;
L_08AD5A40:
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(176));
    ctx.gpr[5] = (9u << 16u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AD5A58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 682u, 0x08A07618u>(ctx, &aot_mem) && ctx.pc == 0x08AD5A58u) goto L_08AD5A58;
    return;
L_08AD5A58:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD5A74;
      }
      goto L_08AD5A60;
    }
L_08AD5A60:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5A6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10084));
    goto L_08AD5090;
L_08AD5A6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5E94;
      }
      goto L_08AD5A74;
    }
L_08AD5A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5AE8;
      }
      goto L_08AD5A80;
    }
L_08AD5A80:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08AD5A90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10052));
    goto L_08AD5090;
L_08AD5A90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8193 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5AB4;
      }
      goto L_08AD5AA0;
    }
L_08AD5AA0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5AACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10028));
    goto L_08AD5090;
L_08AD5AAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AD5E7C;
      }
      goto L_08AD5AB4;
    }
L_08AD5AB4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AD5ACCu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 325u, 0x08839594u>(ctx, &aot_mem) && ctx.pc == 0x08AD5ACCu) goto L_08AD5ACC;
    return;
L_08AD5ACC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD5AE8;
      }
      goto L_08AD5AD4;
    }
L_08AD5AD4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5AE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9984));
    goto L_08AD5090;
L_08AD5AE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AD5E7C;
      }
      goto L_08AD5AE8;
    }
L_08AD5AE8:
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(224));
    ctx.gpr[20] = (ctx.gpr[16] + ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AD5B04u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 9u, 0x08878128u>(ctx, &aot_mem) && ctx.pc == 0x08AD5B04u) goto L_08AD5B04;
    return;
L_08AD5B04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD5B20;
      }
      goto L_08AD5B0C;
    }
L_08AD5B0C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5B18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9952));
    goto L_08AD5090;
L_08AD5B18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5E70;
      }
      goto L_08AD5B20;
    }
L_08AD5B20:
    ctx.gpr[5] = (68u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(16688));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AD5B6C;
      }
      goto L_08AD5B34;
    }
L_08AD5B34:
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AD5B50u);
    ctx.gpr[7] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 115u, 0x08868CACu>(ctx, &aot_mem) && ctx.pc == 0x08AD5B50u) goto L_08AD5B50;
    return;
L_08AD5B50:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD5B9C;
      }
      goto L_08AD5B58;
    }
L_08AD5B58:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5B64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9924));
    goto L_08AD5090;
L_08AD5B64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5E68;
      }
      goto L_08AD5B6C;
    }
L_08AD5B6C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD5B80u);
    ctx.gpr[7] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 115u, 0x08868CACu>(ctx, &aot_mem) && ctx.pc == 0x08AD5B80u) goto L_08AD5B80;
    return;
L_08AD5B80:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD5B9C;
      }
      goto L_08AD5B88;
    }
L_08AD5B88:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5B94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9924));
    goto L_08AD5090;
L_08AD5B94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5E68;
      }
      goto L_08AD5B9C;
    }
L_08AD5B9C:
    ctx.gpr[31] = (0x08AD5BA4u);
    // nop
    ctx.pc = 0x08B0BB2Cu;
    return;
L_08AD5BA4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD5BB0u);
    ctx.gpr[5] = (0u | 19u);
    ctx.pc = 0x08B0BB9Cu;
    return;
L_08AD5BB0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2208u << 16u);
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[7] = (0u | 2048u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9892));
    ctx.gpr[31] = (0x08AD5BD4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31180));
    ctx.pc = 0x08B0BB64u;
    return;
L_08AD5BD4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2184u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[6] = (0u | 18u);
    ctx.gpr[7] = (0u | 2048u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9872));
    ctx.gpr[31] = (0x08AD5BFCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32000));
    ctx.pc = 0x08B0BB64u;
    return;
L_08AD5BFC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5C34;
      }
      goto L_08AD5C0C;
    }
L_08AD5C0C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2180u << 16u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[7] = (0u | 2048u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9856));
    ctx.gpr[31] = (0x08AD5C30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26436));
    ctx.pc = 0x08B0BB64u;
    return;
L_08AD5C30:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    goto L_08AD5C34;
L_08AD5C34:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AD5C48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9840));
    goto L_08AD5090;
L_08AD5C48:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.gpr[31] = (0x08AD5C5Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 39u, 0x088B82B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD5C5Cu) goto L_08AD5C5C;
    return;
L_08AD5C5C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29052)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29056)));
    ctx.gpr[6] = (ctx.gpr[3] ^ ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5C9C;
      }
      goto L_08AD5C88;
    }
L_08AD5C88:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5C94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10544));
    goto L_08AD5090;
L_08AD5C94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5DE8;
      }
      goto L_08AD5C9C;
    }
L_08AD5C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5CB8;
      }
      goto L_08AD5CA8;
    }
L_08AD5CA8:
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[31] = (0x08AD5CB8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 336u, 0x088396A4u>(ctx, &aot_mem) && ctx.pc == 0x08AD5CB8u) goto L_08AD5CB8;
    return;
L_08AD5CB8:
    ctx.gpr[31] = (0x08AD5CC0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 686u, 0x08A0771Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD5CC0u) goto L_08AD5CC0;
    return;
L_08AD5CC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (0x08AD5CCCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 11u, 0x0887817Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD5CCCu) goto L_08AD5CCC;
    return;
L_08AD5CCC:
    ctx.gpr[31] = (0x08AD5CD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 116u, 0x08868CC0u>(ctx, &aot_mem) && ctx.pc == 0x08AD5CD4u) goto L_08AD5CD4;
    return;
L_08AD5CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5CF0;
      }
      goto L_08AD5CE0;
    }
L_08AD5CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 40u);
    ctx.gpr[31] = (0x08AD5CF0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BB1Cu;
    return;
L_08AD5CF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 40u);
    ctx.gpr[31] = (0x08AD5D00u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BB1Cu;
    return;
L_08AD5D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08AD5D10u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.pc = 0x08B0BB1Cu;
    return;
L_08AD5D10:
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(16728));
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AD5D34u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    goto L_08AD5F10;
L_08AD5D34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD5DB8;
      }
      goto L_08AD5D3C;
    }
L_08AD5D3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD5D5C;
      }
      goto L_08AD5D48;
    }
L_08AD5D48:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5D54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9800));
    goto L_08AD5090;
L_08AD5D54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5DE8;
      }
      goto L_08AD5D5C;
    }
L_08AD5D5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD5D98;
      }
      goto L_08AD5D6C;
    }
L_08AD5D6C:
    ctx.gpr[31] = (0x08AD5D74u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0B834u;
    return;
L_08AD5D74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5D90;
      }
      goto L_08AD5D7C;
    }
L_08AD5D7C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5D88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9772));
    goto L_08AD5090;
L_08AD5D88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5DE8;
      }
      goto L_08AD5D90;
    }
L_08AD5D90:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08AD5DB8;
      }
      goto L_08AD5D98;
    }
L_08AD5D98:
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD5DB8;
      }
      goto L_08AD5DA4;
    }
L_08AD5DA4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5DB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9732));
    goto L_08AD5090;
L_08AD5DB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5DE8;
      }
      goto L_08AD5DB8;
    }
L_08AD5DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5DD0;
      }
      goto L_08AD5DC4;
    }
L_08AD5DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08AD5DD0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BAF4u;
    return;
L_08AD5DD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AD5DDCu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BAF4u;
    return;
L_08AD5DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08AD5DE8u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BAF4u;
    return;
L_08AD5DE8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10704));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AD5DFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 827u, 0x08AA3EBCu>(ctx, &aot_mem) && ctx.pc == 0x08AD5DFCu) goto L_08AD5DFC;
    return;
L_08AD5DFC:
    ctx.gpr[31] = (0x08AD5E04u);
    ctx.gpr[21] = (ctx.gpr[2] >> 10u);
    ctx.pc = 0x08B0BC24u;
    return;
L_08AD5E04:
    ctx.gpr[6] = (ctx.gpr[2] >> 10u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD5E14u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08AD5090;
L_08AD5E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5E2C;
      }
      goto L_08AD5E20;
    }
L_08AD5E20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08AD5E2Cu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BAF4u;
    return;
L_08AD5E2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AD5E38u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BAF4u;
    return;
L_08AD5E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08AD5E44u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BAF4u;
    return;
L_08AD5E44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5E58;
      }
      goto L_08AD5E50;
    }
L_08AD5E50:
    ctx.gpr[31] = (0x08AD5E58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x08B0BB4Cu;
    return;
L_08AD5E58:
    ctx.gpr[31] = (0x08AD5E60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0BB4Cu;
    return;
L_08AD5E60:
    ctx.gpr[31] = (0x08AD5E68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.pc = 0x08B0BB4Cu;
    return;
L_08AD5E68:
    ctx.gpr[31] = (0x08AD5E70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 118u, 0x08868CE4u>(ctx, &aot_mem) && ctx.pc == 0x08AD5E70u) goto L_08AD5E70;
    return;
L_08AD5E70:
    ctx.gpr[31] = (0x08AD5E78u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 13u, 0x0887819Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD5E78u) goto L_08AD5E78;
    return;
L_08AD5E78:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AD5E7C;
L_08AD5E7C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5E94;
      }
      goto L_08AD5E84;
    }
L_08AD5E84:
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[31] = (0x08AD5E94u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 338u, 0x08839704u>(ctx, &aot_mem) && ctx.pc == 0x08AD5E94u) goto L_08AD5E94;
    return;
L_08AD5E94:
    ctx.gpr[31] = (0x08AD5E9Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 691u, 0x08A077B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD5E9Cu) goto L_08AD5E9C;
    return;
L_08AD5E9C:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16744)));
    goto L_08AD5EA0;
L_08AD5EA0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD5EACu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.pc = 0x08B0B874u;
    return;
L_08AD5EAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x08AD5EB8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0B814u;
    return;
L_08AD5EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5ED0;
      }
      goto L_08AD5EC4;
    }
L_08AD5EC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08AD5ED0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0B814u;
    return;
L_08AD5ED0:
    ctx.gpr[31] = (0x08AD5ED8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 34u, 0x088B8268u>(ctx, &aot_mem) && ctx.pc == 0x08AD5ED8u) goto L_08AD5ED8;
    return;
L_08AD5ED8:
    ctx.gpr[31] = (0x08AD5EE0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 36u, 0x088B8294u>(ctx, &aot_mem) && ctx.pc == 0x08AD5EE0u) goto L_08AD5EE0;
    return;
L_08AD5EE0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5F10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (90u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[4] + ctx.gpr[11]);
    ctx.gpr[10] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-9712));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[30]);
    ctx.gpr[30] = (90u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[30] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    goto L_08AD5F84;
L_08AD5F84:
    ctx.gpr[31] = (0x08AD5F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 585u, 0x08AB350Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD5F8Cu) goto L_08AD5F8C;
    return;
L_08AD5F8C:
    ctx.gpr[31] = (0x08AD5F94u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BA74u;
    return;
L_08AD5F94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5FB8;
      }
      goto L_08AD5FA0;
    }
L_08AD5FA0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD5FB0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08AD54CC;
L_08AD5FB0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD6020;
      }
      goto L_08AD5FB8;
    }
L_08AD5FB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5FE8;
      }
      goto L_08AD5FC8;
    }
L_08AD5FC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AD5FD4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08AD5708;
L_08AD5FD4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6020;
      }
      goto L_08AD5FE0;
    }
L_08AD5FE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6298;
      }
      goto L_08AD5FE8;
    }
L_08AD5FE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD6020;
      }
      goto L_08AD5FF8;
    }
L_08AD5FF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD600C;
      }
      goto L_08AD6000;
    }
L_08AD6000:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD6020;
      }
      goto L_08AD600C;
    }
L_08AD600C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x08AD6018u);
    ctx.gpr[16] = (0u | 1u);
    goto L_08AD5090;
L_08AD6018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(456), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08AD6020;
L_08AD6020:
    ctx.gpr[31] = (0x08AD6028u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 26u, 0x08878274u>(ctx, &aot_mem) && ctx.pc == 0x08AD6028u) goto L_08AD6028;
    return;
L_08AD6028:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AD604C;
      }
      goto L_08AD6030;
    }
L_08AD6030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08AD603Cu);
    ctx.gpr[16] = (0u | 640u);
    ctx.pc = 0x08B0B864u;
    return;
L_08AD603C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AD604C;
      }
      goto L_08AD6044;
    }
L_08AD6044:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD6298;
      }
      goto L_08AD604C;
    }
L_08AD604C:
    ctx.gpr[31] = (0x08AD6054u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 12u, 0x08878190u>(ctx, &aot_mem) && ctx.pc == 0x08AD6054u) goto L_08AD6054;
    return;
L_08AD6054:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AD6070;
      }
      goto L_08AD605C;
    }
L_08AD605C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD6068u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9692));
    goto L_08AD5090;
L_08AD6068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AD6360;
      }
      goto L_08AD6070;
    }
L_08AD6070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AD6134;
      }
      goto L_08AD607C;
    }
L_08AD607C:
    ctx.gpr[31] = (0x08AD6084u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 353u, 0x08839858u>(ctx, &aot_mem) && ctx.pc == 0x08AD6084u) goto L_08AD6084;
    return;
L_08AD6084:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD6134;
      }
      goto L_08AD608C;
    }
L_08AD608C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD60A0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.pc = 0x08B0B88Cu;
    return;
L_08AD60A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6114;
      }
      goto L_08AD60A8;
    }
L_08AD60A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AD60B4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 341u, 0x08839738u>(ctx, &aot_mem) && ctx.pc == 0x08AD60B4u) goto L_08AD60B4;
    return;
L_08AD60B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD60C8u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.pc = 0x08B0B844u;
    return;
L_08AD60C8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD60EC;
      }
      goto L_08AD60D4;
    }
L_08AD60D4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD60E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9684));
    goto L_08AD5090;
L_08AD60E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6360;
      }
      goto L_08AD60EC;
    }
L_08AD60EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AD60FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 346u, 0x08839794u>(ctx, &aot_mem) && ctx.pc == 0x08AD60FCu) goto L_08AD60FC;
    return;
L_08AD60FC:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD610C;
      }
      goto L_08AD6104;
    }
L_08AD6104:
    ctx.gpr[31] = (0x08AD610Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 350u, 0x088397E8u>(ctx, &aot_mem) && ctx.pc == 0x08AD610Cu) goto L_08AD610C;
    return;
L_08AD610C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD614C;
      }
      goto L_08AD6114;
    }
L_08AD6114:
    ctx.gpr[31] = (0x08AD611Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 27u, 0x08878288u>(ctx, &aot_mem) && ctx.pc == 0x08AD611Cu) goto L_08AD611C;
    return;
L_08AD611C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD614C;
      }
      goto L_08AD6124;
    }
L_08AD6124:
    ctx.gpr[31] = (0x08AD612Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 15u, 0x088781BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD612Cu) goto L_08AD612C;
    return;
L_08AD612C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD614C;
      }
      goto L_08AD6134;
    }
L_08AD6134:
    ctx.gpr[31] = (0x08AD613Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 27u, 0x08878288u>(ctx, &aot_mem) && ctx.pc == 0x08AD613Cu) goto L_08AD613C;
    return;
L_08AD613C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD614C;
      }
      goto L_08AD6144;
    }
L_08AD6144:
    ctx.gpr[31] = (0x08AD614Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 15u, 0x088781BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD614Cu) goto L_08AD614C;
    return;
L_08AD614C:
    ctx.gpr[31] = (0x08AD6154u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 705u, 0x08A07940u>(ctx, &aot_mem) && ctx.pc == 0x08AD6154u) goto L_08AD6154;
    return;
L_08AD6154:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD6258;
      }
      goto L_08AD615C;
    }
L_08AD615C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD6170u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = 0x08B0B89Cu;
    return;
L_08AD6170:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6210;
      }
      goto L_08AD617C;
    }
L_08AD617C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AD6188u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 695u, 0x08A077F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD6188u) goto L_08AD6188;
    return;
L_08AD6188:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[6] = (0u | 512u);
    ctx.gpr[31] = (0x08AD61A8u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B0B7E4u;
    return;
L_08AD61A8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD61CC;
      }
      goto L_08AD61B4;
    }
L_08AD61B4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD61C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9640));
    goto L_08AD5090;
L_08AD61C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6360;
      }
      goto L_08AD61CC;
    }
L_08AD61CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD61DCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x08868D40u>(ctx, &aot_mem) && ctx.pc == 0x08AD61DCu) goto L_08AD61DC;
    return;
L_08AD61DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AD6270;
      }
      goto L_08AD61E8;
    }
L_08AD61E8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08AD61F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 127u, 0x08868D90u>(ctx, &aot_mem) && ctx.pc == 0x08AD61F4u) goto L_08AD61F4;
    return;
L_08AD61F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AD6200u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 700u, 0x08A0785Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD6200u) goto L_08AD6200;
    return;
L_08AD6200:
    ctx.gpr[31] = (0x08AD6208u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 702u, 0x08A078B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD6208u) goto L_08AD6208;
    return;
L_08AD6208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6270;
      }
      goto L_08AD6210;
    }
L_08AD6210:
    ctx.gpr[4] = (32866u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32767));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD6238;
      }
      goto L_08AD6220;
    }
L_08AD6220:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD6230u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9600));
    goto L_08AD5090;
L_08AD6230:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AD6360;
      }
      goto L_08AD6238;
    }
L_08AD6238:
    ctx.gpr[31] = (0x08AD6240u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 27u, 0x08878288u>(ctx, &aot_mem) && ctx.pc == 0x08AD6240u) goto L_08AD6240;
    return;
L_08AD6240:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6270;
      }
      goto L_08AD6248;
    }
L_08AD6248:
    ctx.gpr[31] = (0x08AD6250u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 15u, 0x088781BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6250u) goto L_08AD6250;
    return;
L_08AD6250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6270;
      }
      goto L_08AD6258;
    }
L_08AD6258:
    ctx.gpr[31] = (0x08AD6260u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 27u, 0x08878288u>(ctx, &aot_mem) && ctx.pc == 0x08AD6260u) goto L_08AD6260;
    return;
L_08AD6260:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6270;
      }
      goto L_08AD6268;
    }
L_08AD6268:
    ctx.gpr[31] = (0x08AD6270u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 15u, 0x088781BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6270u) goto L_08AD6270;
    return;
L_08AD6270:
    ctx.gpr[31] = (0x08AD6278u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 27u, 0x08878288u>(ctx, &aot_mem) && ctx.pc == 0x08AD6278u) goto L_08AD6278;
    return;
L_08AD6278:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6288;
      }
      goto L_08AD6280;
    }
L_08AD6280:
    ctx.gpr[31] = (0x08AD6288u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 15u, 0x088781BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6288u) goto L_08AD6288;
    return;
L_08AD6288:
    ctx.gpr[31] = (0x08AD6290u);
    // nop
    ctx.pc = 0x08B0BB3Cu;
    return;
L_08AD6290:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5F84;
      }
      goto L_08AD6298;
    }
L_08AD6298:
    ctx.gpr[31] = (0x08AD62A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 119u, 0x08868CECu>(ctx, &aot_mem) && ctx.pc == 0x08AD62A0u) goto L_08AD62A0;
    return;
L_08AD62A0:
    ctx.gpr[31] = (0x08AD62A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 32u, 0x088782D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD62A8u) goto L_08AD62A8;
    return;
L_08AD62A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD62BC;
      }
      goto L_08AD62B4;
    }
L_08AD62B4:
    ctx.gpr[31] = (0x08AD62BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 355u, 0x0883987Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD62BCu) goto L_08AD62BC;
    return;
L_08AD62BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AD62C0;
L_08AD62C0:
    ctx.gpr[31] = (0x08AD62C8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 695u, 0x08A077F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD62C8u) goto L_08AD62C8;
    return;
L_08AD62C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD6350;
      }
      goto L_08AD62D0;
    }
L_08AD62D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[31] = (0x08AD62ECu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B0B83Cu;
    return;
L_08AD62EC:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6310;
      }
      goto L_08AD62F8;
    }
L_08AD62F8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD6308u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9560));
    goto L_08AD5090;
L_08AD6308:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AD6360;
      }
      goto L_08AD6310;
    }
L_08AD6310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD633C;
      }
      goto L_08AD631C;
    }
L_08AD631C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08AD6328u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 127u, 0x08868D90u>(ctx, &aot_mem) && ctx.pc == 0x08AD6328u) goto L_08AD6328;
    return;
L_08AD6328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AD6334u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 700u, 0x08A0785Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD6334u) goto L_08AD6334;
    return;
L_08AD6334:
    ctx.gpr[31] = (0x08AD633Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 702u, 0x08A078B8u>(ctx, &aot_mem) && ctx.pc == 0x08AD633Cu) goto L_08AD633C;
    return;
L_08AD633C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AD6348u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 709u, 0x08A079A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6348u) goto L_08AD6348;
    return;
L_08AD6348:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6388;
      }
      goto L_08AD6350;
    }
L_08AD6350:
    ctx.gpr[31] = (0x08AD6358u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 747u, 0x08A07BE4u>(ctx, &aot_mem) && ctx.pc == 0x08AD6358u) goto L_08AD6358;
    return;
L_08AD6358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AD62C0;
      }
      goto L_08AD6360;
    }
L_08AD6360:
    ctx.gpr[31] = (0x08AD6368u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 32u, 0x088782D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6368u) goto L_08AD6368;
    return;
L_08AD6368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD637C;
      }
      goto L_08AD6374;
    }
L_08AD6374:
    ctx.gpr[31] = (0x08AD637Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 355u, 0x0883987Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD637Cu) goto L_08AD637C;
    return;
L_08AD637C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AD6388u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 709u, 0x08A079A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6388u) goto L_08AD6388;
    return;
L_08AD6388:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD63BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD63E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9512));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 379u, 0x08AED520u>(ctx, &aot_mem) && ctx.pc == 0x08AD63E4u) goto L_08AD63E4;
    return;
L_08AD63E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD63F4;
      }
      goto L_08AD63EC;
    }
L_08AD63EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6414;
      }
      goto L_08AD63F4;
    }
L_08AD63F4:
    ctx.gpr[31] = (0x08AD63FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08AD63FCu) goto L_08AD63FC;
    return;
L_08AD63FC:
    ctx.gpr[31] = (0x08AD6404u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08AD6404u) goto L_08AD6404;
    return;
L_08AD6404:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD6414u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6414u) goto L_08AD6414;
    return;
L_08AD6414:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6428:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD6454;
      }
      goto L_08AD644C;
    }
L_08AD644C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD646C;
      }
      goto L_08AD6454;
    }
L_08AD6454:
    ctx.gpr[31] = (0x08AD645Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD645Cu) goto L_08AD645C;
    return;
L_08AD645C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08AD6468u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD6468u) goto L_08AD6468;
    return;
L_08AD6468:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    goto L_08AD646C;
L_08AD646C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6480:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6488:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29044)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] | 14571u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29048)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-29020)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29040), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[9] = (2278u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[9] + static_cast<std::uint32_t>(-6320));
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[10] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-29032), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29036), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (15744u << 16u);
    ctx.gpr[11] = (2230u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[2] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29028), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[3] = (2230u << 16u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29024), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD6538u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29016), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 232u, 0x08A7D3ECu>(ctx, &aot_mem) && ctx.pc == 0x08AD6538u) goto L_08AD6538;
    return;
L_08AD6538:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11640));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AD6558u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29012));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x08AD6558u) goto L_08AD6558;
    return;
L_08AD6558:
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 36u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6256));
    ctx.gpr[31] = (0x08AD6574u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9504));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 553u, 0x0886AEF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD6574u) goto L_08AD6574;
    return;
L_08AD6574:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6584:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AD65D4;
      }
      goto L_08AD65A8;
    }
L_08AD65A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD65B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29000));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 324u, 0x08A35FE0u>(ctx, &aot_mem) && ctx.pc == 0x08AD65B8u) goto L_08AD65B8;
    return;
L_08AD65B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD65C4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD6608;
L_08AD65C4:
    ctx.gpr[31] = (0x08AD65CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD65CCu) goto L_08AD65CC;
    return;
L_08AD65CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD65DC;
      }
      goto L_08AD65D4;
    }
L_08AD65D4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08AD65DC;
L_08AD65DC:
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
L_08AD65F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6608:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AD662C;
      }
      goto L_08AD6624;
    }
L_08AD6624:
    ctx.gpr[31] = (0x08AD662Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 72u, 0x08A0CEF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD662Cu) goto L_08AD662C;
    return;
L_08AD662C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6640;
      }
      goto L_08AD6638;
    }
L_08AD6638:
    ctx.gpr[31] = (0x08AD6640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 107u, 0x08A0D0E4u>(ctx, &aot_mem) && ctx.pc == 0x08AD6640u) goto L_08AD6640;
    return;
L_08AD6640:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
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
L_08AD665C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6664:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28976)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD667C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28976)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD66C4;
      }
      goto L_08AD66A8;
    }
L_08AD66A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD66BC;
      }
      goto L_08AD66B4;
    }
L_08AD66B4:
    ctx.gpr[31] = (0x08AD66BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 107u, 0x08A0D0E4u>(ctx, &aot_mem) && ctx.pc == 0x08AD66BCu) goto L_08AD66BC;
    return;
L_08AD66BC:
    ctx.gpr[31] = (0x08AD66C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AD66C4u) goto L_08AD66C4;
    return;
L_08AD66C4:
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
L_08AD66DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28976)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6758;
      }
      goto L_08AD6710;
    }
L_08AD6710:
    ctx.gpr[31] = (0x08AD6718u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6718u) goto L_08AD6718;
    return;
L_08AD6718:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6758;
      }
      goto L_08AD6750;
    }
L_08AD6750:
    ctx.gpr[31] = (0x08AD6758u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 72u, 0x08A0CEF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD6758u) goto L_08AD6758;
    return;
L_08AD6758:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08AD6774:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28976)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_08AD6790;
    }
    goto L_08AD6790;
L_08AD6790:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6798:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD67C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29000));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 284u, 0x08A35D30u>(ctx, &aot_mem) && ctx.pc == 0x08AD67C0u) goto L_08AD67C0;
    return;
L_08AD67C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD67CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD6834;
      }
      goto L_08AD67F4;
    }
L_08AD67F4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AD6824;
      }
      goto L_08AD6808;
    }
L_08AD6808:
    ctx.gpr[31] = (0x08AD6810u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AD6584;
L_08AD6810:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD6808;
      }
      goto L_08AD6824;
    }
L_08AD6824:
    ctx.gpr[31] = (0x08AD682Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD682Cu) goto L_08AD682C;
    return;
L_08AD682C:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AD6834;
L_08AD6834:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08AD6860:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28976)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6878:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28976)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6890:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[8] = (2221u << 16u);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (0u | 288u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(26212));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(26236));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD68BCu);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(26332));
    goto L_08AD6798;
L_08AD68BC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28976), ctx.gpr[2]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD68D4:
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
L_08AD6900:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD691Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 106u, 0x08AF8980u>(ctx, &aot_mem) && ctx.pc == 0x08AD691Cu) goto L_08AD691C;
    return;
L_08AD691C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6928:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-5828)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2229u << 16u);
      if (branch_taken) {
          goto L_08AD6AEC;
      }
      goto L_08AD6958;
    }
L_08AD6958:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17172u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-20));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 37450u);
    ctx.gpr[6] = (16800u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (17184u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08AD69A0u);
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08AD69A0u) goto L_08AD69A0;
    return;
L_08AD69A0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[7] = (0u | 50u);
    ctx.gpr[31] = (0x08AD69C0u);
    ctx.gpr[8] = (0u | 210u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD69C0u) goto L_08AD69C0;
    return;
L_08AD69C0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD69D0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD69D0u) goto L_08AD69D0;
    return;
L_08AD69D0:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x08AD69ECu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD69ECu) goto L_08AD69EC;
    return;
L_08AD69EC:
    ctx.gpr[31] = (0x08AD69F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x08AD69F4u) goto L_08AD69F4;
    return;
L_08AD69F4:
    ctx.gpr[31] = (0x08AD69FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD69FCu) goto L_08AD69FC;
    return;
L_08AD69FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-50));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AD6A10u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x08AD6A10u) goto L_08AD6A10;
    return;
L_08AD6A10:
    ctx.gpr[31] = (0x08AD6A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6A18u) goto L_08AD6A18;
    return;
L_08AD6A18:
    ctx.gpr[31] = (0x08AD6A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x08AD6A20u) goto L_08AD6A20;
    return;
L_08AD6A20:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 200u);
    ctx.gpr[31] = (0x08AD6A38u);
    ctx.gpr[8] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6A38u) goto L_08AD6A38;
    return;
L_08AD6A38:
    ctx.gpr[31] = (0x08AD6A40u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08AD6A40u) goto L_08AD6A40;
    return;
L_08AD6A40:
    ctx.gpr[31] = (0x08AD6A48u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08AD6A48u) goto L_08AD6A48;
    return;
L_08AD6A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[16] = (2227u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08AD6AB8;
      }
      goto L_08AD6A90;
    }
L_08AD6A90:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AD6A9Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6A9Cu) goto L_08AD6A9C;
    return;
L_08AD6A9C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6AB4;
      }
      goto L_08AD6AA8;
    }
L_08AD6AA8:
    ctx.gpr[31] = (0x08AD6AB0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD6AB0u) goto L_08AD6AB0;
    return;
L_08AD6AB0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08AD6AB4;
L_08AD6AB4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_08AD6AB8;
L_08AD6AB8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD6AC8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8728));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD6AC8u) goto L_08AD6AC8;
    return;
L_08AD6AC8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AD6ADCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD6ADCu) goto L_08AD6ADC;
    return;
L_08AD6ADC:
    ctx.gpr[31] = (0x08AD6AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54DCCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6AE4u) goto L_08AD6AE4;
    return;
L_08AD6AE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6C88;
      }
      goto L_08AD6AEC;
    }
L_08AD6AEC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-5826)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2229u << 16u);
      if (branch_taken) {
          goto L_08AD6C88;
      }
      goto L_08AD6AFC;
    }
L_08AD6AFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17161u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-20));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 9363u);
    ctx.gpr[6] = (16800u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (17184u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08AD6B44u);
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08AD6B44u) goto L_08AD6B44;
    return;
L_08AD6B44:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[7] = (0u | 50u);
    ctx.gpr[31] = (0x08AD6B64u);
    ctx.gpr[8] = (0u | 210u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6B64u) goto L_08AD6B64;
    return;
L_08AD6B64:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD6B74u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6B74u) goto L_08AD6B74;
    return;
L_08AD6B74:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x08AD6B90u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD6B90u) goto L_08AD6B90;
    return;
L_08AD6B90:
    ctx.gpr[31] = (0x08AD6B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x08AD6B98u) goto L_08AD6B98;
    return;
L_08AD6B98:
    ctx.gpr[31] = (0x08AD6BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6BA0u) goto L_08AD6BA0;
    return;
L_08AD6BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-50));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AD6BB4u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x08AD6BB4u) goto L_08AD6BB4;
    return;
L_08AD6BB4:
    ctx.gpr[31] = (0x08AD6BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6BBCu) goto L_08AD6BBC;
    return;
L_08AD6BBC:
    ctx.gpr[31] = (0x08AD6BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x08AD6BC4u) goto L_08AD6BC4;
    return;
L_08AD6BC4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 200u);
    ctx.gpr[31] = (0x08AD6BDCu);
    ctx.gpr[8] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6BDCu) goto L_08AD6BDC;
    return;
L_08AD6BDC:
    ctx.gpr[31] = (0x08AD6BE4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08AD6BE4u) goto L_08AD6BE4;
    return;
L_08AD6BE4:
    ctx.gpr[31] = (0x08AD6BECu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08AD6BECu) goto L_08AD6BEC;
    return;
L_08AD6BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[16] = (2227u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08AD6C5C;
      }
      goto L_08AD6C34;
    }
L_08AD6C34:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AD6C40u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6C40u) goto L_08AD6C40;
    return;
L_08AD6C40:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6C58;
      }
      goto L_08AD6C4C;
    }
L_08AD6C4C:
    ctx.gpr[31] = (0x08AD6C54u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD6C54u) goto L_08AD6C54;
    return;
L_08AD6C54:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08AD6C58;
L_08AD6C58:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_08AD6C5C;
L_08AD6C5C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD6C6Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8720));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD6C6Cu) goto L_08AD6C6C;
    return;
L_08AD6C6C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AD6C80u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD6C80u) goto L_08AD6C80;
    return;
L_08AD6C80:
    ctx.gpr[31] = (0x08AD6C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54DCCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6C88u) goto L_08AD6C88;
    return;
L_08AD6C88:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6CAC:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[12];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6CE4:
    ctx.gpr[5] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25652), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6CF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD6D18u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1160));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x08AD6D18u) goto L_08AD6D18;
    return;
L_08AD6D18:
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1168));
    ctx.gpr[5] = (0u | 39u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD6D30u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(13928));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD6D30u) goto L_08AD6D30;
    return;
L_08AD6D30:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1364), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1368), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1372), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(305), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1131), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1130), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1164), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1133), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1134), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(309), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1104), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1124), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1116), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-99));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17174u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1156), static_cast<std::uint8_t>(0u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17264u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (17110u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1373), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1374), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1376), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(311), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25476)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD6DE0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 109u, 0x088647E8u>(ctx, &aot_mem) && ctx.pc == 0x08AD6DE0u) goto L_08AD6DE0;
    return;
L_08AD6DE0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25480)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD6DF4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 105u, 0x088647B0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6DF4u) goto L_08AD6DF4;
    return;
L_08AD6DF4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28968));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28968)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AD6E20u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6E20u) goto L_08AD6E20;
    return;
L_08AD6E20:
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-26208));
      if (branch_taken) {
          goto L_08AD6E48;
      }
      goto L_08AD6E34;
    }
L_08AD6E34:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD6E44u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 535u, 0x08B0B528u>(ctx, &aot_mem) && ctx.pc == 0x08AD6E44u) goto L_08AD6E44;
    return;
L_08AD6E44:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08AD6E48;
L_08AD6E48:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AD6E5C;
      }
      goto L_08AD6E50;
    }
L_08AD6E50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AD6E5C;
L_08AD6E5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(304)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD6EA0;
      }
      goto L_08AD6E6C;
    }
L_08AD6E6C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AD6E90;
      }
      goto L_08AD6E74;
    }
L_08AD6E74:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AD6E88;
      }
      goto L_08AD6E7C;
    }
L_08AD6E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AD6E88;
L_08AD6E88:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(304)));
    goto L_08AD6E90;
L_08AD6E90:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(304), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(297)));
      if (branch_taken) {
          goto L_08AD6EC8;
      }
      goto L_08AD6EA0;
    }
L_08AD6EA0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(300));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08AD6EC0u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 139u, 0x08B0098Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD6EC0u) goto L_08AD6EC0;
    return;
L_08AD6EC0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(297)));
    goto L_08AD6EC8;
L_08AD6EC8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6EF0;
      }
      goto L_08AD6ED0;
    }
L_08AD6ED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AD6EECu);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD6EECu) goto L_08AD6EEC;
    return;
L_08AD6EEC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08AD6EF0;
L_08AD6EF0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6F10;
      }
      goto L_08AD6EF8;
    }
L_08AD6EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD6F10;
      }
      goto L_08AD6F08;
    }
L_08AD6F08:
    ctx.gpr[31] = (0x08AD6F10u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AD6F10u) goto L_08AD6F10;
    return;
L_08AD6F10:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6F34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AD6F9C;
      }
      goto L_08AD6F50;
    }
L_08AD6F50:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD6F5Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 377u, 0x08AD99F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6F5Cu) goto L_08AD6F5C;
    return;
L_08AD6F5C:
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1168));
    ctx.gpr[5] = (0u | 39u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08AD6F7Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(13940));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 356u, 0x08AF5BC0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6F7Cu) goto L_08AD6F7C;
    return;
L_08AD6F7C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1160));
    ctx.gpr[31] = (0x08AD6F88u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 858u, 0x08AD3674u>(ctx, &aot_mem) && ctx.pc == 0x08AD6F88u) goto L_08AD6F88;
    return;
L_08AD6F88:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6F9C;
      }
      goto L_08AD6F94;
    }
L_08AD6F94:
    ctx.gpr[31] = (0x08AD6F9Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AD6F9Cu) goto L_08AD6F9C;
    return;
L_08AD6F9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6FB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16640u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (16608u << 16u);
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    ctx.fpr[22] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    goto L_08AD7024;
L_08AD7024:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[30];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08AD707C;
      }
      goto L_08AD7054;
    }
L_08AD7054:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 1u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD7070u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08AD7184;
L_08AD7070:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AD7098;
      }
      goto L_08AD707C;
    }
L_08AD707C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD7098u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08AD7184;
L_08AD7098:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08AD7024;
      }
      goto L_08AD70A8;
    }
L_08AD70A8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD70E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD7104u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1157), static_cast<std::uint8_t>(ctx.gpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 563u, 0x08ADA554u>(ctx, &aot_mem) && ctx.pc == 0x08AD7104u) goto L_08AD7104;
    return;
L_08AD7104:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
        goto L_08AD7124;
    }
    goto L_08AD7114;
L_08AD7114:
    ctx.gpr[31] = (0x08AD711Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD711Cu) goto L_08AD711C;
    return;
L_08AD711C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    goto L_08AD7124;
L_08AD7124:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD714C;
      }
      goto L_08AD712C;
    }
L_08AD712C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 1u);
        goto L_08AD7150;
    }
    goto L_08AD7138;
L_08AD7138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (2209u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26624));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AD7154;
      }
      goto L_08AD714C;
    }
L_08AD714C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08AD7150;
L_08AD7150:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08AD7154;
L_08AD7154:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7164;
      }
      goto L_08AD715C;
    }
L_08AD715C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7728), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08AD7164;
L_08AD7164:
    ctx.gpr[31] = (0x08AD716Cu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(305), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 764u, 0x0891B6FCu>(ctx, &aot_mem) && ctx.pc == 0x08AD716Cu) goto L_08AD716C;
    return;
L_08AD716C:
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
L_08AD7184:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[19] = (ctx.gpr[5] & 255u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD71D8u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AD71D8u) goto L_08AD71D8;
    return;
L_08AD71D8:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD71F0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD71F0u) goto L_08AD71F0;
    return;
L_08AD71F0:
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[22];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[20];
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[26] + ctx.fpr[28];
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[15];
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[28];
    ctx.fpr[14] = ctx.fpr[30] + ctx.fpr[15];
    ctx.gpr[31] = (0x08AD7230u);
    ctx.fpr[15] = ctx.fpr[24] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08AD7230u) goto L_08AD7230;
    return;
L_08AD7230:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD7240u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD7240u) goto L_08AD7240;
    return;
L_08AD7240:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[28];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[28];
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08AD7258u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08AD7258u) goto L_08AD7258;
    return;
L_08AD7258:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD7268u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD7268u) goto L_08AD7268;
    return;
L_08AD7268:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08AD72B8;
      }
      goto L_08AD7270;
    }
L_08AD7270:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD727Cu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AD727Cu) goto L_08AD727C;
    return;
L_08AD727C:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 176u);
    ctx.gpr[31] = (0x08AD7294u);
    ctx.gpr[7] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD7294u) goto L_08AD7294;
    return;
L_08AD7294:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AD72FC;
      }
      goto L_08AD72B8;
    }
L_08AD72B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD72C4u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AD72C4u) goto L_08AD72C4;
    return;
L_08AD72C4:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[6] = (0u | 35u);
    ctx.gpr[31] = (0x08AD72DCu);
    ctx.gpr[7] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD72DCu) goto L_08AD72DC;
    return;
L_08AD72DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AD72FC;
L_08AD72FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD7314u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08AD7314u) goto L_08AD7314;
    return;
L_08AD7314:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD7324u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD7324u) goto L_08AD7324;
    return;
L_08AD7324:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD7358:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16776u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8712));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD73EC;
      }
      goto L_08AD73C0;
    }
L_08AD73C0:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08AD73CCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD73CCu) goto L_08AD73CC;
    return;
L_08AD73CC:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD73E4;
      }
      goto L_08AD73D8;
    }
L_08AD73D8:
    ctx.gpr[31] = (0x08AD73E0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD73E0u) goto L_08AD73E0;
    return;
L_08AD73E0:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08AD73E4;
L_08AD73E4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[21]);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    goto L_08AD73EC;
L_08AD73EC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD73F8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD73F8u) goto L_08AD73F8;
    return;
L_08AD73F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD7404u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AD7404u) goto L_08AD7404;
    return;
L_08AD7404:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[21]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
      if (branch_taken) {
          goto L_08AD7458;
      }
      goto L_08AD7430;
    }
L_08AD7430:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD743Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD743Cu) goto L_08AD743C;
    return;
L_08AD743C:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7454;
      }
      goto L_08AD7448;
    }
L_08AD7448:
    ctx.gpr[31] = (0x08AD7450u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD7450u) goto L_08AD7450;
    return;
L_08AD7450:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD7454;
L_08AD7454:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[22]);
    goto L_08AD7458;
L_08AD7458:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7464u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7464u) goto L_08AD7464;
    return;
L_08AD7464:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD7478u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7478u) goto L_08AD7478;
    return;
L_08AD7478:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AD749Cu);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 160u, 0x08AD89D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD749Cu) goto L_08AD749C;
    return;
L_08AD749C:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08AD74DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16776u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8704));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD7570;
      }
      goto L_08AD7544;
    }
L_08AD7544:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7550u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD7550u) goto L_08AD7550;
    return;
L_08AD7550:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7568;
      }
      goto L_08AD755C;
    }
L_08AD755C:
    ctx.gpr[31] = (0x08AD7564u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD7564u) goto L_08AD7564;
    return;
L_08AD7564:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08AD7568;
L_08AD7568:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[21]);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    goto L_08AD7570;
L_08AD7570:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD757Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD757Cu) goto L_08AD757C;
    return;
L_08AD757C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD7588u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AD7588u) goto L_08AD7588;
    return;
L_08AD7588:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[21]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
      if (branch_taken) {
          goto L_08AD75DC;
      }
      goto L_08AD75B4;
    }
L_08AD75B4:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD75C0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD75C0u) goto L_08AD75C0;
    return;
L_08AD75C0:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD75D8;
      }
      goto L_08AD75CC;
    }
L_08AD75CC:
    ctx.gpr[31] = (0x08AD75D4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD75D4u) goto L_08AD75D4;
    return;
L_08AD75D4:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD75D8;
L_08AD75D8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[22]);
    goto L_08AD75DC;
L_08AD75DC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD75E8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD75E8u) goto L_08AD75E8;
    return;
L_08AD75E8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD75FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD75FCu) goto L_08AD75FC;
    return;
L_08AD75FC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AD7620u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 163u, 0x08AD8A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD7620u) goto L_08AD7620;
    return;
L_08AD7620:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08AD7660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[20] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8696));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD76DC;
      }
      goto L_08AD76B0;
    }
L_08AD76B0:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08AD76BCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD76BCu) goto L_08AD76BC;
    return;
L_08AD76BC:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD76D4;
      }
      goto L_08AD76C8;
    }
L_08AD76C8:
    ctx.gpr[31] = (0x08AD76D0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD76D0u) goto L_08AD76D0;
    return;
L_08AD76D0:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08AD76D4;
L_08AD76D4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[21]);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    goto L_08AD76DC;
L_08AD76DC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD76E8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD76E8u) goto L_08AD76E8;
    return;
L_08AD76E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD76F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AD76F4u) goto L_08AD76F4;
    return;
L_08AD76F4:
    ctx.gpr[4] = (16864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[21]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08AD7758;
      }
      goto L_08AD7730;
    }
L_08AD7730:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD773Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD773Cu) goto L_08AD773C;
    return;
L_08AD773C:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7754;
      }
      goto L_08AD7748;
    }
L_08AD7748:
    ctx.gpr[31] = (0x08AD7750u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD7750u) goto L_08AD7750;
    return;
L_08AD7750:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD7754;
L_08AD7754:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[22]);
    goto L_08AD7758;
L_08AD7758:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7764u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7764u) goto L_08AD7764;
    return;
L_08AD7764:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AD7778u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7778u) goto L_08AD7778;
    return;
L_08AD7778:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-27));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[31] = (0x08AD7788u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 169u, 0x08AD8B64u>(ctx, &aot_mem) && ctx.pc == 0x08AD7788u) goto L_08AD7788;
    return;
L_08AD7788:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD77C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16904u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8688));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD7854;
      }
      goto L_08AD7828;
    }
L_08AD7828:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7834u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD7834u) goto L_08AD7834;
    return;
L_08AD7834:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD784C;
      }
      goto L_08AD7840;
    }
L_08AD7840:
    ctx.gpr[31] = (0x08AD7848u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD7848u) goto L_08AD7848;
    return;
L_08AD7848:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08AD784C;
L_08AD784C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[21]);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    goto L_08AD7854;
L_08AD7854:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7860u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7860u) goto L_08AD7860;
    return;
L_08AD7860:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD786Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AD786Cu) goto L_08AD786C;
    return;
L_08AD786C:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[21]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
      if (branch_taken) {
          goto L_08AD78C4;
      }
      goto L_08AD789C;
    }
L_08AD789C:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD78A8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD78A8u) goto L_08AD78A8;
    return;
L_08AD78A8:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD78C0;
      }
      goto L_08AD78B4;
    }
L_08AD78B4:
    ctx.gpr[31] = (0x08AD78BCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD78BCu) goto L_08AD78BC;
    return;
L_08AD78BC:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD78C0;
L_08AD78C0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[22]);
    goto L_08AD78C4;
L_08AD78C4:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD78D0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD78D0u) goto L_08AD78D0;
    return;
L_08AD78D0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD78E4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD78E4u) goto L_08AD78E4;
    return;
L_08AD78E4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AD790Cu);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 181u, 0x08AD8D84u>(ctx, &aot_mem) && ctx.pc == 0x08AD790Cu) goto L_08AD790C;
    return;
L_08AD790C:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08AD794C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17032u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (16576u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8680));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD79EC;
      }
      goto L_08AD79C0;
    }
L_08AD79C0:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08AD79CCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD79CCu) goto L_08AD79CC;
    return;
L_08AD79CC:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD79E4;
      }
      goto L_08AD79D8;
    }
L_08AD79D8:
    ctx.gpr[31] = (0x08AD79E0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD79E0u) goto L_08AD79E0;
    return;
L_08AD79E0:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08AD79E4;
L_08AD79E4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[21]);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    goto L_08AD79EC;
L_08AD79EC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD79F8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD79F8u) goto L_08AD79F8;
    return;
L_08AD79F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD7A04u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AD7A04u) goto L_08AD7A04;
    return;
L_08AD7A04:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[21]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
      if (branch_taken) {
          goto L_08AD7A5C;
      }
      goto L_08AD7A34;
    }
L_08AD7A34:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7A40u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD7A40u) goto L_08AD7A40;
    return;
L_08AD7A40:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7A58;
      }
      goto L_08AD7A4C;
    }
L_08AD7A4C:
    ctx.gpr[31] = (0x08AD7A54u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD7A54u) goto L_08AD7A54;
    return;
L_08AD7A54:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD7A58;
L_08AD7A58:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[22]);
    goto L_08AD7A5C;
L_08AD7A5C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7A68u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7A68u) goto L_08AD7A68;
    return;
L_08AD7A68:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08AD7A7Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7A7Cu) goto L_08AD7A7C;
    return;
L_08AD7A7C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AD7AA4u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 172u, 0x08AD8BF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD7AA4u) goto L_08AD7AA4;
    return;
L_08AD7AA4:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
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
L_08AD7AE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16904u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (16448u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8672));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD7B88;
      }
      goto L_08AD7B5C;
    }
L_08AD7B5C:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7B68u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD7B68u) goto L_08AD7B68;
    return;
L_08AD7B68:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7B80;
      }
      goto L_08AD7B74;
    }
L_08AD7B74:
    ctx.gpr[31] = (0x08AD7B7Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD7B7Cu) goto L_08AD7B7C;
    return;
L_08AD7B7C:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08AD7B80;
L_08AD7B80:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[21]);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    goto L_08AD7B88;
L_08AD7B88:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7B94u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7B94u) goto L_08AD7B94;
    return;
L_08AD7B94:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD7BA0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AD7BA0u) goto L_08AD7BA0;
    return;
L_08AD7BA0:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[21]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
      if (branch_taken) {
          goto L_08AD7BF8;
      }
      goto L_08AD7BD0;
    }
L_08AD7BD0:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7BDCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD7BDCu) goto L_08AD7BDC;
    return;
L_08AD7BDC:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7BF4;
      }
      goto L_08AD7BE8;
    }
L_08AD7BE8:
    ctx.gpr[31] = (0x08AD7BF0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD7BF0u) goto L_08AD7BF0;
    return;
L_08AD7BF0:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD7BF4;
L_08AD7BF4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[22]);
    goto L_08AD7BF8;
L_08AD7BF8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7C04u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7C04u) goto L_08AD7C04;
    return;
L_08AD7C04:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08AD7C18u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7C18u) goto L_08AD7C18;
    return;
L_08AD7C18:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AD7C40u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 186u, 0x08AD8E70u>(ctx, &aot_mem) && ctx.pc == 0x08AD7C40u) goto L_08AD7C40;
    return;
L_08AD7C40:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
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
L_08AD7C84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17032u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (16576u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8672));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD7D24;
      }
      goto L_08AD7CF8;
    }
L_08AD7CF8:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7D04u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD7D04u) goto L_08AD7D04;
    return;
L_08AD7D04:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7D1C;
      }
      goto L_08AD7D10;
    }
L_08AD7D10:
    ctx.gpr[31] = (0x08AD7D18u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD7D18u) goto L_08AD7D18;
    return;
L_08AD7D18:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08AD7D1C;
L_08AD7D1C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[21]);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    goto L_08AD7D24;
L_08AD7D24:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7D30u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7D30u) goto L_08AD7D30;
    return;
L_08AD7D30:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD7D3Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AD7D3Cu) goto L_08AD7D3C;
    return;
L_08AD7D3C:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[21]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
      if (branch_taken) {
          goto L_08AD7D94;
      }
      goto L_08AD7D6C;
    }
L_08AD7D6C:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7D78u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD7D78u) goto L_08AD7D78;
    return;
L_08AD7D78:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7D90;
      }
      goto L_08AD7D84;
    }
L_08AD7D84:
    ctx.gpr[31] = (0x08AD7D8Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD7D8Cu) goto L_08AD7D8C;
    return;
L_08AD7D8C:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD7D90;
L_08AD7D90:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[22]);
    goto L_08AD7D94;
L_08AD7D94:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7DA0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7DA0u) goto L_08AD7DA0;
    return;
L_08AD7DA0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08AD7DB4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7DB4u) goto L_08AD7DB4;
    return;
L_08AD7DB4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AD7DDCu);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 172u, 0x08AD8BF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD7DDCu) goto L_08AD7DDC;
    return;
L_08AD7DDC:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
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
L_08AD7E20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16776u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (2230u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-25504)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD7F54;
      }
      goto L_08AD7E90;
    }
L_08AD7E90:
    ctx.gpr[21] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-8664));
      if (branch_taken) {
          goto L_08AD7EC8;
      }
      goto L_08AD7E9C;
    }
L_08AD7E9C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7EA8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD7EA8u) goto L_08AD7EA8;
    return;
L_08AD7EA8:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7EC0;
      }
      goto L_08AD7EB4;
    }
L_08AD7EB4:
    ctx.gpr[31] = (0x08AD7EBCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD7EBCu) goto L_08AD7EBC;
    return;
L_08AD7EBC:
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    goto L_08AD7EC0;
L_08AD7EC0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[19]);
    ctx.gpr[22] = (ctx.gpr[19] | 0u);
    goto L_08AD7EC8;
L_08AD7EC8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7ED4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7ED4u) goto L_08AD7ED4;
    return;
L_08AD7ED4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD7EE0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AD7EE0u) goto L_08AD7EE0;
    return;
L_08AD7EE0:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[19]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
      if (branch_taken) {
          goto L_08AD7F2C;
      }
      goto L_08AD7F04;
    }
L_08AD7F04:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7F10u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD7F10u) goto L_08AD7F10;
    return;
L_08AD7F10:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7F28;
      }
      goto L_08AD7F1C;
    }
L_08AD7F1C:
    ctx.gpr[31] = (0x08AD7F24u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD7F24u) goto L_08AD7F24;
    return;
L_08AD7F24:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD7F28;
L_08AD7F28:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[22]);
    goto L_08AD7F2C;
L_08AD7F2C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7F38u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7F38u) goto L_08AD7F38;
    return;
L_08AD7F38:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD7F4Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7F4Cu) goto L_08AD7F4C;
    return;
L_08AD7F4C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 3u, 0x08AD8014u>(ctx, &aot_mem); return;
      }
      goto L_08AD7F54;
    }
L_08AD7F54:
    ctx.gpr[21] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-8656));
      if (branch_taken) {
          goto L_08AD7F8C;
      }
      goto L_08AD7F60;
    }
L_08AD7F60:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7F6Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD7F6Cu) goto L_08AD7F6C;
    return;
L_08AD7F6C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7F84;
      }
      goto L_08AD7F78;
    }
L_08AD7F78:
    ctx.gpr[31] = (0x08AD7F80u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD7F80u) goto L_08AD7F80;
    return;
L_08AD7F80:
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    goto L_08AD7F84;
L_08AD7F84:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[19]);
    ctx.gpr[22] = (ctx.gpr[19] | 0u);
    goto L_08AD7F8C;
L_08AD7F8C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7F98u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7F98u) goto L_08AD7F98;
    return;
L_08AD7F98:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD7FA4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AD7FA4u) goto L_08AD7FA4;
    return;
L_08AD7FA4:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[19]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
      if (branch_taken) {
          goto L_08AD7FF0;
      }
      goto L_08AD7FC8;
    }
L_08AD7FC8:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7FD4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD7FD4u) goto L_08AD7FD4;
    return;
L_08AD7FD4:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7FEC;
      }
      goto L_08AD7FE0;
    }
L_08AD7FE0:
    ctx.gpr[31] = (0x08AD7FE8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD7FE8u) goto L_08AD7FE8;
    return;
L_08AD7FE8:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD7FEC;
L_08AD7FEC:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[22]);
    goto L_08AD7FF0;
L_08AD7FF0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7FFCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7FFCu) goto L_08AD7FFC;
    return;
L_08AD7FFC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.pc = 0x08AD8000u; return;
}

void recomp_unit_0180(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0180_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_180(Runtime &runtime) {
    runtime.register_generated_unit(180u, 0x08AD4000u, 16384u, &recomp_unit_0180, &recomp_unit_0180_entry);
    runtime.register_function(0x08AD4004u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4010u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD403Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4048u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4054u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4060u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD406Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD407Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4088u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4094u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4114u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4160u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4190u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD42A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD43D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD45B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD478Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4820u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4844u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4850u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD485Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4864u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4868u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4870u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD487Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4890u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4898u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4900u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4908u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD491Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4924u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4938u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4940u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4954u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD495Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4970u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4978u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD498Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD49A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A08u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A20u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A2Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A40u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AA4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AB0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4ABCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AC4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AE4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AF0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B68u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BA4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BB0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BC4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BCCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BD8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BF8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C1Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C40u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C68u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C78u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CF4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4DA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4DB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4DB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4DC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EBCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4ED8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EF8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F0Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F78u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4FA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4FB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4FCCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4FD8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4FE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4FFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5008u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5018u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5090u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD50BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD50E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD50FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5104u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD510Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD511Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5130u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5144u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5154u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD515Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5164u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5170u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5198u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5210u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5218u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5224u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5240u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5248u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5254u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5270u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5278u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5284u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD528Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5298u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD52A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD52B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD52BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD52CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD52D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD52E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD52F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5300u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5310u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5328u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5334u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5348u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5354u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD537Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5388u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5398u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5404u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5414u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5430u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD544Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5454u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD545Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5464u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD546Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5474u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD547Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5484u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD548Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD549Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD54ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD54BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD54CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD54F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5504u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5510u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5518u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5524u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD552Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5534u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD553Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5540u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5548u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5550u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5558u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5560u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5568u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD556Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5588u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD55DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD55FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5604u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5618u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5628u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5638u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5640u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5650u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5658u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5664u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD566Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5678u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5680u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD568Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5694u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD56A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD56C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD56D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD56DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD56E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5708u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD574Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5768u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5778u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD577Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD579Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD57F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5808u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5810u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD581Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5824u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5834u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD583Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5848u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5850u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD586Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5874u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5880u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5888u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5898u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5908u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5914u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD591Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5930u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD593Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD594Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5954u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5960u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5970u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD597Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD598Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5994u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A00u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A40u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5ACCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AD4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B0Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B20u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B50u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B64u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5BA4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5BB0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5BD4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5BFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C0Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CCCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CD4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CF0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D00u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D7Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DA4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DB0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DC4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E20u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E2Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E44u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E50u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E68u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E78u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E7Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EC4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5ED0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5ED8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F8Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FB0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FC8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FD4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FF8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6000u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD600Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6018u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6020u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6028u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6030u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD603Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6044u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD604Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6054u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD605Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6068u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6070u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD607Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6084u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD608Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6104u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD610Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6114u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD611Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6124u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD612Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6134u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD613Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6144u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD614Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6154u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD615Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6170u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD617Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6188u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6200u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6208u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6210u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6220u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6230u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6238u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6240u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6248u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6250u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6258u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6260u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6268u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6270u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6278u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6280u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6288u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6290u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6298u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6308u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6310u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD631Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6328u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6334u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD633Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6348u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6350u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6358u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6360u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6368u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6374u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD637Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6388u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6404u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6414u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6428u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD644Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6454u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD645Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6468u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD646Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6480u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6488u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6538u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6558u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6574u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6584u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD65A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD65B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD65C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD65CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD65D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD65DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD65F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6608u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6624u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD662Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6638u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6640u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD665Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6664u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD667Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6710u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6718u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6750u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6758u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6774u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6790u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6798u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6808u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6810u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6824u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD682Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6834u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6860u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6878u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6890u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD68BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD68D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6900u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD691Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6928u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6958u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD69A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD69C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD69D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD69ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD69F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD69FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A20u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A40u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AB0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AC8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6ADCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AE4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B44u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B64u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6BA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6BB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6BBCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6BC4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6BDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6BE4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6BECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C40u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CE4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CF0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6DE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6DF4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E20u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E44u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E50u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E7Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6EA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6EC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6EC8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6ED0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6EECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6EF0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6EF8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F08u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F50u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F7Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6FB0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7024u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7054u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7070u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD707Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7098u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD70A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD70E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7104u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7114u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD711Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7124u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD712Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7138u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD714Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7150u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7154u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD715Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7164u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD716Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7184u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD71D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD71F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7230u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7240u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7258u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7268u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7270u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD727Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7294u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD72B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD72C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD72DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD72FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7314u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7324u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7358u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD73C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD73CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD73D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD73E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD73E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD73ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD73F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7404u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7430u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD743Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7448u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7450u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7454u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7458u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7464u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7478u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD749Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD74DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7544u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7550u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD755Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7564u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7568u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7570u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD757Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7588u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7620u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7660u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7730u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD773Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7748u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7750u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7754u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7758u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7764u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7778u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7788u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7828u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7834u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7840u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7848u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD784Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7854u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7860u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD786Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD789Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD78A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD78B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD78BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD78C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD78C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD78D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD78E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD790Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD794Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A40u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A68u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A7Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7AA4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7AE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B68u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B7Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7BA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7BD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7BDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7BE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7BF0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7BF4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7BF8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C40u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7CF8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D1Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D24u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D78u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D8Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7DA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7DB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7DDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E20u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7EA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7EB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7EBCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7EC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7EC8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7ED4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7EE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F1Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F24u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F2Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F78u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F8Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FA4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FC8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FD4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FF0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FFCu, &recomp_unit_0180, "recomp_unit_0180");
}
} // namespace psprecomp
