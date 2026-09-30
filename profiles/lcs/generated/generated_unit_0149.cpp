#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0149[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 28, 0, 29,
    30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0,
    0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0,
    51, 0, 52, 0, 0, 53, 0, 54, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0,
    65, 0, 66, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0, 0, 75, 0, 76, 77, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0,
    0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 85, 0, 0, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 91, 0,
    0, 0, 92, 0, 93, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0,
    0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0,
    113, 0, 114, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 120, 121, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 127, 128, 0, 0, 0, 0, 0, 129, 0, 0, 130,
    0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 135, 0, 136, 0, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 141, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0,
    0, 0, 0, 166, 0, 167, 0, 0, 168, 0, 169, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 175,
    0, 0, 0, 0, 176, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0,
    0, 0, 0, 0, 0, 0, 0, 183, 184, 185, 186, 0, 0, 0, 187, 0, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195,
    0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    202, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0,
    210, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215,
    0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0,
    0, 0, 0, 228, 0, 0, 229, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236,
    0, 0, 0, 237, 0, 238, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0,
    0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0,
    0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280,
    0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0,
    0, 0, 287, 0, 288, 289, 0, 290, 0, 0, 291, 292, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297,
    298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0,
    0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 313, 0, 314, 0,
    315, 0, 316, 0, 317, 0, 318, 0, 319, 0, 0, 0, 0, 320, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 0, 328, 0, 329,
    0, 330, 0, 331, 0, 332, 0, 0, 0, 333, 0, 334, 0, 335, 0, 0, 0, 336, 337, 0, 338, 0, 339, 0, 0, 340, 0, 341, 0, 342, 343, 0,
    344, 0, 345, 0, 0, 346, 0, 347, 0, 348, 349, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 354,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363,
    0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0,
    0, 370, 371, 0, 372, 0, 373, 0, 374, 0, 375, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0,
    0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 384, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 389, 390,
    0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    393, 0, 0, 0, 394, 0, 395, 0, 396, 0, 0, 0, 397, 398, 0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 403, 404, 0, 405, 0, 0,
    0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0,
    0, 411, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417,
    0, 0, 0, 0, 0, 418, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 421, 422, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    427, 0, 428, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 433, 0, 434, 0, 0, 0,
    0, 435, 0, 0, 0, 436, 0, 0, 437, 0, 438, 0, 0, 439, 0, 440, 0, 0, 0, 0, 441, 0, 442, 0, 443, 0, 0, 0, 444, 0, 0, 445,
    0, 446, 0, 0, 0, 0, 447, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 455,
    0, 0, 0, 0, 456, 0, 0, 457, 0, 458, 0, 0, 0, 459, 460, 0, 0, 461, 0, 0, 0, 462, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0,
    0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 469, 0, 0, 0,
    0, 0, 0, 470, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 474, 475, 0, 476, 0, 0, 0, 0, 0, 0,
    477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 0,
    485, 0, 0, 0, 486, 0, 487, 0, 488, 0, 0, 0, 0, 489, 0, 0, 490, 0, 491, 0, 0, 492, 0, 493, 0, 0, 494, 0, 495, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 497, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 501, 0, 502, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 508, 0, 0, 509, 0, 0, 510, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 514, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0, 0, 0, 0, 520, 0, 521, 522, 0, 0, 0, 0, 0, 0, 0,
    0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525, 526, 0, 527, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0,
    0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 535, 536, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 538, 0, 539, 540, 0,
    0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 543, 0, 0, 544, 0, 0, 545, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547,
    0, 0, 0, 0, 0, 548, 0, 0, 0, 549, 550, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0,
    0, 0, 555, 0, 0, 0, 556, 557, 0, 558, 0, 0, 559, 0, 0, 560, 0, 561, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 567, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 572,
    0, 0, 0, 573, 574, 0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0,
    0, 580, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 582, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0,
    588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589,
    0, 0, 590, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 598, 0, 599, 0, 0, 600, 0, 601, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 604, 0, 0, 0, 605, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 0,
    0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 615, 616, 0, 0, 0, 617,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 622, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 624, 625, 0, 0, 626, 627, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 629, 0, 0, 0, 630, 0, 631, 0, 0, 0, 0, 632, 0, 633, 0, 0, 0, 634, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 639, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0,
    641, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 644, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 647, 0, 648, 0, 649, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 651,
    652, 653, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656,
    0, 657, 0, 0, 658, 0, 659, 0, 0, 0, 0, 0, 0, 0, 660, 0, 661, 662, 0, 0, 0, 0, 0, 0, 0, 0, 663, 664, 0, 0, 0, 0,
    0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 668, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 677, 0, 678, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 685, 0, 0, 686, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 688, 689, 0, 0,
    0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    695, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 699, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 0, 0, 704,
    0, 0, 705, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0,
    0, 0, 708, 0, 0, 709, 0, 0, 0, 0, 0, 0, 710, 0, 711, 0, 0, 0, 0, 712, 0, 713, 0, 0, 714, 0, 0, 0, 0, 0, 715,
};
void recomp_unit_0149_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A58000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0149[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A58000;
    case 2u: goto L_08A58048;
    case 3u: goto L_08A58074;
    case 4u: goto L_08A58098;
    case 5u: goto L_08A580A4;
    case 6u: goto L_08A580B0;
    case 7u: goto L_08A580C0;
    case 8u: goto L_08A580D8;
    case 9u: goto L_08A58100;
    case 10u: goto L_08A58124;
    case 11u: goto L_08A5814C;
    case 12u: goto L_08A5816C;
    case 13u: goto L_08A5818C;
    case 14u: goto L_08A581B4;
    case 15u: goto L_08A581DC;
    case 16u: goto L_08A581F8;
    case 17u: goto L_08A58220;
    case 18u: goto L_08A58248;
    case 19u: goto L_08A58270;
    case 20u: goto L_08A58298;
    case 21u: goto L_08A582A0;
    case 22u: goto L_08A582A8;
    case 23u: goto L_08A582C0;
    case 24u: goto L_08A582C8;
    case 25u: goto L_08A582D0;
    case 26u: goto L_08A582E0;
    case 27u: goto L_08A582E8;
    case 28u: goto L_08A582F4;
    case 29u: goto L_08A582FC;
    case 30u: goto L_08A58300;
    case 31u: goto L_08A58308;
    case 32u: goto L_08A5832C;
    case 33u: goto L_08A58338;
    case 34u: goto L_08A58344;
    case 35u: goto L_08A58354;
    case 36u: goto L_08A5836C;
    case 37u: goto L_08A58384;
    case 38u: goto L_08A583A0;
    case 39u: goto L_08A583C0;
    case 40u: goto L_08A583D8;
    case 41u: goto L_08A583F0;
    case 42u: goto L_08A58408;
    case 43u: goto L_08A58428;
    case 44u: goto L_08A58448;
    case 45u: goto L_08A5845C;
    case 46u: goto L_08A5847C;
    case 47u: goto L_08A5849C;
    case 48u: goto L_08A584BC;
    case 49u: goto L_08A584DC;
    case 50u: goto L_08A584F0;
    case 51u: goto L_08A58500;
    case 52u: goto L_08A58508;
    case 53u: goto L_08A58514;
    case 54u: goto L_08A5851C;
    case 55u: goto L_08A58520;
    case 56u: goto L_08A58528;
    case 57u: goto L_08A5854C;
    case 58u: goto L_08A58558;
    case 59u: goto L_08A58564;
    case 60u: goto L_08A58578;
    case 61u: goto L_08A5858C;
    case 62u: goto L_08A5859C;
    case 63u: goto L_08A585D8;
    case 64u: goto L_08A585E4;
    case 65u: goto L_08A58600;
    case 66u: goto L_08A58608;
    case 67u: goto L_08A58614;
    case 68u: goto L_08A5861C;
    case 69u: goto L_08A5862C;
    case 70u: goto L_08A58634;
    case 71u: goto L_08A5863C;
    case 72u: goto L_08A58644;
    case 73u: goto L_08A5864C;
    case 74u: goto L_08A58660;
    case 75u: goto L_08A5866C;
    case 76u: goto L_08A58674;
    case 77u: goto L_08A58678;
    case 78u: goto L_08A58680;
    case 79u: goto L_08A586B0;
    case 80u: goto L_08A586EC;
    case 81u: goto L_08A586F4;
    case 82u: goto L_08A58718;
    case 83u: goto L_08A58720;
    case 84u: goto L_08A5872C;
    case 85u: goto L_08A58734;
    case 86u: goto L_08A58744;
    case 87u: goto L_08A5874C;
    case 88u: goto L_08A58754;
    case 89u: goto L_08A5875C;
    case 90u: goto L_08A58764;
    case 91u: goto L_08A58778;
    case 92u: goto L_08A58788;
    case 93u: goto L_08A58790;
    case 94u: goto L_08A587A4;
    case 95u: goto L_08A587B0;
    case 96u: goto L_08A587D0;
    case 97u: goto L_08A587D8;
    case 98u: goto L_08A58808;
    case 99u: goto L_08A58820;
    case 100u: goto L_08A58834;
    case 101u: goto L_08A5883C;
    case 102u: goto L_08A5885C;
    case 103u: goto L_08A588B8;
    case 104u: goto L_08A588CC;
    case 105u: goto L_08A588DC;
    case 106u: goto L_08A588E4;
    case 107u: goto L_08A58908;
    case 108u: goto L_08A5891C;
    case 109u: goto L_08A58940;
    case 110u: goto L_08A58950;
    case 111u: goto L_08A58958;
    case 112u: goto L_08A58968;
    case 113u: goto L_08A58980;
    case 114u: goto L_08A58988;
    case 115u: goto L_08A5898C;
    case 116u: goto L_08A589A4;
    case 117u: goto L_08A589C8;
    case 118u: goto L_08A589D4;
    case 119u: goto L_08A589E8;
    case 120u: goto L_08A589F4;
    case 121u: goto L_08A589F8;
    case 122u: goto L_08A58A24;
    case 123u: goto L_08A58A30;
    case 124u: goto L_08A58A3C;
    case 125u: goto L_08A58A44;
    case 126u: goto L_08A58A4C;
    case 127u: goto L_08A58A54;
    case 128u: goto L_08A58A58;
    case 129u: goto L_08A58A70;
    case 130u: goto L_08A58A7C;
    case 131u: goto L_08A58A94;
    case 132u: goto L_08A58AA0;
    case 133u: goto L_08A58AB8;
    case 134u: goto L_08A58AD0;
    case 135u: goto L_08A58B04;
    case 136u: goto L_08A58B0C;
    case 137u: goto L_08A58B1C;
    case 138u: goto L_08A58B24;
    case 139u: goto L_08A58B34;
    case 140u: goto L_08A58B50;
    case 141u: goto L_08A58B84;
    case 142u: goto L_08A58B8C;
    case 143u: goto L_08A58B9C;
    case 144u: goto L_08A58BA4;
    case 145u: goto L_08A58BB4;
    case 146u: goto L_08A58BD0;
    case 147u: goto L_08A58BE8;
    case 148u: goto L_08A58D0C;
    case 149u: goto L_08A58D20;
    case 150u: goto L_08A58D38;
    case 151u: goto L_08A58DA0;
    case 152u: goto L_08A58DF8;
    case 153u: goto L_08A58E00;
    case 154u: goto L_08A58E50;
    case 155u: goto L_08A58E58;
    case 156u: goto L_08A58E9C;
    case 157u: goto L_08A58EA4;
    case 158u: goto L_08A58EE0;
    case 159u: goto L_08A58EE8;
    case 160u: goto L_08A58F1C;
    case 161u: goto L_08A58F24;
    case 162u: goto L_08A58F4C;
    case 163u: goto L_08A58F54;
    case 164u: goto L_08A58F70;
    case 165u: goto L_08A58F78;
    case 166u: goto L_08A58F8C;
    case 167u: goto L_08A58F94;
    case 168u: goto L_08A58FA0;
    case 169u: goto L_08A58FA8;
    case 170u: goto L_08A58FAC;
    case 171u: goto L_08A59040;
    case 172u: goto L_08A5904C;
    case 173u: goto L_08A59060;
    case 174u: goto L_08A5906C;
    case 175u: goto L_08A5907C;
    case 176u: goto L_08A59090;
    case 177u: goto L_08A59094;
    case 178u: goto L_08A590AC;
    case 179u: goto L_08A590C8;
    case 180u: goto L_08A590D4;
    case 181u: goto L_08A590DC;
    case 182u: goto L_08A590F8;
    case 183u: goto L_08A5911C;
    case 184u: goto L_08A59120;
    case 185u: goto L_08A59124;
    case 186u: goto L_08A59128;
    case 187u: goto L_08A59138;
    case 188u: goto L_08A59144;
    case 189u: goto L_08A5914C;
    case 190u: goto L_08A59154;
    case 191u: goto L_08A5915C;
    case 192u: goto L_08A59164;
    case 193u: goto L_08A5916C;
    case 194u: goto L_08A59174;
    case 195u: goto L_08A5917C;
    case 196u: goto L_08A59198;
    case 197u: goto L_08A591A0;
    case 198u: goto L_08A591B4;
    case 199u: goto L_08A591C8;
    case 200u: goto L_08A591D8;
    case 201u: goto L_08A591E0;
    case 202u: goto L_08A59200;
    case 203u: goto L_08A5920C;
    case 204u: goto L_08A59218;
    case 205u: goto L_08A59240;
    case 206u: goto L_08A59248;
    case 207u: goto L_08A59250;
    case 208u: goto L_08A59270;
    case 209u: goto L_08A59278;
    case 210u: goto L_08A59280;
    case 211u: goto L_08A59288;
    case 212u: goto L_08A5929C;
    case 213u: goto L_08A592D0;
    case 214u: goto L_08A592E0;
    case 215u: goto L_08A592FC;
    case 216u: goto L_08A59308;
    case 217u: goto L_08A59310;
    case 218u: goto L_08A5932C;
    case 219u: goto L_08A59360;
    case 220u: goto L_08A5936C;
    case 221u: goto L_08A5939C;
    case 222u: goto L_08A593AC;
    case 223u: goto L_08A593B8;
    case 224u: goto L_08A593C4;
    case 225u: goto L_08A593D4;
    case 226u: goto L_08A593E8;
    case 227u: goto L_08A593F4;
    case 228u: goto L_08A5940C;
    case 229u: goto L_08A59418;
    case 230u: goto L_08A59420;
    case 231u: goto L_08A59434;
    case 232u: goto L_08A59448;
    case 233u: goto L_08A5944C;
    case 234u: goto L_08A5945C;
    case 235u: goto L_08A5946C;
    case 236u: goto L_08A5947C;
    case 237u: goto L_08A5948C;
    case 238u: goto L_08A59494;
    case 239u: goto L_08A594A0;
    case 240u: goto L_08A594B0;
    case 241u: goto L_08A594CC;
    case 242u: goto L_08A59508;
    case 243u: goto L_08A59514;
    case 244u: goto L_08A59520;
    case 245u: goto L_08A5952C;
    case 246u: goto L_08A59558;
    case 247u: goto L_08A59574;
    case 248u: goto L_08A59590;
    case 249u: goto L_08A595AC;
    case 250u: goto L_08A595B4;
    case 251u: goto L_08A595D0;
    case 252u: goto L_08A595D8;
    case 253u: goto L_08A595E0;
    case 254u: goto L_08A595E8;
    case 255u: goto L_08A595F0;
    case 256u: goto L_08A595F8;
    case 257u: goto L_08A59608;
    case 258u: goto L_08A59610;
    case 259u: goto L_08A5962C;
    case 260u: goto L_08A59634;
    case 261u: goto L_08A5966C;
    case 262u: goto L_08A59674;
    case 263u: goto L_08A59684;
    case 264u: goto L_08A596B4;
    case 265u: goto L_08A596BC;
    case 266u: goto L_08A596CC;
    case 267u: goto L_08A596DC;
    case 268u: goto L_08A596E8;
    case 269u: goto L_08A5970C;
    case 270u: goto L_08A5971C;
    case 271u: goto L_08A59728;
    case 272u: goto L_08A5973C;
    case 273u: goto L_08A59748;
    case 274u: goto L_08A59764;
    case 275u: goto L_08A59780;
    case 276u: goto L_08A597A0;
    case 277u: goto L_08A59804;
    case 278u: goto L_08A59850;
    case 279u: goto L_08A59854;
    case 280u: goto L_08A5987C;
    case 281u: goto L_08A5988C;
    case 282u: goto L_08A598A0;
    case 283u: goto L_08A598C8;
    case 284u: goto L_08A598CC;
    case 285u: goto L_08A598DC;
    case 286u: goto L_08A598EC;
    case 287u: goto L_08A59908;
    case 288u: goto L_08A59910;
    case 289u: goto L_08A59914;
    case 290u: goto L_08A5991C;
    case 291u: goto L_08A59928;
    case 292u: goto L_08A5992C;
    case 293u: goto L_08A59934;
    case 294u: goto L_08A59944;
    case 295u: goto L_08A59954;
    case 296u: goto L_08A59968;
    case 297u: goto L_08A5997C;
    case 298u: goto L_08A59980;
    case 299u: goto L_08A59990;
    case 300u: goto L_08A599C0;
    case 301u: goto L_08A599EC;
    case 302u: goto L_08A599F8;
    case 303u: goto L_08A59A0C;
    case 304u: goto L_08A59A24;
    case 305u: goto L_08A59A50;
    case 306u: goto L_08A59A98;
    case 307u: goto L_08A59AEC;
    case 308u: goto L_08A59B14;
    case 309u: goto L_08A59B2C;
    case 310u: goto L_08A59B44;
    case 311u: goto L_08A59B58;
    case 312u: goto L_08A59B6C;
    case 313u: goto L_08A59B70;
    case 314u: goto L_08A59B78;
    case 315u: goto L_08A59B80;
    case 316u: goto L_08A59B88;
    case 317u: goto L_08A59B90;
    case 318u: goto L_08A59B98;
    case 319u: goto L_08A59BA0;
    case 320u: goto L_08A59BB4;
    case 321u: goto L_08A59BB8;
    case 322u: goto L_08A59BC0;
    case 323u: goto L_08A59BC8;
    case 324u: goto L_08A59BD0;
    case 325u: goto L_08A59BD8;
    case 326u: goto L_08A59BE0;
    case 327u: goto L_08A59BE8;
    case 328u: goto L_08A59BF4;
    case 329u: goto L_08A59BFC;
    case 330u: goto L_08A59C04;
    case 331u: goto L_08A59C0C;
    case 332u: goto L_08A59C14;
    case 333u: goto L_08A59C24;
    case 334u: goto L_08A59C2C;
    case 335u: goto L_08A59C34;
    case 336u: goto L_08A59C44;
    case 337u: goto L_08A59C48;
    case 338u: goto L_08A59C50;
    case 339u: goto L_08A59C58;
    case 340u: goto L_08A59C64;
    case 341u: goto L_08A59C6C;
    case 342u: goto L_08A59C74;
    case 343u: goto L_08A59C78;
    case 344u: goto L_08A59C80;
    case 345u: goto L_08A59C88;
    case 346u: goto L_08A59C94;
    case 347u: goto L_08A59C9C;
    case 348u: goto L_08A59CA4;
    case 349u: goto L_08A59CA8;
    case 350u: goto L_08A59CB0;
    case 351u: goto L_08A59CB8;
    case 352u: goto L_08A59CD8;
    case 353u: goto L_08A59CF4;
    case 354u: goto L_08A59CFC;
    case 355u: goto L_08A59D40;
    case 356u: goto L_08A59D4C;
    case 357u: goto L_08A59D84;
    case 358u: goto L_08A59D98;
    case 359u: goto L_08A59DAC;
    case 360u: goto L_08A59DBC;
    case 361u: goto L_08A59DC8;
    case 362u: goto L_08A59DF0;
    case 363u: goto L_08A59DFC;
    case 364u: goto L_08A59E08;
    case 365u: goto L_08A59E10;
    case 366u: goto L_08A59E44;
    case 367u: goto L_08A59E54;
    case 368u: goto L_08A59E70;
    case 369u: goto L_08A59E78;
    case 370u: goto L_08A59E84;
    case 371u: goto L_08A59E88;
    case 372u: goto L_08A59E90;
    case 373u: goto L_08A59E98;
    case 374u: goto L_08A59EA0;
    case 375u: goto L_08A59EA8;
    case 376u: goto L_08A59EB0;
    case 377u: goto L_08A59EC4;
    case 378u: goto L_08A59EF0;
    case 379u: goto L_08A59F14;
    case 380u: goto L_08A59F3C;
    case 381u: goto L_08A59F48;
    case 382u: goto L_08A59F50;
    case 383u: goto L_08A59F70;
    case 384u: goto L_08A59F74;
    case 385u: goto L_08A59F9C;
    case 386u: goto L_08A59FA4;
    case 387u: goto L_08A59FB8;
    case 388u: goto L_08A59FF0;
    case 389u: goto L_08A59FF8;
    case 390u: goto L_08A59FFC;
    case 391u: goto L_08A5A018;
    case 392u: goto L_08A5A038;
    case 393u: goto L_08A5A080;
    case 394u: goto L_08A5A090;
    case 395u: goto L_08A5A098;
    case 396u: goto L_08A5A0A0;
    case 397u: goto L_08A5A0B0;
    case 398u: goto L_08A5A0B4;
    case 399u: goto L_08A5A0BC;
    case 400u: goto L_08A5A0C8;
    case 401u: goto L_08A5A0D4;
    case 402u: goto L_08A5A0E0;
    case 403u: goto L_08A5A0E8;
    case 404u: goto L_08A5A0EC;
    case 405u: goto L_08A5A0F4;
    case 406u: goto L_08A5A114;
    case 407u: goto L_08A5A13C;
    case 408u: goto L_08A5A140;
    case 409u: goto L_08A5A14C;
    case 410u: goto L_08A5A168;
    case 411u: goto L_08A5A184;
    case 412u: goto L_08A5A18C;
    case 413u: goto L_08A5A1A0;
    case 414u: goto L_08A5A1B8;
    case 415u: goto L_08A5A1C0;
    case 416u: goto L_08A5A1F0;
    case 417u: goto L_08A5A1FC;
    case 418u: goto L_08A5A214;
    case 419u: goto L_08A5A21C;
    case 420u: goto L_08A5A234;
    case 421u: goto L_08A5A240;
    case 422u: goto L_08A5A244;
    case 423u: goto L_08A5A250;
    case 424u: goto L_08A5A294;
    case 425u: goto L_08A5A2A4;
    case 426u: goto L_08A5A2CC;
    case 427u: goto L_08A5A300;
    case 428u: goto L_08A5A308;
    case 429u: goto L_08A5A314;
    case 430u: goto L_08A5A31C;
    case 431u: goto L_08A5A34C;
    case 432u: goto L_08A5A35C;
    case 433u: goto L_08A5A368;
    case 434u: goto L_08A5A370;
    case 435u: goto L_08A5A384;
    case 436u: goto L_08A5A394;
    case 437u: goto L_08A5A3A0;
    case 438u: goto L_08A5A3A8;
    case 439u: goto L_08A5A3B4;
    case 440u: goto L_08A5A3BC;
    case 441u: goto L_08A5A3D0;
    case 442u: goto L_08A5A3D8;
    case 443u: goto L_08A5A3E0;
    case 444u: goto L_08A5A3F0;
    case 445u: goto L_08A5A3FC;
    case 446u: goto L_08A5A404;
    case 447u: goto L_08A5A418;
    case 448u: goto L_08A5A424;
    case 449u: goto L_08A5A444;
    case 450u: goto L_08A5A4A4;
    case 451u: goto L_08A5A4B0;
    case 452u: goto L_08A5A4C4;
    case 453u: goto L_08A5A4D0;
    case 454u: goto L_08A5A4F0;
    case 455u: goto L_08A5A4FC;
    case 456u: goto L_08A5A510;
    case 457u: goto L_08A5A51C;
    case 458u: goto L_08A5A524;
    case 459u: goto L_08A5A534;
    case 460u: goto L_08A5A538;
    case 461u: goto L_08A5A544;
    case 462u: goto L_08A5A554;
    case 463u: goto L_08A5A55C;
    case 464u: goto L_08A5A56C;
    case 465u: goto L_08A5A584;
    case 466u: goto L_08A5A58C;
    case 467u: goto L_08A5A5A8;
    case 468u: goto L_08A5A5E4;
    case 469u: goto L_08A5A5F0;
    case 470u: goto L_08A5A60C;
    case 471u: goto L_08A5A618;
    case 472u: goto L_08A5A638;
    case 473u: goto L_08A5A640;
    case 474u: goto L_08A5A658;
    case 475u: goto L_08A5A65C;
    case 476u: goto L_08A5A664;
    case 477u: goto L_08A5A680;
    case 478u: goto L_08A5A69C;
    case 479u: goto L_08A5A6BC;
    case 480u: goto L_08A5A6CC;
    case 481u: goto L_08A5A6F8;
    case 482u: goto L_08A5A724;
    case 483u: goto L_08A5A764;
    case 484u: goto L_08A5A76C;
    case 485u: goto L_08A5A780;
    case 486u: goto L_08A5A790;
    case 487u: goto L_08A5A798;
    case 488u: goto L_08A5A7A0;
    case 489u: goto L_08A5A7B4;
    case 490u: goto L_08A5A7C0;
    case 491u: goto L_08A5A7C8;
    case 492u: goto L_08A5A7D4;
    case 493u: goto L_08A5A7DC;
    case 494u: goto L_08A5A7E8;
    case 495u: goto L_08A5A7F0;
    case 496u: goto L_08A5A834;
    case 497u: goto L_08A5A83C;
    case 498u: goto L_08A5A848;
    case 499u: goto L_08A5A88C;
    case 500u: goto L_08A5A8D8;
    case 501u: goto L_08A5A8E0;
    case 502u: goto L_08A5A8E8;
    case 503u: goto L_08A5A918;
    case 504u: goto L_08A5A92C;
    case 505u: goto L_08A5A940;
    case 506u: goto L_08A5A950;
    case 507u: goto L_08A5A95C;
    case 508u: goto L_08A5A984;
    case 509u: goto L_08A5A990;
    case 510u: goto L_08A5A99C;
    case 511u: goto L_08A5A9A4;
    case 512u: goto L_08A5A9B8;
    case 513u: goto L_08A5A9C8;
    case 514u: goto L_08A5A9D0;
    case 515u: goto L_08A5A9DC;
    case 516u: goto L_08A5AA08;
    case 517u: goto L_08A5AA10;
    case 518u: goto L_08A5AA38;
    case 519u: goto L_08A5AA40;
    case 520u: goto L_08A5AA54;
    case 521u: goto L_08A5AA5C;
    case 522u: goto L_08A5AA60;
    case 523u: goto L_08A5AA84;
    case 524u: goto L_08A5AA9C;
    case 525u: goto L_08A5AAAC;
    case 526u: goto L_08A5AAB0;
    case 527u: goto L_08A5AAB8;
    case 528u: goto L_08A5AAD0;
    case 529u: goto L_08A5AAD8;
    case 530u: goto L_08A5AAE8;
    case 531u: goto L_08A5AB04;
    case 532u: goto L_08A5AB44;
    case 533u: goto L_08A5AB78;
    case 534u: goto L_08A5ABA4;
    case 535u: goto L_08A5ABBC;
    case 536u: goto L_08A5ABC0;
    case 537u: goto L_08A5ABDC;
    case 538u: goto L_08A5ABEC;
    case 539u: goto L_08A5ABF4;
    case 540u: goto L_08A5ABF8;
    case 541u: goto L_08A5AC04;
    case 542u: goto L_08A5AC30;
    case 543u: goto L_08A5AC38;
    case 544u: goto L_08A5AC44;
    case 545u: goto L_08A5AC50;
    case 546u: goto L_08A5AC54;
    case 547u: goto L_08A5AC7C;
    case 548u: goto L_08A5AC94;
    case 549u: goto L_08A5ACA4;
    case 550u: goto L_08A5ACA8;
    case 551u: goto L_08A5ACB0;
    case 552u: goto L_08A5ACC8;
    case 553u: goto L_08A5ACE0;
    case 554u: goto L_08A5ACF8;
    case 555u: goto L_08A5AD08;
    case 556u: goto L_08A5AD18;
    case 557u: goto L_08A5AD1C;
    case 558u: goto L_08A5AD24;
    case 559u: goto L_08A5AD30;
    case 560u: goto L_08A5AD3C;
    case 561u: goto L_08A5AD44;
    case 562u: goto L_08A5AD48;
    case 563u: goto L_08A5AD78;
    case 564u: goto L_08A5ADA4;
    case 565u: goto L_08A5ADAC;
    case 566u: goto L_08A5AE2C;
    case 567u: goto L_08A5AE88;
    case 568u: goto L_08A5AE8C;
    case 569u: goto L_08A5AF24;
    case 570u: goto L_08A5AF34;
    case 571u: goto L_08A5AF5C;
    case 572u: goto L_08A5AF7C;
    case 573u: goto L_08A5AF8C;
    case 574u: goto L_08A5AF90;
    case 575u: goto L_08A5AF98;
    case 576u: goto L_08A5AFAC;
    case 577u: goto L_08A5B044;
    case 578u: goto L_08A5B054;
    case 579u: goto L_08A5B070;
    case 580u: goto L_08A5B084;
    case 581u: goto L_08A5B0A4;
    case 582u: goto L_08A5B0B0;
    case 583u: goto L_08A5B0C0;
    case 584u: goto L_08A5B0F4;
    case 585u: goto L_08A5B124;
    case 586u: goto L_08A5B154;
    case 587u: goto L_08A5B170;
    case 588u: goto L_08A5B180;
    case 589u: goto L_08A5B1FC;
    case 590u: goto L_08A5B208;
    case 591u: goto L_08A5B210;
    case 592u: goto L_08A5B23C;
    case 593u: goto L_08A5B2C4;
    case 594u: goto L_08A5B308;
    case 595u: goto L_08A5B320;
    case 596u: goto L_08A5B3A8;
    case 597u: goto L_08A5B3B4;
    case 598u: goto L_08A5B3C4;
    case 599u: goto L_08A5B3CC;
    case 600u: goto L_08A5B3D8;
    case 601u: goto L_08A5B3E0;
    case 602u: goto L_08A5B438;
    case 603u: goto L_08A5B458;
    case 604u: goto L_08A5B464;
    case 605u: goto L_08A5B474;
    case 606u: goto L_08A5B49C;
    case 607u: goto L_08A5B4AC;
    case 608u: goto L_08A5B4CC;
    case 609u: goto L_08A5B4D8;
    case 610u: goto L_08A5B4E8;
    case 611u: goto L_08A5B504;
    case 612u: goto L_08A5B514;
    case 613u: goto L_08A5B534;
    case 614u: goto L_08A5B560;
    case 615u: goto L_08A5B568;
    case 616u: goto L_08A5B56C;
    case 617u: goto L_08A5B57C;
    case 618u: goto L_08A5B614;
    case 619u: goto L_08A5B628;
    case 620u: goto L_08A5B630;
    case 621u: goto L_08A5B65C;
    case 622u: goto L_08A5B668;
    case 623u: goto L_08A5B690;
    case 624u: goto L_08A5B6B0;
    case 625u: goto L_08A5B6B4;
    case 626u: goto L_08A5B6C0;
    case 627u: goto L_08A5B6C4;
    case 628u: goto L_08A5B6D0;
    case 629u: goto L_08A5B710;
    case 630u: goto L_08A5B720;
    case 631u: goto L_08A5B728;
    case 632u: goto L_08A5B73C;
    case 633u: goto L_08A5B744;
    case 634u: goto L_08A5B754;
    case 635u: goto L_08A5B760;
    case 636u: goto L_08A5B78C;
    case 637u: goto L_08A5B7AC;
    case 638u: goto L_08A5B7BC;
    case 639u: goto L_08A5B7C8;
    case 640u: goto L_08A5B7E4;
    case 641u: goto L_08A5B800;
    case 642u: goto L_08A5B80C;
    case 643u: goto L_08A5B83C;
    case 644u: goto L_08A5B884;
    case 645u: goto L_08A5B88C;
    case 646u: goto L_08A5B8A4;
    case 647u: goto L_08A5B8B8;
    case 648u: goto L_08A5B8C0;
    case 649u: goto L_08A5B8C8;
    case 650u: goto L_08A5B8D8;
    case 651u: goto L_08A5B8FC;
    case 652u: goto L_08A5B900;
    case 653u: goto L_08A5B904;
    case 654u: goto L_08A5B90C;
    case 655u: goto L_08A5B954;
    case 656u: goto L_08A5B97C;
    case 657u: goto L_08A5B984;
    case 658u: goto L_08A5B990;
    case 659u: goto L_08A5B998;
    case 660u: goto L_08A5B9B8;
    case 661u: goto L_08A5B9C0;
    case 662u: goto L_08A5B9C4;
    case 663u: goto L_08A5B9E8;
    case 664u: goto L_08A5B9EC;
    case 665u: goto L_08A5BA0C;
    case 666u: goto L_08A5BA38;
    case 667u: goto L_08A5BA40;
    case 668u: goto L_08A5BA84;
    case 669u: goto L_08A5BA8C;
    case 670u: goto L_08A5BAB0;
    case 671u: goto L_08A5BAB8;
    case 672u: goto L_08A5BADC;
    case 673u: goto L_08A5BAE4;
    case 674u: goto L_08A5BB20;
    case 675u: goto L_08A5BB68;
    case 676u: goto L_08A5BB94;
    case 677u: goto L_08A5BBA8;
    case 678u: goto L_08A5BBB0;
    case 679u: goto L_08A5BBB8;
    case 680u: goto L_08A5BBE4;
    case 681u: goto L_08A5BC10;
    case 682u: goto L_08A5BC2C;
    case 683u: goto L_08A5BC84;
    case 684u: goto L_08A5BCAC;
    case 685u: goto L_08A5BCB8;
    case 686u: goto L_08A5BCC4;
    case 687u: goto L_08A5BCD0;
    case 688u: goto L_08A5BCF0;
    case 689u: goto L_08A5BCF4;
    case 690u: goto L_08A5BD04;
    case 691u: goto L_08A5BD2C;
    case 692u: goto L_08A5BD68;
    case 693u: goto L_08A5BDB4;
    case 694u: goto L_08A5BDC4;
    case 695u: goto L_08A5BE00;
    case 696u: goto L_08A5BE0C;
    case 697u: goto L_08A5BE48;
    case 698u: goto L_08A5BE4C;
    case 699u: goto L_08A5BE84;
    case 700u: goto L_08A5BEA4;
    case 701u: goto L_08A5BEC0;
    case 702u: goto L_08A5BED4;
    case 703u: goto L_08A5BEE0;
    case 704u: goto L_08A5BEFC;
    case 705u: goto L_08A5BF08;
    case 706u: goto L_08A5BF14;
    case 707u: goto L_08A5BF74;
    case 708u: goto L_08A5BF88;
    case 709u: goto L_08A5BF94;
    case 710u: goto L_08A5BFB0;
    case 711u: goto L_08A5BFB8;
    case 712u: goto L_08A5BFCC;
    case 713u: goto L_08A5BFD4;
    case 714u: goto L_08A5BFE0;
    case 715u: goto L_08A5BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A58000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (16384u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[18]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = ctx.fpr[22] + ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[18] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A58048;
L_08A58048:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08A58074:
    ctx.gpr[9] = (2233u << 16u);
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(-4760));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-4760)));
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 126u);
      if (branch_taken) {
          goto L_08A580B0;
      }
      goto L_08A58098;
    }
