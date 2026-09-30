#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0045[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0,
    0, 0, 9, 0, 10, 0, 11, 0, 0, 0, 12, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 18, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0,
    25, 0, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 29, 0, 30, 0, 0, 31, 0, 0, 32, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 45, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 52, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0,
    0, 0, 57, 0, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 70,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 74, 0, 0, 75, 0, 76, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 0, 0, 84, 0, 85,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 90, 0, 0, 91, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 0, 97, 98, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0,
    0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105,
    0, 106, 0, 107, 0, 108, 0, 109, 0, 0, 0, 0, 110, 0, 0, 111, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115,
    0, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 119, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 124, 0, 0, 125, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 132, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136,
    0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0,
    0, 142, 0, 143, 144, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 162,
    0, 163, 0, 164, 0, 165, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0,
    186, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0,
    0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 199, 0, 0, 0, 0, 200, 0, 201, 202, 0,
    0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207,
    0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 220, 0, 0, 221, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 227, 0, 228, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 232,
    0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 235, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0,
    0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 242, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 246, 0, 0, 0, 247, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 251, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 255, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 256, 0, 0, 0, 0, 257, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 267, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0,
    271, 0, 272, 0, 273, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0,
    0, 295, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0,
    0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 309, 310, 0, 0, 0, 0, 311, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 317, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0,
    320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 331,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0,
    0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 344, 345, 0, 0, 0, 0, 0, 0,
    346, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0,
    0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 355, 0, 356, 0, 0, 357, 0,
    0, 358, 0, 0, 359, 0, 0, 360, 0, 361, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 366,
    0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371,
    0, 372, 0, 0, 373, 0, 374, 0, 0, 375, 0, 376, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 388, 0, 389, 0,
    0, 0, 390, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 397, 398,
    0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0,
    0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409,
    0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0,
    0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 0, 421, 0, 0, 0, 422, 0, 423, 0, 0, 0, 424, 425, 0, 0, 0, 0, 426, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 445, 0, 0, 0, 446, 0, 447, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 451, 0, 452, 0, 453, 454, 0, 0, 0, 455,
    0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 461, 0, 462, 0, 0, 463, 0, 464,
    0, 0, 0, 465, 0, 466, 0, 0, 467, 0, 468, 0, 0, 469, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 473, 0, 474,
    0, 475, 0, 476, 0, 477, 0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 482,
    0, 0, 483, 0, 0, 484, 485, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 489, 0, 490, 0, 0, 0, 491, 0, 0,
    492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 502, 0, 0, 0, 0, 503,
    0, 0, 0, 0, 0, 0, 504, 0, 0, 505, 0, 0, 506, 0, 0, 0, 507, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 509, 0, 510, 0, 0,
    0, 511, 0, 0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 514, 0, 0, 0, 515, 0, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0, 521, 0,
    522, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526, 527, 0, 528, 0, 529, 0, 530, 0,
    531, 0, 532, 0, 533, 0, 0, 534, 0, 535, 536, 0, 537, 0, 0, 538, 0, 539, 0, 0, 540, 0, 0, 541, 0, 542, 0, 0, 543, 0, 544, 0,
    0, 545, 0, 546, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 548, 0, 0, 549, 0, 550, 0, 551, 0, 0, 0, 552, 0, 553, 0, 0, 0, 554,
    0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 557, 0, 558, 0, 0, 0, 0, 559, 0, 0, 560, 0, 0, 561, 0, 0, 562, 0, 0, 0, 0, 0,
    0, 0, 563, 0, 564, 0, 0, 565, 0, 566, 567, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 569, 0, 570, 0, 0,
    0, 0, 571, 0, 0, 572, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 0, 577, 0, 578, 579, 0, 0, 0, 0, 0,
    0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 584, 0, 0, 585, 0, 0, 0, 586,
    0, 0, 587, 0, 588, 0, 0, 0, 0, 589, 0, 590, 0, 591, 0, 592, 0, 593, 0, 0, 0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 0,
    0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 598, 599, 0, 600, 0, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0, 603, 0, 0, 604, 0, 0, 605,
    0, 0, 606, 0, 607, 0, 608, 0, 609, 0, 0, 0, 610, 0, 611, 0, 612, 0, 0, 0, 613, 0, 614, 0, 615, 0, 616, 0, 617, 0, 618, 0,
    0, 0, 619, 0, 620, 0, 621, 0, 0, 0, 622, 0, 623, 0, 624, 625, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0,
    628, 0, 629, 0, 0, 630, 0, 0, 631, 0, 0, 632, 0, 633, 0, 634, 0, 635, 0, 636, 0, 637, 638, 0, 0, 0, 0, 0, 639, 0, 0, 0,
    0, 0, 640, 0, 641, 0, 642, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 647, 0, 648, 0, 0,
    0, 0, 649, 0, 0, 0, 650, 0, 0, 651, 0, 652, 0, 653, 0, 654, 0, 655, 0, 656, 0, 657, 0, 0, 0, 658, 0, 0, 659, 0, 0, 0,
    0, 660, 0, 0, 661, 0, 0, 662, 0, 663, 0, 0, 0, 0, 0, 0, 664, 0, 665, 0, 0, 666, 0, 667, 668, 0, 0, 0, 0, 669, 0, 0,
    670, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 672, 0, 0, 0, 673, 0, 674, 0, 675, 0, 676, 0, 677, 0, 0, 678, 0, 679, 0, 680,
    0, 681, 0, 682, 0, 683, 0, 684, 0, 685, 0, 686, 0, 687, 0, 688, 0, 689, 0, 690, 0, 691, 0, 692, 0, 693, 0, 694, 0, 0, 0, 0,
    0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 0, 0, 697, 0, 698, 0, 0, 0, 0, 0, 699, 0, 0, 700, 0, 0, 0, 701, 0, 702, 0, 0,
    0, 0, 703, 0, 0, 0, 0, 0, 704, 0, 705, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 708, 0, 709,
    0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 712, 0, 0, 0, 0, 0, 0, 713, 0, 714, 0, 715, 0, 716, 0, 0,
    0, 0, 717, 0, 718, 0, 0, 0, 0, 719, 0, 720, 0, 721, 0, 722, 0, 0, 0, 723, 0, 0, 0, 724, 0, 725, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 726, 0, 727, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 730, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 732, 733,
    0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 739, 0, 740, 0, 0, 741, 0, 0, 742, 0, 0, 0, 743, 744,
    0, 745, 0, 746, 0, 0, 747, 0, 0, 0, 0, 748, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 751, 0, 0, 752, 0, 0, 753,
    0, 0, 0, 0, 754, 0, 0, 755, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 758, 0, 0, 759, 0, 0, 760, 0, 0, 761, 0,
    0, 0, 0, 0, 0, 0, 762, 0, 0, 763, 0, 764, 0, 765, 0, 0, 766, 0, 0, 767, 0, 0, 768, 0, 0, 769, 0, 0, 770, 0, 0, 771,
    0, 772, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 774, 0, 0, 0, 775, 0, 776, 777, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 779, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0,
    0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 787, 0, 0, 788,
    0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 790, 0, 0, 0, 791, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 793, 0, 0, 0, 0, 794, 795,
    0, 0, 0, 796, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 799, 0, 0, 0, 800, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 801, 0, 0, 0, 802, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 806, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0,
    809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 811, 0, 812, 0, 813, 0, 0, 0, 0, 0, 0, 0, 814, 0,
    0, 815, 0, 0, 816, 0, 817, 0, 0, 818, 0, 819, 0, 0, 0, 820, 0, 821, 0, 822, 0, 823, 0, 824, 825, 0, 826, 0, 827, 0, 0, 0,
    828, 0, 0, 0, 829, 0, 830, 0, 831, 0, 832, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0, 835, 0, 0, 836, 0, 837,
    0, 0, 838, 0, 839, 0, 0, 0, 840, 0, 841, 0, 842, 0, 843, 0, 844, 845, 0, 846, 0, 847, 0, 0, 0, 848, 0, 849, 0, 850, 0, 0,
    0, 0, 0, 0, 0, 851, 0, 0, 0, 0, 0, 0, 852, 0, 853, 0, 0, 0, 854, 0, 0, 0, 855, 0, 856, 0, 857, 0, 0, 0, 0, 858,
    0, 0, 0, 859, 0, 0, 860, 0, 0, 861, 0, 862, 0, 863, 0, 864, 0, 865, 0, 0, 866, 0, 867, 0, 868, 0, 869, 0, 870, 0, 871, 0,
    872, 0, 0, 0, 873, 0, 874, 0, 875, 0, 0, 0, 876, 0, 877, 0, 878, 879, 0, 880, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 881,
};
void recomp_unit_0045_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088B8000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0045[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088B8000;
    case 2u: goto L_088B8080;
    case 3u: goto L_088B8094;
    case 4u: goto L_088B80AC;
    case 5u: goto L_088B80C0;
    case 6u: goto L_088B80D4;
    case 7u: goto L_088B80E4;
    case 8u: goto L_088B80F8;
    case 9u: goto L_088B8108;
    case 10u: goto L_088B8110;
    case 11u: goto L_088B8118;
    case 12u: goto L_088B8128;
    case 13u: goto L_088B8130;
    case 14u: goto L_088B8138;
    case 15u: goto L_088B8140;
    case 16u: goto L_088B8158;
    case 17u: goto L_088B8160;
    case 18u: goto L_088B8178;
    case 19u: goto L_088B8180;
    case 20u: goto L_088B81AC;
    case 21u: goto L_088B81B4;
    case 22u: goto L_088B81E0;
    case 23u: goto L_088B81E8;
    case 24u: goto L_088B81F8;
    case 25u: goto L_088B8200;
    case 26u: goto L_088B8210;
    case 27u: goto L_088B8218;
    case 28u: goto L_088B8228;
    case 29u: goto L_088B8230;
    case 30u: goto L_088B8238;
    case 31u: goto L_088B8244;
    case 32u: goto L_088B8250;
    case 33u: goto L_088B8254;
    case 34u: goto L_088B8268;
    case 35u: goto L_088B8280;
    case 36u: goto L_088B8294;
    case 37u: goto L_088B829C;
    case 38u: goto L_088B82AC;
    case 39u: goto L_088B82B8;
    case 40u: goto L_088B82D0;
    case 41u: goto L_088B82E0;
    case 42u: goto L_088B830C;
    case 43u: goto L_088B8330;
    case 44u: goto L_088B833C;
    case 45u: goto L_088B8344;
    case 46u: goto L_088B8354;
    case 47u: goto L_088B835C;
    case 48u: goto L_088B8370;
    case 49u: goto L_088B838C;
    case 50u: goto L_088B8394;
    case 51u: goto L_088B839C;
    case 52u: goto L_088B83A8;
    case 53u: goto L_088B83B0;
    case 54u: goto L_088B83C4;
    case 55u: goto L_088B83E8;
    case 56u: goto L_088B83F4;
    case 57u: goto L_088B8408;
    case 58u: goto L_088B8414;
    case 59u: goto L_088B841C;
    case 60u: goto L_088B8424;
    case 61u: goto L_088B842C;
    case 62u: goto L_088B8434;
    case 63u: goto L_088B8460;
    case 64u: goto L_088B8474;
    case 65u: goto L_088B84A0;
    case 66u: goto L_088B84BC;
    case 67u: goto L_088B84D8;
    case 68u: goto L_088B84E0;
    case 69u: goto L_088B84E8;
    case 70u: goto L_088B84FC;
    case 71u: goto L_088B852C;
    case 72u: goto L_088B853C;
    case 73u: goto L_088B855C;
    case 74u: goto L_088B8584;
    case 75u: goto L_088B8590;
    case 76u: goto L_088B8598;
    case 77u: goto L_088B859C;
    case 78u: goto L_088B85A4;
    case 79u: goto L_088B85C4;
    case 80u: goto L_088B85CC;
    case 81u: goto L_088B85D4;
    case 82u: goto L_088B85DC;
    case 83u: goto L_088B85E4;
    case 84u: goto L_088B85F4;
    case 85u: goto L_088B85FC;
    case 86u: goto L_088B8628;
    case 87u: goto L_088B8630;
    case 88u: goto L_088B8638;
    case 89u: goto L_088B8658;
    case 90u: goto L_088B865C;
    case 91u: goto L_088B8668;
    case 92u: goto L_088B8680;
    case 93u: goto L_088B869C;
    case 94u: goto L_088B86A8;
    case 95u: goto L_088B86B0;
    case 96u: goto L_088B86B8;
    case 97u: goto L_088B86D0;
    case 98u: goto L_088B86D4;
    case 99u: goto L_088B86DC;
    case 100u: goto L_088B86F8;
    case 101u: goto L_088B8704;
    case 102u: goto L_088B8714;
    case 103u: goto L_088B8750;
    case 104u: goto L_088B8774;
    case 105u: goto L_088B877C;
    case 106u: goto L_088B8784;
    case 107u: goto L_088B878C;
    case 108u: goto L_088B8794;
    case 109u: goto L_088B879C;
    case 110u: goto L_088B87B0;
    case 111u: goto L_088B87BC;
    case 112u: goto L_088B87C4;
    case 113u: goto L_088B87CC;
    case 114u: goto L_088B87EC;
    case 115u: goto L_088B87FC;
    case 116u: goto L_088B880C;
    case 117u: goto L_088B8818;
    case 118u: goto L_088B8824;
    case 119u: goto L_088B882C;
    case 120u: goto L_088B8838;
    case 121u: goto L_088B8844;
    case 122u: goto L_088B884C;
    case 123u: goto L_088B8860;
    case 124u: goto L_088B8868;
    case 125u: goto L_088B8874;
    case 126u: goto L_088B8880;
    case 127u: goto L_088B88A8;
    case 128u: goto L_088B88B4;
    case 129u: goto L_088B88BC;
    case 130u: goto L_088B88C8;
    case 131u: goto L_088B88DC;
    case 132u: goto L_088B8904;
    case 133u: goto L_088B891C;
    case 134u: goto L_088B8924;
    case 135u: goto L_088B8938;
    case 136u: goto L_088B897C;
    case 137u: goto L_088B898C;
    case 138u: goto L_088B89A4;
    case 139u: goto L_088B89AC;
    case 140u: goto L_088B89D0;
    case 141u: goto L_088B89F8;
    case 142u: goto L_088B8A04;
    case 143u: goto L_088B8A0C;
    case 144u: goto L_088B8A10;
    case 145u: goto L_088B8A14;
    case 146u: goto L_088B8A34;
    case 147u: goto L_088B8A3C;
    case 148u: goto L_088B8A70;
    case 149u: goto L_088B8A98;
    case 150u: goto L_088B8AA8;
    case 151u: goto L_088B8AB8;
    case 152u: goto L_088B8B0C;
    case 153u: goto L_088B8B14;
    case 154u: goto L_088B8BF4;
    case 155u: goto L_088B8C88;
    case 156u: goto L_088B8CA0;
    case 157u: goto L_088B8CB0;
    case 158u: goto L_088B8CC4;
    case 159u: goto L_088B8CD4;
    case 160u: goto L_088B8CE4;
    case 161u: goto L_088B8CEC;
    case 162u: goto L_088B8CFC;
    case 163u: goto L_088B8D04;
    case 164u: goto L_088B8D0C;
    case 165u: goto L_088B8D14;
    case 166u: goto L_088B8D1C;
    case 167u: goto L_088B8D30;
    case 168u: goto L_088B8D48;
    case 169u: goto L_088B8D4C;
    case 170u: goto L_088B8D88;
    case 171u: goto L_088B8DA8;
    case 172u: goto L_088B8DB0;
    case 173u: goto L_088B8DCC;
    case 174u: goto L_088B8DDC;
    case 175u: goto L_088B8DEC;
    case 176u: goto L_088B8E0C;
    case 177u: goto L_088B8EA0;
    case 178u: goto L_088B8F50;
    case 179u: goto L_088B8F70;
    case 180u: goto L_088B8F8C;
    case 181u: goto L_088B8F9C;
    case 182u: goto L_088B8FB0;
    case 183u: goto L_088B8FBC;
    case 184u: goto L_088B8FE8;
    case 185u: goto L_088B8FF4;
    case 186u: goto L_088B9000;
    case 187u: goto L_088B9008;
    case 188u: goto L_088B9020;
    case 189u: goto L_088B9030;
    case 190u: goto L_088B9038;
    case 191u: goto L_088B904C;
    case 192u: goto L_088B9078;
    case 193u: goto L_088B908C;
    case 194u: goto L_088B9098;
    case 195u: goto L_088B90A4;
    case 196u: goto L_088B90AC;
    case 197u: goto L_088B90C4;
    case 198u: goto L_088B90D0;
    case 199u: goto L_088B90D8;
    case 200u: goto L_088B90EC;
    case 201u: goto L_088B90F4;
    case 202u: goto L_088B90F8;
    case 203u: goto L_088B9118;
    case 204u: goto L_088B9134;
    case 205u: goto L_088B9144;
    case 206u: goto L_088B9158;
    case 207u: goto L_088B917C;
    case 208u: goto L_088B9194;
    case 209u: goto L_088B91AC;
    case 210u: goto L_088B91D0;
    case 211u: goto L_088B91E4;
    case 212u: goto L_088B9200;
    case 213u: goto L_088B9214;
    case 214u: goto L_088B9220;
    case 215u: goto L_088B9230;
    case 216u: goto L_088B9238;
    case 217u: goto L_088B9240;
    case 218u: goto L_088B92B4;
    case 219u: goto L_088B92BC;
    case 220u: goto L_088B92C4;
    case 221u: goto L_088B92D0;
    case 222u: goto L_088B92D8;
    case 223u: goto L_088B92EC;
    case 224u: goto L_088B9304;
    case 225u: goto L_088B932C;
    case 226u: goto L_088B9334;
    case 227u: goto L_088B9340;
    case 228u: goto L_088B9348;
    case 229u: goto L_088B9350;
    case 230u: goto L_088B9364;
    case 231u: goto L_088B9374;
    case 232u: goto L_088B937C;
    case 233u: goto L_088B9390;
    case 234u: goto L_088B93A0;
    case 235u: goto L_088B93A8;
    case 236u: goto L_088B93AC;
    case 237u: goto L_088B93CC;
    case 238u: goto L_088B93EC;
    case 239u: goto L_088B9408;
    case 240u: goto L_088B9420;
    case 241u: goto L_088B9428;
    case 242u: goto L_088B943C;
    case 243u: goto L_088B9444;
    case 244u: goto L_088B9450;
    case 245u: goto L_088B9480;
    case 246u: goto L_088B9488;
    case 247u: goto L_088B9498;
    case 248u: goto L_088B949C;
    case 249u: goto L_088B94B4;
    case 250u: goto L_088B94E4;
    case 251u: goto L_088B950C;
    case 252u: goto L_088B9514;
    case 253u: goto L_088B9520;
    case 254u: goto L_088B9558;
    case 255u: goto L_088B955C;
    case 256u: goto L_088B958C;
    case 257u: goto L_088B95A0;
    case 258u: goto L_088B95A4;
    case 259u: goto L_088B9604;
    case 260u: goto L_088B9610;
    case 261u: goto L_088B9644;
    case 262u: goto L_088B9668;
    case 263u: goto L_088B9680;
    case 264u: goto L_088B96C8;
    case 265u: goto L_088B9728;
    case 266u: goto L_088B9740;
    case 267u: goto L_088B9748;
    case 268u: goto L_088B9750;
    case 269u: goto L_088B975C;
    case 270u: goto L_088B9768;
    case 271u: goto L_088B9780;
    case 272u: goto L_088B9788;
    case 273u: goto L_088B9790;
    case 274u: goto L_088B979C;
    case 275u: goto L_088B97B0;
    case 276u: goto L_088B97BC;
    case 277u: goto L_088B97C8;
    case 278u: goto L_088B97EC;
    case 279u: goto L_088B97F8;
    case 280u: goto L_088B9820;
    case 281u: goto L_088B9828;
    case 282u: goto L_088B9840;
    case 283u: goto L_088B9854;
    case 284u: goto L_088B9860;
    case 285u: goto L_088B9868;
    case 286u: goto L_088B9880;
    case 287u: goto L_088B98A4;
    case 288u: goto L_088B98C0;
    case 289u: goto L_088B990C;
    case 290u: goto L_088B992C;
    case 291u: goto L_088B9934;
    case 292u: goto L_088B993C;
    case 293u: goto L_088B995C;
    case 294u: goto L_088B9970;
    case 295u: goto L_088B9984;
    case 296u: goto L_088B9988;
    case 297u: goto L_088B99A8;
    case 298u: goto L_088B99D4;
    case 299u: goto L_088B99F4;
    case 300u: goto L_088B9A08;
    case 301u: goto L_088B9A4C;
    case 302u: goto L_088B9A58;
    case 303u: goto L_088B9A60;
    case 304u: goto L_088B9A8C;
    case 305u: goto L_088B9AB4;
    case 306u: goto L_088B9ACC;
    case 307u: goto L_088B9AE0;
    case 308u: goto L_088B9AF4;
    case 309u: goto L_088B9B20;
    case 310u: goto L_088B9B24;
    case 311u: goto L_088B9B38;
    case 312u: goto L_088B9B44;
    case 313u: goto L_088B9B4C;
    case 314u: goto L_088B9B90;
    case 315u: goto L_088B9BC4;
    case 316u: goto L_088B9BD0;
    case 317u: goto L_088B9BD4;
    case 318u: goto L_088B9BE8;
    case 319u: goto L_088B9BF0;
    case 320u: goto L_088B9C00;
    case 321u: goto L_088B9C10;
    case 322u: goto L_088B9C20;
    case 323u: goto L_088B9C40;
    case 324u: goto L_088B9C4C;
    case 325u: goto L_088B9C50;
    case 326u: goto L_088B9CA4;
    case 327u: goto L_088B9CA8;
    case 328u: goto L_088B9CCC;
    case 329u: goto L_088B9CDC;
    case 330u: goto L_088B9CF4;
    case 331u: goto L_088B9CFC;
    case 332u: goto L_088B9D40;
    case 333u: goto L_088B9D50;
    case 334u: goto L_088B9D64;
    case 335u: goto L_088B9D74;
    case 336u: goto L_088B9D90;
    case 337u: goto L_088B9DB8;
    case 338u: goto L_088B9DCC;
    case 339u: goto L_088B9DE0;
    case 340u: goto L_088B9DF0;
    case 341u: goto L_088B9E08;
    case 342u: goto L_088B9E24;
    case 343u: goto L_088B9E54;
    case 344u: goto L_088B9E60;
    case 345u: goto L_088B9E64;
    case 346u: goto L_088B9E80;
    case 347u: goto L_088B9E88;
    case 348u: goto L_088B9E98;
    case 349u: goto L_088B9ECC;
    case 350u: goto L_088B9ED8;
    case 351u: goto L_088B9EF0;
    case 352u: goto L_088B9F0C;
    case 353u: goto L_088B9F44;
    case 354u: goto L_088B9F54;
    case 355u: goto L_088B9F64;
    case 356u: goto L_088B9F6C;
    case 357u: goto L_088B9F78;
    case 358u: goto L_088B9F84;
    case 359u: goto L_088B9F90;
    case 360u: goto L_088B9F9C;
    case 361u: goto L_088B9FA4;
    case 362u: goto L_088B9FA8;
    case 363u: goto L_088B9FB8;
    case 364u: goto L_088B9FDC;
    case 365u: goto L_088B9FE4;
    case 366u: goto L_088B9FFC;
    case 367u: goto L_088BA020;
    case 368u: goto L_088BA038;
    case 369u: goto L_088BA040;
    case 370u: goto L_088BA050;
    case 371u: goto L_088BA07C;
    case 372u: goto L_088BA084;
    case 373u: goto L_088BA090;
    case 374u: goto L_088BA098;
    case 375u: goto L_088BA0A4;
    case 376u: goto L_088BA0AC;
    case 377u: goto L_088BA0B8;
    case 378u: goto L_088BA0C8;
    case 379u: goto L_088BA0DC;
    case 380u: goto L_088BA11C;
    case 381u: goto L_088BA12C;
    case 382u: goto L_088BA148;
    case 383u: goto L_088BA150;
    case 384u: goto L_088BA17C;
    case 385u: goto L_088BA1A4;
    case 386u: goto L_088BA1D0;
    case 387u: goto L_088BA1E8;
    case 388u: goto L_088BA1F0;
    case 389u: goto L_088BA1F8;
    case 390u: goto L_088BA208;
    case 391u: goto L_088BA210;
    case 392u: goto L_088BA220;
    case 393u: goto L_088BA230;
    case 394u: goto L_088BA238;
    case 395u: goto L_088BA25C;
    case 396u: goto L_088BA26C;
    case 397u: goto L_088BA278;
    case 398u: goto L_088BA27C;
    case 399u: goto L_088BA290;
    case 400u: goto L_088BA2A4;
    case 401u: goto L_088BA2BC;
    case 402u: goto L_088BA2C8;
    case 403u: goto L_088BA2D8;
    case 404u: goto L_088BA2E8;
    case 405u: goto L_088BA304;
    case 406u: goto L_088BA314;
    case 407u: goto L_088BA32C;
    case 408u: goto L_088BA33C;
    case 409u: goto L_088BA37C;
    case 410u: goto L_088BA384;
    case 411u: goto L_088BA3A0;
    case 412u: goto L_088BA3EC;
    case 413u: goto L_088BA3F4;
    case 414u: goto L_088BA40C;
    case 415u: goto L_088BA41C;
    case 416u: goto L_088BA440;
    case 417u: goto L_088BA444;
    case 418u: goto L_088BA46C;
    case 419u: goto L_088BA498;
    case 420u: goto L_088BA4A0;
    case 421u: goto L_088BA4B0;
    case 422u: goto L_088BA4C0;
    case 423u: goto L_088BA4C8;
    case 424u: goto L_088BA4D8;
    case 425u: goto L_088BA4DC;
    case 426u: goto L_088BA4F0;
    case 427u: goto L_088BA51C;
    case 428u: goto L_088BA524;
    case 429u: goto L_088BA544;
    case 430u: goto L_088BA580;
    case 431u: goto L_088BA598;
    case 432u: goto L_088BA5B0;
    case 433u: goto L_088BA5C4;
    case 434u: goto L_088BA5C8;
    case 435u: goto L_088BA5D4;
    case 436u: goto L_088BA600;
    case 437u: goto L_088BA628;
    case 438u: goto L_088BA640;
    case 439u: goto L_088BA648;
    case 440u: goto L_088BA654;
    case 441u: goto L_088BA66C;
    case 442u: goto L_088BA674;
    case 443u: goto L_088BA6B0;
    case 444u: goto L_088BA6C4;
    case 445u: goto L_088BA70C;
    case 446u: goto L_088BA71C;
    case 447u: goto L_088BA724;
    case 448u: goto L_088BA72C;
    case 449u: goto L_088BA738;
    case 450u: goto L_088BA750;
    case 451u: goto L_088BA758;
    case 452u: goto L_088BA760;
    case 453u: goto L_088BA768;
    case 454u: goto L_088BA76C;
    case 455u: goto L_088BA77C;
    case 456u: goto L_088BA7A0;
    case 457u: goto L_088BA7AC;
    case 458u: goto L_088BA7B4;
    case 459u: goto L_088BA7C0;
    case 460u: goto L_088BA7D8;
    case 461u: goto L_088BA7E0;
    case 462u: goto L_088BA7E8;
    case 463u: goto L_088BA7F4;
    case 464u: goto L_088BA7FC;
    case 465u: goto L_088BA80C;
    case 466u: goto L_088BA814;
    case 467u: goto L_088BA820;
    case 468u: goto L_088BA828;
    case 469u: goto L_088BA834;
    case 470u: goto L_088BA83C;
    case 471u: goto L_088BA864;
    case 472u: goto L_088BA86C;
    case 473u: goto L_088BA874;
    case 474u: goto L_088BA87C;
    case 475u: goto L_088BA884;
    case 476u: goto L_088BA88C;
    case 477u: goto L_088BA894;
    case 478u: goto L_088BA89C;
    case 479u: goto L_088BA8A4;
    case 480u: goto L_088BA8DC;
    case 481u: goto L_088BA8F0;
    case 482u: goto L_088BA8FC;
    case 483u: goto L_088BA908;
    case 484u: goto L_088BA914;
    case 485u: goto L_088BA918;
    case 486u: goto L_088BA920;
    case 487u: goto L_088BA944;
    case 488u: goto L_088BA950;
    case 489u: goto L_088BA95C;
    case 490u: goto L_088BA964;
    case 491u: goto L_088BA974;
    case 492u: goto L_088BA980;
    case 493u: goto L_088BA988;
    case 494u: goto L_088BA990;
    case 495u: goto L_088BA998;
    case 496u: goto L_088BA9A0;
    case 497u: goto L_088BA9A8;
    case 498u: goto L_088BA9B0;
    case 499u: goto L_088BA9B8;
    case 500u: goto L_088BA9D0;
    case 501u: goto L_088BA9E4;
    case 502u: goto L_088BA9E8;
    case 503u: goto L_088BA9FC;
    case 504u: goto L_088BAA18;
    case 505u: goto L_088BAA24;
    case 506u: goto L_088BAA30;
    case 507u: goto L_088BAA40;
    case 508u: goto L_088BAA4C;
    case 509u: goto L_088BAA6C;
    case 510u: goto L_088BAA74;
    case 511u: goto L_088BAA84;
    case 512u: goto L_088BAAA0;
    case 513u: goto L_088BAAAC;
    case 514u: goto L_088BAAB8;
    case 515u: goto L_088BAAC8;
    case 516u: goto L_088BAAD0;
    case 517u: goto L_088BAAD8;
    case 518u: goto L_088BAAE0;
    case 519u: goto L_088BAAE8;
    case 520u: goto L_088BAAF0;
    case 521u: goto L_088BAAF8;
    case 522u: goto L_088BAB00;
    case 523u: goto L_088BAB08;
    case 524u: goto L_088BAB18;
    case 525u: goto L_088BAB54;
    case 526u: goto L_088BAB5C;
    case 527u: goto L_088BAB60;
    case 528u: goto L_088BAB68;
    case 529u: goto L_088BAB70;
    case 530u: goto L_088BAB78;
    case 531u: goto L_088BAB80;
    case 532u: goto L_088BAB88;
    case 533u: goto L_088BAB90;
    case 534u: goto L_088BAB9C;
    case 535u: goto L_088BABA4;
    case 536u: goto L_088BABA8;
    case 537u: goto L_088BABB0;
    case 538u: goto L_088BABBC;
    case 539u: goto L_088BABC4;
    case 540u: goto L_088BABD0;
    case 541u: goto L_088BABDC;
    case 542u: goto L_088BABE4;
    case 543u: goto L_088BABF0;
    case 544u: goto L_088BABF8;
    case 545u: goto L_088BAC04;
    case 546u: goto L_088BAC0C;
    case 547u: goto L_088BAC2C;
    case 548u: goto L_088BAC38;
    case 549u: goto L_088BAC44;
    case 550u: goto L_088BAC4C;
    case 551u: goto L_088BAC54;
    case 552u: goto L_088BAC64;
    case 553u: goto L_088BAC6C;
    case 554u: goto L_088BAC7C;
    case 555u: goto L_088BAC90;
    case 556u: goto L_088BAC98;
    case 557u: goto L_088BACA8;
    case 558u: goto L_088BACB0;
    case 559u: goto L_088BACC4;
    case 560u: goto L_088BACD0;
    case 561u: goto L_088BACDC;
    case 562u: goto L_088BACE8;
    case 563u: goto L_088BAD08;
    case 564u: goto L_088BAD10;
    case 565u: goto L_088BAD1C;
    case 566u: goto L_088BAD24;
    case 567u: goto L_088BAD28;
    case 568u: goto L_088BAD4C;
    case 569u: goto L_088BAD6C;
    case 570u: goto L_088BAD74;
    case 571u: goto L_088BAD88;
    case 572u: goto L_088BAD94;
    case 573u: goto L_088BADA0;
    case 574u: goto L_088BADAC;
    case 575u: goto L_088BADC8;
    case 576u: goto L_088BADD0;
    case 577u: goto L_088BADDC;
    case 578u: goto L_088BADE4;
    case 579u: goto L_088BADE8;
    case 580u: goto L_088BAE0C;
    case 581u: goto L_088BAE2C;
    case 582u: goto L_088BAE34;
    case 583u: goto L_088BAE54;
    case 584u: goto L_088BAE60;
    case 585u: goto L_088BAE6C;
    case 586u: goto L_088BAE7C;
    case 587u: goto L_088BAE88;
    case 588u: goto L_088BAE90;
    case 589u: goto L_088BAEA4;
    case 590u: goto L_088BAEAC;
    case 591u: goto L_088BAEB4;
    case 592u: goto L_088BAEBC;
    case 593u: goto L_088BAEC4;
    case 594u: goto L_088BAED8;
    case 595u: goto L_088BAEE4;
    case 596u: goto L_088BAEF0;
    case 597u: goto L_088BAF04;
    case 598u: goto L_088BAF28;
    case 599u: goto L_088BAF2C;
    case 600u: goto L_088BAF34;
    case 601u: goto L_088BAF54;
    case 602u: goto L_088BAF5C;
    case 603u: goto L_088BAF64;
    case 604u: goto L_088BAF70;
    case 605u: goto L_088BAF7C;
    case 606u: goto L_088BAF88;
    case 607u: goto L_088BAF90;
    case 608u: goto L_088BAF98;
    case 609u: goto L_088BAFA0;
    case 610u: goto L_088BAFB0;
    case 611u: goto L_088BAFB8;
    case 612u: goto L_088BAFC0;
    case 613u: goto L_088BAFD0;
    case 614u: goto L_088BAFD8;
    case 615u: goto L_088BAFE0;
    case 616u: goto L_088BAFE8;
    case 617u: goto L_088BAFF0;
    case 618u: goto L_088BAFF8;
    case 619u: goto L_088BB008;
    case 620u: goto L_088BB010;
    case 621u: goto L_088BB018;
    case 622u: goto L_088BB028;
    case 623u: goto L_088BB030;
    case 624u: goto L_088BB038;
    case 625u: goto L_088BB03C;
    case 626u: goto L_088BB050;
    case 627u: goto L_088BB078;
    case 628u: goto L_088BB080;
    case 629u: goto L_088BB088;
    case 630u: goto L_088BB094;
    case 631u: goto L_088BB0A0;
    case 632u: goto L_088BB0AC;
    case 633u: goto L_088BB0B4;
    case 634u: goto L_088BB0BC;
    case 635u: goto L_088BB0C4;
    case 636u: goto L_088BB0CC;
    case 637u: goto L_088BB0D4;
    case 638u: goto L_088BB0D8;
    case 639u: goto L_088BB0F0;
    case 640u: goto L_088BB108;
    case 641u: goto L_088BB110;
    case 642u: goto L_088BB118;
    case 643u: goto L_088BB128;
    case 644u: goto L_088BB138;
    case 645u: goto L_088BB148;
    case 646u: goto L_088BB15C;
    case 647u: goto L_088BB16C;
    case 648u: goto L_088BB174;
    case 649u: goto L_088BB188;
    case 650u: goto L_088BB198;
    case 651u: goto L_088BB1A4;
    case 652u: goto L_088BB1AC;
    case 653u: goto L_088BB1B4;
    case 654u: goto L_088BB1BC;
    case 655u: goto L_088BB1C4;
    case 656u: goto L_088BB1CC;
    case 657u: goto L_088BB1D4;
    case 658u: goto L_088BB1E4;
    case 659u: goto L_088BB1F0;
    case 660u: goto L_088BB204;
    case 661u: goto L_088BB210;
    case 662u: goto L_088BB21C;
    case 663u: goto L_088BB224;
    case 664u: goto L_088BB240;
    case 665u: goto L_088BB248;
    case 666u: goto L_088BB254;
    case 667u: goto L_088BB25C;
    case 668u: goto L_088BB260;
    case 669u: goto L_088BB274;
    case 670u: goto L_088BB280;
    case 671u: goto L_088BB2A4;
    case 672u: goto L_088BB2B0;
    case 673u: goto L_088BB2C0;
    case 674u: goto L_088BB2C8;
    case 675u: goto L_088BB2D0;
    case 676u: goto L_088BB2D8;
    case 677u: goto L_088BB2E0;
    case 678u: goto L_088BB2EC;
    case 679u: goto L_088BB2F4;
    case 680u: goto L_088BB2FC;
    case 681u: goto L_088BB304;
    case 682u: goto L_088BB30C;
    case 683u: goto L_088BB314;
    case 684u: goto L_088BB31C;
    case 685u: goto L_088BB324;
    case 686u: goto L_088BB32C;
    case 687u: goto L_088BB334;
    case 688u: goto L_088BB33C;
    case 689u: goto L_088BB344;
    case 690u: goto L_088BB34C;
    case 691u: goto L_088BB354;
    case 692u: goto L_088BB35C;
    case 693u: goto L_088BB364;
    case 694u: goto L_088BB36C;
    case 695u: goto L_088BB38C;
    case 696u: goto L_088BB398;
    case 697u: goto L_088BB3B0;
    case 698u: goto L_088BB3B8;
    case 699u: goto L_088BB3D0;
    case 700u: goto L_088BB3DC;
    case 701u: goto L_088BB3EC;
    case 702u: goto L_088BB3F4;
    case 703u: goto L_088BB408;
    case 704u: goto L_088BB420;
    case 705u: goto L_088BB428;
    case 706u: goto L_088BB444;
    case 707u: goto L_088BB46C;
    case 708u: goto L_088BB474;
    case 709u: goto L_088BB47C;
    case 710u: goto L_088BB48C;
    case 711u: goto L_088BB4B8;
    case 712u: goto L_088BB4C0;
    case 713u: goto L_088BB4DC;
    case 714u: goto L_088BB4E4;
    case 715u: goto L_088BB4EC;
    case 716u: goto L_088BB4F4;
    case 717u: goto L_088BB508;
    case 718u: goto L_088BB510;
    case 719u: goto L_088BB524;
    case 720u: goto L_088BB52C;
    case 721u: goto L_088BB534;
    case 722u: goto L_088BB53C;
    case 723u: goto L_088BB54C;
    case 724u: goto L_088BB55C;
    case 725u: goto L_088BB564;
    case 726u: goto L_088BB590;
    case 727u: goto L_088BB598;
    case 728u: goto L_088BB5A0;
    case 729u: goto L_088BB5C4;
    case 730u: goto L_088BB5CC;
    case 731u: goto L_088BB5E4;
    case 732u: goto L_088BB5F8;
    case 733u: goto L_088BB5FC;
    case 734u: goto L_088BB618;
    case 735u: goto L_088BB640;
    case 736u: goto L_088BB65C;
    case 737u: goto L_088BB66C;
    case 738u: goto L_088BB6BC;
    case 739u: goto L_088BB6C8;
    case 740u: goto L_088BB6D0;
    case 741u: goto L_088BB6DC;
    case 742u: goto L_088BB6E8;
    case 743u: goto L_088BB6F8;
    case 744u: goto L_088BB6FC;
    case 745u: goto L_088BB704;
    case 746u: goto L_088BB70C;
    case 747u: goto L_088BB718;
    case 748u: goto L_088BB72C;
    case 749u: goto L_088BB738;
    case 750u: goto L_088BB758;
    case 751u: goto L_088BB764;
    case 752u: goto L_088BB770;
    case 753u: goto L_088BB77C;
    case 754u: goto L_088BB790;
    case 755u: goto L_088BB79C;
    case 756u: goto L_088BB7A8;
    case 757u: goto L_088BB7C8;
    case 758u: goto L_088BB7D4;
    case 759u: goto L_088BB7E0;
    case 760u: goto L_088BB7EC;
    case 761u: goto L_088BB7F8;
    case 762u: goto L_088BB818;
    case 763u: goto L_088BB824;
    case 764u: goto L_088BB82C;
    case 765u: goto L_088BB834;
    case 766u: goto L_088BB840;
    case 767u: goto L_088BB84C;
    case 768u: goto L_088BB858;
    case 769u: goto L_088BB864;
    case 770u: goto L_088BB870;
    case 771u: goto L_088BB87C;
    case 772u: goto L_088BB884;
    case 773u: goto L_088BB898;
    case 774u: goto L_088BB8B0;
    case 775u: goto L_088BB8C0;
    case 776u: goto L_088BB8C8;
    case 777u: goto L_088BB8CC;
    case 778u: goto L_088BB8D8;
    case 779u: goto L_088BB908;
    case 780u: goto L_088BB914;
    case 781u: goto L_088BB974;
    case 782u: goto L_088BB994;
    case 783u: goto L_088BB9AC;
    case 784u: goto L_088BB9DC;
    case 785u: goto L_088BBA38;
    case 786u: goto L_088BBA68;
    case 787u: goto L_088BBA70;
    case 788u: goto L_088BBA7C;
    case 789u: goto L_088BBA98;
    case 790u: goto L_088BBAA8;
    case 791u: goto L_088BBAB8;
    case 792u: goto L_088BBAD0;
    case 793u: goto L_088BBAE4;
    case 794u: goto L_088BBAF8;
    case 795u: goto L_088BBAFC;
    case 796u: goto L_088BBB0C;
    case 797u: goto L_088BBB14;
    case 798u: goto L_088BBB54;
    case 799u: goto L_088BBB64;
    case 800u: goto L_088BBB74;
    case 801u: goto L_088BBBBC;
    case 802u: goto L_088BBBCC;
    case 803u: goto L_088BBBDC;
    case 804u: goto L_088BBC18;
    case 805u: goto L_088BBC28;
    case 806u: goto L_088BBC44;
    case 807u: goto L_088BBC4C;
    case 808u: goto L_088BBC78;
    case 809u: goto L_088BBC80;
    case 810u: goto L_088BBCC4;
    case 811u: goto L_088BBCC8;
    case 812u: goto L_088BBCD0;
    case 813u: goto L_088BBCD8;
    case 814u: goto L_088BBCF8;
    case 815u: goto L_088BBD04;
    case 816u: goto L_088BBD10;
    case 817u: goto L_088BBD18;
    case 818u: goto L_088BBD24;
    case 819u: goto L_088BBD2C;
    case 820u: goto L_088BBD3C;
    case 821u: goto L_088BBD44;
    case 822u: goto L_088BBD4C;
    case 823u: goto L_088BBD54;
    case 824u: goto L_088BBD5C;
    case 825u: goto L_088BBD60;
    case 826u: goto L_088BBD68;
    case 827u: goto L_088BBD70;
    case 828u: goto L_088BBD80;
    case 829u: goto L_088BBD90;
    case 830u: goto L_088BBD98;
    case 831u: goto L_088BBDA0;
    case 832u: goto L_088BBDA8;
    case 833u: goto L_088BBDBC;
    case 834u: goto L_088BBDDC;
    case 835u: goto L_088BBDE8;
    case 836u: goto L_088BBDF4;
    case 837u: goto L_088BBDFC;
    case 838u: goto L_088BBE08;
    case 839u: goto L_088BBE10;
    case 840u: goto L_088BBE20;
    case 841u: goto L_088BBE28;
    case 842u: goto L_088BBE30;
    case 843u: goto L_088BBE38;
    case 844u: goto L_088BBE40;
    case 845u: goto L_088BBE44;
    case 846u: goto L_088BBE4C;
    case 847u: goto L_088BBE54;
    case 848u: goto L_088BBE64;
    case 849u: goto L_088BBE6C;
    case 850u: goto L_088BBE74;
    case 851u: goto L_088BBE94;
    case 852u: goto L_088BBEB0;
    case 853u: goto L_088BBEB8;
    case 854u: goto L_088BBEC8;
    case 855u: goto L_088BBED8;
    case 856u: goto L_088BBEE0;
    case 857u: goto L_088BBEE8;
    case 858u: goto L_088BBEFC;
    case 859u: goto L_088BBF0C;
    case 860u: goto L_088BBF18;
    case 861u: goto L_088BBF24;
    case 862u: goto L_088BBF2C;
    case 863u: goto L_088BBF34;
    case 864u: goto L_088BBF3C;
    case 865u: goto L_088BBF44;
    case 866u: goto L_088BBF50;
    case 867u: goto L_088BBF58;
    case 868u: goto L_088BBF60;
    case 869u: goto L_088BBF68;
    case 870u: goto L_088BBF70;
    case 871u: goto L_088BBF78;
    case 872u: goto L_088BBF80;
    case 873u: goto L_088BBF90;
    case 874u: goto L_088BBF98;
    case 875u: goto L_088BBFA0;
    case 876u: goto L_088BBFB0;
    case 877u: goto L_088BBFB8;
    case 878u: goto L_088BBFC0;
    case 879u: goto L_088BBFC4;
    case 880u: goto L_088BBFCC;
    case 881u: goto L_088BBFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088B8000:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(19064), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19056)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(19068), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(19072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(19076), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(19080), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19084)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(19088), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8080:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8158;
      }
      goto L_088B8094;
    }
