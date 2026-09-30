#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0119[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 13,
    0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0,
    0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29,
    0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0,
    38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0,
    52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57,
    0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0,
    0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0,
    83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 96, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0,
    0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 107, 108, 0, 0,
    109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    113, 0, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 117, 118, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 127, 128, 0, 0, 129,
    0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0,
    133, 0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 137, 138, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145,
    0, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0,
    0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0,
    165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 179, 180, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 195, 0,
    196, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 201, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 208, 0, 209, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 217, 0, 0, 218,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0,
    233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244,
    0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 0, 261, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 266, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 277, 0, 278, 0, 279, 0, 0,
    0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 282, 0, 283, 0, 284, 0, 0, 0, 0, 285, 0, 286, 0, 0, 287, 0, 288, 0, 289, 0,
    290, 0, 0, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 0, 0, 0, 296, 0, 297, 0, 0, 298, 0, 299, 0, 300, 0, 0, 301, 0, 302,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0,
    0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0,
    0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 326, 0, 0, 0, 327, 0, 0, 328, 0, 329, 0, 330, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 335, 0, 336, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 341, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0,
    344, 0, 0, 0, 345, 0, 0, 346, 0, 0, 347, 348, 0, 0, 0, 349, 0, 0, 350, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0,
    0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 357, 0, 358, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360,
    0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 363, 0, 0, 364, 0, 365, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 372, 0, 373, 0, 374, 0, 0, 0, 0, 0, 0, 375,
    0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 380, 0, 381, 0, 382,
    0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 389, 0, 390, 0, 391, 0, 0, 392, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0,
    0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0,
    0, 403, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 407, 0, 408, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411,
    0, 412, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0,
    418, 419, 0, 0, 0, 420, 0, 0, 421, 0, 422, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    425, 0, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0,
    0, 430, 0, 0, 431, 0, 432, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 0, 0, 440, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 446, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0,
    451, 0, 0, 452, 0, 0, 0, 453, 0, 0, 454, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 458, 0, 0, 459, 460, 0, 0, 0, 461, 0, 0, 462, 0, 463, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 466, 0, 0, 467, 468, 0, 0, 0, 469, 0, 0, 470, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0,
    475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 479, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0,
    483, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 488, 0, 489, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 492,
    0, 0, 0, 493, 0, 494, 0, 0, 0, 495, 0, 0, 496, 0, 497, 0, 498, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 504, 0, 505, 0, 506, 0, 0, 0, 0, 0,
    0, 507, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 513, 0, 514, 0, 515, 0, 0,
    0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 522, 0, 523, 0,
    524, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0, 530, 0,
    0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 532, 0, 0, 533, 534, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0,
    0, 0, 0, 539, 540, 0, 0, 0, 541, 0, 0, 542, 0, 543, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 547, 0, 0, 548,
    0, 549, 550, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 555, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557,
    0, 0, 558, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0,
    0, 563, 0, 564, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0,
    0, 568, 0, 569, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 574, 0, 575, 0, 576, 0, 0, 0,
    0, 0, 577, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0,
    581, 0, 0, 582, 0, 583, 0, 584, 0, 0, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 590, 0, 591, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 595, 0, 596, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 603, 0, 604, 0, 605, 0, 0, 0, 0, 0,
    606, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0,
    0, 611, 0, 612, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 615, 0, 0, 0, 616, 0, 617, 0, 0, 0, 618, 0, 0, 619, 0, 620, 0, 621,
    0, 0, 0, 0, 0, 622, 0, 0, 623, 0, 0, 0, 624, 0, 625, 0, 0, 0, 626, 0, 0, 627, 0, 628, 0, 629, 0, 0, 0, 0, 0, 630,
    0, 0, 631, 0, 0, 0, 632, 0, 633, 0, 0, 0, 634, 0, 0, 635, 0, 636, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 0, 639, 0, 0,
    0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 641, 0, 642, 643, 0, 644, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 647,
    0, 0, 0, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 653, 0, 0, 0, 654, 0,
    0, 0, 655, 0, 656, 0, 657, 0, 0, 0, 658, 0, 659, 660, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    662, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 665, 0, 0, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 668,
    0, 669, 0, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 674, 0, 0, 0, 0, 675, 0, 0,
    0, 0, 0, 676, 0, 677, 0, 0, 0, 0, 678, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 681, 682, 0, 683, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 686, 0, 687, 0,
    0, 0, 688, 689, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 691, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0,
    0, 694, 695, 0, 0, 0, 696, 0, 0, 697, 0, 698, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 703, 0, 0, 0, 0, 704, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0,
    0, 0, 707, 0, 0, 0, 708, 0, 709, 0, 0, 0, 0, 710, 0, 0, 0, 711, 712, 0, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 715,
    0, 716, 0, 0, 0, 0, 717, 0, 0, 0, 718, 719, 0, 0, 0, 0, 720, 0, 0, 0, 721, 0, 0, 0, 722, 0, 723, 0, 0, 0, 0, 724,
    0, 0, 0, 725, 726, 0, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 730, 0, 0,
    0, 0, 731, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 733, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 737,
    0, 738, 0, 0, 0, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 741, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 0, 744, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 746, 747, 0, 748, 0, 749,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 0, 0, 0, 753, 0, 754, 755, 0, 0, 0,
    0, 0, 0, 0, 0, 756, 0, 757, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 760, 761, 0, 0, 0, 762,
};
void recomp_unit_0119_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089E0000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0119[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089E0000;
    case 2u: goto L_089E0014;
    case 3u: goto L_089E0024;
    case 4u: goto L_089E003C;
    case 5u: goto L_089E0048;
    case 6u: goto L_089E0060;
    case 7u: goto L_089E0068;
    case 8u: goto L_089E0084;
    case 9u: goto L_089E0094;
    case 10u: goto L_089E00A4;
    case 11u: goto L_089E00D8;
    case 12u: goto L_089E00E0;
    case 13u: goto L_089E00FC;
    case 14u: goto L_089E010C;
    case 15u: goto L_089E0164;
    case 16u: goto L_089E016C;
    case 17u: goto L_089E0188;
    case 18u: goto L_089E0198;
    case 19u: goto L_089E01A8;
    case 20u: goto L_089E01DC;
    case 21u: goto L_089E01E4;
    case 22u: goto L_089E0200;
    case 23u: goto L_089E0210;
    case 24u: goto L_089E0268;
    case 25u: goto L_089E0270;
    case 26u: goto L_089E028C;
    case 27u: goto L_089E029C;
    case 28u: goto L_089E02F4;
    case 29u: goto L_089E02FC;
    case 30u: goto L_089E0318;
    case 31u: goto L_089E0328;
    case 32u: goto L_089E0338;
    case 33u: goto L_089E036C;
    case 34u: goto L_089E0374;
    case 35u: goto L_089E0390;
    case 36u: goto L_089E03A0;
    case 37u: goto L_089E03F8;
    case 38u: goto L_089E0400;
    case 39u: goto L_089E041C;
    case 40u: goto L_089E042C;
    case 41u: goto L_089E043C;
    case 42u: goto L_089E0470;
    case 43u: goto L_089E0478;
    case 44u: goto L_089E0494;
    case 45u: goto L_089E04A4;
    case 46u: goto L_089E04FC;
    case 47u: goto L_089E0504;
    case 48u: goto L_089E0520;
    case 49u: goto L_089E0530;
    case 50u: goto L_089E0544;
    case 51u: goto L_089E0578;
    case 52u: goto L_089E0580;
    case 53u: goto L_089E059C;
    case 54u: goto L_089E05AC;
    case 55u: goto L_089E05C0;
    case 56u: goto L_089E05F4;
    case 57u: goto L_089E05FC;
    case 58u: goto L_089E0618;
    case 59u: goto L_089E0628;
    case 60u: goto L_089E063C;
    case 61u: goto L_089E0670;
    case 62u: goto L_089E0678;
    case 63u: goto L_089E0694;
    case 64u: goto L_089E06A4;
    case 65u: goto L_089E06B8;
    case 66u: goto L_089E06EC;
    case 67u: goto L_089E06F4;
    case 68u: goto L_089E0710;
    case 69u: goto L_089E0720;
    case 70u: goto L_089E0734;
    case 71u: goto L_089E0768;
    case 72u: goto L_089E0770;
    case 73u: goto L_089E078C;
    case 74u: goto L_089E079C;
    case 75u: goto L_089E07BC;
    case 76u: goto L_089E07C8;
    case 77u: goto L_089E07D8;
    case 78u: goto L_089E07E8;
    case 79u: goto L_089E0810;
    case 80u: goto L_089E0828;
    case 81u: goto L_089E0830;
    case 82u: goto L_089E0878;
    case 83u: goto L_089E0880;
    case 84u: goto L_089E089C;
    case 85u: goto L_089E08AC;
    case 86u: goto L_089E08BC;
    case 87u: goto L_089E08CC;
    case 88u: goto L_089E08D4;
    case 89u: goto L_089E08F0;
    case 90u: goto L_089E0900;
    case 91u: goto L_089E0934;
    case 92u: goto L_089E093C;
    case 93u: goto L_089E0954;
    case 94u: goto L_089E0964;
    case 95u: goto L_089E096C;
    case 96u: goto L_089E0974;
    case 97u: goto L_089E0990;
    case 98u: goto L_089E09A0;
    case 99u: goto L_089E09E8;
    case 100u: goto L_089E09F0;
    case 101u: goto L_089E0A0C;
    case 102u: goto L_089E0A38;
    case 103u: goto L_089E0A40;
    case 104u: goto L_089E0A50;
    case 105u: goto L_089E0A5C;
    case 106u: goto L_089E0A68;
    case 107u: goto L_089E0A70;
    case 108u: goto L_089E0A74;
    case 109u: goto L_089E0A80;
    case 110u: goto L_089E0A98;
    case 111u: goto L_089E0AC4;
    case 112u: goto L_089E0AF8;
    case 113u: goto L_089E0B00;
    case 114u: goto L_089E0B10;
    case 115u: goto L_089E0B1C;
    case 116u: goto L_089E0B28;
    case 117u: goto L_089E0B30;
    case 118u: goto L_089E0B34;
    case 119u: goto L_089E0B40;
    case 120u: goto L_089E0B58;
    case 121u: goto L_089E0B84;
    case 122u: goto L_089E0BB4;
    case 123u: goto L_089E0BBC;
    case 124u: goto L_089E0BCC;
    case 125u: goto L_089E0BD8;
    case 126u: goto L_089E0BE4;
    case 127u: goto L_089E0BEC;
    case 128u: goto L_089E0BF0;
    case 129u: goto L_089E0BFC;
    case 130u: goto L_089E0C14;
    case 131u: goto L_089E0C40;
    case 132u: goto L_089E0C78;
    case 133u: goto L_089E0C80;
    case 134u: goto L_089E0C90;
    case 135u: goto L_089E0C9C;
    case 136u: goto L_089E0CA8;
    case 137u: goto L_089E0CB0;
    case 138u: goto L_089E0CB4;
    case 139u: goto L_089E0CC0;
    case 140u: goto L_089E0CD8;
    case 141u: goto L_089E0D04;
    case 142u: goto L_089E0D34;
    case 143u: goto L_089E0D3C;
    case 144u: goto L_089E0D58;
    case 145u: goto L_089E0D7C;
    case 146u: goto L_089E0D88;
    case 147u: goto L_089E0D98;
    case 148u: goto L_089E0DA4;
    case 149u: goto L_089E0DB4;
    case 150u: goto L_089E0DC0;
    case 151u: goto L_089E0DF0;
    case 152u: goto L_089E0DF8;
    case 153u: goto L_089E0E14;
    case 154u: goto L_089E0E38;
    case 155u: goto L_089E0E44;
    case 156u: goto L_089E0E54;
    case 157u: goto L_089E0E60;
    case 158u: goto L_089E0E70;
    case 159u: goto L_089E0E7C;
    case 160u: goto L_089E0EAC;
    case 161u: goto L_089E0EB4;
    case 162u: goto L_089E0ED0;
    case 163u: goto L_089E0EE0;
    case 164u: goto L_089E0EF8;
    case 165u: goto L_089E0F00;
    case 166u: goto L_089E0F1C;
    case 167u: goto L_089E0F2C;
    case 168u: goto L_089E0F44;
    case 169u: goto L_089E0F4C;
    case 170u: goto L_089E0F64;
    case 171u: goto L_089E0F78;
    case 172u: goto L_089E0F94;
    case 173u: goto L_089E0FA4;
    case 174u: goto L_089E0FB0;
    case 175u: goto L_089E0FC8;
    case 176u: goto L_089E0FE0;
    case 177u: goto L_089E0FF4;
    case 178u: goto L_089E1010;
    case 179u: goto L_089E101C;
    case 180u: goto L_089E1020;
    case 181u: goto L_089E1028;
    case 182u: goto L_089E1040;
    case 183u: goto L_089E1050;
    case 184u: goto L_089E105C;
    case 185u: goto L_089E1078;
    case 186u: goto L_089E109C;
    case 187u: goto L_089E10A8;
    case 188u: goto L_089E10B8;
    case 189u: goto L_089E10C4;
    case 190u: goto L_089E1128;
    case 191u: goto L_089E1130;
    case 192u: goto L_089E114C;
    case 193u: goto L_089E1158;
    case 194u: goto L_089E1160;
    case 195u: goto L_089E1178;
    case 196u: goto L_089E1180;
    case 197u: goto L_089E1188;
    case 198u: goto L_089E11A0;
    case 199u: goto L_089E11B0;
    case 200u: goto L_089E11BC;
    case 201u: goto L_089E11C4;
    case 202u: goto L_089E11C8;
    case 203u: goto L_089E11EC;
    case 204u: goto L_089E11F4;
    case 205u: goto L_089E1210;
    case 206u: goto L_089E1224;
    case 207u: goto L_089E1240;
    case 208u: goto L_089E1244;
    case 209u: goto L_089E124C;
    case 210u: goto L_089E1250;
    case 211u: goto L_089E127C;
    case 212u: goto L_089E1370;
    case 213u: goto L_089E1410;
    case 214u: goto L_089E143C;
    case 215u: goto L_089E1454;
    case 216u: goto L_089E1468;
    case 217u: goto L_089E1470;
    case 218u: goto L_089E147C;
    case 219u: goto L_089E14AC;
    case 220u: goto L_089E14B4;
    case 221u: goto L_089E14BC;
    case 222u: goto L_089E14C4;
    case 223u: goto L_089E1510;
    case 224u: goto L_089E151C;
    case 225u: goto L_089E154C;
    case 226u: goto L_089E1560;
    case 227u: goto L_089E1584;
    case 228u: goto L_089E15A4;
    case 229u: goto L_089E15B0;
    case 230u: goto L_089E15B8;
    case 231u: goto L_089E15C8;
    case 232u: goto L_089E15F4;
    case 233u: goto L_089E1600;
    case 234u: goto L_089E1610;
    case 235u: goto L_089E1620;
    case 236u: goto L_089E1628;
    case 237u: goto L_089E1644;
    case 238u: goto L_089E1650;
    case 239u: goto L_089E16B0;
    case 240u: goto L_089E16BC;
    case 241u: goto L_089E16C0;
    case 242u: goto L_089E16D4;
    case 243u: goto L_089E16F4;
    case 244u: goto L_089E16FC;
    case 245u: goto L_089E1718;
    case 246u: goto L_089E1758;
    case 247u: goto L_089E1764;
    case 248u: goto L_089E1798;
    case 249u: goto L_089E17A4;
    case 250u: goto L_089E17C0;
    case 251u: goto L_089E1804;
    case 252u: goto L_089E1818;
    case 253u: goto L_089E1834;
    case 254u: goto L_089E1888;
    case 255u: goto L_089E1890;
    case 256u: goto L_089E18A8;
    case 257u: goto L_089E18B0;
    case 258u: goto L_089E18BC;
    case 259u: goto L_089E18CC;
    case 260u: goto L_089E1900;
    case 261u: goto L_089E1914;
    case 262u: goto L_089E191C;
    case 263u: goto L_089E1924;
    case 264u: goto L_089E1940;
    case 265u: goto L_089E1948;
    case 266u: goto L_089E1954;
    case 267u: goto L_089E195C;
    case 268u: goto L_089E1964;
    case 269u: goto L_089E1980;
    case 270u: goto L_089E1994;
    case 271u: goto L_089E199C;
    case 272u: goto L_089E19A4;
    case 273u: goto L_089E19AC;
    case 274u: goto L_089E19B4;
    case 275u: goto L_089E19D0;
    case 276u: goto L_089E19D8;
    case 277u: goto L_089E19E4;
    case 278u: goto L_089E19EC;
    case 279u: goto L_089E19F4;
    case 280u: goto L_089E1A10;
    case 281u: goto L_089E1A18;
    case 282u: goto L_089E1A30;
    case 283u: goto L_089E1A38;
    case 284u: goto L_089E1A40;
    case 285u: goto L_089E1A54;
    case 286u: goto L_089E1A5C;
    case 287u: goto L_089E1A68;
    case 288u: goto L_089E1A70;
    case 289u: goto L_089E1A78;
    case 290u: goto L_089E1A80;
    case 291u: goto L_089E1A90;
    case 292u: goto L_089E1A98;
    case 293u: goto L_089E1AA0;
    case 294u: goto L_089E1AA8;
    case 295u: goto L_089E1AB0;
    case 296u: goto L_089E1AC4;
    case 297u: goto L_089E1ACC;
    case 298u: goto L_089E1AD8;
    case 299u: goto L_089E1AE0;
    case 300u: goto L_089E1AE8;
    case 301u: goto L_089E1AF4;
    case 302u: goto L_089E1AFC;
    case 303u: goto L_089E1B24;
    case 304u: goto L_089E1B40;
    case 305u: goto L_089E1B48;
    case 306u: goto L_089E1B54;
    case 307u: goto L_089E1B68;
    case 308u: goto L_089E1B84;
    case 309u: goto L_089E1B94;
    case 310u: goto L_089E1BA8;
    case 311u: goto L_089E1BB8;
    case 312u: goto L_089E1BCC;
    case 313u: goto L_089E1BD4;
    case 314u: goto L_089E1C28;
    case 315u: goto L_089E1C44;
    case 316u: goto L_089E1C60;
    case 317u: goto L_089E1C70;
    case 318u: goto L_089E1CA8;
    case 319u: goto L_089E1CBC;
    case 320u: goto L_089E1CC0;
    case 321u: goto L_089E1CE4;
    case 322u: goto L_089E1CEC;
    case 323u: goto L_089E1D08;
    case 324u: goto L_089E1D1C;
    case 325u: goto L_089E1D38;
    case 326u: goto L_089E1D3C;
    case 327u: goto L_089E1D4C;
    case 328u: goto L_089E1D58;
    case 329u: goto L_089E1D60;
    case 330u: goto L_089E1D68;
    case 331u: goto L_089E1D80;
    case 332u: goto L_089E1D90;
    case 333u: goto L_089E1DB0;
    case 334u: goto L_089E1DC0;
    case 335u: goto L_089E1DCC;
    case 336u: goto L_089E1DD4;
    case 337u: goto L_089E1DDC;
    case 338u: goto L_089E1DF4;
    case 339u: goto L_089E1E38;
    case 340u: goto L_089E1E48;
    case 341u: goto L_089E1E54;
    case 342u: goto L_089E1E5C;
    case 343u: goto L_089E1E64;
    case 344u: goto L_089E1E80;
    case 345u: goto L_089E1E90;
    case 346u: goto L_089E1E9C;
    case 347u: goto L_089E1EA8;
    case 348u: goto L_089E1EAC;
    case 349u: goto L_089E1EBC;
    case 350u: goto L_089E1EC8;
    case 351u: goto L_089E1ED0;
    case 352u: goto L_089E1ED8;
    case 353u: goto L_089E1EF8;
    case 354u: goto L_089E1F1C;
    case 355u: goto L_089E1F30;
    case 356u: goto L_089E1F3C;
    case 357u: goto L_089E1F4C;
    case 358u: goto L_089E1F54;
    case 359u: goto L_089E1F58;
    case 360u: goto L_089E1F7C;
    case 361u: goto L_089E1F8C;
    case 362u: goto L_089E1F98;
    case 363u: goto L_089E1FA8;
    case 364u: goto L_089E1FB4;
    case 365u: goto L_089E1FBC;
    case 366u: goto L_089E1FC4;
    case 367u: goto L_089E1FE0;
    case 368u: goto L_089E1FF0;
    case 369u: goto L_089E2020;
    case 370u: goto L_089E2034;
    case 371u: goto L_089E2044;
    case 372u: goto L_089E2050;
    case 373u: goto L_089E2058;
    case 374u: goto L_089E2060;
    case 375u: goto L_089E207C;
    case 376u: goto L_089E208C;
    case 377u: goto L_089E20BC;
    case 378u: goto L_089E20D0;
    case 379u: goto L_089E20E0;
    case 380u: goto L_089E20EC;
    case 381u: goto L_089E20F4;
    case 382u: goto L_089E20FC;
    case 383u: goto L_089E2114;
    case 384u: goto L_089E2128;
    case 385u: goto L_089E2130;
    case 386u: goto L_089E213C;
    case 387u: goto L_089E2158;
    case 388u: goto L_089E2160;
    case 389u: goto L_089E218C;
    case 390u: goto L_089E2194;
    case 391u: goto L_089E219C;
    case 392u: goto L_089E21A8;
    case 393u: goto L_089E21B0;
    case 394u: goto L_089E21BC;
    case 395u: goto L_089E21CC;
    case 396u: goto L_089E21E4;
    case 397u: goto L_089E21F4;
    case 398u: goto L_089E2204;
    case 399u: goto L_089E2224;
    case 400u: goto L_089E222C;
    case 401u: goto L_089E223C;
    case 402u: goto L_089E2270;
    case 403u: goto L_089E2284;
    case 404u: goto L_089E228C;
    case 405u: goto L_089E22A4;
    case 406u: goto L_089E22B4;
    case 407u: goto L_089E22C0;
    case 408u: goto L_089E22C8;
    case 409u: goto L_089E22D0;
    case 410u: goto L_089E22E8;
    case 411u: goto L_089E22FC;
    case 412u: goto L_089E2304;
    case 413u: goto L_089E2308;
    case 414u: goto L_089E232C;
    case 415u: goto L_089E2334;
    case 416u: goto L_089E2350;
    case 417u: goto L_089E2364;
    case 418u: goto L_089E2380;
    case 419u: goto L_089E2384;
    case 420u: goto L_089E2394;
    case 421u: goto L_089E23A0;
    case 422u: goto L_089E23A8;
    case 423u: goto L_089E23B0;
    case 424u: goto L_089E23C8;
    case 425u: goto L_089E2400;
    case 426u: goto L_089E241C;
    case 427u: goto L_089E2424;
    case 428u: goto L_089E2458;
    case 429u: goto L_089E2474;
    case 430u: goto L_089E2484;
    case 431u: goto L_089E2490;
    case 432u: goto L_089E2498;
    case 433u: goto L_089E24A0;
    case 434u: goto L_089E24B8;
    case 435u: goto L_089E24C4;
    case 436u: goto L_089E24E8;
    case 437u: goto L_089E2510;
    case 438u: goto L_089E251C;
    case 439u: goto L_089E2528;
    case 440u: goto L_089E2538;
    case 441u: goto L_089E2540;
    case 442u: goto L_089E254C;
    case 443u: goto L_089E2584;
    case 444u: goto L_089E2598;
    case 445u: goto L_089E25A8;
    case 446u: goto L_089E25B4;
    case 447u: goto L_089E25BC;
    case 448u: goto L_089E25C4;
    case 449u: goto L_089E25E0;
    case 450u: goto L_089E25F0;
    case 451u: goto L_089E2600;
    case 452u: goto L_089E260C;
    case 453u: goto L_089E261C;
    case 454u: goto L_089E2628;
    case 455u: goto L_089E2630;
    case 456u: goto L_089E2638;
    case 457u: goto L_089E2654;
    case 458u: goto L_089E2684;
    case 459u: goto L_089E2690;
    case 460u: goto L_089E2694;
    case 461u: goto L_089E26A4;
    case 462u: goto L_089E26B0;
    case 463u: goto L_089E26B8;
    case 464u: goto L_089E26C0;
    case 465u: goto L_089E26DC;
    case 466u: goto L_089E270C;
    case 467u: goto L_089E2718;
    case 468u: goto L_089E271C;
    case 469u: goto L_089E272C;
    case 470u: goto L_089E2738;
    case 471u: goto L_089E2740;
    case 472u: goto L_089E2748;
    case 473u: goto L_089E2764;
    case 474u: goto L_089E2774;
    case 475u: goto L_089E2780;
    case 476u: goto L_089E2794;
    case 477u: goto L_089E27A8;
    case 478u: goto L_089E27B8;
    case 479u: goto L_089E27C4;
    case 480u: goto L_089E27CC;
    case 481u: goto L_089E27D4;
    case 482u: goto L_089E27F0;
    case 483u: goto L_089E2800;
    case 484u: goto L_089E280C;
    case 485u: goto L_089E281C;
    case 486u: goto L_089E282C;
    case 487u: goto L_089E283C;
    case 488u: goto L_089E2848;
    case 489u: goto L_089E2850;
    case 490u: goto L_089E2858;
    case 491u: goto L_089E2870;
    case 492u: goto L_089E287C;
    case 493u: goto L_089E288C;
    case 494u: goto L_089E2894;
    case 495u: goto L_089E28A4;
    case 496u: goto L_089E28B0;
    case 497u: goto L_089E28B8;
    case 498u: goto L_089E28C0;
    case 499u: goto L_089E28DC;
    case 500u: goto L_089E290C;
    case 501u: goto L_089E2924;
    case 502u: goto L_089E293C;
    case 503u: goto L_089E294C;
    case 504u: goto L_089E2958;
    case 505u: goto L_089E2960;
    case 506u: goto L_089E2968;
    case 507u: goto L_089E2984;
    case 508u: goto L_089E2994;
    case 509u: goto L_089E29A0;
    case 510u: goto L_089E29B4;
    case 511u: goto L_089E29C8;
    case 512u: goto L_089E29D8;
    case 513u: goto L_089E29E4;
    case 514u: goto L_089E29EC;
    case 515u: goto L_089E29F4;
    case 516u: goto L_089E2A10;
    case 517u: goto L_089E2A20;
    case 518u: goto L_089E2A2C;
    case 519u: goto L_089E2A40;
    case 520u: goto L_089E2A54;
    case 521u: goto L_089E2A64;
    case 522u: goto L_089E2A70;
    case 523u: goto L_089E2A78;
    case 524u: goto L_089E2A80;
    case 525u: goto L_089E2A9C;
    case 526u: goto L_089E2AC0;
    case 527u: goto L_089E2ACC;
    case 528u: goto L_089E2ADC;
    case 529u: goto L_089E2AE8;
    case 530u: goto L_089E2AF8;
    case 531u: goto L_089E2B08;
    case 532u: goto L_089E2B84;
    case 533u: goto L_089E2B90;
    case 534u: goto L_089E2B94;
    case 535u: goto L_089E2BB8;
    case 536u: goto L_089E2BC0;
    case 537u: goto L_089E2BDC;
    case 538u: goto L_089E2BF0;
    case 539u: goto L_089E2C0C;
    case 540u: goto L_089E2C10;
    case 541u: goto L_089E2C20;
    case 542u: goto L_089E2C2C;
    case 543u: goto L_089E2C34;
    case 544u: goto L_089E2C3C;
    case 545u: goto L_089E2C54;
    case 546u: goto L_089E2C64;
    case 547u: goto L_089E2C70;
    case 548u: goto L_089E2C7C;
    case 549u: goto L_089E2C84;
    case 550u: goto L_089E2C88;
    case 551u: goto L_089E2C94;
    case 552u: goto L_089E2CAC;
    case 553u: goto L_089E2D08;
    case 554u: goto L_089E2D20;
    case 555u: goto L_089E2D30;
    case 556u: goto L_089E2D34;
    case 557u: goto L_089E2D7C;
    case 558u: goto L_089E2D88;
    case 559u: goto L_089E2D8C;
    case 560u: goto L_089E2DCC;
    case 561u: goto L_089E2DD0;
    case 562u: goto L_089E2DF8;
    case 563u: goto L_089E2E04;
    case 564u: goto L_089E2E0C;
    case 565u: goto L_089E2E14;
    case 566u: goto L_089E2E30;
    case 567u: goto L_089E2E78;
    case 568u: goto L_089E2E84;
    case 569u: goto L_089E2E8C;
    case 570u: goto L_089E2E94;
    case 571u: goto L_089E2EB0;
    case 572u: goto L_089E2ED8;
    case 573u: goto L_089E2F54;
    case 574u: goto L_089E2F60;
    case 575u: goto L_089E2F68;
    case 576u: goto L_089E2F70;
    case 577u: goto L_089E2F88;
    case 578u: goto L_089E2F94;
    case 579u: goto L_089E2FC8;
    case 580u: goto L_089E2FF0;
    case 581u: goto L_089E3000;
    case 582u: goto L_089E300C;
    case 583u: goto L_089E3014;
    case 584u: goto L_089E301C;
    case 585u: goto L_089E3034;
    case 586u: goto L_089E3040;
    case 587u: goto L_089E3074;
    case 588u: goto L_089E309C;
    case 589u: goto L_089E30AC;
    case 590u: goto L_089E30B8;
    case 591u: goto L_089E30C0;
    case 592u: goto L_089E30C8;
    case 593u: goto L_089E30E0;
    case 594u: goto L_089E3120;
    case 595u: goto L_089E312C;
    case 596u: goto L_089E3134;
    case 597u: goto L_089E313C;
    case 598u: goto L_089E3154;
    case 599u: goto L_089E3160;
    case 600u: goto L_089E3194;
    case 601u: goto L_089E31BC;
    case 602u: goto L_089E31CC;
    case 603u: goto L_089E31D8;
    case 604u: goto L_089E31E0;
    case 605u: goto L_089E31E8;
    case 606u: goto L_089E3200;
    case 607u: goto L_089E320C;
    case 608u: goto L_089E3240;
    case 609u: goto L_089E3268;
    case 610u: goto L_089E3278;
    case 611u: goto L_089E3284;
    case 612u: goto L_089E328C;
    case 613u: goto L_089E3294;
    case 614u: goto L_089E32AC;
    case 615u: goto L_089E32B8;
    case 616u: goto L_089E32C8;
    case 617u: goto L_089E32D0;
    case 618u: goto L_089E32E0;
    case 619u: goto L_089E32EC;
    case 620u: goto L_089E32F4;
    case 621u: goto L_089E32FC;
    case 622u: goto L_089E3314;
    case 623u: goto L_089E3320;
    case 624u: goto L_089E3330;
    case 625u: goto L_089E3338;
    case 626u: goto L_089E3348;
    case 627u: goto L_089E3354;
    case 628u: goto L_089E335C;
    case 629u: goto L_089E3364;
    case 630u: goto L_089E337C;
    case 631u: goto L_089E3388;
    case 632u: goto L_089E3398;
    case 633u: goto L_089E33A0;
    case 634u: goto L_089E33B0;
    case 635u: goto L_089E33BC;
    case 636u: goto L_089E33C4;
    case 637u: goto L_089E33CC;
    case 638u: goto L_089E33E4;
    case 639u: goto L_089E33F4;
    case 640u: goto L_089E3414;
    case 641u: goto L_089E3428;
    case 642u: goto L_089E3430;
    case 643u: goto L_089E3434;
    case 644u: goto L_089E343C;
    case 645u: goto L_089E3440;
    case 646u: goto L_089E3470;
    case 647u: goto L_089E347C;
    case 648u: goto L_089E349C;
    case 649u: goto L_089E34A4;
    case 650u: goto L_089E34BC;
    case 651u: goto L_089E34C8;
    case 652u: goto L_089E34DC;
    case 653u: goto L_089E34E8;
    case 654u: goto L_089E34F8;
    case 655u: goto L_089E3508;
    case 656u: goto L_089E3510;
    case 657u: goto L_089E3518;
    case 658u: goto L_089E3528;
    case 659u: goto L_089E3530;
    case 660u: goto L_089E3534;
    case 661u: goto L_089E3548;
    case 662u: goto L_089E3580;
    case 663u: goto L_089E3594;
    case 664u: goto L_089E3734;
    case 665u: goto L_089E373C;
    case 666u: goto L_089E3750;
    case 667u: goto L_089E3764;
    case 668u: goto L_089E377C;
    case 669u: goto L_089E3784;
    case 670u: goto L_089E3798;
    case 671u: goto L_089E37AC;
    case 672u: goto L_089E37C4;
    case 673u: goto L_089E37CC;
    case 674u: goto L_089E37E0;
    case 675u: goto L_089E37F4;
    case 676u: goto L_089E380C;
    case 677u: goto L_089E3814;
    case 678u: goto L_089E3828;
    case 679u: goto L_089E383C;
    case 680u: goto L_089E38A4;
    case 681u: goto L_089E38B0;
    case 682u: goto L_089E38B4;
    case 683u: goto L_089E38BC;
    case 684u: goto L_089E38C4;
    case 685u: goto L_089E38E8;
    case 686u: goto L_089E38F0;
    case 687u: goto L_089E38F8;
    case 688u: goto L_089E3908;
    case 689u: goto L_089E390C;
    case 690u: goto L_089E3930;
    case 691u: goto L_089E3938;
    case 692u: goto L_089E3954;
    case 693u: goto L_089E3968;
    case 694u: goto L_089E3984;
    case 695u: goto L_089E3988;
    case 696u: goto L_089E3998;
    case 697u: goto L_089E39A4;
    case 698u: goto L_089E39AC;
    case 699u: goto L_089E39B4;
    case 700u: goto L_089E39D0;
    case 701u: goto L_089E39E0;
    case 702u: goto L_089E3A14;
    case 703u: goto L_089E3A28;
    case 704u: goto L_089E3A3C;
    case 705u: goto L_089E3A44;
    case 706u: goto L_089E3A78;
    case 707u: goto L_089E3A88;
    case 708u: goto L_089E3A98;
    case 709u: goto L_089E3AA0;
    case 710u: goto L_089E3AB4;
    case 711u: goto L_089E3AC4;
    case 712u: goto L_089E3AC8;
    case 713u: goto L_089E3ADC;
    case 714u: goto L_089E3AEC;
    case 715u: goto L_089E3AFC;
    case 716u: goto L_089E3B04;
    case 717u: goto L_089E3B18;
    case 718u: goto L_089E3B28;
    case 719u: goto L_089E3B2C;
    case 720u: goto L_089E3B40;
    case 721u: goto L_089E3B50;
    case 722u: goto L_089E3B60;
    case 723u: goto L_089E3B68;
    case 724u: goto L_089E3B7C;
    case 725u: goto L_089E3B8C;
    case 726u: goto L_089E3B90;
    case 727u: goto L_089E3BA4;
    case 728u: goto L_089E3BB4;
    case 729u: goto L_089E3D6C;
    case 730u: goto L_089E3D74;
    case 731u: goto L_089E3D88;
    case 732u: goto L_089E3D9C;
    case 733u: goto L_089E3DB4;
    case 734u: goto L_089E3DBC;
    case 735u: goto L_089E3DD0;
    case 736u: goto L_089E3DE4;
    case 737u: goto L_089E3DFC;
    case 738u: goto L_089E3E04;
    case 739u: goto L_089E3E18;
    case 740u: goto L_089E3E2C;
    case 741u: goto L_089E3E44;
    case 742u: goto L_089E3E4C;
    case 743u: goto L_089E3E60;
    case 744u: goto L_089E3E74;
    case 745u: goto L_089E3EDC;
    case 746u: goto L_089E3EE8;
    case 747u: goto L_089E3EEC;
    case 748u: goto L_089E3EF4;
    case 749u: goto L_089E3EFC;
    case 750u: goto L_089E3F28;
    case 751u: goto L_089E3F3C;
    case 752u: goto L_089E3F50;
    case 753u: goto L_089E3F64;
    case 754u: goto L_089E3F6C;
    case 755u: goto L_089E3F70;
    case 756u: goto L_089E3F94;
    case 757u: goto L_089E3F9C;
    case 758u: goto L_089E3FB8;
    case 759u: goto L_089E3FCC;
    case 760u: goto L_089E3FE8;
    case 761u: goto L_089E3FEC;
    case 762u: goto L_089E3FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089E0000:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089E0014u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 725u, 0x08887A68u>(ctx, &aot_mem) && ctx.pc == 0x089E0014u) goto L_089E0014;
    return;
