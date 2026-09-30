#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0031[4094] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12,
    0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0,
    0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27,
    0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34,
    0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 39, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 49, 0, 50, 0, 0, 0, 0, 51, 0,
    52, 0, 0, 0, 0, 53, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0,
    0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73,
    0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 83, 84, 0, 85, 0,
    86, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 89, 90, 0, 91, 0, 0, 0, 92, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 100, 0, 101, 0, 102, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106,
    0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0,
    116, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0,
    125, 0, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 144, 0, 0,
    0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 148, 149, 0, 0, 150, 0, 151, 0, 0, 152, 0, 153, 0, 154, 0, 155, 0, 156,
    0, 0, 157, 158, 0, 159, 0, 0, 160, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0,
    168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 172, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0,
    0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 183, 0, 184, 185, 0, 186, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0,
    0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 197, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0,
    201, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208,
    0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 214,
    0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 219, 220, 0,
    0, 221, 0, 0, 0, 222, 0, 0, 223, 0, 224, 0, 225, 0, 226, 0, 227, 0, 0, 228, 229, 0, 230, 0, 0, 231, 232, 0, 233, 0, 234, 0,
    235, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0,
    0, 0, 0, 0, 242, 243, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 249, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 255, 256, 0, 257, 0, 0, 0, 0, 258, 0, 259, 0,
    0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 265, 0, 266, 0, 267,
    0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0,
    0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0,
    0, 0, 0, 0, 280, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0,
    0, 0, 0, 0, 286, 0, 287, 288, 0, 0, 289, 0, 0, 0, 290, 0, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 0, 296, 297, 0, 298,
    0, 0, 299, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 311, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 323, 324, 0,
    325, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330,
    0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 333, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 339,
    0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345,
    0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 351,
    0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 355, 356, 0, 0, 357, 0, 0, 0, 358, 0,
    0, 359, 0, 360, 0, 361, 0, 362, 0, 363, 0, 0, 364, 365, 0, 366, 0, 0, 367, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 0, 0, 373,
    0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 379, 0,
    0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 386,
    0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 390, 391, 0, 392, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 395,
    0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 402, 0, 0, 0,
    403, 0, 404, 0, 0, 0, 0, 0, 405, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0,
    0, 0, 0, 412, 0, 0, 413, 0, 414, 0, 0, 415, 0, 416, 0, 417, 0, 418, 0, 419, 0, 420, 0, 421, 0, 422, 0, 423, 0, 0, 424, 0,
    0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 431, 0,
    432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 437, 438, 0, 0, 439, 0, 440, 0, 0, 441,
    0, 442, 0, 443, 0, 444, 0, 445, 0, 0, 446, 447, 0, 448, 0, 0, 449, 450, 0, 451, 0, 452, 0, 453, 0, 454, 0, 0, 0, 455, 0, 0,
    0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 461, 0, 0, 462,
    0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 472,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0,
    0, 0, 0, 477, 0, 478, 0, 0, 0, 479, 0, 480, 0, 0, 0, 481, 482, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 485, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 0, 0, 491, 0,
    492, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0,
    500, 0, 501, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    508, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 513, 514, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0,
    0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 518, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 521, 0, 0, 0, 522, 523, 0, 0,
    0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 527, 528, 0, 529, 0, 0, 0, 0, 0, 530, 0, 0, 531, 0, 532, 0, 533, 0, 534, 0, 535, 0, 0, 0, 0, 536, 0, 537,
    0, 538, 0, 0, 539, 0, 540, 541, 0, 0, 0, 0, 542, 0, 0, 543, 0, 544, 0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 547, 0, 548, 0,
    549, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 552, 0, 553, 0, 554, 0, 555, 0, 556, 0, 557, 0, 558, 559, 0, 0, 0, 0, 560, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0,
    563, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0,
    0, 0, 0, 0, 568, 0, 0, 569, 0, 570, 0, 571, 0, 572, 0, 0, 0, 573, 0, 574, 0, 575, 0, 0, 576, 0, 0, 577, 0, 578, 0, 0,
    579, 0, 0, 0, 0, 0, 580, 581, 0, 0, 0, 0, 582, 0, 0, 583, 0, 584, 0, 585, 0, 0, 586, 0, 0, 587, 0, 588, 0, 0, 589, 0,
    0, 0, 0, 0, 0, 590, 0, 591, 0, 0, 0, 0, 592, 0, 593, 0, 594, 0, 595, 0, 0, 596, 0, 0, 597, 0, 598, 0, 0, 599, 0, 0,
    0, 0, 0, 600, 601, 0, 602, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 608, 0, 0, 0, 609, 0, 0, 610, 0, 0, 0, 0,
    0, 0, 0, 0, 611, 0, 612, 0, 0, 0, 0, 0, 613, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0,
    0, 0, 616, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 618, 0, 619, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0,
    626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 628, 0, 629, 0, 630, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0,
    0, 0, 0, 632, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 636, 0, 0, 637, 0, 0, 0, 638, 0, 0, 639, 0,
    640, 0, 0, 641, 0, 642, 643, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 645, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 649, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0,
    0, 653, 0, 654, 0, 0, 0, 655, 0, 656, 0, 0, 0, 657, 0, 658, 0, 659, 0, 0, 0, 660, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 665, 0, 666, 0, 667,
    0, 0, 0, 0, 0, 0, 668, 0, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 673, 0, 0, 674, 0, 675, 0, 676, 0, 0, 677, 0, 0, 678, 0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 681, 0, 0,
    0, 0, 0, 0, 0, 0, 682, 0, 0, 683, 0, 0, 0, 0, 0, 684, 0, 685, 0, 686, 0, 0, 687, 0, 0, 0, 0, 0, 0, 688, 0, 0,
    0, 0, 0, 0, 0, 689, 0, 0, 0, 690, 0, 691, 0, 0, 692, 0, 693, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 695, 0, 0, 696,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0,
    0, 0, 0, 701, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0,
    0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 709,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 711, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    713, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 717, 0, 0, 718, 0,
    0, 0, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 723, 0, 0, 724, 0, 0, 0, 0, 0, 725, 0, 0,
    0, 726, 0, 0, 0, 727, 0, 728, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 731, 0, 0,
    0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0,
    737, 0, 0, 0, 0, 0, 0, 0, 738, 0, 739, 0, 0, 0, 0, 740, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    742, 0, 0, 743, 0, 0, 0, 0, 0, 744, 0, 745, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 748, 0, 0,
    0, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 752, 0, 0, 0, 753, 0, 0, 0, 754,
    0, 0, 0, 0, 0, 755, 0, 756, 0, 0, 0, 757, 0, 758, 0, 0, 759, 0, 760, 761, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 763,
    0, 0, 0, 764, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 769, 0, 0, 770, 0, 0, 771, 0, 0, 0, 0, 772, 0, 0, 0, 0, 773, 0, 0, 0,
    0, 0, 0, 774, 0, 0, 0, 775, 0, 0, 0, 776, 0, 0, 0, 777, 0, 0, 0, 778, 0, 779, 0, 780, 0, 0, 781, 782, 0, 0, 0, 0,
    783, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 785, 0, 786, 0, 0, 0, 787, 0, 0, 788, 0, 0, 0, 0, 0, 0, 789, 0, 0, 0,
    790, 0, 791, 0, 792, 0, 793, 0, 794, 0, 0, 0, 0, 795, 0, 796, 0, 797, 0, 0, 0, 0, 798, 0, 0, 0, 0, 799, 0, 800, 0, 801,
    0, 0, 802, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 805, 0, 806, 0, 0, 807, 0, 0, 0, 808, 0,
    809, 0, 0, 810, 0, 811, 0, 812, 0, 0, 813, 0, 0, 0, 0, 0, 814, 0, 815, 0, 0, 816, 0, 0, 0, 0, 817, 0, 818, 0, 0, 819,
    0, 0, 0, 0, 0, 820, 0, 821, 0, 0, 822, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 0, 825,
    0, 0, 0, 826, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 828, 0, 0, 829, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0,
    831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 836, 0, 0, 837, 0, 0, 838, 0, 0, 0, 0, 0, 839, 0, 0, 0, 0,
    0, 840, 0, 0, 0, 0, 0, 0, 841, 0, 0, 0, 842, 0, 843, 0, 844, 0, 845, 0, 846, 0, 847, 0, 848, 0, 0, 849, 0, 850,
};
void recomp_unit_0031_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08880000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0031[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08880000;
    case 2u: goto L_08880014;
    case 3u: goto L_0888001C;
    case 4u: goto L_0888003C;
    case 5u: goto L_0888004C;
    case 6u: goto L_08880074;
    case 7u: goto L_088800A8;
    case 8u: goto L_088800B4;
    case 9u: goto L_088800BC;
    case 10u: goto L_088800D0;
    case 11u: goto L_088800E4;
    case 12u: goto L_088800FC;
    case 13u: goto L_0888011C;
    case 14u: goto L_08880124;
    case 15u: goto L_0888012C;
    case 16u: goto L_08880138;
    case 17u: goto L_08880148;
    case 18u: goto L_08880150;
    case 19u: goto L_08880160;
    case 20u: goto L_08880168;
    case 21u: goto L_08880184;
    case 22u: goto L_08880198;
    case 23u: goto L_088801AC;
    case 24u: goto L_088801C0;
    case 25u: goto L_088801D4;
    case 26u: goto L_088801E8;
    case 27u: goto L_088801FC;
    case 28u: goto L_08880204;
    case 29u: goto L_08880218;
    case 30u: goto L_0888022C;
    case 31u: goto L_08880240;
    case 32u: goto L_08880254;
    case 33u: goto L_08880258;
    case 34u: goto L_0888027C;
    case 35u: goto L_08880284;
    case 36u: goto L_0888029C;
    case 37u: goto L_088802B0;
    case 38u: goto L_088802D0;
    case 39u: goto L_088802D4;
    case 40u: goto L_088802DC;
    case 41u: goto L_088802E4;
    case 42u: goto L_0888030C;
    case 43u: goto L_08880314;
    case 44u: goto L_08880334;
    case 45u: goto L_08880344;
    case 46u: goto L_08880364;
    case 47u: goto L_088803D0;
    case 48u: goto L_088803D8;
    case 49u: goto L_088803DC;
    case 50u: goto L_088803E4;
    case 51u: goto L_088803F8;
    case 52u: goto L_08880400;
    case 53u: goto L_08880414;
    case 54u: goto L_08880418;
    case 55u: goto L_0888043C;
    case 56u: goto L_08880454;
    case 57u: goto L_0888045C;
    case 58u: goto L_08880464;
    case 59u: goto L_0888046C;
    case 60u: goto L_08880474;
    case 61u: goto L_0888047C;
    case 62u: goto L_08880488;
    case 63u: goto L_088804B8;
    case 64u: goto L_088804C0;
    case 65u: goto L_088804CC;
    case 66u: goto L_088804EC;
    case 67u: goto L_08880500;
    case 68u: goto L_088805F4;
    case 69u: goto L_08880614;
    case 70u: goto L_08880680;
    case 71u: goto L_08880688;
    case 72u: goto L_088806BC;
    case 73u: goto L_088806FC;
    case 74u: goto L_0888070C;
    case 75u: goto L_08880730;
    case 76u: goto L_08880738;
    case 77u: goto L_0888076C;
    case 78u: goto L_08880798;
    case 79u: goto L_088807AC;
    case 80u: goto L_088807B4;
    case 81u: goto L_088807CC;
    case 82u: goto L_088807E4;
    case 83u: goto L_088807EC;
    case 84u: goto L_088807F0;
    case 85u: goto L_088807F8;
    case 86u: goto L_08880800;
    case 87u: goto L_08880818;
    case 88u: goto L_08880820;
    case 89u: goto L_08880830;
    case 90u: goto L_08880834;
    case 91u: goto L_0888083C;
    case 92u: goto L_0888084C;
    case 93u: goto L_08880850;
    case 94u: goto L_08880858;
    case 95u: goto L_08880880;
    case 96u: goto L_08880888;
    case 97u: goto L_088808A0;
    case 98u: goto L_088808B4;
    case 99u: goto L_088808D4;
    case 100u: goto L_088808D8;
    case 101u: goto L_088808E0;
    case 102u: goto L_088808E8;
    case 103u: goto L_0888092C;
    case 104u: goto L_08880934;
    case 105u: goto L_0888096C;
    case 106u: goto L_0888097C;
    case 107u: goto L_08880984;
    case 108u: goto L_088809C8;
    case 109u: goto L_08880A38;
    case 110u: goto L_08880A44;
    case 111u: goto L_08880A4C;
    case 112u: goto L_08880A64;
    case 113u: goto L_08880A7C;
    case 114u: goto L_08880AB4;
    case 115u: goto L_08880AE8;
    case 116u: goto L_08880B00;
    case 117u: goto L_08880B08;
    case 118u: goto L_08880B10;
    case 119u: goto L_08880B30;
    case 120u: goto L_08880B3C;
    case 121u: goto L_08880B48;
    case 122u: goto L_08880B54;
    case 123u: goto L_08880B6C;
    case 124u: goto L_08880B78;
    case 125u: goto L_08880B80;
    case 126u: goto L_08880B8C;
    case 127u: goto L_08880B94;
    case 128u: goto L_08880B9C;
    case 129u: goto L_08880BA4;
    case 130u: goto L_08880BAC;
    case 131u: goto L_08880BB4;
    case 132u: goto L_08880BBC;
    case 133u: goto L_08880BC4;
    case 134u: goto L_08880BCC;
    case 135u: goto L_08880BD8;
    case 136u: goto L_08880BEC;
    case 137u: goto L_08880C00;
    case 138u: goto L_08880C14;
    case 139u: goto L_08880C28;
    case 140u: goto L_08880C3C;
    case 141u: goto L_08880C50;
    case 142u: goto L_08880C58;
    case 143u: goto L_08880C60;
    case 144u: goto L_08880C74;
    case 145u: goto L_08880C88;
    case 146u: goto L_08880C9C;
    case 147u: goto L_08880CB0;
    case 148u: goto L_08880CB8;
    case 149u: goto L_08880CBC;
    case 150u: goto L_08880CC8;
    case 151u: goto L_08880CD0;
    case 152u: goto L_08880CDC;
    case 153u: goto L_08880CE4;
    case 154u: goto L_08880CEC;
    case 155u: goto L_08880CF4;
    case 156u: goto L_08880CFC;
    case 157u: goto L_08880D08;
    case 158u: goto L_08880D0C;
    case 159u: goto L_08880D14;
    case 160u: goto L_08880D20;
    case 161u: goto L_08880D24;
    case 162u: goto L_08880D2C;
    case 163u: goto L_08880D34;
    case 164u: goto L_08880D3C;
    case 165u: goto L_08880D44;
    case 166u: goto L_08880D54;
    case 167u: goto L_08880D78;
    case 168u: goto L_08880D80;
    case 169u: goto L_08880D98;
    case 170u: goto L_08880DAC;
    case 171u: goto L_08880DCC;
    case 172u: goto L_08880DD0;
    case 173u: goto L_08880DDC;
    case 174u: goto L_08880DE8;
    case 175u: goto L_08880E04;
    case 176u: goto L_08880E0C;
    case 177u: goto L_08880E2C;
    case 178u: goto L_08880E3C;
    case 179u: goto L_08880E48;
    case 180u: goto L_08880E50;
    case 181u: goto L_08880E98;
    case 182u: goto L_08880F00;
    case 183u: goto L_08880F0C;
    case 184u: goto L_08880F14;
    case 185u: goto L_08880F18;
    case 186u: goto L_08880F20;
    case 187u: goto L_08880F34;
    case 188u: goto L_08880F3C;
    case 189u: goto L_08880F50;
    case 190u: goto L_08880F5C;
    case 191u: goto L_08880F6C;
    case 192u: goto L_08880F84;
    case 193u: goto L_08880F90;
    case 194u: goto L_08880F9C;
    case 195u: goto L_08880FAC;
    case 196u: goto L_08880FB4;
    case 197u: goto L_08880FC8;
    case 198u: goto L_08880FD0;
    case 199u: goto L_08880FD8;
    case 200u: goto L_08880FF4;
    case 201u: goto L_08881000;
    case 202u: goto L_0888100C;
    case 203u: goto L_08881018;
    case 204u: goto L_08881030;
    case 205u: goto L_0888103C;
    case 206u: goto L_08881044;
    case 207u: goto L_08881060;
    case 208u: goto L_0888107C;
    case 209u: goto L_08881098;
    case 210u: goto L_088810B4;
    case 211u: goto L_088810D0;
    case 212u: goto L_088810EC;
    case 213u: goto L_088810F4;
    case 214u: goto L_088810FC;
    case 215u: goto L_08881118;
    case 216u: goto L_08881134;
    case 217u: goto L_08881150;
    case 218u: goto L_0888116C;
    case 219u: goto L_08881174;
    case 220u: goto L_08881178;
    case 221u: goto L_08881184;
    case 222u: goto L_08881194;
    case 223u: goto L_088811A0;
    case 224u: goto L_088811A8;
    case 225u: goto L_088811B0;
    case 226u: goto L_088811B8;
    case 227u: goto L_088811C0;
    case 228u: goto L_088811CC;
    case 229u: goto L_088811D0;
    case 230u: goto L_088811D8;
    case 231u: goto L_088811E4;
    case 232u: goto L_088811E8;
    case 233u: goto L_088811F0;
    case 234u: goto L_088811F8;
    case 235u: goto L_08881200;
    case 236u: goto L_08881208;
    case 237u: goto L_08881218;
    case 238u: goto L_0888123C;
    case 239u: goto L_08881244;
    case 240u: goto L_0888125C;
    case 241u: goto L_08881270;
    case 242u: goto L_08881290;
    case 243u: goto L_08881294;
    case 244u: goto L_088812A0;
    case 245u: goto L_088812A8;
    case 246u: goto L_088812D0;
    case 247u: goto L_088812D8;
    case 248u: goto L_08881300;
    case 249u: goto L_08881310;
    case 250u: goto L_08881318;
    case 251u: goto L_08881320;
    case 252u: goto L_0888135C;
    case 253u: goto L_088813BC;
    case 254u: goto L_088813C8;
    case 255u: goto L_088813D0;
    case 256u: goto L_088813D4;
    case 257u: goto L_088813DC;
    case 258u: goto L_088813F0;
    case 259u: goto L_088813F8;
    case 260u: goto L_0888140C;
    case 261u: goto L_0888141C;
    case 262u: goto L_0888143C;
    case 263u: goto L_0888144C;
    case 264u: goto L_08881454;
    case 265u: goto L_0888146C;
    case 266u: goto L_08881474;
    case 267u: goto L_0888147C;
    case 268u: goto L_08881498;
    case 269u: goto L_088814A4;
    case 270u: goto L_088814B0;
    case 271u: goto L_088814BC;
    case 272u: goto L_088814D4;
    case 273u: goto L_088814E0;
    case 274u: goto L_088814E8;
    case 275u: goto L_08881504;
    case 276u: goto L_08881520;
    case 277u: goto L_0888153C;
    case 278u: goto L_08881558;
    case 279u: goto L_08881574;
    case 280u: goto L_08881590;
    case 281u: goto L_08881598;
    case 282u: goto L_088815A0;
    case 283u: goto L_088815BC;
    case 284u: goto L_088815D8;
    case 285u: goto L_088815F4;
    case 286u: goto L_08881610;
    case 287u: goto L_08881618;
    case 288u: goto L_0888161C;
    case 289u: goto L_08881628;
    case 290u: goto L_08881638;
    case 291u: goto L_08881644;
    case 292u: goto L_0888164C;
    case 293u: goto L_08881654;
    case 294u: goto L_0888165C;
    case 295u: goto L_08881664;
    case 296u: goto L_08881670;
    case 297u: goto L_08881674;
    case 298u: goto L_0888167C;
    case 299u: goto L_08881688;
    case 300u: goto L_0888168C;
    case 301u: goto L_08881694;
    case 302u: goto L_0888169C;
    case 303u: goto L_088816A4;
    case 304u: goto L_088816AC;
    case 305u: goto L_088816BC;
    case 306u: goto L_088816E0;
    case 307u: goto L_088816E8;
    case 308u: goto L_08881700;
    case 309u: goto L_08881714;
    case 310u: goto L_08881734;
    case 311u: goto L_08881738;
    case 312u: goto L_08881744;
    case 313u: goto L_0888174C;
    case 314u: goto L_08881774;
    case 315u: goto L_0888177C;
    case 316u: goto L_088817A4;
    case 317u: goto L_088817B4;
    case 318u: goto L_088817BC;
    case 319u: goto L_088817C4;
    case 320u: goto L_08881800;
    case 321u: goto L_08881860;
    case 322u: goto L_0888186C;
    case 323u: goto L_08881874;
    case 324u: goto L_08881878;
    case 325u: goto L_08881880;
    case 326u: goto L_08881894;
    case 327u: goto L_0888189C;
    case 328u: goto L_088818B0;
    case 329u: goto L_088818E0;
    case 330u: goto L_088818FC;
    case 331u: goto L_0888190C;
    case 332u: goto L_08881914;
    case 333u: goto L_0888192C;
    case 334u: goto L_08881934;
    case 335u: goto L_0888193C;
    case 336u: goto L_08881958;
    case 337u: goto L_08881964;
    case 338u: goto L_08881970;
    case 339u: goto L_0888197C;
    case 340u: goto L_08881994;
    case 341u: goto L_088819A0;
    case 342u: goto L_088819A8;
    case 343u: goto L_088819C4;
    case 344u: goto L_088819E0;
    case 345u: goto L_088819FC;
    case 346u: goto L_08881A18;
    case 347u: goto L_08881A34;
    case 348u: goto L_08881A50;
    case 349u: goto L_08881A58;
    case 350u: goto L_08881A60;
    case 351u: goto L_08881A7C;
    case 352u: goto L_08881A98;
    case 353u: goto L_08881AB4;
    case 354u: goto L_08881AD0;
    case 355u: goto L_08881AD8;
    case 356u: goto L_08881ADC;
    case 357u: goto L_08881AE8;
    case 358u: goto L_08881AF8;
    case 359u: goto L_08881B04;
    case 360u: goto L_08881B0C;
    case 361u: goto L_08881B14;
    case 362u: goto L_08881B1C;
    case 363u: goto L_08881B24;
    case 364u: goto L_08881B30;
    case 365u: goto L_08881B34;
    case 366u: goto L_08881B3C;
    case 367u: goto L_08881B48;
    case 368u: goto L_08881B4C;
    case 369u: goto L_08881B54;
    case 370u: goto L_08881B5C;
    case 371u: goto L_08881B64;
    case 372u: goto L_08881B6C;
    case 373u: goto L_08881B7C;
    case 374u: goto L_08881BA0;
    case 375u: goto L_08881BA8;
    case 376u: goto L_08881BC0;
    case 377u: goto L_08881BD4;
    case 378u: goto L_08881BF4;
    case 379u: goto L_08881BF8;
    case 380u: goto L_08881C04;
    case 381u: goto L_08881C0C;
    case 382u: goto L_08881C34;
    case 383u: goto L_08881C3C;
    case 384u: goto L_08881C64;
    case 385u: goto L_08881C74;
    case 386u: goto L_08881C7C;
    case 387u: goto L_08881C84;
    case 388u: goto L_08881CC0;
    case 389u: goto L_08881D30;
    case 390u: goto L_08881D38;
    case 391u: goto L_08881D3C;
    case 392u: goto L_08881D44;
    case 393u: goto L_08881D5C;
    case 394u: goto L_08881D64;
    case 395u: goto L_08881D7C;
    case 396u: goto L_08881D94;
    case 397u: goto L_08881DB4;
    case 398u: goto L_08881DBC;
    case 399u: goto L_08881DC8;
    case 400u: goto L_08881DD8;
    case 401u: goto L_08881DE8;
    case 402u: goto L_08881DF0;
    case 403u: goto L_08881E00;
    case 404u: goto L_08881E08;
    case 405u: goto L_08881E20;
    case 406u: goto L_08881E28;
    case 407u: goto L_08881E30;
    case 408u: goto L_08881E50;
    case 409u: goto L_08881E5C;
    case 410u: goto L_08881E68;
    case 411u: goto L_08881E74;
    case 412u: goto L_08881E8C;
    case 413u: goto L_08881E98;
    case 414u: goto L_08881EA0;
    case 415u: goto L_08881EAC;
    case 416u: goto L_08881EB4;
    case 417u: goto L_08881EBC;
    case 418u: goto L_08881EC4;
    case 419u: goto L_08881ECC;
    case 420u: goto L_08881ED4;
    case 421u: goto L_08881EDC;
    case 422u: goto L_08881EE4;
    case 423u: goto L_08881EEC;
    case 424u: goto L_08881EF8;
    case 425u: goto L_08881F0C;
    case 426u: goto L_08881F20;
    case 427u: goto L_08881F34;
    case 428u: goto L_08881F48;
    case 429u: goto L_08881F5C;
    case 430u: goto L_08881F70;
    case 431u: goto L_08881F78;
    case 432u: goto L_08881F80;
    case 433u: goto L_08881F94;
    case 434u: goto L_08881FA8;
    case 435u: goto L_08881FBC;
    case 436u: goto L_08881FD0;
    case 437u: goto L_08881FD8;
    case 438u: goto L_08881FDC;
    case 439u: goto L_08881FE8;
    case 440u: goto L_08881FF0;
    case 441u: goto L_08881FFC;
    case 442u: goto L_08882004;
    case 443u: goto L_0888200C;
    case 444u: goto L_08882014;
    case 445u: goto L_0888201C;
    case 446u: goto L_08882028;
    case 447u: goto L_0888202C;
    case 448u: goto L_08882034;
    case 449u: goto L_08882040;
    case 450u: goto L_08882044;
    case 451u: goto L_0888204C;
    case 452u: goto L_08882054;
    case 453u: goto L_0888205C;
    case 454u: goto L_08882064;
    case 455u: goto L_08882074;
    case 456u: goto L_08882098;
    case 457u: goto L_088820A0;
    case 458u: goto L_088820B8;
    case 459u: goto L_088820CC;
    case 460u: goto L_088820EC;
    case 461u: goto L_088820F0;
    case 462u: goto L_088820FC;
    case 463u: goto L_08882108;
    case 464u: goto L_08882134;
    case 465u: goto L_0888213C;
    case 466u: goto L_08882160;
    case 467u: goto L_08882170;
    case 468u: goto L_088821B8;
    case 469u: goto L_08882254;
    case 470u: goto L_08882260;
    case 471u: goto L_088822DC;
    case 472u: goto L_088822FC;
    case 473u: goto L_08882328;
    case 474u: goto L_08882350;
    case 475u: goto L_08882364;
    case 476u: goto L_08882370;
    case 477u: goto L_0888238C;
    case 478u: goto L_08882394;
    case 479u: goto L_088823A4;
    case 480u: goto L_088823AC;
    case 481u: goto L_088823BC;
    case 482u: goto L_088823C0;
    case 483u: goto L_088823C8;
    case 484u: goto L_088823D4;
    case 485u: goto L_08882408;
    case 486u: goto L_08882418;
    case 487u: goto L_08882424;
    case 488u: goto L_08882444;
    case 489u: goto L_08882460;
    case 490u: goto L_08882468;
    case 491u: goto L_08882478;
    case 492u: goto L_08882480;
    case 493u: goto L_08882490;
    case 494u: goto L_08882498;
    case 495u: goto L_088824B4;
    case 496u: goto L_088824C4;
    case 497u: goto L_088824CC;
    case 498u: goto L_088824E8;
    case 499u: goto L_088824F8;
    case 500u: goto L_08882500;
    case 501u: goto L_08882508;
    case 502u: goto L_08882528;
    case 503u: goto L_088825A4;
    case 504u: goto L_088825A8;
    case 505u: goto L_088825C4;
    case 506u: goto L_088825D0;
    case 507u: goto L_08882600;
    case 508u: goto L_08882680;
    case 509u: goto L_0888268C;
    case 510u: goto L_0888269C;
    case 511u: goto L_088826B0;
    case 512u: goto L_088826C4;
    case 513u: goto L_088826D0;
    case 514u: goto L_088826D4;
    case 515u: goto L_088826E8;
    case 516u: goto L_088826F8;
    case 517u: goto L_08882714;
    case 518u: goto L_08882728;
    case 519u: goto L_08882730;
    case 520u: goto L_08882754;
    case 521u: goto L_08882760;
    case 522u: goto L_08882770;
    case 523u: goto L_08882774;
    case 524u: goto L_08882794;
    case 525u: goto L_088827D0;
    case 526u: goto L_088827D8;
    case 527u: goto L_08882810;
    case 528u: goto L_08882814;
    case 529u: goto L_0888281C;
    case 530u: goto L_08882834;
    case 531u: goto L_08882840;
    case 532u: goto L_08882848;
    case 533u: goto L_08882850;
    case 534u: goto L_08882858;
    case 535u: goto L_08882860;
    case 536u: goto L_08882874;
    case 537u: goto L_0888287C;
    case 538u: goto L_08882884;
    case 539u: goto L_08882890;
    case 540u: goto L_08882898;
    case 541u: goto L_0888289C;
    case 542u: goto L_088828B0;
    case 543u: goto L_088828BC;
    case 544u: goto L_088828C4;
    case 545u: goto L_088828D4;
    case 546u: goto L_088828E8;
    case 547u: goto L_088828F0;
    case 548u: goto L_088828F8;
    case 549u: goto L_08882900;
    case 550u: goto L_0888291C;
    case 551u: goto L_08882924;
    case 552u: goto L_08882930;
    case 553u: goto L_08882938;
    case 554u: goto L_08882940;
    case 555u: goto L_08882948;
    case 556u: goto L_08882950;
    case 557u: goto L_08882958;
    case 558u: goto L_08882960;
    case 559u: goto L_08882964;
    case 560u: goto L_08882978;
    case 561u: goto L_088829AC;
    case 562u: goto L_088829F4;
    case 563u: goto L_08882A00;
    case 564u: goto L_08882A04;
    case 565u: goto L_08882A44;
    case 566u: goto L_08882A5C;
    case 567u: goto L_08882A70;
    case 568u: goto L_08882A90;
    case 569u: goto L_08882A9C;
    case 570u: goto L_08882AA4;
    case 571u: goto L_08882AAC;
    case 572u: goto L_08882AB4;
    case 573u: goto L_08882AC4;
    case 574u: goto L_08882ACC;
    case 575u: goto L_08882AD4;
    case 576u: goto L_08882AE0;
    case 577u: goto L_08882AEC;
    case 578u: goto L_08882AF4;
    case 579u: goto L_08882B00;
    case 580u: goto L_08882B18;
    case 581u: goto L_08882B1C;
    case 582u: goto L_08882B30;
    case 583u: goto L_08882B3C;
    case 584u: goto L_08882B44;
    case 585u: goto L_08882B4C;
    case 586u: goto L_08882B58;
    case 587u: goto L_08882B64;
    case 588u: goto L_08882B6C;
    case 589u: goto L_08882B78;
    case 590u: goto L_08882B94;
    case 591u: goto L_08882B9C;
    case 592u: goto L_08882BB0;
    case 593u: goto L_08882BB8;
    case 594u: goto L_08882BC0;
    case 595u: goto L_08882BC8;
    case 596u: goto L_08882BD4;
    case 597u: goto L_08882BE0;
    case 598u: goto L_08882BE8;
    case 599u: goto L_08882BF4;
    case 600u: goto L_08882C0C;
    case 601u: goto L_08882C10;
    case 602u: goto L_08882C18;
    case 603u: goto L_08882C38;
    case 604u: goto L_08882C6C;
    case 605u: goto L_08882CE4;
    case 606u: goto L_08882D14;
    case 607u: goto L_08882D38;
    case 608u: goto L_08882D50;
    case 609u: goto L_08882D60;
    case 610u: goto L_08882D6C;
    case 611u: goto L_08882D90;
    case 612u: goto L_08882D98;
    case 613u: goto L_08882DB0;
    case 614u: goto L_08882DBC;
    case 615u: goto L_08882DF4;
    case 616u: goto L_08882E08;
    case 617u: goto L_08882E20;
    case 618u: goto L_08882E34;
    case 619u: goto L_08882E3C;
    case 620u: goto L_08882E4C;
    case 621u: goto L_08882E84;
    case 622u: goto L_08882E98;
    case 623u: goto L_08882EA8;
    case 624u: goto L_08882EB4;
    case 625u: goto L_08882EF4;
    case 626u: goto L_08882F00;
    case 627u: goto L_08882F3C;
    case 628u: goto L_08882F44;
    case 629u: goto L_08882F4C;
    case 630u: goto L_08882F54;
    case 631u: goto L_08882F68;
    case 632u: goto L_08882F8C;
    case 633u: goto L_08882F94;
    case 634u: goto L_08882F9C;
    case 635u: goto L_08882FCC;
    case 636u: goto L_08882FD0;
    case 637u: goto L_08882FDC;
    case 638u: goto L_08882FEC;
    case 639u: goto L_08882FF8;
    case 640u: goto L_08883000;
    case 641u: goto L_0888300C;
    case 642u: goto L_08883014;
    case 643u: goto L_08883018;
    case 644u: goto L_08883038;
    case 645u: goto L_08883044;
    case 646u: goto L_0888304C;
    case 647u: goto L_08883070;
    case 648u: goto L_088830C0;
    case 649u: goto L_088830C4;
    case 650u: goto L_088830D0;
    case 651u: goto L_088830E0;
    case 652u: goto L_088830F4;
    case 653u: goto L_08883104;
    case 654u: goto L_0888310C;
    case 655u: goto L_0888311C;
    case 656u: goto L_08883124;
    case 657u: goto L_08883134;
    case 658u: goto L_0888313C;
    case 659u: goto L_08883144;
    case 660u: goto L_08883154;
    case 661u: goto L_0888315C;
    case 662u: goto L_0888318C;
    case 663u: goto L_088831B8;
    case 664u: goto L_088831D0;
    case 665u: goto L_088831EC;
    case 666u: goto L_088831F4;
    case 667u: goto L_088831FC;
    case 668u: goto L_08883218;
    case 669u: goto L_08883224;
    case 670u: goto L_08883240;
    case 671u: goto L_08883250;
    case 672u: goto L_08883264;
    case 673u: goto L_0888328C;
    case 674u: goto L_08883298;
    case 675u: goto L_088832A0;
    case 676u: goto L_088832A8;
    case 677u: goto L_088832B4;
    case 678u: goto L_088832C0;
    case 679u: goto L_088832C8;
    case 680u: goto L_088832D8;
    case 681u: goto L_088832F4;
    case 682u: goto L_08883318;
    case 683u: goto L_08883324;
    case 684u: goto L_0888333C;
    case 685u: goto L_08883344;
    case 686u: goto L_0888334C;
    case 687u: goto L_08883358;
    case 688u: goto L_08883374;
    case 689u: goto L_08883394;
    case 690u: goto L_088833A4;
    case 691u: goto L_088833AC;
    case 692u: goto L_088833B8;
    case 693u: goto L_088833C0;
    case 694u: goto L_088833E0;
    case 695u: goto L_088833F0;
    case 696u: goto L_088833FC;
    case 697u: goto L_08883428;
    case 698u: goto L_0888343C;
    case 699u: goto L_0888344C;
    case 700u: goto L_08883468;
    case 701u: goto L_0888348C;
    case 702u: goto L_08883494;
    case 703u: goto L_088834CC;
    case 704u: goto L_088834F8;
    case 705u: goto L_08883514;
    case 706u: goto L_08883544;
    case 707u: goto L_08883550;
    case 708u: goto L_08883570;
    case 709u: goto L_0888357C;
    case 710u: goto L_088835A4;
    case 711u: goto L_088835B0;
    case 712u: goto L_088835C0;
    case 713u: goto L_08883600;
    case 714u: goto L_08883624;
    case 715u: goto L_0888362C;
    case 716u: goto L_08883654;
    case 717u: goto L_0888366C;
    case 718u: goto L_08883678;
    case 719u: goto L_08883690;
    case 720u: goto L_088836A0;
    case 721u: goto L_088836B4;
    case 722u: goto L_088836C4;
    case 723u: goto L_088836D0;
    case 724u: goto L_088836DC;
    case 725u: goto L_088836F4;
    case 726u: goto L_08883704;
    case 727u: goto L_08883714;
    case 728u: goto L_0888371C;
    case 729u: goto L_08883730;
    case 730u: goto L_0888375C;
    case 731u: goto L_08883774;
    case 732u: goto L_08883790;
    case 733u: goto L_088837B4;
    case 734u: goto L_088837C8;
    case 735u: goto L_088837E0;
    case 736u: goto L_088837F0;
    case 737u: goto L_08883800;
    case 738u: goto L_08883820;
    case 739u: goto L_08883828;
    case 740u: goto L_0888383C;
    case 741u: goto L_08883844;
    case 742u: goto L_08883880;
    case 743u: goto L_0888388C;
    case 744u: goto L_088838A4;
    case 745u: goto L_088838AC;
    case 746u: goto L_088838C4;
    case 747u: goto L_088838E8;
    case 748u: goto L_088838F4;
    case 749u: goto L_08883908;
    case 750u: goto L_0888391C;
    case 751u: goto L_0888394C;
    case 752u: goto L_0888395C;
    case 753u: goto L_0888396C;
    case 754u: goto L_0888397C;
    case 755u: goto L_08883994;
    case 756u: goto L_0888399C;
    case 757u: goto L_088839AC;
    case 758u: goto L_088839B4;
    case 759u: goto L_088839C0;
    case 760u: goto L_088839C8;
    case 761u: goto L_088839CC;
    case 762u: goto L_088839E4;
    case 763u: goto L_088839FC;
    case 764u: goto L_08883A0C;
    case 765u: goto L_08883A14;
    case 766u: goto L_08883A38;
    case 767u: goto L_08883A58;
    case 768u: goto L_08883A94;
    case 769u: goto L_08883AB0;
    case 770u: goto L_08883ABC;
    case 771u: goto L_08883AC8;
    case 772u: goto L_08883ADC;
    case 773u: goto L_08883AF0;
    case 774u: goto L_08883B0C;
    case 775u: goto L_08883B1C;
    case 776u: goto L_08883B2C;
    case 777u: goto L_08883B3C;
    case 778u: goto L_08883B4C;
    case 779u: goto L_08883B54;
    case 780u: goto L_08883B5C;
    case 781u: goto L_08883B68;
    case 782u: goto L_08883B6C;
    case 783u: goto L_08883B80;
    case 784u: goto L_08883BA0;
    case 785u: goto L_08883BB0;
    case 786u: goto L_08883BB8;
    case 787u: goto L_08883BC8;
    case 788u: goto L_08883BD4;
    case 789u: goto L_08883BF0;
    case 790u: goto L_08883C00;
    case 791u: goto L_08883C08;
    case 792u: goto L_08883C10;
    case 793u: goto L_08883C18;
    case 794u: goto L_08883C20;
    case 795u: goto L_08883C34;
    case 796u: goto L_08883C3C;
    case 797u: goto L_08883C44;
    case 798u: goto L_08883C58;
    case 799u: goto L_08883C6C;
    case 800u: goto L_08883C74;
    case 801u: goto L_08883C7C;
    case 802u: goto L_08883C88;
    case 803u: goto L_08883C9C;
    case 804u: goto L_08883CC8;
    case 805u: goto L_08883CD4;
    case 806u: goto L_08883CDC;
    case 807u: goto L_08883CE8;
    case 808u: goto L_08883CF8;
    case 809u: goto L_08883D00;
    case 810u: goto L_08883D0C;
    case 811u: goto L_08883D14;
    case 812u: goto L_08883D1C;
    case 813u: goto L_08883D28;
    case 814u: goto L_08883D40;
    case 815u: goto L_08883D48;
    case 816u: goto L_08883D54;
    case 817u: goto L_08883D68;
    case 818u: goto L_08883D70;
    case 819u: goto L_08883D7C;
    case 820u: goto L_08883D94;
    case 821u: goto L_08883D9C;
    case 822u: goto L_08883DA8;
    case 823u: goto L_08883DC0;
    case 824u: goto L_08883DF0;
    case 825u: goto L_08883DFC;
    case 826u: goto L_08883E0C;
    case 827u: goto L_08883E20;
    case 828u: goto L_08883E38;
    case 829u: goto L_08883E44;
    case 830u: goto L_08883E70;
    case 831u: goto L_08883E80;
    case 832u: goto L_08883EB8;
    case 833u: goto L_08883EE4;
    case 834u: goto L_08883F0C;
    case 835u: goto L_08883F34;
    case 836u: goto L_08883F3C;
    case 837u: goto L_08883F48;
    case 838u: goto L_08883F54;
    case 839u: goto L_08883F6C;
    case 840u: goto L_08883F84;
    case 841u: goto L_08883FA0;
    case 842u: goto L_08883FB0;
    case 843u: goto L_08883FB8;
    case 844u: goto L_08883FC0;
    case 845u: goto L_08883FC8;
    case 846u: goto L_08883FD0;
    case 847u: goto L_08883FD8;
    case 848u: goto L_08883FE0;
    case 849u: goto L_08883FEC;
    case 850u: goto L_08883FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08880000:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[31] = (0x08880014u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x08880014u) goto L_08880014;
    return;
L_08880014:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888003C;
      }
      goto L_0888001C;
    }