L_088B8094:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_088B80AC;
L_088B80AC:
    ctx.gpr[15] = (ctx.gpr[9] | 0u);
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[14] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_088B8128;
      }
      goto L_088B80C0;
    }
L_088B80C0:
    ctx.gpr[24] = (ctx.gpr[8] + ctx.gpr[13]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[24] = (ctx.gpr[24] & 2u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B80E4;
      }
      goto L_088B80D4;
    }
L_088B80D4:
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-32));
    ctx.gpr[13] = (ctx.gpr[13] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 24u));
      if (branch_taken) {
          goto L_088B80E4;
      }
      goto L_088B80E4;
    }
L_088B80E4:
    ctx.gpr[24] = (ctx.gpr[8] + ctx.gpr[12]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[24] = (ctx.gpr[24] & 2u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8108;
      }
      goto L_088B80F8;
    }
L_088B80F8:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-32));
    ctx.gpr[12] = (ctx.gpr[12] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 24u));
      if (branch_taken) {
          goto L_088B8108;
      }
      goto L_088B8108;
    }
L_088B8108:
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[12];
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B8118;
      }
      goto L_088B8110;
    }
L_088B8110:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (0u | 1u);
      if (branch_taken) {
          goto L_088B8138;
      }
      goto L_088B8118;
    }