L_08A58098:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A580B0;
      }
      goto L_08A580A4;
    }
L_08A580A4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A582E0;
      }
      goto L_08A580B0;
    }
L_08A580B0:
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-66));
    ctx.gpr[10] = (ctx.gpr[6] < static_cast<std::uint32_t>(56) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A582E0;
      }
      goto L_08A580C0;
    }
L_08A580C0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(7040)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A580D8:
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-4760), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 72u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 77u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A582E0;
      }
      goto L_08A58100;
    }
L_08A58100:
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-4760), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 207u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 133u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A582E0;
      }
      goto L_08A58124;
    }
L_08A58124:
    ctx.gpr[6] = (0u | 27u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-4760), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 89u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 130u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A582E0;
      }
      goto L_08A5814C;
    }
L_08A5814C:
    ctx.gpr[6] = (0u | 225u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-4760), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A582E0;
      }
      goto L_08A5816C;
    }
L_08A5816C:
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-4760), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A582E0;
      }
      goto L_08A5818C;
    }
L_08A5818C:
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-4760), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 227u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 79u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A582E0;
      }
      goto L_08A581B4;
    }
L_08A581B4:
    ctx.gpr[6] = (0u | 168u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-4760), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 110u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 252u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A582E0;
      }
      goto L_08A581DC;
    }