L_089E0014:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x089E0024u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x089E0024u) goto L_089E0024;
    return;
L_089E0024:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E003Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089E003Cu) goto L_089E003C;
    return;
L_089E003C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0060;
      }
      goto L_089E0048;
    }
L_089E0048:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E0060u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 447u, 0x08957150u>(ctx, &aot_mem) && ctx.pc == 0x089E0060u) goto L_089E0060;
    return;
L_089E0060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E0068;
    }
L_089E0068:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E0084u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0084u) goto L_089E0084;
    return;
L_089E0084:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[31] = (0x089E0094u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E0094u) goto L_089E0094;
    return;
L_089E0094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E00A4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E00A4u) goto L_089E00A4;
    return;
L_089E00A4:
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
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x089E00D8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089E00D8u) goto L_089E00D8;
    return;
L_089E00D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E00E0;
    }
L_089E00E0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E00FCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E00FCu) goto L_089E00FC;
    return;
L_089E00FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E010Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E010Cu) goto L_089E010C;
    return;
L_089E010C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 31u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E0164u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089E0164u) goto L_089E0164;
    return;
L_089E0164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E016C;
    }
L_089E016C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E0188u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0188u) goto L_089E0188;
    return;
L_089E0188:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[31] = (0x089E0198u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E0198u) goto L_089E0198;
    return;
