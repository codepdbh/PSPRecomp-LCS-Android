#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0006[4085] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0,
    9, 0, 0, 0, 0, 10, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 0, 18, 0, 19, 0,
    0, 20, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 32, 0, 0, 0, 0, 33, 0, 34,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40,
    0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0,
    0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 56, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 59,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 67,
    0, 0, 68, 0, 0, 69, 0, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0,
    84, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91,
    0, 0, 92, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 101, 0, 0, 102, 0, 0, 103, 0, 104, 0, 105, 0, 0, 0, 106, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109,
    0, 110, 0, 0, 111, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0,
    0, 120, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 0,
    130, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 139, 0, 0, 140, 0, 0,
    141, 0, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 151, 0,
    0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158,
    0, 159, 0, 0, 0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167,
    0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 198, 0,
    0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 203, 0, 0, 204, 0, 0, 0, 0, 205, 0, 206, 0, 207, 0, 0, 0,
    208, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215,
    0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0,
    0, 0, 222, 0, 223, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 235, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0,
    0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 253, 0,
    0, 254, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 259, 0, 260, 0, 261, 0, 0, 262, 0,
    0, 0, 263, 0, 264, 0, 265, 0, 0, 266, 0, 267, 0, 0, 268, 0, 269, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0,
    0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 276, 0, 277, 0, 0, 0, 0, 278, 0, 279, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 282,
    0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 287, 0, 0, 0, 0,
    0, 288, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0,
    0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 300, 0, 0, 0, 301, 0, 302, 0, 0, 303, 0,
    304, 0, 0, 305, 0, 0, 306, 0, 307, 0, 0, 308, 0, 0, 0, 309, 0, 310, 311, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0,
    0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0,
    0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 328, 0, 329, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 333, 0,
    0, 0, 334, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0,
    342, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 345, 0, 346, 0, 0, 347, 0, 348, 0, 0, 349, 0, 0, 350, 0, 351, 0, 352, 0, 353, 354,
    0, 355, 0, 0, 356, 0, 357, 0, 0, 358, 0, 0, 359, 0, 360, 0, 361, 0, 362, 363, 0, 364, 0, 0, 365, 0, 366, 0, 0, 367, 0, 0,
    368, 0, 369, 0, 370, 0, 371, 372, 0, 373, 0, 0, 374, 0, 375, 0, 0, 376, 0, 0, 377, 0, 378, 0, 379, 0, 380, 381, 0, 382, 0, 383,
    0, 0, 384, 0, 385, 0, 0, 386, 0, 0, 387, 0, 388, 0, 389, 0, 390, 0, 0, 391, 0, 392, 0, 0, 393, 0, 394, 0, 0, 395, 0, 0,
    396, 0, 397, 0, 398, 0, 399, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 403, 0, 404, 0, 405, 0, 406, 0, 407, 0, 408, 0, 409, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0,
    412, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0,
    417, 0, 0, 0, 418, 0, 419, 0, 0, 0, 420, 0, 421, 0, 422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 433, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0,
    0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 444, 0, 445, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0,
    0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0,
    0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 461,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 0, 471, 0, 472, 0, 473, 0, 474, 0, 0, 475, 0,
    476, 0, 477, 0, 478, 0, 0, 479, 0, 480, 0, 481, 0, 482, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485,
    0, 486, 0, 487, 0, 488, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 495,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    503, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0,
    0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 513, 514, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 518, 0, 519, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 526, 0, 527, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 533, 0, 534, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0,
    0, 0, 537, 0, 0, 538, 0, 0, 539, 0, 0, 540, 0, 541, 0, 542, 0, 543, 0, 544, 545, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 547, 0, 0, 0, 0, 0, 0, 548, 0, 549, 0, 550, 0, 0, 0, 551, 0, 552, 0, 553, 0, 554, 0, 555, 0, 0, 0, 0, 0, 0, 556,
    0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0,
    0, 0, 0, 564, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 568, 0, 569, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0,
    572, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0,
    0, 0, 576, 0, 0, 577, 0, 0, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0, 0, 580, 0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583,
    0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 587, 0, 588, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 590,
    0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 592, 0, 593, 0, 594, 0, 595, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0,
    598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 599, 0, 600, 0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 604, 0, 0, 0, 0, 605, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 609, 0, 610, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 613, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0, 0,
    0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 618, 0, 0, 0, 619, 0, 0, 0, 620, 621, 0, 622, 0, 0, 623,
    0, 0, 0, 0, 0, 624, 625, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 630, 0, 631, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 636, 0, 637, 0, 0, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 0, 0,
    0, 640, 641, 0, 642, 0, 643, 0, 644, 0, 0, 0, 0, 0, 645, 0, 646, 0, 0, 0, 0, 0, 0, 0, 647, 648, 0, 0, 649, 0, 650, 0,
    651, 0, 652, 0, 653, 0, 654, 0, 655, 0, 656, 0, 0, 0, 0, 0, 657, 0, 658, 0, 0, 659, 0, 660, 0, 661, 0, 662, 0, 0, 663, 0,
    0, 0, 0, 0, 664, 0, 665, 0, 666, 0, 667, 0, 0, 668, 0, 669, 0, 670, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0,
    0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 675, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 678,
    0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0,
    0, 683, 0, 684, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 689, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 691, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 694, 0, 0, 0, 0,
    0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 700,
    0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 705, 0, 0, 0, 0,
    0, 0, 0, 706, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 709, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 711, 0, 712, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0,
    716, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 718, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 721, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0,
    0, 0, 726, 0, 727, 0, 0, 0, 728, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 731, 0, 0, 0,
    0, 0, 0, 0, 0, 732, 0, 733, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 0, 0, 0, 737, 0,
    0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 742, 0, 0, 0, 743, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 745, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 748, 0, 749, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 752, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0,
    754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 756, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 759,
    0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 763, 0, 0, 0, 764, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 765, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 769, 0, 0, 0, 0, 770, 0, 771, 0, 0, 772, 0, 773, 0, 774, 0, 775, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 779, 0, 0, 780, 0, 0, 0, 0, 781, 0, 0, 0, 0, 782, 0, 0, 0, 0, 783, 0, 0, 0, 0, 784, 0, 0, 0, 0,
    785, 0, 0, 0, 0, 786, 0, 0, 0, 0, 787, 0, 0, 0, 0, 788, 0, 0, 0, 789, 0, 0, 0, 0, 0, 790, 0, 0, 791, 0, 792, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 794,
};
void recomp_unit_0006_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0881C000u;
        entry_id = (entry_delta < 16340u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0006[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0881C000;
    case 2u: goto L_0881C018;
    case 3u: goto L_0881C028;
    case 4u: goto L_0881C030;
    case 5u: goto L_0881C03C;
    case 6u: goto L_0881C054;
    case 7u: goto L_0881C05C;
    case 8u: goto L_0881C074;
    case 9u: goto L_0881C080;
    case 10u: goto L_0881C094;
    case 11u: goto L_0881C09C;
    case 12u: goto L_0881C0A4;
    case 13u: goto L_0881C0B0;
    case 14u: goto L_0881C0C0;
    case 15u: goto L_0881C0C8;
    case 16u: goto L_0881C0D4;
    case 17u: goto L_0881C0E0;
    case 18u: goto L_0881C0F0;
    case 19u: goto L_0881C0F8;
    case 20u: goto L_0881C104;
    case 21u: goto L_0881C11C;
    case 22u: goto L_0881C124;
    case 23u: goto L_0881C138;
    case 24u: goto L_0881C168;
    case 25u: goto L_0881C170;
    case 26u: goto L_0881C190;
    case 27u: goto L_0881C198;
    case 28u: goto L_0881C1A0;
    case 29u: goto L_0881C1B0;
    case 30u: goto L_0881C1CC;
    case 31u: goto L_0881C1D4;
    case 32u: goto L_0881C1E0;
    case 33u: goto L_0881C1F4;
    case 34u: goto L_0881C1FC;
    case 35u: goto L_0881C210;
    case 36u: goto L_0881C228;
    case 37u: goto L_0881C234;
    case 38u: goto L_0881C244;
    case 39u: goto L_0881C26C;
    case 40u: goto L_0881C27C;
    case 41u: goto L_0881C284;
    case 42u: goto L_0881C290;
    case 43u: goto L_0881C2A8;
    case 44u: goto L_0881C2B0;
    case 45u: goto L_0881C2C8;
    case 46u: goto L_0881C2D4;
    case 47u: goto L_0881C2E8;
    case 48u: goto L_0881C2F0;
    case 49u: goto L_0881C2F8;
    case 50u: goto L_0881C304;
    case 51u: goto L_0881C314;
    case 52u: goto L_0881C31C;
    case 53u: goto L_0881C32C;
    case 54u: goto L_0881C338;
    case 55u: goto L_0881C348;
    case 56u: goto L_0881C350;
    case 57u: goto L_0881C35C;
    case 58u: goto L_0881C370;
    case 59u: goto L_0881C37C;
    case 60u: goto L_0881C390;
    case 61u: goto L_0881C3B4;
    case 62u: goto L_0881C3BC;
    case 63u: goto L_0881C3D0;
    case 64u: goto L_0881C3DC;
    case 65u: goto L_0881C3E8;
    case 66u: goto L_0881C3F4;
    case 67u: goto L_0881C3FC;
    case 68u: goto L_0881C408;
    case 69u: goto L_0881C414;
    case 70u: goto L_0881C424;
    case 71u: goto L_0881C430;
    case 72u: goto L_0881C43C;
    case 73u: goto L_0881C448;
    case 74u: goto L_0881C454;
    case 75u: goto L_0881C45C;
    case 76u: goto L_0881C464;
    case 77u: goto L_0881C478;
    case 78u: goto L_0881C494;
    case 79u: goto L_0881C4A8;
    case 80u: goto L_0881C4C8;
    case 81u: goto L_0881C4DC;
    case 82u: goto L_0881C4E8;
    case 83u: goto L_0881C4F4;
    case 84u: goto L_0881C500;
    case 85u: goto L_0881C508;
    case 86u: goto L_0881C524;
    case 87u: goto L_0881C534;
    case 88u: goto L_0881C540;
    case 89u: goto L_0881C54C;
    case 90u: goto L_0881C568;
    case 91u: goto L_0881C57C;
    case 92u: goto L_0881C588;
    case 93u: goto L_0881C590;
    case 94u: goto L_0881C598;
    case 95u: goto L_0881C5A8;
    case 96u: goto L_0881C5B4;
    case 97u: goto L_0881C5C4;
    case 98u: goto L_0881C5D0;
    case 99u: goto L_0881C5DC;
    case 100u: goto L_0881C600;
    case 101u: goto L_0881C608;
    case 102u: goto L_0881C614;
    case 103u: goto L_0881C620;
    case 104u: goto L_0881C628;
    case 105u: goto L_0881C630;
    case 106u: goto L_0881C640;
    case 107u: goto L_0881C648;
    case 108u: goto L_0881C654;
    case 109u: goto L_0881C67C;
    case 110u: goto L_0881C684;
    case 111u: goto L_0881C690;
    case 112u: goto L_0881C69C;
    case 113u: goto L_0881C6A4;
    case 114u: goto L_0881C6AC;
    case 115u: goto L_0881C6C4;
    case 116u: goto L_0881C6D0;
    case 117u: goto L_0881C6DC;
    case 118u: goto L_0881C6EC;
    case 119u: goto L_0881C6F8;
    case 120u: goto L_0881C704;
    case 121u: goto L_0881C710;
    case 122u: goto L_0881C71C;
    case 123u: goto L_0881C724;
    case 124u: goto L_0881C730;
    case 125u: goto L_0881C73C;
    case 126u: goto L_0881C74C;
    case 127u: goto L_0881C758;
    case 128u: goto L_0881C764;
    case 129u: goto L_0881C774;
    case 130u: goto L_0881C780;
    case 131u: goto L_0881C788;
    case 132u: goto L_0881C794;
    case 133u: goto L_0881C7A0;
    case 134u: goto L_0881C7B0;
    case 135u: goto L_0881C7BC;
    case 136u: goto L_0881C7C8;
    case 137u: goto L_0881C7D4;
    case 138u: goto L_0881C7E0;
    case 139u: goto L_0881C7E8;
    case 140u: goto L_0881C7F4;
    case 141u: goto L_0881C800;
    case 142u: goto L_0881C810;
    case 143u: goto L_0881C81C;
    case 144u: goto L_0881C828;
    case 145u: goto L_0881C838;
    case 146u: goto L_0881C844;
    case 147u: goto L_0881C84C;
    case 148u: goto L_0881C854;
    case 149u: goto L_0881C860;
    case 150u: goto L_0881C870;
    case 151u: goto L_0881C878;
    case 152u: goto L_0881C884;
    case 153u: goto L_0881C8A0;
    case 154u: goto L_0881C8B0;
    case 155u: goto L_0881C8BC;
    case 156u: goto L_0881C8C8;
    case 157u: goto L_0881C8D8;
    case 158u: goto L_0881C8FC;
    case 159u: goto L_0881C904;
    case 160u: goto L_0881C918;
    case 161u: goto L_0881C920;
    case 162u: goto L_0881C928;
    case 163u: goto L_0881C938;
    case 164u: goto L_0881C954;
    case 165u: goto L_0881C95C;
    case 166u: goto L_0881C968;
    case 167u: goto L_0881C97C;
    case 168u: goto L_0881C994;
    case 169u: goto L_0881C99C;
    case 170u: goto L_0881C9A8;
    case 171u: goto L_0881C9C8;
    case 172u: goto L_0881C9E0;
    case 173u: goto L_0881C9F0;
    case 174u: goto L_0881CA00;
    case 175u: goto L_0881CA34;
    case 176u: goto L_0881CA3C;
    case 177u: goto L_0881CA44;
    case 178u: goto L_0881CA50;
    case 179u: goto L_0881CA78;
    case 180u: goto L_0881CA90;
    case 181u: goto L_0881CAA0;
    case 182u: goto L_0881CAB0;
    case 183u: goto L_0881CAD0;
    case 184u: goto L_0881CAE0;
    case 185u: goto L_0881CAF0;
    case 186u: goto L_0881CB08;
    case 187u: goto L_0881CB38;
    case 188u: goto L_0881CB40;
    case 189u: goto L_0881CB54;
    case 190u: goto L_0881CB6C;
    case 191u: goto L_0881CB78;
    case 192u: goto L_0881CB88;
    case 193u: goto L_0881CBB4;
    case 194u: goto L_0881CBC4;
    case 195u: goto L_0881CBCC;
    case 196u: goto L_0881CBD8;
    case 197u: goto L_0881CBF0;
    case 198u: goto L_0881CBF8;
    case 199u: goto L_0881CC10;
    case 200u: goto L_0881CC1C;
    case 201u: goto L_0881CC30;
    case 202u: goto L_0881CC38;
    case 203u: goto L_0881CC40;
    case 204u: goto L_0881CC4C;
    case 205u: goto L_0881CC60;
    case 206u: goto L_0881CC68;
    case 207u: goto L_0881CC70;
    case 208u: goto L_0881CC80;
    case 209u: goto L_0881CC88;
    case 210u: goto L_0881CC94;
    case 211u: goto L_0881CCB0;
    case 212u: goto L_0881CCC0;
    case 213u: goto L_0881CCCC;
    case 214u: goto L_0881CCD8;
    case 215u: goto L_0881CCFC;
    case 216u: goto L_0881CD20;
    case 217u: goto L_0881CD28;
    case 218u: goto L_0881CD4C;
    case 219u: goto L_0881CD54;
    case 220u: goto L_0881CD5C;
    case 221u: goto L_0881CD6C;
    case 222u: goto L_0881CD88;
    case 223u: goto L_0881CD90;
    case 224u: goto L_0881CD9C;
    case 225u: goto L_0881CDB0;
    case 226u: goto L_0881CDC4;
    case 227u: goto L_0881CDCC;
    case 228u: goto L_0881CDD8;
    case 229u: goto L_0881CDF8;
    case 230u: goto L_0881CE10;
    case 231u: goto L_0881CE20;
    case 232u: goto L_0881CE30;
    case 233u: goto L_0881CE64;
    case 234u: goto L_0881CE6C;
    case 235u: goto L_0881CE74;
    case 236u: goto L_0881CE80;
    case 237u: goto L_0881CEA8;
    case 238u: goto L_0881CEC0;
    case 239u: goto L_0881CED0;
    case 240u: goto L_0881CEE0;
    case 241u: goto L_0881CF00;
    case 242u: goto L_0881CF10;
    case 243u: goto L_0881CF20;
    case 244u: goto L_0881CF38;
    case 245u: goto L_0881CF68;
    case 246u: goto L_0881CF70;
    case 247u: goto L_0881CF84;
    case 248u: goto L_0881CF9C;
    case 249u: goto L_0881CFA8;
    case 250u: goto L_0881CFB8;
    case 251u: goto L_0881CFE0;
    case 252u: goto L_0881CFF0;
    case 253u: goto L_0881CFF8;
    case 254u: goto L_0881D004;
    case 255u: goto L_0881D01C;
    case 256u: goto L_0881D024;
    case 257u: goto L_0881D03C;
    case 258u: goto L_0881D048;
    case 259u: goto L_0881D05C;
    case 260u: goto L_0881D064;
    case 261u: goto L_0881D06C;
    case 262u: goto L_0881D078;
    case 263u: goto L_0881D088;
    case 264u: goto L_0881D090;
    case 265u: goto L_0881D098;
    case 266u: goto L_0881D0A4;
    case 267u: goto L_0881D0AC;
    case 268u: goto L_0881D0B8;
    case 269u: goto L_0881D0C0;
    case 270u: goto L_0881D0C8;
    case 271u: goto L_0881D0D4;
    case 272u: goto L_0881D0E0;
    case 273u: goto L_0881D0EC;
    case 274u: goto L_0881D10C;
    case 275u: goto L_0881D120;
    case 276u: goto L_0881D128;
    case 277u: goto L_0881D130;
    case 278u: goto L_0881D144;
    case 279u: goto L_0881D14C;
    case 280u: goto L_0881D158;
    case 281u: goto L_0881D160;
    case 282u: goto L_0881D17C;
    case 283u: goto L_0881D19C;
    case 284u: goto L_0881D1B4;
    case 285u: goto L_0881D1D8;
    case 286u: goto L_0881D1E4;
    case 287u: goto L_0881D1EC;
    case 288u: goto L_0881D204;
    case 289u: goto L_0881D210;
    case 290u: goto L_0881D224;
    case 291u: goto L_0881D23C;
    case 292u: goto L_0881D244;
    case 293u: goto L_0881D250;
    case 294u: goto L_0881D258;
    case 295u: goto L_0881D274;
    case 296u: goto L_0881D28C;
    case 297u: goto L_0881D29C;
    case 298u: goto L_0881D2C0;
    case 299u: goto L_0881D2C8;
    case 300u: goto L_0881D2D4;
    case 301u: goto L_0881D2E4;
    case 302u: goto L_0881D2EC;
    case 303u: goto L_0881D2F8;
    case 304u: goto L_0881D300;
    case 305u: goto L_0881D30C;
    case 306u: goto L_0881D318;
    case 307u: goto L_0881D320;
    case 308u: goto L_0881D32C;
    case 309u: goto L_0881D33C;
    case 310u: goto L_0881D344;
    case 311u: goto L_0881D348;
    case 312u: goto L_0881D350;
    case 313u: goto L_0881D394;
    case 314u: goto L_0881D3DC;
    case 315u: goto L_0881D3F0;
    case 316u: goto L_0881D418;
    case 317u: goto L_0881D430;
    case 318u: goto L_0881D468;
    case 319u: goto L_0881D48C;
    case 320u: goto L_0881D494;
    case 321u: goto L_0881D4AC;
    case 322u: goto L_0881D4C4;
    case 323u: goto L_0881D4D0;
    case 324u: goto L_0881D4E0;
    case 325u: goto L_0881D4E8;
    case 326u: goto L_0881D50C;
    case 327u: goto L_0881D52C;
    case 328u: goto L_0881D530;
    case 329u: goto L_0881D538;
    case 330u: goto L_0881D54C;
    case 331u: goto L_0881D558;
    case 332u: goto L_0881D568;
    case 333u: goto L_0881D578;
    case 334u: goto L_0881D588;
    case 335u: goto L_0881D594;
    case 336u: goto L_0881D5A4;
    case 337u: goto L_0881D5B4;
    case 338u: goto L_0881D5C4;
    case 339u: goto L_0881D5D0;
    case 340u: goto L_0881D5E0;
    case 341u: goto L_0881D5F0;
    case 342u: goto L_0881D600;
    case 343u: goto L_0881D60C;
    case 344u: goto L_0881D61C;
    case 345u: goto L_0881D62C;
    case 346u: goto L_0881D634;
    case 347u: goto L_0881D640;
    case 348u: goto L_0881D648;
    case 349u: goto L_0881D654;
    case 350u: goto L_0881D660;
    case 351u: goto L_0881D668;
    case 352u: goto L_0881D670;
    case 353u: goto L_0881D678;
    case 354u: goto L_0881D67C;
    case 355u: goto L_0881D684;
    case 356u: goto L_0881D690;
    case 357u: goto L_0881D698;
    case 358u: goto L_0881D6A4;
    case 359u: goto L_0881D6B0;
    case 360u: goto L_0881D6B8;
    case 361u: goto L_0881D6C0;
    case 362u: goto L_0881D6C8;
    case 363u: goto L_0881D6CC;
    case 364u: goto L_0881D6D4;
    case 365u: goto L_0881D6E0;
    case 366u: goto L_0881D6E8;
    case 367u: goto L_0881D6F4;
    case 368u: goto L_0881D700;
    case 369u: goto L_0881D708;
    case 370u: goto L_0881D710;
    case 371u: goto L_0881D718;
    case 372u: goto L_0881D71C;
    case 373u: goto L_0881D724;
    case 374u: goto L_0881D730;
    case 375u: goto L_0881D738;
    case 376u: goto L_0881D744;
    case 377u: goto L_0881D750;
    case 378u: goto L_0881D758;
    case 379u: goto L_0881D760;
    case 380u: goto L_0881D768;
    case 381u: goto L_0881D76C;
    case 382u: goto L_0881D774;
    case 383u: goto L_0881D77C;
    case 384u: goto L_0881D788;
    case 385u: goto L_0881D790;
    case 386u: goto L_0881D79C;
    case 387u: goto L_0881D7A8;
    case 388u: goto L_0881D7B0;
    case 389u: goto L_0881D7B8;
    case 390u: goto L_0881D7C0;
    case 391u: goto L_0881D7CC;
    case 392u: goto L_0881D7D4;
    case 393u: goto L_0881D7E0;
    case 394u: goto L_0881D7E8;
    case 395u: goto L_0881D7F4;
    case 396u: goto L_0881D800;
    case 397u: goto L_0881D808;
    case 398u: goto L_0881D810;
    case 399u: goto L_0881D818;
    case 400u: goto L_0881D820;
    case 401u: goto L_0881D828;
    case 402u: goto L_0881D858;
    case 403u: goto L_0881D890;
    case 404u: goto L_0881D898;
    case 405u: goto L_0881D8A0;
    case 406u: goto L_0881D8A8;
    case 407u: goto L_0881D8B0;
    case 408u: goto L_0881D8B8;
    case 409u: goto L_0881D8C0;
    case 410u: goto L_0881D8C8;
    case 411u: goto L_0881D8E0;
    case 412u: goto L_0881D900;
    case 413u: goto L_0881D908;
    case 414u: goto L_0881D910;
    case 415u: goto L_0881D954;
    case 416u: goto L_0881D968;
    case 417u: goto L_0881D980;
    case 418u: goto L_0881D990;
    case 419u: goto L_0881D998;
    case 420u: goto L_0881D9A8;
    case 421u: goto L_0881D9B0;
    case 422u: goto L_0881D9B8;
    case 423u: goto L_0881D9C8;
    case 424u: goto L_0881D9D8;
    case 425u: goto L_0881DA18;
    case 426u: goto L_0881DA28;
    case 427u: goto L_0881DA64;
    case 428u: goto L_0881DA7C;
    case 429u: goto L_0881DB0C;
    case 430u: goto L_0881DB64;
    case 431u: goto L_0881DB78;
    case 432u: goto L_0881DBB0;
    case 433u: goto L_0881DBB4;
    case 434u: goto L_0881DBBC;
    case 435u: goto L_0881DBD8;
    case 436u: goto L_0881DBF4;
    case 437u: goto L_0881DC38;
    case 438u: goto L_0881DC8C;
    case 439u: goto L_0881DCAC;
    case 440u: goto L_0881DCD0;
    case 441u: goto L_0881DCF8;
    case 442u: goto L_0881DD10;
    case 443u: goto L_0881DD2C;
    case 444u: goto L_0881DD88;
    case 445u: goto L_0881DD90;
    case 446u: goto L_0881DD98;
    case 447u: goto L_0881DDB4;
    case 448u: goto L_0881DDF4;
    case 449u: goto L_0881DE50;
    case 450u: goto L_0881DE70;
    case 451u: goto L_0881DE94;
    case 452u: goto L_0881DEBC;
    case 453u: goto L_0881DED4;
    case 454u: goto L_0881DEF0;
    case 455u: goto L_0881DF4C;
    case 456u: goto L_0881DF54;
    case 457u: goto L_0881DF70;
    case 458u: goto L_0881DF8C;
    case 459u: goto L_0881DFD8;
    case 460u: goto L_0881DFE0;
    case 461u: goto L_0881DFFC;
    case 462u: goto L_0881E044;
    case 463u: goto L_0881E08C;
    case 464u: goto L_0881E094;
    case 465u: goto L_0881E0B0;
    case 466u: goto L_0881E0C8;
    case 467u: goto L_0881E0E4;
    case 468u: goto L_0881E124;
    case 469u: goto L_0881E12C;
    case 470u: goto L_0881E148;
    case 471u: goto L_0881E154;
    case 472u: goto L_0881E15C;
    case 473u: goto L_0881E164;
    case 474u: goto L_0881E16C;
    case 475u: goto L_0881E178;
    case 476u: goto L_0881E180;
    case 477u: goto L_0881E188;
    case 478u: goto L_0881E190;
    case 479u: goto L_0881E19C;
    case 480u: goto L_0881E1A4;
    case 481u: goto L_0881E1AC;
    case 482u: goto L_0881E1B4;
    case 483u: goto L_0881E1C0;
    case 484u: goto L_0881E1D0;
    case 485u: goto L_0881E1FC;
    case 486u: goto L_0881E204;
    case 487u: goto L_0881E20C;
    case 488u: goto L_0881E214;
    case 489u: goto L_0881E218;
    case 490u: goto L_0881E230;
    case 491u: goto L_0881E24C;
    case 492u: goto L_0881E264;
    case 493u: goto L_0881E2B8;
    case 494u: goto L_0881E2D8;
    case 495u: goto L_0881E2FC;
    case 496u: goto L_0881E324;
    case 497u: goto L_0881E33C;
    case 498u: goto L_0881E354;
    case 499u: goto L_0881E3B0;
    case 500u: goto L_0881E3B8;
    case 501u: goto L_0881E3C4;
    case 502u: goto L_0881E3D0;
    case 503u: goto L_0881E400;
    case 504u: goto L_0881E408;
    case 505u: goto L_0881E420;
    case 506u: goto L_0881E474;
    case 507u: goto L_0881E4A8;
    case 508u: goto L_0881E4E8;
    case 509u: goto L_0881E4F8;
    case 510u: goto L_0881E508;
    case 511u: goto L_0881E524;
    case 512u: goto L_0881E534;
    case 513u: goto L_0881E53C;
    case 514u: goto L_0881E540;
    case 515u: goto L_0881E560;
    case 516u: goto L_0881E590;
    case 517u: goto L_0881E5B8;
    case 518u: goto L_0881E5CC;
    case 519u: goto L_0881E5D4;
    case 520u: goto L_0881E5DC;
    case 521u: goto L_0881E5EC;
    case 522u: goto L_0881E624;
    case 523u: goto L_0881E638;
    case 524u: goto L_0881E64C;
    case 525u: goto L_0881E65C;
    case 526u: goto L_0881E664;
    case 527u: goto L_0881E66C;
    case 528u: goto L_0881E694;
    case 529u: goto L_0881E714;
    case 530u: goto L_0881E78C;
    case 531u: goto L_0881E7CC;
    case 532u: goto L_0881E7DC;
    case 533u: goto L_0881E7E8;
    case 534u: goto L_0881E7F0;
    case 535u: goto L_0881E818;
    case 536u: goto L_0881E864;
    case 537u: goto L_0881E888;
    case 538u: goto L_0881E894;
    case 539u: goto L_0881E8A0;
    case 540u: goto L_0881E8AC;
    case 541u: goto L_0881E8B4;
    case 542u: goto L_0881E8BC;
    case 543u: goto L_0881E8C4;
    case 544u: goto L_0881E8CC;
    case 545u: goto L_0881E8D0;
    case 546u: goto L_0881E8DC;
    case 547u: goto L_0881E904;
    case 548u: goto L_0881E920;
    case 549u: goto L_0881E928;
    case 550u: goto L_0881E930;
    case 551u: goto L_0881E940;
    case 552u: goto L_0881E948;
    case 553u: goto L_0881E950;
    case 554u: goto L_0881E958;
    case 555u: goto L_0881E960;
    case 556u: goto L_0881E97C;
    case 557u: goto L_0881E984;
    case 558u: goto L_0881E9A0;
    case 559u: goto L_0881E9D0;
    case 560u: goto L_0881E9EC;
    case 561u: goto L_0881EA1C;
    case 562u: goto L_0881EA38;
    case 563u: goto L_0881EA70;
    case 564u: goto L_0881EA8C;
    case 565u: goto L_0881EA94;
    case 566u: goto L_0881EAB0;
    case 567u: goto L_0881EAC0;
    case 568u: goto L_0881EACC;
    case 569u: goto L_0881EAD4;
    case 570u: goto L_0881EAE0;
    case 571u: goto L_0881EB74;
    case 572u: goto L_0881EB80;
    case 573u: goto L_0881EB8C;
    case 574u: goto L_0881EB98;
    case 575u: goto L_0881EC6C;
    case 576u: goto L_0881EC88;
    case 577u: goto L_0881EC94;
    case 578u: goto L_0881ECB0;
    case 579u: goto L_0881ECBC;
    case 580u: goto L_0881ECCC;
    case 581u: goto L_0881ECD4;
    case 582u: goto L_0881ECE4;
    case 583u: goto L_0881ECFC;
    case 584u: goto L_0881ED08;
    case 585u: goto L_0881ED28;
    case 586u: goto L_0881ED34;
    case 587u: goto L_0881ED44;
    case 588u: goto L_0881ED4C;
    case 589u: goto L_0881ED58;
    case 590u: goto L_0881ED7C;
    case 591u: goto L_0881ED94;
    case 592u: goto L_0881EDA8;
    case 593u: goto L_0881EDB0;
    case 594u: goto L_0881EDB8;
    case 595u: goto L_0881EDC0;
    case 596u: goto L_0881EDC4;
    case 597u: goto L_0881EDEC;
    case 598u: goto L_0881EE00;
    case 599u: goto L_0881EE8C;
    case 600u: goto L_0881EE94;
    case 601u: goto L_0881EE9C;
    case 602u: goto L_0881EEAC;
    case 603u: goto L_0881EEC0;
    case 604u: goto L_0881EF04;
    case 605u: goto L_0881EF18;
    case 606u: goto L_0881EF24;
    case 607u: goto L_0881EF48;
    case 608u: goto L_0881EF5C;
    case 609u: goto L_0881EF64;
    case 610u: goto L_0881EF6C;
    case 611u: goto L_0881EFB4;
    case 612u: goto L_0881F038;
    case 613u: goto L_0881F050;
    case 614u: goto L_0881F05C;
    case 615u: goto L_0881F06C;
    case 616u: goto L_0881F088;
    case 617u: goto L_0881F0BC;
    case 618u: goto L_0881F0C4;
    case 619u: goto L_0881F0D4;
    case 620u: goto L_0881F0E4;
    case 621u: goto L_0881F0E8;
    case 622u: goto L_0881F0F0;
    case 623u: goto L_0881F0FC;
    case 624u: goto L_0881F114;
    case 625u: goto L_0881F118;
    case 626u: goto L_0881F11C;
    case 627u: goto L_0881F150;
    case 628u: goto L_0881F158;
    case 629u: goto L_0881F21C;
    case 630u: goto L_0881F228;
    case 631u: goto L_0881F230;
    case 632u: goto L_0881F234;
    case 633u: goto L_0881F268;
    case 634u: goto L_0881F2A8;
    case 635u: goto L_0881F2B4;
    case 636u: goto L_0881F2BC;
    case 637u: goto L_0881F2C4;
    case 638u: goto L_0881F2DC;
    case 639u: goto L_0881F2E4;
    case 640u: goto L_0881F304;
    case 641u: goto L_0881F308;
    case 642u: goto L_0881F310;
    case 643u: goto L_0881F318;
    case 644u: goto L_0881F320;
    case 645u: goto L_0881F338;
    case 646u: goto L_0881F340;
    case 647u: goto L_0881F360;
    case 648u: goto L_0881F364;
    case 649u: goto L_0881F370;
    case 650u: goto L_0881F378;
    case 651u: goto L_0881F380;
    case 652u: goto L_0881F388;
    case 653u: goto L_0881F390;
    case 654u: goto L_0881F398;
    case 655u: goto L_0881F3A0;
    case 656u: goto L_0881F3A8;
    case 657u: goto L_0881F3C0;
    case 658u: goto L_0881F3C8;
    case 659u: goto L_0881F3D4;
    case 660u: goto L_0881F3DC;
    case 661u: goto L_0881F3E4;
    case 662u: goto L_0881F3EC;
    case 663u: goto L_0881F3F8;
    case 664u: goto L_0881F410;
    case 665u: goto L_0881F418;
    case 666u: goto L_0881F420;
    case 667u: goto L_0881F428;
    case 668u: goto L_0881F434;
    case 669u: goto L_0881F43C;
    case 670u: goto L_0881F444;
    case 671u: goto L_0881F45C;
    case 672u: goto L_0881F478;
    case 673u: goto L_0881F488;
    case 674u: goto L_0881F4B4;
    case 675u: goto L_0881F4BC;
    case 676u: goto L_0881F4CC;
    case 677u: goto L_0881F4F4;
    case 678u: goto L_0881F4FC;
    case 679u: goto L_0881F518;
    case 680u: goto L_0881F528;
    case 681u: goto L_0881F550;
    case 682u: goto L_0881F560;
    case 683u: goto L_0881F584;
    case 684u: goto L_0881F58C;
    case 685u: goto L_0881F59C;
    case 686u: goto L_0881F5C0;
    case 687u: goto L_0881F5C8;
    case 688u: goto L_0881F5E8;
    case 689u: goto L_0881F5F8;
    case 690u: goto L_0881F624;
    case 691u: goto L_0881F62C;
    case 692u: goto L_0881F63C;
    case 693u: goto L_0881F664;
    case 694u: goto L_0881F66C;
    case 695u: goto L_0881F68C;
    case 696u: goto L_0881F69C;
    case 697u: goto L_0881F6C0;
    case 698u: goto L_0881F6D0;
    case 699u: goto L_0881F6F4;
    case 700u: goto L_0881F6FC;
    case 701u: goto L_0881F70C;
    case 702u: goto L_0881F734;
    case 703u: goto L_0881F73C;
    case 704u: goto L_0881F764;
    case 705u: goto L_0881F76C;
    case 706u: goto L_0881F78C;
    case 707u: goto L_0881F79C;
    case 708u: goto L_0881F7C8;
    case 709u: goto L_0881F7D0;
    case 710u: goto L_0881F7E0;
    case 711u: goto L_0881F808;
    case 712u: goto L_0881F810;
    case 713u: goto L_0881F830;
    case 714u: goto L_0881F840;
    case 715u: goto L_0881F870;
    case 716u: goto L_0881F880;
    case 717u: goto L_0881F8A4;
    case 718u: goto L_0881F8AC;
    case 719u: goto L_0881F8BC;
    case 720u: goto L_0881F8E0;
    case 721u: goto L_0881F8E8;
    case 722u: goto L_0881F914;
    case 723u: goto L_0881F924;
    case 724u: goto L_0881F954;
    case 725u: goto L_0881F964;
    case 726u: goto L_0881F988;
    case 727u: goto L_0881F990;
    case 728u: goto L_0881F9A0;
    case 729u: goto L_0881F9B0;
    case 730u: goto L_0881F9E0;
    case 731u: goto L_0881F9F0;
    case 732u: goto L_0881FA14;
    case 733u: goto L_0881FA1C;
    case 734u: goto L_0881FA2C;
    case 735u: goto L_0881FA50;
    case 736u: goto L_0881FA58;
    case 737u: goto L_0881FA78;
    case 738u: goto L_0881FA88;
    case 739u: goto L_0881FAAC;
    case 740u: goto L_0881FABC;
    case 741u: goto L_0881FAE0;
    case 742u: goto L_0881FAE8;
    case 743u: goto L_0881FAF8;
    case 744u: goto L_0881FB20;
    case 745u: goto L_0881FB28;
    case 746u: goto L_0881FB48;
    case 747u: goto L_0881FB58;
    case 748u: goto L_0881FB90;
    case 749u: goto L_0881FB98;
    case 750u: goto L_0881FBA8;
    case 751u: goto L_0881FBCC;
    case 752u: goto L_0881FBD4;
    case 753u: goto L_0881FBF0;
    case 754u: goto L_0881FC00;
    case 755u: goto L_0881FC38;
    case 756u: goto L_0881FC40;
    case 757u: goto L_0881FC50;
    case 758u: goto L_0881FC74;
    case 759u: goto L_0881FC7C;
    case 760u: goto L_0881FC98;
    case 761u: goto L_0881FCA8;
    case 762u: goto L_0881FCD4;
    case 763u: goto L_0881FCDC;
    case 764u: goto L_0881FCEC;
    case 765u: goto L_0881FD14;
    case 766u: goto L_0881FD1C;
    case 767u: goto L_0881FD40;
    case 768u: goto L_0881FD60;
    case 769u: goto L_0881FD8C;
    case 770u: goto L_0881FDA0;
    case 771u: goto L_0881FDA8;
    case 772u: goto L_0881FDB4;
    case 773u: goto L_0881FDBC;
    case 774u: goto L_0881FDC4;
    case 775u: goto L_0881FDCC;
    case 776u: goto L_0881FDD4;
    case 777u: goto L_0881FE20;
    case 778u: goto L_0881FE48;
    case 779u: goto L_0881FE90;
    case 780u: goto L_0881FE9C;
    case 781u: goto L_0881FEB0;
    case 782u: goto L_0881FEC4;
    case 783u: goto L_0881FED8;
    case 784u: goto L_0881FEEC;
    case 785u: goto L_0881FF00;
    case 786u: goto L_0881FF14;
    case 787u: goto L_0881FF28;
    case 788u: goto L_0881FF3C;
    case 789u: goto L_0881FF4C;
    case 790u: goto L_0881FF64;
    case 791u: goto L_0881FF70;
    case 792u: goto L_0881FF78;
    case 793u: goto L_0881FFB8;
    case 794u: goto L_0881FFD0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0881C000:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3480), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3480));
    ctx.gpr[31] = (0x0881C018u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3484), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x0881C018u) goto L_0881C018;
    return;