L_088B8118:
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_088B80C0;
      }
      goto L_088B8128;
    }
L_088B8128:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[12] = (0u | 0u);
      if (branch_taken) {
          goto L_088B8138;
      }
      goto L_088B8130;
    }
L_088B8130:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (0u | 1u);
      if (branch_taken) {
          goto L_088B8138;
      }
      goto L_088B8138;
    }
L_088B8138:
    if (ctx.gpr[12] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
        goto L_088B8160;
    }
    goto L_088B8140;
L_088B8140:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(32));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(32));
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088B80AC;
      }
      goto L_088B8158;
    }
L_088B8158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B8178;
      }
      goto L_088B8160;
    }
L_088B8160:
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[11]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088B8178;
L_088B8178:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8180:
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
L_088B81AC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B81B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B81E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9480));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 371u, 0x08AED4A0u>(ctx, &aot_mem) && ctx.pc == 0x088B81E0u) goto L_088B81E0;
    return;
L_088B81E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088B8230;
      }
      goto L_088B81E8;
    }
L_088B81E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x088B81F8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9488));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 371u, 0x08AED4A0u>(ctx, &aot_mem) && ctx.pc == 0x088B81F8u) goto L_088B81F8;
    return;
L_088B81F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088B8230;
      }
      goto L_088B8200;
    }
L_088B8200:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x088B8210u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9496));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 371u, 0x08AED4A0u>(ctx, &aot_mem) && ctx.pc == 0x088B8210u) goto L_088B8210;
    return;
L_088B8210:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088B8230;
      }
      goto L_088B8218;
    }
L_088B8218:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x088B8228u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9504));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 371u, 0x08AED4A0u>(ctx, &aot_mem) && ctx.pc == 0x088B8228u) goto L_088B8228;
    return;
L_088B8228:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B8244;
      }
      goto L_088B8230;
    }
L_088B8230:
    ctx.gpr[31] = (0x088B8238u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 432u, 0x08AC6FE4u>(ctx, &aot_mem) && ctx.pc == 0x088B8238u) goto L_088B8238;
    return;
L_088B8238:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B8254;
      }
      goto L_088B8244;
    }
L_088B8244:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B8250u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9508));
    goto L_088B8180;
L_088B8250:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088B8254;
L_088B8254:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8268:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B8280u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 436u, 0x08AC702Cu>(ctx, &aot_mem) && ctx.pc == 0x088B8280u) goto L_088B8280;
    return;
L_088B8280:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8294:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B829C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B82ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 452u, 0x08AC716Cu>(ctx, &aot_mem) && ctx.pc == 0x088B82ACu) goto L_088B82AC;
    return;
L_088B82AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B82B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B82D0u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 440u, 0x08AC7074u>(ctx, &aot_mem) && ctx.pc == 0x088B82D0u) goto L_088B82D0;
    return;
L_088B82D0:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B82E0:
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
L_088B830C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B8330u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC30u>(ctx, &aot_mem) && ctx.pc == 0x088B8330u) goto L_088B8330;
    return;
L_088B8330:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B833Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10596));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892F99Cu>(ctx, &aot_mem) && ctx.pc == 0x088B833Cu) goto L_088B833C;
    return;
L_088B833C:
    ctx.gpr[31] = (0x088B8344u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 619u, 0x0892FBDCu>(ctx, &aot_mem) && ctx.pc == 0x088B8344u) goto L_088B8344;
    return;
L_088B8344:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10608));
    ctx.gpr[31] = (0x088B8354u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x088B8354u) goto L_088B8354;
    return;
L_088B8354:
    ctx.gpr[31] = (0x088B835Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 626u, 0x0892FC54u>(ctx, &aot_mem) && ctx.pc == 0x088B835Cu) goto L_088B835C;
    return;
L_088B835C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8370:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B83B0;
      }
      goto L_088B838C;
    }
L_088B838C:
    ctx.gpr[31] = (0x088B8394u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088B8680;
L_088B8394:
    ctx.gpr[31] = (0x088B839Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 107u, 0x08A0D0E4u>(ctx, &aot_mem) && ctx.pc == 0x088B839Cu) goto L_088B839C;
    return;
L_088B839C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
      if (branch_taken) {
          goto L_088B83B0;
      }
      goto L_088B83A8;
    }
L_088B83A8:
    ctx.gpr[31] = (0x088B83B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088B83B0u) goto L_088B83B0;
    return;
L_088B83B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B83C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B841C;
      }
      goto L_088B83E8;
    }
L_088B83E8:
    ctx.gpr[4] = (17036u << 16u);
    ctx.gpr[31] = (0x088B83F4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 162u, 0x0883CBECu>(ctx, &aot_mem) && ctx.pc == 0x088B83F4u) goto L_088B83F4;
    return;
L_088B83F4:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088B8408u);
    ctx.gpr[4] = (0u | 2064u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 240u, 0x0899D998u>(ctx, &aot_mem) && ctx.pc == 0x088B8408u) goto L_088B8408;
    return;
L_088B8408:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088B8424;
      }
      goto L_088B8414;
    }
L_088B8414:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088B8434;
      }
      goto L_088B841C;
    }
L_088B841C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B84A0;
      }
      goto L_088B8424;
    }