L_08A581DC:
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-4760), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A582E0;
      }
      goto L_08A581F8;
    }
L_08A581F8:
    ctx.gpr[6] = (0u | 199u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-4760), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 144u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 203u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A582E0;
      }
      goto L_08A58220;
    }
L_08A58220:
    ctx.gpr[6] = (0u | 86u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-4760), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 212u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 146u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A582E0;
      }
      goto L_08A58248;
    }
L_08A58248:
    ctx.gpr[6] = (0u | 229u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-4760), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 125u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 126u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A582E0;
      }
      goto L_08A58270;
    }
L_08A58270:
    ctx.gpr[6] = (0u | 132u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-4760), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 146u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 197u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A582E0;
      }
      goto L_08A58298;
    }
L_08A58298:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A582E0;
      }
      goto L_08A582A0;
    }
L_08A582A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A582E0;
      }
      goto L_08A582A8;
    }
L_08A582A8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(31)));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A582C8;
      }
      goto L_08A582C0;
    }
L_08A582C0:
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08A582C8;
L_08A582C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A582E0;
      }
      goto L_08A582D0;
    }
L_08A582D0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A582E0;
L_08A582E0:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A582F4;
      }
      goto L_08A582E8;
    }
L_08A582E8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A582E8;
      }
      goto L_08A582F4;
    }
L_08A582F4:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A58300;
      }
      goto L_08A582FC;
    }
L_08A582FC:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    goto L_08A58300;
L_08A58300:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58308:
    ctx.gpr[8] = (2233u << 16u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(-4760));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-4760)));
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (0u | 126u);
      if (branch_taken) {
          goto L_08A58344;
      }
      goto L_08A5832C;
    }
L_08A5832C:
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A58344;
      }
      goto L_08A58338;
    }
L_08A58338:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58500;
      }
      goto L_08A58344;
    }
L_08A58344:
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(-66));
    ctx.gpr[11] = (ctx.gpr[10] < static_cast<std::uint32_t>(56) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58500;
      }
      goto L_08A58354;
    }
L_08A58354:
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[10]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(7264)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5836C:
    ctx.gpr[6] = (0u | 174u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58500;
      }
      goto L_08A58384;
    }
L_08A58384:
    ctx.gpr[6] = (0u | 75u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[7] = (0u | 151u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58500;
      }
      goto L_08A583A0;
    }
L_08A583A0:
    ctx.gpr[6] = (0u | 77u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 155u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 210u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58500;
      }
      goto L_08A583C0;
    }
L_08A583C0:
    ctx.gpr[6] = (0u | 225u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58500;
      }
      goto L_08A583D8;
    }
L_08A583D8:
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58500;
      }
      goto L_08A583F0;
    }
L_08A583F0:
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58500;
      }
      goto L_08A58408;
    }
L_08A58408:
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 227u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 79u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58500;
      }
      goto L_08A58428;
    }
L_08A58428:
    ctx.gpr[6] = (0u | 151u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 82u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 197u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58500;
      }
      goto L_08A58448;
    }
L_08A58448:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58500;
      }
      goto L_08A5845C;
    }
L_08A5845C:
    ctx.gpr[6] = (0u | 199u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 144u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 203u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58500;
      }
      goto L_08A5847C;
    }
L_08A5847C:
    ctx.gpr[6] = (0u | 86u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 212u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 146u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58500;
      }
      goto L_08A5849C;
    }
L_08A5849C:
    ctx.gpr[6] = (0u | 229u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 125u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 126u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58500;
      }
      goto L_08A584BC;
    }
L_08A584BC:
    ctx.gpr[6] = (0u | 132u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 146u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 197u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58500;
      }
      goto L_08A584DC;
    }
L_08A584DC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58500;
      }
      goto L_08A584F0;
    }
L_08A584F0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A58500;
L_08A58500:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A58514;
      }
      goto L_08A58508;
    }
L_08A58508:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A58508;
      }
      goto L_08A58514;
    }
L_08A58514:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A58520;
      }
      goto L_08A5851C;
    }
L_08A5851C:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    goto L_08A58520;
L_08A58520:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58528:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22896));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5854Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(13928));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5854Cu) goto L_08A5854C;
    return;
L_08A5854C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A58558u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7088));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x08A58558u) goto L_08A58558;
    return;
L_08A58558:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58564:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A58578u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A58578u) goto L_08A58578;
    return;
L_08A58578:
    ctx.gpr[6] = (1217u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5858Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7607));
    goto L_08A58BD0;
L_08A5858C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5859C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-672));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A585D8u);
    ctx.gpr[30] = (0u | 0u);
    ctx.pc = 0x08B0BCF4u;
    return;
L_08A585D8:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A58600;
      }
      goto L_08A585E4;
    }
L_08A585E4:
    ctx.gpr[19] = (2226u << 16u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[21] = (0u | 4096u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(360));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(7488));
      if (branch_taken) {
          goto L_08A58608;
      }
      goto L_08A58600;
    }
L_08A58600:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A58680;
      }
      goto L_08A58608;
    }
L_08A58608:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A58614u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.pc = 0x08B0BD04u;
    return;
L_08A58614:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A58634;
      }
      goto L_08A5861C;
    }
L_08A5861C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[4] = (ctx.gpr[4] & 61440u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A58644;
      }
      goto L_08A5862C;
    }