L_0888001C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x0888003Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0888003Cu) goto L_0888003C;
    return;
L_0888003C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888004C;
      }
      goto L_0888004C;
    }
L_0888004C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 1263u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088800B4;
      }
      goto L_088800A8;
    }
L_088800A8:
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088800BC;
      }
      goto L_088800B4;
    }
L_088800B4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088800BC;
L_088800BC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088800D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 618u, 0x0887B890u>(ctx, &aot_mem) && ctx.pc == 0x088800D0u) goto L_088800D0;
    return;
L_088800D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088800E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x088800E4u) goto L_088800E4;
    return;
L_088800E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_0888012C;
      }
      goto L_088800FC;
    }
L_088800FC:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08880124;
      }
      goto L_0888011C;
    }
L_0888011C:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_08880124;
L_08880124:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08880138;
      }
      goto L_0888012C;
    }
L_0888012C:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    goto L_08880138;
L_08880138:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880150;
      }
      goto L_08880148;
    }
L_08880148:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08880150;
L_08880150:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880168;
      }
      goto L_08880160;
    }
L_08880160:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08880168;
L_08880168:
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
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880204;
      }
      goto L_08880184;
    }
L_08880184:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880258;
      }
      goto L_08880198;
    }
L_08880198:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880258;
      }
      goto L_088801AC;
    }