L_088B8424:
    ctx.gpr[31] = (0x088B842Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 329u, 0x089A5680u>(ctx, &aot_mem) && ctx.pc == 0x088B842Cu) goto L_088B842C;
    return;
L_088B842C:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_088B8434;
L_088B8434:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088B8460u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x088B8460u) goto L_088B8460;
    return;
L_088B8460:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088B8474u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x088B8474u) goto L_088B8474;
    return;
L_088B8474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27776)));
    ctx.gpr[31] = (0x088B84A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B853C;
L_088B84A0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
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
L_088B84BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B84E0;
      }
      goto L_088B84D8;
    }
L_088B84D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B852C;
      }
      goto L_088B84E0;
    }
L_088B84E0:
    ctx.gpr[31] = (0x088B84E8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.pc = 0x08B0BBC4u;
    return;
L_088B84E8:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088B84FCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BAECu;
    return;
L_088B84FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088B852C;
L_088B852C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B853C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B8590;
      }
      goto L_088B855C;
    }
L_088B855C:
    ctx.gpr[18] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(27776), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (0u | 119u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(19148));
      if (branch_taken) {
          goto L_088B8598;
      }
      goto L_088B8584;
    }
L_088B8584:
    ctx.gpr[4] = (0u | 118u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B859C;
      }
      goto L_088B8590;
    }
L_088B8590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8668;
      }
      goto L_088B8598;
    }
L_088B8598:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_088B859C;
L_088B859C:
    ctx.gpr[31] = (0x088B85A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 561u, 0x089C661Cu>(ctx, &aot_mem) && ctx.pc == 0x088B85A4u) goto L_088B85A4;
    return;
L_088B85A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27776)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088B85C4u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 90u, 0x08A28BB8u>(ctx, &aot_mem) && ctx.pc == 0x088B85C4u) goto L_088B85C4;
    return;
L_088B85C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088B8638;
      }
      goto L_088B85CC;
    }
L_088B85CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 109 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B8638;
      }
      goto L_088B85D4;
    }
L_088B85D4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 120 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B85E4;
      }
      goto L_088B85DC;
    }
L_088B85DC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B8638;
      }
      goto L_088B85E4;
    }
L_088B85E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_088B85FC;
      }
      goto L_088B85F4;
    }
L_088B85F4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B865C;
      }
      goto L_088B85FC;
    }
L_088B85FC:
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B865C;
      }
      goto L_088B8628;
    }
L_088B8628:
    ctx.gpr[31] = (0x088B8630u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x088B8630u) goto L_088B8630;
    return;
L_088B8630:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088B865C;
      }
      goto L_088B8638;
    }
L_088B8638:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27776)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088B8658u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 660u, 0x089C6C8Cu>(ctx, &aot_mem) && ctx.pc == 0x088B8658u) goto L_088B8658;
    return;
L_088B8658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_088B865C;
L_088B865C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27776)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_088B8668;
L_088B8668:
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
L_088B8680:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B86B0;
      }
      goto L_088B869C;
    }
L_088B869C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B86B8;
      }
      goto L_088B86A8;
    }
L_088B86A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B86D4;
      }
      goto L_088B86B0;
    }
L_088B86B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8704;
      }
      goto L_088B86B8;
    }
L_088B86B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088B86D0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B86D0u) goto L_088B86D0;
    return;
L_088B86D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088B86D4;
L_088B86D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B86F8;
      }
      goto L_088B86DC;
    }
L_088B86DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088B86F8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B86F8u) goto L_088B86F8;
    return;
L_088B86F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x088B8704u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 561u, 0x089C661Cu>(ctx, &aot_mem) && ctx.pc == 0x088B8704u) goto L_088B8704;
    return;
L_088B8704:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8714:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B8774;
      }
      goto L_088B8750;
    }
L_088B8750:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (2225u << 16u);
    ctx.gpr[4] = (17332u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10628));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B877C;
      }
      goto L_088B8774;
    }
L_088B8774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8A3C;
      }
      goto L_088B877C;
    }
L_088B877C:
    ctx.gpr[31] = (0x088B8784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 907u, 0x089C7B40u>(ctx, &aot_mem) && ctx.pc == 0x088B8784u) goto L_088B8784;
    return;
L_088B8784:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B879C;
      }
      goto L_088B878C;
    }
L_088B878C:
    ctx.gpr[31] = (0x088B8794u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088B82E0;
L_088B8794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B877C;
      }
      goto L_088B879C;
    }
L_088B879C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[23] = (0u | 7u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (2229u << 16u);
    goto L_088B87B0;
L_088B87B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B884C;
      }
      goto L_088B87BC;
    }
L_088B87BC:
    ctx.gpr[31] = (0x088B87C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 658u, 0x089C6C50u>(ctx, &aot_mem) && ctx.pc == 0x088B87C4u) goto L_088B87C4;
    return;
L_088B87C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B884C;
      }
      goto L_088B87CC;
    }
L_088B87CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B884C;
      }
      goto L_088B87EC;
    }
L_088B87EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[4] & 67u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B884C;
      }
      goto L_088B87FC;
    }
L_088B87FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088B8818;
      }
      goto L_088B880C;
    }
L_088B880C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088B8818;
L_088B8818:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B884C;
      }
      goto L_088B8824;
    }
L_088B8824:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088B8838;
      }
      goto L_088B882C;
    }
L_088B882C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088B8838;
L_088B8838:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088B884C;
      }
      goto L_088B8844;
    }
L_088B8844:
    ctx.gpr[31] = (0x088B884Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x088B884Cu) goto L_088B884C;
    return;
L_088B884C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(300) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B87B0;
      }
      goto L_088B8860;
    }
L_088B8860:
    ctx.gpr[31] = (0x088B8868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 546u, 0x089C651Cu>(ctx, &aot_mem) && ctx.pc == 0x088B8868u) goto L_088B8868;
    return;
L_088B8868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088B88BC;
      }
      goto L_088B8874;
    }
L_088B8874:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
      if (branch_taken) {
          goto L_088B88A8;
      }
      goto L_088B8880;
    }
L_088B8880:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B88BC;
      }
      goto L_088B88A8;
    }
L_088B88A8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088B88B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B853C;
L_088B88B4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_088B88BC;
L_088B88BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B8A14;
      }
      goto L_088B88C8;
    }
L_088B88C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_088B8A10;
      }
      goto L_088B88DC;
    }
L_088B88DC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B8A14;
      }
      goto L_088B8904;
    }
L_088B8904:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B897C;
      }
      goto L_088B891C;
    }
L_088B891C:
    ctx.gpr[31] = (0x088B8924u);
    // nop
    ctx.pc = 0x08B0BBC4u;
    return;
L_088B8924:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088B8938u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BAECu;
    return;
L_088B8938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B8A14;
      }
      goto L_088B897C;
    }
L_088B897C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088B89AC;
      }
      goto L_088B898C;
    }
L_088B898C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088B89A4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B89A4u) goto L_088B89A4;
    return;
L_088B89A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088B89AC;
L_088B89AC:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088B89D0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B89D0u) goto L_088B89D0;
    return;
L_088B89D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19148));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088B8A04;
      }
      goto L_088B89F8;
    }
L_088B89F8:
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(744), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088B8A0C;
      }
      goto L_088B8A04;
    }
L_088B8A04:
    ctx.gpr[5] = (0u | 48u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(744), ctx.gpr[5]);
    goto L_088B8A0C;
L_088B8A0C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_088B8A10;
L_088B8A10:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088B8A14;
L_088B8A14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7844)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[13] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088B8A3C;
      }
      goto L_088B8A34;
    }
L_088B8A34:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088B8A3C;
L_088B8A3C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_088B8A70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B8D14;
      }
      goto L_088B8A98;
    }
L_088B8A98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8D0C;
      }
      goto L_088B8AA8;
    }
L_088B8AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088B8AB8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x088B8AB8u) goto L_088B8AB8;
    return;
L_088B8AB8:
    ctx.gpr[4] = (17307u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15786u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 43691u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 220u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088B8B0Cu);
    ctx.gpr[8] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 324u, 0x08A263E4u>(ctx, &aot_mem) && ctx.pc == 0x088B8B0Cu) goto L_088B8B0C;
    return;
L_088B8B0C:
    ctx.gpr[31] = (0x088B8B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 643u, 0x08873948u>(ctx, &aot_mem) && ctx.pc == 0x088B8B14u) goto L_088B8B14;
    return;
L_088B8B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (49008u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 41943u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49300u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088B8BF4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 606u, 0x088735BCu>(ctx, &aot_mem) && ctx.pc == 0x088B8BF4u) goto L_088B8BF4;
    return;
L_088B8BF4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B8C88u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 296u, 0x08A1DDA0u>(ctx, &aot_mem) && ctx.pc == 0x088B8C88u) goto L_088B8C88;
    return;
L_088B8C88:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (49844u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B8CA0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 259u, 0x08A1D4B4u>(ctx, &aot_mem) && ctx.pc == 0x088B8CA0u) goto L_088B8CA0;
    return;
L_088B8CA0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B8CB0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 296u, 0x08A1DDA0u>(ctx, &aot_mem) && ctx.pc == 0x088B8CB0u) goto L_088B8CB0;
    return;
L_088B8CB0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B8CC4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 259u, 0x08A1D4B4u>(ctx, &aot_mem) && ctx.pc == 0x088B8CC4u) goto L_088B8CC4;
    return;
L_088B8CC4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B8CD4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 296u, 0x08A1DDA0u>(ctx, &aot_mem) && ctx.pc == 0x088B8CD4u) goto L_088B8CD4;
    return;
L_088B8CD4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B8CE4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 135u, 0x08A5D14Cu>(ctx, &aot_mem) && ctx.pc == 0x088B8CE4u) goto L_088B8CE4;
    return;
L_088B8CE4:
    ctx.gpr[31] = (0x088B8CECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 115u, 0x08A5CFD0u>(ctx, &aot_mem) && ctx.pc == 0x088B8CECu) goto L_088B8CEC;
    return;
L_088B8CEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088B8CFCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088B8CFCu) goto L_088B8CFC;
    return;
L_088B8CFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8D1C;
      }
      goto L_088B8D04;
    }
L_088B8D04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B8D4C;
      }
      goto L_088B8D0C;
    }
L_088B8D0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8DEC;
      }
      goto L_088B8D14;
    }
L_088B8D14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8DEC;
      }
      goto L_088B8D1C;
    }
L_088B8D1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x088B8D30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B8D30u) goto L_088B8D30;
    return;
L_088B8D30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x088B8D48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088B8D48u) goto L_088B8D48;
    return;
L_088B8D48:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088B8D4C;
L_088B8D4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7844)));
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-7864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088B8D88u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B8D88u) goto L_088B8D88;
    return;
L_088B8D88:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-7864), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088B8DA8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B8DA8u) goto L_088B8DA8;
    return;
L_088B8DA8:
    ctx.gpr[31] = (0x088B8DB0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 407u, 0x088CF250u>(ctx, &aot_mem) && ctx.pc == 0x088B8DB0u) goto L_088B8DB0;
    return;
L_088B8DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(120));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088B8DCCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B8DCCu) goto L_088B8DCC;
    return;
L_088B8DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8DEC;
      }
      goto L_088B8DDC;
    }
L_088B8DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088B8DEC;
L_088B8DEC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8E0C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19116)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(19112)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(19140)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[3] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(19120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(19128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(19124), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(19132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(19136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(19144), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8EA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20452)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] | 14571u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20448)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20476)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20456), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[9] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[9] + static_cast<std::uint32_t>(21296));
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(20464), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20460), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (15744u << 16u);
    ctx.gpr[11] = (2227u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[2] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(20468), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B8F50u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20480), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 232u, 0x08A7D3ECu>(ctx, &aot_mem) && ctx.pc == 0x088B8F50u) goto L_088B8F50;
    return;
L_088B8F50:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9444));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[31] = (0x088B8F70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20484));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x088B8F70u) goto L_088B8F70;
    return;
L_088B8F70:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 36u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21368));
    ctx.gpr[31] = (0x088B8F8Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10688));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 553u, 0x0886AEF4u>(ctx, &aot_mem) && ctx.pc == 0x088B8F8Cu) goto L_088B8F8C;
    return;
L_088B8F8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8F9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B8FB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10704));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 507u, 0x08872E88u>(ctx, &aot_mem) && ctx.pc == 0x088B8FB0u) goto L_088B8FB0;
    return;
L_088B8FB0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8FBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(21384));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B8FE8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20496));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088B8FE8u) goto L_088B8FE8;
    return;
L_088B8FE8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9030;
      }
      goto L_088B8FF4;
    }
L_088B8FF4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B9000u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED5D8u>(ctx, &aot_mem) && ctx.pc == 0x088B9000u) goto L_088B9000;
    return;
L_088B9000:
    ctx.gpr[31] = (0x088B9008u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088B9008u) goto L_088B9008;
    return;
L_088B9008:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 92u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B9030;
      }
      goto L_088B9020;
    }
L_088B9020:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B9030u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10728));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED5D8u>(ctx, &aot_mem) && ctx.pc == 0x088B9030u) goto L_088B9030;
    return;
L_088B9030:
    ctx.gpr[31] = (0x088B9038u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 507u, 0x08872E88u>(ctx, &aot_mem) && ctx.pc == 0x088B9038u) goto L_088B9038;
    return;
L_088B9038:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B904C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B9078u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 506u, 0x08872E7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B9078u) goto L_088B9078;
    return;
L_088B9078:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088B908Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B908Cu) goto L_088B908C;
    return;
L_088B908C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B90A4;
      }
      goto L_088B9098;
    }
L_088B9098:
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 16384u);
      if (branch_taken) {
          goto L_088B90AC;
      }
      goto L_088B90A4;
    }
L_088B90A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088B90F8;
      }
      goto L_088B90AC;
    }
L_088B90AC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 16384u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x088B90C4u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B90C4u) goto L_088B90C4;
    return;
L_088B90C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088B90F4;
      }
      goto L_088B90D0;
    }
L_088B90D0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B90AC;
      }
      goto L_088B90D8;
    }
L_088B90D8:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088B90ECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B90ECu) goto L_088B90EC;
    return;
L_088B90EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088B90F8;
      }
      goto L_088B90F4;
    }
L_088B90F4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088B90F8;
L_088B90F8:
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
L_088B9118:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B9134u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 506u, 0x08872E7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B9134u) goto L_088B9134;
    return;
L_088B9134:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088B9144u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B9144u) goto L_088B9144;
    return;
L_088B9144:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9158:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B917Cu);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 506u, 0x08872E7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B917Cu) goto L_088B917C;
    return;
L_088B917C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x088B9194u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B9194u) goto L_088B9194;
    return;
L_088B9194:
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
L_088B91AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B91D0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 506u, 0x08872E7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B91D0u) goto L_088B91D0;
    return;
L_088B91D0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088B91E4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B91E4u) goto L_088B91E4;
    return;
L_088B91E4:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
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
L_088B9200:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B9214u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 506u, 0x08872E7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B9214u) goto L_088B9214;
    return;
L_088B9214:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088B9220u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B9220u) goto L_088B9220;
    return;
L_088B9220:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9230:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9238:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9240:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17235u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18756));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (20527u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14896));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (18271u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20563));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (12101u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19777));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (17490u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21333));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (47u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21065));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B92B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED5D8u>(ctx, &aot_mem) && ctx.pc == 0x088B92B4u) goto L_088B92B4;
    return;
L_088B92B4:
    ctx.gpr[31] = (0x088B92BCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 891u, 0x08AEF284u>(ctx, &aot_mem) && ctx.pc == 0x088B92BCu) goto L_088B92BC;
    return;
L_088B92BC:
    ctx.gpr[31] = (0x088B92C4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 116u, 0x08A589A4u>(ctx, &aot_mem) && ctx.pc == 0x088B92C4u) goto L_088B92C4;
    return;
L_088B92C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B92D8;
      }
      goto L_088B92D0;
    }
L_088B92D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B92EC;
      }
      goto L_088B92D8;
    }
L_088B92D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088B92EC;
L_088B92EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9304:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 5u);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088B937C;
      }
      goto L_088B932C;
    }
L_088B932C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B9350;
      }
      goto L_088B9334;
    }
L_088B9334:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B93A8;
      }
      goto L_088B9340;
    }
L_088B9340:
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_088B93AC;
    }
    goto L_088B9348;
L_088B9348:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B93CC;
      }
      goto L_088B9350;
    }
L_088B9350:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(10752));
    ctx.gpr[31] = (0x088B9364u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088B9364u) goto L_088B9364;
    return;
L_088B9364:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B9374u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 555u, 0x0891713Cu>(ctx, &aot_mem) && ctx.pc == 0x088B9374u) goto L_088B9374;
    return;
L_088B9374:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088B93CC;
      }
      goto L_088B937C;
    }
L_088B937C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(10772));
    ctx.gpr[31] = (0x088B9390u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088B9390u) goto L_088B9390;
    return;
L_088B9390:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B93A0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 555u, 0x0891713Cu>(ctx, &aot_mem) && ctx.pc == 0x088B93A0u) goto L_088B93A0;
    return;
L_088B93A0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088B93CC;
      }
      goto L_088B93A8;
    }
L_088B93A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_088B93AC;
L_088B93AC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088B93CC;
L_088B93CC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
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
L_088B93EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088B9428;
      }
      goto L_088B9408;
    }