L_089E0198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E01A8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E01A8u) goto L_089E01A8;
    return;
L_089E01A8:
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
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x089E01DCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089E01DCu) goto L_089E01DC;
    return;
L_089E01DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E01E4;
    }
L_089E01E4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E0200u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0200u) goto L_089E0200;
    return;
L_089E0200:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E0210u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E0210u) goto L_089E0210;
    return;
L_089E0210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 31u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E0268u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089E0268u) goto L_089E0268;
    return;
L_089E0268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E0270;
    }
L_089E0270:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E028Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E028Cu) goto L_089E028C;
    return;
L_089E028C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E029Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E029Cu) goto L_089E029C;
    return;
L_089E029C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 31u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E02F4u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089E02F4u) goto L_089E02F4;
    return;
L_089E02F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E02FC;
    }
L_089E02FC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E0318u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0318u) goto L_089E0318;
    return;
L_089E0318:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[31] = (0x089E0328u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E0328u) goto L_089E0328;
    return;
L_089E0328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E0338u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E0338u) goto L_089E0338;
    return;
L_089E0338:
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
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[31] = (0x089E036Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089E036Cu) goto L_089E036C;
    return;
L_089E036C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E0374;
    }
L_089E0374:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E0390u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0390u) goto L_089E0390;
    return;
L_089E0390:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E03A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E03A0u) goto L_089E03A0;
    return;
L_089E03A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 31u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E03F8u);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089E03F8u) goto L_089E03F8;
    return;
L_089E03F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E0400;
    }
L_089E0400:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E041Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E041Cu) goto L_089E041C;
    return;
L_089E041C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[31] = (0x089E042Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E042Cu) goto L_089E042C;
    return;
L_089E042C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E043Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E043Cu) goto L_089E043C;
    return;
L_089E043C:
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
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[31] = (0x089E0470u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089E0470u) goto L_089E0470;
    return;
L_089E0470:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E0478;
    }
L_089E0478:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E0494u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0494u) goto L_089E0494;
    return;
L_089E0494:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E04A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E04A4u) goto L_089E04A4;
    return;
L_089E04A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 31u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E04FCu);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089E04FCu) goto L_089E04FC;
    return;
L_089E04FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E0504;
    }
L_089E0504:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E0520u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0520u) goto L_089E0520;
    return;
L_089E0520:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E0530u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E0530u) goto L_089E0530;
    return;
L_089E0530:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E0544u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E0544u) goto L_089E0544;
    return;
L_089E0544:
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
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x089E0578u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089E0578u) goto L_089E0578;
    return;
L_089E0578:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E0580;
    }
L_089E0580:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E059Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E059Cu) goto L_089E059C;
    return;
L_089E059C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E05ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E05ACu) goto L_089E05AC;
    return;
L_089E05AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E05C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E05C0u) goto L_089E05C0;
    return;