L_088801AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880258;
      }
      goto L_088801C0;
    }
L_088801C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880258;
      }
      goto L_088801D4;
    }
L_088801D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880258;
      }
      goto L_088801E8;
    }
L_088801E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880258;
      }
      goto L_088801FC;
    }
L_088801FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08880258;
      }
      goto L_08880204;
    }
L_08880204:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880258;
      }
      goto L_08880218;
    }
L_08880218:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880258;
      }
      goto L_0888022C;
    }
L_0888022C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880258;
      }
      goto L_08880240;
    }
L_08880240:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880258;
      }
      goto L_08880254;
    }
L_08880254:
    ctx.gpr[4] = (0u | 1u);
    goto L_08880258;
L_08880258:
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
          goto L_08880284;
      }
      goto L_0888027C;
    }
L_0888027C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088802D4;
      }
      goto L_08880284;
    }
L_08880284:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_088802B0;
      }
      goto L_0888029C;
    }
L_0888029C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088802D4;
      }
      goto L_088802B0;
    }
L_088802B0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088802D4;
      }
      goto L_088802D0;
    }
L_088802D0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088802D4;
L_088802D4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880334;
      }
      goto L_088802DC;
    }
L_088802DC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880314;
      }
      goto L_088802E4;
    }
L_088802E4:
    ctx.fpr[16] = ctx.fpr[17] + ctx.fpr[0];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[31] = (0x0888030Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0888030Cu) goto L_0888030C;
    return;