L_0881C018:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3476), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(3476));
    ctx.gpr[31] = (0x0881C028u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3472));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x0881C028u) goto L_0881C028;
    return;
L_0881C028:
    ctx.gpr[31] = (0x0881C030u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 378u, 0x08AF9A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0881C030u) goto L_0881C030;
    return;
L_0881C030:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881C03Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A06210u>(ctx, &aot_mem) && ctx.pc == 0x0881C03Cu) goto L_0881C03C;
    return;
L_0881C03C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C09C;
      }
      goto L_0881C054;
    }
L_0881C054:
    ctx.gpr[31] = (0x0881C05Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881C05Cu) goto L_0881C05C;
    return;
L_0881C05C:
    ctx.gpr[4] = (16275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C074u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881C074u) goto L_0881C074;
    return;
L_0881C074:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0881C080u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881C080u) goto L_0881C080;
    return;
L_0881C080:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881C094u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 514u, 0x08A06620u>(ctx, &aot_mem) && ctx.pc == 0x0881C094u) goto L_0881C094;
    return;
L_0881C094:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C0B0;
      }
      goto L_0881C09C;
    }
L_0881C09C:
    ctx.gpr[31] = (0x0881C0A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881C0A4u) goto L_0881C0A4;
    return;
L_0881C0A4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881C0B0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065F0u>(ctx, &aot_mem) && ctx.pc == 0x0881C0B0u) goto L_0881C0B0;
    return;