L_089E05C0:
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
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x089E05F4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089E05F4u) goto L_089E05F4;
    return;
L_089E05F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E05FC;
    }
L_089E05FC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E0618u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0618u) goto L_089E0618;
    return;
L_089E0618:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E0628u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E0628u) goto L_089E0628;
    return;
L_089E0628:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E063Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E063Cu) goto L_089E063C;
    return;
L_089E063C:
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
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x089E0670u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089E0670u) goto L_089E0670;
    return;
L_089E0670:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E0678;
    }
L_089E0678:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E0694u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0694u) goto L_089E0694;
    return;
L_089E0694:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E06A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E06A4u) goto L_089E06A4;
    return;
L_089E06A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E06B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089E06B8u) goto L_089E06B8;
    return;
L_089E06B8:
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
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[31] = (0x089E06ECu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089E06ECu) goto L_089E06EC;
    return;
L_089E06EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E06F4;
    }
L_089E06F4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E0710u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0710u) goto L_089E0710;
    return;
L_089E0710:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E0720u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E0720u) goto L_089E0720;
    return;
L_089E0720:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E0734u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E0734u) goto L_089E0734;
    return;
L_089E0734:
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
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[31] = (0x089E0768u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089E0768u) goto L_089E0768;
    return;
L_089E0768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E0770;
    }
L_089E0770:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x089E078Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E078Cu) goto L_089E078C;
    return;
L_089E078C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E079Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E079Cu) goto L_089E079C;
    return;
L_089E079C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089E07C8;
      }
      goto L_089E07BC;
    }
L_089E07BC:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_089E07C8;
L_089E07C8:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_089E07E8;
    }
    goto L_089E07D8;
L_089E07D8:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089E07E8;
L_089E07E8:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = ctx.fpr[13] + ctx.fpr[24];
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089E0810u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x089E0810u) goto L_089E0810;
    return;
L_089E0810:
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[24];
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[26];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089E0830;
      }
      goto L_089E0828;
    }
L_089E0828:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089E0830;
      }
      goto L_089E0830;
    }
L_089E0830:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E0878u);
    ctx.gpr[5] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1104u, 0x08893B84u>(ctx, &aot_mem) && ctx.pc == 0x089E0878u) goto L_089E0878;
    return;
L_089E0878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E0880;
    }
L_089E0880:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E089Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E089Cu) goto L_089E089C;
    return;
L_089E089C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[31] = (0x089E08ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E08ACu) goto L_089E08AC;
    return;
L_089E08AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E08BCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E08BCu) goto L_089E08BC;
    return;
L_089E08BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 29u);
    ctx.gpr[31] = (0x089E08CCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089E08CCu) goto L_089E08CC;
    return;
L_089E08CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E08D4;
    }
L_089E08D4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E08F0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E08F0u) goto L_089E08F0;
    return;
L_089E08F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E0900u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E0900u) goto L_089E0900;
    return;
L_089E0900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E0934u);
    ctx.gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x089E0934u) goto L_089E0934;
    return;
L_089E0934:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E093C;
    }
L_089E093C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E0954u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0954u) goto L_089E0954;
    return;
L_089E0954:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E0964u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E0964u) goto L_089E0964;
    return;
L_089E0964:
    ctx.gpr[31] = (0x089E096Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 556u, 0x08886D10u>(ctx, &aot_mem) && ctx.pc == 0x089E096Cu) goto L_089E096C;
    return;
L_089E096C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E0974;
    }
L_089E0974:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089E0990u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0990u) goto L_089E0990;
    return;
L_089E0990:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E09A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E09A0u) goto L_089E09A0;
    return;
L_089E09A0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E09E8u);
    ctx.gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1138u, 0x08893D90u>(ctx, &aot_mem) && ctx.pc == 0x089E09E8u) goto L_089E09E8;
    return;
L_089E09E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E09F0;
    }
L_089E09F0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089E0A0Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0A0Cu) goto L_089E0A0C;
    return;
L_089E0A0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x089E0A38u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 506u, 0x08ACE324u>(ctx, &aot_mem) && ctx.pc == 0x089E0A38u) goto L_089E0A38;
    return;
L_089E0A38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E0A40;
    }
L_089E0A40:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089E0A80;
    }
    goto L_089E0A50;
L_089E0A50:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089E0A5Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089E0A5Cu) goto L_089E0A5C;
    return;
L_089E0A5C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0A74;
      }
      goto L_089E0A68;
    }
L_089E0A68:
    ctx.gpr[31] = (0x089E0A70u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089E0A70u) goto L_089E0A70;
    return;
L_089E0A70:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089E0A74;
L_089E0A74:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089E0A80;
L_089E0A80:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089E0A98u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089E0A98u) goto L_089E0A98;
    return;
L_089E0A98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089E0AC4u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0AC4u) goto L_089E0AC4;
    return;
L_089E0AC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089E0AF8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 398u, 0x0887A628u>(ctx, &aot_mem) && ctx.pc == 0x089E0AF8u) goto L_089E0AF8;
    return;
L_089E0AF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E0B00;
    }
L_089E0B00:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089E0B40;
    }
    goto L_089E0B10;
L_089E0B10:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089E0B1Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089E0B1Cu) goto L_089E0B1C;
    return;
L_089E0B1C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0B34;
      }
      goto L_089E0B28;
    }
L_089E0B28:
    ctx.gpr[31] = (0x089E0B30u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089E0B30u) goto L_089E0B30;
    return;
L_089E0B30:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089E0B34;
L_089E0B34:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089E0B40;
L_089E0B40:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089E0B58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089E0B58u) goto L_089E0B58;
    return;
L_089E0B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089E0B84u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0B84u) goto L_089E0B84;
    return;
L_089E0B84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089E0BB4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 372u, 0x0887A178u>(ctx, &aot_mem) && ctx.pc == 0x089E0BB4u) goto L_089E0BB4;
    return;
L_089E0BB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E0BBC;
    }
L_089E0BBC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089E0BFC;
    }
    goto L_089E0BCC;
L_089E0BCC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089E0BD8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089E0BD8u) goto L_089E0BD8;
    return;
L_089E0BD8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0BF0;
      }
      goto L_089E0BE4;
    }
L_089E0BE4:
    ctx.gpr[31] = (0x089E0BECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089E0BECu) goto L_089E0BEC;
    return;
L_089E0BEC:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089E0BF0;
L_089E0BF0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089E0BFC;
L_089E0BFC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089E0C14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089E0C14u) goto L_089E0C14;
    return;
L_089E0C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089E0C40u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0C40u) goto L_089E0C40;
    return;
L_089E0C40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089E0C78u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 383u, 0x0887A2F8u>(ctx, &aot_mem) && ctx.pc == 0x089E0C78u) goto L_089E0C78;
    return;
L_089E0C78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E0C80;
    }
L_089E0C80:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089E0CC0;
    }
    goto L_089E0C90;
L_089E0C90:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089E0C9Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089E0C9Cu) goto L_089E0C9C;
    return;
L_089E0C9C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0CB4;
      }
      goto L_089E0CA8;
    }
L_089E0CA8:
    ctx.gpr[31] = (0x089E0CB0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089E0CB0u) goto L_089E0CB0;
    return;
L_089E0CB0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089E0CB4;
L_089E0CB4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089E0CC0;
L_089E0CC0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089E0CD8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089E0CD8u) goto L_089E0CD8;
    return;
L_089E0CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089E0D04u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0D04u) goto L_089E0D04;
    return;
L_089E0D04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089E0D34u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 389u, 0x0887A440u>(ctx, &aot_mem) && ctx.pc == 0x089E0D34u) goto L_089E0D34;
    return;
L_089E0D34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E0D3C;
    }
L_089E0D3C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x089E0D58u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0D58u) goto L_089E0D58;
    return;
L_089E0D58:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089E0D88;
      }
      goto L_089E0D7C;
    }
L_089E0D7C:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E0D88;
L_089E0D88:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E0DA4;
      }
      goto L_089E0D98;
    }
L_089E0D98:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E0DA4;
L_089E0DA4:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E0DC0;
      }
      goto L_089E0DB4;
    }
L_089E0DB4:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E0DC0;
L_089E0DC0:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x089E0DF0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 594u, 0x08976A84u>(ctx, &aot_mem) && ctx.pc == 0x089E0DF0u) goto L_089E0DF0;
    return;
L_089E0DF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E0DF8;
    }
L_089E0DF8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x089E0E14u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0E14u) goto L_089E0E14;
    return;
L_089E0E14:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089E0E44;
      }
      goto L_089E0E38;
    }
L_089E0E38:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E0E44;
L_089E0E44:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E0E60;
      }
      goto L_089E0E54;
    }
L_089E0E54:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E0E60;
L_089E0E60:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E0E7C;
      }
      goto L_089E0E70;
    }
L_089E0E70:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E0E7C;
L_089E0E7C:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u | 1u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x089E0EACu);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 594u, 0x08976A84u>(ctx, &aot_mem) && ctx.pc == 0x089E0EACu) goto L_089E0EAC;
    return;
L_089E0EAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E0EB4;
    }
L_089E0EB4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E0ED0u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0ED0u) goto L_089E0ED0;
    return;
L_089E0ED0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E0EE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E0EE0u) goto L_089E0EE0;
    return;
L_089E0EE0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(540)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E0EF8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089E0EF8u) goto L_089E0EF8;
    return;
L_089E0EF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E0F00;
    }
L_089E0F00:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E0F1Cu);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0F1Cu) goto L_089E0F1C;
    return;
L_089E0F1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E0F2Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E0F2Cu) goto L_089E0F2C;
    return;
L_089E0F2C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(544)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E0F44u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089E0F44u) goto L_089E0F44;
    return;
L_089E0F44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E0F4C;
    }
L_089E0F4C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E0F64u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0F64u) goto L_089E0F64;
    return;
L_089E0F64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E0F78;
    }
L_089E0F78:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E0F94u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E0F94u) goto L_089E0F94;
    return;
L_089E0F94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E0FA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E0FA4u) goto L_089E0FA4;
    return;
L_089E0FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E0FF4;
      }
      goto L_089E0FB0;
    }
L_089E0FB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089E0FC8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 283u, 0x08A89E94u>(ctx, &aot_mem) && ctx.pc == 0x089E0FC8u) goto L_089E0FC8;
    return;
L_089E0FC8:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[31] = (0x089E0FE0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 285u, 0x08A89EA4u>(ctx, &aot_mem) && ctx.pc == 0x089E0FE0u) goto L_089E0FE0;
    return;
L_089E0FE0:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089E1020;
      }
      goto L_089E0FF4;
    }
L_089E0FF4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089E1010u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 283u, 0x08A89E94u>(ctx, &aot_mem) && ctx.pc == 0x089E1010u) goto L_089E1010;
    return;
L_089E1010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[31] = (0x089E101Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 285u, 0x08A89EA4u>(ctx, &aot_mem) && ctx.pc == 0x089E101Cu) goto L_089E101C;
    return;
L_089E101C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089E1020;
L_089E1020:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E1028;
    }
L_089E1028:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E1040u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E1040u) goto L_089E1040;
    return;
L_089E1040:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E1050u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E1050u) goto L_089E1050;
    return;
L_089E1050:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(636), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E105C;
    }
L_089E105C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x089E1078u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E1078u) goto L_089E1078;
    return;
L_089E1078:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089E10A8;
      }
      goto L_089E109C;
    }
L_089E109C:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E10A8;
L_089E10A8:
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089E10C4;
      }
      goto L_089E10B8;
    }
L_089E10B8:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E10C4;
L_089E10C4:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[19] = ctx.fpr[19] / ctx.fpr[3];
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[31] = (0x089E1128u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 9u, 0x0897C1DCu>(ctx, &aot_mem) && ctx.pc == 0x089E1128u) goto L_089E1128;
    return;
L_089E1128:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E1130;
    }
L_089E1130:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E114Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E114Cu) goto L_089E114C;
    return;
L_089E114C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x089E1158u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 417u, 0x0897ABF8u>(ctx, &aot_mem) && ctx.pc == 0x089E1158u) goto L_089E1158;
    return;
L_089E1158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E1160;
    }
L_089E1160:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E1178u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E1178u) goto L_089E1178;
    return;
L_089E1178:
    ctx.gpr[31] = (0x089E1180u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 332u, 0x08ACD570u>(ctx, &aot_mem) && ctx.pc == 0x089E1180u) goto L_089E1180;
    return;
L_089E1180:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E1188;
    }
L_089E1188:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E11A0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E11A0u) goto L_089E11A0;
    return;
L_089E11A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E11B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E11B0u) goto L_089E11B0;
    return;
L_089E11B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(266)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E11C4;
      }
      goto L_089E11BC;
    }
L_089E11BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E11C8;
      }
      goto L_089E11C4;
    }
L_089E11C4:
    ctx.gpr[4] = (0u | 0u);
    goto L_089E11C8;
L_089E11C8:
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
          goto L_089E11F4;
      }
      goto L_089E11EC;
    }
L_089E11EC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E1244;
      }
      goto L_089E11F4;
    }
L_089E11F4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E1224;
    }
    goto L_089E1210;
L_089E1210:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E1244;
      }
      goto L_089E1224;
    }
L_089E1224:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1244;
      }
      goto L_089E1240;
    }
L_089E1240:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E1244;
L_089E1244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1250;
      }
      goto L_089E124C;
    }
L_089E124C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089E1250;
L_089E1250:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E127C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17508)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17512)));
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17504), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17484)));
    ctx.gpr[3] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-17472)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-17476)));
    ctx.gpr[24] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-17468), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-17460), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2229u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-17496), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-17500), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[11] = (15744u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[14] = (2229u << 16u);
    ctx.gpr[8] = (16281u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-17492), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[15] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-17480), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[25] = (2229u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(-17464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17456), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1370:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(3144));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(3208));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3208), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1410:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-23200));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (0u | 65534u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1454;
      }
      goto L_089E143C;
    }