L_0888030C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880334;
      }
      goto L_08880314;
    }
L_08880314:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x08880334u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x08880334u) goto L_08880334;
    return;
L_08880334:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880344;
      }
      goto L_08880344;
    }
L_08880344:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880364:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(-696));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[20]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-690));
    ctx.gpr[20] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    ctx.gpr[22] = (ctx.gpr[21] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088803D8;
      }
      goto L_088803D0;
    }
L_088803D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088803DC;
      }
      goto L_088803D8;
    }
L_088803D8:
    ctx.gpr[18] = (0u | 0u);
    goto L_088803DC;
L_088803DC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880400;
      }
      goto L_088803E4;
    }
L_088803E4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x088803F8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088803F8u) goto L_088803F8;
    return;
L_088803F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-2736)));
      if (branch_taken) {
          goto L_08880418;
      }
      goto L_08880400;
    }
L_08880400:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x08880414u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08880414u) goto L_08880414;
    return;
L_08880414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-2736)));
    goto L_08880418;
L_08880418:
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[20] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888047C;
      }
      goto L_0888043C;
    }
L_0888043C:
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[21]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-728)));
    jump_target = ctx.gpr[1];
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888047C;
      }
      goto L_0888045C;
    }
L_0888045C:
    ctx.gpr[31] = (0x08880464u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 101u, 0x0887C80Cu>(ctx, &aot_mem) && ctx.pc == 0x08880464u) goto L_08880464;
    return;
L_08880464:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08880474;
      }
      goto L_0888046C;
    }
L_0888046C:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    goto L_08880474;
L_08880474:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888047C;
      }
      goto L_0888047C;
    }
L_0888047C:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088804CC;
      }
      goto L_08880488;
    }
L_08880488:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[30];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = ctx.fpr[28] - ctx.fpr[26];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[28];
      if (branch_taken) {
          goto L_088804C0;
      }
      goto L_088804B8;
    }
L_088804B8:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088804C0;
L_088804C0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088804EC;
      }
      goto L_088804CC;
    }
L_088804CC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[30];
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[28];
    ctx.fpr[24] = ctx.fpr[28] - ctx.fpr[26];
    goto L_088804EC;
L_088804EC:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08880500u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08880500u) goto L_08880500;
    return;
L_08880500:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[13];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[15];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[28] - ctx.fpr[19];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[30];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[26] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = ctx.fpr[18] - ctx.fpr[30];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = ctx.fpr[17] - ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[16] + ctx.fpr[12];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08880858;
      }
      goto L_088805F4;
    }
L_088805F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08880614u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 295u, 0x089D61ECu>(ctx, &aot_mem) && ctx.pc == 0x08880614u) goto L_08880614;
    return;
L_08880614:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[23] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[30];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08880688;
      }
      goto L_08880680;
    }
L_08880680:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_088806BC;
      }
      goto L_08880688;
    }
L_08880688:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088806BC;
L_088806BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
      if (branch_taken) {
          goto L_088807F0;
      }
      goto L_088806FC;
    }
L_088806FC:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088807F0;
      }
      goto L_0888070C;
    }
L_0888070C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880738;
      }
      goto L_08880730;
    }
L_08880730:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_0888076C;
      }
      goto L_08880738;
    }
L_08880738:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0888076C;
L_0888076C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088807F0;
      }
      goto L_08880798;
    }
L_08880798:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088807F0;
      }
      goto L_088807AC;
    }
L_088807AC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088807EC;
      }
      goto L_088807B4;
    }
L_088807B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088807F0;
      }
      goto L_088807CC;
    }
L_088807CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088807F0;
      }
      goto L_088807E4;
    }
L_088807E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088807F0;
      }
      goto L_088807EC;
    }
L_088807EC:
    ctx.gpr[4] = (0u | 1u);
    goto L_088807F0;
L_088807F0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880858;
      }
      goto L_088807F8;
    }
L_088807F8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880858;
      }
      goto L_08880800;
    }
L_08880800:
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[21]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-680)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880818:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08880858;
      }
      goto L_08880820;
    }
L_08880820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08880834;
      }
      goto L_08880830;
    }
L_08880830:
    ctx.gpr[23] = (0u | 1u);
    goto L_08880834;
L_08880834:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880858;
      }
      goto L_0888083C;
    }
L_0888083C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880850;
      }
      goto L_0888084C;
    }
L_0888084C:
    ctx.gpr[23] = (0u | 1u);
    goto L_08880850;
L_08880850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880858;
      }
      goto L_08880858;
    }
L_08880858:
    ctx.gpr[4] = (0u < ctx.gpr[23] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[23] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[23] = (0u < ctx.gpr[23] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_08880888;
      }
      goto L_08880880;
    }
L_08880880:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[23]));
      if (branch_taken) {
          goto L_088808D8;
      }
      goto L_08880888;
    }
L_08880888:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_088808B4;
      }
      goto L_088808A0;
    }
L_088808A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[23] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088808D8;
      }
      goto L_088808B4;
    }
L_088808B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[23] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088808D8;
      }
      goto L_088808D4;
    }
L_088808D4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088808D8;
L_088808D8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888096C;
      }
      goto L_088808E0;
    }
L_088808E0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880934;
      }
      goto L_088808E8;
    }
L_088808E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0888092Cu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 718u, 0x0887BE88u>(ctx, &aot_mem) && ctx.pc == 0x0888092Cu) goto L_0888092C;
    return;
L_0888092C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888096C;
      }
      goto L_08880934;
    }
L_08880934:
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0888096Cu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 718u, 0x0887BE88u>(ctx, &aot_mem) && ctx.pc == 0x0888096Cu) goto L_0888096C;
    return;
L_0888096C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880984;
      }
      goto L_0888097C;
    }
L_0888097C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880984;
      }
      goto L_08880984;
    }
L_08880984:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088809C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(-640));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4912));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[20] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08880A44;
      }
      goto L_08880A38;
    }
L_08880A38:
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08880A4C;
      }
      goto L_08880A44;
    }
L_08880A44:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08880A4C;
L_08880A4C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    ctx.gpr[31] = (0x08880A64u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 618u, 0x0887B890u>(ctx, &aot_mem) && ctx.pc == 0x08880A64u) goto L_08880A64;
    return;
L_08880A64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08880AB4;
      }
      goto L_08880A7C;
    }
L_08880A7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[26] = ctx.fpr[24] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = ctx.fpr[20] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[30] = ctx.fpr[28] - ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[13] + ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = ctx.fpr[14] + ctx.fpr[28];
      if (branch_taken) {
          goto L_08880AE8;
      }
      goto L_08880AB4;
    }
L_08880AB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[26] = ctx.fpr[24] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = ctx.fpr[20] - ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[30] = ctx.fpr[14] - ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[24] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[13] + ctx.fpr[20];
    ctx.fpr[28] = ctx.fpr[28] + ctx.fpr[14];
    goto L_08880AE8;
L_08880AE8:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[30] = (2229u << 16u);
    goto L_08880B00;
L_08880B00:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08880D54;
    }
    goto L_08880B08;
L_08880B08:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08880D54;
    }
    goto L_08880B10;
L_08880B10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08880D44;
      }
      goto L_08880B30;
    }
L_08880B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08880B3Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08880B3Cu) goto L_08880B3C;
    return;
L_08880B3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880D3C;
      }
      goto L_08880B48;
    }
L_08880B48:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880B6C;
      }
      goto L_08880B54;
    }
L_08880B54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880B78;
      }
      goto L_08880B6C;
    }
L_08880B6C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08880B78;
L_08880B78:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880BC4;
      }
      goto L_08880B80;
    }
L_08880B80:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08880BA4;
      }
      goto L_08880B8C;
    }
L_08880B8C:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08880BA4;
      }
      goto L_08880B94;
    }
L_08880B94:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08880BA4;
      }
      goto L_08880B9C;
    }
L_08880B9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880BC4;
      }
      goto L_08880BA4;
    }
L_08880BA4:
    ctx.gpr[31] = (0x08880BACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 87u, 0x0887C744u>(ctx, &aot_mem) && ctx.pc == 0x08880BACu) goto L_08880BAC;
    return;
L_08880BAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_08880BBC;
      }
      goto L_08880BB4;
    }
L_08880BB4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[22] = (0u | 1u);
    goto L_08880BBC;
L_08880BBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880BC4;
      }
      goto L_08880BC4;
    }
L_08880BC4:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08880D44;
      }
      goto L_08880BCC;
    }
L_08880BCC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880C60;
      }
      goto L_08880BD8;
    }
L_08880BD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880C58;
      }
      goto L_08880BEC;
    }
L_08880BEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880C58;
      }
      goto L_08880C00;
    }
L_08880C00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880C58;
      }
      goto L_08880C14;
    }
L_08880C14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880C58;
      }
      goto L_08880C28;
    }
L_08880C28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880C58;
      }
      goto L_08880C3C;
    }
L_08880C3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880C58;
      }
      goto L_08880C50;
    }
L_08880C50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08880CBC;
      }
      goto L_08880C58;
    }
L_08880C58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08880CBC;
      }
      goto L_08880C60;
    }
L_08880C60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880CB8;
      }
      goto L_08880C74;
    }
L_08880C74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880CB8;
      }
      goto L_08880C88;
    }
L_08880C88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880CB8;
      }
      goto L_08880C9C;
    }
L_08880C9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08880CB8;
      }
      goto L_08880CB0;
    }
L_08880CB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08880CBC;
      }
      goto L_08880CB8;
    }
L_08880CB8:
    ctx.gpr[5] = (0u | 0u);
    goto L_08880CBC;
L_08880CBC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08880D2C;
      }
      goto L_08880CC8;
    }
L_08880CC8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880D2C;
      }
      goto L_08880CD0;
    }
L_08880CD0:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08880CFC;
      }
      goto L_08880CDC;
    }
L_08880CDC:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08880D14;
      }
      goto L_08880CE4;
    }
L_08880CE4:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08880CFC;
      }
      goto L_08880CEC;
    }
L_08880CEC:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08880D14;
      }
      goto L_08880CF4;
    }
L_08880CF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08880D2C;
      }
      goto L_08880CFC;
    }
L_08880CFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08880D0C;
      }
      goto L_08880D08;
    }
L_08880D08:
    ctx.gpr[5] = (0u | 1u);
    goto L_08880D0C;
L_08880D0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880D2C;
      }
      goto L_08880D14;
    }
L_08880D14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880D24;
      }
      goto L_08880D20;
    }
L_08880D20:
    ctx.gpr[5] = (0u | 1u);
    goto L_08880D24;
L_08880D24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880D2C;
      }
      goto L_08880D2C;
    }
L_08880D2C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08880D44;
      }
      goto L_08880D34;
    }
L_08880D34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08880D44;
      }
      goto L_08880D3C;
    }
L_08880D3C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_08880D44;
L_08880D44:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08880B00;
      }
      goto L_08880D54;
    }
L_08880D54:
    ctx.gpr[5] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08880D80;
      }
      goto L_08880D78;
    }
L_08880D78:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08880DD0;
      }
      goto L_08880D80;
    }
L_08880D80:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08880DAC;
      }
      goto L_08880D98;
    }
L_08880D98:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[18] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08880DD0;
      }
      goto L_08880DAC;
    }
L_08880DAC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[18] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880DD0;
      }
      goto L_08880DCC;
    }
L_08880DCC:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08880DD0;
L_08880DD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880E2C;
      }
      goto L_08880DDC;
    }
L_08880DDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880E0C;
      }
      goto L_08880DE8;
    }
L_08880DE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08880E04u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x08880E04u) goto L_08880E04;
    return;
L_08880E04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880E2C;
      }
      goto L_08880E0C;
    }
L_08880E0C:
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08880E2Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x08880E2Cu) goto L_08880E2C;
    return;
L_08880E2C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880E50;
      }
      goto L_08880E3C;
    }
L_08880E3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880E50;
      }
      goto L_08880E48;
    }
L_08880E48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880E50;
      }
      goto L_08880E50;
    }
L_08880E50:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08880E98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[8] = (2269u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4912));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[30]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[8]);
    ctx.gpr[30] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 646 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[23] = (2229u << 16u);
      if (branch_taken) {
          goto L_08880F14;
      }
      goto L_08880F00;
    }
L_08880F00:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 649 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880F14;
      }
      goto L_08880F0C;
    }
L_08880F0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08880F18;
      }
      goto L_08880F14;
    }
L_08880F14:
    ctx.gpr[22] = (0u | 1u);
    goto L_08880F18;
L_08880F18:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880F3C;
      }
      goto L_08880F20;
    }
L_08880F20:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08880F34u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08880F34u) goto L_08880F34;
    return;
L_08880F34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880F50;
      }
      goto L_08880F3C;
    }
L_08880F3C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08880F50u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08880F50u) goto L_08880F50;
    return;
L_08880F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08880F5Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08880F5Cu) goto L_08880F5C;
    return;
L_08880F5C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08880F84;
      }
      goto L_08880F6C;
    }
L_08880F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08880F90;
      }
      goto L_08880F84;
    }
L_08880F84:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    goto L_08880F90;
L_08880F90:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08880FAC;
      }
      goto L_08880F9C;
    }
L_08880F9C:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08880FB4;
      }
      goto L_08880FAC;
    }
L_08880FAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08880FB4;
L_08880FB4:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08880FC8;
L_08880FC8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881218;
      }
      goto L_08880FD0;
    }
L_08880FD0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881218;
      }
      goto L_08880FD8;
    }
L_08880FD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08881208;
      }
      goto L_08880FF4;
    }
L_08880FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08881000u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08881000u) goto L_08881000;
    return;
L_08881000:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881200;
      }
      goto L_0888100C;
    }
L_0888100C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881030;
      }
      goto L_08881018;
    }
L_08881018:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888103C;
      }
      goto L_08881030;
    }
L_08881030:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0888103C;
L_0888103C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088810FC;
      }
      goto L_08881044;
    }
L_08881044:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088810F4;
      }
      goto L_08881060;
    }
L_08881060:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088810F4;
      }
      goto L_0888107C;
    }
L_0888107C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088810F4;
      }
      goto L_08881098;
    }
L_08881098:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088810F4;
      }
      goto L_088810B4;
    }
L_088810B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088810F4;
      }
      goto L_088810D0;
    }
L_088810D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088810F4;
      }
      goto L_088810EC;
    }
L_088810EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08881178;
      }
      goto L_088810F4;
    }
L_088810F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08881178;
      }
      goto L_088810FC;
    }
L_088810FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881174;
      }
      goto L_08881118;
    }
L_08881118:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881174;
      }
      goto L_08881134;
    }
L_08881134:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881174;
      }
      goto L_08881150;
    }
L_08881150:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881174;
      }
      goto L_0888116C;
    }
L_0888116C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08881178;
      }
      goto L_08881174;
    }
L_08881174:
    ctx.gpr[5] = (0u | 0u);
    goto L_08881178;