L_0881C0B0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x0881C0C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 307u, 0x0880ABC8u>(ctx, &aot_mem) && ctx.pc == 0x0881C0C0u) goto L_0881C0C0;
    return;
L_0881C0C0:
    ctx.gpr[31] = (0x0881C0C8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0881C0C8u) goto L_0881C0C8;
    return;
L_0881C0C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1188)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C31C;
      }
      goto L_0881C0D4;
    }
L_0881C0D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1188)));
    ctx.gpr[31] = (0x0881C0E0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x0881C0E0u) goto L_0881C0E0;
    return;
L_0881C0E0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881C0F0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x0881C0F0u) goto L_0881C0F0;
    return;
L_0881C0F0:
    ctx.gpr[31] = (0x0881C0F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x0881C0F8u) goto L_0881C0F8;
    return;
L_0881C0F8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x0881C104u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881C104u) goto L_0881C104;
    return;
L_0881C104:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1480)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x0881C11Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 209u, 0x08A29280u>(ctx, &aot_mem) && ctx.pc == 0x0881C11Cu) goto L_0881C11C;
    return;
L_0881C11C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0881C170;
      }
      goto L_0881C124;
    }
L_0881C124:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1464)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x0881C138u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x0881C138u) goto L_0881C138;
    return;
L_0881C138:
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0881C168u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0881C168u) goto L_0881C168;
    return;
L_0881C168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C190;
      }
      goto L_0881C170;
    }
L_0881C170:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1464)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881C190u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0881C190u) goto L_0881C190;
    return;
L_0881C190:
    ctx.gpr[31] = (0x0881C198u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x0881C198u) goto L_0881C198;
    return;
L_0881C198:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881C290;
      }
      goto L_0881C1A0;
    }
L_0881C1A0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16178)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C1FC;
      }
      goto L_0881C1B0;
    }
L_0881C1B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881C1FC;
      }
      goto L_0881C1CC;
    }
L_0881C1CC:
    ctx.gpr[31] = (0x0881C1D4u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1280));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x0881C1D4u) goto L_0881C1D4;
    return;
L_0881C1D4:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881C1FC;
      }
      goto L_0881C1E0;
    }
L_0881C1E0:
    ctx.gpr[5] = (16329u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881C1F4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A06210u>(ctx, &aot_mem) && ctx.pc == 0x0881C1F4u) goto L_0881C1F4;
    return;
L_0881C1F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C290;
      }
      goto L_0881C1FC;
    }
L_0881C1FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1560)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C210u);
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881C210u) goto L_0881C210;
    return;
L_0881C210:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881C228u);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0881C228u) goto L_0881C228;
    return;
L_0881C228:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-984));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881C244;
      }
      goto L_0881C234;
    }
L_0881C234:
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_0881C244;
L_0881C244:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(3500));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3496));
    ctx.gpr[31] = (0x0881C26Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3500), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x0881C26Cu) goto L_0881C26C;
    return;
L_0881C26C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3492), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(3492));
    ctx.gpr[31] = (0x0881C27Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3488));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x0881C27Cu) goto L_0881C27C;
    return;
L_0881C27C:
    ctx.gpr[31] = (0x0881C284u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 378u, 0x08AF9A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0881C284u) goto L_0881C284;
    return;
L_0881C284:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881C290u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A06210u>(ctx, &aot_mem) && ctx.pc == 0x0881C290u) goto L_0881C290;
    return;
L_0881C290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C2F0;
      }
      goto L_0881C2A8;
    }
L_0881C2A8:
    ctx.gpr[31] = (0x0881C2B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881C2B0u) goto L_0881C2B0;
    return;
L_0881C2B0:
    ctx.gpr[4] = (16275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C2C8u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881C2C8u) goto L_0881C2C8;
    return;
L_0881C2C8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0881C2D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881C2D4u) goto L_0881C2D4;
    return;
L_0881C2D4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881C2E8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 514u, 0x08A06620u>(ctx, &aot_mem) && ctx.pc == 0x0881C2E8u) goto L_0881C2E8;
    return;
L_0881C2E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C304;
      }
      goto L_0881C2F0;
    }
L_0881C2F0:
    ctx.gpr[31] = (0x0881C2F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881C2F8u) goto L_0881C2F8;
    return;
L_0881C2F8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881C304u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065F0u>(ctx, &aot_mem) && ctx.pc == 0x0881C304u) goto L_0881C304;
    return;
L_0881C304:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x0881C314u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 307u, 0x0880ABC8u>(ctx, &aot_mem) && ctx.pc == 0x0881C314u) goto L_0881C314;
    return;
L_0881C314:
    ctx.gpr[31] = (0x0881C31Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0881C31Cu) goto L_0881C31C;
    return;
L_0881C31C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 164u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881C598;
      }
      goto L_0881C32C;
    }
L_0881C32C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1172)));
    ctx.gpr[31] = (0x0881C338u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x0881C338u) goto L_0881C338;
    return;
L_0881C338:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881C348u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x0881C348u) goto L_0881C348;
    return;
L_0881C348:
    ctx.gpr[31] = (0x0881C350u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x0881C350u) goto L_0881C350;
    return;
L_0881C350:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x0881C35Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881C35Cu) goto L_0881C35C;
    return;
L_0881C35C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1484)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0881C370u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 209u, 0x08A29280u>(ctx, &aot_mem) && ctx.pc == 0x0881C370u) goto L_0881C370;
    return;
L_0881C370:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881C3BC;
      }
      goto L_0881C37C;
    }
L_0881C37C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1468)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(584)));
    ctx.gpr[31] = (0x0881C390u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x0881C390u) goto L_0881C390;
    return;
L_0881C390:
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0881C3B4u);
    ctx.fpr[14] = ctx.fpr[24] + ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0881C3B4u) goto L_0881C3B4;
    return;
L_0881C3B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C3D0;
      }
      goto L_0881C3BC;
    }
L_0881C3BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1468)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881C3D0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(584)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0881C3D0u) goto L_0881C3D0;
    return;
L_0881C3D0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881C3DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881C3DCu) goto L_0881C3DC;
    return;
L_0881C3DC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881C3E8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065F0u>(ctx, &aot_mem) && ctx.pc == 0x0881C3E8u) goto L_0881C3E8;
    return;
L_0881C3E8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x0881C3F4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 307u, 0x0880ABC8u>(ctx, &aot_mem) && ctx.pc == 0x0881C3F4u) goto L_0881C3F4;
    return;
L_0881C3F4:
    ctx.gpr[31] = (0x0881C3FCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0881C3FCu) goto L_0881C3FC;
    return;
L_0881C3FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1244)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C4DC;
      }
      goto L_0881C408;
    }
L_0881C408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1244)));
    ctx.gpr[31] = (0x0881C414u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x0881C414u) goto L_0881C414;
    return;
L_0881C414:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881C424u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x0881C424u) goto L_0881C424;
    return;
L_0881C424:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x0881C430u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x0881C430u) goto L_0881C430;
    return;
L_0881C430:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881C43Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881C43Cu) goto L_0881C43C;
    return;
L_0881C43C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1720)));
    ctx.gpr[31] = (0x0881C448u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 488u, 0x08A05FACu>(ctx, &aot_mem) && ctx.pc == 0x0881C448u) goto L_0881C448;
    return;
L_0881C448:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C454u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 307u, 0x0880ABC8u>(ctx, &aot_mem) && ctx.pc == 0x0881C454u) goto L_0881C454;
    return;
L_0881C454:
    ctx.gpr[31] = (0x0881C45Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0881C45Cu) goto L_0881C45C;
    return;
L_0881C45C:
    ctx.gpr[31] = (0x0881C464u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 449u, 0x08AFA07Cu>(ctx, &aot_mem) && ctx.pc == 0x0881C464u) goto L_0881C464;
    return;
L_0881C464:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) && ctx.fpr[0] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (15982u << 16u);
      if (branch_taken) {
          goto L_0881C494;
      }
      goto L_0881C478;
    }
L_0881C478:
    ctx.gpr[4] = (16119u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1720)));
    ctx.gpr[4] = (ctx.gpr[4] | 21980u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0881C4A8;
      }
      goto L_0881C494;
    }
L_0881C494:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1720)));
    ctx.gpr[4] = (ctx.gpr[4] | 11457u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0881C4A8;
L_0881C4A8:
    ctx.gpr[4] = (16584u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1720)));
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16584u << 16u);
      if (branch_taken) {
          goto L_0881C4DC;
      }
      goto L_0881C4C8;
    }
L_0881C4C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1720)));
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0881C4DC;
L_0881C4DC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881C4E8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 215u, 0x08A292C8u>(ctx, &aot_mem) && ctx.pc == 0x0881C4E8u) goto L_0881C4E8;
    return;
L_0881C4E8:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881D090;
      }
      goto L_0881C4F4;
    }
L_0881C4F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1240)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D090;
      }
      goto L_0881C500;
    }
L_0881C500:
    ctx.gpr[31] = (0x0881C508u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(584)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x0881C508u) goto L_0881C508;
    return;
L_0881C508:
    ctx.gpr[4] = (16068u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 38922u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1240)));
    ctx.gpr[31] = (0x0881C524u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x0881C524u) goto L_0881C524;
    return;
L_0881C524:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881C534u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x0881C534u) goto L_0881C534;
    return;
L_0881C534:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x0881C540u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x0881C540u) goto L_0881C540;
    return;
L_0881C540:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881C54Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881C54Cu) goto L_0881C54C;
    return;
L_0881C54C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(584)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.gpr[31] = (0x0881C568u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0881C568u) goto L_0881C568;
    return;
L_0881C568:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0881C57Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06698u>(ctx, &aot_mem) && ctx.pc == 0x0881C57Cu) goto L_0881C57C;
    return;
L_0881C57C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C588u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 307u, 0x0880ABC8u>(ctx, &aot_mem) && ctx.pc == 0x0881C588u) goto L_0881C588;
    return;
L_0881C588:
    ctx.gpr[31] = (0x0881C590u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0881C590u) goto L_0881C590;
    return;
L_0881C590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D090;
      }
      goto L_0881C598;
    }
L_0881C598:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 162u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881C6AC;
      }
      goto L_0881C5A8;
    }
L_0881C5A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1172)));
    ctx.gpr[31] = (0x0881C5B4u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x0881C5B4u) goto L_0881C5B4;
    return;
L_0881C5B4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881C5C4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x0881C5C4u) goto L_0881C5C4;
    return;