L_08A5862C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58674;
      }
      goto L_08A58634;
    }
L_08A58634:
    ctx.gpr[31] = (0x08A5863Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.pc = 0x08B0BD14u;
    return;
L_08A5863C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[30] | 0u);
      if (branch_taken) {
          goto L_08A58680;
      }
      goto L_08A58644;
    }
L_08A58644:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58678;
      }
      goto L_08A5864C;
    }
L_08A5864C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A58660u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08A58660u) goto L_08A58660;
    return;
L_08A58660:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5866Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A5859C;
L_08A5866C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[30] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A58678;
      }
      goto L_08A58674;
    }
L_08A58674:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    goto L_08A58678;
L_08A58678:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58608;
      }
      goto L_08A58680;
    }
L_08A58680:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A586B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-672));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A586ECu);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.pc = 0x08B0BCF4u;
    return;
L_08A586EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A58718;
      }
      goto L_08A586F4;
    }
L_08A586F4:
    ctx.gpr[23] = (2226u << 16u);
    ctx.gpr[22] = (2226u << 16u);
    ctx.gpr[30] = (0u | 4096u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(7488));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(7496));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A58720;
      }
      goto L_08A58718;
    }
L_08A58718:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A587D8;
      }
      goto L_08A58720;
    }
L_08A58720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[31] = (0x08A5872Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.pc = 0x08B0BD04u;
    return;
L_08A5872C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A5874C;
      }
      goto L_08A58734;
    }
L_08A58734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[4] = (ctx.gpr[4] & 61440u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A5875C;
      }
      goto L_08A58744;
    }
L_08A58744:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58790;
      }
      goto L_08A5874C;
    }
L_08A5874C:
    ctx.gpr[31] = (0x08A58754u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.pc = 0x08B0BD14u;
    return;
L_08A58754:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A587D8;
      }
      goto L_08A5875C;
    }
L_08A5875C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A587D0;
      }
      goto L_08A58764;
    }
L_08A58764:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A58778u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08A58778u) goto L_08A58778;
    return;
L_08A58778:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A58788u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08A586B0;
L_08A58788:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A587D0;
      }
      goto L_08A58790;
    }
L_08A58790:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A587A4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08A587A4u) goto L_08A587A4;
    return;
L_08A587A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7068)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A587B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A587B0u) goto L_08A587B0;
    return;
L_08A587B0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    goto L_08A587D0;
L_08A587D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58720;
      }
      goto L_08A587D8;
    }
L_08A587D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58808:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A588DC;
      }
      goto L_08A58820;
    }
L_08A58820:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A588CC;
      }
      goto L_08A58834;
    }
L_08A58834:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    goto L_08A5883C;
L_08A5883C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[10] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A588B8;
      }
      goto L_08A5885C;
    }
L_08A5885C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_08A588B8;
L_08A588B8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A5883C;
      }
      goto L_08A588CC;
    }
L_08A588CC:
    ctx.gpr[6] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A58820;
      }
      goto L_08A588DC;
    }
L_08A588DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A588E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A58968;
      }
      goto L_08A58908;
    }
L_08A58908:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5891Cu);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-24300));
    goto L_08A5859C;
L_08A5891C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24292));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_08A58958;
      }
      goto L_08A58940;
    }
L_08A58940:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7060)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A58950u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58950u) goto L_08A58950;
    return;
L_08A58950:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5898C;
      }
      goto L_08A58958;
    }
L_08A58958:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A58968u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08A58968u) goto L_08A58968;
    return;
L_08A58968:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7072), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A58980u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A586B0;
L_08A58980:
    ctx.gpr[31] = (0x08A58988u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A58808;
L_08A58988:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08A5898C;
L_08A5898C:
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
L_08A589A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7072)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58A54;
      }
      goto L_08A589C8;
    }
L_08A589C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58A54;
      }
      goto L_08A589D4;
    }
L_08A589D4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7068)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A589E8u);
    ctx.gpr[17] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A589E8u) goto L_08A589E8;
    return;
L_08A589E8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A58A54;
      }
      goto L_08A589F4;
    }
L_08A589F4:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[18]);
    goto L_08A589F8;
L_08A589F8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A58A3C;
      }
      goto L_08A58A24;
    }
L_08A58A24:
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58A44;
      }
      goto L_08A58A30;
    }
L_08A58A30:
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A58A4C;
      }
      goto L_08A58A3C;
    }
L_08A58A3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A58A58;
      }
      goto L_08A58A44;
    }
L_08A58A44:
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    goto L_08A58A4C;
L_08A58A4C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A589F8;
      }
      goto L_08A58A54;
    }
L_08A58A54:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A58A58;
L_08A58A58:
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
L_08A58A70:
    ctx.gpr[4] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7072)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58A7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A58A94u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08A589A4;
L_08A58A94:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58AB8;
      }
      goto L_08A58AA0;
    }
L_08A58AA0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A58AB8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7504));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08A58AB8u) goto L_08A58AB8;
    return;
L_08A58AB8:
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
L_08A58AD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-18892));
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A58B04u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A58A7C;
L_08A58B04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58B24;
      }
      goto L_08A58B0C;
    }
L_08A58B0C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A58B1Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B0BD24u;
    return;
L_08A58B1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58B34;
      }
      goto L_08A58B24;
    }
L_08A58B24:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A58B34u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B0BD24u;
    return;
L_08A58B34:
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
L_08A58B50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-18828));
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A58B84u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A58A7C;
L_08A58B84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58BA4;
      }
      goto L_08A58B8C;
    }
L_08A58B8C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A58B9Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B0BCD4u;
    return;
L_08A58B9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58BB4;
      }
      goto L_08A58BA4;
    }
L_08A58BA4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A58BB4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B0BCD4u;
    return;
L_08A58BB4:
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
L_08A58BD0:
    ctx.gpr[8] = (40503u << 16u);
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(31161));
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A58D0C;
      }
      goto L_08A58BE8;
    }
L_08A58BE8:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] << 8u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[2] << 16u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[2] = (ctx.gpr[2] << 24u);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[2]);
    ctx.gpr[11] = (ctx.gpr[11] << 8u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[7]);
    ctx.gpr[10] = (ctx.gpr[3] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[2] << 16u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[2] << 24u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.gpr[11] = (ctx.gpr[2] << 8u);
    ctx.gpr[11] = (ctx.gpr[3] + ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] << 16u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11)));
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[2] << 24u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[6] >> 13u);
    ctx.gpr[7] = (ctx.gpr[7] ^ ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[10] = (ctx.gpr[7] << 8u);
    ctx.gpr[8] = (ctx.gpr[8] ^ ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[8] >> 13u);
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[6] >> 12u);
    ctx.gpr[7] = (ctx.gpr[7] ^ ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[10] = (ctx.gpr[7] << 16u);
    ctx.gpr[8] = (ctx.gpr[8] ^ ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[8] >> 5u);
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[6] >> 3u);
    ctx.gpr[7] = (ctx.gpr[7] ^ ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[10] = (ctx.gpr[7] << 10u);
    ctx.gpr[8] = (ctx.gpr[8] ^ ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[8] >> 15u);
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-12));
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A58BE8;
      }
      goto L_08A58D0C;
    }
L_08A58D0C:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[5] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A58FAC;
      }
      goto L_08A58D20;
    }
L_08A58D20:
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[9]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(7536)));
    jump_target = ctx.gpr[1];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58D38:
    ctx.gpr[11] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(10)));
    ctx.gpr[12] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[3] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(1)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(3)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(5)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[13] = (ctx.gpr[6] << 24u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(6)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(7)));
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(9)));
    ctx.gpr[15] = (ctx.gpr[6] << 24u);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[14] << 16u);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[11] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[10] = (ctx.gpr[10] << 8u);
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    ctx.gpr[11] = (ctx.gpr[12] + ctx.gpr[15]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[13]);
      if (branch_taken) {
          goto L_08A58DF8;
      }
      goto L_08A58DA0;
    }
L_08A58DA0:
    ctx.gpr[11] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(1)));
    ctx.gpr[12] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(3)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(5)));
    ctx.gpr[13] = (ctx.gpr[8] << 24u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(6)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(7)));
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(9)));
    ctx.gpr[15] = (ctx.gpr[3] << 24u);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (ctx.gpr[14] << 16u);
    ctx.gpr[3] = (ctx.gpr[6] + ctx.gpr[3]);
    ctx.gpr[6] = (ctx.gpr[11] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[10] = (ctx.gpr[10] << 8u);
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    ctx.gpr[11] = (ctx.gpr[12] + ctx.gpr[15]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[13]);
    goto L_08A58DF8;
L_08A58DF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[3] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A58E50;
      }
      goto L_08A58E00;
    }
L_08A58E00:
    ctx.gpr[11] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(1)));
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(3)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(5)));
    ctx.gpr[12] = (ctx.gpr[8] << 24u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(6)));
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(7)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[13] = (ctx.gpr[13] << 24u);
    ctx.gpr[11] = (ctx.gpr[11] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[10] = (ctx.gpr[10] << 8u);
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    ctx.gpr[11] = (ctx.gpr[3] + ctx.gpr[13]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[12]);
    goto L_08A58E50;
L_08A58E50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58E9C;
      }
      goto L_08A58E58;
    }
L_08A58E58:
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(3)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(5)));
    ctx.gpr[3] = (ctx.gpr[8] << 24u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(6)));
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(7)));
    ctx.gpr[10] = (ctx.gpr[2] << 8u);
    ctx.gpr[2] = (ctx.gpr[12] << 16u);
    ctx.gpr[12] = (ctx.gpr[13] << 24u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[12]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[3]);
    goto L_08A58E9C;
L_08A58E9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A58EE0;
      }
      goto L_08A58EA4;
    }
L_08A58EA4:
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    ctx.gpr[2] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(3)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(5)));
    ctx.gpr[11] = (ctx.gpr[8] << 24u);
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(6)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[3] << 8u);
    ctx.gpr[3] = (ctx.gpr[12] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[11]);
    goto L_08A58EE0;
L_08A58EE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08A58F1C;
      }
      goto L_08A58EE8;
    }
L_08A58EE8:
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(3)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(5)));
    ctx.gpr[3] = (ctx.gpr[8] << 24u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[2] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[3]);
    goto L_08A58F1C;
L_08A58F1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A58F4C;
      }
      goto L_08A58F24;
    }
L_08A58F24:
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(3)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[11] << 24u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[11]);
    goto L_08A58F4C;
L_08A58F4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58F70;
      }
      goto L_08A58F54;
    }
L_08A58F54:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[9] << 8u);
    ctx.gpr[9] = (ctx.gpr[10] << 16u);
    ctx.gpr[10] = (ctx.gpr[11] << 24u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    goto L_08A58F70;
L_08A58F70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08A58F8C;
      }
      goto L_08A58F78;
    }
L_08A58F78:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[9] << 8u);
    ctx.gpr[9] = (ctx.gpr[10] << 16u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[9]);
    goto L_08A58F8C;
L_08A58F8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A58FA0;
      }
      goto L_08A58F94;
    }
L_08A58F94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    goto L_08A58FA0;
L_08A58FA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A58FAC;
      }
      goto L_08A58FA8;
    }
L_08A58FA8:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_08A58FAC;
L_08A58FAC:
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] >> 13u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] >> 13u);
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[6] >> 12u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] >> 5u);
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[6] >> 3u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 10u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] >> 15u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] ^ ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59040:
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A59060;
      }
      goto L_08A5904C;
    }
L_08A5904C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A5904C;
      }
      goto L_08A59060;
    }
L_08A59060:
    ctx.gpr[2] = (ctx.gpr[5] << 3u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5906C:
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A590C8;
      }
      goto L_08A5907C;
    }
L_08A5907C:
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (2229u << 16u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7048));
      if (branch_taken) {
          goto L_08A590AC;
      }
      goto L_08A59090;
    }
L_08A59090:
    ctx.gpr[4] = (ctx.gpr[4] >> 24u);
    goto L_08A59094;
L_08A59094:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A59120;
      }
      goto L_08A590AC;
    }
L_08A590AC:
    ctx.gpr[4] = (ctx.gpr[4] >> 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A59120;
      }
      goto L_08A590C8;
    }
L_08A590C8:
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A590F8;
      }
      goto L_08A590D4;
    }
L_08A590D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5911C;
      }
      goto L_08A590DC;
    }
L_08A590DC:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7048));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A59120;
      }
      goto L_08A590F8;
    }
L_08A590F8:
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7048));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A59120;
      }
      goto L_08A5911C;
    }
L_08A5911C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A59120;
L_08A59120:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59124:
    // nop
    goto L_08A59128;
L_08A59128:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A5914C;
      }
      goto L_08A59138;
    }
L_08A59138:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A59154;
      }
      goto L_08A59144;
    }
L_08A59144:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A5916C;
      }
      goto L_08A5914C;
    }
L_08A5914C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A591D8;
      }
      goto L_08A59154;
    }
L_08A59154:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A591C8;
      }
      goto L_08A5915C;
    }
L_08A5915C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A591A0;
      }
      goto L_08A59164;
    }
L_08A59164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A591D8;
      }
      goto L_08A5916C;
    }
L_08A5916C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A591B4;
      }
      goto L_08A59174;
    }
L_08A59174:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A591C8;
      }
      goto L_08A5917C;
    }
L_08A5917C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[2] = (0u | 1u);
        goto L_08A59198;
    }
    goto L_08A59198;
L_08A59198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A591D8;
      }
      goto L_08A591A0;
    }
L_08A591A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A591D8;
      }
      goto L_08A591B4;
    }
L_08A591B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A591D8;
      }
      goto L_08A591C8;
    }
L_08A591C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08A591D8;
L_08A591D8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A591E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A59200u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 870u, 0x08AEF180u>(ctx, &aot_mem) && ctx.pc == 0x08A59200u) goto L_08A59200;
    return;
L_08A59200:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A5920Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08A5920Cu) goto L_08A5920C;
    return;
L_08A5920C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A59248;
      }
      goto L_08A59218;
    }
L_08A59218:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] & 8u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A59250;
      }
      goto L_08A59240;
    }
L_08A59240:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59270;
      }
      goto L_08A59248;
    }