L_08881178:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088811F0;
      }
      goto L_08881184;
    }
L_08881184:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 647 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 648 ? 1u : 0u);
      if (branch_taken) {
          goto L_088811A8;
      }
      goto L_08881194;
    }
L_08881194:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 646 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088811F0;
      }
      goto L_088811A0;
    }
L_088811A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088811F0;
      }
      goto L_088811A8;
    }
L_088811A8:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 649 ? 1u : 0u);
      if (branch_taken) {
          goto L_088811C0;
      }
      goto L_088811B0;
    }
L_088811B0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088811D8;
      }
      goto L_088811B8;
    }
L_088811B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088811F0;
      }
      goto L_088811C0;
    }
L_088811C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088811D0;
      }
      goto L_088811CC;
    }
L_088811CC:
    ctx.gpr[5] = (0u | 1u);
    goto L_088811D0;
L_088811D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088811F0;
      }
      goto L_088811D8;
    }
L_088811D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088811E8;
      }
      goto L_088811E4;
    }
L_088811E4:
    ctx.gpr[5] = (0u | 1u);
    goto L_088811E8;
L_088811E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088811F0;
      }
      goto L_088811F0;
    }
L_088811F0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08881208;
      }
      goto L_088811F8;
    }
L_088811F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08881208;
      }
      goto L_08881200;
    }
L_08881200:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_08881208;
L_08881208:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08880FC8;
      }
      goto L_08881218;
    }
L_08881218:
    ctx.gpr[4] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08881244;
      }
      goto L_0888123C;
    }
L_0888123C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08881294;
      }
      goto L_08881244;
    }
L_08881244:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08881270;
      }
      goto L_0888125C;
    }
L_0888125C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08881294;
      }
      goto L_08881270;
    }
L_08881270:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881294;
      }
      goto L_08881290;
    }
L_08881290:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08881294;
L_08881294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881300;
      }
      goto L_088812A0;
    }
L_088812A0:
    if (ctx.gpr[22] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
        goto L_088812D8;
    }
    goto L_088812A8;
L_088812A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x088812D0u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x088812D0u) goto L_088812D0;
    return;
L_088812D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881300;
      }
      goto L_088812D8;
    }
L_088812D8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x08881300u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x08881300u) goto L_08881300;
    return;
L_08881300:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881320;
      }
      goto L_08881310;
    }
L_08881310:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881320;
      }
      goto L_08881318;
    }
L_08881318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881320;
      }
      goto L_08881320;
    }
L_08881320:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888135C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[8] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[30]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4912));
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[30] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 649 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088813D0;
      }
      goto L_088813BC;
    }
L_088813BC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 652 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088813D0;
      }
      goto L_088813C8;
    }
L_088813C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_088813D4;
      }
      goto L_088813D0;
    }
L_088813D0:
    ctx.gpr[23] = (0u | 1u);
    goto L_088813D4;
L_088813D4:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088813F8;
      }
      goto L_088813DC;
    }
L_088813DC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x088813F0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088813F0u) goto L_088813F0;
    return;
L_088813F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888140C;
      }
      goto L_088813F8;
    }
L_088813F8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0888140Cu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0888140Cu) goto L_0888140C;
    return;
L_0888140C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0888141Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0888141Cu) goto L_0888141C;
    return;
L_0888141C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888144C;
      }
      goto L_0888143C;
    }
L_0888143C:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08881454;
      }
      goto L_0888144C;
    }
L_0888144C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08881454;
L_08881454:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[21] = (2229u << 16u);
    goto L_0888146C;
L_0888146C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088816BC;
      }
      goto L_08881474;
    }
L_08881474:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088816BC;
      }
      goto L_0888147C;
    }
L_0888147C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088816AC;
      }
      goto L_08881498;
    }
L_08881498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x088814A4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x088814A4u) goto L_088814A4;
    return;
L_088814A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088816A4;
      }
      goto L_088814B0;
    }
L_088814B0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088814D4;
      }
      goto L_088814BC;
    }
L_088814BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088814E0;
      }
      goto L_088814D4;
    }
L_088814D4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088814E0;
L_088814E0:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088815A0;
      }
      goto L_088814E8;
    }
L_088814E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881598;
      }
      goto L_08881504;
    }
L_08881504:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881598;
      }
      goto L_08881520;
    }
L_08881520:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881598;
      }
      goto L_0888153C;
    }
L_0888153C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881598;
      }
      goto L_08881558;
    }
L_08881558:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881598;
      }
      goto L_08881574;
    }
L_08881574:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881598;
      }
      goto L_08881590;
    }
L_08881590:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0888161C;
      }
      goto L_08881598;
    }
L_08881598:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0888161C;
      }
      goto L_088815A0;
    }
L_088815A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881618;
      }
      goto L_088815BC;
    }
L_088815BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881618;
      }
      goto L_088815D8;
    }
L_088815D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881618;
      }
      goto L_088815F4;
    }
L_088815F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881618;
      }
      goto L_08881610;
    }
L_08881610:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0888161C;
      }
      goto L_08881618;
    }
L_08881618:
    ctx.gpr[5] = (0u | 0u);
    goto L_0888161C;
L_0888161C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08881694;
      }
      goto L_08881628;
    }
L_08881628:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 650 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 651 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888164C;
      }
      goto L_08881638;
    }
L_08881638:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 649 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08881694;
      }
      goto L_08881644;
    }
L_08881644:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08881694;
      }
      goto L_0888164C;
    }
L_0888164C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 652 ? 1u : 0u);
      if (branch_taken) {
          goto L_08881664;
      }
      goto L_08881654;
    }
L_08881654:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888167C;
      }
      goto L_0888165C;
    }
L_0888165C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881694;
      }
      goto L_08881664;
    }
L_08881664:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08881674;
      }
      goto L_08881670;
    }
L_08881670:
    ctx.gpr[5] = (0u | 1u);
    goto L_08881674;
L_08881674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881694;
      }
      goto L_0888167C;
    }
L_0888167C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888168C;
      }
      goto L_08881688;
    }
L_08881688:
    ctx.gpr[5] = (0u | 1u);
    goto L_0888168C;
L_0888168C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881694;
      }
      goto L_08881694;
    }
L_08881694:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088816AC;
      }
      goto L_0888169C;
    }
L_0888169C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088816AC;
      }
      goto L_088816A4;
    }
L_088816A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_088816AC;
L_088816AC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888146C;
      }
      goto L_088816BC;
    }
L_088816BC:
    ctx.gpr[4] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_088816E8;
      }
      goto L_088816E0;
    }
L_088816E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08881738;
      }
      goto L_088816E8;
    }
L_088816E8:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08881714;
      }
      goto L_08881700;
    }
L_08881700:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08881738;
      }
      goto L_08881714;
    }
L_08881714:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881738;
      }
      goto L_08881734;
    }
L_08881734:
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08881738;
L_08881738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088817A4;
      }
      goto L_08881744;
    }
L_08881744:
    if (ctx.gpr[23] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
        goto L_0888177C;
    }
    goto L_0888174C;
L_0888174C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x08881774u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x08881774u) goto L_08881774;
    return;
L_08881774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088817A4;
      }
      goto L_0888177C;
    }
L_0888177C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x088817A4u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x088817A4u) goto L_088817A4;
    return;
L_088817A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088817C4;
      }
      goto L_088817B4;
    }
L_088817B4:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088817C4;
      }
      goto L_088817BC;
    }
L_088817BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088817C4;
      }
      goto L_088817C4;
    }
L_088817C4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08881800:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[8] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[30]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4912));
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[30] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 652 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08881874;
      }
      goto L_08881860;
    }
L_08881860:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 655 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881874;
      }
      goto L_0888186C;
    }
L_0888186C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_08881878;
      }
      goto L_08881874;
    }
L_08881874:
    ctx.gpr[23] = (0u | 1u);
    goto L_08881878;
L_08881878:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888189C;
      }
      goto L_08881880;
    }
L_08881880:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08881894u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08881894u) goto L_08881894;
    return;
L_08881894:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088818B0;
      }
      goto L_0888189C;
    }
L_0888189C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x088818B0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x088818B0u) goto L_088818B0;
    return;
L_088818B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088818E0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 295u, 0x089D61ECu>(ctx, &aot_mem) && ctx.pc == 0x088818E0u) goto L_088818E0;
    return;
L_088818E0:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888190C;
      }
      goto L_088818FC;
    }
L_088818FC:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08881914;
      }
      goto L_0888190C;
    }
L_0888190C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    goto L_08881914;
L_08881914:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[21] = (2229u << 16u);
    goto L_0888192C;
L_0888192C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881B7C;
      }
      goto L_08881934;
    }
L_08881934:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881B7C;
      }
      goto L_0888193C;
    }
L_0888193C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08881B6C;
      }
      goto L_08881958;
    }
L_08881958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08881964u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08881964u) goto L_08881964;
    return;
L_08881964:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881B64;
      }
      goto L_08881970;
    }
L_08881970:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881994;
      }
      goto L_0888197C;
    }
L_0888197C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088819A0;
      }
      goto L_08881994;
    }
L_08881994:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088819A0;
L_088819A0:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881A60;
      }
      goto L_088819A8;
    }
L_088819A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881A58;
      }
      goto L_088819C4;
    }
L_088819C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881A58;
      }
      goto L_088819E0;
    }
L_088819E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881A58;
      }
      goto L_088819FC;
    }
L_088819FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881A58;
      }
      goto L_08881A18;
    }
L_08881A18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881A58;
      }
      goto L_08881A34;
    }
L_08881A34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881A58;
      }
      goto L_08881A50;
    }
L_08881A50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08881ADC;
      }
      goto L_08881A58;
    }
L_08881A58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08881ADC;
      }
      goto L_08881A60;
    }
L_08881A60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881AD8;
      }
      goto L_08881A7C;
    }
L_08881A7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881AD8;
      }
      goto L_08881A98;
    }
L_08881A98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881AD8;
      }
      goto L_08881AB4;
    }
L_08881AB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881AD8;
      }
      goto L_08881AD0;
    }
L_08881AD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08881ADC;
      }
      goto L_08881AD8;
    }
L_08881AD8:
    ctx.gpr[5] = (0u | 0u);
    goto L_08881ADC;
L_08881ADC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08881B54;
      }
      goto L_08881AE8;
    }
L_08881AE8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 653 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 654 ? 1u : 0u);
      if (branch_taken) {
          goto L_08881B0C;
      }
      goto L_08881AF8;
    }
L_08881AF8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 652 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08881B54;
      }
      goto L_08881B04;
    }
L_08881B04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08881B54;
      }
      goto L_08881B0C;
    }
L_08881B0C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 655 ? 1u : 0u);
      if (branch_taken) {
          goto L_08881B24;
      }
      goto L_08881B14;
    }
L_08881B14:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08881B3C;
      }
      goto L_08881B1C;
    }
L_08881B1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881B54;
      }
      goto L_08881B24;
    }
L_08881B24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08881B34;
      }
      goto L_08881B30;
    }
L_08881B30:
    ctx.gpr[5] = (0u | 1u);
    goto L_08881B34;
L_08881B34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881B54;
      }
      goto L_08881B3C;
    }
L_08881B3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881B4C;
      }
      goto L_08881B48;
    }
L_08881B48:
    ctx.gpr[5] = (0u | 1u);
    goto L_08881B4C;
L_08881B4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881B54;
      }
      goto L_08881B54;
    }
L_08881B54:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08881B6C;
      }
      goto L_08881B5C;
    }
L_08881B5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08881B6C;
      }
      goto L_08881B64;
    }
L_08881B64:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_08881B6C;
L_08881B6C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888192C;
      }
      goto L_08881B7C;
    }
L_08881B7C:
    ctx.gpr[4] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08881BA8;
      }
      goto L_08881BA0;
    }
L_08881BA0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08881BF8;
      }
      goto L_08881BA8;
    }
L_08881BA8:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08881BD4;
      }
      goto L_08881BC0;
    }
L_08881BC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08881BF8;
      }
      goto L_08881BD4;
    }
L_08881BD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881BF8;
      }
      goto L_08881BF4;
    }
L_08881BF4:
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08881BF8;
L_08881BF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881C64;
      }
      goto L_08881C04;
    }
L_08881C04:
    if (ctx.gpr[23] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
        goto L_08881C3C;
    }
    goto L_08881C0C;
L_08881C0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x08881C34u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x08881C34u) goto L_08881C34;
    return;
L_08881C34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881C64;
      }
      goto L_08881C3C;
    }
L_08881C3C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x08881C64u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x08881C64u) goto L_08881C64;
    return;
L_08881C64:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881C84;
      }
      goto L_08881C74;
    }
L_08881C74:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881C84;
      }
      goto L_08881C7C;
    }
L_08881C7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881C84;
      }
      goto L_08881C84;
    }
L_08881C84:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08881CC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(-655));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4912));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[20] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08881D38;
      }
      goto L_08881D30;
    }
L_08881D30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08881D3C;
      }
      goto L_08881D38;
    }
L_08881D38:
    ctx.gpr[17] = (0u | 1u);
    goto L_08881D3C;
L_08881D3C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881D64;
      }
      goto L_08881D44;
    }
L_08881D44:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08881D5Cu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08881D5Cu) goto L_08881D5C;
    return;
L_08881D5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881D7C;
      }
      goto L_08881D64;
    }
L_08881D64:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08881D7Cu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08881D7Cu) goto L_08881D7C;
    return;
L_08881D7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08881DC8;
      }
      goto L_08881D94;
    }
L_08881D94:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08881DBC;
      }
      goto L_08881DB4;
    }
L_08881DB4:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08881DBC;
L_08881DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08881DD8;
      }
      goto L_08881DC8;
    }
L_08881DC8:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    goto L_08881DD8;
L_08881DD8:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881DF0;
      }
      goto L_08881DE8;
    }
L_08881DE8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08881DF0;
L_08881DF0:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881E08;
      }
      goto L_08881E00;
    }
L_08881E00:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08881E08;
L_08881E08:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[30] = (2229u << 16u);
    goto L_08881E20;
L_08881E20:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08882074;
    }
    goto L_08881E28;
L_08881E28:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08882074;
    }
    goto L_08881E30;
L_08881E30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08882064;
      }
      goto L_08881E50;
    }
L_08881E50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08881E5Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08881E5Cu) goto L_08881E5C;
    return;
L_08881E5C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888205C;
      }
      goto L_08881E68;
    }
L_08881E68:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881E8C;
      }
      goto L_08881E74;
    }
L_08881E74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881E98;
      }
      goto L_08881E8C;
    }
L_08881E8C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08881E98;
L_08881E98:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881EE4;
      }
      goto L_08881EA0;
    }
L_08881EA0:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08881EC4;
      }
      goto L_08881EAC;
    }
L_08881EAC:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08881EC4;
      }
      goto L_08881EB4;
    }