L_089E143C:
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[2] = (ctx.gpr[5] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | ctx.gpr[2]);
      if (branch_taken) {
          goto L_089E1468;
      }
      goto L_089E1454;
    }
L_089E1454:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[2] = (ctx.gpr[5] << 16u);
    ctx.gpr[2] = (ctx.gpr[4] | ctx.gpr[2]);
    goto L_089E1468;
L_089E1468:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1470:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.gpr[5] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_089E14B4;
      }
      goto L_089E147C;
    }
L_089E147C:
    ctx.gpr[7] = (65535u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-23200));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] >> 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089E14BC;
      }
      goto L_089E14AC;
    }
L_089E14AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089E14BC;
      }
      goto L_089E14B4;
    }
L_089E14B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E14BC;
      }
      goto L_089E14BC;
    }
L_089E14BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E14C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[19] = (2277u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-23200));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (15820u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[17] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-17412));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    goto L_089E1510;
L_089E1510:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E154C;
      }
      goto L_089E151C;
    }
L_089E151C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-17412)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 228u);
    ctx.gpr[11] = (0u | 2048u);
    ctx.gpr[31] = (0x089E154Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 295u, 0x08825BFCu>(ctx, &aot_mem) && ctx.pc == 0x089E154Cu) goto L_089E154C;
    return;
L_089E154C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089E1510;
      }
      goto L_089E1560;
    }
L_089E1560:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
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
L_089E1584:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-23200));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    goto L_089E15A4;
L_089E15A4:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[8] < static_cast<std::uint32_t>(16) ? 1u : 0u);
      if (branch_taken) {
          goto L_089E15C8;
      }
      goto L_089E15B0;
    }
L_089E15B0:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E15C8;
      }
      goto L_089E15B8;
    }
L_089E15B8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089E15A4;
      }
      goto L_089E15C8;
    }
L_089E15C8:
    ctx.gpr[10] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089E15F4u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    goto L_089E1410;
L_089E15F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1600:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E1610u);
    // nop
    goto L_089E1470;
L_089E1610:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_089E1628;
      }
      goto L_089E1620;
    }
L_089E1620:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1644;
      }
      goto L_089E1628;
    }
L_089E1628:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23200));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    goto L_089E1644;
L_089E1644:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1650:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[20]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_089E16C0;
      }
      goto L_089E16B0;
    }
L_089E16B0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089E16BCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x089E16BCu) goto L_089E16BC;
    return;
L_089E16BC:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089E16C0;
L_089E16C0:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
      if (branch_taken) {
          goto L_089E16F4;
      }
      goto L_089E16D4;
    }
L_089E16D4:
    ctx.gpr[4] = (0u - ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5168));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_089E16F4;
L_089E16F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[4] = (0u - ctx.gpr[17]);
      if (branch_taken) {
          goto L_089E1718;
      }
      goto L_089E16FC;
    }
L_089E16FC:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5168));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_089E1718;
L_089E1718:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 16u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089E1758u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 226u, 0x088C15D4u>(ctx, &aot_mem) && ctx.pc == 0x089E1758u) goto L_089E1758;
    return;
L_089E1758:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E1798;
      }
      goto L_089E1764;
    }
L_089E1764:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20980)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 16u);
    ctx.gpr[31] = (0x089E1798u);
    ctx.gpr[10] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 256u, 0x088C19B4u>(ctx, &aot_mem) && ctx.pc == 0x089E1798u) goto L_089E1798;
    return;
L_089E1798:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E1804;
      }
      goto L_089E17A4;
    }
L_089E17A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[31] = (0x089E17C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 281u, 0x08871AF4u>(ctx, &aot_mem) && ctx.pc == 0x089E17C0u) goto L_089E17C0;
    return;
L_089E17C0:
    ctx.gpr[4] = (ctx.gpr[2] << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20980)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 16u);
    ctx.gpr[31] = (0x089E1804u);
    ctx.gpr[10] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 256u, 0x088C19B4u>(ctx, &aot_mem) && ctx.pc == 0x089E1804u) goto L_089E1804;
    return;
L_089E1804:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E18A8;
      }
      goto L_089E1818;
    }
L_089E1818:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_089E1834;
L_089E1834:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E1890;
      }
      goto L_089E1888;
    }
L_089E1888:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089E1890;
L_089E1890:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E1834;
      }
      goto L_089E18A8;
    }
L_089E18A8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E18CC;
      }
      goto L_089E18B0;
    }
L_089E18B0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E18BCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 124u, 0x08AB87F4u>(ctx, &aot_mem) && ctx.pc == 0x089E18BCu) goto L_089E18BC;
    return;
L_089E18BC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E18CCu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_089E1900;
L_089E18CC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1900:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(14312));
    goto L_089E1914;
L_089E1914:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E195C;
      }
      goto L_089E191C;
    }
L_089E191C:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E195C;
      }
      goto L_089E1924;
    }
L_089E1924:
    ctx.gpr[11] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[11] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[7]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E1948;
      }
      goto L_089E1940;
    }
L_089E1940:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 1u);
      if (branch_taken) {
          goto L_089E1954;
      }
      goto L_089E1948;
    }
L_089E1948:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 80 ? 1u : 0u);
    goto L_089E1954;
L_089E1954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1914;
      }
      goto L_089E195C;
    }
L_089E195C:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E199C;
      }
      goto L_089E1964;
    }
L_089E1964:
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E1994;
      }
      goto L_089E1980;
    }
L_089E1980:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E1A10;
      }
      goto L_089E1994;
    }
L_089E1994:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089E1A10;
      }
      goto L_089E199C;
    }
L_089E199C:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    goto L_089E19A4;
L_089E19A4:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E19EC;
      }
      goto L_089E19AC;
    }
L_089E19AC:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E19EC;
      }
      goto L_089E19B4;
    }
L_089E19B4:
    ctx.gpr[11] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[11] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[7]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E19D8;
      }
      goto L_089E19D0;
    }
L_089E19D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 1u);
      if (branch_taken) {
          goto L_089E19E4;
      }
      goto L_089E19D8;
    }
L_089E19D8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 80 ? 1u : 0u);
    goto L_089E19E4;
L_089E19E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E19A4;
      }
      goto L_089E19EC;
    }
L_089E19EC:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1A10;
      }
      goto L_089E19F4;
    }
L_089E19F4:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_089E1A10;
L_089E1A10:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1A18:
    ctx.gpr[9] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15272));
    goto L_089E1A30;
L_089E1A30:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1A70;
      }
      goto L_089E1A38;
    }
L_089E1A38:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E1A70;
      }
      goto L_089E1A40;
    }
L_089E1A40:
    ctx.gpr[10] = (ctx.gpr[8] << 2u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E1A5C;
      }
      goto L_089E1A54;
    }
L_089E1A54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_089E1A68;
      }
      goto L_089E1A5C;
    }
L_089E1A5C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 52 ? 1u : 0u);
    goto L_089E1A68;
L_089E1A68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1A30;
      }
      goto L_089E1A70;
    }
L_089E1A70:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1A90;
      }
      goto L_089E1A78;
    }
L_089E1A78:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1AF4;
      }
      goto L_089E1A80;
    }
L_089E1A80:
    ctx.gpr[4] = (ctx.gpr[8] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089E1AF4;
      }
      goto L_089E1A90;
    }
L_089E1A90:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E1AF4;
      }
      goto L_089E1A98;
    }
L_089E1A98:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    goto L_089E1AA0;
L_089E1AA0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1AE0;
      }
      goto L_089E1AA8;
    }
L_089E1AA8:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E1AE0;
      }
      goto L_089E1AB0;
    }
L_089E1AB0:
    ctx.gpr[9] = (ctx.gpr[8] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E1ACC;
      }
      goto L_089E1AC4;
    }
L_089E1AC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_089E1AD8;
      }
      goto L_089E1ACC;
    }
L_089E1ACC:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 52 ? 1u : 0u);
    goto L_089E1AD8;
L_089E1AD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1AA0;
      }
      goto L_089E1AE0;
    }
L_089E1AE0:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1AF4;
      }
      goto L_089E1AE8;
    }
L_089E1AE8:
    ctx.gpr[6] = (ctx.gpr[8] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089E1AF4;
L_089E1AF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1AFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14312));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_089E1B24;
L_089E1B24:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1B54;
      }
      goto L_089E1B40;
    }
L_089E1B40:
    ctx.gpr[31] = (0x089E1B48u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 124u, 0x08AB87F4u>(ctx, &aot_mem) && ctx.pc == 0x089E1B48u) goto L_089E1B48;
    return;
L_089E1B48:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    goto L_089E1B54;
L_089E1B54:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 80 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E1B24;
      }
      goto L_089E1B68;
    }
L_089E1B68:
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
L_089E1B84:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(15272));
    ctx.gpr[4] = (8u << 16u);
    goto L_089E1B94;
L_089E1B94:
    ctx.gpr[6] = (ctx.gpr[8] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1BB8;
      }
      goto L_089E1BA8;
    }
L_089E1BA8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    goto L_089E1BB8;
L_089E1BB8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 52 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E1B94;
      }
      goto L_089E1BCC;
    }
L_089E1BCC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1BD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-960));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), 0u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-805));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(916), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(920), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(924), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(928), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(932), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(936), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(940), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(944), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(948), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(952), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(956), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 448u, 0x089E5FA4u>(ctx, &aot_mem); return;
      }
      goto L_089E1C28;
    }
L_089E1C28:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-805));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-5104)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1C44:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E1C60u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E1C60u) goto L_089E1C60;
    return;
L_089E1C60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E1C70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E1C70u) goto L_089E1C70;
    return;
L_089E1C70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(628)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089E1CC0;
      }
      goto L_089E1CA8;
    }
L_089E1CA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(412)));
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E1CC0;
      }
      goto L_089E1CBC;
    }
L_089E1CBC:
    ctx.gpr[4] = (0u | 1u);
    goto L_089E1CC0;
L_089E1CC0:
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
          goto L_089E1CEC;
      }
      goto L_089E1CE4;
    }
L_089E1CE4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E1D3C;
      }
      goto L_089E1CEC;
    }
L_089E1CEC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E1D1C;
    }
    goto L_089E1D08;
L_089E1D08:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E1D3C;
      }
      goto L_089E1D1C;
    }
L_089E1D1C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1D3C;
      }
      goto L_089E1D38;
    }
L_089E1D38:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E1D3C;
L_089E1D3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E1D4C;
    }
L_089E1D4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E1D58;
    }
L_089E1D58:
    ctx.gpr[31] = (0x089E1D60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E1D60u) goto L_089E1D60;
    return;
L_089E1D60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E1D68;
    }
L_089E1D68:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E1D80u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E1D80u) goto L_089E1D80;
    return;
L_089E1D80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E1D90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E1D90u) goto L_089E1D90;
    return;
L_089E1D90:
    ctx.gpr[9] = (17530u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[31] = (0x089E1DB0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1DB0u) goto L_089E1DB0;
    return;
L_089E1DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E1DC0;
    }
L_089E1DC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E1DCC;
    }
L_089E1DCC:
    ctx.gpr[31] = (0x089E1DD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E1DD4u) goto L_089E1DD4;
    return;
L_089E1DD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E1DDC;
    }
L_089E1DDC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E1DF4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E1DF4u) goto L_089E1DF4;
    return;
L_089E1DF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[9] = (17530u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[31] = (0x089E1E38u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1E38u) goto L_089E1E38;
    return;
L_089E1E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E1E48;
    }
L_089E1E48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E1E54;
    }
L_089E1E54:
    ctx.gpr[31] = (0x089E1E5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E1E5Cu) goto L_089E1E5C;
    return;
L_089E1E5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E1E64;
    }
L_089E1E64:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E1E80u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E1E80u) goto L_089E1E80;
    return;
L_089E1E80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E1E90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E1E90u) goto L_089E1E90;
    return;
L_089E1E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E1EA8;
      }
      goto L_089E1E9C;
    }
L_089E1E9C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(949), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E1EAC;
      }
      goto L_089E1EA8;
    }
L_089E1EA8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(949), static_cast<std::uint8_t>(0u));
    goto L_089E1EAC;
L_089E1EAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E1EBC;
    }
L_089E1EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E1EC8;
    }
L_089E1EC8:
    ctx.gpr[31] = (0x089E1ED0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E1ED0u) goto L_089E1ED0;
    return;
L_089E1ED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E1ED8;
    }
L_089E1ED8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E1EF8u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x089E1EF8u) goto L_089E1EF8;
    return;
L_089E1EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E1F1Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E1F1Cu) goto L_089E1F1C;
    return;
L_089E1F1C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E1F30u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 221u, 0x0887171Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1F30u) goto L_089E1F30;
    return;
L_089E1F30:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089E1F4C;
      }
      goto L_089E1F3C;
    }
L_089E1F3C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[31] = (0x089E1F4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5192));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089E1F4Cu) goto L_089E1F4C;
    return;
L_089E1F4C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089E1F98;
      }
      goto L_089E1F54;
    }
L_089E1F54:
    ctx.gpr[5] = (ctx.gpr[16] & 65535u);
    goto L_089E1F58;
L_089E1F58:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] & 255u);
    ctx.gpr[31] = (0x089E1F7Cu);
    ctx.gpr[7] = (ctx.gpr[8] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 374u, 0x08872350u>(ctx, &aot_mem) && ctx.pc == 0x089E1F7Cu) goto L_089E1F7C;
    return;