L_0881C5C4:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x0881C5D0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x0881C5D0u) goto L_0881C5D0;
    return;
L_0881C5D0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881C5DCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881C5DCu) goto L_0881C5DC;
    return;
L_0881C5DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1484)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1468)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881C600u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0881C600u) goto L_0881C600;
    return;
L_0881C600:
    ctx.gpr[31] = (0x0881C608u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881C608u) goto L_0881C608;
    return;
L_0881C608:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881C614u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065F0u>(ctx, &aot_mem) && ctx.pc == 0x0881C614u) goto L_0881C614;
    return;
L_0881C614:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881C620u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 307u, 0x0880ABC8u>(ctx, &aot_mem) && ctx.pc == 0x0881C620u) goto L_0881C620;
    return;
L_0881C620:
    ctx.gpr[31] = (0x0881C628u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0881C628u) goto L_0881C628;
    return;
L_0881C628:
    ctx.gpr[31] = (0x0881C630u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1184)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x0881C630u) goto L_0881C630;
    return;
L_0881C630:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881C640u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x0881C640u) goto L_0881C640;
    return;
L_0881C640:
    ctx.gpr[31] = (0x0881C648u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x0881C648u) goto L_0881C648;
    return;
L_0881C648:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881C654u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881C654u) goto L_0881C654;
    return;
L_0881C654:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1476)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1460)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881C67Cu);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0881C67Cu) goto L_0881C67C;
    return;
L_0881C67C:
    ctx.gpr[31] = (0x0881C684u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881C684u) goto L_0881C684;
    return;
L_0881C684:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881C690u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065F0u>(ctx, &aot_mem) && ctx.pc == 0x0881C690u) goto L_0881C690;
    return;
L_0881C690:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881C69Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 307u, 0x0880ABC8u>(ctx, &aot_mem) && ctx.pc == 0x0881C69Cu) goto L_0881C69C;
    return;
L_0881C69C:
    ctx.gpr[31] = (0x0881C6A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0881C6A4u) goto L_0881C6A4;
    return;
L_0881C6A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D090;
      }
      goto L_0881C6AC;
    }
L_0881C6AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C854;
      }
      goto L_0881C6C4;
    }
L_0881C6C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1236)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C724;
      }
      goto L_0881C6D0;
    }
L_0881C6D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1236)));
    ctx.gpr[31] = (0x0881C6DCu);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x0881C6DCu) goto L_0881C6DC;
    return;
L_0881C6DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881C6ECu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x0881C6ECu) goto L_0881C6EC;
    return;
L_0881C6EC:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x0881C6F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x0881C6F8u) goto L_0881C6F8;
    return;
L_0881C6F8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881C704u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881C704u) goto L_0881C704;
    return;
L_0881C704:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1464)));
    ctx.gpr[31] = (0x0881C710u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 490u, 0x08A05FD4u>(ctx, &aot_mem) && ctx.pc == 0x0881C710u) goto L_0881C710;
    return;
L_0881C710:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C71Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 307u, 0x0880ABC8u>(ctx, &aot_mem) && ctx.pc == 0x0881C71Cu) goto L_0881C71C;
    return;
L_0881C71C:
    ctx.gpr[31] = (0x0881C724u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0881C724u) goto L_0881C724;
    return;
L_0881C724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1244)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C788;
      }
      goto L_0881C730;
    }
L_0881C730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1244)));
    ctx.gpr[31] = (0x0881C73Cu);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x0881C73Cu) goto L_0881C73C;
    return;
L_0881C73C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881C74Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x0881C74Cu) goto L_0881C74C;
    return;
L_0881C74C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x0881C758u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x0881C758u) goto L_0881C758;
    return;
L_0881C758:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881C764u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881C764u) goto L_0881C764;
    return;
L_0881C764:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1464)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C774u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 490u, 0x08A05FD4u>(ctx, &aot_mem) && ctx.pc == 0x0881C774u) goto L_0881C774;
    return;
L_0881C774:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C780u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 307u, 0x0880ABC8u>(ctx, &aot_mem) && ctx.pc == 0x0881C780u) goto L_0881C780;
    return;
L_0881C780:
    ctx.gpr[31] = (0x0881C788u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0881C788u) goto L_0881C788;
    return;
L_0881C788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1240)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C7E8;
      }
      goto L_0881C794;
    }
L_0881C794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1240)));
    ctx.gpr[31] = (0x0881C7A0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x0881C7A0u) goto L_0881C7A0;
    return;
L_0881C7A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881C7B0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x0881C7B0u) goto L_0881C7B0;
    return;
L_0881C7B0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x0881C7BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x0881C7BCu) goto L_0881C7BC;
    return;
L_0881C7BC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881C7C8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881C7C8u) goto L_0881C7C8;
    return;
L_0881C7C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1472)));
    ctx.gpr[31] = (0x0881C7D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 486u, 0x08A05F84u>(ctx, &aot_mem) && ctx.pc == 0x0881C7D4u) goto L_0881C7D4;
    return;
L_0881C7D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C7E0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 307u, 0x0880ABC8u>(ctx, &aot_mem) && ctx.pc == 0x0881C7E0u) goto L_0881C7E0;
    return;
L_0881C7E0:
    ctx.gpr[31] = (0x0881C7E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0881C7E8u) goto L_0881C7E8;
    return;
L_0881C7E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1200)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D090;
      }
      goto L_0881C7F4;
    }
L_0881C7F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1200)));
    ctx.gpr[31] = (0x0881C800u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x0881C800u) goto L_0881C800;
    return;
L_0881C800:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881C810u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x0881C810u) goto L_0881C810;
    return;
L_0881C810:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x0881C81Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x0881C81Cu) goto L_0881C81C;
    return;
L_0881C81C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881C828u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881C828u) goto L_0881C828;
    return;
L_0881C828:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1472)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C838u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 486u, 0x08A05F84u>(ctx, &aot_mem) && ctx.pc == 0x0881C838u) goto L_0881C838;
    return;
L_0881C838:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C844u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 307u, 0x0880ABC8u>(ctx, &aot_mem) && ctx.pc == 0x0881C844u) goto L_0881C844;
    return;
L_0881C844:
    ctx.gpr[31] = (0x0881C84Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0881C84Cu) goto L_0881C84C;
    return;
L_0881C84C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D090;
      }
      goto L_0881C854;
    }
L_0881C854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1172)));
    ctx.gpr[31] = (0x0881C860u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x0881C860u) goto L_0881C860;
    return;
L_0881C860:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881C870u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x0881C870u) goto L_0881C870;
    return;
L_0881C870:
    ctx.gpr[31] = (0x0881C878u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x0881C878u) goto L_0881C878;
    return;
L_0881C878:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x0881C884u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881C884u) goto L_0881C884;
    return;
L_0881C884:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1484)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(584)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0881C8B0;
      }
      goto L_0881C8A0;
    }
L_0881C8A0:
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_0881C8B0;
L_0881C8B0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881C8BCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 209u, 0x08A29280u>(ctx, &aot_mem) && ctx.pc == 0x0881C8BCu) goto L_0881C8BC;
    return;
L_0881C8BC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881C904;
      }
      goto L_0881C8C8;
    }
L_0881C8C8:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1468)));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x0881C8D8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x0881C8D8u) goto L_0881C8D8;
    return;
L_0881C8D8:
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881C8FCu);
    ctx.fpr[14] = ctx.fpr[20] + ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0881C8FCu) goto L_0881C8FC;
    return;
L_0881C8FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C918;
      }
      goto L_0881C904;
    }
L_0881C904:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1468)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881C918u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0881C918u) goto L_0881C918;
    return;
L_0881C918:
    ctx.gpr[31] = (0x0881C920u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x0881C920u) goto L_0881C920;
    return;
L_0881C920:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881CBD8;
      }
      goto L_0881C928;
    }
L_0881C928:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16178)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881CB40;
      }
      goto L_0881C938;
    }
L_0881C938:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1400)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881CB40;
      }
      goto L_0881C954;
    }
L_0881C954:
    ctx.gpr[31] = (0x0881C95Cu);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1312));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x0881C95Cu) goto L_0881C95C;
    return;
L_0881C95C:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881CB40;
      }
      goto L_0881C968;
    }
L_0881C968:
    ctx.gpr[5] = (49097u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881C97Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A06210u>(ctx, &aot_mem) && ctx.pc == 0x0881C97Cu) goto L_0881C97C;
    return;
L_0881C97C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881CA3C;
      }
      goto L_0881C994;
    }
L_0881C994:
    ctx.gpr[31] = (0x0881C99Cu);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1312));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x0881C99Cu) goto L_0881C99C;
    return;
L_0881C99C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3504));
    ctx.gpr[31] = (0x0881C9A8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x0881C9A8u) goto L_0881C9A8;
    return;
L_0881C9A8:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(3536));
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(3520));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881C9C8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x0881C9C8u) goto L_0881C9C8;
    return;
L_0881C9C8:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(3552));
    ctx.gpr[31] = (0x0881C9E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x0881C9E0u) goto L_0881C9E0;
    return;
L_0881C9E0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881C9F0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x0881C9F0u) goto L_0881C9F0;
    return;
L_0881C9F0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881CA00u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x0881CA00u) goto L_0881CA00;
    return;
L_0881CA00:
    ctx.gpr[2] = (16076u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0881CA34u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x0881CA34u) goto L_0881CA34;
    return;
L_0881CA34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881CBD8;
      }
      goto L_0881CA3C;
    }
L_0881CA3C:
    ctx.gpr[31] = (0x0881CA44u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1312));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x0881CA44u) goto L_0881CA44;
    return;
L_0881CA44:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3568));
    ctx.gpr[31] = (0x0881CA50u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x0881CA50u) goto L_0881CA50;
    return;
L_0881CA50:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(3616));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(3584));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(3600));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881CA78u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x0881CA78u) goto L_0881CA78;
    return;
L_0881CA78:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(3632));
    ctx.gpr[31] = (0x0881CA90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x0881CA90u) goto L_0881CA90;
    return;
L_0881CA90:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881CAA0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x0881CAA0u) goto L_0881CAA0;
    return;
L_0881CAA0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0881CAB0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x0881CAB0u) goto L_0881CAB0;
    return;
L_0881CAB0:
    ctx.gpr[5] = (15820u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3648));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0881CAD0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x0881CAD0u) goto L_0881CAD0;
    return;
L_0881CAD0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0881CAE0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x0881CAE0u) goto L_0881CAE0;
    return;
L_0881CAE0:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0881CAF0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 279u, 0x0880A9A8u>(ctx, &aot_mem) && ctx.pc == 0x0881CAF0u) goto L_0881CAF0;
    return;
L_0881CAF0:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0881CB08u);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 279u, 0x0880A9A8u>(ctx, &aot_mem) && ctx.pc == 0x0881CB08u) goto L_0881CB08;
    return;
L_0881CB08:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x0881CB38u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x0881CB38u) goto L_0881CB38;
    return;
L_0881CB38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881CBD8;
      }
      goto L_0881CB40;
    }
L_0881CB40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1560)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881CB54u);
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881CB54u) goto L_0881CB54;
    return;
L_0881CB54:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881CB6Cu);
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0881CB6Cu) goto L_0881CB6C;
    return;
L_0881CB6C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-984));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881CB88;
      }
      goto L_0881CB78;
    }
L_0881CB78:
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_0881CB88;
L_0881CB88:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(3676));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3664), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3672), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3672));
    ctx.gpr[31] = (0x0881CBB4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3676), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x0881CBB4u) goto L_0881CBB4;
    return;
L_0881CBB4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3668), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(3668));
    ctx.gpr[31] = (0x0881CBC4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3664));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x0881CBC4u) goto L_0881CBC4;
    return;
L_0881CBC4:
    ctx.gpr[31] = (0x0881CBCCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 378u, 0x08AF9A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0881CBCCu) goto L_0881CBCC;
    return;
L_0881CBCC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881CBD8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A06210u>(ctx, &aot_mem) && ctx.pc == 0x0881CBD8u) goto L_0881CBD8;
    return;
L_0881CBD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881CC38;
      }
      goto L_0881CBF0;
    }
L_0881CBF0:
    ctx.gpr[31] = (0x0881CBF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881CBF8u) goto L_0881CBF8;
    return;
L_0881CBF8:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881CC10u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881CC10u) goto L_0881CC10;
    return;
L_0881CC10:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0881CC1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881CC1Cu) goto L_0881CC1C;
    return;
L_0881CC1C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0881CC30u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 514u, 0x08A06620u>(ctx, &aot_mem) && ctx.pc == 0x0881CC30u) goto L_0881CC30;
    return;
L_0881CC30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881CC4C;
      }
      goto L_0881CC38;
    }
L_0881CC38:
    ctx.gpr[31] = (0x0881CC40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881CC40u) goto L_0881CC40;
    return;
L_0881CC40:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881CC4Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065F0u>(ctx, &aot_mem) && ctx.pc == 0x0881CC4Cu) goto L_0881CC4C;
    return;
L_0881CC4C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881CC60u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 307u, 0x0880ABC8u>(ctx, &aot_mem) && ctx.pc == 0x0881CC60u) goto L_0881CC60;
    return;
L_0881CC60:
    ctx.gpr[31] = (0x0881CC68u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0881CC68u) goto L_0881CC68;
    return;
L_0881CC68:
    ctx.gpr[31] = (0x0881CC70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1184)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x0881CC70u) goto L_0881CC70;
    return;
L_0881CC70:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881CC80u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x0881CC80u) goto L_0881CC80;
    return;
L_0881CC80:
    ctx.gpr[31] = (0x0881CC88u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x0881CC88u) goto L_0881CC88;
    return;
L_0881CC88:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881CC94u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881CC94u) goto L_0881CC94;
    return;
L_0881CC94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1476)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(584)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0881CCC0;
      }
      goto L_0881CCB0;
    }
L_0881CCB0:
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_0881CCC0;
L_0881CCC0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881CCCCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 209u, 0x08A29280u>(ctx, &aot_mem) && ctx.pc == 0x0881CCCCu) goto L_0881CCCC;
    return;
L_0881CCCC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881CD28;
      }
      goto L_0881CCD8;
    }
L_0881CCD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1460)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0881CCFCu);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x0881CCFCu) goto L_0881CCFC;
    return;
L_0881CCFC:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0881CD20u);
    ctx.fpr[14] = ctx.fpr[20] + ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0881CD20u) goto L_0881CD20;
    return;
L_0881CD20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881CD4C;
      }
      goto L_0881CD28;
    }
L_0881CD28:
    ctx.gpr[5] = (16457u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1460)));
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x0881CD4Cu);
    ctx.fpr[14] = ctx.fpr[20] + ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0881CD4Cu) goto L_0881CD4C;
    return;
L_0881CD4C:
    ctx.gpr[31] = (0x0881CD54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x0881CD54u) goto L_0881CD54;
    return;
L_0881CD54:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881D004;
      }
      goto L_0881CD5C;
    }
L_0881CD5C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16178)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881CF70;
      }
      goto L_0881CD6C;
    }
L_0881CD6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881CF70;
      }
      goto L_0881CD88;
    }
L_0881CD88:
    ctx.gpr[31] = (0x0881CD90u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x0881CD90u) goto L_0881CD90;
    return;
L_0881CD90:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881CF70;
      }
      goto L_0881CD9C;
    }
L_0881CD9C:
    ctx.gpr[5] = (16329u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881CDB0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A06210u>(ctx, &aot_mem) && ctx.pc == 0x0881CDB0u) goto L_0881CDB0;
    return;
L_0881CDB0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881CE6C;
      }
      goto L_0881CDC4;
    }
L_0881CDC4:
    ctx.gpr[31] = (0x0881CDCCu);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x0881CDCCu) goto L_0881CDCC;
    return;
L_0881CDCC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3680));
    ctx.gpr[31] = (0x0881CDD8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x0881CDD8u) goto L_0881CDD8;
    return;
L_0881CDD8:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(3712));
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(3696));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881CDF8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x0881CDF8u) goto L_0881CDF8;
    return;
L_0881CDF8:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(3728));
    ctx.gpr[31] = (0x0881CE10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x0881CE10u) goto L_0881CE10;
    return;
L_0881CE10:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0881CE20u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x0881CE20u) goto L_0881CE20;
    return;
L_0881CE20:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881CE30u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 267u, 0x0880A8CCu>(ctx, &aot_mem) && ctx.pc == 0x0881CE30u) goto L_0881CE30;
    return;
L_0881CE30:
    ctx.gpr[2] = (16076u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0881CE64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x0881CE64u) goto L_0881CE64;
    return;
L_0881CE64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D004;
      }
      goto L_0881CE6C;
    }
L_0881CE6C:
    ctx.gpr[31] = (0x0881CE74u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x0881CE74u) goto L_0881CE74;
    return;
L_0881CE74:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3744));
    ctx.gpr[31] = (0x0881CE80u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x0881CE80u) goto L_0881CE80;
    return;
L_0881CE80:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(3792));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(3760));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(3776));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881CEA8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x0881CEA8u) goto L_0881CEA8;
    return;
L_0881CEA8:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(3808));
    ctx.gpr[31] = (0x0881CEC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x0881CEC0u) goto L_0881CEC0;
    return;