L_08881EB4:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08881EC4;
      }
      goto L_08881EBC;
    }
L_08881EBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881EE4;
      }
      goto L_08881EC4;
    }
L_08881EC4:
    ctx.gpr[31] = (0x08881ECCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 87u, 0x0887C744u>(ctx, &aot_mem) && ctx.pc == 0x08881ECCu) goto L_08881ECC;
    return;
L_08881ECC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08881EDC;
      }
      goto L_08881ED4;
    }
L_08881ED4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[22] = (0u | 1u);
    goto L_08881EDC;
L_08881EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08881EE4;
      }
      goto L_08881EE4;
    }
L_08881EE4:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882064;
      }
      goto L_08881EEC;
    }
L_08881EEC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08881F80;
      }
      goto L_08881EF8;
    }
L_08881EF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881F78;
      }
      goto L_08881F0C;
    }
L_08881F0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881F78;
      }
      goto L_08881F20;
    }
L_08881F20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881F78;
      }
      goto L_08881F34;
    }
L_08881F34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881F78;
      }
      goto L_08881F48;
    }
L_08881F48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881F78;
      }
      goto L_08881F5C;
    }
L_08881F5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881F78;
      }
      goto L_08881F70;
    }
L_08881F70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08881FDC;
      }
      goto L_08881F78;
    }
L_08881F78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08881FDC;
      }
      goto L_08881F80;
    }
L_08881F80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881FD8;
      }
      goto L_08881F94;
    }
L_08881F94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881FD8;
      }
      goto L_08881FA8;
    }
L_08881FA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881FD8;
      }
      goto L_08881FBC;
    }
L_08881FBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08881FD8;
      }
      goto L_08881FD0;
    }
L_08881FD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08881FDC;
      }
      goto L_08881FD8;
    }
L_08881FD8:
    ctx.gpr[5] = (0u | 0u);
    goto L_08881FDC;
L_08881FDC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0888204C;
      }
      goto L_08881FE8;
    }
L_08881FE8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888204C;
      }
      goto L_08881FF0;
    }
L_08881FF0:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0888201C;
      }
      goto L_08881FFC;
    }
L_08881FFC:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08882034;
      }
      goto L_08882004;
    }
L_08882004:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0888201C;
      }
      goto L_0888200C;
    }
L_0888200C:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08882034;
      }
      goto L_08882014;
    }
L_08882014:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0888204C;
      }
      goto L_0888201C;
    }
L_0888201C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888202C;
      }
      goto L_08882028;
    }
L_08882028:
    ctx.gpr[5] = (0u | 1u);
    goto L_0888202C;
L_0888202C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888204C;
      }
      goto L_08882034;
    }
L_08882034:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882044;
      }
      goto L_08882040;
    }
L_08882040:
    ctx.gpr[5] = (0u | 1u);
    goto L_08882044;
L_08882044:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888204C;
      }
      goto L_0888204C;
    }
L_0888204C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882064;
      }
      goto L_08882054;
    }
L_08882054:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08882064;
      }
      goto L_0888205C;
    }
L_0888205C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_08882064;
L_08882064:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08881E20;
      }
      goto L_08882074;
    }
L_08882074:
    ctx.gpr[5] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_088820A0;
      }
      goto L_08882098;
    }
L_08882098:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_088820F0;
      }
      goto L_088820A0;
    }
L_088820A0:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_088820CC;
      }
      goto L_088820B8;
    }
L_088820B8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[18] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088820F0;
      }
      goto L_088820CC;
    }
L_088820CC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[18] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088820F0;
      }
      goto L_088820EC;
    }
L_088820EC:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_088820F0;
L_088820F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882160;
      }
      goto L_088820FC;
    }
L_088820FC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888213C;
      }
      goto L_08882108;
    }
L_08882108:
    ctx.fpr[16] = ctx.fpr[24] + ctx.fpr[30];
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08882134u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x08882134u) goto L_08882134;
    return;
L_08882134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08882160;
      }
      goto L_0888213C;
    }
L_0888213C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08882160u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x08882160u) goto L_08882160;
    return;
L_08882160:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882170;
      }
      goto L_08882170;
    }
L_08882170:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088821B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = ((ctx.gpr[7] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-6992)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[8] = (2269u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4912));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(14312));
    ctx.gpr[30] = (2229u << 16u);
    ctx.gpr[23] = (2229u << 16u);
    ctx.gpr[10] = (2269u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(15272));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08882260;
      }
      goto L_08882254;
    }
L_08882254:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08882254;
      }
      goto L_08882260;
    }
L_08882260:
    ctx.gpr[9] = (ctx.gpr[22] << 2u);
    ctx.gpr[10] = (0u - ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] << 3u);
    ctx.gpr[11] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[9] << 4u);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(1720));
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(280));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[5] = (0u | 83u);
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(-8));
    ctx.gpr[9] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (0u | 82u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 1720u);
    ctx.gpr[9] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088822FC;
      }
      goto L_088822DC;
    }
L_088822DC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088822DC;
      }
      goto L_088822FC;
    }
L_088822FC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7028)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6988)));
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    goto L_08882328;
L_08882328:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08882328;
      }
      goto L_08882350;
    }
L_08882350:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7024)));
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_08882364;
L_08882364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088823C8;
      }
      goto L_08882370;
    }
L_08882370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888238Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888238Cu) goto L_0888238C;
    return;
L_0888238C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088823AC;
      }
      goto L_08882394;
    }
L_08882394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-15032)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x088823A4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 474u, 0x08AFE010u>(ctx, &aot_mem) && ctx.pc == 0x088823A4u) goto L_088823A4;
    return;
L_088823A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088823C0;
      }
      goto L_088823AC;
    }
L_088823AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-15036)));
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[31] = (0x088823BCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 475u, 0x08AFE02Cu>(ctx, &aot_mem) && ctx.pc == 0x088823BCu) goto L_088823BC;
    return;
L_088823BC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_088823C0;
L_088823C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088823D4;
      }
      goto L_088823C8;
    }
L_088823C8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_088823D4;
L_088823D4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(80) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08882364;
      }
      goto L_08882408;
    }
L_08882408:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[20] = (2229u << 16u);
    goto L_08882418;
L_08882418:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882500;
      }
      goto L_08882424;
    }
L_08882424:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08882498;
    }
    goto L_08882444;
L_08882444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08882460u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08882460u) goto L_08882460;
    return;
L_08882460:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882480;
      }
      goto L_08882468;
    }
L_08882468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-15032)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08882478u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 474u, 0x08AFE010u>(ctx, &aot_mem) && ctx.pc == 0x08882478u) goto L_08882478;
    return;
L_08882478:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08882508;
      }
      goto L_08882480;
    }
L_08882480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-15036)));
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[31] = (0x08882490u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 475u, 0x08AFE02Cu>(ctx, &aot_mem) && ctx.pc == 0x08882490u) goto L_08882490;
    return;
L_08882490:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08882508;
      }
      goto L_08882498;
    }
L_08882498:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 8u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_088824CC;
    }
    goto L_088824B4;
L_088824B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[31] = (0x088824C4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 473u, 0x08AFDFF4u>(ctx, &aot_mem) && ctx.pc == 0x088824C4u) goto L_088824C4;
    return;
L_088824C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08882508;
      }
      goto L_088824CC;
    }
L_088824CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 10u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882508;
      }
      goto L_088824E8;
    }
L_088824E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-15024)));
    ctx.gpr[18] = (0u | 4u);
    ctx.gpr[31] = (0x088824F8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 476u, 0x08AFE048u>(ctx, &aot_mem) && ctx.pc == 0x088824F8u) goto L_088824F8;
    return;
L_088824F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08882508;
      }
      goto L_08882500;
    }
L_08882500:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08882508;
L_08882508:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[19] < static_cast<std::uint32_t>(52) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08882418;
      }
      goto L_08882528;
    }
L_08882528:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6984)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6983)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6980)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7004)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-7000))))));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6998))))));
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6992)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088825D0;
      }
      goto L_088825A4;
    }
L_088825A4:
    ctx.gpr[4] = (0u | 0u);
    goto L_088825A8;
L_088825A8:
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(540) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088825A8;
      }
      goto L_088825C4;
    }
L_088825C4:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_088825A4;
      }
      goto L_088825D0;
    }
L_088825D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882600:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[31]);
    ctx.gpr[31] = (0x08882680u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 270u, 0x088C1A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08882680u) goto L_08882680;
    return;
L_08882680:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08882978;
      }
      goto L_0888268C;
    }
L_0888268C:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_088826E8;
      }
      goto L_0888269C;
    }
L_0888269C:
    ctx.gpr[5] = (ctx.gpr[8] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088826D4;
      }
      goto L_088826B0;
    }
L_088826B0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (ctx.gpr[9] & 14u);
    ctx.gpr[9] = (ctx.gpr[9] >> 1u);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088826D4;
      }
      goto L_088826C4;
    }
L_088826C4:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088826D4;
      }
      goto L_088826D0;
    }
L_088826D0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), 0u);
    goto L_088826D4;
L_088826D4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888269C;
      }
      goto L_088826E8;
    }
L_088826E8:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (16256u << 16u);
      if (branch_taken) {
          goto L_08882978;
      }
      goto L_088826F8;
    }
L_088826F8:
    ctx.gpr[22] = (2230u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (2225u << 16u);
    ctx.gpr[23] = (2225u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4832));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1932));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1868));
    goto L_08882714;
L_08882714:
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08882964;
      }
      goto L_08882728;
    }
L_08882728:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882964;
      }
      goto L_08882730;
    }
L_08882730:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11332)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
      if (branch_taken) {
          goto L_08882760;
      }
      goto L_08882754;
    }
L_08882754:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08882760;
L_08882760:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(54))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (ctx.gpr[7] << 2u);
      if (branch_taken) {
          goto L_088827D8;
      }
      goto L_08882770;
    }
L_08882770:
    ctx.gpr[5] = (0u | 0u);
    goto L_08882774;
L_08882774:
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882774;
      }
      goto L_08882794;
    }
L_08882794:
    ctx.gpr[5] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x088827D0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 325u, 0x088CE900u>(ctx, &aot_mem) && ctx.pc == 0x088827D0u) goto L_088827D0;
    return;
L_088827D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08882814;
      }
      goto L_088827D8;
    }
L_088827D8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08882810u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 325u, 0x088CE900u>(ctx, &aot_mem) && ctx.pc == 0x08882810u) goto L_08882810;
    return;
L_08882810:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08882814;
L_08882814:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08882960;
      }
      goto L_0888281C;
    }
L_0888281C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08882848;
    }
    goto L_08882834;
L_08882834:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882960;
      }
      goto L_08882840;
    }
L_08882840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08882858;
      }
      goto L_08882848;
    }
L_08882848:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882924;
      }
      goto L_08882850;
    }
L_08882850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08882960;
      }
      goto L_08882858;
    }
L_08882858:
    ctx.gpr[31] = (0x08882860u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08882860u) goto L_08882860;
    return;
L_08882860:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888291C;
      }
      goto L_08882874;
    }
L_08882874:
    ctx.gpr[31] = (0x0888287Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 540u, 0x0889EAF0u>(ctx, &aot_mem) && ctx.pc == 0x0888287Cu) goto L_0888287C;
    return;
L_0888287C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888291C;
      }
      goto L_08882884;
    }
L_08882884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888289C;
      }
      goto L_08882890;
    }
L_08882890:
    ctx.gpr[31] = (0x08882898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 289u, 0x08A9D734u>(ctx, &aot_mem) && ctx.pc == 0x08882898u) goto L_08882898;
    return;
L_08882898:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(504), 0u);
    goto L_0888289C;
L_0888289C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(544)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088828E8;
      }
      goto L_088828B0;
    }
L_088828B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088828D4;
      }
      goto L_088828BC;
    }
L_088828BC:
    ctx.gpr[31] = (0x088828C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 289u, 0x08A9D734u>(ctx, &aot_mem) && ctx.pc == 0x088828C4u) goto L_088828C4;
    return;
L_088828C4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(508), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(540)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(540), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088828D4;
L_088828D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(544)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088828B0;
      }
      goto L_088828E8;
    }
L_088828E8:
    ctx.gpr[31] = (0x088828F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 197u, 0x089ED474u>(ctx, &aot_mem) && ctx.pc == 0x088828F0u) goto L_088828F0;
    return;
L_088828F0:
    ctx.gpr[31] = (0x088828F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x088828F8u) goto L_088828F8;
    return;
L_088828F8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888291C;
      }
      goto L_08882900;
    }
L_08882900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0888291Cu);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888291Cu) goto L_0888291C;
    return;
L_0888291C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08882960;
      }
      goto L_08882924;
    }
L_08882924:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08882930u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08882930u) goto L_08882930;
    return;
L_08882930:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882958;
      }
      goto L_08882938;
    }
L_08882938:
    ctx.gpr[31] = (0x08882940u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 689u, 0x089A2DC8u>(ctx, &aot_mem) && ctx.pc == 0x08882940u) goto L_08882940;
    return;
L_08882940:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882958;
      }
      goto L_08882948;
    }
L_08882948:
    ctx.gpr[31] = (0x08882950u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 289u, 0x08A9D734u>(ctx, &aot_mem) && ctx.pc == 0x08882950u) goto L_08882950;
    return;
L_08882950:
    ctx.gpr[31] = (0x08882958u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08882958u) goto L_08882958;
    return;
L_08882958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08882960;
      }
      goto L_08882960;
    }
L_08882960:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    goto L_08882964;
L_08882964:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882714;
      }
      goto L_08882978;
    }
L_08882978:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088829AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7024)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882A00;
      }
      goto L_088829F4;
    }
L_088829F4:
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7024), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08882A04;
      }
      goto L_08882A00;
    }
L_08882A00:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7024), 0u);
    goto L_08882A04;
L_08882A04:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 64u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08882A44u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 158u, 0x088C0EF8u>(ctx, &aot_mem) && ctx.pc == 0x08882A44u) goto L_08882A44;
    return;
L_08882A44:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (2269u << 16u);
      if (branch_taken) {
          goto L_08882C38;
      }
      goto L_08882A5C;
    }
L_08882A5C:
    ctx.gpr[23] = (0u | 2u);
    ctx.gpr[22] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[29]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4912));
    ctx.gpr[20] = (2229u << 16u);
    goto L_08882A70;
L_08882A70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
        goto L_08882AA4;
    }
    goto L_08882A90;
L_08882A90:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882C18;
      }
      goto L_08882A9C;
    }
L_08882A9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08882AB4;
      }
      goto L_08882AA4;
    }
L_08882AA4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882BB8;
      }
      goto L_08882AAC;
    }
L_08882AAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08882C18;
      }
      goto L_08882AB4;
    }
L_08882AB4:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882B1C;
      }
      goto L_08882AC4;
    }