L_089E1F7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[31] = (0x089E1F8Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 251u, 0x08871908u>(ctx, &aot_mem) && ctx.pc == 0x089E1F8Cu) goto L_089E1F8C;
    return;
L_089E1F8C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[5] = (ctx.gpr[16] & 65535u);
      if (branch_taken) {
          goto L_089E1F58;
      }
      goto L_089E1F98;
    }
L_089E1F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E1FA8;
    }
L_089E1FA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E1FB4;
    }
L_089E1FB4:
    ctx.gpr[31] = (0x089E1FBCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E1FBCu) goto L_089E1FBC;
    return;
L_089E1FBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E1FC4;
    }
L_089E1FC4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E1FE0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E1FE0u) goto L_089E1FE0;
    return;
L_089E1FE0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x089E1FF0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E1FF0u) goto L_089E1FF0;
    return;
L_089E1FF0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24800));
    ctx.gpr[6] = (16204u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E2020u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 610u, 0x0884E768u>(ctx, &aot_mem) && ctx.pc == 0x089E2020u) goto L_089E2020;
    return;
L_089E2020:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E2034u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089E2034u) goto L_089E2034;
    return;
L_089E2034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2044;
    }
L_089E2044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2050;
    }
L_089E2050:
    ctx.gpr[31] = (0x089E2058u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E2058u) goto L_089E2058;
    return;
L_089E2058:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2060;
    }
L_089E2060:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E207Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E207Cu) goto L_089E207C;
    return;
L_089E207C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x089E208Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E208Cu) goto L_089E208C;
    return;
L_089E208C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24800));
    ctx.gpr[6] = (16204u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E20BCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 610u, 0x0884E768u>(ctx, &aot_mem) && ctx.pc == 0x089E20BCu) goto L_089E20BC;
    return;
L_089E20BC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E20D0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089E20D0u) goto L_089E20D0;
    return;
L_089E20D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E20E0;
    }
L_089E20E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E20EC;
    }
L_089E20EC:
    ctx.gpr[31] = (0x089E20F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E20F4u) goto L_089E20F4;
    return;
L_089E20F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E20FC;
    }
L_089E20FC:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x089E2114u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E2114u) goto L_089E2114;
    return;
L_089E2114:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089E2128;
L_089E2128:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E228C;
      }
      goto L_089E2130;
    }
L_089E2130:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089E228C;
      }
      goto L_089E213C;
    }
L_089E213C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
      if (branch_taken) {
          goto L_089E2160;
      }
      goto L_089E2158;
    }
L_089E2158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089E218C;
      }
      goto L_089E2160;
    }
L_089E2160:
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_089E218C;
L_089E218C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2284;
      }
      goto L_089E2194;
    }
L_089E2194:
    ctx.gpr[31] = (0x089E219Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x089E219Cu) goto L_089E219C;
    return;
L_089E219C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E21BC;
      }
      goto L_089E21A8;
    }
L_089E21A8:
    ctx.gpr[31] = (0x089E21B0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x089E21B0u) goto L_089E21B0;
    return;
L_089E21B0:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E2284;
      }
      goto L_089E21BC;
    }
L_089E21BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E2284;
      }
      goto L_089E21CC;
    }
L_089E21CC:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089E21F4;
      }
      goto L_089E21E4;
    }
L_089E21E4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089E2284;
      }
      goto L_089E21F4;
    }
L_089E21F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E2284;
      }
      goto L_089E2204;
    }
L_089E2204:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x089E2224u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A287F8u>(ctx, &aot_mem) && ctx.pc == 0x089E2224u) goto L_089E2224;
    return;
L_089E2224:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2284;
      }
      goto L_089E222C;
    }
L_089E222C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x089E223Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 509u, 0x08AFE25Cu>(ctx, &aot_mem) && ctx.pc == 0x089E223Cu) goto L_089E223C;
    return;
L_089E223C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17184)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-17184), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E2284;
      }
      goto L_089E2270;
    }
L_089E2270:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E2284u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 447u, 0x08957150u>(ctx, &aot_mem) && ctx.pc == 0x089E2284u) goto L_089E2284;
    return;
L_089E2284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089E2128;
      }
      goto L_089E228C;
    }
L_089E228C:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E22A4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089E22A4u) goto L_089E22A4;
    return;
L_089E22A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E22B4;
    }
L_089E22B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E22C0;
    }
L_089E22C0:
    ctx.gpr[31] = (0x089E22C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E22C8u) goto L_089E22C8;
    return;
L_089E22C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E22D0;
    }
L_089E22D0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E22E8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E22E8u) goto L_089E22E8;
    return;
L_089E22E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x089E22FCu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 18u, 0x0893C0FCu>(ctx, &aot_mem) && ctx.pc == 0x089E22FCu) goto L_089E22FC;
    return;
L_089E22FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2308;
      }
      goto L_089E2304;
    }
L_089E2304:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E2308;
L_089E2308:
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
          goto L_089E2334;
      }
      goto L_089E232C;
    }
L_089E232C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089E2384;
      }
      goto L_089E2334;
    }
L_089E2334:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E2364;
    }
    goto L_089E2350;
L_089E2350:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E2384;
      }
      goto L_089E2364;
    }
L_089E2364:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2384;
      }
      goto L_089E2380;
    }
L_089E2380:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E2384;
L_089E2384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2394;
    }
L_089E2394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E23A0;
    }
L_089E23A0:
    ctx.gpr[31] = (0x089E23A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E23A8u) goto L_089E23A8;
    return;
L_089E23A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E23B0;
    }
L_089E23B0:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E23C8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E23C8u) goto L_089E23C8;
    return;
L_089E23C8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089E2424;
      }
      goto L_089E2400;
    }
L_089E2400:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x089E241Cu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 472u, 0x088EEF2Cu>(ctx, &aot_mem) && ctx.pc == 0x089E241Cu) goto L_089E241C;
    return;
L_089E241C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2474;
      }
      goto L_089E2424;
    }
L_089E2424:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E2474;
      }
      goto L_089E2458;
    }
L_089E2458:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x089E2474u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 479u, 0x088EEF8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E2474u) goto L_089E2474;
    return;
L_089E2474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2484;
    }
L_089E2484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2490;
    }
L_089E2490:
    ctx.gpr[31] = (0x089E2498u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E2498u) goto L_089E2498;
    return;
L_089E2498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E24A0;
    }
L_089E24A0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x089E24B8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E24B8u) goto L_089E24B8;
    return;
L_089E24B8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089E24E8;
      }
      goto L_089E24C4;
    }
L_089E24C4:
    ctx.gpr[4] = (0u - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5168));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2269u << 16u);
    goto L_089E24E8;
L_089E24E8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E2528;
      }
      goto L_089E2510;
    }
L_089E2510:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089E251Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x089E251Cu) goto L_089E251C;
    return;
L_089E251C:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    goto L_089E2528;
L_089E2528:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(912), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089E2538u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 627u, 0x08957D28u>(ctx, &aot_mem) && ctx.pc == 0x089E2538u) goto L_089E2538;
    return;
L_089E2538:
    ctx.gpr[31] = (0x089E2540u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 227u, 0x08A822ACu>(ctx, &aot_mem) && ctx.pc == 0x089E2540u) goto L_089E2540;
    return;
L_089E2540:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(912)));
      if (branch_taken) {
          goto L_089E254C;
      }
      goto L_089E254C;
    }
L_089E254C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089E2584u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 206u, 0x08A84F08u>(ctx, &aot_mem) && ctx.pc == 0x089E2584u) goto L_089E2584;
    return;
L_089E2584:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E2598u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089E2598u) goto L_089E2598;
    return;
L_089E2598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E25A8;
    }
L_089E25A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E25B4;
    }
L_089E25B4:
    ctx.gpr[31] = (0x089E25BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E25BCu) goto L_089E25BC;
    return;
L_089E25BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E25C4;
    }
L_089E25C4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E25E0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E25E0u) goto L_089E25E0;
    return;
L_089E25E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[31] = (0x089E25F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E25F0u) goto L_089E25F0;
    return;
L_089E25F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E2600u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E2600u) goto L_089E2600;
    return;
L_089E2600:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E260Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 287u, 0x0891D848u>(ctx, &aot_mem) && ctx.pc == 0x089E260Cu) goto L_089E260C;
    return;
L_089E260C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E261C;
    }
L_089E261C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2628;
    }
L_089E2628:
    ctx.gpr[31] = (0x089E2630u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E2630u) goto L_089E2630;
    return;
L_089E2630:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2638;
    }
L_089E2638:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E2654u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E2654u) goto L_089E2654;
    return;
L_089E2654:
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
          goto L_089E2690;
      }
      goto L_089E2684;
    }
L_089E2684:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(356), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E2694;
      }
      goto L_089E2690;
    }
L_089E2690:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(356), static_cast<std::uint8_t>(0u));
    goto L_089E2694;
L_089E2694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E26A4;
    }
L_089E26A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E26B0;
    }
L_089E26B0:
    ctx.gpr[31] = (0x089E26B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E26B8u) goto L_089E26B8;
    return;
L_089E26B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E26C0;
    }
L_089E26C0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E26DCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E26DCu) goto L_089E26DC;
    return;
L_089E26DC:
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
          goto L_089E2718;
      }
      goto L_089E270C;
    }
L_089E270C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(357), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E271C;
      }
      goto L_089E2718;
    }
L_089E2718:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(357), static_cast<std::uint8_t>(0u));
    goto L_089E271C;
L_089E271C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E272C;
    }
L_089E272C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2738;
    }
L_089E2738:
    ctx.gpr[31] = (0x089E2740u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E2740u) goto L_089E2740;
    return;
L_089E2740:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2748;
    }
L_089E2748:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E2764u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E2764u) goto L_089E2764;
    return;
L_089E2764:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E2774u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E2774u) goto L_089E2774;
    return;
L_089E2774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E2794;
      }
      goto L_089E2780;
    }
L_089E2780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E27A8;
      }
      goto L_089E2794;
    }
L_089E2794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (64512u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089E27A8;
L_089E27A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E27B8;
    }
L_089E27B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E27C4;
    }
L_089E27C4:
    ctx.gpr[31] = (0x089E27CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E27CCu) goto L_089E27CC;
    return;
L_089E27CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E27D4;
    }
L_089E27D4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E27F0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E27F0u) goto L_089E27F0;
    return;
L_089E27F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E2800u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E2800u) goto L_089E2800;
    return;
L_089E2800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E281C;
      }
      goto L_089E280C;
    }
L_089E280C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E282C;
      }
      goto L_089E281C;
    }
L_089E281C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089E282C;
L_089E282C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E283C;
    }
L_089E283C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2848;
    }
L_089E2848:
    ctx.gpr[31] = (0x089E2850u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E2850u) goto L_089E2850;
    return;
L_089E2850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2858;
    }
L_089E2858:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E2870u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E2870u) goto L_089E2870;
    return;
L_089E2870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E288C;
      }
      goto L_089E287C;
    }
L_089E287C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6590), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E2894;
      }
      goto L_089E288C;
    }
L_089E288C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6590), static_cast<std::uint8_t>(0u));
    goto L_089E2894;
L_089E2894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E28A4;
    }
L_089E28A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E28B0;
    }
L_089E28B0:
    ctx.gpr[31] = (0x089E28B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E28B8u) goto L_089E28B8;
    return;
L_089E28B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E28C0;
    }
L_089E28C0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E28DCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E28DCu) goto L_089E28DC;
    return;
L_089E28DC:
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
          goto L_089E2924;
      }
      goto L_089E290C;
    }
L_089E290C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E293C;
      }
      goto L_089E2924;
    }
L_089E2924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_089E293C;
L_089E293C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E294C;
    }
L_089E294C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2958;
    }
L_089E2958:
    ctx.gpr[31] = (0x089E2960u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E2960u) goto L_089E2960;
    return;
L_089E2960:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2968;
    }
L_089E2968:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E2984u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E2984u) goto L_089E2984;
    return;
L_089E2984:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E2994u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089E2994u) goto L_089E2994;
    return;
L_089E2994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E29B4;
      }
      goto L_089E29A0;
    }
L_089E29A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E29C8;
      }
      goto L_089E29B4;
    }
L_089E29B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_089E29C8;
L_089E29C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E29D8;
    }
L_089E29D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E29E4;
    }
L_089E29E4:
    ctx.gpr[31] = (0x089E29ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E29ECu) goto L_089E29EC;
    return;
L_089E29EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E29F4;
    }
L_089E29F4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E2A10u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E2A10u) goto L_089E2A10;
    return;
L_089E2A10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E2A20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089E2A20u) goto L_089E2A20;
    return;
L_089E2A20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E2A40;
      }
      goto L_089E2A2C;
    }
L_089E2A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E2A54;
      }
      goto L_089E2A40;
    }
L_089E2A40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_089E2A54;
L_089E2A54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2A64;
    }
L_089E2A64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2A70;
    }
L_089E2A70:
    ctx.gpr[31] = (0x089E2A78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E2A78u) goto L_089E2A78;
    return;
L_089E2A78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2A80;
    }
L_089E2A80:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 11u);
    ctx.gpr[31] = (0x089E2A9Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E2A9Cu) goto L_089E2A9C;
    return;
L_089E2A9C:
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
          goto L_089E2ACC;
      }
      goto L_089E2AC0;
    }
L_089E2AC0:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E2ACC;
L_089E2ACC:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E2AE8;
      }
      goto L_089E2ADC;
    }
L_089E2ADC:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E2AE8;
L_089E2AE8:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
        goto L_089E2B08;
    }
    goto L_089E2AF8;