L_088B9408:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088B9420u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 578u, 0x08AEA74Cu>(ctx, &aot_mem) && ctx.pc == 0x088B9420u) goto L_088B9420;
    return;
L_088B9420:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9444;
      }
      goto L_088B9428;
    }
L_088B9428:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088B943Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B943Cu) goto L_088B943C;
    return;
L_088B943C:
    ctx.gpr[31] = (0x088B9444u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 228u, 0x08AECB74u>(ctx, &aot_mem) && ctx.pc == 0x088B9444u) goto L_088B9444;
    return;
L_088B9444:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9450:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[31] = (0x088B9480u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 577u, 0x08AEA6E8u>(ctx, &aot_mem) && ctx.pc == 0x088B9480u) goto L_088B9480;
    return;
L_088B9480:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
        goto L_088B949C;
    }
    goto L_088B9488;
L_088B9488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088B9498u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B9498u) goto L_088B9498;
    return;
L_088B9498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_088B949C;
L_088B949C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B94B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4097 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B9514;
      }
      goto L_088B94E4;
    }
L_088B94E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (0u | 24u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4096 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9514;
      }
      goto L_088B950C;
    }
L_088B950C:
    ctx.gpr[31] = (0x088B9514u);
    ctx.gpr[5] = (0u | 4096u);
    goto L_088B9680;
L_088B9514:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9520:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[8] = (ctx.gpr[8] >> 29u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B958C;
      }
      goto L_088B9558;
    }
L_088B9558:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    goto L_088B955C;
L_088B955C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    ctx.gpr[9] = (ctx.gpr[9] >> 29u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
        goto L_088B955C;
    }
    goto L_088B958C;
L_088B958C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B9604;
      }
      goto L_088B95A0;
    }
L_088B95A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_088B95A4;
L_088B95A4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[9] = (ctx.gpr[9] >> 29u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[9] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] >> 29u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(24));
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_088B95A4;
    }
    goto L_088B9604;
L_088B9604:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9610:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B9644u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x088B9644u) goto L_088B9644;
    return;
L_088B9644:
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B9668u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_088B9520;
L_088B9668:
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
L_088B9680:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[17] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B96C8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x088B96C8u) goto L_088B96C8;
    return;
L_088B96C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[18]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
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
L_088B9728:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B9750;
      }
      goto L_088B9740;
    }
L_088B9740:
    ctx.gpr[31] = (0x088B9748u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[6]);
    goto L_088B9610;
L_088B9748:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B975C;
      }
      goto L_088B9750;
    }
L_088B9750:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088B975Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5));
    goto L_088B9610;
L_088B975C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9768:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4097 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B9790;
      }
      goto L_088B9780;
    }
L_088B9780:
    ctx.gpr[31] = (0x088B9788u);
    ctx.gpr[5] = (0u | 5u);
    goto L_088B93EC;
L_088B9788:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B97BC;
      }
      goto L_088B9790;
    }
L_088B9790:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x088B979Cu);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    goto L_088B9680;
L_088B979C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4097 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B97BC;
      }
      goto L_088B97B0;
    }
L_088B97B0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[31] = (0x088B97BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10796));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 350u, 0x08A018ACu>(ctx, &aot_mem) && ctx.pc == 0x088B97BCu) goto L_088B97BC;
    return;
L_088B97BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B97C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B98A4;
      }
      goto L_088B97EC;
    }
L_088B97EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B98A4;
      }
      goto L_088B97F8;
    }
L_088B97F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[5] - ctx.gpr[17]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[8] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_088B9828;
      }
      goto L_088B9820;
    }
L_088B9820:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
      if (branch_taken) {
          goto L_088B9840;
      }
      goto L_088B9828;
    }
L_088B9828:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (0u | 24u);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[6]);
    goto L_088B9840;
L_088B9840:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 161 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9868;
      }
      goto L_088B9854;
    }
L_088B9854:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B9860u);
    ctx.gpr[5] = (0u | 20u);
    goto L_088B9728;
L_088B9860:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_088B9868;
L_088B9868:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[19];
    ctx.gpr[31] = (0x088B9880u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B9880u) goto L_088B9880;
    return;
L_088B9880:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_088B98A4;
L_088B98A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B98C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[7] = (ctx.gpr[7] >> 29u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 3u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B995C;
      }
      goto L_088B990C;
    }
L_088B990C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B9934;
      }
      goto L_088B992C;
    }
L_088B992C:
    ctx.gpr[31] = (0x088B9934u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B9728;
L_088B9934:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B995C;
      }
      goto L_088B993C;
    }
L_088B993C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B993C;
      }
      goto L_088B995C;
    }
L_088B995C:
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B9970u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 690u, 0x08927F14u>(ctx, &aot_mem) && ctx.pc == 0x088B9970u) goto L_088B9970;
    return;
L_088B9970:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[17] << 3u);
      if (branch_taken) {
          goto L_088B99D4;
      }
      goto L_088B9984;
    }
L_088B9984:
    ctx.gpr[20] = (0u | 0u);
    goto L_088B9988;
L_088B9988:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[19]);
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B99A8u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 75u, 0x089284A4u>(ctx, &aot_mem) && ctx.pc == 0x088B99A8u) goto L_088B99A8;
    return;
L_088B99A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B9988;
      }
      goto L_088B99D4;
    }
L_088B99D4:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088B99F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10812));
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 555u, 0x0891713Cu>(ctx, &aot_mem) && ctx.pc == 0x088B99F4u) goto L_088B99F4;
    return;
L_088B99F4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B9A08u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 64u, 0x089283E4u>(ctx, &aot_mem) && ctx.pc == 0x088B9A08u) goto L_088B9A08;
    return;
L_088B9A08:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (0u | 3u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B9A60;
      }
      goto L_088B9A4C;
    }
L_088B9A4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B9A58u);
    ctx.gpr[5] = (0u | 1u);
    goto L_088B9728;
L_088B9A58:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    goto L_088B9A60;
L_088B9A60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
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
L_088B9A8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B9AB4u);
    ctx.gpr[6] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 7u, 0x08AA8098u>(ctx, &aot_mem) && ctx.pc == 0x088B9AB4u) goto L_088B9AB4;
    return;
L_088B9AB4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[18] = (ctx.gpr[16] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_088B9AE0;
      }
      goto L_088B9ACC;
    }
L_088B9ACC:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B9AE0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10816));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 312u, 0x08A0152Cu>(ctx, &aot_mem) && ctx.pc == 0x088B9AE0u) goto L_088B9AE0;
    return;
L_088B9AE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9B24;
      }
      goto L_088B9AF4;
    }
L_088B9AF4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088B9AF4;
      }
      goto L_088B9B20;
    }
L_088B9B20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_088B9B24;
L_088B9B24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B9B4C;
      }
      goto L_088B9B38;
    }
L_088B9B38:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B9B44u);
    ctx.gpr[5] = (0u | 1u);
    goto L_088B9728;
L_088B9B44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    goto L_088B9B4C;
L_088B9B4C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
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
L_088B9B90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[18] = (ctx.gpr[5] - ctx.gpr[18]);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B9BD4;
      }
      goto L_088B9BC4;
    }
L_088B9BC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B9BD0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_088B9A8C;
L_088B9BD0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_088B9BD4;
L_088B9BD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B9BF0;
      }
      goto L_088B9BE8;
    }
L_088B9BE8:
    ctx.gpr[31] = (0x088B9BF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B9768;
L_088B9BF0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B9CDC;
      }
      goto L_088B9C00;
    }
L_088B9C00:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(70)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9C20;
      }
      goto L_088B9C10;
    }
L_088B9C10:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(69)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x088B9C20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B98C0;
L_088B9C20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(71)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_088B9C50;
    }
    goto L_088B9C40;
L_088B9C40:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(71)));
    ctx.gpr[31] = (0x088B9C4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B9728;
L_088B9C4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_088B9C50;
L_088B9C50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(71)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9CCC;
      }
      goto L_088B9CA4;
    }
L_088B9CA4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_088B9CA8;
L_088B9CA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B9CA8;
      }
      goto L_088B9CCC;
    }
L_088B9CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B9D74;
      }
      goto L_088B9CDC;
    }
L_088B9CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 161 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088B9CFC;
      }
      goto L_088B9CF4;
    }
L_088B9CF4:
    ctx.gpr[31] = (0x088B9CFCu);
    ctx.gpr[5] = (0u | 20u);
    goto L_088B9728;
L_088B9CFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9D50;
      }
      goto L_088B9D40;
    }
L_088B9D40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B9D50u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088B97C8;
L_088B9D50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088B9D64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B9D64u) goto L_088B9D64;
    return;
L_088B9D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[2] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_088B9D74;
      }
      goto L_088B9D74;
    }
L_088B9D74:
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
L_088B9D90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B9DB8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_088B97C8;
L_088B9DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B9E08;
      }
      goto L_088B9DCC;
    }
L_088B9DCC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088B9E08;
      }
      goto L_088B9DE0;
    }
L_088B9DE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x088B9DF0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088B97C8;
L_088B9DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088B9DE0;
      }
      goto L_088B9E08;
    }
L_088B9E08:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9E24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] & 2u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088B9E64;
      }
      goto L_088B9E54;
    }
L_088B9E54:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088B9E60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088B9D90;
L_088B9E60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088B9E64;
L_088B9E64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_088B9E80;
L_088B9E80:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9ECC;
      }
      goto L_088B9E88;
    }
L_088B9E88:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B9ECC;
      }
      goto L_088B9E98;
    }
L_088B9E98:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088B9E80;
      }
      goto L_088B9ECC;
    }
L_088B9ECC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088B9EF0;
      }
      goto L_088B9ED8;
    }
L_088B9ED8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088B9ED8;
      }
      goto L_088B9EF0;
    }
L_088B9EF0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
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
L_088B9F0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(46)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] & 65535u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < 200 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088B9F84;
      }
      goto L_088B9F44;
    }
L_088B9F44:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(46)));
    ctx.gpr[5] = (0u | 200u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B9F6C;
      }
      goto L_088B9F54;
    }
L_088B9F54:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B9F64u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10824));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 350u, 0x08A018ACu>(ctx, &aot_mem) && ctx.pc == 0x088B9F64u) goto L_088B9F64;
    return;
L_088B9F64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9F84;
      }
      goto L_088B9F6C;
    }
L_088B9F6C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 225 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B9F84;
      }
      goto L_088B9F78;
    }
L_088B9F78:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B9F84u);
    ctx.gpr[5] = (0u | 5u);
    goto L_088B93EC;
L_088B9F84:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B9F90u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088B9B90;
L_088B9F90:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B9FA8;
      }
      goto L_088B9F9C;
    }
L_088B9F9C:
    ctx.gpr[31] = (0x088B9FA4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 372u, 0x088D2D78u>(ctx, &aot_mem) && ctx.pc == 0x088B9FA4u) goto L_088B9FA4;
    return;
L_088B9FA4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088B9FA8;
L_088B9FA8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B9FB8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_088B9E24;
L_088B9FB8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(46)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B9FE4;
      }
      goto L_088B9FDC;
    }
L_088B9FDC:
    ctx.gpr[31] = (0x088B9FE4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 102u, 0x0891C7F4u>(ctx, &aot_mem) && ctx.pc == 0x088B9FE4u) goto L_088B9FE4;
    return;
L_088B9FE4:
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
L_088B9FFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088BA040;
      }
      goto L_088BA020;
    }
L_088BA020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    ctx.gpr[31] = (0x088BA038u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B9B90;
L_088BA038:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA0A4;
      }
      goto L_088BA040;
    }
L_088BA040:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA098;
      }
      goto L_088BA050;
    }
L_088BA050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] >> 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BA07Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088B9E24;
L_088BA07C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BA090;
      }
      goto L_088BA084;
    }
L_088BA084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_088BA090;
L_088BA090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA0A4;
      }
      goto L_088BA098;
    }
L_088BA098:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_088BA0A4;
L_088BA0A4:
    ctx.gpr[31] = (0x088BA0ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 372u, 0x088D2D78u>(ctx, &aot_mem) && ctx.pc == 0x088BA0ACu) goto L_088BA0AC;
    return;
L_088BA0AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA0C8;
      }
      goto L_088BA0B8;
    }
L_088BA0B8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BA0C8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088B9E24;
L_088BA0C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA0DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    ctx.gpr[31] = (0x088BA11Cu);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088BA11Cu) goto L_088BA11C;
    return;
L_088BA11C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BA12Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 555u, 0x0891713Cu>(ctx, &aot_mem) && ctx.pc == 0x088BA12Cu) goto L_088BA12C;
    return;
L_088BA12C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088BA150;
      }
      goto L_088BA148;
    }
L_088BA148:
    ctx.gpr[31] = (0x088BA150u);
    ctx.gpr[5] = (0u | 1u);
    goto L_088B9728;
L_088BA150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
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
L_088BA17C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BA210;
      }
      goto L_088BA1A4;
    }
L_088BA1A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] >> 29u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA1F8;
      }
      goto L_088BA1D0;
    }
L_088BA1D0:
    ctx.gpr[5] = (2188u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(49)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BA1E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24580));
    goto L_088B9450;
L_088BA1E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BA238;
      }
      goto L_088BA1F0;
    }
L_088BA1F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA27C;
      }
      goto L_088BA1F8;
    }
L_088BA1F8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BA208u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10844));
    goto L_088BA0DC;
L_088BA208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA27C;
      }
      goto L_088BA210;
    }
L_088BA210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BA1D0;
      }
      goto L_088BA220;
    }
L_088BA220:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BA230u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10876));
    goto L_088BA0DC;
L_088BA230:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA27C;
      }
      goto L_088BA238;
    }
L_088BA238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x088BA25Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 142u, 0x08878B94u>(ctx, &aot_mem) && ctx.pc == 0x088BA25Cu) goto L_088BA25C;
    return;
L_088BA25C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BA26Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_088B9304;
L_088BA26C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[31] = (0x088BA278u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B94B4;
L_088BA278:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_088BA27C;
L_088BA27C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA290:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(46)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088BA2C8;
      }
      goto L_088BA2A4;
    }
L_088BA2A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x088BA2BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10916));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 350u, 0x08A018ACu>(ctx, &aot_mem) && ctx.pc == 0x088BA2BCu) goto L_088BA2BC;
    return;
L_088BA2BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_088BA2C8;
L_088BA2C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA384;
      }
      goto L_088BA2D8;
    }
L_088BA2D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-16)));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (ctx.gpr[5] << 3u);
      if (branch_taken) {
          goto L_088BA314;
      }
      goto L_088BA2E8;
    }
L_088BA2E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x088BA304u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10968));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 350u, 0x08A018ACu>(ctx, &aot_mem) && ctx.pc == 0x088BA304u) goto L_088BA304;
    return;
L_088BA304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_088BA314;
L_088BA314:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[9] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA384;
      }
      goto L_088BA32C;
    }
L_088BA32C:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088BA37C;
      }
      goto L_088BA33C;
    }
L_088BA33C:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[11] = (ctx.gpr[11] - ctx.gpr[8]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[6]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088BA33C;
      }
      goto L_088BA37C;
    }
L_088BA37C:
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_088BA384;
L_088BA384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA3A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(46)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BA3ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088B9450;
L_088BA3EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA444;
      }
      goto L_088BA3F4;
    }
L_088BA3F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088BA40Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 142u, 0x08878B94u>(ctx, &aot_mem) && ctx.pc == 0x088BA40Cu) goto L_088BA40C;
    return;
L_088BA40C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088BA41Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_088B9304;
L_088BA41C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[21]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[31] = (0x088BA440u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088B94B4;
L_088BA440:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_088BA444;
L_088BA444:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA46C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088BA4A0;
      }
      goto L_088BA498;
    }
L_088BA498:
    ctx.gpr[31] = (0x088BA4A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 102u, 0x0891C7F4u>(ctx, &aot_mem) && ctx.pc == 0x088BA4A0u) goto L_088BA4A0;
    return;
L_088BA4A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BA4C8;
      }
      goto L_088BA4B0;
    }
L_088BA4B0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BA4C0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 120u, 0x08A00888u>(ctx, &aot_mem) && ctx.pc == 0x088BA4C0u) goto L_088BA4C0;
    return;
L_088BA4C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BA4DC;
      }
      goto L_088BA4C8;
    }
L_088BA4C8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BA4D8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 835u, 0x089CF8BCu>(ctx, &aot_mem) && ctx.pc == 0x088BA4D8u) goto L_088BA4D8;
    return;
L_088BA4D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088BA4DC;
L_088BA4DC:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BA4F0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 130u, 0x08878A78u>(ctx, &aot_mem) && ctx.pc == 0x088BA4F0u) goto L_088BA4F0;
    return;
L_088BA4F0:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BA524;
      }
      goto L_088BA51C;
    }
L_088BA51C:
    ctx.gpr[31] = (0x088BA524u);
    ctx.gpr[5] = (0u | 1u);
    goto L_088B9728;
L_088BA524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA544:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (2188u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BA580u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23444));
    goto L_088B9450;
L_088BA580:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x088BA598u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x088BA598u) goto L_088BA598;
    return;
L_088BA598:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_088BA5C8;
      }
      goto L_088BA5B0;
    }