L_0881CEC0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0881CED0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x0881CED0u) goto L_0881CED0;
    return;
L_0881CED0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0881CEE0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 267u, 0x0880A8CCu>(ctx, &aot_mem) && ctx.pc == 0x0881CEE0u) goto L_0881CEE0;
    return;
L_0881CEE0:
    ctx.gpr[5] = (15820u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3824));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881CF00u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x0881CF00u) goto L_0881CF00;
    return;
L_0881CF00:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0881CF10u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x0881CF10u) goto L_0881CF10;
    return;
L_0881CF10:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881CF20u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 279u, 0x0880A9A8u>(ctx, &aot_mem) && ctx.pc == 0x0881CF20u) goto L_0881CF20;
    return;
L_0881CF20:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881CF38u);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 279u, 0x0880A9A8u>(ctx, &aot_mem) && ctx.pc == 0x0881CF38u) goto L_0881CF38;
    return;
L_0881CF38:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x0881CF68u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x0881CF68u) goto L_0881CF68;
    return;
L_0881CF68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D004;
      }
      goto L_0881CF70;
    }
L_0881CF70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1560)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881CF84u);
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881CF84u) goto L_0881CF84;
    return;
L_0881CF84:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881CF9Cu);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0881CF9Cu) goto L_0881CF9C;
    return;
L_0881CF9C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-984));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881CFB8;
      }
      goto L_0881CFA8;
    }
L_0881CFA8:
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_0881CFB8;
L_0881CFB8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(3852));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3840), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3848));
    ctx.gpr[31] = (0x0881CFE0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3852), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x0881CFE0u) goto L_0881CFE0;
    return;
L_0881CFE0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3844), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(3844));
    ctx.gpr[31] = (0x0881CFF0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3840));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x0881CFF0u) goto L_0881CFF0;
    return;
L_0881CFF0:
    ctx.gpr[31] = (0x0881CFF8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 378u, 0x08AF9A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0881CFF8u) goto L_0881CFF8;
    return;
L_0881CFF8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881D004u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A06210u>(ctx, &aot_mem) && ctx.pc == 0x0881D004u) goto L_0881D004;
    return;
L_0881D004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D064;
      }
      goto L_0881D01C;
    }
L_0881D01C:
    ctx.gpr[31] = (0x0881D024u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881D024u) goto L_0881D024;
    return;
L_0881D024:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881D03Cu);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881D03Cu) goto L_0881D03C;
    return;
L_0881D03C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0881D048u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881D048u) goto L_0881D048;
    return;
L_0881D048:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881D05Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 514u, 0x08A06620u>(ctx, &aot_mem) && ctx.pc == 0x0881D05Cu) goto L_0881D05C;
    return;
L_0881D05C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D078;
      }
      goto L_0881D064;
    }
L_0881D064:
    ctx.gpr[31] = (0x0881D06Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881D06Cu) goto L_0881D06C;
    return;
L_0881D06C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881D078u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065F0u>(ctx, &aot_mem) && ctx.pc == 0x0881D078u) goto L_0881D078;
    return;
L_0881D078:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x0881D088u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 307u, 0x0880ABC8u>(ctx, &aot_mem) && ctx.pc == 0x0881D088u) goto L_0881D088;
    return;
L_0881D088:
    ctx.gpr[31] = (0x0881D090u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0881D090u) goto L_0881D090;
    return;
L_0881D090:
    ctx.gpr[31] = (0x0881D098u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0881D098u) goto L_0881D098;
    return;
L_0881D098:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-973));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881D0B8;
      }
      goto L_0881D0A4;
    }
L_0881D0A4:
    ctx.gpr[31] = (0x0881D0ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0881D0ACu) goto L_0881D0AC;
    return;
L_0881D0AC:
    ctx.gpr[4] = (0u | 155u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_0881D348;
      }
      goto L_0881D0B8;
    }
L_0881D0B8:
    ctx.gpr[31] = (0x0881D0C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x0881D0C0u) goto L_0881D0C0;
    return;
L_0881D0C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_0881D348;
      }
      goto L_0881D0C8;
    }
L_0881D0C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_0881D348;
      }
      goto L_0881D0D4;
    }
L_0881D0D4:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x0881D0E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0881D0E0u) goto L_0881D0E0;
    return;
L_0881D0E0:
    ctx.gpr[4] = (0u | 155u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881D120;
      }
      goto L_0881D0EC;
    }
L_0881D0EC:
    ctx.gpr[4] = (16585u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1720)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_0881D120;
      }
      goto L_0881D10C;
    }
L_0881D10C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1720)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0881D120;
L_0881D120:
    ctx.gpr[31] = (0x0881D128u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 449u, 0x08AFA07Cu>(ctx, &aot_mem) && ctx.pc == 0x0881D128u) goto L_0881D128;
    return;
L_0881D128:
    ctx.gpr[31] = (0x0881D130u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 283u, 0x0880AA00u>(ctx, &aot_mem) && ctx.pc == 0x0881D130u) goto L_0881D130;
    return;
L_0881D130:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881D23C;
      }
      goto L_0881D144;
    }
L_0881D144:
    ctx.gpr[31] = (0x0881D14Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0881D14Cu) goto L_0881D14C;
    return;
L_0881D14C:
    ctx.gpr[4] = (0u | 155u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881D17C;
      }
      goto L_0881D158;
    }
L_0881D158:
    ctx.gpr[31] = (0x0881D160u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1720)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x0881D160u) goto L_0881D160;
    return;
L_0881D160:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_0881D2C8;
      }
      goto L_0881D17C;
    }
L_0881D17C:
    ctx.gpr[4] = (16294u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1720)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881D1E4;
      }
      goto L_0881D19C;
    }
L_0881D19C:
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0881D1B4u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1720)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x0881D1B4u) goto L_0881D1B4;
    return;
L_0881D1B4:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(3860));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3856));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x0881D1D8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3860), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x0881D1D8u) goto L_0881D1D8;
    return;
L_0881D1D8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0881D2C8;
      }
      goto L_0881D1E4;
    }
L_0881D1E4:
    ctx.gpr[31] = (0x0881D1ECu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1720)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 339u, 0x08AF97E8u>(ctx, &aot_mem) && ctx.pc == 0x0881D1ECu) goto L_0881D1EC;
    return;
L_0881D1EC:
    ctx.gpr[4] = (0u | 10000u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0881D210;
      }
      goto L_0881D204;
    }
L_0881D204:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0881D210;
L_0881D210:
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x0881D224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x0881D224u) goto L_0881D224;
    return;
L_0881D224:
    ctx.gpr[4] = (15877u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0881D2C8;
      }
      goto L_0881D23C;
    }
L_0881D23C:
    ctx.gpr[31] = (0x0881D244u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0881D244u) goto L_0881D244;
    return;
L_0881D244:
    ctx.gpr[4] = (0u | 155u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881D274;
      }
      goto L_0881D250;
    }
L_0881D250:
    ctx.gpr[31] = (0x0881D258u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1720)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x0881D258u) goto L_0881D258;
    return;
L_0881D258:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_0881D2C8;
      }
      goto L_0881D274;
    }
L_0881D274:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1720)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881D2C8;
      }
      goto L_0881D28C;
    }
L_0881D28C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0881D29Cu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1720)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x0881D29Cu) goto L_0881D29C;
    return;
L_0881D29C:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(3868));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3864));
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[31] = (0x0881D2C0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3868), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x0881D2C0u) goto L_0881D2C0;
    return;
L_0881D2C0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0881D2C8;
L_0881D2C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1224)));
    ctx.gpr[31] = (0x0881D2D4u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x0881D2D4u) goto L_0881D2D4;
    return;
L_0881D2D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881D2E4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x0881D2E4u) goto L_0881D2E4;
    return;
L_0881D2E4:
    ctx.gpr[31] = (0x0881D2ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x0881D2ECu) goto L_0881D2EC;
    return;
L_0881D2EC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x0881D2F8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881D2F8u) goto L_0881D2F8;
    return;
L_0881D2F8:
    ctx.gpr[31] = (0x0881D300u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0881D300u) goto L_0881D300;
    return;
L_0881D300:
    ctx.gpr[4] = (0u | 155u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881D320;
      }
      goto L_0881D30C;
    }
L_0881D30C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881D318u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 488u, 0x08A05FACu>(ctx, &aot_mem) && ctx.pc == 0x0881D318u) goto L_0881D318;
    return;
L_0881D318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D32C;
      }
      goto L_0881D320;
    }
L_0881D320:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881D32Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 486u, 0x08A05F84u>(ctx, &aot_mem) && ctx.pc == 0x0881D32Cu) goto L_0881D32C;
    return;
L_0881D32C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x0881D33Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 307u, 0x0880ABC8u>(ctx, &aot_mem) && ctx.pc == 0x0881D33Cu) goto L_0881D33C;
    return;
L_0881D33C:
    ctx.gpr[31] = (0x0881D344u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0881D344u) goto L_0881D344;
    return;
L_0881D344:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    goto L_0881D348;
L_0881D348:
    ctx.gpr[31] = (0x0881D350u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 299u, 0x0880AB60u>(ctx, &aot_mem) && ctx.pc == 0x0881D350u) goto L_0881D350;
    return;
L_0881D350:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3876)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3880)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3884)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3888)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3892)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3896)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3900)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3904)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3908)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3912)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3916)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3920)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3924)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3928)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3932)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(3936));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D394:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0881D3F0;
      }
      goto L_0881D3DC;
    }
L_0881D3DC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0881D3F0;
L_0881D3F0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(632), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(497)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0881D418u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 265u, 0x0887674Cu>(ctx, &aot_mem) && ctx.pc == 0x0881D418u) goto L_0881D418;
    return;
L_0881D418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D61C;
      }
      goto L_0881D430;
    }
L_0881D430:
    ctx.gpr[4] = (15969u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1496)));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16320u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1236)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_0881D468;
    }
    goto L_0881D468;
L_0881D468:
    ctx.gpr[4] = (16345u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[26];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_0881D48C;
    }
    goto L_0881D48C;
L_0881D48C:
    ctx.gpr[31] = (0x0881D494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x0881D494u) goto L_0881D494;
    return;
L_0881D494:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(876)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0881D4ACu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 431u, 0x08AF6180u>(ctx, &aot_mem) && ctx.pc == 0x0881D4ACu) goto L_0881D4AC;
    return;
L_0881D4AC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(884)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(880)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0881D4C4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x0881D4C4u) goto L_0881D4C4;
    return;
L_0881D4C4:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0881D4D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 532u, 0x08AF68C8u>(ctx, &aot_mem) && ctx.pc == 0x0881D4D0u) goto L_0881D4D0;
    return;
L_0881D4D0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 256 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
        goto L_0881D4E8;
    }
    goto L_0881D4E0;
L_0881D4E0:
    ctx.gpr[17] = (0u | 255u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_0881D4E8;
L_0881D4E8:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[26];
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_0881D50C;
    }
    goto L_0881D50C;
L_0881D50C:
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 151 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881D530;
      }
      goto L_0881D52C;
    }
L_0881D52C:
    ctx.gpr[18] = (0u | 150u);
    goto L_0881D530;
L_0881D530:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D568;
      }
      goto L_0881D538;
    }
L_0881D538:
    ctx.gpr[5] = (2177u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881D54Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22132));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 116u, 0x08A5CFF4u>(ctx, &aot_mem) && ctx.pc == 0x0881D54Cu) goto L_0881D54C;
    return;
L_0881D54C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D568;
      }
      goto L_0881D558;
    }
L_0881D558:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0881D568u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 122u, 0x088A0894u>(ctx, &aot_mem) && ctx.pc == 0x0881D568u) goto L_0881D568;
    return;
L_0881D568:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D5A4;
      }
      goto L_0881D578;
    }
L_0881D578:
    ctx.gpr[5] = (2177u << 16u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881D588u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22132));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 116u, 0x08A5CFF4u>(ctx, &aot_mem) && ctx.pc == 0x0881D588u) goto L_0881D588;
    return;
L_0881D588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D5A4;
      }
      goto L_0881D594;
    }
L_0881D594:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881D5A4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 122u, 0x088A0894u>(ctx, &aot_mem) && ctx.pc == 0x0881D5A4u) goto L_0881D5A4;
    return;
L_0881D5A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1244)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D5E0;
      }
      goto L_0881D5B4;
    }
L_0881D5B4:
    ctx.gpr[5] = (2177u << 16u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881D5C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22132));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 116u, 0x08A5CFF4u>(ctx, &aot_mem) && ctx.pc == 0x0881D5C4u) goto L_0881D5C4;
    return;
L_0881D5C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D5E0;
      }
      goto L_0881D5D0;
    }
L_0881D5D0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881D5E0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 122u, 0x088A0894u>(ctx, &aot_mem) && ctx.pc == 0x0881D5E0u) goto L_0881D5E0;
    return;
L_0881D5E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1200)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D61C;
      }
      goto L_0881D5F0;
    }
L_0881D5F0:
    ctx.gpr[5] = (2177u << 16u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881D600u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22132));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 116u, 0x08A5CFF4u>(ctx, &aot_mem) && ctx.pc == 0x0881D600u) goto L_0881D600;
    return;
L_0881D600:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D61C;
      }
      goto L_0881D60C;
    }
L_0881D60C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881D61Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 122u, 0x088A0894u>(ctx, &aot_mem) && ctx.pc == 0x0881D61Cu) goto L_0881D61C;
    return;
L_0881D61C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16172)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D820;
      }
      goto L_0881D62C;
    }
L_0881D62C:
    ctx.gpr[31] = (0x0881D634u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1180)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D634u) goto L_0881D634;
    return;
L_0881D634:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1180)));
      if (branch_taken) {
          goto L_0881D668;
      }
      goto L_0881D640;
    }
L_0881D640:
    ctx.gpr[31] = (0x0881D648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D648u) goto L_0881D648;
    return;
L_0881D648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1180)));
    ctx.gpr[31] = (0x0881D654u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D654u) goto L_0881D654;
    return;
L_0881D654:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881D660u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881D660u) goto L_0881D660;
    return;
L_0881D660:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1192)));
      if (branch_taken) {
          goto L_0881D67C;
      }
      goto L_0881D668;
    }
L_0881D668:
    ctx.gpr[31] = (0x0881D670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D670u) goto L_0881D670;
    return;
L_0881D670:
    ctx.gpr[31] = (0x0881D678u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x0881D678u) goto L_0881D678;
    return;
L_0881D678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1192)));
    goto L_0881D67C;
L_0881D67C:
    ctx.gpr[31] = (0x0881D684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D684u) goto L_0881D684;
    return;
L_0881D684:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1192)));
      if (branch_taken) {
          goto L_0881D6B8;
      }
      goto L_0881D690;
    }
L_0881D690:
    ctx.gpr[31] = (0x0881D698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D698u) goto L_0881D698;
    return;
L_0881D698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1192)));
    ctx.gpr[31] = (0x0881D6A4u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D6A4u) goto L_0881D6A4;
    return;
L_0881D6A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881D6B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881D6B0u) goto L_0881D6B0;
    return;
L_0881D6B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1172)));
      if (branch_taken) {
          goto L_0881D6CC;
      }
      goto L_0881D6B8;
    }
L_0881D6B8:
    ctx.gpr[31] = (0x0881D6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D6C0u) goto L_0881D6C0;
    return;
L_0881D6C0:
    ctx.gpr[31] = (0x0881D6C8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x0881D6C8u) goto L_0881D6C8;
    return;
L_0881D6C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1172)));
    goto L_0881D6CC;
L_0881D6CC:
    ctx.gpr[31] = (0x0881D6D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D6D4u) goto L_0881D6D4;
    return;
L_0881D6D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1172)));
      if (branch_taken) {
          goto L_0881D708;
      }
      goto L_0881D6E0;
    }
L_0881D6E0:
    ctx.gpr[31] = (0x0881D6E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D6E8u) goto L_0881D6E8;
    return;
L_0881D6E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1172)));
    ctx.gpr[31] = (0x0881D6F4u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D6F4u) goto L_0881D6F4;
    return;
L_0881D6F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881D700u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881D700u) goto L_0881D700;
    return;
L_0881D700:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1184)));
      if (branch_taken) {
          goto L_0881D71C;
      }
      goto L_0881D708;
    }
L_0881D708:
    ctx.gpr[31] = (0x0881D710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D710u) goto L_0881D710;
    return;
L_0881D710:
    ctx.gpr[31] = (0x0881D718u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x0881D718u) goto L_0881D718;
    return;
L_0881D718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1184)));
    goto L_0881D71C;
L_0881D71C:
    ctx.gpr[31] = (0x0881D724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D724u) goto L_0881D724;
    return;
L_0881D724:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1184)));
      if (branch_taken) {
          goto L_0881D758;
      }
      goto L_0881D730;
    }
L_0881D730:
    ctx.gpr[31] = (0x0881D738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D738u) goto L_0881D738;
    return;
L_0881D738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[31] = (0x0881D744u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D744u) goto L_0881D744;
    return;
L_0881D744:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881D750u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881D750u) goto L_0881D750;
    return;
L_0881D750:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
      if (branch_taken) {
          goto L_0881D76C;
      }
      goto L_0881D758;
    }