L_089E2AF8:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    goto L_089E2B08;
L_089E2B08:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    ctx.gpr[2] = (0u < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[10] = (0u < ctx.gpr[10] ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[8] & 255u);
    ctx.gpr[3] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089E2B84u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 314u, 0x088C1F78u>(ctx, &aot_mem) && ctx.pc == 0x089E2B84u) goto L_089E2B84;
    return;
L_089E2B84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089E2B94;
      }
      goto L_089E2B90;
    }
L_089E2B90:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E2B94;
L_089E2B94:
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
          goto L_089E2BC0;
      }
      goto L_089E2BB8;
    }
L_089E2BB8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089E2C10;
      }
      goto L_089E2BC0;
    }
L_089E2BC0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E2BF0;
    }
    goto L_089E2BDC;
L_089E2BDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E2C10;
      }
      goto L_089E2BF0;
    }
L_089E2BF0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2C10;
      }
      goto L_089E2C0C;
    }
L_089E2C0C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E2C10;
L_089E2C10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2C20;
    }
L_089E2C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2C2C;
    }
L_089E2C2C:
    ctx.gpr[31] = (0x089E2C34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E2C34u) goto L_089E2C34;
    return;
L_089E2C34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2C3C;
    }
L_089E2C3C:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E2C54u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E2C54u) goto L_089E2C54;
    return;
L_089E2C54:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089E2C94;
    }
    goto L_089E2C64;
L_089E2C64:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089E2C70u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089E2C70u) goto L_089E2C70;
    return;
L_089E2C70:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2C88;
      }
      goto L_089E2C7C;
    }
L_089E2C7C:
    ctx.gpr[31] = (0x089E2C84u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089E2C84u) goto L_089E2C84;
    return;
L_089E2C84:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089E2C88;
L_089E2C88:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089E2C94;
L_089E2C94:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089E2CACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089E2CACu) goto L_089E2CAC;
    return;
L_089E2CAC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6848)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(23488));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2D20;
      }
      goto L_089E2D08;
    }
L_089E2D08:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E2D08;
      }
      goto L_089E2D20;
    }
L_089E2D20:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2D7C;
      }
      goto L_089E2D30;
    }
L_089E2D30:
    ctx.gpr[9] = (2230u << 16u);
    goto L_089E2D34;
L_089E2D34:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(-6848)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[11] = (ctx.gpr[9] << 8u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[11] - ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[9] = (2274u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(23488));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[9] = (2230u << 16u);
      if (branch_taken) {
          goto L_089E2D34;
      }
      goto L_089E2D7C;
    }
L_089E2D7C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 100 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089E2DD0;
    }
    goto L_089E2D88;
L_089E2D88:
    ctx.gpr[4] = (2230u << 16u);
    goto L_089E2D8C;
L_089E2D8C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6848)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[8] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089E2D8C;
      }
      goto L_089E2DCC;
    }
L_089E2DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089E2DD0;
L_089E2DD0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6848)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6848), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2DF8;
    }
L_089E2DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2E04;
    }
L_089E2E04:
    ctx.gpr[31] = (0x089E2E0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E2E0Cu) goto L_089E2E0C;
    return;
L_089E2E0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2E14;
    }
L_089E2E14:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E2E30u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E2E30u) goto L_089E2E30;
    return;
L_089E2E30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6848)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2E78;
    }
L_089E2E78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2E84;
    }
L_089E2E84:
    ctx.gpr[31] = (0x089E2E8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E2E8Cu) goto L_089E2E8C;
    return;
L_089E2E8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2E94;
    }
L_089E2E94:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089E2EB0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E2EB0u) goto L_089E2EB0;
    return;
L_089E2EB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[31] = (0x089E2ED8u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089E2ED8u) goto L_089E2ED8;
    return;
L_089E2ED8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(197), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(198), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6848)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(199), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23488));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(197)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(198)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(199)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2F54;
    }
L_089E2F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2F60;
    }
L_089E2F60:
    ctx.gpr[31] = (0x089E2F68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E2F68u) goto L_089E2F68;
    return;
L_089E2F68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E2F70;
    }
L_089E2F70:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E2F88u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E2F88u) goto L_089E2F88;
    return;
L_089E2F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089E2FC8;
      }
      goto L_089E2F94;
    }
L_089E2F94:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6848)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089E2FF0;
      }
      goto L_089E2FC8;
    }
L_089E2FC8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6848)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    goto L_089E2FF0;
L_089E2FF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E3000;
    }
L_089E3000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E300C;
    }
L_089E300C:
    ctx.gpr[31] = (0x089E3014u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E3014u) goto L_089E3014;
    return;
L_089E3014:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E301C;
    }
L_089E301C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E3034u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E3034u) goto L_089E3034;
    return;
L_089E3034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089E3074;
      }
      goto L_089E3040;
    }
L_089E3040:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6848)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089E309C;
      }
      goto L_089E3074;
    }
L_089E3074:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6848)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    goto L_089E309C;
L_089E309C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E30AC;
    }
L_089E30AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E30B8;
    }
L_089E30B8:
    ctx.gpr[31] = (0x089E30C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E30C0u) goto L_089E30C0;
    return;
L_089E30C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E30C8;
    }
L_089E30C8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E30E0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E30E0u) goto L_089E30E0;
    return;
L_089E30E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6848)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E3120;
    }
L_089E3120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E312C;
    }
L_089E312C:
    ctx.gpr[31] = (0x089E3134u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E3134u) goto L_089E3134;
    return;
L_089E3134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E313C;
    }
L_089E313C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E3154u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E3154u) goto L_089E3154;
    return;
L_089E3154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089E3194;
      }
      goto L_089E3160;
    }
L_089E3160:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6848)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089E31BC;
      }
      goto L_089E3194;
    }
L_089E3194:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6848)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    goto L_089E31BC;
L_089E31BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E31CC;
    }
L_089E31CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E31D8;
    }
L_089E31D8:
    ctx.gpr[31] = (0x089E31E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E31E0u) goto L_089E31E0;
    return;
L_089E31E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E31E8;
    }
L_089E31E8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E3200u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E3200u) goto L_089E3200;
    return;
L_089E3200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089E3240;
      }
      goto L_089E320C;
    }
L_089E320C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6848)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089E3268;
      }
      goto L_089E3240;
    }
L_089E3240:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6848)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    goto L_089E3268;
L_089E3268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E3278;
    }
L_089E3278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E3284;
    }
L_089E3284:
    ctx.gpr[31] = (0x089E328Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E328Cu) goto L_089E328C;
    return;
L_089E328C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E3294;
    }
L_089E3294:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E32ACu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E32ACu) goto L_089E32AC;
    return;
L_089E32AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E32C8;
      }
      goto L_089E32B8;
    }
L_089E32B8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7264), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E32D0;
      }
      goto L_089E32C8;
    }
L_089E32C8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7264), 0u);
    goto L_089E32D0;
L_089E32D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E32E0;
    }
L_089E32E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E32EC;
    }
L_089E32EC:
    ctx.gpr[31] = (0x089E32F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E32F4u) goto L_089E32F4;
    return;
L_089E32F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E32FC;
    }
L_089E32FC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E3314u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E3314u) goto L_089E3314;
    return;
L_089E3314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3330;
      }
      goto L_089E3320;
    }
L_089E3320:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7260), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E3338;
      }
      goto L_089E3330;
    }
L_089E3330:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7260), 0u);
    goto L_089E3338;
L_089E3338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E3348;
    }
L_089E3348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E3354;
    }
L_089E3354:
    ctx.gpr[31] = (0x089E335Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E335Cu) goto L_089E335C;
    return;
L_089E335C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E3364;
    }
L_089E3364:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E337Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E337Cu) goto L_089E337C;
    return;
L_089E337C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3398;
      }
      goto L_089E3388;
    }
L_089E3388:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7256), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E33A0;
      }
      goto L_089E3398;
    }
L_089E3398:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7256), 0u);
    goto L_089E33A0;
L_089E33A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E33B0;
    }
L_089E33B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E33BC;
    }
L_089E33BC:
    ctx.gpr[31] = (0x089E33C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E33C4u) goto L_089E33C4;
    return;
L_089E33C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E33CC;
    }
L_089E33CC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089E33E4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E33E4u) goto L_089E33E4;
    return;
L_089E33E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E33F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089E33F4u) goto L_089E33F4;
    return;
L_089E33F4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[13])) && ctx.fpr[20] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089E3430;
      }
      goto L_089E3414;
    }
L_089E3414:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089E3434;
    }
    goto L_089E3428;
L_089E3428:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089E3440;
      }
      goto L_089E3430;
    }
L_089E3430:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089E3434;
L_089E3434:
    ctx.gpr[31] = (0x089E343Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089E343Cu) goto L_089E343C;
    return;
L_089E343C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089E3440;
L_089E3440:
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E347C;
      }
      goto L_089E3470;
    }
L_089E3470:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_089E347C;
L_089E347C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (0u | 0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[20])) && ctx.fpr[22] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089E34A4;
      }
      goto L_089E349C;
    }
L_089E349C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089E390C;
      }
      goto L_089E34A4;
    }
L_089E34A4:
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[20];
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = ctx.fpr[20] - ctx.fpr[22];
      if (branch_taken) {
          goto L_089E34C8;
      }
      goto L_089E34BC;
    }
L_089E34BC:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    goto L_089E34C8;
L_089E34C8:
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E34E8;
      }
      goto L_089E34DC;
    }
L_089E34DC:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    goto L_089E34E8;
L_089E34E8:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3518;
      }
      goto L_089E34F8;
    }
L_089E34F8:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3510;
      }
      goto L_089E3508;
    }
L_089E3508:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_089E3534;
      }
      goto L_089E3510;
    }
L_089E3510:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[20];
      if (branch_taken) {
          goto L_089E3534;
      }
      goto L_089E3518;
    }
L_089E3518:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3530;
      }
      goto L_089E3528;
    }
L_089E3528:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_089E3534;
      }
      goto L_089E3530;
    }
L_089E3530:
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    goto L_089E3534;
L_089E3534:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089E38B4;
      }
      goto L_089E3548;
    }
L_089E3548:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x089E3580u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 490u, 0x08A05FD4u>(ctx, &aot_mem) && ctx.pc == 0x089E3580u) goto L_089E3580;
    return;
L_089E3580:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x089E3594u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x089E3594u) goto L_089E3594;
    return;
L_089E3594:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(48);
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(48);
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(48);
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(48);
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
        goto L_089E373C;
    }
    goto L_089E3734;
L_089E3734:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
      if (branch_taken) {
          goto L_089E373C;
      }
      goto L_089E373C;
    }
L_089E373C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
        goto L_089E3750;
    }
    goto L_089E3750;
L_089E3750:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
        goto L_089E3764;
    }
    goto L_089E3764;
L_089E3764:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
        goto L_089E3784;
    }
    goto L_089E377C;
L_089E377C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
      if (branch_taken) {
          goto L_089E3784;
      }
      goto L_089E3784;
    }
L_089E3784:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
        goto L_089E3798;
    }
    goto L_089E3798;
L_089E3798:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
        goto L_089E37AC;
    }
    goto L_089E37AC;
L_089E37AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
        goto L_089E37CC;
    }
    goto L_089E37C4;
L_089E37C4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
      if (branch_taken) {
          goto L_089E37CC;
      }
      goto L_089E37CC;
    }
L_089E37CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
        goto L_089E37E0;
    }
    goto L_089E37E0;
L_089E37E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
        goto L_089E37F4;
    }
    goto L_089E37F4;
L_089E37F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
        goto L_089E3814;
    }
    goto L_089E380C;
L_089E380C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
      if (branch_taken) {
          goto L_089E3814;
      }
      goto L_089E3814;
    }
L_089E3814:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
        goto L_089E3828;
    }
    goto L_089E3828;
L_089E3828:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
        goto L_089E383C;
    }
    goto L_089E383C;
L_089E383C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[8] = (0u | 2u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x089E38A4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 359u, 0x088C2468u>(ctx, &aot_mem) && ctx.pc == 0x089E38A4u) goto L_089E38A4;
    return;
L_089E38A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089E38B4;
      }
      goto L_089E38B0;
    }
L_089E38B0:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E38B4;
L_089E38B4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E38C4;
      }
      goto L_089E38BC;
    }
L_089E38BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089E390C;
      }
      goto L_089E38C4;
    }
L_089E38C4:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17204u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x089E38E8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x089E38E8u) goto L_089E38E8;
    return;
L_089E38E8:
    ctx.gpr[31] = (0x089E38F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x089E38F0u) goto L_089E38F0;
    return;
L_089E38F0:
    ctx.gpr[31] = (0x089E38F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x089E38F8u) goto L_089E38F8;
    return;
L_089E38F8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[20])) && ctx.fpr[22] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E390C;
      }
      goto L_089E3908;
    }
L_089E3908:
    ctx.gpr[19] = (0u | 1u);
    goto L_089E390C;
L_089E390C:
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
          goto L_089E3938;
      }
      goto L_089E3930;
    }
L_089E3930:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_089E3988;
      }
      goto L_089E3938;
    }
L_089E3938:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E3968;
    }
    goto L_089E3954;
L_089E3954:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E3988;
      }
      goto L_089E3968;
    }
L_089E3968:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[19] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3988;
      }
      goto L_089E3984;
    }
L_089E3984:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E3988;
L_089E3988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E3998;
    }
L_089E3998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E39A4;
    }
L_089E39A4:
    ctx.gpr[31] = (0x089E39ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089E39ACu) goto L_089E39AC;
    return;
L_089E39AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E39B4;
    }
L_089E39B4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x089E39D0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089E39D0u) goto L_089E39D0;
    return;
L_089E39D0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[31] = (0x089E39E0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089E39E0u) goto L_089E39E0;
    return;