L_088BA5B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088BA5C4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_088B9304;
L_088BA5C4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_088BA5C8;
L_088BA5C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA5D4:
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
L_088BA600:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BA648;
      }
      goto L_088BA628;
    }
L_088BA628:
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17036u << 16u);
      if (branch_taken) {
          goto L_088BA654;
      }
      goto L_088BA640;
    }
L_088BA640:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088BA66C;
      }
      goto L_088BA648;
    }
L_088BA648:
    ctx.gpr[4] = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BA66C;
      }
      goto L_088BA654;
    }
L_088BA654:
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[15] - ctx.fpr[0];
    goto L_088BA66C;
L_088BA66C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA674:
    ctx.gpr[7] = (0u | 67u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(847), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(848), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_088BA6B0;
L_088BA6B0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BA6B0;
      }
      goto L_088BA6C4;
    }
L_088BA6C4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(908), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(912), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(916), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(920), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA70C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_088BA72C;
      }
      goto L_088BA71C;
    }
L_088BA71C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA72C;
      }
      goto L_088BA724;
    }
L_088BA724:
    ctx.gpr[31] = (0x088BA72Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088BA72Cu) goto L_088BA72C;
    return;
L_088BA72C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA738:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088BA76C;
      }
      goto L_088BA750;
    }
L_088BA750:
    ctx.gpr[31] = (0x088BA758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 81u, 0x088BC494u>(ctx, &aot_mem) && ctx.pc == 0x088BA758u) goto L_088BA758;
    return;
L_088BA758:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA768;
      }
      goto L_088BA760;
    }
L_088BA760:
    ctx.gpr[31] = (0x088BA768u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 72u, 0x088BC420u>(ctx, &aot_mem) && ctx.pc == 0x088BA768u) goto L_088BA768;
    return;
L_088BA768:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088BA76C;
L_088BA76C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA77C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA8DC;
      }
      goto L_088BA7A0;
    }
L_088BA7A0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BA7D8;
      }
      goto L_088BA7AC;
    }
L_088BA7AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088BA8DC;
      }
      goto L_088BA7B4;
    }
L_088BA7B4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088BA7F4;
      }
      goto L_088BA7C0;
    }
L_088BA7C0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(847), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BA8DC;
      }
      goto L_088BA7D8;
    }
L_088BA7D8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BA814;
      }
      goto L_088BA7E0;
    }
L_088BA7E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA8DC;
      }
      goto L_088BA7E8;
    }
L_088BA7E8:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(847), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BA8DC;
      }
      goto L_088BA7F4;
    }
L_088BA7F4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(847), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BA80C;
      }
      goto L_088BA7FC;
    }
L_088BA7FC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_088BA80C;
L_088BA80C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BA8DC;
      }
      goto L_088BA814;
    }
L_088BA814:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x088BA820u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(847), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 81u, 0x088BC494u>(ctx, &aot_mem) && ctx.pc == 0x088BA820u) goto L_088BA820;
    return;
L_088BA820:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u | 67u);
      if (branch_taken) {
          goto L_088BA864;
      }
      goto L_088BA828;
    }
L_088BA828:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088BA864;
      }
      goto L_088BA834;
    }
L_088BA834:
    ctx.gpr[31] = (0x088BA83Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 14u, 0x088BC08Cu>(ctx, &aot_mem) && ctx.pc == 0x088BA83Cu) goto L_088BA83C;
    return;
L_088BA83C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    goto L_088BA864;
L_088BA864:
    ctx.gpr[31] = (0x088BA86Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 72u, 0x088BC420u>(ctx, &aot_mem) && ctx.pc == 0x088BA86Cu) goto L_088BA86C;
    return;
L_088BA86C:
    ctx.gpr[31] = (0x088BA874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 81u, 0x088BC494u>(ctx, &aot_mem) && ctx.pc == 0x088BA874u) goto L_088BA874;
    return;
L_088BA874:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(847)));
        goto L_088BA8A4;
    }
    goto L_088BA87C;
L_088BA87C:
    ctx.gpr[31] = (0x088BA884u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 72u, 0x088BC420u>(ctx, &aot_mem) && ctx.pc == 0x088BA884u) goto L_088BA884;
    return;
L_088BA884:
    ctx.gpr[31] = (0x088BA88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 585u, 0x08AB350Cu>(ctx, &aot_mem) && ctx.pc == 0x088BA88Cu) goto L_088BA88C;
    return;
L_088BA88C:
    ctx.gpr[31] = (0x088BA894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 278u, 0x089C1448u>(ctx, &aot_mem) && ctx.pc == 0x088BA894u) goto L_088BA894;
    return;
L_088BA894:
    ctx.gpr[31] = (0x088BA89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 114u, 0x089C0910u>(ctx, &aot_mem) && ctx.pc == 0x088BA89Cu) goto L_088BA89C;
    return;
L_088BA89C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA86C;
      }
      goto L_088BA8A4;
    }
L_088BA8A4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(858), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(848), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(850), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(851), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(852), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(853), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20812), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BA8DC;
      }
      goto L_088BA8DC;
    }
L_088BA8DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA8F0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_088BA918;
      }
      goto L_088BA8FC;
    }
L_088BA8FC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BA918;
      }
      goto L_088BA908;
    }
L_088BA908:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BA918;
      }
      goto L_088BA914;
    }
L_088BA914:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088BA918;
L_088BA918:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA920:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BA944u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11000));
    goto L_088BA5D4;
L_088BA944:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA9E8;
      }
      goto L_088BA950;
    }
L_088BA950:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 66 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BA9E8;
      }
      goto L_088BA95C;
    }
L_088BA95C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA9E8;
      }
      goto L_088BA964;
    }
L_088BA964:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BA9E8;
      }
      goto L_088BA974;
    }
L_088BA974:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088BA980u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 406u, 0x08842BACu>(ctx, &aot_mem) && ctx.pc == 0x088BA980u) goto L_088BA980;
    return;
L_088BA980:
    ctx.gpr[31] = (0x088BA988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 81u, 0x088BC494u>(ctx, &aot_mem) && ctx.pc == 0x088BA988u) goto L_088BA988;
    return;
L_088BA988:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA9B8;
      }
      goto L_088BA990;
    }
L_088BA990:
    ctx.gpr[31] = (0x088BA998u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 72u, 0x088BC420u>(ctx, &aot_mem) && ctx.pc == 0x088BA998u) goto L_088BA998;
    return;
L_088BA998:
    ctx.gpr[31] = (0x088BA9A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 585u, 0x08AB350Cu>(ctx, &aot_mem) && ctx.pc == 0x088BA9A0u) goto L_088BA9A0;
    return;
L_088BA9A0:
    ctx.gpr[31] = (0x088BA9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 278u, 0x089C1448u>(ctx, &aot_mem) && ctx.pc == 0x088BA9A8u) goto L_088BA9A8;
    return;
L_088BA9A8:
    ctx.gpr[31] = (0x088BA9B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 114u, 0x089C0910u>(ctx, &aot_mem) && ctx.pc == 0x088BA9B0u) goto L_088BA9B0;
    return;
L_088BA9B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA980;
      }
      goto L_088BA9B8;
    }
L_088BA9B8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x088BA9D0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 48u, 0x088BC2A4u>(ctx, &aot_mem) && ctx.pc == 0x088BA9D0u) goto L_088BA9D0;
    return;
L_088BA9D0:
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BA9E4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 82u, 0x088BC4A8u>(ctx, &aot_mem) && ctx.pc == 0x088BA9E4u) goto L_088BA9E4;
    return;
L_088BA9E4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_088BA9E8;
L_088BA9E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA9FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BAA18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11028));
    goto L_088BA5D4;
L_088BAA18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAA74;
      }
      goto L_088BAA24;
    }
L_088BAA24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BAA74;
      }
      goto L_088BAA30;
    }
L_088BAA30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BAA74;
      }
      goto L_088BAA40;
    }
L_088BAA40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BAA6C;
      }
      goto L_088BAA4C;
    }
L_088BAA4C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20812), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(851), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BAA6C;
L_088BAA6C:
    ctx.gpr[31] = (0x088BAA74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 85u, 0x088BC4D4u>(ctx, &aot_mem) && ctx.pc == 0x088BAA74u) goto L_088BAA74;
    return;
L_088BAA74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BAA84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BAAA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11060));
    goto L_088BA5D4;
L_088BAAA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAB08;
      }
      goto L_088BAAAC;
    }
L_088BAAAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BAB08;
      }
      goto L_088BAAB8;
    }
L_088BAAB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BAB08;
      }
      goto L_088BAAC8;
    }
L_088BAAC8:
    ctx.gpr[31] = (0x088BAAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 81u, 0x088BC494u>(ctx, &aot_mem) && ctx.pc == 0x088BAAD0u) goto L_088BAAD0;
    return;
L_088BAAD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAB00;
      }
      goto L_088BAAD8;
    }
L_088BAAD8:
    ctx.gpr[31] = (0x088BAAE0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 72u, 0x088BC420u>(ctx, &aot_mem) && ctx.pc == 0x088BAAE0u) goto L_088BAAE0;
    return;
L_088BAAE0:
    ctx.gpr[31] = (0x088BAAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 585u, 0x08AB350Cu>(ctx, &aot_mem) && ctx.pc == 0x088BAAE8u) goto L_088BAAE8;
    return;
L_088BAAE8:
    ctx.gpr[31] = (0x088BAAF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 278u, 0x089C1448u>(ctx, &aot_mem) && ctx.pc == 0x088BAAF0u) goto L_088BAAF0;
    return;
L_088BAAF0:
    ctx.gpr[31] = (0x088BAAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 114u, 0x089C0910u>(ctx, &aot_mem) && ctx.pc == 0x088BAAF8u) goto L_088BAAF8;
    return;
L_088BAAF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAAC8;
      }
      goto L_088BAB00;
    }
L_088BAB00:
    ctx.gpr[4] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BAB08;
L_088BAB08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BAB18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(913), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20624)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    ctx.gpr[17] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_088BAB60;
      }
      goto L_088BAB54;
    }
L_088BAB54:
    ctx.gpr[31] = (0x088BAB5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BAB5Cu) goto L_088BAB5C;
    return;
L_088BAB5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20624)));
    goto L_088BAB60;
L_088BAB60:
    ctx.gpr[31] = (0x088BAB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x088BAB68u) goto L_088BAB68;
    return;
L_088BAB68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BABC4;
      }
      goto L_088BAB70;
    }
L_088BAB70:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BABBC;
      }
      goto L_088BAB78;
    }
L_088BAB78:
    ctx.gpr[31] = (0x088BAB80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 81u, 0x088BC494u>(ctx, &aot_mem) && ctx.pc == 0x088BAB80u) goto L_088BAB80;
    return;
L_088BAB80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAB90;
      }
      goto L_088BAB88;
    }
L_088BAB88:
    ctx.gpr[31] = (0x088BAB90u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 72u, 0x088BC420u>(ctx, &aot_mem) && ctx.pc == 0x088BAB90u) goto L_088BAB90;
    return;
L_088BAB90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BABA8;
      }
      goto L_088BAB9C;
    }
L_088BAB9C:
    ctx.gpr[31] = (0x088BABA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BABA4u) goto L_088BABA4;
    return;
L_088BABA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20624)));
    goto L_088BABA8;
L_088BABA8:
    ctx.gpr[31] = (0x088BABB0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 38u, 0x0883822Cu>(ctx, &aot_mem) && ctx.pc == 0x088BABB0u) goto L_088BABB0;
    return;
L_088BABB0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(913), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BABC4;
      }
      goto L_088BABBC;
    }
L_088BABBC:
    ctx.gpr[18] = (0u | 65u);
    ctx.gpr[17] = (0u | 0u);
    goto L_088BABC4;
L_088BABC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAC0C;
      }
      goto L_088BABD0;
    }
L_088BABD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 66 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BAC0C;
      }
      goto L_088BABDC;
    }
L_088BABDC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAC0C;
      }
      goto L_088BABE4;
    }
L_088BABE4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(847)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
      if (branch_taken) {
          goto L_088BABF8;
      }
      goto L_088BABF0;
    }
L_088BABF0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BAC0C;
      }
      goto L_088BABF8;
    }
L_088BABF8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[18]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(849), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088BAC0C;
      }
      goto L_088BAC04;
    }
L_088BAC04:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(860), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BAC0C;
L_088BAC0C:
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
L_088BAC2C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(847)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAC44;
      }
      goto L_088BAC38;
    }
L_088BAC38:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(848)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BAC4C;
      }
      goto L_088BAC44;
    }
L_088BAC44:
    ctx.gpr[5] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088BAC4C;
L_088BAC4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BAC54:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(832), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BAC64:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(864));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BAC6C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(864)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_088BAC7C;
L_088BAC7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(864)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BAC98;
      }
      goto L_088BAC90;
    }
L_088BAC90:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    goto L_088BAC98;
L_088BAC98:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BAC7C;
      }
      goto L_088BACA8;
    }
L_088BACA8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BACB0:
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BAD6C;
      }
      goto L_088BACC4;
    }
L_088BACC4:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(846)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BAD6C;
      }
      goto L_088BACD0;
    }
L_088BACD0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 41 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 42 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BAD08;
      }
      goto L_088BACDC;
    }
L_088BACDC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BAD6C;
      }
      goto L_088BACE8;
    }
L_088BACE8:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10640));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21924)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(248), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 127u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8640));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088BAD6C;
      }
      goto L_088BAD08;
    }
L_088BAD08:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_088BAD28;
      }
      goto L_088BAD10;
    }
L_088BAD10:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 43 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_088BAD4C;
      }
      goto L_088BAD1C;
    }
L_088BAD1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAD6C;
      }
      goto L_088BAD24;
    }
L_088BAD24:
    ctx.gpr[5] = (2233u << 16u);
    goto L_088BAD28;
L_088BAD28:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10640));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 127u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24576));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(248), 0u);
      if (branch_taken) {
          goto L_088BAD6C;
      }
      goto L_088BAD4C;
    }
L_088BAD4C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10640));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 127u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-15168));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(248), 0u);
    goto L_088BAD6C;
L_088BAD6C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BAD74:
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BAE2C;
      }
      goto L_088BAD88;
    }
L_088BAD88:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(846)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BAE2C;
      }
      goto L_088BAD94;
    }
L_088BAD94:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 44 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 45 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BADC8;
      }
      goto L_088BADA0;
    }
L_088BADA0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 43 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BAE2C;
      }
      goto L_088BADAC;
    }
L_088BADAC:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10640));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21924)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(236), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 127u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(232), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088BAE2C;
      }
      goto L_088BADC8;
    }
L_088BADC8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_088BADE8;
      }
      goto L_088BADD0;
    }
L_088BADD0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 46 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_088BAE0C;
      }
      goto L_088BADDC;
    }
L_088BADDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAE2C;
      }
      goto L_088BADE4;
    }
L_088BADE4:
    ctx.gpr[5] = (2233u << 16u);
    goto L_088BADE8;
L_088BADE8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10640));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[6] = (5u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 127u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7480));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(232), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(236), 0u);
      if (branch_taken) {
          goto L_088BAE2C;
      }
      goto L_088BAE0C;
    }
L_088BAE0C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10640));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[6] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 127u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16640));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(232), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(236), 0u);
    goto L_088BAE2C;
L_088BAE2C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BAE34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(845)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 65u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088BAEC4;
      }
      goto L_088BAE54;
    }
L_088BAE54:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088BAE60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 337u, 0x08A5E008u>(ctx, &aot_mem) && ctx.pc == 0x088BAE60u) goto L_088BAE60;
    return;
L_088BAE60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAE7C;
      }
      goto L_088BAE6C;
    }
L_088BAE6C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(672)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
      if (branch_taken) {
          goto L_088BAE88;
      }
      goto L_088BAE7C;
    }
L_088BAE7C:
    ctx.gpr[5] = (0u | 11u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    goto L_088BAE88;
L_088BAE88:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088BAEAC;
      }
      goto L_088BAE90;
    }
L_088BAE90:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25471))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
      if (branch_taken) {
          goto L_088BAEAC;
      }
      goto L_088BAEA4;
    }
L_088BAEA4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    goto L_088BAEAC;
L_088BAEAC:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088BAEC4;
      }
      goto L_088BAEB4;
    }
L_088BAEB4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BAEC4;
      }
      goto L_088BAEBC;
    }
L_088BAEBC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088BAEC4;
L_088BAEC4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BAED8:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_088BAF2C;
      }
      goto L_088BAEE4;
    }
L_088BAEE4:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 67 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAF2C;
      }
      goto L_088BAEF0;
    }
L_088BAEF0:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(836), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(837), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088BAF28;
      }
      goto L_088BAF04;
    }
L_088BAF04:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(840), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088BAF2C;
      }
      goto L_088BAF28;
    }
L_088BAF28:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(840), ctx.gpr[7]);
    goto L_088BAF2C;
L_088BAF2C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BAF34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB038;
      }
      goto L_088BAF54;
    }
L_088BAF54:
    ctx.gpr[31] = (0x088BAF5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BB0F0;
L_088BAF5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB018;
      }
      goto L_088BAF64;
    }
L_088BAF64:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088BAF70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 337u, 0x08A5E008u>(ctx, &aot_mem) && ctx.pc == 0x088BAF70u) goto L_088BAF70;
    return;