L_08A59248:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A59288;
      }
      goto L_08A59250;
    }
L_08A59250:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] & 8u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A59250;
      }
      goto L_08A59270;
    }
L_08A59270:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59280;
      }
      goto L_08A59278;
    }
L_08A59278:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A59288;
      }
      goto L_08A59280;
    }
L_08A59280:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (0u | 1u);
    goto L_08A59288;
L_08A59288:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5929C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A592D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A592D0u) goto L_08A592D0;
    return;
L_08A592D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A592E0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 555u, 0x0891713Cu>(ctx, &aot_mem) && ctx.pc == 0x08A592E0u) goto L_08A592E0;
    return;
L_08A592E0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A59310;
      }
      goto L_08A592FC;
    }
L_08A592FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A59308u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 265u, 0x088B9728u>(ctx, &aot_mem) && ctx.pc == 0x08A59308u) goto L_08A59308;
    return;
L_08A59308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_08A59310;
L_08A59310:
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
L_08A5932C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[6] = (0u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A59360u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08A594CC;
L_08A59360:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5936C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 61u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A593B8;
      }
      goto L_08A5939C;
    }
L_08A5939C:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A593ACu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08A593ACu) goto L_08A593AC;
    return;
L_08A593AC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A594B0;
      }
      goto L_08A593B8;
    }
L_08A593B8:
    ctx.gpr[5] = (0u | 64u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A59420;
      }
      goto L_08A593C4;
    }
L_08A593C4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(-8));
    ctx.gpr[31] = (0x08A593D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A593D4u) goto L_08A593D4;
    return;
L_08A593D4:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A593E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7584));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08A593E8u) goto L_08A593E8;
    return;
L_08A593E8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5940C;
      }
      goto L_08A593F4;
    }
L_08A593F4:
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5940Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7588));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED5D8u>(ctx, &aot_mem) && ctx.pc == 0x08A5940Cu) goto L_08A5940C;
    return;
L_08A5940C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A59418u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED5D8u>(ctx, &aot_mem) && ctx.pc == 0x08A59418u) goto L_08A59418;
    return;
L_08A59418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A594B0;
      }
      goto L_08A59420;
    }
L_08A59420:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A59434u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7592));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 414u, 0x08AED700u>(ctx, &aot_mem) && ctx.pc == 0x08A59434u) goto L_08A59434;
    return;
L_08A59434:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5944C;
      }
      goto L_08A59448;
    }
L_08A59448:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A5944C;
L_08A5944C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5945Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7596));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08A5945Cu) goto L_08A5945C;
    return;
L_08A5945C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59494;
      }
      goto L_08A5946C;
    }
L_08A5946C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5947Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 530u, 0x08AEDE84u>(ctx, &aot_mem) && ctx.pc == 0x08A5947Cu) goto L_08A5947C;
    return;
L_08A5947C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5948Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7588));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED5D8u>(ctx, &aot_mem) && ctx.pc == 0x08A5948Cu) goto L_08A5948C;
    return;
L_08A5948C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A594A0;
      }
      goto L_08A59494;
    }
L_08A59494:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A594A0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED5D8u>(ctx, &aot_mem) && ctx.pc == 0x08A594A0u) goto L_08A594A0;
    return;
L_08A594A0:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A594B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7608));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED5D8u>(ctx, &aot_mem) && ctx.pc == 0x08A594B0u) goto L_08A594B0;
    return;
L_08A594B0:
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
L_08A594CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A59508u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7584));
    goto L_08A5929C;
L_08A59508:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A59514u);
    ctx.gpr[5] = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 398u, 0x08AED634u>(ctx, &aot_mem) && ctx.pc == 0x08A59514u) goto L_08A59514;
    return;
L_08A59514:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A59574;
      }
      goto L_08A59520;
    }
L_08A59520:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5952Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A5929C;
L_08A5952C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] >> 29u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A59558u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 294u, 0x088D27E4u>(ctx, &aot_mem) && ctx.pc == 0x08A59558u) goto L_08A59558;
    return;
L_08A59558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A596E8;
      }
      goto L_08A59574;
    }
L_08A59574:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A59590u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 555u, 0x0891713Cu>(ctx, &aot_mem) && ctx.pc == 0x08A59590u) goto L_08A59590;
    return;
L_08A59590:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A595B4;
      }
      goto L_08A595AC;
    }
L_08A595AC:
    ctx.gpr[31] = (0x08A595B4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 265u, 0x088B9728u>(ctx, &aot_mem) && ctx.pc == 0x08A595B4u) goto L_08A595B4;
    return;
L_08A595B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 115u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 102u);
      if (branch_taken) {
          goto L_08A595F8;
      }
      goto L_08A595D0;
    }
L_08A595D0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 100u);
      if (branch_taken) {
          goto L_08A59684;
      }
      goto L_08A595D8;
    }
L_08A595D8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 99u);
      if (branch_taken) {
          goto L_08A59634;
      }
      goto L_08A595E0;
    }
L_08A595E0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 37u);
      if (branch_taken) {
          goto L_08A59610;
      }
      goto L_08A595E8;
    }
L_08A595E8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A596CC;
      }
      goto L_08A595F0;
    }
L_08A595F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A596DC;
      }
      goto L_08A595F8;
    }
L_08A595F8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[31] = (0x08A59608u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A5929C;
L_08A59608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A596DC;
      }
      goto L_08A59610;
    }
L_08A59610:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A5962Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A5929C;
L_08A5962C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A596DC;
      }
      goto L_08A59634;
    }
L_08A59634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A59674;
      }
      goto L_08A5966C;
    }
L_08A5966C:
    ctx.gpr[31] = (0x08A59674u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 265u, 0x088B9728u>(ctx, &aot_mem) && ctx.pc == 0x08A59674u) goto L_08A59674;
    return;
L_08A59674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A596DC;
      }
      goto L_08A59684;
    }
L_08A59684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A596BC;
      }
      goto L_08A596B4;
    }
L_08A596B4:
    ctx.gpr[31] = (0x08A596BCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 265u, 0x088B9728u>(ctx, &aot_mem) && ctx.pc == 0x08A596BCu) goto L_08A596BC;
    return;
L_08A596BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A596DC;
      }
      goto L_08A596CC;
    }
L_08A596CC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A596DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7612));
    goto L_08A5929C;
L_08A596DC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A59508;
      }
      goto L_08A596E8;
    }
L_08A596E8:
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
L_08A5970C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5971Cu);
    // nop
    goto L_08A59748;
L_08A5971C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59728:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5973Cu);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08A5973Cu) goto L_08A5973C;
    return;
L_08A5973C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59748:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59780;
      }
      goto L_08A59764;
    }
L_08A59764:
    ctx.gpr[7] = (2199u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A59780u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(17520));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 356u, 0x08AF5BC0u>(ctx, &aot_mem) && ctx.pc == 0x08A59780u) goto L_08A59780;
    return;
L_08A59780:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A597A0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59804:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A59990;
      }
      goto L_08A59850;
    }
L_08A59850:
    ctx.gpr[18] = (0u | 0u);
    goto L_08A59854;
L_08A59854:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[7] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A5988C;
      }
      goto L_08A5987C;
    }
L_08A5987C:
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A598A0;
      }
      goto L_08A5988C;
    }
L_08A5988C:
    ctx.gpr[7] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_08A598A0;
L_08A598A0:
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A598CC;
      }
      goto L_08A598C8;
    }
L_08A598C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A598CC;
L_08A598CC:
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A59980;
      }
      goto L_08A598DC;
    }
L_08A598DC:
    ctx.gpr[4] = (ctx.gpr[30] << 3u);
    ctx.gpr[22] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[30] << 4u);
    ctx.gpr[22] = (ctx.gpr[30] + ctx.gpr[22]);
    goto L_08A598EC;
L_08A598EC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A59910;
      }
      goto L_08A59908;
    }
L_08A59908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08A59914;
      }
      goto L_08A59910;
    }
L_08A59910:
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[22]);
    goto L_08A59914;
L_08A59914:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08A59928;
      }
      goto L_08A5991C;
    }
L_08A5991C:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A5992C;
      }
      goto L_08A59928;
    }
L_08A59928:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08A5992C;
L_08A5992C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[30] << 3u);
      if (branch_taken) {
          goto L_08A59944;
      }
      goto L_08A59934;
    }
L_08A59934:
    ctx.gpr[4] = (ctx.gpr[30] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A59954;
      }
      goto L_08A59944;
    }
L_08A59944:
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    goto L_08A59954;
L_08A59954:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A59968u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08A597A0;
L_08A59968:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) > 0;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-10));
      if (branch_taken) {
          goto L_08A598EC;
      }
      goto L_08A5997C;
    }
L_08A5997C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    goto L_08A59980;
L_08A59980:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A59854;
      }
      goto L_08A59990;
    }
L_08A59990:
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
L_08A599C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A59A0C;
      }
      goto L_08A599EC;
    }
L_08A599EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A599F8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 104u, 0x08974660u>(ctx, &aot_mem) && ctx.pc == 0x08A599F8u) goto L_08A599F8;
    return;
L_08A599F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A599EC;
      }
      goto L_08A59A0C;
    }
L_08A59A0C:
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
L_08A59A24:
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
L_08A59A50:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59A98:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59AEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A59CB8;
      }
      goto L_08A59B14;
    }
L_08A59B14:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-30316), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A59B2Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A5A5A8;
L_08A59B2C:
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-30316), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08A59B44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 108u, 0x089C08ACu>(ctx, &aot_mem) && ctx.pc == 0x08A59B44u) goto L_08A59B44;
    return;
L_08A59B44:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A59B98;
      }
      goto L_08A59B58;
    }
L_08A59B58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A59B78;
      }
      goto L_08A59B6C;
    }
L_08A59B6C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    goto L_08A59B70;
L_08A59B70:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A59B70;
      }
      goto L_08A59B78;
    }
L_08A59B78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59B98;
      }
      goto L_08A59B80;
    }
L_08A59B80:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59B98;
      }
      goto L_08A59B88;
    }
L_08A59B88:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59B98;
      }
      goto L_08A59B90;
    }
L_08A59B90:
    ctx.gpr[31] = (0x08A59B98u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08A59B98u) goto L_08A59B98;
    return;
L_08A59B98:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59BE0;
      }
      goto L_08A59BA0;
    }
L_08A59BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A59BC0;
      }
      goto L_08A59BB4;
    }
L_08A59BB4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08A59BB8;
L_08A59BB8:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A59BB8;
      }
      goto L_08A59BC0;
    }
L_08A59BC0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59BE0;
      }
      goto L_08A59BC8;
    }
L_08A59BC8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59BE0;
      }
      goto L_08A59BD0;
    }
L_08A59BD0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59BE0;
      }
      goto L_08A59BD8;
    }
L_08A59BD8:
    ctx.gpr[31] = (0x08A59BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08A59BE0u) goto L_08A59BE0;
    return;
L_08A59BE0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59C0C;
      }
      goto L_08A59BE8;
    }
L_08A59BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A59C0C;
      }
      goto L_08A59BF4;
    }
L_08A59BF4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59C0C;
      }
      goto L_08A59BFC;
    }
L_08A59BFC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59C0C;
      }
      goto L_08A59C04;
    }
L_08A59C04:
    ctx.gpr[31] = (0x08A59C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08A59C0Cu) goto L_08A59C0C;
    return;
L_08A59C0C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08A59CA8;
      }
      goto L_08A59C14;
    }
L_08A59C14:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A59C80;
      }
      goto L_08A59C24;
    }
L_08A59C24:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A59C74;
      }
      goto L_08A59C2C;
    }
L_08A59C2C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
        goto L_08A59C78;
    }
    goto L_08A59C34;
L_08A59C34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A59C50;
      }
      goto L_08A59C44;
    }
L_08A59C44:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    goto L_08A59C48;
L_08A59C48:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A59C48;
      }
      goto L_08A59C50;
    }
L_08A59C50:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
        goto L_08A59C78;
    }
    goto L_08A59C58;
L_08A59C58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
        goto L_08A59C78;
    }
    goto L_08A59C64;
L_08A59C64:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
        goto L_08A59C78;
    }
    goto L_08A59C6C;
L_08A59C6C:
    ctx.gpr[31] = (0x08A59C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08A59C74u) goto L_08A59C74;
    return;
L_08A59C74:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    goto L_08A59C78;
L_08A59C78:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A59C24;
      }
      goto L_08A59C80;
    }
L_08A59C80:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08A59CA8;
      }
      goto L_08A59C88;
    }
L_08A59C88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
        goto L_08A59CA8;
    }
    goto L_08A59C94;
L_08A59C94:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
        goto L_08A59CA8;
    }
    goto L_08A59C9C;
L_08A59C9C:
    ctx.gpr[31] = (0x08A59CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08A59CA4u) goto L_08A59CA4;
    return;
L_08A59CA4:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    goto L_08A59CA8;
L_08A59CA8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59CB8;
      }
      goto L_08A59CB0;
    }
L_08A59CB0:
    ctx.gpr[31] = (0x08A59CB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08A59CB8u) goto L_08A59CB8;
    return;
L_08A59CB8:
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
L_08A59CD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A59CF4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A5A250;
L_08A59CF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A59EB0;
      }
      goto L_08A59CFC;
    }
L_08A59CFC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A59E54;
      }
      goto L_08A59D40;
    }
L_08A59D40:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
        goto L_08A59E44;
    }
    goto L_08A59D4C;
L_08A59D4C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A59DC8;
      }
      goto L_08A59D84;
    }
L_08A59D84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A59D98u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08A59D98u) goto L_08A59D98;
    return;
L_08A59D98:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08A59DC8;
      }
      goto L_08A59DAC;
    }
L_08A59DAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A59DBCu);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08A59DBCu) goto L_08A59DBC;
    return;
L_08A59DBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_08A59DC8;
L_08A59DC8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A59E10;
      }
      goto L_08A59DF0;
    }
L_08A59DF0:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
        goto L_08A59E08;
    }
    goto L_08A59DFC;
L_08A59DFC:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_08A59E08;
L_08A59E08:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A59DF0;
      }
      goto L_08A59E10;
    }