L_0881D758:
    ctx.gpr[31] = (0x0881D760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D760u) goto L_0881D760;
    return;
L_0881D760:
    ctx.gpr[31] = (0x0881D768u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x0881D768u) goto L_0881D768;
    return;
L_0881D768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    goto L_0881D76C;
L_0881D76C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D7C0;
      }
      goto L_0881D774;
    }
L_0881D774:
    ctx.gpr[31] = (0x0881D77Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D77Cu) goto L_0881D77C;
    return;
L_0881D77C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
      if (branch_taken) {
          goto L_0881D7B0;
      }
      goto L_0881D788;
    }
L_0881D788:
    ctx.gpr[31] = (0x0881D790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D790u) goto L_0881D790;
    return;
L_0881D790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    ctx.gpr[31] = (0x0881D79Cu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D79Cu) goto L_0881D79C;
    return;
L_0881D79C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881D7A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881D7A8u) goto L_0881D7A8;
    return;
L_0881D7A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D7C0;
      }
      goto L_0881D7B0;
    }
L_0881D7B0:
    ctx.gpr[31] = (0x0881D7B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D7B8u) goto L_0881D7B8;
    return;
L_0881D7B8:
    ctx.gpr[31] = (0x0881D7C0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x0881D7C0u) goto L_0881D7C0;
    return;
L_0881D7C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1188)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D828;
      }
      goto L_0881D7CC;
    }
L_0881D7CC:
    ctx.gpr[31] = (0x0881D7D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D7D4u) goto L_0881D7D4;
    return;
L_0881D7D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1188)));
      if (branch_taken) {
          goto L_0881D808;
      }
      goto L_0881D7E0;
    }
L_0881D7E0:
    ctx.gpr[31] = (0x0881D7E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D7E8u) goto L_0881D7E8;
    return;
L_0881D7E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1188)));
    ctx.gpr[31] = (0x0881D7F4u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D7F4u) goto L_0881D7F4;
    return;
L_0881D7F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881D800u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881D800u) goto L_0881D800;
    return;
L_0881D800:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D828;
      }
      goto L_0881D808;
    }
L_0881D808:
    ctx.gpr[31] = (0x0881D810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x0881D810u) goto L_0881D810;
    return;
L_0881D810:
    ctx.gpr[31] = (0x0881D818u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x0881D818u) goto L_0881D818;
    return;
L_0881D818:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D828;
      }
      goto L_0881D820;
    }
L_0881D820:
    ctx.gpr[31] = (0x0881D828u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 819u, 0x08A2FA78u>(ctx, &aot_mem) && ctx.pc == 0x0881D828u) goto L_0881D828;
    return;
L_0881D828:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
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
L_0881D858:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-576));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881D890u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0881D890u) goto L_0881D890;
    return;
L_0881D890:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0881D8A8;
      }
      goto L_0881D898;
    }
L_0881D898:
    ctx.gpr[31] = (0x0881D8A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 122u, 0x088ED020u>(ctx, &aot_mem) && ctx.pc == 0x0881D8A0u) goto L_0881D8A0;
    return;
L_0881D8A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881D8C0;
      }
      goto L_0881D8A8;
    }
L_0881D8A8:
    ctx.gpr[31] = (0x0881D8B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0881D8B0u) goto L_0881D8B0;
    return;
L_0881D8B0:
    if (ctx.gpr[16] != ctx.gpr[2]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
        goto L_0881D8C8;
    }
    goto L_0881D8B8;
L_0881D8B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D8E0;
      }
      goto L_0881D8C0;
    }
L_0881D8C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E474;
      }
      goto L_0881D8C8;
    }
L_0881D8C8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881D908;
      }
      goto L_0881D8E0;
    }
L_0881D8E0:
    ctx.gpr[4] = (17442u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881D910;
      }
      goto L_0881D900;
    }
L_0881D900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E474;
      }
      goto L_0881D908;
    }
L_0881D908:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E474;
      }
      goto L_0881D910;
    }
L_0881D910:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(732));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0881D968;
      }
      goto L_0881D954;
    }
L_0881D954:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0881D968;
L_0881D968:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881D980u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 215u, 0x08A292C8u>(ctx, &aot_mem) && ctx.pc == 0x0881D980u) goto L_0881D980;
    return;
L_0881D980:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0881D9B0;
      }
      goto L_0881D990;
    }
L_0881D990:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0881D9C8;
      }
      goto L_0881D998;
    }
L_0881D998:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0881D9A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(704));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x0881D9A8u) goto L_0881D9A8;
    return;
L_0881D9A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D9C8;
      }
      goto L_0881D9B0;
    }
L_0881D9B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D9C8;
      }
      goto L_0881D9B8;
    }
L_0881D9B8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0881D9C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(688));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x0881D9C8u) goto L_0881D9C8;
    return;
L_0881D9C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 155u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881DA18;
      }
      goto L_0881D9D8;
    }
L_0881D9D8:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49088u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DB64;
      }
      goto L_0881DA18;
    }
L_0881DA18:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-999));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881DA64;
      }
      goto L_0881DA28;
    }
L_0881DA28:
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (48768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DB64;
      }
      goto L_0881DA64;
    }
L_0881DA64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_0881DB0C;
      }
      goto L_0881DA7C;
    }
L_0881DA7C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (16076u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (15948u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16025u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0881DB64;
      }
      goto L_0881DB0C;
    }
L_0881DB0C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(756)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0881DB64;
L_0881DB64:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881DB78u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x0881DB78u) goto L_0881DB78;
    return;
L_0881DB78:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(129))))));
    ctx.gpr[5] = (0u | 69u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881DBB4;
      }
      goto L_0881DBB0;
    }
L_0881DBB0:
    ctx.gpr[22] = (0u | 1u);
    goto L_0881DBB4;
L_0881DBB4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DD90;
      }
      goto L_0881DBBC;
    }
L_0881DBBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17312u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881DD90;
      }
      goto L_0881DBD8;
    }
L_0881DBD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881DD90;
      }
      goto L_0881DBF4;
    }
L_0881DBF4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.gpr[31] = (0x0881DC38u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0881DC38u) goto L_0881DC38;
    return;
L_0881DC38:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[13];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0881DC8Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x0881DC8Cu) goto L_0881DC8C;
    return;
L_0881DC8C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0881DCACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0881DCACu) goto L_0881DCAC;
    return;
L_0881DCAC:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DD10;
      }
      goto L_0881DCD0;
    }
L_0881DCD0:
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881DCF8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0881DCF8u) goto L_0881DCF8;
    return;
L_0881DCF8:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881DCD0;
      }
      goto L_0881DD10;
    }
L_0881DD10:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881DD88;
      }
      goto L_0881DD2C;
    }
L_0881DD2C:
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 56u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881DD88u);
    ctx.gpr[11] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0881DD88u) goto L_0881DD88;
    return;
L_0881DD88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E474;
      }
      goto L_0881DD90;
    }
L_0881DD90:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DF54;
      }
      goto L_0881DD98;
    }
L_0881DD98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17382u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881DF54;
      }
      goto L_0881DDB4;
    }
L_0881DDB4:
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.gpr[31] = (0x0881DDF4u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0881DDF4u) goto L_0881DDF4;
    return;
L_0881DDF4:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0881DE50u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x0881DE50u) goto L_0881DE50;
    return;
L_0881DE50:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0881DE70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0881DE70u) goto L_0881DE70;
    return;
L_0881DE70:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DED4;
      }
      goto L_0881DE94;
    }
L_0881DE94:
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881DEBCu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0881DEBCu) goto L_0881DEBC;
    return;
L_0881DEBC:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881DE94;
      }
      goto L_0881DED4;
    }
L_0881DED4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881DF4C;
      }
      goto L_0881DEF0;
    }
L_0881DEF0:
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 55u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881DF4Cu);
    ctx.gpr[11] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0881DF4Cu) goto L_0881DF4C;
    return;
L_0881DF4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E474;
      }
      goto L_0881DF54;
    }
L_0881DF54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881E474;
      }
      goto L_0881DF70;
    }
L_0881DF70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17312u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881DFE0;
      }
      goto L_0881DF8C;
    }
L_0881DF8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(732)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 56u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881DFD8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0881DFD8u) goto L_0881DFD8;
    return;
L_0881DFD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E474;
      }
      goto L_0881DFE0;
    }
L_0881DFE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17347u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881E094;
      }
      goto L_0881DFFC;
    }
L_0881DFFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 33u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881E044u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0881E044u) goto L_0881E044;
    return;
L_0881E044:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 55u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881E08Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0881E08Cu) goto L_0881E08C;
    return;
L_0881E08C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E474;
      }
      goto L_0881E094;
    }
L_0881E094:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17382u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_0881E12C;
      }
      goto L_0881E0B0;
    }
L_0881E0B0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E0E4;
      }
      goto L_0881E0C8;
    }
L_0881E0C8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0881E474;
      }
      goto L_0881E0E4;
    }
L_0881E0E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 33u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881E124u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0881E124u) goto L_0881E124;
    return;
L_0881E124:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E474;
      }
      goto L_0881E12C;
    }
L_0881E12C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881E15C;
      }
      goto L_0881E148;
    }
L_0881E148:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 70 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 26 ? 1u : 0u);
      if (branch_taken) {
          goto L_0881E164;
      }
      goto L_0881E154;
    }
L_0881E154:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E16C;
      }
      goto L_0881E15C;
    }
L_0881E15C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E474;
      }
      goto L_0881E164;
    }
L_0881E164:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E180;
      }
      goto L_0881E16C;
    }
L_0881E16C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 160 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 101 ? 1u : 0u);
      if (branch_taken) {
          goto L_0881E188;
      }
      goto L_0881E178;
    }
L_0881E178:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E190;
      }
      goto L_0881E180;
    }
L_0881E180:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E474;
      }
      goto L_0881E188;
    }
L_0881E188:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E1A4;
      }
      goto L_0881E190;
    }
L_0881E190:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 176 ? 1u : 0u);
      if (branch_taken) {
          goto L_0881E1AC;
      }
      goto L_0881E19C;
    }
L_0881E19C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E1B4;
      }
      goto L_0881E1A4;
    }
L_0881E1A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E474;
      }
      goto L_0881E1AC;
    }
L_0881E1AC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E20C;
      }
      goto L_0881E1B4;
    }
L_0881E1B4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 236 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E204;
      }
      goto L_0881E1C0;
    }
L_0881E1C0:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x0881E1D0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 288u, 0x0880AA64u>(ctx, &aot_mem) && ctx.pc == 0x0881E1D0u) goto L_0881E1D0;
    return;
L_0881E1D0:
    ctx.gpr[4] = (16332u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_0881E214;
    }
    goto L_0881E1FC;
L_0881E1FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (15692u << 16u);
      if (branch_taken) {
          goto L_0881E218;
      }
      goto L_0881E204;
    }
L_0881E204:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E474;
      }
      goto L_0881E20C;
    }
L_0881E20C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E474;
      }
      goto L_0881E214;
    }
L_0881E214:
    ctx.gpr[4] = (15692u << 16u);
    goto L_0881E218;
L_0881E218:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0881E3B8;
      }
      goto L_0881E230;
    }
L_0881E230:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881E24Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x0881E24Cu) goto L_0881E24C;
    return;
L_0881E24C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.gpr[31] = (0x0881E264u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0881E264u) goto L_0881E264;
    return;
L_0881E264:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0881E2B8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x0881E2B8u) goto L_0881E2B8;
    return;
L_0881E2B8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0881E2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0881E2D8u) goto L_0881E2D8;
    return;
L_0881E2D8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E33C;
      }
      goto L_0881E2FC;
    }
L_0881E2FC:
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881E324u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0881E324u) goto L_0881E324;
    return;
L_0881E324:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[4] << 16u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881E2FC;
      }
      goto L_0881E33C;
    }
L_0881E33C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881E3B0;
      }
      goto L_0881E354;
    }
L_0881E354:
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 55u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881E3B0u);
    ctx.gpr[11] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0881E3B0u) goto L_0881E3B0;
    return;
L_0881E3B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E474;
      }
      goto L_0881E3B8;
    }
L_0881E3B8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x0881E3C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 139u, 0x088ED114u>(ctx, &aot_mem) && ctx.pc == 0x0881E3C4u) goto L_0881E3C4;
    return;
L_0881E3C4:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881E408;
      }
      goto L_0881E3D0;
    }
L_0881E3D0:
    ctx.gpr[2] = (15820u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    ctx.gpr[4] = (0u | 33u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881E400u);
    ctx.gpr[11] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0881E400u) goto L_0881E400;
    return;
L_0881E400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E474;
      }
      goto L_0881E408;
    }
L_0881E408:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881E474;
      }
      goto L_0881E420;
    }
L_0881E420:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 33u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881E474u);
    ctx.gpr[11] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0881E474u) goto L_0881E474;
    return;
L_0881E474:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881E4A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-528));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881E4E8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 215u, 0x08A292C8u>(ctx, &aot_mem) && ctx.pc == 0x0881E4E8u) goto L_0881E4E8;
    return;
L_0881E4E8:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] << 2u);
      if (branch_taken) {
          goto L_0881E7F0;
      }
      goto L_0881E4F8;
    }
L_0881E4F8:
    ctx.gpr[19] = (ctx.gpr[16] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1168)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E7F0;
      }
      goto L_0881E508;
    }
L_0881E508:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[16] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_0881E53C;
      }
      goto L_0881E524;
    }
L_0881E524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0881E540;
      }
      goto L_0881E534;
    }
L_0881E534:
    ctx.gpr[31] = (0x0881E53Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0881E53Cu) goto L_0881E53C;
    return;
L_0881E53C:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    goto L_0881E540;
L_0881E540:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0881E560u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x0881E560u) goto L_0881E560;
    return;
L_0881E560:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(880));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0881E590u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 642u, 0x08A071A4u>(ctx, &aot_mem) && ctx.pc == 0x0881E590u) goto L_0881E590;
    return;
L_0881E590:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (0x0881E5B8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0881E5B8u) goto L_0881E5B8;
    return;
L_0881E5B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x0881E5CCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x0881E5CCu) goto L_0881E5CC;
    return;
L_0881E5CC:
    ctx.gpr[31] = (0x0881E5D4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0881E5D4u) goto L_0881E5D4;
    return;
L_0881E5D4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881E7CC;
      }
      goto L_0881E5DC;
    }
L_0881E5DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(890)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881E7CC;
      }
      goto L_0881E5EC;
    }
L_0881E5EC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881E7CC;
      }
      goto L_0881E624;
    }
L_0881E624:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x0881E638u);
    ctx.gpr[6] = (0u | 2u);
    goto L_0881E818;
L_0881E638:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1236)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881E64Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 407u, 0x0880B3FCu>(ctx, &aot_mem) && ctx.pc == 0x0881E64Cu) goto L_0881E64C;
    return;
L_0881E64C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0881E65Cu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 210u, 0x08A2928Cu>(ctx, &aot_mem) && ctx.pc == 0x0881E65Cu) goto L_0881E65C;
    return;
L_0881E65C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E7CC;
      }
      goto L_0881E664;
    }
L_0881E664:
    ctx.gpr[31] = (0x0881E66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0881E66Cu) goto L_0881E66C;
    return;
L_0881E66C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_0881E714;
      }
      goto L_0881E694;
    }
L_0881E694:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E78C;
      }
      goto L_0881E714;
    }
L_0881E714:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0881E78C;
L_0881E78C:
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0881E7CCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x0881E7CCu) goto L_0881E7CC;
    return;
L_0881E7CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E7F0;
      }
      goto L_0881E7DC;
    }
L_0881E7DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E7F0;
      }
      goto L_0881E7E8;
    }
L_0881E7E8:
    ctx.gpr[31] = (0x0881E7F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0881E7F0u) goto L_0881E7F0;
    return;
L_0881E7F0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881E818:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-416));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(3540)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 40 ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0881E8BC;
      }
      goto L_0881E864;
    }
L_0881E864:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[7]);
    ctx.gpr[21] = (ctx.gpr[7] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[21] = (ctx.gpr[18] + ctx.gpr[21]);
    ctx.gpr[5] = (2177u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[31] = (0x0881E888u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22132));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 116u, 0x08A5CFF4u>(ctx, &aot_mem) && ctx.pc == 0x0881E888u) goto L_0881E888;
    return;
L_0881E888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E8B4;
      }
      goto L_0881E894;
    }
L_0881E894:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x0881E8A0u);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x0881E8A0u) goto L_0881E8A0;
    return;
L_0881E8A0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881E8C4;
      }
      goto L_0881E8AC;
    }
L_0881E8AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E8D0;
      }
      goto L_0881E8B4;
    }
L_0881E8B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0881F234;
      }
      goto L_0881E8BC;
    }
L_0881E8BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0881F234;
      }
      goto L_0881E8C4;
    }
L_0881E8C4:
    ctx.gpr[31] = (0x0881E8CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 192u, 0x0883CF88u>(ctx, &aot_mem) && ctx.pc == 0x0881E8CCu) goto L_0881E8CC;
    return;
L_0881E8CC:
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    goto L_0881E8D0;
L_0881E8D0:
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E928;
      }
      goto L_0881E8DC;
    }