L_088BAF70:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAFF8;
      }
      goto L_088BAF7C;
    }
L_088BAF7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BAF88u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088BBEFC;
L_088BAF88:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BAFA0;
      }
      goto L_088BAF90;
    }
L_088BAF90:
    ctx.gpr[31] = (0x088BAF98u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088BBF80;
L_088BAF98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAFC0;
      }
      goto L_088BAFA0;
    }
L_088BAFA0:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BAFB8;
      }
      goto L_088BAFB0;
    }
L_088BAFB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB03C;
      }
      goto L_088BAFB8;
    }
L_088BAFB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 23u);
      if (branch_taken) {
          goto L_088BB03C;
      }
      goto L_088BAFC0;
    }
L_088BAFC0:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BAFD8;
      }
      goto L_088BAFD0;
    }
L_088BAFD0:
    ctx.gpr[31] = (0x088BAFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BAFD8u) goto L_088BAFD8;
    return;
L_088BAFD8:
    ctx.gpr[31] = (0x088BAFE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20624)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x088BAFE0u) goto L_088BAFE0;
    return;
L_088BAFE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAFF0;
      }
      goto L_088BAFE8;
    }
L_088BAFE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 65u);
      if (branch_taken) {
          goto L_088BB03C;
      }
      goto L_088BAFF0;
    }
L_088BAFF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
      if (branch_taken) {
          goto L_088BB03C;
      }
      goto L_088BAFF8;
    }
L_088BAFF8:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BB010;
      }
      goto L_088BB008;
    }
L_088BB008:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB03C;
      }
      goto L_088BB010;
    }
L_088BB010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_088BB03C;
      }
      goto L_088BB018;
    }
L_088BB018:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BB030;
      }
      goto L_088BB028;
    }
L_088BB028:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB03C;
      }
      goto L_088BB030;
    }
L_088BB030:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_088BB03C;
      }
      goto L_088BB038;
    }
L_088BB038:
    ctx.gpr[2] = (0u | 0u);
    goto L_088BB03C;
L_088BB03C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BB050:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB0D8;
      }
      goto L_088BB078;
    }
L_088BB078:
    ctx.gpr[31] = (0x088BB080u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088BB0F0;
L_088BB080:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB0D4;
      }
      goto L_088BB088;
    }
L_088BB088:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088BB094u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 337u, 0x08A5E008u>(ctx, &aot_mem) && ctx.pc == 0x088BB094u) goto L_088BB094;
    return;
L_088BB094:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB0D8;
      }
      goto L_088BB0A0;
    }
L_088BB0A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088BB0ACu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_088BBEFC;
L_088BB0AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088BB0CC;
      }
      goto L_088BB0B4;
    }
L_088BB0B4:
    ctx.gpr[31] = (0x088BB0BCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_088BBF80;
L_088BB0BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB0CC;
      }
      goto L_088BB0C4;
    }
L_088BB0C4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_088BB0D8;
      }
      goto L_088BB0CC;
    }
L_088BB0CC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(844), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_088BB0D8;
      }
      goto L_088BB0D4;
    }
L_088BB0D4:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(844), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_088BB0D8;
L_088BB0D8:
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
L_088BB0F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088BB108u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 337u, 0x08A5E008u>(ctx, &aot_mem) && ctx.pc == 0x088BB108u) goto L_088BB108;
    return;
L_088BB108:
    ctx.gpr[31] = (0x088BB110u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088BB110u) goto L_088BB110;
    return;
L_088BB110:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BB1CC;
      }
      goto L_088BB118;
    }
L_088BB118:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BB1B4;
      }
      goto L_088BB128;
    }
L_088BB128:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BB1B4;
      }
      goto L_088BB138;
    }
L_088BB138:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BB1B4;
      }
      goto L_088BB148;
    }
L_088BB148:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB1B4;
      }
      goto L_088BB15C;
    }
L_088BB15C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB1B4;
      }
      goto L_088BB16C;
    }
L_088BB16C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB1A4;
      }
      goto L_088BB174;
    }
L_088BB174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BB1AC;
      }
      goto L_088BB188;
    }
L_088BB188:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 163 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 197u);
      if (branch_taken) {
          goto L_088BB1BC;
      }
      goto L_088BB198;
    }
L_088BB198:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 162 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB1C4;
      }
      goto L_088BB1A4;
    }
L_088BB1A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BB1D4;
      }
      goto L_088BB1AC;
    }
L_088BB1AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BB1D4;
      }
      goto L_088BB1B4;
    }
L_088BB1B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BB1D4;
      }
      goto L_088BB1BC;
    }
L_088BB1BC:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BB1A4;
      }
      goto L_088BB1C4;
    }
L_088BB1C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BB1D4;
      }
      goto L_088BB1CC;
    }
L_088BB1CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BB1D4;
      }
      goto L_088BB1D4;
    }
L_088BB1D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BB1E4:
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB21C;
      }
      goto L_088BB1F0;
    }
L_088BB1F0:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088BB210;
      }
      goto L_088BB204;
    }
L_088BB204:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088BB210;
L_088BB210:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(864)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088BB21C;
L_088BB21C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BB224:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BB240u);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 81u, 0x088BC494u>(ctx, &aot_mem) && ctx.pc == 0x088BB240u) goto L_088BB240;
    return;
L_088BB240:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB25C;
      }
      goto L_088BB248;
    }
L_088BB248:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088BB25C;
      }
      goto L_088BB254;
    }
L_088BB254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BB260;
      }
      goto L_088BB25C;
    }
L_088BB25C:
    ctx.gpr[2] = (0u | 0u);
    goto L_088BB260;
L_088BB260:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BB274:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BB280:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BB2A4u);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 81u, 0x088BC494u>(ctx, &aot_mem) && ctx.pc == 0x088BB2A4u) goto L_088BB2A4;
    return;
L_088BB2A4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB2C0;
      }
      goto L_088BB2B0;
    }
L_088BB2B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BB2D0;
      }
      goto L_088BB2C0;
    }
L_088BB2C0:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(846)));
        goto L_088BB2E0;
    }
    goto L_088BB2C8;
L_088BB2C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB334;
      }
      goto L_088BB2D0;
    }
L_088BB2D0:
    ctx.gpr[31] = (0x088BB2D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088BAE34;
L_088BB2D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB428;
      }
      goto L_088BB2E0;
    }
L_088BB2E0:
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BB334;
      }
      goto L_088BB2EC;
    }
L_088BB2EC:
    ctx.gpr[31] = (0x088BB2F4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 72u, 0x088BC420u>(ctx, &aot_mem) && ctx.pc == 0x088BB2F4u) goto L_088BB2F4;
    return;
L_088BB2F4:
    ctx.gpr[31] = (0x088BB2FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 81u, 0x088BC494u>(ctx, &aot_mem) && ctx.pc == 0x088BB2FCu) goto L_088BB2FC;
    return;
L_088BB2FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB32C;
      }
      goto L_088BB304;
    }
L_088BB304:
    ctx.gpr[31] = (0x088BB30Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 72u, 0x088BC420u>(ctx, &aot_mem) && ctx.pc == 0x088BB30Cu) goto L_088BB30C;
    return;
L_088BB30C:
    ctx.gpr[31] = (0x088BB314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 585u, 0x08AB350Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB314u) goto L_088BB314;
    return;
L_088BB314:
    ctx.gpr[31] = (0x088BB31Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 278u, 0x089C1448u>(ctx, &aot_mem) && ctx.pc == 0x088BB31Cu) goto L_088BB31C;
    return;
L_088BB31C:
    ctx.gpr[31] = (0x088BB324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 114u, 0x089C0910u>(ctx, &aot_mem) && ctx.pc == 0x088BB324u) goto L_088BB324;
    return;
L_088BB324:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB2F4;
      }
      goto L_088BB32C;
    }
L_088BB32C:
    ctx.gpr[31] = (0x088BB334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 118u, 0x088BC648u>(ctx, &aot_mem) && ctx.pc == 0x088BB334u) goto L_088BB334;
    return;
L_088BB334:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(848)));
      if (branch_taken) {
          goto L_088BB344;
      }
      goto L_088BB33C;
    }
L_088BB33C:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(850), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(853), static_cast<std::uint8_t>(0u));
    goto L_088BB344;
L_088BB344:
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_088BB35C;
    }
    goto L_088BB34C;
L_088BB34C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BB428;
      }
      goto L_088BB354;
    }
L_088BB354:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB36C;
      }
      goto L_088BB35C;
    }
L_088BB35C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB3B8;
      }
      goto L_088BB364;
    }
L_088BB364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB428;
      }
      goto L_088BB36C;
    }
L_088BB36C:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-25471))))));
    ctx.gpr[31] = (0x088BB38Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 190u, 0x08864D6Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB38Cu) goto L_088BB38C;
    return;
L_088BB38C:
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB3B0;
      }
      goto L_088BB398;
    }
L_088BB398:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-25471))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088BB3B0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 144u, 0x08864A54u>(ctx, &aot_mem) && ctx.pc == 0x088BB3B0u) goto L_088BB3B0;
    return;
L_088BB3B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB428;
      }
      goto L_088BB3B8;
    }
L_088BB3B8:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-25471))))));
    ctx.gpr[31] = (0x088BB3D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 190u, 0x08864D6Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB3D0u) goto L_088BB3D0;
    return;
L_088BB3D0:
    ctx.gpr[4] = (ctx.gpr[19] | ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB420;
      }
      goto L_088BB3DC;
    }
L_088BB3DC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x088BB3ECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088BB0F0;
L_088BB3EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB420;
      }
      goto L_088BB3F4;
    }
L_088BB3F4:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-25471))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[16] & 255u);
    ctx.gpr[31] = (0x088BB408u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088BBC80;
L_088BB408:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BB420u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 48u, 0x088BC2A4u>(ctx, &aot_mem) && ctx.pc == 0x088BB420u) goto L_088BB420;
    return;
L_088BB420:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB428;
      }
      goto L_088BB428;
    }
L_088BB428:
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
L_088BB444:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088BB52C;
      }
      goto L_088BB46C;
    }
L_088BB46C:
    ctx.gpr[31] = (0x088BB474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 81u, 0x088BC494u>(ctx, &aot_mem) && ctx.pc == 0x088BB474u) goto L_088BB474;
    return;
L_088BB474:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB4C0;
      }
      goto L_088BB47C;
    }
L_088BB47C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 67u);
      if (branch_taken) {
          goto L_088BB5FC;
      }
      goto L_088BB48C;
    }
L_088BB48C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BB4B8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 82u, 0x088BC4A8u>(ctx, &aot_mem) && ctx.pc == 0x088BB4B8u) goto L_088BB4B8;
    return;
L_088BB4B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB5FC;
      }
      goto L_088BB4C0;
    }
L_088BB4C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[5] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(10640));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BB4DCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 284u, 0x08A6D3DCu>(ctx, &aot_mem) && ctx.pc == 0x088BB4DCu) goto L_088BB4DC;
    return;
L_088BB4DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BB4F4;
      }
      goto L_088BB4E4;
    }
L_088BB4E4:
    ctx.gpr[31] = (0x088BB4ECu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 284u, 0x08A6D3DCu>(ctx, &aot_mem) && ctx.pc == 0x088BB4ECu) goto L_088BB4EC;
    return;
L_088BB4EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB510;
      }
      goto L_088BB4F4;
    }
L_088BB4F4:
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BB508u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 82u, 0x088BC4A8u>(ctx, &aot_mem) && ctx.pc == 0x088BB508u) goto L_088BB508;
    return;
L_088BB508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB5FC;
      }
      goto L_088BB510;
    }
L_088BB510:
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BB524u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 82u, 0x088BC4A8u>(ctx, &aot_mem) && ctx.pc == 0x088BB524u) goto L_088BB524;
    return;
L_088BB524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB5FC;
      }
      goto L_088BB52C;
    }
L_088BB52C:
    ctx.gpr[31] = (0x088BB534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 81u, 0x088BC494u>(ctx, &aot_mem) && ctx.pc == 0x088BB534u) goto L_088BB534;
    return;
L_088BB534:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB5A0;
      }
      goto L_088BB53C;
    }
L_088BB53C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BB590;
      }
      goto L_088BB54C;
    }
L_088BB54C:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(20812)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB590;
      }
      goto L_088BB55C;
    }
L_088BB55C:
    ctx.gpr[31] = (0x088BB564u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 14u, 0x088BC08Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB564u) goto L_088BB564;
    return;
L_088BB564:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(20812), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_088BB590;
L_088BB590:
    ctx.gpr[31] = (0x088BB598u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 72u, 0x088BC420u>(ctx, &aot_mem) && ctx.pc == 0x088BB598u) goto L_088BB598;
    return;
L_088BB598:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(920), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088BB5FC;
      }
      goto L_088BB5A0;
    }
L_088BB5A0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20812), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 67u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(851), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB5CC;
      }
      goto L_088BB5C4;
    }
L_088BB5C4:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    goto L_088BB5CC;
L_088BB5CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BB5E4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 48u, 0x088BC2A4u>(ctx, &aot_mem) && ctx.pc == 0x088BB5E4u) goto L_088BB5E4;
    return;
L_088BB5E4:
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BB5F8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 82u, 0x088BC4A8u>(ctx, &aot_mem) && ctx.pc == 0x088BB5F8u) goto L_088BB5F8;
    return;
L_088BB5F8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_088BB5FC;
L_088BB5FC:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_088BB618:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(18) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB87C;
      }
      goto L_088BB640;
    }
L_088BB640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29200)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(12880)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BB65C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6868)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088BB6C8;
      }
      goto L_088BB66C;
    }
L_088BB66C:
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
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20816));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17796u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BB6C8;
      }
      goto L_088BB6BC;
    }
L_088BB6BC:
    ctx.gpr[4] = (0u | 21u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB884;
      }
      goto L_088BB6C8;
    }
L_088BB6C8:
    ctx.gpr[31] = (0x088BB6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 361u, 0x0890E800u>(ctx, &aot_mem) && ctx.pc == 0x088BB6D0u) goto L_088BB6D0;
    return;
L_088BB6D0:
    ctx.gpr[4] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[17] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BB6F8;
      }
      goto L_088BB6DC;
    }
L_088BB6DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20836)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088BB6FC;
      }
      goto L_088BB6E8;
    }
L_088BB6E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20836)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20836), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BB6FC;
      }
      goto L_088BB6F8;
    }
L_088BB6F8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20836), ctx.gpr[4]);
    goto L_088BB6FC;
L_088BB6FC:
    ctx.gpr[31] = (0x088BB704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 361u, 0x0890E800u>(ctx, &aot_mem) && ctx.pc == 0x088BB704u) goto L_088BB704;
    return;
L_088BB704:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_088BB770;
      }
      goto L_088BB70C;
    }
L_088BB70C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB770;
      }
      goto L_088BB718;
    }
L_088BB718:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7036))))));
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BB738;
      }
      goto L_088BB72C;
    }
L_088BB72C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7034))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BB764;
      }
      goto L_088BB738;
    }
L_088BB738:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7688)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BB764;
      }
      goto L_088BB758;
    }
L_088BB758:
    ctx.gpr[4] = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB82C;
      }
      goto L_088BB764;
    }
L_088BB764:
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB82C;
      }
      goto L_088BB770;
    }
L_088BB770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB82C;
      }
      goto L_088BB77C;
    }
L_088BB77C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29960)));
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BB7E0;
      }
      goto L_088BB790;
    }
L_088BB790:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7036))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BB7A8;
      }
      goto L_088BB79C;
    }
L_088BB79C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7034))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BB7D4;
      }
      goto L_088BB7A8;
    }
L_088BB7A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7688)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BB7D4;
      }
      goto L_088BB7C8;
    }
L_088BB7C8:
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB82C;
      }
      goto L_088BB7D4;
    }
L_088BB7D4:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB82C;
      }
      goto L_088BB7E0;
    }
L_088BB7E0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7036))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BB7F8;
      }
      goto L_088BB7EC;
    }
L_088BB7EC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7034))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BB824;
      }
      goto L_088BB7F8;
    }
L_088BB7F8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7688)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BB824;
      }
      goto L_088BB818;
    }
L_088BB818:
    ctx.gpr[4] = (0u | 14u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB82C;
      }
      goto L_088BB824;
    }
L_088BB824:
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BB82C;
L_088BB82C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB884;
      }
      goto L_088BB834;
    }
L_088BB834:
    ctx.gpr[4] = (0u | 17u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB884;
      }
      goto L_088BB840;
    }
L_088BB840:
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB884;
      }
      goto L_088BB84C;
    }
L_088BB84C:
    ctx.gpr[4] = (0u | 20u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB884;
      }
      goto L_088BB858;
    }
L_088BB858:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB884;
      }
      goto L_088BB864;
    }
L_088BB864:
    ctx.gpr[4] = (0u | 18u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB884;
      }
      goto L_088BB870;
    }
L_088BB870:
    ctx.gpr[4] = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB884;
      }
      goto L_088BB87C;
    }
L_088BB87C:
    ctx.gpr[4] = (0u | 22u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BB884;
L_088BB884:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BB898:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 38u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BB8C8;
      }
      goto L_088BB8B0;
    }