L_08A59E10:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(18));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    goto L_08A59E44;
L_08A59E44:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08A59E78;
      }
      goto L_08A59E54;
    }
L_08A59E54:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(62));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08A59E70u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 596u, 0x08B06938u>(ctx, &aot_mem) && ctx.pc == 0x08A59E70u) goto L_08A59E70;
    return;
L_08A59E70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08A59E78;
L_08A59E78:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A59E90;
      }
      goto L_08A59E84;
    }
L_08A59E84:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    goto L_08A59E88;
L_08A59E88:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A59E88;
      }
      goto L_08A59E90;
    }
L_08A59E90:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59EA8;
      }
      goto L_08A59E98;
    }
L_08A59E98:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59EA8;
      }
      goto L_08A59EA0;
    }
L_08A59EA0:
    ctx.gpr[31] = (0x08A59EA8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08A59EA8u) goto L_08A59EA8;
    return;
L_08A59EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08A59EB0;
L_08A59EB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59EC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A59EF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7624));
    goto L_08A59A24;
L_08A59EF0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-5902))))));
    ctx.gpr[5] = (2214u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A59F14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22852));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 20u, 0x08B0816Cu>(ctx, &aot_mem) && ctx.pc == 0x08A59F14u) goto L_08A59F14;
    return;
L_08A59F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A59F3Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 18u, 0x08B08130u>(ctx, &aot_mem) && ctx.pc == 0x08A59F3Cu) goto L_08A59F3C;
    return;
L_08A59F3C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A59F50;
      }
      goto L_08A59F48;
    }
L_08A59F48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A59FFC;
      }
      goto L_08A59F50;
    }
L_08A59F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A59FF8;
      }
      goto L_08A59F70;
    }
L_08A59F70:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    goto L_08A59F74;
L_08A59F74:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(68))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A59F9Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A59F9Cu) goto L_08A59F9C;
    return;
L_08A59F9C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
        goto L_08A59FF0;
    }
    goto L_08A59FA4;
L_08A59FA4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A59FB8u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 742u, 0x08B0742Cu>(ctx, &aot_mem) && ctx.pc == 0x08A59FB8u) goto L_08A59FB8;
    return;
L_08A59FB8:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(18));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(18));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
    goto L_08A59FF0;
L_08A59FF0:
    if (ctx.gpr[18] != ctx.gpr[17]) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
        goto L_08A59F74;
    }
    goto L_08A59FF8;
L_08A59FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A59FFC;
L_08A59FFC:
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5A080;
      }
      goto L_08A5A018;
    }
L_08A5A018:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A5A038u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 742u, 0x08B0742Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A038u) goto L_08A5A038;
    return;
L_08A5A038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(18));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(18));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08A5A018;
      }
      goto L_08A5A080;
    }
L_08A5A080:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5A0F4;
      }
      goto L_08A5A090;
    }
L_08A5A090:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5A0E8;
      }
      goto L_08A5A098;
    }
L_08A5A098:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
        goto L_08A5A0EC;
    }
    goto L_08A5A0A0;
L_08A5A0A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5A0BC;
      }
      goto L_08A5A0B0;
    }
L_08A5A0B0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_08A5A0B4;
L_08A5A0B4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A5A0B4;
      }
      goto L_08A5A0BC;
    }
L_08A5A0BC:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
        goto L_08A5A0EC;
    }
    goto L_08A5A0C8;
L_08A5A0C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
        goto L_08A5A0EC;
    }
    goto L_08A5A0D4;
L_08A5A0D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
        goto L_08A5A0EC;
    }
    goto L_08A5A0E0;
L_08A5A0E0:
    ctx.gpr[31] = (0x08A5A0E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08A5A0E8u) goto L_08A5A0E8;
    return;
L_08A5A0E8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    goto L_08A5A0EC;
L_08A5A0EC:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A5A090;
      }
      goto L_08A5A0F4;
    }
L_08A5A0F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A114:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (0u | 28u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[9] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A5A1A0;
      }
      goto L_08A5A13C;
    }
L_08A5A13C:
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    goto L_08A5A140;
L_08A5A140:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5A168;
      }
      goto L_08A5A14C;
    }
L_08A5A14C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[10] ^ ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A18C;
      }
      goto L_08A5A168;
    }
L_08A5A168:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(28));
    ctx.gpr[10] = (ctx.lo);
    ctx.gpr[10] = (ctx.gpr[9] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08A5A140;
      }
      goto L_08A5A184;
    }
L_08A5A184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A1A0;
      }
      goto L_08A5A18C;
    }
L_08A5A18C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[2] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A5A1B8;
      }
      goto L_08A5A1A0;
    }
L_08A5A1A0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[2] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]));
    ctx.gpr[2] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[2]));
    goto L_08A5A1B8;
L_08A5A1B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A1C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (0u | 28u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A234;
      }
      goto L_08A5A1F0;
    }
L_08A5A1F0:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5A21C;
      }
      goto L_08A5A1FC;
    }
L_08A5A1FC:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08A5A1F0;
      }
      goto L_08A5A214;
    }
L_08A5A214:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A234;
      }
      goto L_08A5A21C;
    }
L_08A5A21C:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[5] ^ ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A5A244;
      }
      goto L_08A5A234;
    }
L_08A5A234:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A5A240u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7660));
    goto L_08A59A24;
L_08A5A240:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A5A244;
L_08A5A244:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A250:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-5902))))));
    ctx.gpr[5] = (2214u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5A294u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22852));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 20u, 0x08B0816Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A294u) goto L_08A5A294;
    return;
L_08A5A294:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A5A2A4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 843u, 0x08B07C64u>(ctx, &aot_mem) && ctx.pc == 0x08A5A2A4u) goto L_08A5A2A4;
    return;
L_08A5A2A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[2] ^ ctx.gpr[4]);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A2CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A5A31C;
      }
      goto L_08A5A300;
    }
L_08A5A300:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5A314;
      }
      goto L_08A5A308;
    }
L_08A5A308:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08A5A314;
L_08A5A314:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5A418;
      }
      goto L_08A5A31C;
    }
L_08A5A31C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A5A35C;
      }
      goto L_08A5A34C;
    }
L_08A5A34C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A5A368;
      }
      goto L_08A5A35C;
    }
L_08A5A35C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_08A5A368;
L_08A5A368:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5A3A8;
      }
      goto L_08A5A370;
    }
L_08A5A370:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A5A384u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08A5A384u) goto L_08A5A384;
    return;
L_08A5A384:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08A5A3A8;
      }
      goto L_08A5A394;
    }
L_08A5A394:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A5A3A0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08A5A3A0u) goto L_08A5A3A0;
    return;
L_08A5A3A0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08A5A3A8;
L_08A5A3A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5A3BC;
      }
      goto L_08A5A3B4;
    }
L_08A5A3B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A5A3D8;
      }
      goto L_08A5A3BC;
    }
L_08A5A3BC:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A5A3D0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A5A3D0u) goto L_08A5A3D0;
    return;
L_08A5A3D0:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08A5A3D8;
L_08A5A3D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5A3F0;
      }
      goto L_08A5A3E0;
    }
L_08A5A3E0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5A3E0;
      }
      goto L_08A5A3F0;
    }
L_08A5A3F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5A404;
      }
      goto L_08A5A3FC;
    }
L_08A5A3FC:
    ctx.gpr[31] = (0x08A5A404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08A5A404u) goto L_08A5A404;
    return;
L_08A5A404:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A5A418;
L_08A5A418:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5A424u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 143u, 0x08AC5148u>(ctx, &aot_mem) && ctx.pc == 0x08A5A424u) goto L_08A5A424;
    return;
L_08A5A424:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A444:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(46)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A5A4D0;
      }
      goto L_08A5A4A4;
    }
L_08A5A4A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_08A5A4C4;
    }
    goto L_08A5A4B0;
L_08A5A4B0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_08A5A4C4;
L_08A5A4C4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5A4F0;
      }
      goto L_08A5A4D0;
    }
L_08A5A4D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08A5A4F0u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 676u, 0x08B0703Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A4F0u) goto L_08A5A4F0;
    return;
L_08A5A4F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A5A4FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 143u, 0x08AC5148u>(ctx, &aot_mem) && ctx.pc == 0x08A5A4FCu) goto L_08A5A4FC;
    return;
L_08A5A4FC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A5A510u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 845u, 0x08B07CA0u>(ctx, &aot_mem) && ctx.pc == 0x08A5A510u) goto L_08A5A510;
    return;
L_08A5A510:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A5A524;
      }
      goto L_08A5A51C;
    }
L_08A5A51C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A5A55C;
      }
      goto L_08A5A524;
    }
L_08A5A524:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A5A55C;
      }
      goto L_08A5A534;
    }
L_08A5A534:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A5A538;
L_08A5A538:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08A5A554;
    }
    goto L_08A5A544;
L_08A5A544:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08A5A554;
L_08A5A554:
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08A5A538;
    }
    goto L_08A5A55C;
L_08A5A55C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5A58C;
      }
      goto L_08A5A56C;
    }
L_08A5A56C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08A5A584u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A5A584u) goto L_08A5A584;
    return;
L_08A5A584:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A5A58C;
      }
      goto L_08A5A58C;
    }
L_08A5A58C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A5A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A5A69C;
      }
      goto L_08A5A5E4;
    }
L_08A5A5E4:
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[17] = (0u | 28u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5992));
    goto L_08A5A5F0;
L_08A5A5F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4)));
      if (branch_taken) {
          goto L_08A5A65C;
      }
      goto L_08A5A60C;
    }
L_08A5A60C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(225)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08A5A640;
    }
    goto L_08A5A618;
L_08A5A618:
    ctx.gpr[5] = (ctx.gpr[20] << 5u);
    ctx.gpr[6] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5A638u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 214u, 0x088A8E30u>(ctx, &aot_mem) && ctx.pc == 0x08A5A638u) goto L_08A5A638;
    return;
L_08A5A638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A5A640;
L_08A5A640:
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5A65C;
      }
      goto L_08A5A658;
    }
L_08A5A658:
    ctx.gpr[20] = (0u | 0u);
    goto L_08A5A65C;
L_08A5A65C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A680;
      }
      goto L_08A5A664;
    }
L_08A5A664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A5A680u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5A680u) goto L_08A5A680;
    return;
L_08A5A680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A5F0;
      }
      goto L_08A5A69C;
    }
L_08A5A69C:
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
L_08A5A6BC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A6CC:
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
L_08A5A6F8:
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
L_08A5A724:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-2336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2292), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2296), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20652)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2300), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2304), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2308), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2312), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2316), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2320), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2324), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2328), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A5A76C;
      }
      goto L_08A5A764;
    }
L_08A5A764:
    ctx.gpr[31] = (0x08A5A76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A76Cu) goto L_08A5A76C;
    return;
L_08A5A76C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5A790;
      }
      goto L_08A5A780;
    }
L_08A5A780:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A5A798;
      }
      goto L_08A5A790;
    }
L_08A5A790:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A5A798;
L_08A5A798:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A7DC;
      }
      goto L_08A5A7A0;
    }
L_08A5A7A0:
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A7C8;
      }
      goto L_08A5A7B4;
    }
L_08A5A7B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
        goto L_08A5A7F0;
    }
    goto L_08A5A7C0;
L_08A5A7C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A834;
      }
      goto L_08A5A7C8;
    }
L_08A5A7C8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A5A7D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7764));
    goto L_08A59A24;
L_08A5A7D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B80C;
      }
      goto L_08A5A7DC;
    }
L_08A5A7DC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A5A7E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7712));
    goto L_08A59A24;
L_08A5A7E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B80C;
      }
      goto L_08A5A7F0;
    }
L_08A5A7F0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(12))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17786u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (17658u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2092), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2096), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A5A834;
L_08A5A834:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2276), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A5A848;
      }
      goto L_08A5A83C;
    }
L_08A5A83C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A5A848u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A5A5A8;
L_08A5A848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5A8E0;
      }
      goto L_08A5A88C;
    }
L_08A5A88C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(6));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6957)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[16] = (ctx.gpr[21] + static_cast<std::uint32_t>(14));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
      if (branch_taken) {
          goto L_08A5A8E8;
      }
      goto L_08A5A8D8;
    }
L_08A5A8D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08A5AD48;
      }
      goto L_08A5A8E0;
    }
L_08A5A8E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B80C;
      }
      goto L_08A5A8E8;
    }
L_08A5A8E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2104), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2108), 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5A95C;
      }
      goto L_08A5A918;
    }
L_08A5A918:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2288), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2280), ctx.gpr[7]);
    ctx.gpr[31] = (0x08A5A92Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2284), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08A5A92Cu) goto L_08A5A92C;
    return;
L_08A5A92C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2280)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2284)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2288)));
      if (branch_taken) {
          goto L_08A5A95C;
      }
      goto L_08A5A940;
    }
L_08A5A940:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2288), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2280), ctx.gpr[7]);
    ctx.gpr[31] = (0x08A5A950u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08A5A950u) goto L_08A5A950;
    return;
L_08A5A950:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2280)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2288)));
    goto L_08A5A95C;
L_08A5A95C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2104), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2108), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2215), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5A9A4;
      }
      goto L_08A5A984;
    }
L_08A5A984:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
        goto L_08A5A99C;
    }
    goto L_08A5A990;
L_08A5A990:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_08A5A99C;
L_08A5A99C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A5A984;
      }
      goto L_08A5A9A4;
    }
L_08A5A9A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2104), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5AAE8;
      }
      goto L_08A5A9B8;
    }
L_08A5A9B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
    goto L_08A5A9C8;
L_08A5A9C8:
    if (ctx.gpr[5] == ctx.gpr[8]) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A5AA60;
    }
    goto L_08A5A9D0;
L_08A5A9D0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[6] == ctx.gpr[8]) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A5AA60;
    }
    goto L_08A5A9DC;
L_08A5A9DC:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2152), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2152))))));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < 0 ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
        goto L_08A5AA10;
    }
    goto L_08A5AA08;
L_08A5AA08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A5AA54;
      }
      goto L_08A5AA10;
    }
L_08A5AA10:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2154), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2154))))));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < 0 ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A5AA40;
      }
      goto L_08A5AA38;
    }