L_0881E8DC:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[30] = (0u | 19u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[30];
    ctx.gpr[19] = (2230u << 16u);
      if (branch_taken) {
          goto L_0881E930;
      }
      goto L_0881E904;
    }
L_0881E904:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 243u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881E920u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881E920u) goto L_0881E920;
    return;
L_0881E920:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881EAB0;
      }
      goto L_0881E928;
    }
L_0881E928:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0881F234;
      }
      goto L_0881E930;
    }
L_0881E930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881EA94;
      }
      goto L_0881E940;
    }
L_0881E940:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0881EA70;
      }
      goto L_0881E948;
    }
L_0881E948:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0881EA1C;
      }
      goto L_0881E950;
    }
L_0881E950:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881E984;
      }
      goto L_0881E958;
    }
L_0881E958:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0881E9D0;
      }
      goto L_0881E960;
    }
L_0881E960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 245u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881E97Cu);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881E97Cu) goto L_0881E97C;
    return;
L_0881E97C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881EAB0;
      }
      goto L_0881E984;
    }
L_0881E984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881E9A0u);
    ctx.gpr[5] = (0u | 243u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881E9A0u) goto L_0881E9A0;
    return;
L_0881E9A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881EAB0;
      }
      goto L_0881E9D0;
    }
L_0881E9D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881E9ECu);
    ctx.gpr[5] = (0u | 244u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881E9ECu) goto L_0881E9EC;
    return;
L_0881E9EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881EAB0;
      }
      goto L_0881EA1C;
    }
L_0881EA1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881EA38u);
    ctx.gpr[5] = (0u | 240u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881EA38u) goto L_0881EA38;
    return;
L_0881EA38:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881EAB0;
      }
      goto L_0881EA70;
    }
L_0881EA70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 241u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881EA8Cu);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881EA8Cu) goto L_0881EA8C;
    return;
L_0881EA8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881EAB0;
      }
      goto L_0881EA94;
    }
L_0881EA94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 242u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881EAB0u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881EAB0u) goto L_0881EAB0;
    return;
L_0881EAB0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[20]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x0881EAC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 290u, 0x0883D718u>(ctx, &aot_mem) && ctx.pc == 0x0881EAC0u) goto L_0881EAC0;
    return;
L_0881EAC0:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[31] = (0x0881EACCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x0881EACCu) goto L_0881EACC;
    return;
L_0881EACC:
    ctx.gpr[31] = (0x0881EAD4u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 224u, 0x08A5D7E4u>(ctx, &aot_mem) && ctx.pc == 0x0881EAD4u) goto L_0881EAD4;
    return;
L_0881EAD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0881EAE0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 169u, 0x08AC8DC8u>(ctx, &aot_mem) && ctx.pc == 0x0881EAE0u) goto L_0881EAE0;
    return;
L_0881EAE0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0881EB74u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 184u, 0x08AC8ED4u>(ctx, &aot_mem) && ctx.pc == 0x0881EB74u) goto L_0881EB74;
    return;
L_0881EB74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0881EB80u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x0881EB80u) goto L_0881EB80;
    return;
L_0881EB80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0881EB8Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 91u, 0x089C8788u>(ctx, &aot_mem) && ctx.pc == 0x0881EB8Cu) goto L_0881EB8C;
    return;
L_0881EB8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0881EB98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 665u, 0x08A2EF70u>(ctx, &aot_mem) && ctx.pc == 0x0881EB98u) goto L_0881EB98;
    return;
L_0881EB98:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (15363u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16248u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15820u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16298u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 43691u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(496)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(480), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(497)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(481), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(3540)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(3540), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(3540)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
      if (branch_taken) {
          goto L_0881ECD4;
      }
      goto L_0881EC6C;
    }
L_0881EC6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[7] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_0881EC94;
      }
      goto L_0881EC88;
    }
L_0881EC88:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_0881EC94;
L_0881EC94:
    ctx.gpr[4] = (17786u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
        goto L_0881ECBC;
    }
    goto L_0881ECB0;
L_0881ECB0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0881ECCC;
      }
      goto L_0881ECBC;
    }
L_0881ECBC:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    goto L_0881ECCC;
L_0881ECCC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(440), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881ED58;
      }
      goto L_0881ECD4;
    }
L_0881ECD4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(3540)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
      if (branch_taken) {
          goto L_0881ED4C;
      }
      goto L_0881ECE4;
    }
L_0881ECE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[7] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_0881ED08;
      }
      goto L_0881ECFC;
    }
L_0881ECFC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0881ED08;
L_0881ED08:
    ctx.gpr[4] = (17948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_0881ED34;
    }
    goto L_0881ED28;
L_0881ED28:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0881ED44;
      }
      goto L_0881ED34;
    }
L_0881ED34:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    goto L_0881ED44;
L_0881ED44:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(440), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881ED58;
      }
      goto L_0881ED4C;
    }
L_0881ED4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(440), ctx.gpr[4]);
    goto L_0881ED58;
L_0881ED58:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881ED94;
      }
      goto L_0881ED7C;
    }
L_0881ED7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0881EE00;
      }
      goto L_0881ED94;
    }
L_0881ED94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881EDEC;
      }
      goto L_0881EDA8;
    }
L_0881EDA8:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_0881EDC0;
      }
      goto L_0881EDB0;
    }
L_0881EDB0:
    if (ctx.gpr[21] == ctx.gpr[4]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
        goto L_0881EDC4;
    }
    goto L_0881EDB8;
L_0881EDB8:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0881EDEC;
      }
      goto L_0881EDC0;
    }
L_0881EDC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    goto L_0881EDC4;
L_0881EDC4:
    ctx.gpr[4] = (49088u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0881EE00;
      }
      goto L_0881EDEC;
    }
L_0881EDEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0881EE00;
L_0881EE00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_0881EE9C;
      }
      goto L_0881EE8C;
    }
L_0881EE8C:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881EE9C;
      }
      goto L_0881EE94;
    }
L_0881EE94:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0881EF04;
      }
      goto L_0881EE9C;
    }
L_0881EE9C:
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0881EEACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x0881EEACu) goto L_0881EEAC;
    return;
L_0881EEAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881EF04;
      }
      goto L_0881EEC0;
    }
L_0881EEC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x0881EF04u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x0881EF04u) goto L_0881EF04;
    return;
L_0881EF04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x0881EF18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x0881EF18u) goto L_0881EF18;
    return;
L_0881EF18:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_0881EF48;
      }
      goto L_0881EF24;
    }
L_0881EF24:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16253u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 28836u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0881EF48;
L_0881EF48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881F038;
      }
      goto L_0881EF5C;
    }
L_0881EF5C:
    ctx.gpr[31] = (0x0881EF64u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 746u, 0x08A2F708u>(ctx, &aot_mem) && ctx.pc == 0x0881EF64u) goto L_0881EF64;
    return;
L_0881EF64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F038;
      }
      goto L_0881EF6C;
    }
L_0881EF6C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (48896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881F038;
      }
      goto L_0881EFB4;
    }
L_0881EFB4:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (16025u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x0881F038u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x0881F038u) goto L_0881F038;
    return;
L_0881F038:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(452), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[10] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F05C;
      }
      goto L_0881F050;
    }
L_0881F050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_0881F05C;
L_0881F05C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F228;
      }
      goto L_0881F06C;
    }
L_0881F06C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0881F228;
      }
      goto L_0881F088;
    }
L_0881F088:
    ctx.gpr[4] = (0u | 51u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7800)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[7] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(5992));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(119));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(131));
      if (branch_taken) {
          goto L_0881F0F0;
      }
      goto L_0881F0BC;
    }
L_0881F0BC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(316), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    goto L_0881F0C4;
L_0881F0C4:
    ctx.gpr[11] = (ctx.gpr[11] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    if (ctx.gpr[11] != 0u) {
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(12));
        goto L_0881F0E4;
    }
    goto L_0881F0D4;
L_0881F0D4:
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881F0E8;
      }
      goto L_0881F0E4;
    }
L_0881F0E4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_0881F0E8;
L_0881F0E8:
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
        goto L_0881F0C4;
    }
    goto L_0881F0F0;
L_0881F0F0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(104)));
    if (ctx.gpr[8] == ctx.gpr[9]) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(104)));
        goto L_0881F118;
    }
    goto L_0881F0FC;
L_0881F0FC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(317), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (ctx.gpr[18] < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    if (ctx.gpr[9] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[8]);
        goto L_0881F11C;
    }
    goto L_0881F114;
L_0881F114:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(104)));
    goto L_0881F118;
L_0881F118:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[8]);
    goto L_0881F11C;
L_0881F11C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(104)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[9] = (ctx.gpr[8] ^ ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
        goto L_0881F158;
    }
    goto L_0881F150;
L_0881F150:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_0881F158;
      }
      goto L_0881F158;
    }
L_0881F158:
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3))))));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(99), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(102), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(103), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(106), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(107), ctx.gpr[8]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(110), ctx.gpr[8]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(111), ctx.gpr[21]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(114), ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_left(ctx.gpr[8] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] >> 21u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(143), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(146), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x0881F21Cu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x0881F21Cu) goto L_0881F21C;
    return;
L_0881F21C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0881F228u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13568));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 258u, 0x0880A808u>(ctx, &aot_mem) && ctx.pc == 0x0881F228u) goto L_0881F228;
    return;
L_0881F228:
    ctx.gpr[31] = (0x0881F230u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x0881F230u) goto L_0881F230;
    return;
L_0881F230:
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
    goto L_0881F234;
L_0881F234:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F268:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(598))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[7] = (ctx.gpr[7] & 1u);
    ctx.gpr[19] = (0u | 16u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0881F364;
      }
      goto L_0881F2A8;
    }
L_0881F2A8:
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 174u);
      if (branch_taken) {
          goto L_0881F308;
      }
      goto L_0881F2B4;
    }
L_0881F2B4:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 176u);
      if (branch_taken) {
          goto L_0881F2C4;
      }
      goto L_0881F2BC;
    }
L_0881F2BC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881F308;
      }
      goto L_0881F2C4;
    }
L_0881F2C4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(232));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881F2DCu);
    ctx.gpr[5] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F2DCu) goto L_0881F2DC;
    return;
L_0881F2DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_0881F308;
      }
      goto L_0881F2E4;
    }
L_0881F2E4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(224));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 16u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881F304u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F304u) goto L_0881F304;
    return;
L_0881F304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    goto L_0881F308;
L_0881F308:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[19];
    ctx.gpr[5] = (0u | 170u);
      if (branch_taken) {
          goto L_0881F364;
      }
      goto L_0881F310;
    }
L_0881F310:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 172u);
      if (branch_taken) {
          goto L_0881F320;
      }
      goto L_0881F318;
    }
L_0881F318:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881F364;
      }
      goto L_0881F320;
    }
L_0881F320:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(232));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881F338u);
    ctx.gpr[5] = (0u | 5u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F338u) goto L_0881F338;
    return;
L_0881F338:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_0881F364;
      }
      goto L_0881F340;
    }
L_0881F340:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(224));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 12u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881F360u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F360u) goto L_0881F360;
    return;
L_0881F360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    goto L_0881F364;
L_0881F364:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    ctx.gpr[6] = (0u | 15u);
      if (branch_taken) {
          goto L_0881F398;
      }
      goto L_0881F370;
    }
L_0881F370:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 12u);
      if (branch_taken) {
          goto L_0881F390;
      }
      goto L_0881F378;
    }
L_0881F378:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_0881F3A0;
      }
      goto L_0881F380;
    }
L_0881F380:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0881F3A8;
      }
      goto L_0881F388;
    }
L_0881F388:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 3u);
      if (branch_taken) {
          goto L_0881F3A8;
      }
      goto L_0881F390;
    }
L_0881F390:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 2u);
      if (branch_taken) {
          goto L_0881F3A8;
      }
      goto L_0881F398;
    }
L_0881F398:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 4u);
      if (branch_taken) {
          goto L_0881F3A8;
      }
      goto L_0881F3A0;
    }
L_0881F3A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 5u);
      if (branch_taken) {
          goto L_0881F3A8;
      }
      goto L_0881F3A8;
    }
L_0881F3A8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(256));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881F3C0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F3C0u) goto L_0881F3C0;
    return;
L_0881F3C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881F3DC;
      }
      goto L_0881F3C8;
    }
L_0881F3C8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 124 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 95 ? 1u : 0u);
      if (branch_taken) {
          goto L_0881F3E4;
      }
      goto L_0881F3D4;
    }
L_0881F3D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 169 ? 1u : 0u);
      if (branch_taken) {
          goto L_0881F420;
      }
      goto L_0881F3DC;
    }
L_0881F3DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FD40;
      }
      goto L_0881F3E4;
    }
L_0881F3E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 122 ? 1u : 0u);
      if (branch_taken) {
          goto L_0881F410;
      }
      goto L_0881F3EC;
    }
L_0881F3EC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 67 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-67));
      if (branch_taken) {
          goto L_0881FD40;
      }
      goto L_0881F3F8;
    }
L_0881F3F8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-13104)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F410:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881FD40;
      }
      goto L_0881F418;
    }
L_0881F418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FA58;
      }
      goto L_0881F420;
    }
L_0881F420:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 183 ? 1u : 0u);
      if (branch_taken) {
          goto L_0881F43C;
      }
      goto L_0881F428;
    }
L_0881F428:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 125 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881FB28;
      }
      goto L_0881F434;
    }
L_0881F434:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FD40;
      }
      goto L_0881F43C;
    }
L_0881F43C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-169));
      if (branch_taken) {
          goto L_0881FD40;
      }
      goto L_0881F444;
    }
L_0881F444:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-12992)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F45C:
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881F4BC;
      }
      goto L_0881F478;
    }
L_0881F478:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881F4BC;
      }
      goto L_0881F488;
    }
L_0881F488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881F4B4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F4B4u) goto L_0881F4B4;
    return;
L_0881F4B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F4F4;
      }
      goto L_0881F4BC;
    }
L_0881F4BC:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881F4F4;
      }
      goto L_0881F4CC;
    }
L_0881F4CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881F4F4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F4F4u) goto L_0881F4F4;
    return;
L_0881F4F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FD40;
      }
      goto L_0881F4FC;
    }
L_0881F4FC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16272u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 41943u);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881F58C;
      }
      goto L_0881F518;
    }
L_0881F518:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881F58C;
      }
      goto L_0881F528;
    }
L_0881F528:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(880));
    ctx.gpr[31] = (0x0881F550u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 623u, 0x08A07078u>(ctx, &aot_mem) && ctx.pc == 0x0881F550u) goto L_0881F550;
    return;
L_0881F550:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881F5C0;
      }
      goto L_0881F560;
    }
L_0881F560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881F584u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F584u) goto L_0881F584;
    return;
L_0881F584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F5C0;
      }
      goto L_0881F58C;
    }
L_0881F58C:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881F5C0;
      }
      goto L_0881F59C;
    }
L_0881F59C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881F5C0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F5C0u) goto L_0881F5C0;
    return;
L_0881F5C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FD40;
      }
      goto L_0881F5C8;
    }
L_0881F5C8:
    ctx.gpr[4] = (16061u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 28836u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16140u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881F62C;
      }
      goto L_0881F5E8;
    }
L_0881F5E8:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881F62C;
      }
      goto L_0881F5F8;
    }
L_0881F5F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881F624u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F624u) goto L_0881F624;
    return;
L_0881F624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F664;
      }
      goto L_0881F62C;
    }
L_0881F62C:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881F664;
      }
      goto L_0881F63C;
    }
L_0881F63C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881F664u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F664u) goto L_0881F664;
    return;
L_0881F664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FD40;
      }
      goto L_0881F66C;
    }
L_0881F66C:
    ctx.gpr[4] = (16081u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 60293u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16227u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881F6FC;
      }
      goto L_0881F68C;
    }
L_0881F68C:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881F6FC;
      }
      goto L_0881F69C;
    }
L_0881F69C:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0881F6C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(880));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 623u, 0x08A07078u>(ctx, &aot_mem) && ctx.pc == 0x0881F6C0u) goto L_0881F6C0;
    return;
L_0881F6C0:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881F734;
      }
      goto L_0881F6D0;
    }
L_0881F6D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881F6F4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F6F4u) goto L_0881F6F4;
    return;
L_0881F6F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F734;
      }
      goto L_0881F6FC;
    }
L_0881F6FC:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881F734;
      }
      goto L_0881F70C;
    }
L_0881F70C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881F734u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F734u) goto L_0881F734;
    return;
L_0881F734:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FD40;
      }
      goto L_0881F73C;
    }
L_0881F73C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881F764u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F764u) goto L_0881F764;
    return;
L_0881F764:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FD40;
      }
      goto L_0881F76C;
    }
L_0881F76C:
    ctx.gpr[4] = (16168u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16204u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881F7D0;
      }
      goto L_0881F78C;
    }
L_0881F78C:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881F7D0;
      }
      goto L_0881F79C;
    }
L_0881F79C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881F7C8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F7C8u) goto L_0881F7C8;
    return;
L_0881F7C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F808;
      }
      goto L_0881F7D0;
    }