L_08882AC4:
    ctx.gpr[31] = (0x08882ACCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08882ACCu) goto L_08882ACC;
    return;
L_08882ACC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882B1C;
      }
      goto L_08882AD4;
    }
L_08882AD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08882B1C;
      }
      goto L_08882AE0;
    }
L_08882AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08882B1C;
      }
      goto L_08882AEC;
    }
L_08882AEC:
    ctx.gpr[31] = (0x08882AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 55u, 0x0887C530u>(ctx, &aot_mem) && ctx.pc == 0x08882AF4u) goto L_08882AF4;
    return;
L_08882AF4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08882B1C;
      }
      goto L_08882B00;
    }
L_08882B00:
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-15044)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08882B18u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x08882B18u) goto L_08882B18;
    return;
L_08882B18:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08882B1C;
L_08882B1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08882BB0;
      }
      goto L_08882B30;
    }
L_08882B30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882B9C;
      }
      goto L_08882B3C;
    }
L_08882B3C:
    ctx.gpr[31] = (0x08882B44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08882B44u) goto L_08882B44;
    return;
L_08882B44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882B9C;
      }
      goto L_08882B4C;
    }
L_08882B4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08882B9C;
      }
      goto L_08882B58;
    }
L_08882B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08882B9C;
      }
      goto L_08882B64;
    }
L_08882B64:
    ctx.gpr[31] = (0x08882B6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 55u, 0x0887C530u>(ctx, &aot_mem) && ctx.pc == 0x08882B6Cu) goto L_08882B6C;
    return;
L_08882B6C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08882B9C;
      }
      goto L_08882B78;
    }
L_08882B78:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-15044)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08882B94u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x08882B94u) goto L_08882B94;
    return;
L_08882B94:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    goto L_08882B9C;
L_08882B9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08882B30;
      }
      goto L_08882BB0;
    }
L_08882BB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
      if (branch_taken) {
          goto L_08882C18;
      }
      goto L_08882BB8;
    }
L_08882BB8:
    ctx.gpr[31] = (0x08882BC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08882BC0u) goto L_08882BC0;
    return;
L_08882BC0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882C10;
      }
      goto L_08882BC8;
    }
L_08882BC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08882C10;
      }
      goto L_08882BD4;
    }
L_08882BD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08882C10;
      }
      goto L_08882BE0;
    }
L_08882BE0:
    ctx.gpr[31] = (0x08882BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 55u, 0x0887C530u>(ctx, &aot_mem) && ctx.pc == 0x08882BE8u) goto L_08882BE8;
    return;
L_08882BE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08882C10;
      }
      goto L_08882BF4;
    }
L_08882BF4:
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-15044)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[31] = (0x08882C0Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x08882C0Cu) goto L_08882C0C;
    return;
L_08882C0C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08882C10;
L_08882C10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
      if (branch_taken) {
          goto L_08882C18;
      }
      goto L_08882C18;
    }
L_08882C18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08882A70;
      }
      goto L_08882C38;
    }
L_08882C38:
    ctx.gpr[2] = (ctx.gpr[30] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882C6C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15636)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(15632)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[11] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(15640), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(15648), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(15644), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(15652), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(15656), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882CE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08882D98;
      }
      goto L_08882D14;
    }
L_08882D14:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-4));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 63u);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08882D98;
      }
      goto L_08882D38;
    }
L_08882D38:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] >> 24u);
    ctx.gpr[7] = (ctx.gpr[9] >> 15u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] & 511u);
      if (branch_taken) {
          goto L_08882D98;
      }
      goto L_08882D50;
    }
L_08882D50:
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08882D98;
      }
      goto L_08882D60;
    }
L_08882D60:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882D90;
      }
      goto L_08882D6C;
    }
L_08882D6C:
    ctx.gpr[5] = (ctx.gpr[6] << 15u);
    ctx.gpr[4] = (65280u << 16u);
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32767));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[4] = (ctx.gpr[9] & ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08882D90;
L_08882D90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08882DB0;
      }
      goto L_08882D98;
    }
L_08882D98:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08882DB0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 77u, 0x08884564u>(ctx, &aot_mem) && ctx.pc == 0x08882DB0u) goto L_08882DB0;
    return;
L_08882DB0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882DBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08882DF4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 79u, 0x0888459Cu>(ctx, &aot_mem) && ctx.pc == 0x08882DF4u) goto L_08882DF4;
    return;
L_08882DF4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08882E08u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08883264;
L_08882E08:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882E20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08882E34u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 77u, 0x08884564u>(ctx, &aot_mem) && ctx.pc == 0x08882E34u) goto L_08882E34;
    return;
L_08882E34:
    ctx.gpr[31] = (0x08882E3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08882DBC;
L_08882E3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882E4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] << 2u);
    ctx.gpr[17] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08882E84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 214u, 0x08AECA80u>(ctx, &aot_mem) && ctx.pc == 0x08882E84u) goto L_08882E84;
    return;
L_08882E84:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08882EB4;
    }
    goto L_08882E98;
L_08882E98:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08882EA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-632));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 553u, 0x08AAECB0u>(ctx, &aot_mem) && ctx.pc == 0x08882EA8u) goto L_08882EA8;
    return;
L_08882EA8:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08882EB4;
L_08882EB4:
    ctx.gpr[6] = (65280u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(63));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
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
L_08882EF4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882F00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] >> 6u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08882F44;
      }
      goto L_08882F3C;
    }
L_08882F3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08882F4C;
      }
      goto L_08882F44;
    }
L_08882F44:
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08882F4C;
L_08882F4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08882F94;
      }
      goto L_08882F68;
    }
L_08882F68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24608));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08882F94;
      }
      goto L_08882F8C;
    }
L_08882F8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08882F94;
      }
      goto L_08882F94;
    }
L_08882F94:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08882F9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08883014;
      }
      goto L_08882FCC;
    }
L_08882FCC:
    ctx.gpr[19] = (0u | 24u);
    goto L_08882FD0;
L_08882FD0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08882FDCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08882F54;
L_08882FDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[4] >> 6u);
      if (branch_taken) {
          goto L_08882FF8;
      }
      goto L_08882FEC;
    }
L_08882FEC:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08883000;
      }
      goto L_08882FF8;
    }
L_08882FF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08883018;
      }
      goto L_08883000;
    }
L_08883000:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0888300Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08882F00;
L_0888300C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08882FD0;
      }
      goto L_08883014;
    }
L_08883014:
    ctx.gpr[2] = (0u | 0u);
    goto L_08883018;
L_08883018:
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
L_08883038:
    ctx.gpr[7] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0888304C;
      }
      goto L_08883044;
    }
L_08883044:
    ctx.gpr[5] = (ctx.gpr[6] >> 15u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    goto L_0888304C;
L_0888304C:
    ctx.gpr[7] = (256u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[7] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883070:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[30] = (ctx.gpr[7] | 0u);
    ctx.gpr[23] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[22] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    ctx.gpr[21] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_0888315C;
      }
      goto L_088830C0;
    }
L_088830C0:
    ctx.gpr[19] = (0u | 24u);
    goto L_088830C4;
L_088830C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088830D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08882F00;
L_088830D0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088830E0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08882F54;
L_088830E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] & 63u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0888310C;
      }
      goto L_088830F4;
    }
L_088830F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08883104u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    goto L_08882E4C;
L_08883104:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883154;
      }
      goto L_0888310C;
    }
L_0888310C:
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888313C;
      }
      goto L_0888311C;
    }
L_0888311C:
    ctx.gpr[31] = (0x08883124u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_08883038;
L_08883124:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08883134u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08882E4C;
L_08883134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883154;
      }
      goto L_0888313C;
    }
L_0888313C:
    ctx.gpr[31] = (0x08883144u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08883038;
L_08883144:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08883154u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_08882E4C;
L_08883154:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[20];
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088830C4;
      }
      goto L_0888315C;
    }
L_0888315C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888318C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[6] = (ctx.gpr[10] | 0u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088831B8u);
    ctx.gpr[9] = (0u | 255u);
    goto L_08883070;
L_088831B8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088831D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088831FC;
      }
      goto L_088831EC;
    }
L_088831EC:
    ctx.gpr[31] = (0x088831F4u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08883224;
L_088831F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883218;
      }
      goto L_088831FC;
    }
L_088831FC:
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[10] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[31] = (0x08883218u);
    ctx.gpr[9] = (0u | 255u);
    goto L_08883070;
L_08883218:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883224:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08883240u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_08882EF4;
L_08883240:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08883250u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08883264;
L_08883250:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883264:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[19];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088832A0;
      }
      goto L_0888328C;
    }
L_0888328C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088832A8;
      }
      goto L_08883298;
    }
L_08883298:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088832D8;
      }
      goto L_088832A0;
    }
L_088832A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088832D8;
      }
      goto L_088832A8;
    }
L_088832A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088832B4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08882F00;
L_088832B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088832C8;
      }
      goto L_088832C0;
    }
L_088832C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088832A8;
      }
      goto L_088832C8;
    }
L_088832C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088832D8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08882E4C;
L_088832D8:
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
L_088832F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(71)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888334C;
      }
      goto L_08883318;
    }
L_08883318:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08883344;
      }
      goto L_08883324;
    }
L_08883324:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x0888333Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-604));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 553u, 0x08AAECB0u>(ctx, &aot_mem) && ctx.pc == 0x0888333Cu) goto L_0888333C;
    return;
L_0888333C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08883344;
L_08883344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0888334C;
L_0888334C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883358:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08883374u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_088832F4;
L_08883374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883394:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
      if (branch_taken) {
          goto L_088833B8;
      }
      goto L_088833A4;
    }
L_088833A4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088833B8;
      }
      goto L_088833AC;
    }
L_088833AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_088833B8;
L_088833B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088833C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088833F0;
      }
      goto L_088833E0;
    }
L_088833E0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088833F0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08883394;
L_088833F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088833FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08883428u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 53u, 0x0892833Cu>(ctx, &aot_mem) && ctx.pc == 0x08883428u) goto L_08883428;
    return;
L_08883428:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888344C;
      }
      goto L_0888343C;
    }
L_0888343C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088834F8;
      }
      goto L_0888344C;
    }
L_0888344C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
        goto L_08883494;
    }
    goto L_08883468;
L_08883468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (4u << 16u);
    ctx.gpr[9] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (0u | 8u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0888348Cu);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-568));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 313u, 0x0894DD40u>(ctx, &aot_mem) && ctx.pc == 0x0888348Cu) goto L_0888348C;
    return;
L_0888348C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_08883494;
L_08883494:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088834CCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 64u, 0x089283E4u>(ctx, &aot_mem) && ctx.pc == 0x088834CCu) goto L_088834CC;
    return;
L_088834CC:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088834F8;
      }
      goto L_088834F8;
    }
L_088834F8:
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
L_08883514:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08883544u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_088833FC;
L_08883544:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883550:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08883570u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_088833FC;
L_08883570:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888357C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x088835A4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    goto L_088833FC;
L_088835A4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088835B0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08883624;
      }
      goto L_088835C0;
    }
L_088835C0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-32705));
    ctx.gpr[10] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[10] << 6u);
    ctx.gpr[9] = (ctx.gpr[9] & 32704u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_08883624;
      }
      goto L_08883600;
    }
L_08883600:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] >> 24u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08883624;
L_08883624:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888362C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0888371C;
      }
      goto L_08883654;
    }
L_08883654:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-520)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888366C:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888371C;
      }
      goto L_08883678;
    }
L_08883678:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08883690u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 77u, 0x08884564u>(ctx, &aot_mem) && ctx.pc == 0x08883690u) goto L_08883690;
    return;
L_08883690:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888371C;
      }
      goto L_088836A0;
    }
L_088836A0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x088836B4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 79u, 0x0888459Cu>(ctx, &aot_mem) && ctx.pc == 0x088836B4u) goto L_088836B4;
    return;
L_088836B4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888371C;
      }
      goto L_088836C4;
    }
L_088836C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088836D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08883394;
L_088836D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088836DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08883394;
L_088836DC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x088836F4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 77u, 0x08884564u>(ctx, &aot_mem) && ctx.pc == 0x088836F4u) goto L_088836F4;
    return;
L_088836F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888371C;
      }
      goto L_08883704;
    }
L_08883704:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08883714u);
    ctx.gpr[6] = (0u | 1u);
    goto L_088835B0;
L_08883714:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888371C;
      }
      goto L_0888371C;
    }
L_0888371C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883730:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888375Cu);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    goto L_08882EF4;
L_0888375C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08883774u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 77u, 0x08884564u>(ctx, &aot_mem) && ctx.pc == 0x08883774u) goto L_08883774;
    return;
L_08883774:
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
L_08883790:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x088837B4u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_0888362C;
L_088837B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088838AC;
      }
      goto L_088837C8;
    }
L_088837C8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-488)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088837E0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088837F0u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08882CE4;
L_088837F0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088838AC;
      }
      goto L_08883800;
    }
L_08883800:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08883820u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 77u, 0x08884564u>(ctx, &aot_mem) && ctx.pc == 0x08883820u) goto L_08883820;
    return;
L_08883820:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088837F0;
      }
      goto L_08883828;
    }
L_08883828:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0888383Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 79u, 0x0888459Cu>(ctx, &aot_mem) && ctx.pc == 0x0888383Cu) goto L_0888383C;
    return;
L_0888383C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088837F0;
      }
      goto L_08883844;
    }
L_08883844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[16] << 24u);
    ctx.gpr[6] = (65280u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088837F0;
      }
      goto L_08883880;
    }
L_08883880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088838A4;
      }
      goto L_0888388C;
    }
L_0888388C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088838A4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 77u, 0x08884564u>(ctx, &aot_mem) && ctx.pc == 0x088838A4u) goto L_088838A4;
    return;
L_088838A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088837F0;
      }
      goto L_088838AC;
    }
L_088838AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088838C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 11u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08883908;
      }
      goto L_088838E8;
    }
L_088838E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088838F4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08883358;
L_088838F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08883908u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08883790;
L_08883908:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888391C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888394Cu);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08883790;
L_0888394C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0888396C;
      }
      goto L_0888395C;
    }
L_0888395C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x0888396Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08883264;
L_0888396C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08883A58;
      }
      goto L_0888397C;
    }
L_0888397C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883994u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08882F9C;
L_08883994:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088839B4;
      }
      goto L_0888399C;
    }
L_0888399C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088839ACu);
    ctx.gpr[6] = (0u | 0u);
    goto L_08882F9C;
L_088839AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08883A0C;
      }
      goto L_088839B4;
    }
L_088839B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088839CC;
      }
      goto L_088839C0;
    }
L_088839C0:
    ctx.gpr[31] = (0x088839C8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08882DBC;
L_088839C8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_088839CC;
L_088839CC:
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088839E4u);
    ctx.gpr[7] = (0u | 1u);
    goto L_08883730;