L_08A5AA38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5AA54;
      }
      goto L_08A5AA40;
    }
L_08A5AA40:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    goto L_08A5AA54;
L_08A5AA54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
      if (branch_taken) {
          goto L_08A5A9C8;
      }
      goto L_08A5AA5C;
    }
L_08A5AA5C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08A5AA60;
L_08A5AA60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2156), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[8] = (ctx.gpr[8] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2157), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5AA9C;
      }
      goto L_08A5AA84;
    }
L_08A5AA84:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A5AA84;
      }
      goto L_08A5AA9C;
    }
L_08A5AA9C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2158), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5AAB8;
      }
      goto L_08A5AAAC;
    }
L_08A5AAAC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_08A5AAB0;
L_08A5AAB0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A5AAB0;
      }
      goto L_08A5AAB8;
    }
L_08A5AAB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2104), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A5AAD8;
      }
      goto L_08A5AAD0;
    }
L_08A5AAD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5AAE8;
      }
      goto L_08A5AAD8;
    }
L_08A5AAD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5A9B8;
      }
      goto L_08A5AAE8;
    }
L_08A5AAE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5AD08;
      }
      goto L_08A5AB04;
    }
L_08A5AB04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2160), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2160))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2162), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2162))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 61 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5ABDC;
      }
      goto L_08A5AB44;
    }
L_08A5AB44:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[7] = (2226u << 16u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2164), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2164))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2166), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2166))))));
    ctx.gpr[17] = (ctx.gpr[7] + static_cast<std::uint32_t>(7788));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[31] = (0x08A5AB78u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A5A6F8;
L_08A5AB78:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2168), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2168))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2170), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2170))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[31] = (0x08A5ABA4u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    goto L_08A59A24;
L_08A5ABA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (32768u << 16u);
      if (branch_taken) {
          goto L_08A5ABDC;
      }
      goto L_08A5ABBC;
    }
L_08A5ABBC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_08A5ABC0;
L_08A5ABC0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A5ABC0;
      }
      goto L_08A5ABDC;
    }
L_08A5ABDC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[18] = (2226u << 16u);
      if (branch_taken) {
          goto L_08A5AD08;
      }
      goto L_08A5ABEC;
    }
L_08A5ABEC:
    ctx.gpr[19] = (0u | 28u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(7832));
    goto L_08A5ABF4;
L_08A5ABF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08A5ABF8;
L_08A5ABF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5AC38;
      }
      goto L_08A5AC04;
    }
L_08A5AC04:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2172), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2172))))));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5AC38;
      }
      goto L_08A5AC30;
    }
L_08A5AC30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A5ABF8;
      }
      goto L_08A5AC38;
    }
L_08A5AC38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5AC54;
      }
      goto L_08A5AC44;
    }
L_08A5AC44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5AC54;
      }
      goto L_08A5AC50;
    }
L_08A5AC50:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    goto L_08A5AC54;
L_08A5AC54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2174), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2175), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5AC94;
      }
      goto L_08A5AC7C;
    }
L_08A5AC7C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A5AC7C;
      }
      goto L_08A5AC94;
    }
L_08A5AC94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2176), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5ACB0;
      }
      goto L_08A5ACA4;
    }
L_08A5ACA4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    goto L_08A5ACA8;
L_08A5ACA8:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A5ACA8;
      }
      goto L_08A5ACB0;
    }
L_08A5ACB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A5ACF8;
      }
      goto L_08A5ACC8;
    }
L_08A5ACC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x08A5ACE0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A5A6F8;
L_08A5ACE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x08A5ACF8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A59A24;
L_08A5ACF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5ABF4;
      }
      goto L_08A5AD08;
    }
L_08A5AD08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2177), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5AD24;
      }
      goto L_08A5AD18;
    }
L_08A5AD18:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_08A5AD1C;
L_08A5AD1C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A5AD1C;
      }
      goto L_08A5AD24;
    }
L_08A5AD24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5AD44;
      }
      goto L_08A5AD30;
    }
L_08A5AD30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5AD44;
      }
      goto L_08A5AD3C;
    }
L_08A5AD3C:
    ctx.gpr[31] = (0x08A5AD44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08A5AD44u) goto L_08A5AD44;
    return;
L_08A5AD44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(84)));
    goto L_08A5AD48;
L_08A5AD48:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2272), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2178), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2178))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2088), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A5ADAC;
      }
      goto L_08A5AD78;
    }
L_08A5AD78:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2088))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(14))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2182), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2182))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5ADAC;
      }
      goto L_08A5ADA4;
    }
L_08A5ADA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2088), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A5ADAC;
L_08A5ADAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08A5AE2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7860));
    goto L_08A5A6F8;
L_08A5AE2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2268), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[17] = (2226u << 16u);
      if (branch_taken) {
          goto L_08A5AF34;
      }
      goto L_08A5AE88;
    }
L_08A5AE88:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(7888));
    goto L_08A5AE8C;
L_08A5AE8C:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[31] = (0x08A5AF24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A5A6F8;
L_08A5AF24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5AE8C;
      }
      goto L_08A5AF34;
    }
L_08A5AF34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2216), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2217), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5AF7C;
      }
      goto L_08A5AF5C;
    }
L_08A5AF5C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5AF5C;
      }
      goto L_08A5AF7C;
    }
L_08A5AF7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2218), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5AF98;
      }
      goto L_08A5AF8C;
    }
L_08A5AF8C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_08A5AF90;
L_08A5AF90:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5AF90;
      }
      goto L_08A5AF98;
    }
L_08A5AF98:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08A5B4E8;
      }
      goto L_08A5AFAC;
    }
L_08A5AFAC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7912));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2264), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7952));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7960));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2260), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2256), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7968));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7976));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2252), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2248), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7984));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2244), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2240), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8000));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2236), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2232), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8016));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2268)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2228), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8040));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8060));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), ctx.gpr[4]);
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (ctx.gpr[20] + ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2220), ctx.gpr[5]);
    goto L_08A5B044;
L_08A5B044:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2088))))));
    ctx.gpr[31] = (0x08A5B054u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 85u, 0x08AC4A80u>(ctx, &aot_mem) && ctx.pc == 0x08A5B054u) goto L_08A5B054;
    return;
L_08A5B054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B4D8;
      }
      goto L_08A5B070;
    }
L_08A5B070:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B4D8;
      }
      goto L_08A5B084;
    }
L_08A5B084:
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (0u | 2000u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5B0A4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B0A4u) goto L_08A5B0A4;
    return;
L_08A5B0A4:
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(14));
      if (branch_taken) {
          goto L_08A5B0C0;
      }
      goto L_08A5B0B0;
    }
L_08A5B0B0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    ctx.gpr[17] = (ctx.gpr[4] << 6u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2000));
    goto L_08A5B0C0;
L_08A5B0C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(14))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2184), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2184))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B154;
      }
      goto L_08A5B0F4;
    }
L_08A5B0F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2188), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2188))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B154;
      }
      goto L_08A5B124;
    }
L_08A5B124:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2192), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2192))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2194), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2194))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B320;
      }
      goto L_08A5B154;
    }
L_08A5B154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5B170u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B170u) goto L_08A5B170;
    return;
L_08A5B170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2264)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5B180u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08A5A6F8;
L_08A5B180:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5B1FCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B1FCu) goto L_08A5B1FC;
    return;
L_08A5B1FC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[23];
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08A5B210;
      }
      goto L_08A5B208;
    }
L_08A5B208:
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A5B210;
L_08A5B210:
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[4] & 128u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A5B2C4;
      }
      goto L_08A5B23C;
    }
L_08A5B23C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A5B2C4;
L_08A5B2C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2112), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2112))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2198), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2198))))));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A5B308u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B308u) goto L_08A5B308;
    return;
L_08A5B308:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2202), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2202))))));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A5B3C4;
      }
      goto L_08A5B320;
    }
L_08A5B320:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08A5B3A8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B3A8u) goto L_08A5B3A8;
    return;
L_08A5B3A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B3C4;
      }
      goto L_08A5B3B4;
    }
L_08A5B3B4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2204), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2204))))));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08A5B3C4;
L_08A5B3C4:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2260)));
        goto L_08A5B3E0;
    }
    goto L_08A5B3CC;
L_08A5B3CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[31] = (0x08A5B3D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 161u, 0x08AC527Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5B3D8u) goto L_08A5B3D8;
    return;
L_08A5B3D8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08A5B464;
      }
      goto L_08A5B3E0;
    }
L_08A5B3E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2256)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2252)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2116), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2120), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2244)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2124), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2128), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2236)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2132), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2136), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2140), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2144), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5B438u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B438u) goto L_08A5B438;
    return;
L_08A5B438:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2116)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[18]);
    ctx.gpr[31] = (0x08A5B458u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A5A6F8;
L_08A5B458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2224)));
    ctx.gpr[31] = (0x08A5B464u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2088))))));
    goto L_08A5A6F8;
L_08A5B464:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1025) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B4D8;
      }
      goto L_08A5B474;
    }
L_08A5B474:
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(39)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2220)));
    ctx.gpr[31] = (0x08A5B49Cu);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A5A6F8;
L_08A5B49C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2272)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5B4ACu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 132u, 0x088A8764u>(ctx, &aot_mem) && ctx.pc == 0x08A5B4ACu) goto L_08A5B4AC;
    return;
L_08A5B4AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2268)));
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[18]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[16] - ctx.gpr[18]);
    ctx.gpr[31] = (0x08A5B4CCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A5B4CCu) goto L_08A5B4CC;
    return;
L_08A5B4CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(39)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A5B4D8;
L_08A5B4D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5B044;
      }
      goto L_08A5B4E8;
    }
L_08A5B4E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B744;
      }
      goto L_08A5B504;
    }
L_08A5B504:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2272)));
      if (branch_taken) {
          goto L_08A5B6D0;
      }
      goto L_08A5B514;
    }
L_08A5B514:
    ctx.gpr[23] = (2226u << 16u);
    ctx.gpr[22] = (2226u << 16u);
    ctx.gpr[19] = (2226u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(8092));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(8116));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8124));
    ctx.gpr[18] = (32768u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2088))))));
    goto L_08A5B534;
L_08A5B534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2206), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2206))))));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A5B568;
      }
      goto L_08A5B560;
    }
L_08A5B560:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A5B56C;
      }
      goto L_08A5B568;
    }
L_08A5B568:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A5B56C;
L_08A5B56C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A5B57Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08A5A6F8;
L_08A5B57C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[4] | 32768u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08A5B628;
      }
      goto L_08A5B614;
    }
L_08A5B614:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08A5B628;
L_08A5B628:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B6C0;
      }
      goto L_08A5B630;
    }
L_08A5B630:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2088))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2208), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2208))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B6C0;
      }
      goto L_08A5B65C;
    }
L_08A5B65C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    if (ctx.gpr[17] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
        goto L_08A5B6B4;
    }
    goto L_08A5B668;
L_08A5B668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2210), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] >> 29u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 3u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2211), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5B6B0;
      }
      goto L_08A5B690;
    }
L_08A5B690:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A5B690;
      }
      goto L_08A5B6B0;
    }
L_08A5B6B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    goto L_08A5B6B4;
L_08A5B6B4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5B6C4;
      }
      goto L_08A5B6C0;
    }
L_08A5B6C0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08A5B6C4;
L_08A5B6C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    if (ctx.gpr[16] != ctx.gpr[4]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2088))))));
        goto L_08A5B534;
    }
    goto L_08A5B6D0;
L_08A5B6D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(39)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B728;
      }
      goto L_08A5B710;
    }
L_08A5B710:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5B720u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 132u, 0x088A8764u>(ctx, &aot_mem) && ctx.pc == 0x08A5B720u) goto L_08A5B720;
    return;
L_08A5B720:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B7BC;
      }
      goto L_08A5B728;
    }
L_08A5B728:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A5B73Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 132u, 0x088A8764u>(ctx, &aot_mem) && ctx.pc == 0x08A5B73Cu) goto L_08A5B73C;
    return;
L_08A5B73C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B7BC;
      }
      goto L_08A5B744;
    }
L_08A5B744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A5B7BC;
      }
      goto L_08A5B754;
    }
L_08A5B754:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A5B7AC;
      }
      goto L_08A5B760;
    }
L_08A5B760:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    ctx.gpr[9] = (ctx.gpr[9] >> 29u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2212), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2213), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5B7AC;
      }
      goto L_08A5B78C;
    }
L_08A5B78C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A5B78C;
      }
      goto L_08A5B7AC;
    }
L_08A5B7AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A5B754;
      }
      goto L_08A5B7BC;
    }
L_08A5B7BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B80C;
      }
      goto L_08A5B7C8;
    }
L_08A5B7C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B80C;
      }
      goto L_08A5B7E4;
    }
L_08A5B7E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B80C;
      }
      goto L_08A5B800;
    }
L_08A5B800:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A5B80Cu);
    ctx.gpr[5] = (0u | 3u);
    goto L_08A59AEC;
L_08A5B80C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2292)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2296)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2300)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2304)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2308)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2312)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2316)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2320)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2324)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2328)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B83C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-20652)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A5B88C;
      }
      goto L_08A5B884;
    }
L_08A5B884:
    ctx.gpr[31] = (0x08A5B88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5B88Cu) goto L_08A5B88C;
    return;
L_08A5B88C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5B8B8;
      }
      goto L_08A5B8A4;
    }
L_08A5B8A4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A5B8C0;
      }
      goto L_08A5B8B8;
    }
L_08A5B8B8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A5B8C0;
L_08A5B8C0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A5B984;
      }
      goto L_08A5B8C8;
    }
L_08A5B8C8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5B900;
      }
      goto L_08A5B8D8;
    }
L_08A5B8D8:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A5B904;
      }
      goto L_08A5B8FC;
    }
L_08A5B8FC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A5B900;
L_08A5B900:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A5B904;
L_08A5B904:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5B984;
      }
      goto L_08A5B90C;
    }
L_08A5B90C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(224))))));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5B954u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8192));
    goto L_08A5A6CC;
L_08A5B954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B998;
      }
      goto L_08A5B97C;
    }
L_08A5B97C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A5B9EC;
      }
      goto L_08A5B984;
    }