L_088BB8B0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[31] = (0x088BB8C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 117u, 0x08864858u>(ctx, &aot_mem) && ctx.pc == 0x088BB8C0u) goto L_088BB8C0;
    return;
L_088BB8C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BB8CC;
      }
      goto L_088BB8C8;
    }
L_088BB8C8:
    ctx.gpr[2] = (0u | 0u);
    goto L_088BB8CC;
L_088BB8CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BB8D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] & 255u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BB908u);
    // nop
    goto L_088BA600;
L_088BB908:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-6868)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088BBA68;
      }
      goto L_088BB914;
    }
L_088BB914:
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
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20816));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BBA68;
      }
      goto L_088BB974;
    }
L_088BB974:
    ctx.gpr[4] = (17796u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17150u << 16u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088BBA38;
      }
      goto L_088BB994;
    }
L_088BB994:
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 127u);
      if (branch_taken) {
          goto L_088BB9DC;
      }
      goto L_088BB9AC;
    }
L_088BB9AC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-6868)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BBC28;
      }
      goto L_088BB9DC;
    }
L_088BB9DC:
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16948u << 16u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-6868)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BBC28;
      }
      goto L_088BBA38;
    }
L_088BBA38:
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[4] = (17026u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BBC28;
      }
      goto L_088BBA68;
    }
L_088BBA68:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BBA7C;
      }
      goto L_088BBA70;
    }
L_088BBA70:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20844), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088BBAFC;
      }
      goto L_088BBA7C;
    }
L_088BBA7C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20844)));
    ctx.gpr[5] = (17116u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BBAFC;
      }
      goto L_088BBA98;
    }
L_088BBA98:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (16362u << 16u);
      if (branch_taken) {
          goto L_088BBAD0;
      }
      goto L_088BBAA8;
    }
L_088BBAA8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (16362u << 16u);
      if (branch_taken) {
          goto L_088BBAD0;
      }
      goto L_088BBAB8;
    }
L_088BBAB8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20844)));
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20844), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_088BBAE4;
      }
      goto L_088BBAD0;
    }
L_088BBAD0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20844)));
    ctx.gpr[5] = (ctx.gpr[5] | 43691u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20844), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_088BBAE4;
L_088BBAE4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20844)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BBAFC;
      }
      goto L_088BBAF8;
    }
L_088BBAF8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20844), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088BBAFC;
L_088BBAFC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(845)));
    ctx.gpr[6] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BBB64;
      }
      goto L_088BBB0C;
    }
L_088BBB0C:
    ctx.gpr[31] = (0x088BBB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 361u, 0x0890E800u>(ctx, &aot_mem) && ctx.pc == 0x088BBB14u) goto L_088BBB14;
    return;
L_088BBB14:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17116u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29200)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BBC28;
      }
      goto L_088BBB54;
    }
L_088BBB54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BBC28;
      }
      goto L_088BBB64;
    }
L_088BBB64:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(845)));
    ctx.gpr[6] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BBBCC;
      }
      goto L_088BBB74;
    }
L_088BBB74:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20836)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17116u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29200)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BBC28;
      }
      goto L_088BBBBC;
    }
L_088BBBBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BBC28;
      }
      goto L_088BBBCC;
    }
L_088BBBCC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(845)));
    ctx.gpr[6] = (0u | 19u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20844)));
        goto L_088BBC18;
    }
    goto L_088BBBDC;
L_088BBBDC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20844)));
    ctx.gpr[4] = (16025u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BBC28;
      }
      goto L_088BBC18;
    }
L_088BBC18:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BBC28;
L_088BBC28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BBC44:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    goto L_088BBC4C;
L_088BBC4C:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 39 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088BBC4C;
      }
      goto L_088BBC78;
    }
L_088BBC78:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BBC80:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(20000));
      if (branch_taken) {
          goto L_088BBCC8;
      }
      goto L_088BBCC4;
    }
L_088BBCC4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088BBCC8;
L_088BBCC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBCD0;
      }
      goto L_088BBCD0;
    }
L_088BBCD0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BBCD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088BBCF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 337u, 0x08A5E008u>(ctx, &aot_mem) && ctx.pc == 0x088BBCF8u) goto L_088BBCF8;
    return;
L_088BBCF8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBDA0;
      }
      goto L_088BBD04;
    }
L_088BBD04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BBD10u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088BBEFC;
L_088BBD10:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BBD4C;
      }
      goto L_088BBD18;
    }
L_088BBD18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BBD24u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088BBF80;
L_088BBD24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BBD44;
      }
      goto L_088BBD2C;
    }
L_088BBD2C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBD54;
      }
      goto L_088BBD3C;
    }
L_088BBD3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BBD60;
      }
      goto L_088BBD44;
    }
L_088BBD44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 24u);
      if (branch_taken) {
          goto L_088BBDA8;
      }
      goto L_088BBD4C;
    }
L_088BBD4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_088BBDA8;
      }
      goto L_088BBD54;
    }
L_088BBD54:
    ctx.gpr[31] = (0x088BBD5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BBD5Cu) goto L_088BBD5C;
    return;
L_088BBD5C:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088BBD60;
L_088BBD60:
    ctx.gpr[31] = (0x088BBD68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x088BBD68u) goto L_088BBD68;
    return;
L_088BBD68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BBD90;
      }
      goto L_088BBD70;
    }
L_088BBD70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BBD98;
      }
      goto L_088BBD80;
    }
L_088BBD80:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25471))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_088BBDA8;
      }
      goto L_088BBD90;
    }
L_088BBD90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 65u);
      if (branch_taken) {
          goto L_088BBDA8;
      }
      goto L_088BBD98;
    }
L_088BBD98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
      if (branch_taken) {
          goto L_088BBDA8;
      }
      goto L_088BBDA0;
    }
L_088BBDA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_088BBDA8;
      }
      goto L_088BBDA8;
    }
L_088BBDA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BBDBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088BBDDCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 337u, 0x08A5E008u>(ctx, &aot_mem) && ctx.pc == 0x088BBDDCu) goto L_088BBDDC;
    return;
L_088BBDDC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBEE0;
      }
      goto L_088BBDE8;
    }
L_088BBDE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BBDF4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088BBEFC;
L_088BBDF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BBE30;
      }
      goto L_088BBDFC;
    }
L_088BBDFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BBE08u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088BBF80;
L_088BBE08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BBE28;
      }
      goto L_088BBE10;
    }
L_088BBE10:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBE38;
      }
      goto L_088BBE20;
    }
L_088BBE20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BBE44;
      }
      goto L_088BBE28;
    }
L_088BBE28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 24u);
      if (branch_taken) {
          goto L_088BBEE8;
      }
      goto L_088BBE30;
    }
L_088BBE30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_088BBEE8;
      }
      goto L_088BBE38;
    }
L_088BBE38:
    ctx.gpr[31] = (0x088BBE40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x088BBE40u) goto L_088BBE40;
    return;
L_088BBE40:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088BBE44;
L_088BBE44:
    ctx.gpr[31] = (0x088BBE4Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x088BBE4Cu) goto L_088BBE4C;
    return;
L_088BBE4C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BBE6C;
      }
      goto L_088BBE54;
    }
L_088BBE54:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20688)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
        goto L_088BBE74;
    }
    goto L_088BBE64;
L_088BBE64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBEB8;
      }
      goto L_088BBE6C;
    }
L_088BBE6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 65u);
      if (branch_taken) {
          goto L_088BBEE8;
      }
      goto L_088BBE74;
    }
L_088BBE74:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20688)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BBEB0;
      }
      goto L_088BBE94;
    }
L_088BBE94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBE94;
      }
      goto L_088BBEB0;
    }
L_088BBEB0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20688), 0u);
    goto L_088BBEB8;
L_088BBEB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BBED8;
      }
      goto L_088BBEC8;
    }
L_088BBEC8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25471))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_088BBEE8;
      }
      goto L_088BBED8;
    }
L_088BBED8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
      if (branch_taken) {
          goto L_088BBEE8;
      }
      goto L_088BBEE0;
    }
L_088BBEE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_088BBEE8;
      }
      goto L_088BBEE8;
    }
L_088BBEE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BBEFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 147 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 159 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BBF3C;
      }
      goto L_088BBF0C;
    }
L_088BBF0C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -981 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 138u);
      if (branch_taken) {
          goto L_088BBF2C;
      }
      goto L_088BBF18;
    }
L_088BBF18:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -982 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBF68;
      }
      goto L_088BBF24;
    }
L_088BBF24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BBF78;
      }
      goto L_088BBF2C;
    }
L_088BBF2C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BBF24;
      }
      goto L_088BBF34;
    }
L_088BBF34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBF68;
      }
      goto L_088BBF3C;
    }
L_088BBF3C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 196u);
      if (branch_taken) {
          goto L_088BBF60;
      }
      goto L_088BBF44;
    }
L_088BBF44:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 149 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 157 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BBF68;
      }
      goto L_088BBF50;
    }
L_088BBF50:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BBF24;
      }
      goto L_088BBF58;
    }
L_088BBF58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBF68;
      }
      goto L_088BBF60;
    }
L_088BBF60:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BBF24;
      }
      goto L_088BBF68;
    }
L_088BBF68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BBF78;
      }
      goto L_088BBF70;
    }
L_088BBF70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBF70;
      }
      goto L_088BBF78;
    }
L_088BBF78:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BBF80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 181u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 166u);
      if (branch_taken) {
          goto L_088BBFA0;
      }
      goto L_088BBF90;
    }
L_088BBF90:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 151u);
      if (branch_taken) {
          goto L_088BBFA0;
      }
      goto L_088BBF98;
    }
L_088BBF98:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BBFC0;
      }
      goto L_088BBFA0;
    }
L_088BBFA0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6983)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBFB8;
      }
      goto L_088BBFB0;
    }
L_088BBFB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BBFC4;
      }
      goto L_088BBFB8;
    }
L_088BBFB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BBFC4;
      }
      goto L_088BBFC0;
    }
L_088BBFC0:
    ctx.gpr[2] = (0u | 0u);
    goto L_088BBFC4;
L_088BBFC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BBFCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20624)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 2u, 0x088BC008u>(ctx, &aot_mem); return;
      }
      goto L_088BBFFC;
    }
L_088BBFFC:
    ctx.gpr[31] = (0x088BC004u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0045(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0045_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_45(Runtime &runtime) {
    runtime.register_generated_unit(45u, 0x088B8000u, 16384u, &recomp_unit_0045, &recomp_unit_0045_entry);
    runtime.register_function(0x088B8000u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8080u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8094u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B80ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B80C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B80D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B80E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B80F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8108u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8110u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8118u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8128u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8130u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8138u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8140u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8158u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8160u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8178u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8180u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B81ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B81B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B81E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B81E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B81F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8200u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8210u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8218u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8228u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8230u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8238u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8244u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8250u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8254u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8268u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8280u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8294u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B829Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B82ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B82B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B82D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B82E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B830Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8330u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B833Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8344u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8354u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B835Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8370u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B838Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8394u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B839Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B83A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B83B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B83C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B83E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B83F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8408u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8414u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B841Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8424u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B842Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8434u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8460u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8474u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B84A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B84BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B84D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B84E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B84E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B84FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B852Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B853Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B855Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8584u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8590u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8598u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B859Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B85A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B85C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B85CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B85D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B85DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B85E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B85F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B85FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8628u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8630u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8638u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8658u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B865Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8668u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8680u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B869Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8704u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8714u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8750u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8774u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B877Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8784u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B878Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8794u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B879Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B87B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B87BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B87C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B87CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B87ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B87FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B880Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8818u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8824u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B882Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8838u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8844u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B884Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8860u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8868u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8874u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8880u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8904u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B891Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8924u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8938u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B897Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B898Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A04u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A0Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A14u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A34u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A3Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8AA8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8AB8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B0Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B14u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8BF4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8C88u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CC4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CD4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CE4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CFCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D04u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D0Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D14u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D1Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D48u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D88u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DA8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DCCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E0Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8EA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F8Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F9Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8FB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8FBCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8FE8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8FF4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9000u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9008u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9020u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9030u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9038u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B904Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9078u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B908Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9098u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9118u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9134u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9144u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9158u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B917Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9194u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9200u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9214u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9220u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9230u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9238u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9240u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B92B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B92BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B92C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B92D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B92D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B92ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9304u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B932Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9334u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9340u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9348u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9350u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9364u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9374u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B937Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9390u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B93A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B93A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B93ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B93CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B93ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9408u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9420u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9428u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B943Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9444u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9450u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9480u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9488u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9498u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B949Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B94B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B94E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B950Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9514u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9520u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9558u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B955Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B958Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B95A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B95A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9604u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9610u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9644u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9668u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9680u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B96C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9728u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9740u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9748u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9750u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B975Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9768u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9780u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9788u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9790u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B979Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B97B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B97BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B97C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B97ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B97F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9820u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9828u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9840u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9854u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9860u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9868u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9880u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B98A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B98C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B990Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B992Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9934u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B993Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B995Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9970u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9984u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9988u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B99A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B99D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B99F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A08u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A58u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A8Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9AB4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9ACCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9AE0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9AF4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B20u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B24u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B38u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9BC4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9BD0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9BD4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9BE8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9BF0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C00u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C20u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C40u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9CA4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9CA8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9CCCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9CDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9CF4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9CFCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9D40u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9D50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9D64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9D74u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9D90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9DB8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9DCCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9DE0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9DF0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9E08u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9E24u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9E54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9E60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9E64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9E80u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9E88u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9E98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9ECCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9ED8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9EF0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F0Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F6Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F78u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F84u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F9Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9FA4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9FA8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9FB8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9FDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9FE4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9FFCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA020u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA038u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA040u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA050u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA07Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA084u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA090u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA098u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA0A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA0ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA0B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA0C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA0DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA11Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA12Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA148u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA150u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA17Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA208u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA210u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA220u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA230u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA238u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA25Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA26Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA278u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA27Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA290u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA2A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA2BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA2C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA2D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA2E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA304u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA314u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA32Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA33Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA37Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA384u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA3A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA3ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA3F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA40Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA41Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA440u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA444u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA46Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA498u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA4A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA4B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA4C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA4C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA4D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA4DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA4F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA51Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA524u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA544u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA580u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA598u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA600u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA628u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA640u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA648u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA654u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA66Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA674u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA6B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA6C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA70Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA71Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA724u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA72Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA738u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA750u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA758u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA760u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA768u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA76Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA77Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA80Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA814u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA820u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA828u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA834u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA83Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA864u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA86Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA874u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA87Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA884u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA88Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA894u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA89Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA8A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA8DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA8F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA8FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA908u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA914u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA918u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA920u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA944u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA950u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA95Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA964u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA974u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA980u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA988u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA990u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA998u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA24u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA40u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA6Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA74u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA84u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAB8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAC8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAD0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAD8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAE0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAE8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAF0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAF8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB00u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB08u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB5Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB68u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB78u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB80u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB88u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB9Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BABA4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BABA8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BABB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BABBCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BABC4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BABD0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BABDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BABE4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BABF0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BABF8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC04u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC0Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC2Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC38u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC6Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC7Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACA8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACC4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACD0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACE8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD08u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD1Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD24u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD28u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD6Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD74u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD88u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD94u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BADA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BADACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BADC8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BADD0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BADDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BADE4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BADE8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE0Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE2Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE34u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE6Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE7Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE88u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEA4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEB4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEBCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEC4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAED8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEE4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEF0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF04u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF28u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF2Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF34u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF5Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF7Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF88u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFB8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFC0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFD0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFD8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFE0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFE8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFF0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFF8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB008u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB010u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB018u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB028u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB030u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB038u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB03Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB050u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB078u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB080u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB088u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB094u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB108u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB110u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB118u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB128u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB138u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB148u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB15Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB16Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB174u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB188u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB198u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB204u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB210u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB21Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB224u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB240u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB248u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB254u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB25Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB260u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB274u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB280u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB304u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB30Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB314u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB31Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB324u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB32Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB334u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB33Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB344u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB34Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB354u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB35Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB364u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB36Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB38Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB398u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB408u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB420u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB428u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB444u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB46Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB474u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB47Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB48Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB4B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB4C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB4DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB4E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB4ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB4F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB508u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB510u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB524u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB52Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB534u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB53Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB54Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB55Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB564u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB590u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB598u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB5A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB5C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB5CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB5E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB5F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB5FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB618u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB640u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB65Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB66Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB6BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB6C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB6D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB6DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB6E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB6F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB6FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB704u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB70Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB718u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB72Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB738u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB758u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB764u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB770u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB77Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB790u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB79Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB7A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB7C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB7D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB7E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB7ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB7F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB818u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB824u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB82Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB834u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB840u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB84Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB858u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB864u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB870u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB87Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB884u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB898u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB8B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB8C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB8C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB8CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB8D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB908u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB914u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB974u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB994u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB9ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB9DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBA38u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBA68u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBA70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBA7Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBA98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBAA8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBAB8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBAD0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBAE4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBAF8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBAFCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB0Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB14u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB74u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBBBCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBBCCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBBDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBC18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBC28u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBC44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBC4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBC78u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBC80u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBCC4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBCC8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBCD0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBCD8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBCF8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD04u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD24u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD2Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD3Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD5Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD68u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD80u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDA8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDBCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDE8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDF4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDFCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE08u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE20u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE28u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE38u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE40u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE6Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE74u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE94u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBEB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBEB8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBEC8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBED8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBEE0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBEE8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBEFCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF0Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF24u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF2Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF34u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF3Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF58u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF68u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF78u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF80u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBFA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBFB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBFB8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBFC0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBFC4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBFCCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBFFCu, &recomp_unit_0045, "recomp_unit_0045");
}
} // namespace psprecomp