L_088839E4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088839FCu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08883730;
L_088839FC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883A0Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08883224;
L_08883A0C:
    ctx.gpr[31] = (0x08883A14u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08882EF4;
L_08883A14:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08883A38u);
    ctx.gpr[10] = (ctx.gpr[20] | 0u);
    goto L_08883070;
L_08883A38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[31] = (0x08883A58u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    goto L_08883070;
L_08883A58:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
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
L_08883A94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08883AB0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_0888362C;
L_08883AB0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08883ABCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088833C0;
L_08883ABC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08883AC8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08883358;
L_08883AC8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08883ADCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0888391C;
L_08883ADC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883AF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08883B0Cu);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_0888362C;
L_08883B0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08883B5C;
      }
      goto L_08883B1C;
    }
L_08883B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08883B54;
      }
      goto L_08883B2C;
    }
L_08883B2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08883B5C;
      }
      goto L_08883B3C;
    }
L_08883B3C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08883B4Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_0888391C;
L_08883B4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08883B6C;
      }
      goto L_08883B54;
    }
L_08883B54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883B6C;
      }
      goto L_08883B5C;
    }
L_08883B5C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08883B68u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08883A94;
L_08883B68:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08883B6C;
L_08883B6C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883B80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08883BB8;
      }
      goto L_08883BA0;
    }
L_08883BA0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08883BB0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08883AF0;
L_08883BB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883BC8;
      }
      goto L_08883BB8;
    }
L_08883BB8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08883BC8u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_0888362C;
L_08883BC8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883BD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08883BF0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08883B80;
L_08883BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08883C10;
      }
      goto L_08883C00;
    }
L_08883C00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08883C7C;
      }
      goto L_08883C08;
    }
L_08883C08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883C20;
      }
      goto L_08883C10;
    }
L_08883C10:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08883C58;
      }
      goto L_08883C18;
    }
L_08883C18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883C7C;
      }
      goto L_08883C20;
    }
L_08883C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(250));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 512 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08883C3C;
      }
      goto L_08883C34;
    }
L_08883C34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883C7C;
      }
      goto L_08883C3C;
    }
L_08883C3C:
    ctx.gpr[31] = (0x08883C44u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0888357C;
L_08883C44:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(250));
      if (branch_taken) {
          goto L_08883C88;
      }
      goto L_08883C58;
    }
L_08883C58:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(250));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 512 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08883C74;
      }
      goto L_08883C6C;
    }
L_08883C6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883C7C;
      }
      goto L_08883C74;
    }
L_08883C74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883C88;
      }
      goto L_08883C7C;
    }
L_08883C7C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08883C88u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08883AF0;
L_08883C88:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883C9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08883D00;
      }
      goto L_08883CC8;
    }
L_08883CC8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08883D9C;
      }
      goto L_08883CD4;
    }
L_08883CD4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08883D1C;
      }
      goto L_08883CDC;
    }
L_08883CDC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883CE8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088833C0;
L_08883CE8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883CF8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0888391C;
L_08883CF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883DA8;
      }
      goto L_08883D00;
    }
L_08883D00:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_08883D48;
      }
      goto L_08883D0C;
    }
L_08883D0C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08883D70;
      }
      goto L_08883D14;
    }
L_08883D14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883D9C;
      }
      goto L_08883D1C;
    }
L_08883D1C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883D28u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08883AF0;
L_08883D28:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08883D40u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 77u, 0x08884564u>(ctx, &aot_mem) && ctx.pc == 0x08883D40u) goto L_08883D40;
    return;
L_08883D40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883D9C;
      }
      goto L_08883D48;
    }
L_08883D48:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883D54u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08883AF0;
L_08883D54:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x08883D68u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 79u, 0x0888459Cu>(ctx, &aot_mem) && ctx.pc == 0x08883D68u) goto L_08883D68;
    return;
L_08883D68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883D9C;
      }
      goto L_08883D70;
    }
L_08883D70:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883D7Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08883BD4;
L_08883D7C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x08883D94u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 77u, 0x08884564u>(ctx, &aot_mem) && ctx.pc == 0x08883D94u) goto L_08883D94;
    return;
L_08883D94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883D9C;
      }
      goto L_08883D9C;
    }
L_08883D9C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883DA8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088833C0;
L_08883DA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883DC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08883DF0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08883AF0;
L_08883DF0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883DFCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088833C0;
L_08883DFC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883E0Cu);
    ctx.gpr[5] = (0u | 2u);
    goto L_08883358;
L_08883E0C:
    ctx.gpr[20] = (0u | 11u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883E20u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08883BD4;
L_08883E20:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08883E38u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 77u, 0x08884564u>(ctx, &aot_mem) && ctx.pc == 0x08883E38u) goto L_08883E38;
    return;
L_08883E38:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883E44u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088833C0;
L_08883E44:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
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
L_08883E70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08883E80u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08882F54;
L_08883E80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 24u);
    ctx.gpr[6] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883EB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[8] = (0u | 10u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08883F3C;
      }
      goto L_08883EE4;
    }
L_08883EE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[6] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08883F3C;
      }
      goto L_08883F0C;
    }
L_08883F0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] & 511u);
    ctx.gpr[8] = (ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[31] = (0x08883F34u);
    ctx.gpr[6] = (0u | 255u);
    goto L_08882E20;
L_08883F34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08883F6C;
      }
      goto L_08883F3C;
    }
L_08883F3C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883F48u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088838C4;
L_08883F48:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08883F54u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088833C0;
L_08883F54:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08883F6Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08882E20;
L_08883F6C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08883F84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08883FA0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_0888362C;
L_08883FA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08883FE0;
      }
      goto L_08883FB0;
    }
L_08883FB0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08883FC8;
      }
      goto L_08883FB8;
    }
L_08883FB8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08883FD0;
      }
      goto L_08883FC0;
    }
L_08883FC0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08883FF4;
      }
      goto L_08883FC8;
    }
L_08883FC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 2u, 0x08884008u>(ctx, &aot_mem); return;
      }
      goto L_08883FD0;
    }
L_08883FD0:
    ctx.gpr[31] = (0x08883FD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08882DBC;
L_08883FD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 2u, 0x08884008u>(ctx, &aot_mem); return;
      }
      goto L_08883FE0;
    }
L_08883FE0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08883FECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08883E70;
L_08883FEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 2u, 0x08884008u>(ctx, &aot_mem); return;
      }
      goto L_08883FF4;
    }
L_08883FF4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08884004u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08883EB8;
}

void recomp_unit_0031(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0031_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_31(Runtime &runtime) {
    runtime.register_generated_unit(31u, 0x08880000u, 16384u, &recomp_unit_0031, &recomp_unit_0031_entry);
    runtime.register_function(0x08880000u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880014u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888001Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888003Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888004Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880074u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088800A8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088800B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088800BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088800D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088800E4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088800FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888011Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880124u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888012Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880138u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880148u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880150u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880160u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880168u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880184u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880198u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088801ACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088801C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088801D4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088801E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088801FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880204u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880218u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888022Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880240u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880254u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880258u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888027Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880284u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888029Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088802B0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088802D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088802D4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088802DCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088802E4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888030Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880314u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880334u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880344u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880364u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088803D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088803D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088803DCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088803E4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088803F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880400u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880414u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880418u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888043Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880454u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888045Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880464u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888046Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880474u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888047Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880488u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088804B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088804C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088804CCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088804ECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880500u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088805F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880614u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880680u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880688u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088806BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088806FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888070Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880730u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880738u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888076Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880798u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088807ACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088807B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088807CCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088807E4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088807ECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088807F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088807F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880800u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880818u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880820u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880830u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880834u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888083Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888084Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880850u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880858u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880880u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880888u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088808A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088808B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088808D4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088808D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088808E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088808E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888092Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880934u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888096Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888097Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880984u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088809C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880A38u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880A44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880A4Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880A64u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880A7Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880AB4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880AE8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B08u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B10u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B48u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B54u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B6Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B78u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B80u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B8Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B94u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880B9Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BA4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BB4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BBCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BC4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BCCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BD8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880BECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C14u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C28u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C50u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C58u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C74u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C88u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880C9Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880CB0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880CB8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880CBCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880CC8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880CD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880CDCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880CE4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880CECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880CF4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880CFCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D08u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D0Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D14u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D20u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D24u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D2Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D34u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D54u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D78u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D80u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880D98u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880DACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880DCCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880DD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880DDCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880DE8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880E04u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880E0Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880E2Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880E3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880E48u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880E50u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880E98u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F0Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F14u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F18u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F20u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F34u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F50u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F5Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F6Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F84u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F90u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880F9Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FB4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FC8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FD8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08880FF4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881000u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888100Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881018u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881030u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888103Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881044u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881060u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888107Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881098u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088810B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088810D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088810ECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088810F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088810FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881118u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881134u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881150u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888116Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881174u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881178u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881184u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881194u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811A8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811B0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811CCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811E4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088811F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881200u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881208u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881218u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888123Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881244u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888125Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881270u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881290u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881294u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088812A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088812A8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088812D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088812D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881300u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881310u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881318u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881320u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888135Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088813BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088813C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088813D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088813D4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088813DCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088813F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088813F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888140Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888141Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888143Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888144Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881454u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888146Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881474u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888147Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881498u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088814A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088814B0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088814BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088814D4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088814E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088814E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881504u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881520u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888153Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881558u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881574u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881590u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881598u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088815A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088815BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088815D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088815F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881610u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881618u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888161Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881628u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881638u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881644u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888164Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881654u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888165Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881664u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881670u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881674u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888167Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881688u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888168Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881694u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888169Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088816A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088816ACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088816BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088816E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088816E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881700u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881714u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881734u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881738u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881744u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888174Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881774u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888177Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088817A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088817B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088817BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088817C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881800u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881860u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888186Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881874u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881878u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881880u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881894u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888189Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088818B0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088818E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088818FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888190Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881914u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888192Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881934u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888193Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881958u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881964u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881970u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888197Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881994u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088819A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088819A8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088819C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088819E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088819FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A18u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A34u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A50u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A58u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A7Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881A98u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881AB4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881AD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881AD8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881ADCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881AE8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881AF8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B04u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B0Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B14u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B1Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B24u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B34u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B48u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B4Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B54u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B5Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B64u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B6Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881B7Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881BA0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881BA8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881BC0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881BD4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881BF4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881BF8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C04u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C0Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C34u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C64u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C74u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C7Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881C84u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881CC0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D38u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D5Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D64u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D7Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881D94u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881DB4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881DBCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881DC8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881DD8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881DE8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881DF0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E08u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E20u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E28u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E50u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E5Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E68u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E74u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E8Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881E98u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881EA0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881EACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881EB4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881EBCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881EC4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881ECCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881ED4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881EDCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881EE4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881EECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881EF8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F0Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F20u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F34u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F48u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F5Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F70u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F78u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F80u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881F94u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881FA8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881FBCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881FD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881FD8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881FDCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881FE8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881FF0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08881FFCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882004u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888200Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882014u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888201Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882028u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888202Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882034u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882040u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882044u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888204Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882054u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888205Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882064u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882074u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882098u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088820A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088820B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088820CCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088820ECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088820F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088820FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882108u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882134u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888213Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882160u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882170u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088821B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882254u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882260u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088822DCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088822FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882328u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882350u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882364u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882370u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888238Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882394u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823ACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088823D4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882408u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882418u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882424u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882444u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882460u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882468u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882478u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882480u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882490u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882498u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088824B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088824C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088824CCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088824E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088824F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882500u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882508u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882528u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088825A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088825A8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088825C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088825D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882600u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882680u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888268Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888269Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088826B0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088826C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088826D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088826D4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088826E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088826F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882714u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882728u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882730u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882754u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882760u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882770u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882774u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882794u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088827D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088827D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882810u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882814u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888281Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882834u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882840u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882848u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882850u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882858u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882860u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882874u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888287Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882884u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882890u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882898u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888289Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828B0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828BCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828D4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088828F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882900u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888291Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882924u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882930u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882938u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882940u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882948u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882950u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882958u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882960u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882964u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882978u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088829ACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088829F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882A00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882A04u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882A44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882A5Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882A70u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882A90u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882A9Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882AA4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882AACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882AB4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882AC4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882ACCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882AD4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882AE0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882AECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882AF4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B18u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B1Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B30u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B4Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B58u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B64u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B6Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B78u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B94u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882B9Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882BB0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882BB8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882BC0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882BC8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882BD4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882BE0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882BE8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882BF4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C0Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C10u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C18u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C38u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882C6Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882CE4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882D14u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882D38u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882D50u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882D60u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882D6Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882D90u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882D98u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882DB0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882DBCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882DF4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E08u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E20u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E34u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E4Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E84u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882E98u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882EA8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882EB4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882EF4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882F00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882F3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882F44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882F4Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882F54u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882F68u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882F8Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882F94u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882F9Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882FCCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882FD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882FDCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882FECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08882FF8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883000u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888300Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883014u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883018u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883038u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883044u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888304Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883070u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088830C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088830C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088830D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088830E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088830F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883104u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888310Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888311Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883124u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883134u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888313Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883144u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883154u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888315Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888318Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088831B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088831D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088831ECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088831F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088831FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883218u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883224u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883240u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883250u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883264u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888328Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883298u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088832A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088832A8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088832B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088832C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088832C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088832D8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088832F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883318u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883324u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888333Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883344u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888334Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883358u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883374u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883394u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088833A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088833ACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088833B8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088833C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088833E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088833F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088833FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883428u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888343Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888344Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883468u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888348Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883494u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088834CCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088834F8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883514u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883544u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883550u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883570u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888357Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088835A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088835B0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088835C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883600u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883624u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888362Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883654u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888366Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883678u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883690u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088836A0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088836B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088836C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088836D0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088836DCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088836F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883704u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883714u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888371Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883730u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888375Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883774u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883790u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088837B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088837C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088837E0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088837F0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883800u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883820u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883828u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888383Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883844u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883880u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888388Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088838A4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088838ACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088838C4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088838E8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088838F4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883908u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888391Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888394Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888395Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888396Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888397Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883994u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x0888399Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088839ACu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088839B4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088839C0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088839C8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088839CCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088839E4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x088839FCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883A0Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883A14u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883A38u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883A58u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883A94u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883AB0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883ABCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883AC8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883ADCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883AF0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B0Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B1Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B2Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B4Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B54u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B5Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B68u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B6Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883B80u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883BA0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883BB0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883BB8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883BC8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883BD4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883BF0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C08u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C10u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C18u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C20u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C34u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C58u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C6Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C74u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C7Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C88u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883C9Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883CC8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883CD4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883CDCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883CE8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883CF8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D00u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D0Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D14u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D1Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D28u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D40u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D48u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D54u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D68u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D70u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D7Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D94u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883D9Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883DA8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883DC0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883DF0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883DFCu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883E0Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883E20u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883E38u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883E44u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883E70u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883E80u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883EB8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883EE4u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F0Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F34u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F3Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F48u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F54u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F6Cu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883F84u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FA0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FB0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FB8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FC0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FC8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FD0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FD8u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FE0u, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FECu, &recomp_unit_0031, "recomp_unit_0031");
    runtime.register_function(0x08883FF4u, &recomp_unit_0031, "recomp_unit_0031");
}
} // namespace psprecomp