L_089E39E0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
        goto L_089E3A44;
    }
    goto L_089E3A14;
L_089E3A14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
        goto L_089E3A44;
    }
    goto L_089E3A28;
L_089E3A28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
        goto L_089E3A44;
    }
    goto L_089E3A3C;
L_089E3A3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E3F70;
      }
      goto L_089E3A44;
    }
L_089E3A44:
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089E3AA0;
      }
      goto L_089E3A78;
    }
L_089E3A78:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3A98;
      }
      goto L_089E3A88;
    }
L_089E3A88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089E3AC8;
      }
      goto L_089E3A98;
    }
L_089E3A98:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089E3AC8;
      }
      goto L_089E3AA0;
    }
L_089E3AA0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3AC4;
      }
      goto L_089E3AB4;
    }
L_089E3AB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089E3AC8;
      }
      goto L_089E3AC4;
    }
L_089E3AC4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089E3AC8;
L_089E3AC8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3B04;
      }
      goto L_089E3ADC;
    }
L_089E3ADC:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3AFC;
      }
      goto L_089E3AEC;
    }
L_089E3AEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089E3B2C;
      }
      goto L_089E3AFC;
    }
L_089E3AFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_089E3B2C;
      }
      goto L_089E3B04;
    }
L_089E3B04:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3B28;
      }
      goto L_089E3B18;
    }
L_089E3B18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089E3B2C;
      }
      goto L_089E3B28;
    }
L_089E3B28:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089E3B2C;
L_089E3B2C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3B68;
      }
      goto L_089E3B40;
    }
L_089E3B40:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3B60;
      }
      goto L_089E3B50;
    }
L_089E3B50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[17];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089E3B90;
      }
      goto L_089E3B60;
    }
L_089E3B60:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_089E3B90;
      }
      goto L_089E3B68;
    }
L_089E3B68:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3B8C;
      }
      goto L_089E3B7C;
    }
L_089E3B7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089E3B90;
      }
      goto L_089E3B8C;
    }
L_089E3B8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_089E3B90;
L_089E3B90:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089E3EEC;
      }
      goto L_089E3BA4;
    }
L_089E3BA4:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089E3BB4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3BB4u) goto L_089E3BB4;
    return;
L_089E3BB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(48);
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(48);
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(48);
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(48);
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
        goto L_089E3D74;
    }
    goto L_089E3D6C;
L_089E3D6C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
      if (branch_taken) {
          goto L_089E3D74;
      }
      goto L_089E3D74;
    }
L_089E3D74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
        goto L_089E3D88;
    }
    goto L_089E3D88;
L_089E3D88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
        goto L_089E3D9C;
    }
    goto L_089E3D9C;
L_089E3D9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
        goto L_089E3DBC;
    }
    goto L_089E3DB4;
L_089E3DB4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
      if (branch_taken) {
          goto L_089E3DBC;
      }
      goto L_089E3DBC;
    }
L_089E3DBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
        goto L_089E3DD0;
    }
    goto L_089E3DD0;
L_089E3DD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
        goto L_089E3DE4;
    }
    goto L_089E3DE4;
L_089E3DE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
        goto L_089E3E04;
    }
    goto L_089E3DFC;
L_089E3DFC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
      if (branch_taken) {
          goto L_089E3E04;
      }
      goto L_089E3E04;
    }
L_089E3E04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
        goto L_089E3E18;
    }
    goto L_089E3E18;
L_089E3E18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
        goto L_089E3E2C;
    }
    goto L_089E3E2C;
L_089E3E2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
        goto L_089E3E4C;
    }
    goto L_089E3E44;
L_089E3E44:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
      if (branch_taken) {
          goto L_089E3E4C;
      }
      goto L_089E3E4C;
    }
L_089E3E4C:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
        goto L_089E3E60;
    }
    goto L_089E3E60;
L_089E3E60:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
        goto L_089E3E74;
    }
    goto L_089E3E74;
L_089E3E74:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[8] = (0u | 2u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x089E3EDCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 359u, 0x088C2468u>(ctx, &aot_mem) && ctx.pc == 0x089E3EDCu) goto L_089E3EDC;
    return;
L_089E3EDC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089E3EEC;
      }
      goto L_089E3EE8;
    }
L_089E3EE8:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E3EEC;
L_089E3EEC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3EFC;
      }
      goto L_089E3EF4;
    }
L_089E3EF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E3F70;
      }
      goto L_089E3EFC;
    }
L_089E3EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089E3F28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E3F28u) goto L_089E3F28;
    return;
L_089E3F28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3F6C;
      }
      goto L_089E3F3C;
    }
L_089E3F3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3F6C;
      }
      goto L_089E3F50;
    }
L_089E3F50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E3F6C;
      }
      goto L_089E3F64;
    }
L_089E3F64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E3F70;
      }
      goto L_089E3F6C;
    }
L_089E3F6C:
    ctx.gpr[4] = (0u | 0u);
    goto L_089E3F70;
L_089E3F70:
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
          goto L_089E3F9C;
      }
      goto L_089E3F94;
    }
L_089E3F94:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E3FEC;
      }
      goto L_089E3F9C;
    }
L_089E3F9C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E3FCC;
    }
    goto L_089E3FB8;
L_089E3FB8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E3FEC;
      }
      goto L_089E3FCC;
    }
L_089E3FCC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3FEC;
      }
      goto L_089E3FE8;
    }
L_089E3FE8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E3FEC;
L_089E3FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 447u, 0x089E5F9Cu>(ctx, &aot_mem); return;
      }
      goto L_089E3FFC;
    }
L_089E3FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.pc = 0x089E4000u; return;
}

void recomp_unit_0119(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0119_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_119(Runtime &runtime) {
    runtime.register_generated_unit(119u, 0x089E0000u, 16384u, &recomp_unit_0119, &recomp_unit_0119_entry);
    runtime.register_function(0x089E0000u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0014u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0024u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E003Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0048u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0060u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0068u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0084u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0094u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E00A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E00D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E00E0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E00FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E010Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0164u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E016Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0188u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0198u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E01A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E01DCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E01E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0200u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0210u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0268u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0270u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E028Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E029Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E02F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E02FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0318u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0328u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0338u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E036Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0374u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0390u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E03A0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E03F8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0400u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E041Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E042Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E043Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0470u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0478u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0494u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E04A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E04FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0504u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0520u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0530u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0544u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0578u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0580u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E059Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E05ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E05C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E05F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E05FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0618u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0628u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E063Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0670u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0678u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0694u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E06A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E06B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E06ECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E06F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0710u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0720u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0734u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0768u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0770u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E078Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E079Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E07BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E07C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E07D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E07E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0810u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0828u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0830u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0878u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0880u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E089Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E08ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E08BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E08CCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E08D4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E08F0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0900u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0934u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E093Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0954u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0964u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E096Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0974u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0990u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E09A0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E09E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E09F0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A0Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A38u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A40u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A50u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A5Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A68u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A70u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A74u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A80u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A98u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0AC4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0AF8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0B00u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0B10u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0B1Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0B28u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0B30u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0B34u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0B40u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0B58u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0B84u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0BB4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0BBCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0BCCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0BD8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0BE4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0BECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0BF0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0BFCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C14u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C40u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C78u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C80u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C90u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C9Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0CA8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0CB0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0CB4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0CC0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0CD8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D04u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D34u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D3Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D58u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D7Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D88u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D98u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0DA4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0DB4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0DC0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0DF0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0DF8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0E14u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0E38u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0E44u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0E54u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0E60u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0E70u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0E7Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0EACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0EB4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0ED0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0EE0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0EF8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F00u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F1Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F2Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F44u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F4Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F64u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F78u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0FA4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0FB0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0FC8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0FE0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0FF4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1010u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E101Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1020u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1028u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1040u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1050u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E105Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1078u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E109Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E10A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E10B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E10C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1128u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1130u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E114Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1158u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1160u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1178u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1180u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1188u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E11A0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E11B0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E11BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E11C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E11C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E11ECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E11F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1210u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1224u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1240u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1244u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E124Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1250u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E127Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1370u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1410u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E143Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1454u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1468u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1470u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E147Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E14ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E14B4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E14BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E14C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1510u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E151Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E154Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1560u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1584u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E15A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E15B0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E15B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E15C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E15F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1600u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1610u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1620u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1628u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1644u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1650u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E16B0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E16BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E16C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E16D4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E16F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E16FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1718u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1758u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1764u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1798u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E17A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E17C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1804u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1818u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1834u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1888u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1890u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E18A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E18B0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E18BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E18CCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1900u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1914u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E191Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1924u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1940u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1948u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1954u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E195Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1964u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1980u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1994u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E199Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E19A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E19ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E19B4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E19D0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E19D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E19E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E19ECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E19F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A10u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A18u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A30u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A38u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A40u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A54u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A5Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A68u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A70u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A78u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A80u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A90u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A98u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1AA0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1AA8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1AB0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1AC4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1ACCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1AD8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1AE0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1AE8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1AF4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1AFCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B24u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B40u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B48u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B54u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B68u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B84u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1BA8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1BB8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1BCCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1BD4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1C28u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1C44u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1C60u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1C70u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1CA8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1CBCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1CC0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1CE4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1CECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1D08u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1D1Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1D38u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1D3Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1D4Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1D58u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1D60u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1D68u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1D80u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1D90u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1DB0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1DC0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1DCCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1DD4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1DDCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1DF4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1E38u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1E48u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1E54u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1E5Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1E64u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1E80u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1E90u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1E9Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1EA8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1EACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1EBCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1EC8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1ED0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1ED8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1EF8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1F1Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1F30u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1F3Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1F4Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1F54u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1F58u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1F7Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1F8Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1F98u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1FA8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1FB4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1FBCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1FC4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1FE0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1FF0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2020u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2034u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2044u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2050u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2058u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2060u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E207Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E208Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E20BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E20D0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E20E0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E20ECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E20F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E20FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2114u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2128u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2130u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E213Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2158u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2160u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E218Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2194u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E219Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E21A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E21B0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E21BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E21CCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E21E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E21F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2204u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2224u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E222Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E223Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2270u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2284u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E228Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E22A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E22B4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E22C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E22C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E22D0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E22E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E22FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2304u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2308u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E232Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2334u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2350u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2364u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2380u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2384u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2394u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E23A0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E23A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E23B0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E23C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2400u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E241Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2424u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2458u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2474u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2484u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2490u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2498u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E24A0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E24B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E24C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E24E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2510u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E251Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2528u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2538u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2540u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E254Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2584u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2598u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E25A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E25B4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E25BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E25C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E25E0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E25F0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2600u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E260Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E261Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2628u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2630u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2638u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2654u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2684u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2690u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2694u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E26A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E26B0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E26B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E26C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E26DCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E270Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2718u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E271Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E272Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2738u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2740u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2748u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2764u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2774u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2780u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2794u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E27A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E27B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E27C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E27CCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E27D4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E27F0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2800u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E280Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E281Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E282Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E283Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2848u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2850u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2858u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2870u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E287Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E288Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2894u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E28A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E28B0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E28B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E28C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E28DCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E290Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2924u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E293Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E294Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2958u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2960u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2968u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2984u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2994u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E29A0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E29B4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E29C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E29D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E29E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E29ECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E29F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A10u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A20u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A2Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A40u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A54u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A64u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A70u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A78u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A80u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A9Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2AC0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2ACCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2ADCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2AE8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2AF8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2B08u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2B84u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2B90u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2B94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2BB8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2BC0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2BDCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2BF0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C0Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C10u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C20u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C2Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C34u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C3Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C54u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C64u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C70u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C7Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C84u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C88u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2CACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2D08u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2D20u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2D30u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2D34u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2D7Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2D88u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2D8Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2DCCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2DD0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2DF8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2E04u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2E0Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2E14u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2E30u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2E78u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2E84u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2E8Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2E94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2EB0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2ED8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2F54u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2F60u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2F68u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2F70u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2F88u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2F94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2FC8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2FF0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3000u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E300Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3014u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E301Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3034u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3040u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3074u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E309Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E30ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E30B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E30C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E30C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E30E0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3120u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E312Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3134u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E313Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3154u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3160u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3194u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E31BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E31CCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E31D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E31E0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E31E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3200u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E320Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3240u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3268u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3278u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3284u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E328Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3294u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E32ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E32B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E32C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E32D0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E32E0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E32ECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E32F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E32FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3314u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3320u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3330u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3338u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3348u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3354u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E335Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3364u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E337Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3388u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3398u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E33A0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E33B0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E33BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E33C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E33CCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E33E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E33F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3414u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3428u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3430u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3434u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E343Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3440u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3470u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E347Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E349Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E34A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E34BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E34C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E34DCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E34E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E34F8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3508u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3510u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3518u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3528u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3530u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3534u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3548u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3580u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3594u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3734u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E373Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3750u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3764u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E377Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3784u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3798u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E37ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E37C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E37CCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E37E0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E37F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E380Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3814u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3828u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E383Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E38A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E38B0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E38B4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E38BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E38C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E38E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E38F0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E38F8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3908u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E390Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3930u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3938u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3954u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3968u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3984u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3988u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3998u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E39A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E39ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E39B4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E39D0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E39E0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A14u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A28u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A3Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A44u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A78u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A88u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A98u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3AA0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3AB4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3AC4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3AC8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3ADCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3AECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3AFCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B04u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B18u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B28u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B2Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B40u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B50u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B60u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B68u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B7Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B8Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B90u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3BA4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3BB4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3D6Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3D74u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3D88u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3D9Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3DB4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3DBCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3DD0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3DE4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3DFCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3E04u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3E18u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3E2Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3E44u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3E4Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3E60u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3E74u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3EDCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3EE8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3EECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3EF4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3EFCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F28u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F3Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F50u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F64u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F6Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F70u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F9Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3FB8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3FCCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3FE8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3FECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3FFCu, &recomp_unit_0119, "recomp_unit_0119");
}
} // namespace psprecomp