L_0881F7D0:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881F808;
      }
      goto L_0881F7E0;
    }
L_0881F7E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881F808u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F808u) goto L_0881F808;
    return;
L_0881F808:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FD40;
      }
      goto L_0881F810;
    }
L_0881F810:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16161u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881F8AC;
      }
      goto L_0881F830;
    }
L_0881F830:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881F8AC;
      }
      goto L_0881F840;
    }
L_0881F840:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(880));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0881F870u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 623u, 0x08A07078u>(ctx, &aot_mem) && ctx.pc == 0x0881F870u) goto L_0881F870;
    return;
L_0881F870:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881F8E0;
      }
      goto L_0881F880;
    }
L_0881F880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881F8A4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F8A4u) goto L_0881F8A4;
    return;
L_0881F8A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F8E0;
      }
      goto L_0881F8AC;
    }
L_0881F8AC:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881F8E0;
      }
      goto L_0881F8BC;
    }
L_0881F8BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881F8E0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F8E0u) goto L_0881F8E0;
    return;
L_0881F8E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FD40;
      }
      goto L_0881F8E8;
    }
L_0881F8E8:
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881F990;
      }
      goto L_0881F914;
    }
L_0881F914:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881F990;
      }
      goto L_0881F924;
    }
L_0881F924:
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0881F954u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(880));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 623u, 0x08A07078u>(ctx, &aot_mem) && ctx.pc == 0x0881F954u) goto L_0881F954;
    return;
L_0881F954:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881FA50;
      }
      goto L_0881F964;
    }
L_0881F964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881F988u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F988u) goto L_0881F988;
    return;
L_0881F988:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FA50;
      }
      goto L_0881F990;
    }
L_0881F990:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881FA1C;
      }
      goto L_0881F9A0;
    }
L_0881F9A0:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881FA1C;
      }
      goto L_0881F9B0;
    }
L_0881F9B0:
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = ctx.fpr[20] - ctx.fpr[14];
    ctx.fpr[20] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(880));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0881F9E0u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 623u, 0x08A07078u>(ctx, &aot_mem) && ctx.pc == 0x0881F9E0u) goto L_0881F9E0;
    return;
L_0881F9E0:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881FA50;
      }
      goto L_0881F9F0;
    }
L_0881F9F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881FA14u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881FA14u) goto L_0881FA14;
    return;
L_0881FA14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FA50;
      }
      goto L_0881FA1C;
    }
L_0881FA1C:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881FA50;
      }
      goto L_0881FA2C;
    }
L_0881FA2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881FA50u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881FA50u) goto L_0881FA50;
    return;
L_0881FA50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FD40;
      }
      goto L_0881FA58;
    }
L_0881FA58:
    ctx.gpr[4] = (15733u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16092u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 10486u);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881FAE8;
      }
      goto L_0881FA78;
    }
L_0881FA78:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881FAE8;
      }
      goto L_0881FA88;
    }
L_0881FA88:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0881FAACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(880));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 623u, 0x08A07078u>(ctx, &aot_mem) && ctx.pc == 0x0881FAACu) goto L_0881FAAC;
    return;
L_0881FAAC:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881FB20;
      }
      goto L_0881FABC;
    }
L_0881FABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881FAE0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881FAE0u) goto L_0881FAE0;
    return;
L_0881FAE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FB20;
      }
      goto L_0881FAE8;
    }
L_0881FAE8:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881FB20;
      }
      goto L_0881FAF8;
    }
L_0881FAF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881FB20u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881FB20u) goto L_0881FB20;
    return;
L_0881FB20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FD40;
      }
      goto L_0881FB28;
    }
L_0881FB28:
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881FB98;
      }
      goto L_0881FB48;
    }
L_0881FB48:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881FB98;
      }
      goto L_0881FB58;
    }
L_0881FB58:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x0881FB90u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881FB90u) goto L_0881FB90;
    return;
L_0881FB90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FBCC;
      }
      goto L_0881FB98;
    }
L_0881FB98:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881FBCC;
      }
      goto L_0881FBA8;
    }
L_0881FBA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881FBCCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881FBCCu) goto L_0881FBCC;
    return;
L_0881FBCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FD40;
      }
      goto L_0881FBD4;
    }
L_0881FBD4:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16204u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881FC40;
      }
      goto L_0881FBF0;
    }
L_0881FBF0:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881FC40;
      }
      goto L_0881FC00;
    }
L_0881FC00:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x0881FC38u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881FC38u) goto L_0881FC38;
    return;
L_0881FC38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FC74;
      }
      goto L_0881FC40;
    }
L_0881FC40:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881FC74;
      }
      goto L_0881FC50;
    }
L_0881FC50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881FC74u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881FC74u) goto L_0881FC74;
    return;
L_0881FC74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FD40;
      }
      goto L_0881FC7C;
    }
L_0881FC7C:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16153u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881FCDC;
      }
      goto L_0881FC98;
    }
L_0881FC98:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881FCDC;
      }
      goto L_0881FCA8;
    }
L_0881FCA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881FCD4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881FCD4u) goto L_0881FCD4;
    return;
L_0881FCD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FD14;
      }
      goto L_0881FCDC;
    }
L_0881FCDC:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881FD14;
      }
      goto L_0881FCEC;
    }
L_0881FCEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881FD14u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881FD14u) goto L_0881FD14;
    return;
L_0881FD14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FD40;
      }
      goto L_0881FD1C;
    }
L_0881FD1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0881FD40u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881FD40u) goto L_0881FD40;
    return;
L_0881FD40:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_0881FD60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(599))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] & 64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0881FDBC;
      }
      goto L_0881FD8C;
    }
L_0881FD8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881FDBC;
      }
      goto L_0881FDA0;
    }
L_0881FDA0:
    ctx.gpr[31] = (0x0881FDA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0881FDA8u) goto L_0881FDA8;
    return;
L_0881FDA8:
    ctx.gpr[19] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0881FDD4;
      }
      goto L_0881FDB4;
    }
L_0881FDB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FDC4;
      }
      goto L_0881FDBC;
    }
L_0881FDBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 12u, 0x088200FCu>(ctx, &aot_mem); return;
      }
      goto L_0881FDC4;
    }
L_0881FDC4:
    ctx.gpr[31] = (0x0881FDCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0881FDCCu) goto L_0881FDCC;
    return;
L_0881FDCC:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    ctx.gpr[4] = (15877u << 16u);
      if (branch_taken) {
          goto L_0881FE48;
      }
      goto L_0881FDD4;
    }
L_0881FDD4:
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[6] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(340), ctx.gpr[5]);
    ctx.gpr[31] = (0x0881FE20u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0881FE20u) goto L_0881FE20;
    return;
L_0881FE20:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (0u | 6000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7796)));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4000));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7796), ctx.gpr[5]);
    ctx.gpr[4] = (15877u << 16u);
    goto L_0881FE48;
L_0881FE48:
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 80u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (32u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881FE90u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(640), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 251u, 0x08A294B4u>(ctx, &aot_mem) && ctx.pc == 0x0881FE90u) goto L_0881FE90;
    return;
L_0881FE90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0881FF78;
      }
      goto L_0881FE9C;
    }
L_0881FE9C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0881FEB0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 412u, 0x0880B468u>(ctx, &aot_mem) && ctx.pc == 0x0881FEB0u) goto L_0881FEB0;
    return;
L_0881FEB0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0881FEC4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 412u, 0x0880B468u>(ctx, &aot_mem) && ctx.pc == 0x0881FEC4u) goto L_0881FEC4;
    return;
L_0881FEC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0881FED8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880B64Cu>(ctx, &aot_mem) && ctx.pc == 0x0881FED8u) goto L_0881FED8;
    return;
L_0881FED8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0881FEECu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880B64Cu>(ctx, &aot_mem) && ctx.pc == 0x0881FEECu) goto L_0881FEEC;
    return;
L_0881FEEC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0881FF00u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880B64Cu>(ctx, &aot_mem) && ctx.pc == 0x0881FF00u) goto L_0881FF00;
    return;
L_0881FF00:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x0881FF14u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880B64Cu>(ctx, &aot_mem) && ctx.pc == 0x0881FF14u) goto L_0881FF14;
    return;
L_0881FF14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0881FF28u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880B64Cu>(ctx, &aot_mem) && ctx.pc == 0x0881FF28u) goto L_0881FF28;
    return;
L_0881FF28:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0881FF3Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880B64Cu>(ctx, &aot_mem) && ctx.pc == 0x0881FF3Cu) goto L_0881FF3C;
    return;
L_0881FF3C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x0881FF4Cu);
    ctx.gpr[6] = (0u | 1u);
    goto L_0881E818;
L_0881FF4C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[5] = (2177u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0881FF64u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22132));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 116u, 0x08A5CFF4u>(ctx, &aot_mem) && ctx.pc == 0x0881FF64u) goto L_0881FF64;
    return;
L_0881FF64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FF78;
      }
      goto L_0881FF70;
    }
L_0881FF70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_0881FF78;
L_0881FF78:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(646), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (16179u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0881FFB8u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 297u, 0x088EE070u>(ctx, &aot_mem) && ctx.pc == 0x0881FFB8u) goto L_0881FFB8;
    return;
L_0881FFB8:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881FFD0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 588u, 0x0889EDC4u>(ctx, &aot_mem) && ctx.pc == 0x0881FFD0u) goto L_0881FFD0;
    return;
L_0881FFD0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.pc = 0x08820000u; return;
}

void recomp_unit_0006(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0006_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_6(Runtime &runtime) {
    runtime.register_generated_unit(6u, 0x0881C000u, 16384u, &recomp_unit_0006, &recomp_unit_0006_entry);
    runtime.register_function(0x0881C000u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C018u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C028u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C030u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C03Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C054u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C05Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C074u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C080u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C094u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C09Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C0A4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C0B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C0C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C0C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C0D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C0E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C0F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C0F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C104u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C11Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C124u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C138u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C168u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C170u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C190u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C198u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C1A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C1B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C1CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C1D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C1E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C1F4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C1FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C210u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C228u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C234u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C244u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C26Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C27Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C284u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C290u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C2A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C2B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C2C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C2D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C2E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C2F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C2F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C304u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C314u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C31Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C32Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C338u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C348u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C350u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C35Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C370u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C37Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C390u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C3B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C3BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C3D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C3DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C3E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C3F4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C3FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C408u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C414u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C424u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C430u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C43Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C448u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C454u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C45Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C464u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C478u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C494u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4F4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C500u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C508u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C524u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C534u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C540u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C54Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C568u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C57Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C588u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C590u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C598u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C5A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C5B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C5C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C5D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C5DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C600u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C608u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C614u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C620u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C628u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C630u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C640u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C648u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C654u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C67Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C684u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C690u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C69Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C6A4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C6ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C6C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C6D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C6DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C6ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C6F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C704u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C710u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C71Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C724u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C730u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C73Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C74Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C758u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C764u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C774u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C780u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C788u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C794u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7F4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C800u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C810u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C81Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C828u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C838u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C844u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C84Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C854u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C860u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C870u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C878u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C884u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C8A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C8B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C8BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C8C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C8D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C8FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C904u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C918u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C920u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C928u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C938u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C954u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C95Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C968u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C97Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C994u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C99Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C9A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C9C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C9E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C9F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA00u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA34u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA3Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA44u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA50u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA78u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA90u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CAA0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CAB0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CAD0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CAE0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CAF0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB08u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB38u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB40u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB54u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB6Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB78u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB88u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CBB4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CBC4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CBCCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CBD8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CBF0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CBF8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC10u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC1Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC30u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC38u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC40u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC4Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC60u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC68u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC70u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC80u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC88u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CCB0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CCC0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CCCCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CCD8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CCFCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD20u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD28u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD4Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD54u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD5Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD6Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD88u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD90u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD9Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CDB0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CDC4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CDCCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CDD8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CDF8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CE10u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CE20u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CE30u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CE64u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CE6Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CE74u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CE80u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CEA8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CEC0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CED0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CEE0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF00u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF10u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF20u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF38u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF68u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF70u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF84u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF9Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CFA8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CFB8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CFE0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CFF0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CFF8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D004u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D01Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D024u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D03Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D048u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D05Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D064u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D06Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D078u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D088u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D090u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D098u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0A4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D10Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D120u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D128u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D130u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D144u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D14Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D158u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D160u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D17Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D19Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D1B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D1D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D1E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D1ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D204u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D210u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D224u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D23Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D244u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D250u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D258u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D274u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D28Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D29Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D2C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D2C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D2D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D2E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D2ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D2F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D300u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D30Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D318u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D320u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D32Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D33Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D344u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D348u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D350u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D394u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D3DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D3F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D418u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D430u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D468u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D48Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D494u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D4ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D4C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D4D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D4E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D4E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D50Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D52Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D530u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D538u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D54Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D558u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D568u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D578u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D588u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D594u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D5A4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D5B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D5C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D5D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D5E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D5F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D600u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D60Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D61Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D62Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D634u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D640u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D648u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D654u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D660u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D668u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D670u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D678u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D67Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D684u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D690u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D698u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6A4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6F4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D700u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D708u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D710u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D718u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D71Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D724u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D730u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D738u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D744u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D750u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D758u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D760u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D768u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D76Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D774u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D77Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D788u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D790u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D79Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D7A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D7B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D7B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D7C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D7CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D7D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D7E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D7E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D7F4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D800u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D808u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D810u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D818u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D820u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D828u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D858u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D890u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D898u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D8A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D8A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D8B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D8B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D8C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D8C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D8E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D900u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D908u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D910u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D954u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D968u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D980u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D990u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D998u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D9A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D9B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D9B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D9C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D9D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DA18u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DA28u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DA64u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DA7Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DB0Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DB64u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DB78u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DBB0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DBB4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DBBCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DBD8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DBF4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DC38u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DC8Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DCACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DCD0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DCF8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD10u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD2Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD88u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD90u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD98u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DDB4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DDF4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE50u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE70u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DEBCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DED4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DEF0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF4Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF54u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF70u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF8Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DFD8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DFE0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DFFCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E044u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E08Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E094u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E0B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E0C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E0E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E124u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E12Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E148u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E154u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E15Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E164u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E16Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E178u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E180u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E188u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E190u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E19Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E1A4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E1ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E1B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E1C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E1D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E1FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E204u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E20Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E214u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E218u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E230u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E24Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E264u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E2B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E2D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E2FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E324u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E33Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E354u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E3B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E3B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E3C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E3D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E400u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E408u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E420u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E474u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E4A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E4E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E4F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E508u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E524u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E534u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E53Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E540u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E560u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E590u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E5B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E5CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E5D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E5DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E5ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E624u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E638u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E64Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E65Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E664u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E66Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E694u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E714u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E78Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E7CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E7DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E7E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E7F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E818u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E864u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E888u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E894u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E8A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E8ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E8B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E8BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E8C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E8CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E8D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E8DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E904u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E920u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E928u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E930u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E940u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E948u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E950u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E958u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E960u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E97Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E984u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E9A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E9D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E9ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA1Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA38u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA70u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA8Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EAB0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EAC0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EACCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EAD4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EAE0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EB74u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EB80u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EB8Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EB98u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EC6Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EC88u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EC94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ECB0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ECBCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ECCCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ECD4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ECE4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ECFCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED08u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED28u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED34u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED44u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED4Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED58u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED7Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EDA8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EDB0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EDB8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EDC0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EDC4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EDECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE00u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE8Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE9Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EEACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EEC0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF04u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF18u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF24u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF48u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF5Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF64u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF6Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EFB4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F038u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F050u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F05Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F06Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F088u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F0BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F0C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F0D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F0E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F0E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F0F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F0FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F114u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F118u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F11Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F150u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F158u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F21Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F228u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F230u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F234u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F268u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F2A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F2B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F2BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F2C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F2DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F2E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F304u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F308u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F310u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F318u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F320u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F338u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F340u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F360u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F364u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F370u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F378u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F380u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F388u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F390u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F398u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F3A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F3A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F3C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F3C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F3D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F3DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F3E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F3ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F3F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F410u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F418u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F420u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F428u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F434u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F43Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F444u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F45Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F478u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F488u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F4B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F4BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F4CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F4F4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F4FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F518u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F528u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F550u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F560u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F584u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F58Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F59Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F5C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F5C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F5E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F5F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F624u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F62Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F63Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F664u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F66Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F68Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F69Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F6C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F6D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F6F4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F6FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F70Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F734u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F73Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F764u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F76Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F78Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F79Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F7C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F7D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F7E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F808u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F810u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F830u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F840u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F870u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F880u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F8A4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F8ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F8BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F8E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F8E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F914u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F924u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F954u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F964u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F988u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F990u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F9A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F9B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F9E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F9F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA14u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA1Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA2Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA50u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA58u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA78u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA88u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FAACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FABCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FAE0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FAE8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FAF8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB20u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB28u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB48u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB58u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB90u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB98u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FBA8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FBCCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FBD4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FBF0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FC00u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FC38u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FC40u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FC50u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FC74u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FC7Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FC98u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FCA8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FCD4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FCDCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FCECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD14u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD1Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD40u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD60u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD8Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FDA0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FDA8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FDB4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FDBCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FDC4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FDCCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FDD4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FE20u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FE48u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FE90u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FE9Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FEB0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FEC4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FED8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FEECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF00u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF14u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF28u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF3Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF4Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF64u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF70u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF78u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FFB8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FFD0u, &recomp_unit_0006, "recomp_unit_0006");
}
} // namespace psprecomp