L_08A5B984:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A5B990u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8128));
    goto L_08A59A24;
L_08A5B990:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x08A5C674u>(ctx, &aot_mem); return;
      }
      goto L_08A5B998;
    }
L_08A5B998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08A5B9C4;
    }
    goto L_08A5B9B8;
L_08A5B9B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A5B9EC;
      }
      goto L_08A5B9C0;
    }
L_08A5B9C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A5B9C4;
L_08A5B9C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B998;
      }
      goto L_08A5B9E8;
    }
L_08A5B9E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A5B9EC;
L_08A5B9EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08A5BAB8;
    }
    goto L_08A5BA0C;
L_08A5BA0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08A5BA38u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 267u, 0x0886DBA8u>(ctx, &aot_mem) && ctx.pc == 0x08A5BA38u) goto L_08A5BA38;
    return;
L_08A5BA38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5BA8C;
      }
      goto L_08A5BA40;
    }
L_08A5BA40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(224))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(124), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(124))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_08A5BAE4;
    }
    goto L_08A5BA84;
L_08A5BA84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A5BB20;
      }
      goto L_08A5BA8C;
    }
L_08A5BA8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A5BAB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8280));
    goto L_08A59A24;
L_08A5BAB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x08A5C674u>(ctx, &aot_mem); return;
      }
      goto L_08A5BAB8;
    }
L_08A5BAB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[31] = (0x08A5BADCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8224));
    goto L_08A5A6CC;
L_08A5BADC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x08A5C674u>(ctx, &aot_mem); return;
      }
      goto L_08A5BAE4;
    }
L_08A5BAE4:
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(224))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08A5BB20;
L_08A5BB20:
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(126), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & 127u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(224))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(126))))));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5BBB0;
      }
      goto L_08A5BB68;
    }
L_08A5BB68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[19] << 5u);
    ctx.gpr[7] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] << (ctx.gpr[4] & 31u));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5BBB0;
      }
      goto L_08A5BB94;
    }
L_08A5BB94:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5BBB8;
      }
      goto L_08A5BBA8;
    }
L_08A5BBA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A5BBE4;
      }
      goto L_08A5BBB0;
    }
L_08A5BBB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x08A5C674u>(ctx, &aot_mem); return;
      }
      goto L_08A5BBB8;
    }
L_08A5BBB8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[19] << 5u);
    ctx.gpr[8] = (ctx.gpr[19] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08A5BBE4;
L_08A5BBE4:
    ctx.gpr[6] = (ctx.gpr[19] << 5u);
    ctx.gpr[7] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[7] << (ctx.gpr[4] & 31u));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A5BE0C;
      }
      goto L_08A5BC10;
    }
L_08A5BC10:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A5BE0C;
      }
      goto L_08A5BC2C;
    }
L_08A5BC2C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5BE00;
      }
      goto L_08A5BC84;
    }
L_08A5BC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A5BCD0;
      }
      goto L_08A5BCAC;
    }
L_08A5BCAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08A5BCC4;
    }
    goto L_08A5BCB8;
L_08A5BCB8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08A5BCC4;
L_08A5BCC4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A5BCF4;
      }
      goto L_08A5BCD0;
    }
L_08A5BCD0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08A5BCF0u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 709u, 0x08B07244u>(ctx, &aot_mem) && ctx.pc == 0x08A5BCF0u) goto L_08A5BCF0;
    return;
L_08A5BCF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    goto L_08A5BCF4;
L_08A5BCF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    goto L_08A5BD04;
L_08A5BD04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5BDB4;
      }
      goto L_08A5BD2C;
    }
L_08A5BD2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(130), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(130))))));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5BDB4;
      }
      goto L_08A5BD68;
    }
L_08A5BD68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(140), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(140))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08A5BD04;
      }
      goto L_08A5BDB4;
    }
L_08A5BDB4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    ctx.gpr[31] = (0x08A5BDC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8324));
    goto L_08A5A6CC;
L_08A5BDC4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(146), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(146))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(148))))));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[31] = (0x08A5BE00u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 639u, 0x088A7D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5BE00u) goto L_08A5BE00;
    return;
L_08A5BE00:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A5BC2C;
      }
      goto L_08A5BE0C;
    }
L_08A5BE0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 75u, 0x08A5C54Cu>(ctx, &aot_mem); return;
      }
      goto L_08A5BE48;
    }
L_08A5BE48:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    goto L_08A5BE4C;
L_08A5BE4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[20] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    ctx.gpr[4] = (ctx.gpr[20] & 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 60u, 0x08A5C39Cu>(ctx, &aot_mem); return;
      }
      goto L_08A5BE84;
    }
L_08A5BE84:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[20] & 32767u);
      if (branch_taken) {
          goto L_08A5BF08;
      }
      goto L_08A5BEA4;
    }
L_08A5BEA4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-30316), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5BEC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8332));
    goto L_08A5A6CC;
L_08A5BEC0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5BED4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BED4u) goto L_08A5BED4;
    return;
L_08A5BED4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5BEFC;
      }
      goto L_08A5BEE0;
    }
L_08A5BEE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A5BEFCu);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5BEFCu) goto L_08A5BEFC;
    return;
L_08A5BEFC:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-30316), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 74u, 0x08A5C530u>(ctx, &aot_mem); return;
      }
      goto L_08A5BF08;
    }
L_08A5BF08:
    ctx.gpr[4] = (ctx.gpr[23] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5BFB8;
      }
      goto L_08A5BF14;
    }
L_08A5BF14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[22] = (ctx.gpr[6] | ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-30316), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[22] = (ctx.gpr[22] & 65535u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] & 127u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A5BF74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8344));
    goto L_08A5A6CC;
L_08A5BF74:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A5BF88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BF88u) goto L_08A5BF88;
    return;
L_08A5BF88:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5BFB0;
      }
      goto L_08A5BF94;
    }
L_08A5BF94:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5BFB0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5BFB0u) goto L_08A5BFB0;
    return;
L_08A5BFB0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-30316), static_cast<std::uint8_t>(0u));
    goto L_08A5BFB8;
L_08A5BFB8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5BFCCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08A5BFCCu) goto L_08A5BFCC;
    return;
L_08A5BFCC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 60u, 0x08A5C39Cu>(ctx, &aot_mem); return;
      }
      goto L_08A5BFD4;
    }
L_08A5BFD4:
    ctx.gpr[4] = (ctx.gpr[23] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 43u, 0x08A5C1B8u>(ctx, &aot_mem); return;
      }
      goto L_08A5BFE0;
    }
L_08A5BFE0:
    ctx.gpr[23] = (ctx.gpr[23] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[23]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(8744)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5BFF8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08A5C000u; return;
}

void recomp_unit_0149(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0149_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_149(Runtime &runtime) {
    runtime.register_generated_unit(149u, 0x08A58000u, 16384u, &recomp_unit_0149, &recomp_unit_0149_entry);
    runtime.register_function(0x08A58000u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58048u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58074u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58098u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A580A4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A580B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A580C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A580D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58100u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58124u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5814Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5816Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5818Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A581B4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A581DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A581F8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58220u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58248u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58270u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58298u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A582A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A582A8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A582C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A582C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A582D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A582E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A582E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A582F4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A582FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58300u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58308u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5832Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58338u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58344u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58354u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5836Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58384u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A583A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A583C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A583D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A583F0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58408u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58428u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58448u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5845Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5847Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5849Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A584BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A584DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A584F0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58500u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58508u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58514u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5851Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58520u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58528u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5854Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58558u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58564u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58578u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5858Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5859Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A585D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A585E4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58600u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58608u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58614u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5861Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5862Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58634u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5863Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58644u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5864Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58660u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5866Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58674u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58678u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58680u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A586B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A586ECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A586F4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58718u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58720u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5872Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58734u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58744u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5874Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58754u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5875Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58764u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58778u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58788u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58790u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A587A4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A587B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A587D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A587D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58808u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58820u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58834u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5883Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5885Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A588B8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A588CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A588DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A588E4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58908u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5891Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58940u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58950u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58958u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58968u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58980u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58988u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5898Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A589A4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A589C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A589D4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A589E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A589F4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A589F8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A24u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A30u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A3Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A44u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A4Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A54u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A58u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A70u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A7Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A94u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58AA0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58AB8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58AD0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B04u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B0Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B1Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B24u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B34u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B50u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B84u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B8Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B9Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58BA4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58BB4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58BD0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58BE8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58D0Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58D20u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58D38u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58DA0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58DF8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58E00u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58E50u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58E58u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58E9Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58EA4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58EE0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58EE8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58F1Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58F24u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58F4Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58F54u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58F70u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58F78u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58F8Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58F94u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58FA0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58FA8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58FACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59040u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5904Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59060u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5906Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5907Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59090u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59094u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A590ACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A590C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A590D4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A590DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A590F8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5911Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59120u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59124u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59128u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59138u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59144u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5914Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59154u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5915Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59164u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5916Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59174u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5917Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59198u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A591A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A591B4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A591C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A591D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A591E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59200u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5920Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59218u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59240u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59248u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59250u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59270u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59278u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59280u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59288u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5929Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A592D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A592E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A592FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59308u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59310u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5932Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59360u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5936Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5939Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A593ACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A593B8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A593C4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A593D4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A593E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A593F4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5940Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59418u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59420u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59434u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59448u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5944Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5945Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5946Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5947Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5948Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59494u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A594A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A594B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A594CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59508u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59514u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59520u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5952Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59558u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59574u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59590u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A595ACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A595B4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A595D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A595D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A595E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A595E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A595F0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A595F8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59608u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59610u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5962Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59634u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5966Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59674u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59684u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A596B4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A596BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A596CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A596DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A596E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5970Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5971Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59728u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5973Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59748u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59764u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59780u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A597A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59804u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59850u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59854u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5987Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5988Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A598A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A598C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A598CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A598DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A598ECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59908u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59910u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59914u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5991Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59928u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5992Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59934u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59944u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59954u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59968u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5997Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59980u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59990u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A599C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A599ECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A599F8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59A0Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59A24u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59A50u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59A98u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59AECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B14u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B2Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B44u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B58u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B6Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B70u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B78u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B80u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B88u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B90u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B98u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59BA0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59BB4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59BB8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59BC0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59BC8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59BD0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59BD8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59BE0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59BE8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59BF4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59BFCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C04u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C0Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C14u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C24u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C2Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C34u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C44u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C48u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C50u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C58u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C64u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C6Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C74u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C78u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C80u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C88u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C94u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C9Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CA4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CA8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CB0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CB8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CD8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CF4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CFCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D40u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D4Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D84u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D98u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59DACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59DBCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59DC8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59DF0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59DFCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E08u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E10u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E44u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E54u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E70u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E78u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E84u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E88u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E90u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E98u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59EA0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59EA8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59EB0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59EC4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59EF0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F14u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F3Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F48u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F50u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F70u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F74u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F9Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59FA4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59FB8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59FF0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59FF8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59FFCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A018u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A038u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A080u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A090u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A098u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A0A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A0B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A0B4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A0BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A0C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A0D4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A0E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A0E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A0ECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A0F4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A114u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A13Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A140u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A14Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A168u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A184u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A18Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A1A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A1B8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A1C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A1F0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A1FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A214u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A21Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A234u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A240u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A244u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A250u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A294u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A2A4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A2CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A300u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A308u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A314u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A31Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A34Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A35Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A368u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A370u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A384u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A394u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A3A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A3A8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A3B4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A3BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A3D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A3D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A3E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A3F0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A3FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A404u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A418u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A424u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A444u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A4A4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A4B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A4C4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A4D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A4F0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A4FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A510u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A51Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A524u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A534u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A538u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A544u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A554u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A55Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A56Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A584u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A58Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A5A8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A5E4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A5F0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A60Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A618u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A638u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A640u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A658u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A65Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A664u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A680u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A69Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A6BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A6CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A6F8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A724u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A764u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A76Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A780u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A790u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A798u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A7A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A7B4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A7C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A7C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A7D4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A7DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A7E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A7F0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A834u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A83Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A848u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A88Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A8D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A8E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A8E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A918u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A92Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A940u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A950u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A95Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A984u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A990u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A99Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A9A4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A9B8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A9C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A9D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A9DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA08u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA10u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA38u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA40u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA54u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA5Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA60u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA84u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA9Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AAACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AAB0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AAB8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AAD0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AAD8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AAE8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB04u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB44u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB78u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ABA4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ABBCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ABC0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ABDCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ABECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ABF4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ABF8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC04u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC30u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC38u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC44u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC50u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC54u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC7Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC94u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ACA4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ACA8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ACB0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ACC8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ACE0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ACF8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD08u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD18u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD1Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD24u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD30u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD3Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD44u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD48u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD78u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ADA4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ADACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AE2Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AE88u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AE8Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AF24u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AF34u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AF5Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AF7Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AF8Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AF90u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AF98u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AFACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B044u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B054u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B070u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B084u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B0A4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B0B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B0C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B0F4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B124u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B154u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B170u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B180u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B1FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B208u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B210u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B23Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B2C4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B308u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B320u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B3A8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B3B4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B3C4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B3CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B3D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B3E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B438u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B458u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B464u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B474u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B49Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B4ACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B4CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B4D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B4E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B504u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B514u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B534u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B560u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B568u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B56Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B57Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B614u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B628u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B630u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B65Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B668u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B690u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B6B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B6B4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B6C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B6C4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B6D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B710u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B720u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B728u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B73Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B744u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B754u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B760u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B78Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B7ACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B7BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B7C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B7E4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B800u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B80Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B83Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B884u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B88Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B8A4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B8B8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B8C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B8C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B8D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B8FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B900u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B904u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B90Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B954u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B97Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B984u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B990u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B998u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B9B8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B9C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B9C4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B9E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B9ECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BA0Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BA38u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BA40u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BA84u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BA8Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BAB0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BAB8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BADCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BAE4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BB20u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BB68u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BB94u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BBA8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BBB0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BBB8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BBE4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BC10u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BC2Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BC84u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BCACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BCB8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BCC4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BCD0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BCF0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BCF4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BD04u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BD2Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BD68u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BDB4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BDC4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BE00u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BE0Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BE48u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BE4Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BE84u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BEA4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BEC0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BED4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BEE0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BEFCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BF08u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BF14u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BF74u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BF88u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BF94u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BFB0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BFB8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BFCCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BFD4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BFE0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BFF8u, &recomp_unit_0149, "recomp_unit_0149");
}
} // namespace psprecomp
