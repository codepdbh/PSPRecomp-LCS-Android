#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0137[3956] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0,
    0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 12,
    0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 19, 0, 0, 0, 0, 0, 0,
    0, 20, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0,
    0, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 55,
    56, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65,
    0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 70, 71, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0,
    0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0,
    0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 94,
    0, 0, 95, 0, 96, 97, 0, 98, 0, 0, 0, 99, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 103, 0, 0, 104, 0, 0, 105, 0, 106,
    107, 0, 108, 0, 0, 0, 109, 110, 0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 116, 0, 0, 117,
    0, 118, 0, 119, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 122, 123, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 0,
    0, 128, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 135, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138,
    0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 147, 0, 148, 0, 0, 0, 0, 149,
    0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 158, 159, 0, 160,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 163, 0, 164, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 170,
    0, 0, 171, 0, 172, 0, 0, 173, 0, 174, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 178, 0, 179, 0, 180, 0, 181, 0, 0,
    0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 0, 185, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0,
    0, 189, 0, 190, 0, 0, 0, 0, 191, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 0,
    0, 197, 198, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 201, 202, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0,
    209, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 214, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 218, 219, 0, 220, 0,
    221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 225, 0, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0,
    236, 0, 237, 0, 0, 238, 0, 239, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 0, 0, 243, 0, 0, 244, 0, 245, 0, 246, 0, 0, 247, 0,
    0, 248, 0, 249, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 254,
    0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0,
    0, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 265, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 278, 0, 279, 0, 0, 280, 0, 0,
    0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 290, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 295,
    0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 303, 0, 304, 0, 0, 0, 305, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 320, 0, 321, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0,
    0, 325, 0, 0, 326, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0,
    0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0,
    336, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 344, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 347, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 351, 352, 0, 0, 353,
    0, 354, 0, 0, 0, 355, 356, 0, 0, 357, 0, 0, 0, 358, 359, 0, 360, 0, 0, 361, 0, 0, 0, 362, 0, 363, 0, 0, 364, 0, 365, 0,
    0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0,
    0, 0, 0, 371, 0, 372, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 375, 0, 0, 376, 0, 377, 0, 378, 0, 379, 0, 0, 380, 0, 0, 381, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 384, 0, 0, 0, 385, 0, 0, 386, 0, 387, 0, 0, 0, 388, 0, 0, 0, 389, 0, 390, 0, 391, 392, 0, 0, 393, 0, 394, 0, 0, 0,
    0, 395, 0, 396, 0, 397, 0, 0, 0, 398, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0,
    0, 405, 0, 0, 0, 0, 406, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0,
    413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 418, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 422, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 427, 0, 428, 0, 429, 430, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 436, 0, 0, 0, 437, 0, 0, 438, 439,
    0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    451, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0,
    457, 0, 458, 0, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0,
    0, 468, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 472, 0, 473, 0, 474, 0, 475, 0, 0, 476, 0, 477, 0, 478, 0, 479, 480,
    0, 481, 0, 482, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 487, 0, 0,
    0, 488, 0, 489, 0, 490, 0, 491, 0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 0, 0, 0, 497, 0, 498, 0, 0, 0, 0, 499, 0, 500,
    0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 507, 0, 508, 509, 0, 0, 0,
    0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 513, 0, 514, 0, 0, 0, 0, 515, 0, 516, 0, 517,
    0, 518, 0, 519, 0, 520, 0, 521, 0, 522, 0, 523, 0, 524, 0, 0, 0, 525, 0, 526, 0, 0, 0, 527, 0, 528, 0, 0, 0, 529, 0, 530,
    0, 0, 0, 531, 0, 532, 0, 0, 0, 533, 0, 534, 0, 0, 0, 535, 0, 536, 537, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0,
    0, 539, 0, 0, 0, 0, 540, 0, 0, 541, 0, 542, 0, 0, 0, 0, 543, 0, 544, 0, 545, 0, 546, 0, 547, 0, 548, 0, 549, 0, 550, 0,
    551, 0, 552, 0, 0, 0, 553, 0, 554, 0, 0, 0, 555, 0, 556, 0, 0, 0, 557, 0, 558, 0, 0, 0, 559, 0, 560, 0, 0, 0, 561, 0,
    562, 0, 0, 0, 563, 0, 564, 565, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 568, 0, 0, 569, 0,
    570, 0, 0, 0, 0, 571, 0, 572, 0, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 578, 0, 579, 0, 580, 0, 0, 0, 581, 0, 582, 0, 0,
    0, 583, 0, 584, 0, 0, 0, 585, 0, 586, 0, 0, 0, 587, 0, 588, 0, 0, 0, 589, 0, 590, 0, 0, 0, 591, 0, 592, 593, 0, 0, 0,
    0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 597, 0, 598, 0, 0, 0, 0, 599, 0, 600, 0, 601, 0,
    602, 0, 603, 0, 604, 0, 605, 0, 606, 0, 607, 0, 608, 0, 0, 0, 609, 0, 610, 0, 0, 0, 611, 0, 612, 0, 0, 0, 613, 0, 614, 0,
    0, 0, 615, 0, 616, 0, 0, 0, 617, 0, 618, 0, 0, 0, 619, 0, 620, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0,
    623, 0, 0, 0, 0, 624, 0, 0, 625, 0, 626, 0, 0, 0, 0, 627, 0, 628, 0, 629, 0, 630, 0, 631, 0, 632, 0, 633, 0, 634, 0, 635,
    0, 636, 0, 0, 0, 637, 0, 638, 0, 0, 0, 639, 0, 640, 0, 0, 0, 641, 0, 642, 0, 0, 0, 643, 0, 644, 0, 0, 0, 645, 0, 646,
    0, 0, 0, 647, 0, 648, 649, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 653, 0, 654, 0, 655, 0, 656,
    0, 657, 0, 658, 0, 659, 0, 660, 0, 661, 0, 0, 0, 662, 0, 663, 0, 0, 0, 664, 0, 665, 0, 0, 0, 666, 0, 667, 0, 0, 0, 668,
    0, 669, 0, 0, 0, 670, 0, 671, 0, 0, 0, 672, 0, 673, 0, 674, 0, 675, 0, 676, 0, 677, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0,
    684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    689, 0, 690, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 696,
    0, 697, 0, 698, 699, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    701, 702, 0, 0, 0, 703, 0, 0, 704, 0, 705, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 708, 0, 0, 709, 0, 0, 0,
    710, 0, 0, 711, 0, 0, 712, 0, 713, 0, 714, 0, 0, 0, 0, 0, 0, 0, 715, 0, 716, 0, 0, 717, 718, 0, 0, 0, 0, 0, 0, 0,
    719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 721, 0, 0, 0, 722, 0, 723, 0, 724, 0, 725, 0, 726, 0, 0, 0, 727, 728, 0, 729, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 731, 0, 0, 0, 732, 0, 733, 0, 734, 735, 0, 0, 0, 736, 0, 0, 0, 0, 0,
    0, 737, 0, 0, 0, 738, 739, 0, 0, 0, 0, 0, 740, 0, 0, 0, 741, 742, 0, 0, 0, 0, 0, 743, 0, 0, 0, 744, 745, 0, 0, 0,
    0, 746, 0, 0, 0, 747, 748, 0, 749, 0, 750, 0, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 0, 0, 753, 754, 0, 0, 0, 755, 0, 756,
    757, 0, 758, 759, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 763, 0, 0, 0, 764,
    0, 0, 765, 0, 0, 0, 766, 0, 0, 767, 0, 0, 0, 768, 0, 0, 769, 0, 0, 0, 770, 0, 0, 771, 0, 772, 0, 773, 0, 774, 0, 775,
    0, 776, 0, 777, 0, 778, 0, 779, 780, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 783, 0, 784, 0, 0, 0,
    785, 786, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 789, 0, 0, 0, 0, 790, 0, 791, 0,
    0, 0, 792, 0, 793, 794, 0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 797, 0,
    798, 0, 799, 800, 0, 0, 801, 0, 802, 0, 0, 0, 803, 0, 804, 0, 0, 805, 0, 806, 0, 807, 0, 808, 0, 809, 0, 0, 0, 810, 0, 0,
    811, 0, 0, 812, 0, 0, 813, 0, 814, 0, 0, 0, 815, 816, 0, 0, 817, 0, 0, 818, 0, 819, 0, 0, 0, 0, 0, 0, 820, 821, 0, 0,
    0, 0, 822, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 825, 0, 826, 827, 0, 0, 828, 0, 829, 0, 0, 0, 830,
    0, 831, 0, 832, 0, 0, 833, 834, 0, 0, 835, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 837, 0, 838, 0, 839,
    840, 0, 0, 841, 0, 842, 0, 0, 0, 843, 0, 844, 0, 0, 0, 0, 0, 0, 845, 0, 846, 0, 847, 0, 848, 0, 849, 0, 0, 0, 850, 0,
    0, 851, 0, 0, 852, 0, 0, 853, 0, 854, 0, 0, 0, 855, 856, 0, 0, 857, 0, 0, 858, 0, 859, 0, 0, 0, 0, 0, 0, 860, 861, 0,
    0, 0, 0, 862, 0, 0, 0, 863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 864, 0, 865, 0, 866, 0, 0, 867, 0, 868, 0, 0, 0, 869,
    0, 870, 0, 871, 0, 0, 0, 0, 0, 0, 872, 0, 0, 873, 0, 0, 0, 874, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 875, 0, 876, 0,
    877, 0, 0, 878, 0, 879, 0, 0, 0, 880, 0, 881, 0, 882, 0, 0, 883, 0, 0, 884,
};
void recomp_unit_0137_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A28000u;
        entry_id = (entry_delta < 15824u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0137[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A28000;
    case 2u: goto L_08A28060;
    case 3u: goto L_08A28074;
    case 4u: goto L_08A28088;
    case 5u: goto L_08A2809C;
    case 6u: goto L_08A280B0;
    case 7u: goto L_08A280B8;
    case 8u: goto L_08A280C0;
    case 9u: goto L_08A280D0;
    case 10u: goto L_08A280E4;
    case 11u: goto L_08A280F8;
    case 12u: goto L_08A280FC;
    case 13u: goto L_08A28118;
    case 14u: goto L_08A28120;
    case 15u: goto L_08A28128;
    case 16u: goto L_08A28138;
    case 17u: goto L_08A2814C;
    case 18u: goto L_08A28160;
    case 19u: goto L_08A28164;
    case 20u: goto L_08A28184;
    case 21u: goto L_08A2818C;
    case 22u: goto L_08A28194;
    case 23u: goto L_08A281A4;
    case 24u: goto L_08A281B8;
    case 25u: goto L_08A281CC;
    case 26u: goto L_08A281D4;
    case 27u: goto L_08A28270;
    case 28u: goto L_08A282D0;
    case 29u: goto L_08A282E4;
    case 30u: goto L_08A28310;
    case 31u: goto L_08A28320;
    case 32u: goto L_08A283AC;
    case 33u: goto L_08A283BC;
    case 34u: goto L_08A28448;
    case 35u: goto L_08A28458;
    case 36u: goto L_08A284E0;
    case 37u: goto L_08A284F0;
    case 38u: goto L_08A28680;
    case 39u: goto L_08A28688;
    case 40u: goto L_08A286D0;
    case 41u: goto L_08A28764;
    case 42u: goto L_08A28798;
    case 43u: goto L_08A287AC;
    case 44u: goto L_08A287D4;
    case 45u: goto L_08A287E8;
    case 46u: goto L_08A287F8;
    case 47u: goto L_08A28808;
    case 48u: goto L_08A28814;
    case 49u: goto L_08A28824;
    case 50u: goto L_08A28830;
    case 51u: goto L_08A28840;
    case 52u: goto L_08A28850;
    case 53u: goto L_08A28864;
    case 54u: goto L_08A28874;
    case 55u: goto L_08A2887C;
    case 56u: goto L_08A28880;
    case 57u: goto L_08A28888;
    case 58u: goto L_08A28898;
    case 59u: goto L_08A288A4;
    case 60u: goto L_08A288B4;
    case 61u: goto L_08A288C0;
    case 62u: goto L_08A288D0;
    case 63u: goto L_08A288DC;
    case 64u: goto L_08A288EC;
    case 65u: goto L_08A288FC;
    case 66u: goto L_08A28910;
    case 67u: goto L_08A28920;
    case 68u: goto L_08A28934;
    case 69u: goto L_08A28944;
    case 70u: goto L_08A2894C;
    case 71u: goto L_08A28950;
    case 72u: goto L_08A28958;
    case 73u: goto L_08A28964;
    case 74u: goto L_08A2896C;
    case 75u: goto L_08A28988;
    case 76u: goto L_08A28990;
    case 77u: goto L_08A289E8;
    case 78u: goto L_08A28A10;
    case 79u: goto L_08A28A38;
    case 80u: goto L_08A28A60;
    case 81u: goto L_08A28AF4;
    case 82u: goto L_08A28B2C;
    case 83u: goto L_08A28B34;
    case 84u: goto L_08A28B48;
    case 85u: goto L_08A28B54;
    case 86u: goto L_08A28B6C;
    case 87u: goto L_08A28B74;
    case 88u: goto L_08A28B84;
    case 89u: goto L_08A28B98;
    case 90u: goto L_08A28BB8;
    case 91u: goto L_08A28BD0;
    case 92u: goto L_08A28BE8;
    case 93u: goto L_08A28BF0;
    case 94u: goto L_08A28BFC;
    case 95u: goto L_08A28C08;
    case 96u: goto L_08A28C10;
    case 97u: goto L_08A28C14;
    case 98u: goto L_08A28C1C;
    case 99u: goto L_08A28C2C;
    case 100u: goto L_08A28C30;
    case 101u: goto L_08A28C40;
    case 102u: goto L_08A28C58;
    case 103u: goto L_08A28C5C;
    case 104u: goto L_08A28C68;
    case 105u: goto L_08A28C74;
    case 106u: goto L_08A28C7C;
    case 107u: goto L_08A28C80;
    case 108u: goto L_08A28C88;
    case 109u: goto L_08A28C98;
    case 110u: goto L_08A28C9C;
    case 111u: goto L_08A28CA4;
    case 112u: goto L_08A28CB0;
    case 113u: goto L_08A28CC4;
    case 114u: goto L_08A28CD8;
    case 115u: goto L_08A28CE0;
    case 116u: goto L_08A28CF0;
    case 117u: goto L_08A28CFC;
    case 118u: goto L_08A28D04;
    case 119u: goto L_08A28D0C;
    case 120u: goto L_08A28D14;
    case 121u: goto L_08A28D28;
    case 122u: goto L_08A28D38;
    case 123u: goto L_08A28D3C;
    case 124u: goto L_08A28D44;
    case 125u: goto L_08A28D58;
    case 126u: goto L_08A28D6C;
    case 127u: goto L_08A28D74;
    case 128u: goto L_08A28D84;
    case 129u: goto L_08A28D90;
    case 130u: goto L_08A28D98;
    case 131u: goto L_08A28DA0;
    case 132u: goto L_08A28DA8;
    case 133u: goto L_08A28DBC;
    case 134u: goto L_08A28DC8;
    case 135u: goto L_08A28DCC;
    case 136u: goto L_08A28DD4;
    case 137u: goto L_08A28DE8;
    case 138u: goto L_08A28DFC;
    case 139u: goto L_08A28E04;
    case 140u: goto L_08A28E14;
    case 141u: goto L_08A28E20;
    case 142u: goto L_08A28E28;
    case 143u: goto L_08A28E30;
    case 144u: goto L_08A28E38;
    case 145u: goto L_08A28E4C;
    case 146u: goto L_08A28E5C;
    case 147u: goto L_08A28E60;
    case 148u: goto L_08A28E68;
    case 149u: goto L_08A28E7C;
    case 150u: goto L_08A28E90;
    case 151u: goto L_08A28E98;
    case 152u: goto L_08A28EA8;
    case 153u: goto L_08A28EB4;
    case 154u: goto L_08A28EBC;
    case 155u: goto L_08A28EC4;
    case 156u: goto L_08A28ECC;
    case 157u: goto L_08A28EE0;
    case 158u: goto L_08A28EF0;
    case 159u: goto L_08A28EF4;
    case 160u: goto L_08A28EFC;
    case 161u: goto L_08A28F90;
    case 162u: goto L_08A28FA4;
    case 163u: goto L_08A28FB0;
    case 164u: goto L_08A28FB8;
    case 165u: goto L_08A28FC0;
    case 166u: goto L_08A28FCC;
    case 167u: goto L_08A28FD8;
    case 168u: goto L_08A28FE4;
    case 169u: goto L_08A28FF0;
    case 170u: goto L_08A28FFC;
    case 171u: goto L_08A29008;
    case 172u: goto L_08A29010;
    case 173u: goto L_08A2901C;
    case 174u: goto L_08A29024;
    case 175u: goto L_08A2902C;
    case 176u: goto L_08A29040;
    case 177u: goto L_08A29058;
    case 178u: goto L_08A2905C;
    case 179u: goto L_08A29064;
    case 180u: goto L_08A2906C;
    case 181u: goto L_08A29074;
    case 182u: goto L_08A29094;
    case 183u: goto L_08A290A4;
    case 184u: goto L_08A290AC;
    case 185u: goto L_08A290BC;
    case 186u: goto L_08A290C0;
    case 187u: goto L_08A290D4;
    case 188u: goto L_08A290F4;
    case 189u: goto L_08A29104;
    case 190u: goto L_08A2910C;
    case 191u: goto L_08A29120;
    case 192u: goto L_08A29124;
    case 193u: goto L_08A29138;
    case 194u: goto L_08A29158;
    case 195u: goto L_08A29168;
    case 196u: goto L_08A29170;
    case 197u: goto L_08A29184;
    case 198u: goto L_08A29188;
    case 199u: goto L_08A2919C;
    case 200u: goto L_08A291A4;
    case 201u: goto L_08A291BC;
    case 202u: goto L_08A291C0;
    case 203u: goto L_08A291D8;
    case 204u: goto L_08A291E4;
    case 205u: goto L_08A29214;
    case 206u: goto L_08A2922C;
    case 207u: goto L_08A2925C;
    case 208u: goto L_08A29274;
    case 209u: goto L_08A29280;
    case 210u: goto L_08A2928C;
    case 211u: goto L_08A292A4;
    case 212u: goto L_08A292AC;
    case 213u: goto L_08A292B4;
    case 214u: goto L_08A292C0;
    case 215u: goto L_08A292C8;
    case 216u: goto L_08A292D4;
    case 217u: goto L_08A292E0;
    case 218u: goto L_08A292EC;
    case 219u: goto L_08A292F0;
    case 220u: goto L_08A292F8;
    case 221u: goto L_08A29300;
    case 222u: goto L_08A2933C;
    case 223u: goto L_08A29360;
    case 224u: goto L_08A29370;
    case 225u: goto L_08A29388;
    case 226u: goto L_08A29394;
    case 227u: goto L_08A2939C;
    case 228u: goto L_08A293A4;
    case 229u: goto L_08A293AC;
    case 230u: goto L_08A293B4;
    case 231u: goto L_08A293BC;
    case 232u: goto L_08A293C8;
    case 233u: goto L_08A293D0;
    case 234u: goto L_08A293E8;
    case 235u: goto L_08A293F4;
    case 236u: goto L_08A29400;
    case 237u: goto L_08A29408;
    case 238u: goto L_08A29414;
    case 239u: goto L_08A2941C;
    case 240u: goto L_08A2942C;
    case 241u: goto L_08A29438;
    case 242u: goto L_08A29440;
    case 243u: goto L_08A29450;
    case 244u: goto L_08A2945C;
    case 245u: goto L_08A29464;
    case 246u: goto L_08A2946C;
    case 247u: goto L_08A29478;
    case 248u: goto L_08A29484;
    case 249u: goto L_08A2948C;
    case 250u: goto L_08A29490;
    case 251u: goto L_08A294B4;
    case 252u: goto L_08A294D8;
    case 253u: goto L_08A294F8;
    case 254u: goto L_08A294FC;
    case 255u: goto L_08A29508;
    case 256u: goto L_08A29514;
    case 257u: goto L_08A2952C;
    case 258u: goto L_08A29540;
    case 259u: goto L_08A29554;
    case 260u: goto L_08A29564;
    case 261u: goto L_08A2956C;
    case 262u: goto L_08A2958C;
    case 263u: goto L_08A29598;
    case 264u: goto L_08A295A4;
    case 265u: goto L_08A295B0;
    case 266u: goto L_08A295B4;
    case 267u: goto L_08A295CC;
    case 268u: goto L_08A295F0;
    case 269u: goto L_08A29604;
    case 270u: goto L_08A29610;
    case 271u: goto L_08A2961C;
    case 272u: goto L_08A29674;
    case 273u: goto L_08A29680;
    case 274u: goto L_08A2969C;
    case 275u: goto L_08A296B0;
    case 276u: goto L_08A296C4;
    case 277u: goto L_08A296D4;
    case 278u: goto L_08A296E0;
    case 279u: goto L_08A296E8;
    case 280u: goto L_08A296F4;
    case 281u: goto L_08A29708;
    case 282u: goto L_08A2971C;
    case 283u: goto L_08A29734;
    case 284u: goto L_08A297D8;
    case 285u: goto L_08A297E0;
    case 286u: goto L_08A297F0;
    case 287u: goto L_08A29834;
    case 288u: goto L_08A2983C;
    case 289u: goto L_08A29844;
    case 290u: goto L_08A29890;
    case 291u: goto L_08A29898;
    case 292u: goto L_08A298A0;
    case 293u: goto L_08A298EC;
    case 294u: goto L_08A298F4;
    case 295u: goto L_08A298FC;
    case 296u: goto L_08A29904;
    case 297u: goto L_08A2998C;
    case 298u: goto L_08A2999C;
    case 299u: goto L_08A299AC;
    case 300u: goto L_08A299D0;
    case 301u: goto L_08A299E4;
    case 302u: goto L_08A29A10;
    case 303u: goto L_08A29A1C;
    case 304u: goto L_08A29A24;
    case 305u: goto L_08A29A34;
    case 306u: goto L_08A29A38;
    case 307u: goto L_08A29A40;
    case 308u: goto L_08A29A80;
    case 309u: goto L_08A29AA0;
    case 310u: goto L_08A29AC0;
    case 311u: goto L_08A29B28;
    case 312u: goto L_08A29B30;
    case 313u: goto L_08A29B44;
    case 314u: goto L_08A29B50;
    case 315u: goto L_08A29B64;
    case 316u: goto L_08A29B8C;
    case 317u: goto L_08A29B94;
    case 318u: goto L_08A29BA8;
    case 319u: goto L_08A29BB4;
    case 320u: goto L_08A29BC4;
    case 321u: goto L_08A29BCC;
    case 322u: goto L_08A29BD4;
    case 323u: goto L_08A29BE0;
    case 324u: goto L_08A29BF8;
    case 325u: goto L_08A29C04;
    case 326u: goto L_08A29C10;
    case 327u: goto L_08A29C18;
    case 328u: goto L_08A29C20;
    case 329u: goto L_08A29C3C;
    case 330u: goto L_08A29C5C;
    case 331u: goto L_08A29C78;
    case 332u: goto L_08A29C98;
    case 333u: goto L_08A29CD4;
    case 334u: goto L_08A29CE0;
    case 335u: goto L_08A29CF0;
    case 336u: goto L_08A29D00;
    case 337u: goto L_08A29D10;
    case 338u: goto L_08A29D24;
    case 339u: goto L_08A29D34;
    case 340u: goto L_08A29D3C;
    case 341u: goto L_08A29D4C;
    case 342u: goto L_08A29D5C;
    case 343u: goto L_08A29D68;
    case 344u: goto L_08A29D78;
    case 345u: goto L_08A29DAC;
    case 346u: goto L_08A29DB4;
    case 347u: goto L_08A29DB8;
    case 348u: goto L_08A29DCC;
    case 349u: goto L_08A29DD8;
    case 350u: goto L_08A29DE4;
    case 351u: goto L_08A29DEC;
    case 352u: goto L_08A29DF0;
    case 353u: goto L_08A29DFC;
    case 354u: goto L_08A29E04;
    case 355u: goto L_08A29E14;
    case 356u: goto L_08A29E18;
    case 357u: goto L_08A29E24;
    case 358u: goto L_08A29E34;
    case 359u: goto L_08A29E38;
    case 360u: goto L_08A29E40;
    case 361u: goto L_08A29E4C;
    case 362u: goto L_08A29E5C;
    case 363u: goto L_08A29E64;
    case 364u: goto L_08A29E70;
    case 365u: goto L_08A29E78;
    case 366u: goto L_08A29E8C;
    case 367u: goto L_08A29E94;
    case 368u: goto L_08A29EBC;
    case 369u: goto L_08A29EDC;
    case 370u: goto L_08A29EF0;
    case 371u: goto L_08A29F0C;
    case 372u: goto L_08A29F14;
    case 373u: goto L_08A29F18;
    case 374u: goto L_08A29F40;
    case 375u: goto L_08A29F84;
    case 376u: goto L_08A29F90;
    case 377u: goto L_08A29F98;
    case 378u: goto L_08A29FA0;
    case 379u: goto L_08A29FA8;
    case 380u: goto L_08A29FB4;
    case 381u: goto L_08A29FC0;
    case 382u: goto L_08A29FCC;
    case 383u: goto L_08A29FDC;
    case 384u: goto L_08A2A004;
    case 385u: goto L_08A2A014;
    case 386u: goto L_08A2A020;
    case 387u: goto L_08A2A028;
    case 388u: goto L_08A2A038;
    case 389u: goto L_08A2A048;
    case 390u: goto L_08A2A050;
    case 391u: goto L_08A2A058;
    case 392u: goto L_08A2A05C;
    case 393u: goto L_08A2A068;
    case 394u: goto L_08A2A070;
    case 395u: goto L_08A2A084;
    case 396u: goto L_08A2A08C;
    case 397u: goto L_08A2A094;
    case 398u: goto L_08A2A0A4;
    case 399u: goto L_08A2A0B0;
    case 400u: goto L_08A2A0B8;
    case 401u: goto L_08A2A0D4;
    case 402u: goto L_08A2A0E0;
    case 403u: goto L_08A2A0EC;
    case 404u: goto L_08A2A0F8;
    case 405u: goto L_08A2A104;
    case 406u: goto L_08A2A118;
    case 407u: goto L_08A2A120;
    case 408u: goto L_08A2A12C;
    case 409u: goto L_08A2A138;
    case 410u: goto L_08A2A144;
    case 411u: goto L_08A2A14C;
    case 412u: goto L_08A2A15C;
    case 413u: goto L_08A2A180;
    case 414u: goto L_08A2A1A0;
    case 415u: goto L_08A2A1B4;
    case 416u: goto L_08A2A1D0;
    case 417u: goto L_08A2A1DC;
    case 418u: goto L_08A2A1E0;
    case 419u: goto L_08A2A20C;
    case 420u: goto L_08A2A238;
    case 421u: goto L_08A2A244;
    case 422u: goto L_08A2A254;
    case 423u: goto L_08A2A25C;
    case 424u: goto L_08A2A264;
    case 425u: goto L_08A2A28C;
    case 426u: goto L_08A2A298;
    case 427u: goto L_08A2A2A8;
    case 428u: goto L_08A2A2B0;
    case 429u: goto L_08A2A2B8;
    case 430u: goto L_08A2A2BC;
    case 431u: goto L_08A2A2C4;
    case 432u: goto L_08A2A2D8;
    case 433u: goto L_08A2A2F0;
    case 434u: goto L_08A2A34C;
    case 435u: goto L_08A2A354;
    case 436u: goto L_08A2A35C;
    case 437u: goto L_08A2A36C;
    case 438u: goto L_08A2A378;
    case 439u: goto L_08A2A37C;
    case 440u: goto L_08A2A384;
    case 441u: goto L_08A2A3AC;
    case 442u: goto L_08A2A3B8;
    case 443u: goto L_08A2A3D4;
    case 444u: goto L_08A2A3E8;
    case 445u: goto L_08A2A414;
    case 446u: goto L_08A2A43C;
    case 447u: goto L_08A2A444;
    case 448u: goto L_08A2A44C;
    case 449u: goto L_08A2A4BC;
    case 450u: goto L_08A2A4D4;
    case 451u: goto L_08A2A500;
    case 452u: goto L_08A2A50C;
    case 453u: goto L_08A2A558;
    case 454u: goto L_08A2A5AC;
    case 455u: goto L_08A2A5E8;
    case 456u: goto L_08A2A5F0;
    case 457u: goto L_08A2A600;
    case 458u: goto L_08A2A608;
    case 459u: goto L_08A2A618;
    case 460u: goto L_08A2A624;
    case 461u: goto L_08A2A630;
    case 462u: goto L_08A2A63C;
    case 463u: goto L_08A2A65C;
    case 464u: goto L_08A2A670;
    case 465u: goto L_08A2A6C8;
    case 466u: goto L_08A2A6E8;
    case 467u: goto L_08A2A6F8;
    case 468u: goto L_08A2A704;
    case 469u: goto L_08A2A70C;
    case 470u: goto L_08A2A724;
    case 471u: goto L_08A2A734;
    case 472u: goto L_08A2A73C;
    case 473u: goto L_08A2A744;
    case 474u: goto L_08A2A74C;
    case 475u: goto L_08A2A754;
    case 476u: goto L_08A2A760;
    case 477u: goto L_08A2A768;
    case 478u: goto L_08A2A770;
    case 479u: goto L_08A2A778;
    case 480u: goto L_08A2A77C;
    case 481u: goto L_08A2A784;
    case 482u: goto L_08A2A78C;
    case 483u: goto L_08A2A7A4;
    case 484u: goto L_08A2A7AC;
    case 485u: goto L_08A2A7E0;
    case 486u: goto L_08A2A7EC;
    case 487u: goto L_08A2A7F4;
    case 488u: goto L_08A2A804;
    case 489u: goto L_08A2A80C;
    case 490u: goto L_08A2A814;
    case 491u: goto L_08A2A81C;
    case 492u: goto L_08A2A824;
    case 493u: goto L_08A2A82C;
    case 494u: goto L_08A2A834;
    case 495u: goto L_08A2A83C;
    case 496u: goto L_08A2A844;
    case 497u: goto L_08A2A858;
    case 498u: goto L_08A2A860;
    case 499u: goto L_08A2A874;
    case 500u: goto L_08A2A87C;
    case 501u: goto L_08A2A890;
    case 502u: goto L_08A2A898;
    case 503u: goto L_08A2A8AC;
    case 504u: goto L_08A2A8B4;
    case 505u: goto L_08A2A8C8;
    case 506u: goto L_08A2A8D0;
    case 507u: goto L_08A2A8E4;
    case 508u: goto L_08A2A8EC;
    case 509u: goto L_08A2A8F0;
    case 510u: goto L_08A2A90C;
    case 511u: goto L_08A2A930;
    case 512u: goto L_08A2A944;
    case 513u: goto L_08A2A950;
    case 514u: goto L_08A2A958;
    case 515u: goto L_08A2A96C;
    case 516u: goto L_08A2A974;
    case 517u: goto L_08A2A97C;
    case 518u: goto L_08A2A984;
    case 519u: goto L_08A2A98C;
    case 520u: goto L_08A2A994;
    case 521u: goto L_08A2A99C;
    case 522u: goto L_08A2A9A4;
    case 523u: goto L_08A2A9AC;
    case 524u: goto L_08A2A9B4;
    case 525u: goto L_08A2A9C4;
    case 526u: goto L_08A2A9CC;
    case 527u: goto L_08A2A9DC;
    case 528u: goto L_08A2A9E4;
    case 529u: goto L_08A2A9F4;
    case 530u: goto L_08A2A9FC;
    case 531u: goto L_08A2AA0C;
    case 532u: goto L_08A2AA14;
    case 533u: goto L_08A2AA24;
    case 534u: goto L_08A2AA2C;
    case 535u: goto L_08A2AA3C;
    case 536u: goto L_08A2AA44;
    case 537u: goto L_08A2AA48;
    case 538u: goto L_08A2AA60;
    case 539u: goto L_08A2AA84;
    case 540u: goto L_08A2AA98;
    case 541u: goto L_08A2AAA4;
    case 542u: goto L_08A2AAAC;
    case 543u: goto L_08A2AAC0;
    case 544u: goto L_08A2AAC8;
    case 545u: goto L_08A2AAD0;
    case 546u: goto L_08A2AAD8;
    case 547u: goto L_08A2AAE0;
    case 548u: goto L_08A2AAE8;
    case 549u: goto L_08A2AAF0;
    case 550u: goto L_08A2AAF8;
    case 551u: goto L_08A2AB00;
    case 552u: goto L_08A2AB08;
    case 553u: goto L_08A2AB18;
    case 554u: goto L_08A2AB20;
    case 555u: goto L_08A2AB30;
    case 556u: goto L_08A2AB38;
    case 557u: goto L_08A2AB48;
    case 558u: goto L_08A2AB50;
    case 559u: goto L_08A2AB60;
    case 560u: goto L_08A2AB68;
    case 561u: goto L_08A2AB78;
    case 562u: goto L_08A2AB80;
    case 563u: goto L_08A2AB90;
    case 564u: goto L_08A2AB98;
    case 565u: goto L_08A2AB9C;
    case 566u: goto L_08A2ABB4;
    case 567u: goto L_08A2ABD8;
    case 568u: goto L_08A2ABEC;
    case 569u: goto L_08A2ABF8;
    case 570u: goto L_08A2AC00;
    case 571u: goto L_08A2AC14;
    case 572u: goto L_08A2AC1C;
    case 573u: goto L_08A2AC24;
    case 574u: goto L_08A2AC2C;
    case 575u: goto L_08A2AC34;
    case 576u: goto L_08A2AC3C;
    case 577u: goto L_08A2AC44;
    case 578u: goto L_08A2AC4C;
    case 579u: goto L_08A2AC54;
    case 580u: goto L_08A2AC5C;
    case 581u: goto L_08A2AC6C;
    case 582u: goto L_08A2AC74;
    case 583u: goto L_08A2AC84;
    case 584u: goto L_08A2AC8C;
    case 585u: goto L_08A2AC9C;
    case 586u: goto L_08A2ACA4;
    case 587u: goto L_08A2ACB4;
    case 588u: goto L_08A2ACBC;
    case 589u: goto L_08A2ACCC;
    case 590u: goto L_08A2ACD4;
    case 591u: goto L_08A2ACE4;
    case 592u: goto L_08A2ACEC;
    case 593u: goto L_08A2ACF0;
    case 594u: goto L_08A2AD08;
    case 595u: goto L_08A2AD2C;
    case 596u: goto L_08A2AD40;
    case 597u: goto L_08A2AD4C;
    case 598u: goto L_08A2AD54;
    case 599u: goto L_08A2AD68;
    case 600u: goto L_08A2AD70;
    case 601u: goto L_08A2AD78;
    case 602u: goto L_08A2AD80;
    case 603u: goto L_08A2AD88;
    case 604u: goto L_08A2AD90;
    case 605u: goto L_08A2AD98;
    case 606u: goto L_08A2ADA0;
    case 607u: goto L_08A2ADA8;
    case 608u: goto L_08A2ADB0;
    case 609u: goto L_08A2ADC0;
    case 610u: goto L_08A2ADC8;
    case 611u: goto L_08A2ADD8;
    case 612u: goto L_08A2ADE0;
    case 613u: goto L_08A2ADF0;
    case 614u: goto L_08A2ADF8;
    case 615u: goto L_08A2AE08;
    case 616u: goto L_08A2AE10;
    case 617u: goto L_08A2AE20;
    case 618u: goto L_08A2AE28;
    case 619u: goto L_08A2AE38;
    case 620u: goto L_08A2AE40;
    case 621u: goto L_08A2AE44;
    case 622u: goto L_08A2AE5C;
    case 623u: goto L_08A2AE80;
    case 624u: goto L_08A2AE94;
    case 625u: goto L_08A2AEA0;
    case 626u: goto L_08A2AEA8;
    case 627u: goto L_08A2AEBC;
    case 628u: goto L_08A2AEC4;
    case 629u: goto L_08A2AECC;
    case 630u: goto L_08A2AED4;
    case 631u: goto L_08A2AEDC;
    case 632u: goto L_08A2AEE4;
    case 633u: goto L_08A2AEEC;
    case 634u: goto L_08A2AEF4;
    case 635u: goto L_08A2AEFC;
    case 636u: goto L_08A2AF04;
    case 637u: goto L_08A2AF14;
    case 638u: goto L_08A2AF1C;
    case 639u: goto L_08A2AF2C;
    case 640u: goto L_08A2AF34;
    case 641u: goto L_08A2AF44;
    case 642u: goto L_08A2AF4C;
    case 643u: goto L_08A2AF5C;
    case 644u: goto L_08A2AF64;
    case 645u: goto L_08A2AF74;
    case 646u: goto L_08A2AF7C;
    case 647u: goto L_08A2AF8C;
    case 648u: goto L_08A2AF94;
    case 649u: goto L_08A2AF98;
    case 650u: goto L_08A2AFB0;
    case 651u: goto L_08A2AFC4;
    case 652u: goto L_08A2AFD4;
    case 653u: goto L_08A2AFE4;
    case 654u: goto L_08A2AFEC;
    case 655u: goto L_08A2AFF4;
    case 656u: goto L_08A2AFFC;
    case 657u: goto L_08A2B004;
    case 658u: goto L_08A2B00C;
    case 659u: goto L_08A2B014;
    case 660u: goto L_08A2B01C;
    case 661u: goto L_08A2B024;
    case 662u: goto L_08A2B034;
    case 663u: goto L_08A2B03C;
    case 664u: goto L_08A2B04C;
    case 665u: goto L_08A2B054;
    case 666u: goto L_08A2B064;
    case 667u: goto L_08A2B06C;
    case 668u: goto L_08A2B07C;
    case 669u: goto L_08A2B084;
    case 670u: goto L_08A2B094;
    case 671u: goto L_08A2B09C;
    case 672u: goto L_08A2B0AC;
    case 673u: goto L_08A2B0B4;
    case 674u: goto L_08A2B0BC;
    case 675u: goto L_08A2B0C4;
    case 676u: goto L_08A2B0CC;
    case 677u: goto L_08A2B0D4;
    case 678u: goto L_08A2B0E4;
    case 679u: goto L_08A2B11C;
    case 680u: goto L_08A2B128;
    case 681u: goto L_08A2B170;
    case 682u: goto L_08A2B1B8;
    case 683u: goto L_08A2B1EC;
    case 684u: goto L_08A2B200;
    case 685u: goto L_08A2B214;
    case 686u: goto L_08A2B238;
    case 687u: goto L_08A2B240;
    case 688u: goto L_08A2B254;
    case 689u: goto L_08A2B280;
    case 690u: goto L_08A2B288;
    case 691u: goto L_08A2B294;
    case 692u: goto L_08A2B2A4;
    case 693u: goto L_08A2B2C8;
    case 694u: goto L_08A2B2FC;
    case 695u: goto L_08A2B364;
    case 696u: goto L_08A2B37C;
    case 697u: goto L_08A2B384;
    case 698u: goto L_08A2B38C;
    case 699u: goto L_08A2B390;
    case 700u: goto L_08A2B3B0;
    case 701u: goto L_08A2B400;
    case 702u: goto L_08A2B404;
    case 703u: goto L_08A2B414;
    case 704u: goto L_08A2B420;
    case 705u: goto L_08A2B428;
    case 706u: goto L_08A2B438;
    case 707u: goto L_08A2B454;
    case 708u: goto L_08A2B464;
    case 709u: goto L_08A2B470;
    case 710u: goto L_08A2B480;
    case 711u: goto L_08A2B48C;
    case 712u: goto L_08A2B498;
    case 713u: goto L_08A2B4A0;
    case 714u: goto L_08A2B4A8;
    case 715u: goto L_08A2B4C8;
    case 716u: goto L_08A2B4D0;
    case 717u: goto L_08A2B4DC;
    case 718u: goto L_08A2B4E0;
    case 719u: goto L_08A2B500;
    case 720u: goto L_08A2B528;
    case 721u: goto L_08A2B52C;
    case 722u: goto L_08A2B53C;
    case 723u: goto L_08A2B544;
    case 724u: goto L_08A2B54C;
    case 725u: goto L_08A2B554;
    case 726u: goto L_08A2B55C;
    case 727u: goto L_08A2B56C;
    case 728u: goto L_08A2B570;
    case 729u: goto L_08A2B578;
    case 730u: goto L_08A2B5A8;
    case 731u: goto L_08A2B5B4;
    case 732u: goto L_08A2B5C4;
    case 733u: goto L_08A2B5CC;
    case 734u: goto L_08A2B5D4;
    case 735u: goto L_08A2B5D8;
    case 736u: goto L_08A2B5E8;
    case 737u: goto L_08A2B604;
    case 738u: goto L_08A2B614;
    case 739u: goto L_08A2B618;
    case 740u: goto L_08A2B630;
    case 741u: goto L_08A2B640;
    case 742u: goto L_08A2B644;
    case 743u: goto L_08A2B65C;
    case 744u: goto L_08A2B66C;
    case 745u: goto L_08A2B670;
    case 746u: goto L_08A2B684;
    case 747u: goto L_08A2B694;
    case 748u: goto L_08A2B698;
    case 749u: goto L_08A2B6A0;
    case 750u: goto L_08A2B6A8;
    case 751u: goto L_08A2B6C4;
    case 752u: goto L_08A2B6D0;
    case 753u: goto L_08A2B6E0;
    case 754u: goto L_08A2B6E4;
    case 755u: goto L_08A2B6F4;
    case 756u: goto L_08A2B6FC;
    case 757u: goto L_08A2B700;
    case 758u: goto L_08A2B708;
    case 759u: goto L_08A2B70C;
    case 760u: goto L_08A2B714;
    case 761u: goto L_08A2B740;
    case 762u: goto L_08A2B760;
    case 763u: goto L_08A2B76C;
    case 764u: goto L_08A2B77C;
    case 765u: goto L_08A2B788;
    case 766u: goto L_08A2B798;
    case 767u: goto L_08A2B7A4;
    case 768u: goto L_08A2B7B4;
    case 769u: goto L_08A2B7C0;
    case 770u: goto L_08A2B7D0;
    case 771u: goto L_08A2B7DC;
    case 772u: goto L_08A2B7E4;
    case 773u: goto L_08A2B7EC;
    case 774u: goto L_08A2B7F4;
    case 775u: goto L_08A2B7FC;
    case 776u: goto L_08A2B804;
    case 777u: goto L_08A2B80C;
    case 778u: goto L_08A2B814;
    case 779u: goto L_08A2B81C;
    case 780u: goto L_08A2B820;
    case 781u: goto L_08A2B82C;
    case 782u: goto L_08A2B858;
    case 783u: goto L_08A2B868;
    case 784u: goto L_08A2B870;
    case 785u: goto L_08A2B880;
    case 786u: goto L_08A2B884;
    case 787u: goto L_08A2B88C;
    case 788u: goto L_08A2B8D8;
    case 789u: goto L_08A2B8DC;
    case 790u: goto L_08A2B8F0;
    case 791u: goto L_08A2B8F8;
    case 792u: goto L_08A2B908;
    case 793u: goto L_08A2B910;
    case 794u: goto L_08A2B914;
    case 795u: goto L_08A2B934;
    case 796u: goto L_08A2B94C;
    case 797u: goto L_08A2B978;
    case 798u: goto L_08A2B980;
    case 799u: goto L_08A2B988;
    case 800u: goto L_08A2B98C;
    case 801u: goto L_08A2B998;
    case 802u: goto L_08A2B9A0;
    case 803u: goto L_08A2B9B0;
    case 804u: goto L_08A2B9B8;
    case 805u: goto L_08A2B9C4;
    case 806u: goto L_08A2B9CC;
    case 807u: goto L_08A2B9D4;
    case 808u: goto L_08A2B9DC;
    case 809u: goto L_08A2B9E4;
    case 810u: goto L_08A2B9F4;
    case 811u: goto L_08A2BA00;
    case 812u: goto L_08A2BA0C;
    case 813u: goto L_08A2BA18;
    case 814u: goto L_08A2BA20;
    case 815u: goto L_08A2BA30;
    case 816u: goto L_08A2BA34;
    case 817u: goto L_08A2BA40;
    case 818u: goto L_08A2BA4C;
    case 819u: goto L_08A2BA54;
    case 820u: goto L_08A2BA70;
    case 821u: goto L_08A2BA74;
    case 822u: goto L_08A2BA88;
    case 823u: goto L_08A2BA98;
    case 824u: goto L_08A2BAC4;
    case 825u: goto L_08A2BACC;
    case 826u: goto L_08A2BAD4;
    case 827u: goto L_08A2BAD8;
    case 828u: goto L_08A2BAE4;
    case 829u: goto L_08A2BAEC;
    case 830u: goto L_08A2BAFC;
    case 831u: goto L_08A2BB04;
    case 832u: goto L_08A2BB0C;
    case 833u: goto L_08A2BB18;
    case 834u: goto L_08A2BB1C;
    case 835u: goto L_08A2BB28;
    case 836u: goto L_08A2BB40;
    case 837u: goto L_08A2BB6C;
    case 838u: goto L_08A2BB74;
    case 839u: goto L_08A2BB7C;
    case 840u: goto L_08A2BB80;
    case 841u: goto L_08A2BB8C;
    case 842u: goto L_08A2BB94;
    case 843u: goto L_08A2BBA4;
    case 844u: goto L_08A2BBAC;
    case 845u: goto L_08A2BBC8;
    case 846u: goto L_08A2BBD0;
    case 847u: goto L_08A2BBD8;
    case 848u: goto L_08A2BBE0;
    case 849u: goto L_08A2BBE8;
    case 850u: goto L_08A2BBF8;
    case 851u: goto L_08A2BC04;
    case 852u: goto L_08A2BC10;
    case 853u: goto L_08A2BC1C;
    case 854u: goto L_08A2BC24;
    case 855u: goto L_08A2BC34;
    case 856u: goto L_08A2BC38;
    case 857u: goto L_08A2BC44;
    case 858u: goto L_08A2BC50;
    case 859u: goto L_08A2BC58;
    case 860u: goto L_08A2BC74;
    case 861u: goto L_08A2BC78;
    case 862u: goto L_08A2BC8C;
    case 863u: goto L_08A2BC9C;
    case 864u: goto L_08A2BCC8;
    case 865u: goto L_08A2BCD0;
    case 866u: goto L_08A2BCD8;
    case 867u: goto L_08A2BCE4;
    case 868u: goto L_08A2BCEC;
    case 869u: goto L_08A2BCFC;
    case 870u: goto L_08A2BD04;
    case 871u: goto L_08A2BD0C;
    case 872u: goto L_08A2BD28;
    case 873u: goto L_08A2BD34;
    case 874u: goto L_08A2BD44;
    case 875u: goto L_08A2BD70;
    case 876u: goto L_08A2BD78;
    case 877u: goto L_08A2BD80;
    case 878u: goto L_08A2BD8C;
    case 879u: goto L_08A2BD94;
    case 880u: goto L_08A2BDA4;
    case 881u: goto L_08A2BDAC;
    case 882u: goto L_08A2BDB4;
    case 883u: goto L_08A2BDC0;
    case 884u: goto L_08A2BDCC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A28000:
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[28] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
      if (branch_taken) {
          goto L_08A2809C;
      }
      goto L_08A28060;
    }
L_08A28060:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2809C;
      }
      goto L_08A28074;
    }
L_08A28074:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2809C;
      }
      goto L_08A28088;
    }
L_08A28088:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A280B8;
      }
      goto L_08A2809C;
    }
L_08A2809C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08A280C0;
    }
    goto L_08A280B0;
L_08A280B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A280FC;
      }
      goto L_08A280B8;
    }
L_08A280B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28688;
      }
      goto L_08A280C0;
    }
L_08A280C0:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A280FC;
      }
      goto L_08A280D0;
    }
L_08A280D0:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A280FC;
      }
      goto L_08A280E4;
    }
L_08A280E4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A28120;
      }
      goto L_08A280F8;
    }
L_08A280F8:
    ctx.gpr[4] = (2229u << 16u);
    goto L_08A280FC;
L_08A280FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_08A28128;
    }
    goto L_08A28118;
L_08A28118:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A28164;
      }
      goto L_08A28120;
    }
L_08A28120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28688;
      }
      goto L_08A28128;
    }
L_08A28128:
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A28164;
      }
      goto L_08A28138;
    }
L_08A28138:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A28164;
      }
      goto L_08A2814C;
    }
L_08A2814C:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2818C;
      }
      goto L_08A28160;
    }
L_08A28160:
    ctx.gpr[4] = (2229u << 16u);
    goto L_08A28164;
L_08A28164:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08A28194;
    }
    goto L_08A28184;
L_08A28184:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A281D4;
      }
      goto L_08A2818C;
    }
L_08A2818C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28688;
      }
      goto L_08A28194;
    }
L_08A28194:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A281D4;
      }
      goto L_08A281A4;
    }
L_08A281A4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A281D4;
      }
      goto L_08A281B8;
    }
L_08A281B8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A281D4;
      }
      goto L_08A281CC;
    }
L_08A281CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28688;
      }
      goto L_08A281D4;
    }
L_08A281D4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11428)));
    ctx.gpr[30] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20400));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A28270u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 273u, 0x08A2590Cu>(ctx, &aot_mem) && ctx.pc == 0x08A28270u) goto L_08A28270;
    return;
L_08A28270:
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[7] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[23]);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[13] = ctx.fpr[24] - ctx.fpr[26];
    ctx.fpr[14] = ctx.fpr[26] + ctx.fpr[24];
    ctx.fpr[15] = ctx.fpr[26] - ctx.fpr[24];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[2])));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[1])));
    goto L_08A282D0;
L_08A282D0:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A282D0;
      }
      goto L_08A282E4;
    }
L_08A282E4:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(83)));
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[4];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[3] <= ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_08A28310;
    }
    goto L_08A28310;
L_08A28310:
    ctx.set_fpu_condition((ctx.fpr[3] <= ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
        goto L_08A28320;
    }
    goto L_08A28320;
L_08A28320:
    ctx.fpr[4] = ctx.fpr[30] - ctx.fpr[3];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[8] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[7];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[6] = ctx.fpr[6] + ctx.fpr[8];
    ctx.fpr[5] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[5]));
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[4];
    ctx.fpr[6] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[6]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[3] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[3]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[4];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(81)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_08A283AC;
    }
    goto L_08A283AC;
L_08A283AC:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
        goto L_08A283BC;
    }
    goto L_08A283BC;
L_08A283BC:
    ctx.fpr[3] = ctx.fpr[30] - ctx.fpr[13];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[6];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[7];
    ctx.fpr[4] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[4]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[3];
    ctx.fpr[5] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[5]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[3];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(81)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_08A28448;
    }
    goto L_08A28448;
L_08A28448:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
        goto L_08A28458;
    }
    goto L_08A28458;
L_08A28458:
    ctx.fpr[13] = ctx.fpr[30] - ctx.fpr[14];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[5];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[6];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[3]));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[4] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[4]));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(81)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[22]));
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_08A284E0;
    }
    goto L_08A284E0;
L_08A284E0:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
        goto L_08A284F0;
    }
    goto L_08A284F0;
L_08A284F0:
    ctx.fpr[13] = ctx.fpr[30] - ctx.fpr[12];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[18];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[0];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(81)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (18176u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11428)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-28752));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-11428), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 96 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A28688;
      }
      goto L_08A28680;
    }
L_08A28680:
    ctx.gpr[31] = (0x08A28688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 302u, 0x08A25F64u>(ctx, &aot_mem) && ctx.pc == 0x08A28688u) goto L_08A28688;
    return;
L_08A28688:
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
L_08A286D0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11460)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11464)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11436)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[3] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-11456), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-11448), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-11452), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11444), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-11432), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28764:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A28798u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 511u, 0x08A06588u>(ctx, &aot_mem) && ctx.pc == 0x08A28798u) goto L_08A28798;
    return;
L_08A28798:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A287AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[31] = (0x08A287D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 490u, 0x08A05FD4u>(ctx, &aot_mem) && ctx.pc == 0x08A287D4u) goto L_08A287D4;
    return;
L_08A287D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A287E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A287E8u) goto L_08A287E8;
    return;
L_08A287E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A287F8:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08A28814;
      }
      goto L_08A28808;
    }
L_08A28808:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    goto L_08A28814;
L_08A28814:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A28830;
      }
      goto L_08A28824;
    }
L_08A28824:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    goto L_08A28830;
L_08A28830:
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2887C;
      }
      goto L_08A28840;
    }
L_08A28840:
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2887C;
      }
      goto L_08A28850;
    }
L_08A28850:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2887C;
      }
      goto L_08A28864;
    }
L_08A28864:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2887C;
      }
      goto L_08A28874;
    }
L_08A28874:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A28880;
      }
      goto L_08A2887C;
    }
L_08A2887C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A28880;
L_08A28880:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28888:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08A288A4;
      }
      goto L_08A28898;
    }
L_08A28898:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    goto L_08A288A4;
L_08A288A4:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A288C0;
      }
      goto L_08A288B4;
    }
L_08A288B4:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    goto L_08A288C0;
L_08A288C0:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A288DC;
      }
      goto L_08A288D0;
    }
L_08A288D0:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    goto L_08A288DC;
L_08A288DC:
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2894C;
      }
      goto L_08A288EC;
    }
L_08A288EC:
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2894C;
      }
      goto L_08A288FC;
    }
L_08A288FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2894C;
      }
      goto L_08A28910;
    }
L_08A28910:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2894C;
      }
      goto L_08A28920;
    }
L_08A28920:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2894C;
      }
      goto L_08A28934;
    }
L_08A28934:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2894C;
      }
      goto L_08A28944;
    }
L_08A28944:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A28950;
      }
      goto L_08A2894C;
    }
L_08A2894C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A28950;
L_08A28950:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28958:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5924), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28964:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2896C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11372)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-11372), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 30 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11372)));
        goto L_08A28990;
    }
    goto L_08A28988;
L_08A28988:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-11372), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11372)));
    goto L_08A28990;
L_08A28990:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22240));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(22360));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(22480));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(22600));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(22720));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A289E8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11372)));
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22240));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28A10:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11372)));
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22360));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28A38:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11372)));
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22480));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28A60:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11404)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11408)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11380)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[3] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-11400), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-11392), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-11396), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-11376), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28AF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[19] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-7872), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-11332), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A28B98;
      }
      goto L_08A28B2C;
    }
L_08A28B2C:
    ctx.gpr[16] = (0u | 6u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08A28B34;
L_08A28B34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28B84;
      }
      goto L_08A28B48;
    }
L_08A28B48:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A28B84;
      }
      goto L_08A28B54;
    }
L_08A28B54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A28B6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A28B6Cu) goto L_08A28B6C;
    return;
L_08A28B6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28B84;
      }
      goto L_08A28B74;
    }
L_08A28B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08A28B84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 351u, 0x08876D84u>(ctx, &aot_mem) && ctx.pc == 0x08A28B84u) goto L_08A28B84;
    return;
L_08A28B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A28B34;
      }
      goto L_08A28B98;
    }
L_08A28B98:
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
L_08A28BB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A28BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x08A28BD0u) goto L_08A28BD0;
    return;
L_08A28BD0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A28C2C;
      }
      goto L_08A28BE8;
    }
L_08A28BE8:
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11332)));
    goto L_08A28BF0;
L_08A28BF0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28C1C;
      }
      goto L_08A28BFC;
    }
L_08A28BFC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A28C1C;
      }
      goto L_08A28C08;
    }
L_08A28C08:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28C14;
      }
      goto L_08A28C10;
    }
L_08A28C10:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A28C14;
L_08A28C14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28C30;
      }
      goto L_08A28C1C;
    }
L_08A28C1C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A28BF0;
      }
      goto L_08A28C2C;
    }
L_08A28C2C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A28C30;
L_08A28C30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28C40:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A28C98;
      }
      goto L_08A28C58;
    }
L_08A28C58:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    goto L_08A28C5C;
L_08A28C5C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28C88;
      }
      goto L_08A28C68;
    }
L_08A28C68:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A28C88;
      }
      goto L_08A28C74;
    }
L_08A28C74:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28C80;
      }
      goto L_08A28C7C;
    }
L_08A28C7C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    goto L_08A28C80;
L_08A28C80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28C9C;
      }
      goto L_08A28C88;
    }
L_08A28C88:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A28C5C;
      }
      goto L_08A28C98;
    }
L_08A28C98:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A28C9C;
L_08A28C9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28CA4:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7092), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28CB0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28CD8;
      }
      goto L_08A28CC4;
    }
L_08A28CC4:
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A28CD8;
L_08A28CD8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28D0C;
      }
      goto L_08A28CE0;
    }
L_08A28CE0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A28D04;
      }
      goto L_08A28CF0;
    }
L_08A28CF0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D14;
      }
      goto L_08A28CFC;
    }
L_08A28CFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28D28;
      }
      goto L_08A28D04;
    }
L_08A28D04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D3C;
      }
      goto L_08A28D0C;
    }
L_08A28D0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D3C;
      }
      goto L_08A28D14;
    }
L_08A28D14:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A28D28;
L_08A28D28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A28D04;
      }
      goto L_08A28D38;
    }
L_08A28D38:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A28D3C;
L_08A28D3C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28D44:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28D6C;
      }
      goto L_08A28D58;
    }
L_08A28D58:
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A28D6C;
L_08A28D6C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28DA0;
      }
      goto L_08A28D74;
    }
L_08A28D74:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A28D98;
      }
      goto L_08A28D84;
    }
L_08A28D84:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28DA8;
      }
      goto L_08A28D90;
    }
L_08A28D90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28DBC;
      }
      goto L_08A28D98;
    }
L_08A28D98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28DCC;
      }
      goto L_08A28DA0;
    }
L_08A28DA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28DCC;
      }
      goto L_08A28DA8;
    }
L_08A28DA8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A28DBC;
L_08A28DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A28D98;
      }
      goto L_08A28DC8;
    }
L_08A28DC8:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A28DCC;
L_08A28DCC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28DD4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28DFC;
      }
      goto L_08A28DE8;
    }
L_08A28DE8:
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A28DFC;
L_08A28DFC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28E30;
      }
      goto L_08A28E04;
    }
L_08A28E04:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A28E28;
      }
      goto L_08A28E14;
    }
L_08A28E14:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28E38;
      }
      goto L_08A28E20;
    }
L_08A28E20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28E4C;
      }
      goto L_08A28E28;
    }
L_08A28E28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28E60;
      }
      goto L_08A28E30;
    }
L_08A28E30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28E60;
      }
      goto L_08A28E38;
    }
L_08A28E38:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A28E4C;
L_08A28E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A28E28;
      }
      goto L_08A28E5C;
    }
L_08A28E5C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A28E60;
L_08A28E60:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28E68:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28E90;
      }
      goto L_08A28E7C;
    }
L_08A28E7C:
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A28E90;
L_08A28E90:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28EC4;
      }
      goto L_08A28E98;
    }
L_08A28E98:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A28EBC;
      }
      goto L_08A28EA8;
    }
L_08A28EA8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28ECC;
      }
      goto L_08A28EB4;
    }
L_08A28EB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28EE0;
      }
      goto L_08A28EBC;
    }
L_08A28EBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28EF4;
      }
      goto L_08A28EC4;
    }
L_08A28EC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28EF4;
      }
      goto L_08A28ECC;
    }
L_08A28ECC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A28EE0;
L_08A28EE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A28EBC;
      }
      goto L_08A28EF0;
    }
L_08A28EF0:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A28EF4;
L_08A28EF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28EFC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11364)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11368)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11340)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[3] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-11360), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-11352), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-11356), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11348), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-11336), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28F90:
    ctx.gpr[4] = (0u | 254u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A28FCC;
      }
      goto L_08A28FA4;
    }
L_08A28FA4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A28FB8;
      }
      goto L_08A28FB0;
    }
L_08A28FB0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A28FC0;
      }
      goto L_08A28FB8;
    }
L_08A28FB8:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A28FC0;
L_08A28FC0:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A2905C;
      }
      goto L_08A28FCC;
    }
L_08A28FCC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2901C;
      }
      goto L_08A28FD8;
    }
L_08A28FD8:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A28FF0;
      }
      goto L_08A28FE4;
    }
L_08A28FE4:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A29010;
      }
      goto L_08A28FF0;
    }
L_08A28FF0:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A29008;
      }
      goto L_08A28FFC;
    }
L_08A28FFC:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A29010;
      }
      goto L_08A29008;
    }
L_08A29008:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A29010;
L_08A29010:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A2905C;
      }
      goto L_08A2901C;
    }
L_08A2901C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A29040;
      }
      goto L_08A29024;
    }
L_08A29024:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A29058;
      }
      goto L_08A2902C;
    }
L_08A2902C:
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2905C;
      }
      goto L_08A29040;
    }
L_08A29040:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2905C;
      }
      goto L_08A29058;
    }
L_08A29058:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2905C;
L_08A2905C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29064:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2906C;
      }
      goto L_08A2906C;
    }
L_08A2906C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A29094u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A292C8;
L_08A29094:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A290AC;
      }
      goto L_08A290A4;
    }
L_08A290A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A290C0;
      }
      goto L_08A290AC;
    }
L_08A290AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A290BCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A2928C;
L_08A290BC:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A290C0;
L_08A290C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A290D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A290F4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A2925C;
L_08A290F4:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2910C;
      }
      goto L_08A29104;
    }
L_08A29104:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A29124;
      }
      goto L_08A2910C;
    }
L_08A2910C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A29120u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A2922C;
L_08A29120:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A29124;
L_08A29124:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29138:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A29158u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A29280;
L_08A29158:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A29170;
      }
      goto L_08A29168;
    }
L_08A29168:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A29188;
      }
      goto L_08A29170;
    }
L_08A29170:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A29184u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A29274;
L_08A29184:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A29188;
L_08A29188:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2919C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    goto L_08A291A4;
L_08A291A4:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A291A4;
      }
      goto L_08A291BC;
    }
L_08A291BC:
    ctx.gpr[5] = (0u | 0u);
    goto L_08A291C0;
L_08A291C0:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A291C0;
      }
      goto L_08A291D8;
    }
L_08A291D8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A291E4:
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] << (ctx.gpr[5] & 31u));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] ^ ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[8] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29214:
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[2] = (ctx.gpr[4] >> (ctx.gpr[5] & 31u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 3u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2922C:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (0u | 15u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] << (ctx.gpr[5] & 31u));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] ^ ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[8] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2925C:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[2] = (ctx.gpr[4] >> (ctx.gpr[5] & 31u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 15u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29274:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29280:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2928C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A292C0;
      }
      goto L_08A292A4;
    }
L_08A292A4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A292C0;
      }
      goto L_08A292AC;
    }
L_08A292AC:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A292C0;
      }
      goto L_08A292B4;
    }
L_08A292B4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A292C0;
L_08A292C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A292C8:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A292D4:
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(251) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A292EC;
      }
      goto L_08A292E0;
    }
L_08A292E0:
    ctx.gpr[5] = (0u | 250u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A292F0;
      }
      goto L_08A292EC;
    }
L_08A292EC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A292F0;
L_08A292F0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A292F8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29300:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2933Cu);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08A28F90;
L_08A2933C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11320));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[19];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08A29370;
      }
      goto L_08A29360;
    }
L_08A29360:
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08A29370;
L_08A29370:
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11328)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2948C;
      }
      goto L_08A29388;
    }
L_08A29388:
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A29484;
      }
      goto L_08A29394;
    }
L_08A29394:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A29438;
      }
      goto L_08A2939C;
    }
L_08A2939C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A29408;
      }
      goto L_08A293A4;
    }
L_08A293A4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A293D0;
      }
      goto L_08A293AC;
    }
L_08A293AC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A29408;
      }
      goto L_08A293B4;
    }
L_08A293B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2941C;
      }
      goto L_08A293BC;
    }
L_08A293BC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A293C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A29138;
L_08A293C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29484;
      }
      goto L_08A293D0;
    }
L_08A293D0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11324)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A293F4;
      }
      goto L_08A293E8;
    }
L_08A293E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A293F4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A29064;
L_08A293F4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A29400u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A29074;
L_08A29400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29484;
      }
      goto L_08A29408;
    }
L_08A29408:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A29414u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A29074;
L_08A29414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29484;
      }
      goto L_08A2941C;
    }
L_08A2941C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2942Cu);
    ctx.gpr[6] = (0u | 1u);
    goto L_08A291E4;
L_08A2942C:
    ctx.gpr[4] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11324)));
      if (branch_taken) {
          goto L_08A29440;
      }
      goto L_08A29438;
    }
L_08A29438:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11324)));
    goto L_08A29440;
L_08A29440:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A29478;
      }
      goto L_08A29450;
    }
L_08A29450:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 12u);
      if (branch_taken) {
          goto L_08A2946C;
      }
      goto L_08A2945C;
    }
L_08A2945C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2946C;
      }
      goto L_08A29464;
    }
L_08A29464:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A29478;
      }
      goto L_08A2946C;
    }
L_08A2946C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A29478u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A29064;
L_08A29478:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A29484u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A290D4;
L_08A29484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A29490;
      }
      goto L_08A2948C;
    }
L_08A2948C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A29490;
L_08A29490:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08A294B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_08A294D8;
L_08A294D8:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[6] << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A294D8;
      }
      goto L_08A294F8;
    }
L_08A294F8:
    ctx.gpr[17] = (0u | 0u);
    goto L_08A294FC;
L_08A294FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A29508u);
    ctx.gpr[5] = (0u | 16u);
    goto L_08A290D4;
L_08A29508:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A29514u);
    ctx.gpr[5] = (0u | 17u);
    goto L_08A290D4;
L_08A29514:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A294FC;
      }
      goto L_08A2952C;
    }
L_08A2952C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A29540u);
    ctx.gpr[5] = (0u | 250u);
    goto L_08A292D4;
L_08A29540:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29554:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
        goto L_08A29564;
    }
    goto L_08A29564;
L_08A29564:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2956C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11288)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A295B4;
      }
      goto L_08A2958C;
    }
L_08A2958C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A29598u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A29598u) goto L_08A29598;
    return;
L_08A29598:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A295B0;
      }
      goto L_08A295A4;
    }
L_08A295A4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A295B0;
L_08A295B0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-11288), ctx.gpr[16]);
    goto L_08A295B4;
L_08A295B4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11288)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A295CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11036)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29680;
      }
      goto L_08A295F0;
    }
L_08A295F0:
    ctx.gpr[17] = (2275u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2080));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A29604u);
    ctx.gpr[5] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29604u) goto L_08A29604;
    return;
L_08A29604:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A29610u);
    ctx.gpr[4] = (0u | 84u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A29610u) goto L_08A29610;
    return;
L_08A29610:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29674;
      }
      goto L_08A2961C;
    }
L_08A2961C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
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
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A29674;
L_08A29674:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-11036), ctx.gpr[16]);
    ctx.gpr[31] = (0x08A29680u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x08A29680u) goto L_08A29680;
    return;
L_08A29680:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11036)));
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
L_08A2969C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A296B0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A2971C;
L_08A296B0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A296C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A296E8;
      }
      goto L_08A296D4;
    }
L_08A296D4:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A296E8;
      }
      goto L_08A296E0;
    }
L_08A296E0:
    ctx.gpr[31] = (0x08A296E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08A296E8u) goto L_08A296E8;
    return;
L_08A296E8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A296F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A29708u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A2971C;
L_08A29708:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2971C:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    goto L_08A29734;
L_08A29734:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[7]));
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
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08A29734;
      }
      goto L_08A297D8;
    }
L_08A297D8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A297E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2983C;
      }
      goto L_08A297F0;
    }
L_08A297F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A29844;
      }
      goto L_08A29834;
    }
L_08A29834:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A298A0;
      }
      goto L_08A2983C;
    }
L_08A2983C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A298FC;
      }
      goto L_08A29844;
    }
L_08A29844:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A29898;
      }
      goto L_08A29890;
    }
L_08A29890:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08A298FC;
      }
      goto L_08A29898;
    }
L_08A29898:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(208));
      if (branch_taken) {
          goto L_08A298FC;
      }
      goto L_08A298A0;
    }
L_08A298A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A298F4;
      }
      goto L_08A298EC;
    }
L_08A298EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A298FC;
      }
      goto L_08A298F4;
    }
L_08A298F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08A298FC;
      }
      goto L_08A298FC;
    }
L_08A298FC:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29904:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15468));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2998Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2B0E4;
L_08A2998C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2999Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08A2B128;
L_08A2999C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A299ACu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08A2B170;
L_08A299AC:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08A299D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A299E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29A34;
      }
      goto L_08A29A10;
    }
L_08A29A10:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A29A24;
      }
      goto L_08A29A1C;
    }
L_08A29A1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A29A38;
      }
      goto L_08A29A24;
    }
L_08A29A24:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A29A10;
      }
      goto L_08A29A34;
    }
L_08A29A34:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A29A38;
L_08A29A38:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29A40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[6] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29A80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29AA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A29B50;
      }
      goto L_08A29AC0;
    }
L_08A29AC0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29B50;
      }
      goto L_08A29B28;
    }
L_08A29B28:
    ctx.gpr[31] = (0x08A29B30u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A29C20;
L_08A29B30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.gpr[31] = (0x08A29B44u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A29C20;
L_08A29B44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A29B50;
L_08A29B50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29B64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A29BE0;
      }
      goto L_08A29B8C;
    }
L_08A29B8C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A29BA8;
      }
      goto L_08A29B94;
    }
L_08A29B94:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(96));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29BB4;
      }
      goto L_08A29BA8;
    }
L_08A29BA8:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
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
    goto L_08A29BB4;
L_08A29BB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A29BC4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29BC4u) goto L_08A29BC4;
    return;
L_08A29BC4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A29BE0;
      }
      goto L_08A29BCC;
    }
L_08A29BCC:
    ctx.gpr[31] = (0x08A29BD4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A29C5C;
L_08A29BD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A29BE0;
L_08A29BE0:
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
L_08A29BF8:
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29C10;
      }
      goto L_08A29C04;
    }
L_08A29C04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A29C18;
      }
      goto L_08A29C10;
    }
L_08A29C10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A29C18;
L_08A29C18:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29C20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A29C3Cu);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08A29C3Cu) goto L_08A29C3C;
    return;
L_08A29C3C:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[22] + ctx.fpr[0];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29C5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A29C78u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08A29C78u) goto L_08A29C78;
    return;
L_08A29C78:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[22] + ctx.fpr[0];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29C98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A29D34;
      }
      goto L_08A29CD4;
    }
L_08A29CD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A29D24;
      }
      goto L_08A29CE0;
    }
L_08A29CE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A29D10;
      }
      goto L_08A29CF0;
    }
L_08A29CF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A29D10;
      }
      goto L_08A29D00;
    }
L_08A29D00:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[31] = (0x08A29D10u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A29D10u) goto L_08A29D10;
    return;
L_08A29D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A29F18;
      }
      goto L_08A29D24;
    }
L_08A29D24:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A29CD4;
      }
      goto L_08A29D34;
    }
L_08A29D34:
    ctx.gpr[31] = (0x08A29D3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A29A40;
L_08A29D3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29F14;
      }
      goto L_08A29D4C;
    }
L_08A29D4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08A29D78;
    }
    goto L_08A29D5C;
L_08A29D5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
        goto L_08A29D68;
    }
    goto L_08A29D68;
L_08A29D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A29E8C;
      }
      goto L_08A29D78;
    }
L_08A29D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A29DB4;
      }
      goto L_08A29DAC;
    }
L_08A29DAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
      if (branch_taken) {
          goto L_08A29DB8;
      }
      goto L_08A29DB4;
    }
L_08A29DB4:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_08A29DB8;
L_08A29DB8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A29DF0;
      }
      goto L_08A29DCC;
    }
L_08A29DCC:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[31] = (0x08A29DD8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08A29DD8u) goto L_08A29DD8;
    return;
L_08A29DD8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_08A29DF0;
      }
      goto L_08A29DE4;
    }
L_08A29DE4:
    ctx.gpr[31] = (0x08A29DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08A29DECu) goto L_08A29DEC;
    return;
L_08A29DEC:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08A29DF0;
L_08A29DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A29E04;
      }
      goto L_08A29DFC;
    }
L_08A29DFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A29E18;
      }
      goto L_08A29E04;
    }
L_08A29E04:
    ctx.gpr[22] = (ctx.gpr[18] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A29E14u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A29E14u) goto L_08A29E14;
    return;
L_08A29E14:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[22]);
    goto L_08A29E18;
L_08A29E18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
        goto L_08A29E38;
    }
    goto L_08A29E24;
L_08A29E24:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A29E24;
      }
      goto L_08A29E34;
    }
L_08A29E34:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A29E38;
L_08A29E38:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A29E64;
      }
      goto L_08A29E40;
    }
L_08A29E40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A29E64;
      }
      goto L_08A29E4C;
    }
L_08A29E4C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A29E5Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A29E5Cu) goto L_08A29E5C;
    return;
L_08A29E5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08A29E64;
      }
      goto L_08A29E64;
    }
L_08A29E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A29E78;
      }
      goto L_08A29E70;
    }
L_08A29E70:
    ctx.gpr[31] = (0x08A29E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08A29E78u) goto L_08A29E78;
    return;
L_08A29E78:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_08A29E8C;
L_08A29E8C:
    ctx.gpr[31] = (0x08A29E94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A29A80;
L_08A29E94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A29EBCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A29EBCu) goto L_08A29EBC;
    return;
L_08A29EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A29EDCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A29EDCu) goto L_08A29EDC;
    return;
L_08A29EDC:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A29EF0u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08A29BF8;
L_08A29EF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A29F0Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 133u, 0x089A49D4u>(ctx, &aot_mem) && ctx.pc == 0x08A29F0Cu) goto L_08A29F0C;
    return;
L_08A29F0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A29F18;
      }
      goto L_08A29F14;
    }
L_08A29F14:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A29F18;
L_08A29F18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29F40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A29FA8;
      }
      goto L_08A29F84;
    }
L_08A29F84:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A29F98;
      }
      goto L_08A29F90;
    }
L_08A29F90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A29FA0;
      }
      goto L_08A29F98;
    }
L_08A29F98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2A1E0;
      }
      goto L_08A29FA0;
    }
L_08A29FA0:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A29F84;
      }
      goto L_08A29FA8;
    }
L_08A29FA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A29FDC;
      }
      goto L_08A29FB4;
    }
L_08A29FB4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
        goto L_08A29FCC;
    }
    goto L_08A29FC0;
L_08A29FC0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_08A29FCC;
L_08A29FCC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A2A0D4;
      }
      goto L_08A29FDC;
    }
L_08A29FDC:
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A2A014;
      }
      goto L_08A2A004;
    }
L_08A2A004:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A2A020;
      }
      goto L_08A2A014;
    }
L_08A2A014:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[19]);
    goto L_08A2A020;
L_08A2A020:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2A05C;
      }
      goto L_08A2A028;
    }
L_08A2A028:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A2A038u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08A2A038u) goto L_08A2A038;
    return;
L_08A2A038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_08A2A058;
      }
      goto L_08A2A048;
    }
L_08A2A048:
    ctx.gpr[31] = (0x08A2A050u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08A2A050u) goto L_08A2A050;
    return;
L_08A2A050:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    goto L_08A2A058;
L_08A2A058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08A2A05C;
L_08A2A05C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A2A070;
      }
      goto L_08A2A068;
    }
L_08A2A068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08A2A08C;
      }
      goto L_08A2A070;
    }
L_08A2A070:
    ctx.gpr[21] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08A2A084u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A2A084u) goto L_08A2A084;
    return;
L_08A2A084:
    ctx.gpr[6] = (ctx.gpr[2] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_08A2A08C;
L_08A2A08C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A2A0A4;
      }
      goto L_08A2A094;
    }
L_08A2A094:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2A094;
      }
      goto L_08A2A0A4;
    }
L_08A2A0A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A2A0B8;
      }
      goto L_08A2A0B0;
    }
L_08A2A0B0:
    ctx.gpr[31] = (0x08A2A0B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08A2A0B8u) goto L_08A2A0B8;
    return;
L_08A2A0B8:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08A2A0D4;
L_08A2A0D4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2A138;
      }
      goto L_08A2A0E0;
    }
L_08A2A0E0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A2A12C;
      }
      goto L_08A2A0EC;
    }
L_08A2A0EC:
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2A120;
      }
      goto L_08A2A0F8;
    }
L_08A2A0F8:
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A2A120;
      }
      goto L_08A2A104;
    }
L_08A2A104:
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[31] = (0x08A2A118u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A2A118u) goto L_08A2A118;
    return;
L_08A2A118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08A2A120;
L_08A2A120:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A2A138;
      }
      goto L_08A2A12C;
    }
L_08A2A12C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2A0E0;
      }
      goto L_08A2A138;
    }
L_08A2A138:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A2A1DC;
      }
      goto L_08A2A144;
    }
L_08A2A144:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    goto L_08A2A14C;
L_08A2A14C:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A2A15Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A29A80;
L_08A2A15C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2A180u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2A180u) goto L_08A2A180;
    return;
L_08A2A180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2A1A0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2A1A0u) goto L_08A2A1A0;
    return;
L_08A2A1A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A2A1B4u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    goto L_08A29BF8;
L_08A2A1B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A2A1D0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 133u, 0x089A49D4u>(ctx, &aot_mem) && ctx.pc == 0x08A2A1D0u) goto L_08A2A1D0;
    return;
L_08A2A1D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2A14C;
      }
      goto L_08A2A1DC;
    }
L_08A2A1DC:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08A2A1E0;
L_08A2A1E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A20C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
        goto L_08A2A264;
    }
    goto L_08A2A238;
L_08A2A238:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A2A25C;
      }
      goto L_08A2A244;
    }
L_08A2A244:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2A238;
      }
      goto L_08A2A254;
    }
L_08A2A254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A2A264;
      }
      goto L_08A2A25C;
    }
L_08A2A25C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2A2BC;
      }
      goto L_08A2A264;
    }
L_08A2A264:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A2B8;
      }
      goto L_08A2A28C;
    }
L_08A2A28C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A2A2B0;
      }
      goto L_08A2A298;
    }
L_08A2A298:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2A28C;
      }
      goto L_08A2A2A8;
    }
L_08A2A2A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A2B8;
      }
      goto L_08A2A2B0;
    }
L_08A2A2B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2A2BC;
      }
      goto L_08A2A2B8;
    }
L_08A2A2B8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2A2BC;
L_08A2A2BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A2C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2A2D8u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A2A2D8u) goto L_08A2A2D8;
    return;
L_08A2A2D8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11028)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11032)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A2A2F0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A2A2F0u) goto L_08A2A2F0;
    return;
L_08A2A2F0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11020)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11024)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1916)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1916), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A34C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A354:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A35C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(1916)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A378;
      }
      goto L_08A2A36C;
    }
L_08A2A36C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(1916), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A2A37C;
      }
      goto L_08A2A378;
    }
L_08A2A378:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(1916), static_cast<std::uint16_t>(0u));
    goto L_08A2A37C;
L_08A2A37C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A2A3D4;
      }
      goto L_08A2A3AC;
    }
L_08A2A3AC:
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A2A3B8u);
    // nop
    goto L_08A2A44C;
L_08A2A3B8:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A2A3D4;
L_08A2A3D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A3E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (16585u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2A414u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08A2A414u) goto L_08A2A414;
    return;
L_08A2A414:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A43C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A444:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A44C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    ctx.gpr[19] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(22840));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22840)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 4u));
    ctx.gpr[6] = (ctx.gpr[6] >> 28u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 4u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2A670;
      }
      goto L_08A2A4BC;
    }
L_08A2A4BC:
    ctx.gpr[23] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11120)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_08A2A670;
      }
      goto L_08A2A4D4;
    }
L_08A2A4D4:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    goto L_08A2A500;
L_08A2A500:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A2A50Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08A2A50Cu) goto L_08A2A50C;
    return;
L_08A2A50C:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2A558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08A2A558u) goto L_08A2A558;
    return;
L_08A2A558:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22840)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.gpr[5] = (ctx.gpr[5] >> 28u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A600;
      }
      goto L_08A2A5AC;
    }
L_08A2A5AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22840)));
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2A5F0;
      }
      goto L_08A2A5E8;
    }
L_08A2A5E8:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08A2A5F0;
L_08A2A5F0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A5AC;
      }
      goto L_08A2A600;
    }
L_08A2A600:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A500;
      }
      goto L_08A2A608;
    }
L_08A2A608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2A63C;
      }
      goto L_08A2A618;
    }
L_08A2A618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_08A2A630;
    }
    goto L_08A2A624;
L_08A2A624:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_08A2A630;
L_08A2A630:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2A65C;
      }
      goto L_08A2A63C;
    }
L_08A2A63C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08A2A65Cu);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 451u, 0x08B060C0u>(ctx, &aot_mem) && ctx.pc == 0x08A2A65Cu) goto L_08A2A65C;
    return;
L_08A2A65C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11120)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A500;
      }
      goto L_08A2A670;
    }
L_08A2A670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22840)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A6C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2A78C;
      }
      goto L_08A2A6E8;
    }
L_08A2A6E8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15036));
    ctx.gpr[31] = (0x08A2A6F8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    goto L_08A295CC;
L_08A2A6F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A2A704u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A2B578;
L_08A2A704:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A2A77C;
      }
      goto L_08A2A70C;
    }
L_08A2A70C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15468));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2A74C;
      }
      goto L_08A2A724;
    }
L_08A2A724:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A2A74C;
      }
      goto L_08A2A734;
    }
L_08A2A734:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A74C;
      }
      goto L_08A2A73C;
    }
L_08A2A73C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A74C;
      }
      goto L_08A2A744;
    }
L_08A2A744:
    ctx.gpr[31] = (0x08A2A74Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08A2A74Cu) goto L_08A2A74C;
    return;
L_08A2A74C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A2A77C;
      }
      goto L_08A2A754;
    }
L_08A2A754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A2A778;
      }
      goto L_08A2A760;
    }
L_08A2A760:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A2A77C;
    }
    goto L_08A2A768;
L_08A2A768:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A2A77C;
    }
    goto L_08A2A770;
L_08A2A770:
    ctx.gpr[31] = (0x08A2A778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08A2A778u) goto L_08A2A778;
    return;
L_08A2A778:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08A2A77C;
L_08A2A77C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A78C;
      }
      goto L_08A2A784;
    }
L_08A2A784:
    ctx.gpr[31] = (0x08A2A78Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08A2A78Cu) goto L_08A2A78C;
    return;
L_08A2A78C:
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
L_08A2A7A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A7AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[9] = (0u | 3u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A2A83C;
      }
      goto L_08A2A7E0;
    }
L_08A2A7E0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A2A7ECu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A2B740;
L_08A2A7EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A834;
      }
      goto L_08A2A7F4;
    }
L_08A2A7F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A8EC;
      }
      goto L_08A2A804;
    }
L_08A2A804:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A2A860;
      }
      goto L_08A2A80C;
    }
L_08A2A80C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2A844;
      }
      goto L_08A2A814;
    }
L_08A2A814:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2A87C;
      }
      goto L_08A2A81C;
    }
L_08A2A81C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2A898;
      }
      goto L_08A2A824;
    }
L_08A2A824:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2A8B4;
      }
      goto L_08A2A82C;
    }
L_08A2A82C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2A8D0;
      }
      goto L_08A2A834;
    }
L_08A2A834:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2A8F0;
      }
      goto L_08A2A83C;
    }
L_08A2A83C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2A8F0;
      }
      goto L_08A2A844;
    }
L_08A2A844:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2A858u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 194u, 0x08A2CB68u>(ctx, &aot_mem) && ctx.pc == 0x08A2A858u) goto L_08A2A858;
    return;
L_08A2A858:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A8F0;
      }
      goto L_08A2A860;
    }
L_08A2A860:
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2A874u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 194u, 0x08A2CB68u>(ctx, &aot_mem) && ctx.pc == 0x08A2A874u) goto L_08A2A874;
    return;
L_08A2A874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A8F0;
      }
      goto L_08A2A87C;
    }
L_08A2A87C:
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2A890u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 194u, 0x08A2CB68u>(ctx, &aot_mem) && ctx.pc == 0x08A2A890u) goto L_08A2A890;
    return;
L_08A2A890:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A8F0;
      }
      goto L_08A2A898;
    }
L_08A2A898:
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2A8ACu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 194u, 0x08A2CB68u>(ctx, &aot_mem) && ctx.pc == 0x08A2A8ACu) goto L_08A2A8AC;
    return;
L_08A2A8AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A8F0;
      }
      goto L_08A2A8B4;
    }
L_08A2A8B4:
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2A8C8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 194u, 0x08A2CB68u>(ctx, &aot_mem) && ctx.pc == 0x08A2A8C8u) goto L_08A2A8C8;
    return;
L_08A2A8C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A8F0;
      }
      goto L_08A2A8D0;
    }
L_08A2A8D0:
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2A8E4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 194u, 0x08A2CB68u>(ctx, &aot_mem) && ctx.pc == 0x08A2A8E4u) goto L_08A2A8E4;
    return;
L_08A2A8E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A8F0;
      }
      goto L_08A2A8EC;
    }
L_08A2A8EC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2A8F0;
L_08A2A8F0:
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
L_08A2A90C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A2A9AC;
      }
      goto L_08A2A930;
    }
L_08A2A930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2A9A4;
      }
      goto L_08A2A944;
    }
L_08A2A944:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2A950u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A2B740;
L_08A2A950:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A99C;
      }
      goto L_08A2A958;
    }
L_08A2A958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AA44;
      }
      goto L_08A2A96C;
    }
L_08A2A96C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A2A9CC;
      }
      goto L_08A2A974;
    }
L_08A2A974:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2A9B4;
      }
      goto L_08A2A97C;
    }
L_08A2A97C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2A9E4;
      }
      goto L_08A2A984;
    }
L_08A2A984:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2A9FC;
      }
      goto L_08A2A98C;
    }
L_08A2A98C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2AA14;
      }
      goto L_08A2A994;
    }
L_08A2A994:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2AA2C;
      }
      goto L_08A2A99C;
    }
L_08A2A99C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2AA48;
      }
      goto L_08A2A9A4;
    }
L_08A2A9A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2AA48;
      }
      goto L_08A2A9AC;
    }
L_08A2A9AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2AA48;
      }
      goto L_08A2A9B4;
    }
L_08A2A9B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2A9C4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08A2B934;
L_08A2A9C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AA48;
      }
      goto L_08A2A9CC;
    }
L_08A2A9CC:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2A9DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2B934;
L_08A2A9DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AA48;
      }
      goto L_08A2A9E4;
    }
L_08A2A9E4:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2A9F4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2B934;
L_08A2A9F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AA48;
      }
      goto L_08A2A9FC;
    }
L_08A2A9FC:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AA0Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2B934;
L_08A2AA0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AA48;
      }
      goto L_08A2AA14;
    }
L_08A2AA14:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AA24u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2B934;
L_08A2AA24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AA48;
      }
      goto L_08A2AA2C;
    }
L_08A2AA2C:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AA3Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2B934;
L_08A2AA3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AA48;
      }
      goto L_08A2AA44;
    }
L_08A2AA44:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2AA48;
L_08A2AA48:
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
L_08A2AA60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A2AB00;
      }
      goto L_08A2AA84;
    }
L_08A2AA84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2AAF8;
      }
      goto L_08A2AA98;
    }
L_08A2AA98:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2AAA4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A2B740;
L_08A2AAA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AAF0;
      }
      goto L_08A2AAAC;
    }
L_08A2AAAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AB98;
      }
      goto L_08A2AAC0;
    }
L_08A2AAC0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A2AB20;
      }
      goto L_08A2AAC8;
    }
L_08A2AAC8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2AB08;
      }
      goto L_08A2AAD0;
    }
L_08A2AAD0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2AB38;
      }
      goto L_08A2AAD8;
    }
L_08A2AAD8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2AB50;
      }
      goto L_08A2AAE0;
    }
L_08A2AAE0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2AB68;
      }
      goto L_08A2AAE8;
    }
L_08A2AAE8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2AB80;
      }
      goto L_08A2AAF0;
    }
L_08A2AAF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2AB9C;
      }
      goto L_08A2AAF8;
    }
L_08A2AAF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2AB9C;
      }
      goto L_08A2AB00;
    }
L_08A2AB00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2AB9C;
      }
      goto L_08A2AB08;
    }
L_08A2AB08:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2AB18u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08A2BA88;
L_08A2AB18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AB9C;
      }
      goto L_08A2AB20;
    }
L_08A2AB20:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AB30u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BA88;
L_08A2AB30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AB9C;
      }
      goto L_08A2AB38;
    }
L_08A2AB38:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AB48u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BA88;
L_08A2AB48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AB9C;
      }
      goto L_08A2AB50;
    }
L_08A2AB50:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AB60u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BA88;
L_08A2AB60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AB9C;
      }
      goto L_08A2AB68;
    }
L_08A2AB68:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AB78u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BA88;
L_08A2AB78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AB9C;
      }
      goto L_08A2AB80;
    }
L_08A2AB80:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AB90u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BA88;
L_08A2AB90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AB9C;
      }
      goto L_08A2AB98;
    }
L_08A2AB98:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2AB9C;
L_08A2AB9C:
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
L_08A2ABB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A2AC54;
      }
      goto L_08A2ABD8;
    }
L_08A2ABD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2AC4C;
      }
      goto L_08A2ABEC;
    }
L_08A2ABEC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2ABF8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A2B740;
L_08A2ABF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AC44;
      }
      goto L_08A2AC00;
    }
L_08A2AC00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ACEC;
      }
      goto L_08A2AC14;
    }
L_08A2AC14:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A2AC74;
      }
      goto L_08A2AC1C;
    }
L_08A2AC1C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2AC5C;
      }
      goto L_08A2AC24;
    }
L_08A2AC24:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2AC8C;
      }
      goto L_08A2AC2C;
    }
L_08A2AC2C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2ACA4;
      }
      goto L_08A2AC34;
    }
L_08A2AC34:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2ACBC;
      }
      goto L_08A2AC3C;
    }
L_08A2AC3C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2ACD4;
      }
      goto L_08A2AC44;
    }
L_08A2AC44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2ACF0;
      }
      goto L_08A2AC4C;
    }
L_08A2AC4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2ACF0;
      }
      goto L_08A2AC54;
    }
L_08A2AC54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2ACF0;
      }
      goto L_08A2AC5C;
    }
L_08A2AC5C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2AC6Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08A2BB28;
L_08A2AC6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ACF0;
      }
      goto L_08A2AC74;
    }
L_08A2AC74:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AC84u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BB28;
L_08A2AC84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ACF0;
      }
      goto L_08A2AC8C;
    }
L_08A2AC8C:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AC9Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BB28;
L_08A2AC9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ACF0;
      }
      goto L_08A2ACA4;
    }
L_08A2ACA4:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2ACB4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BB28;
L_08A2ACB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ACF0;
      }
      goto L_08A2ACBC;
    }
L_08A2ACBC:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2ACCCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BB28;
L_08A2ACCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ACF0;
      }
      goto L_08A2ACD4;
    }
L_08A2ACD4:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2ACE4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BB28;
L_08A2ACE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ACF0;
      }
      goto L_08A2ACEC;
    }
L_08A2ACEC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2ACF0;
L_08A2ACF0:
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
L_08A2AD08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A2ADA8;
      }
      goto L_08A2AD2C;
    }
L_08A2AD2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2ADA0;
      }
      goto L_08A2AD40;
    }
L_08A2AD40:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2AD4Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A2B740;
L_08A2AD4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AD98;
      }
      goto L_08A2AD54;
    }
L_08A2AD54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AE40;
      }
      goto L_08A2AD68;
    }
L_08A2AD68:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A2ADC8;
      }
      goto L_08A2AD70;
    }
L_08A2AD70:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2ADB0;
      }
      goto L_08A2AD78;
    }
L_08A2AD78:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2ADE0;
      }
      goto L_08A2AD80;
    }
L_08A2AD80:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2ADF8;
      }
      goto L_08A2AD88;
    }
L_08A2AD88:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2AE10;
      }
      goto L_08A2AD90;
    }
L_08A2AD90:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2AE28;
      }
      goto L_08A2AD98;
    }
L_08A2AD98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2AE44;
      }
      goto L_08A2ADA0;
    }
L_08A2ADA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2AE44;
      }
      goto L_08A2ADA8;
    }
L_08A2ADA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2AE44;
      }
      goto L_08A2ADB0;
    }
L_08A2ADB0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2ADC0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08A2BC8C;
L_08A2ADC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AE44;
      }
      goto L_08A2ADC8;
    }
L_08A2ADC8:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2ADD8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BC8C;
L_08A2ADD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AE44;
      }
      goto L_08A2ADE0;
    }
L_08A2ADE0:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2ADF0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BC8C;
L_08A2ADF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AE44;
      }
      goto L_08A2ADF8;
    }
L_08A2ADF8:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AE08u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BC8C;
L_08A2AE08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AE44;
      }
      goto L_08A2AE10;
    }
L_08A2AE10:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AE20u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BC8C;
L_08A2AE20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AE44;
      }
      goto L_08A2AE28;
    }
L_08A2AE28:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AE38u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BC8C;
L_08A2AE38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AE44;
      }
      goto L_08A2AE40;
    }
L_08A2AE40:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2AE44;
L_08A2AE44:
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
L_08A2AE5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A2AEFC;
      }
      goto L_08A2AE80;
    }
L_08A2AE80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2AEF4;
      }
      goto L_08A2AE94;
    }
L_08A2AE94:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2AEA0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A2B740;
L_08A2AEA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AEEC;
      }
      goto L_08A2AEA8;
    }
L_08A2AEA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AF94;
      }
      goto L_08A2AEBC;
    }
L_08A2AEBC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A2AF1C;
      }
      goto L_08A2AEC4;
    }
L_08A2AEC4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2AF04;
      }
      goto L_08A2AECC;
    }
L_08A2AECC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2AF34;
      }
      goto L_08A2AED4;
    }
L_08A2AED4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2AF4C;
      }
      goto L_08A2AEDC;
    }
L_08A2AEDC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2AF64;
      }
      goto L_08A2AEE4;
    }
L_08A2AEE4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2AF7C;
      }
      goto L_08A2AEEC;
    }
L_08A2AEEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2AF98;
      }
      goto L_08A2AEF4;
    }
L_08A2AEF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2AF98;
      }
      goto L_08A2AEFC;
    }
L_08A2AEFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2AF98;
      }
      goto L_08A2AF04;
    }
L_08A2AF04:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2AF14u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08A2BD34;
L_08A2AF14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AF98;
      }
      goto L_08A2AF1C;
    }
L_08A2AF1C:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AF2Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BD34;
L_08A2AF2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AF98;
      }
      goto L_08A2AF34;
    }
L_08A2AF34:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AF44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BD34;
L_08A2AF44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AF98;
      }
      goto L_08A2AF4C;
    }
L_08A2AF4C:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AF5Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BD34;
L_08A2AF5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AF98;
      }
      goto L_08A2AF64;
    }
L_08A2AF64:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AF74u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BD34;
L_08A2AF74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AF98;
      }
      goto L_08A2AF7C;
    }
L_08A2AF7C:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AF8Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BD34;
L_08A2AF8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AF98;
      }
      goto L_08A2AF94;
    }
L_08A2AF94:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2AF98;
L_08A2AF98:
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
L_08A2AFB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B01C;
      }
      goto L_08A2AFC4;
    }
L_08A2AFC4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2B014;
      }
      goto L_08A2AFD4;
    }
L_08A2AFD4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2B0B4;
      }
      goto L_08A2AFE4;
    }
L_08A2AFE4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A2B024;
      }
      goto L_08A2AFEC;
    }
L_08A2AFEC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2B03C;
      }
      goto L_08A2AFF4;
    }
L_08A2AFF4:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2B054;
      }
      goto L_08A2AFFC;
    }
L_08A2AFFC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2B06C;
      }
      goto L_08A2B004;
    }
L_08A2B004:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2B084;
      }
      goto L_08A2B00C;
    }
L_08A2B00C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2B09C;
      }
      goto L_08A2B014;
    }
L_08A2B014:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2B0D4;
      }
      goto L_08A2B01C;
    }
L_08A2B01C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2B0D4;
      }
      goto L_08A2B024;
    }
L_08A2B024:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A2B034u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A2B82C;
L_08A2B034:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A2B0B4;
      }
      goto L_08A2B03C;
    }
L_08A2B03C:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A2B04Cu);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08A2B82C;
L_08A2B04C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A2B0B4;
      }
      goto L_08A2B054;
    }
L_08A2B054:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A2B064u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A2B82C;
L_08A2B064:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A2B0B4;
      }
      goto L_08A2B06C;
    }
L_08A2B06C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A2B07Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A2B82C;
L_08A2B07C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A2B0B4;
      }
      goto L_08A2B084;
    }
L_08A2B084:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A2B094u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A2B82C;
L_08A2B094:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A2B0B4;
      }
      goto L_08A2B09C;
    }
L_08A2B09C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A2B0ACu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A2B82C;
L_08A2B0AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A2B0B4;
      }
      goto L_08A2B0B4;
    }
L_08A2B0B4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B0C4;
      }
      goto L_08A2B0BC;
    }
L_08A2B0BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2B0D4;
      }
      goto L_08A2B0C4;
    }
L_08A2B0C4:
    ctx.gpr[31] = (0x08A2B0CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A29A40;
L_08A2B0CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_08A2B0D4;
L_08A2B0D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B0E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A2B11Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08A2B11Cu) goto L_08A2B11C;
    return;
L_08A2B11C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B128:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B170:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B1B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    ctx.gpr[8] = (0u | 4u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A2B240;
      }
      goto L_08A2B1EC;
    }
L_08A2B1EC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2B200u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08A2B170;
L_08A2B200:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2B214u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08A2B0E4;
L_08A2B214:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B2A4;
      }
      goto L_08A2B238;
    }
L_08A2B238:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08A2B288;
      }
      goto L_08A2B240;
    }
L_08A2B240:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2B254u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08A2B0E4;
L_08A2B254:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A2B280u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 328u, 0x088C5AA4u>(ctx, &aot_mem) && ctx.pc == 0x08A2B280u) goto L_08A2B280;
    return;
L_08A2B280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B390;
      }
      goto L_08A2B288;
    }
L_08A2B288:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B2A4;
      }
      goto L_08A2B294;
    }
L_08A2B294:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B2C8;
      }
      goto L_08A2B2A4;
    }
L_08A2B2A4:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    goto L_08A2B2C8;
L_08A2B2C8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2B38C;
      }
      goto L_08A2B2FC;
    }
L_08A2B2FC:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11048)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2B38C;
      }
      goto L_08A2B364;
    }
L_08A2B364:
    ctx.gpr[7] = (16384u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2B37Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 106u, 0x088C08B4u>(ctx, &aot_mem) && ctx.pc == 0x08A2B37Cu) goto L_08A2B37C;
    return;
L_08A2B37C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B38C;
      }
      goto L_08A2B384;
    }
L_08A2B384:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2B390;
      }
      goto L_08A2B38C;
    }
L_08A2B38C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2B390;
L_08A2B390:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B3B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[8] = (0u | 272u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2B438;
      }
      goto L_08A2B400;
    }
L_08A2B400:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_08A2B404;
L_08A2B404:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A2B428;
      }
      goto L_08A2B414;
    }
L_08A2B414:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08A2B420u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A297E0;
L_08A2B420:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B4E0;
      }
      goto L_08A2B428;
    }
L_08A2B428:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08A2B404;
      }
      goto L_08A2B438;
    }
L_08A2B438:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2275u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2080));
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2B454u);
    ctx.gpr[5] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B454u) goto L_08A2B454;
    return;
L_08A2B454:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2B464u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A2BDCC;
L_08A2B464:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2B470u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A297E0;
L_08A2B470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A2B4A8;
      }
      goto L_08A2B480;
    }
L_08A2B480:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08A2B4A0;
      }
      goto L_08A2B48C;
    }
L_08A2B48C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A2B498u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A2969C;
L_08A2B498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(272));
    goto L_08A2B4A0;
L_08A2B4A0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2B4C8;
      }
      goto L_08A2B4A8;
    }
L_08A2B4A8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08A2B4C8u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 482u, 0x08B062A8u>(ctx, &aot_mem) && ctx.pc == 0x08A2B4C8u) goto L_08A2B4C8;
    return;
L_08A2B4C8:
    ctx.gpr[31] = (0x08A2B4D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x08A2B4D0u) goto L_08A2B4D0;
    return;
L_08A2B4D0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2B4DCu);
    ctx.gpr[5] = (0u | 2u);
    goto L_08A296C4;
L_08A2B4DC:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08A2B4E0;
L_08A2B4E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B500:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (0u | 272u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2B56C;
      }
      goto L_08A2B528;
    }
L_08A2B528:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    goto L_08A2B52C;
L_08A2B52C:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08A2B554;
      }
      goto L_08A2B53C;
    }
L_08A2B53C:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08A2B554;
      }
      goto L_08A2B544;
    }
L_08A2B544:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(208));
      if (branch_taken) {
          goto L_08A2B554;
      }
      goto L_08A2B54C;
    }
L_08A2B54C:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B55C;
      }
      goto L_08A2B554;
    }
L_08A2B554:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A2B570;
      }
      goto L_08A2B55C;
    }
L_08A2B55C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08A2B52C;
      }
      goto L_08A2B56C;
    }
L_08A2B56C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2B570;
L_08A2B570:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B578:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2B5A8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A2B500;
L_08A2B5A8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B5CC;
      }
      goto L_08A2B5B4;
    }
L_08A2B5B4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08A2B5D4;
      }
      goto L_08A2B5C4;
    }
L_08A2B5C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B714;
      }
      goto L_08A2B5CC;
    }
L_08A2B5CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B714;
      }
      goto L_08A2B5D4;
    }
L_08A2B5D4:
    ctx.gpr[22] = (0u | 272u);
    goto L_08A2B5D8;
L_08A2B5D8:
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08A2B708;
      }
      goto L_08A2B5E8;
    }
L_08A2B5E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A2B604u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A2B82C;
L_08A2B604:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08A2B618;
      }
      goto L_08A2B614;
    }
L_08A2B614:
    ctx.gpr[7] = (0u | 1u);
    goto L_08A2B618;
L_08A2B618:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A2B630u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A2B82C;
L_08A2B630:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08A2B644;
      }
      goto L_08A2B640;
    }
L_08A2B640:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A2B644;
L_08A2B644:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x08A2B65Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A2B82C;
L_08A2B65C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08A2B670;
      }
      goto L_08A2B66C;
    }
L_08A2B66C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A2B670;
L_08A2B670:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(208));
    ctx.gpr[31] = (0x08A2B684u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A2B82C;
L_08A2B684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A2B698;
      }
      goto L_08A2B694;
    }
L_08A2B694:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A2B698;
L_08A2B698:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B6FC;
      }
      goto L_08A2B6A0;
    }
L_08A2B6A0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2B6E4;
      }
      goto L_08A2B6A8;
    }
L_08A2B6A8:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[20]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[23] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A2B6E4;
      }
      goto L_08A2B6C4;
    }
L_08A2B6C4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A2B6D0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A296F4;
L_08A2B6D0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(272));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) > 0;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08A2B6C4;
      }
      goto L_08A2B6E0;
    }
L_08A2B6E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    goto L_08A2B6E4;
L_08A2B6E4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2B6F4u);
    ctx.gpr[5] = (0u | 2u);
    goto L_08A296C4;
L_08A2B6F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08A2B700;
      }
      goto L_08A2B6FC;
    }
L_08A2B6FC:
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    goto L_08A2B700;
L_08A2B700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B70C;
      }
      goto L_08A2B708;
    }
L_08A2B708:
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    goto L_08A2B70C;
L_08A2B70C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2B5D8;
      }
      goto L_08A2B714;
    }
L_08A2B714:
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
L_08A2B740:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2B760u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A2B88C;
L_08A2B760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A2B814;
      }
      goto L_08A2B76C;
    }
L_08A2B76C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2B77Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    goto L_08A2B88C;
L_08A2B77C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A2B80C;
      }
      goto L_08A2B788;
    }
L_08A2B788:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2B798u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    goto L_08A2B88C;
L_08A2B798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A2B804;
      }
      goto L_08A2B7A4;
    }
L_08A2B7A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2B7B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    goto L_08A2B88C;
L_08A2B7B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A2B7FC;
      }
      goto L_08A2B7C0;
    }
L_08A2B7C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2B7D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    goto L_08A2B88C;
L_08A2B7D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A2B7F4;
      }
      goto L_08A2B7DC;
    }
L_08A2B7DC:
    ctx.gpr[31] = (0x08A2B7E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(60));
    goto L_08A2B88C;
L_08A2B7E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B81C;
      }
      goto L_08A2B7EC;
    }
L_08A2B7EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2B820;
      }
      goto L_08A2B7F4;
    }
L_08A2B7F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2B820;
      }
      goto L_08A2B7FC;
    }
L_08A2B7FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2B820;
      }
      goto L_08A2B804;
    }
L_08A2B804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2B820;
      }
      goto L_08A2B80C;
    }
L_08A2B80C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2B820;
      }
      goto L_08A2B814;
    }
L_08A2B814:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2B820;
      }
      goto L_08A2B81C;
    }
L_08A2B81C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2B820;
L_08A2B820:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B82C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B880;
      }
      goto L_08A2B858;
    }
L_08A2B858:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2B870;
      }
      goto L_08A2B868;
    }
L_08A2B868:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B884;
      }
      goto L_08A2B870;
    }
L_08A2B870:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2B858;
      }
      goto L_08A2B880;
    }
L_08A2B880:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2B884;
L_08A2B884:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B88C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2B908;
      }
      goto L_08A2B8D8;
    }
L_08A2B8D8:
    ctx.gpr[18] = (0u | 0u);
    goto L_08A2B8DC;
L_08A2B8DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08A2B8F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A2A20C;
L_08A2B8F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B910;
      }
      goto L_08A2B8F8;
    }
L_08A2B8F8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2B8DC;
      }
      goto L_08A2B908;
    }
L_08A2B908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2B914;
      }
      goto L_08A2B910;
    }
L_08A2B910:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A2B914;
L_08A2B914:
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
L_08A2B934:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A2B980;
      }
      goto L_08A2B94C;
    }
L_08A2B94C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2B988;
      }
      goto L_08A2B978;
    }
L_08A2B978:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B9B0;
      }
      goto L_08A2B980;
    }
L_08A2B980:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BA74;
      }
      goto L_08A2B988;
    }
L_08A2B988:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A2B98C;
L_08A2B98C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B9A0;
      }
      goto L_08A2B998;
    }
L_08A2B998:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A2B9B0;
      }
      goto L_08A2B9A0;
    }
L_08A2B9A0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2B98C;
      }
      goto L_08A2B9B0;
    }
L_08A2B9B0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B9DC;
      }
      goto L_08A2B9B8;
    }
L_08A2B9B8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A2B9C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 2u, 0x08A2C074u>(ctx, &aot_mem) && ctx.pc == 0x08A2B9C4u) goto L_08A2B9C4;
    return;
L_08A2B9C4:
    ctx.gpr[31] = (0x08A2B9CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A29A40;
L_08A2B9CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B9E4;
      }
      goto L_08A2B9D4;
    }
L_08A2B9D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BA70;
      }
      goto L_08A2B9DC;
    }
L_08A2B9DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BA74;
      }
      goto L_08A2B9E4;
    }
L_08A2B9E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BA4C;
      }
      goto L_08A2B9F4;
    }
L_08A2B9F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A2BA40;
      }
      goto L_08A2BA00;
    }
L_08A2BA00:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BA34;
      }
      goto L_08A2BA0C;
    }
L_08A2BA0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A2BA20;
      }
      goto L_08A2BA18;
    }
L_08A2BA18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A2BA34;
      }
      goto L_08A2BA20;
    }
L_08A2BA20:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[31] = (0x08A2BA30u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A2BA30u) goto L_08A2BA30;
    return;
L_08A2BA30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A2BA34;
L_08A2BA34:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2BA4C;
      }
      goto L_08A2BA40;
    }
L_08A2BA40:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B9F4;
      }
      goto L_08A2BA4C;
    }
L_08A2BA4C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BA70;
      }
      goto L_08A2BA54;
    }
L_08A2BA54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2BA70u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2BA70u) goto L_08A2BA70;
    return;
L_08A2BA70:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A2BA74;
L_08A2BA74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2BA88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BACC;
      }
      goto L_08A2BA98;
    }
L_08A2BA98:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BAD4;
      }
      goto L_08A2BAC4;
    }
L_08A2BAC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BAFC;
      }
      goto L_08A2BACC;
    }
L_08A2BACC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BB1C;
      }
      goto L_08A2BAD4;
    }
L_08A2BAD4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A2BAD8;
L_08A2BAD8:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BAEC;
      }
      goto L_08A2BAE4;
    }
L_08A2BAE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A2BAFC;
      }
      goto L_08A2BAEC;
    }
L_08A2BAEC:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2BAD8;
      }
      goto L_08A2BAFC;
    }
L_08A2BAFC:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BB0C;
      }
      goto L_08A2BB04;
    }
L_08A2BB04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BB1C;
      }
      goto L_08A2BB0C;
    }
L_08A2BB0C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A2BB18u);
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    goto L_08A29F40;
L_08A2BB18:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A2BB1C;
L_08A2BB1C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2BB28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A2BB74;
      }
      goto L_08A2BB40;
    }
L_08A2BB40:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BB7C;
      }
      goto L_08A2BB6C;
    }
L_08A2BB6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BBA4;
      }
      goto L_08A2BB74;
    }
L_08A2BB74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BC78;
      }
      goto L_08A2BB7C;
    }
L_08A2BB7C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A2BB80;
L_08A2BB80:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BB94;
      }
      goto L_08A2BB8C;
    }
L_08A2BB8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A2BBA4;
      }
      goto L_08A2BB94;
    }
L_08A2BB94:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2BB80;
      }
      goto L_08A2BBA4;
    }
L_08A2BBA4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BBE0;
      }
      goto L_08A2BBAC;
    }
L_08A2BBAC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2BBC8u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2BBC8u) goto L_08A2BBC8;
    return;
L_08A2BBC8:
    ctx.gpr[31] = (0x08A2BBD0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A29A40;
L_08A2BBD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BBE8;
      }
      goto L_08A2BBD8;
    }
L_08A2BBD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BC74;
      }
      goto L_08A2BBE0;
    }
L_08A2BBE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BC78;
      }
      goto L_08A2BBE8;
    }
L_08A2BBE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BC50;
      }
      goto L_08A2BBF8;
    }
L_08A2BBF8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A2BC44;
      }
      goto L_08A2BC04;
    }
L_08A2BC04:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BC38;
      }
      goto L_08A2BC10;
    }
L_08A2BC10:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A2BC24;
      }
      goto L_08A2BC1C;
    }
L_08A2BC1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A2BC38;
      }
      goto L_08A2BC24;
    }
L_08A2BC24:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[31] = (0x08A2BC34u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A2BC34u) goto L_08A2BC34;
    return;
L_08A2BC34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A2BC38;
L_08A2BC38:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2BC50;
      }
      goto L_08A2BC44;
    }
L_08A2BC44:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BBF8;
      }
      goto L_08A2BC50;
    }
L_08A2BC50:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BC74;
      }
      goto L_08A2BC58;
    }
L_08A2BC58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2BC74u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2BC74u) goto L_08A2BC74;
    return;
L_08A2BC74:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A2BC78;
L_08A2BC78:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2BC8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BCD0;
      }
      goto L_08A2BC9C;
    }
L_08A2BC9C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[9]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BCD8;
      }
      goto L_08A2BCC8;
    }
L_08A2BCC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BCFC;
      }
      goto L_08A2BCD0;
    }
L_08A2BCD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BD28;
      }
      goto L_08A2BCD8;
    }
L_08A2BCD8:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BCEC;
      }
      goto L_08A2BCE4;
    }
L_08A2BCE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A2BCFC;
      }
      goto L_08A2BCEC;
    }
L_08A2BCEC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2BCD8;
      }
      goto L_08A2BCFC;
    }
L_08A2BCFC:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BD0C;
      }
      goto L_08A2BD04;
    }
L_08A2BD04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BD28;
      }
      goto L_08A2BD0C;
    }
L_08A2BD0C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2BD28u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2BD28u) goto L_08A2BD28;
    return;
L_08A2BD28:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2BD34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BD78;
      }
      goto L_08A2BD44;
    }
L_08A2BD44:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[9]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BD80;
      }
      goto L_08A2BD70;
    }
L_08A2BD70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BDA4;
      }
      goto L_08A2BD78;
    }
L_08A2BD78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BDC0;
      }
      goto L_08A2BD80;
    }
L_08A2BD80:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD94;
      }
      goto L_08A2BD8C;
    }
L_08A2BD8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A2BDA4;
      }
      goto L_08A2BD94;
    }
L_08A2BD94:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2BD80;
      }
      goto L_08A2BDA4;
    }
L_08A2BDA4:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BDB4;
      }
      goto L_08A2BDAC;
    }
L_08A2BDAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BDC0;
      }
      goto L_08A2BDB4;
    }
L_08A2BDB4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A2BDC0u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    goto L_08A299E4;
L_08A2BDC0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2BDCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[7] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    ctx.gpr[8] = (49024u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[7] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(208));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (48896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[8] = (49152u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    ctx.pc = 0x08A2C000u; return;
}

void recomp_unit_0137(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0137_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_137(Runtime &runtime) {
    runtime.register_generated_unit(137u, 0x08A28000u, 16384u, &recomp_unit_0137, &recomp_unit_0137_entry);
    runtime.register_function(0x08A28000u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28060u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28074u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28088u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2809Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A280B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A280B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A280C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A280D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A280E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A280F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A280FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28118u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28120u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28128u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28138u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2814Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28160u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28164u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28184u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2818Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28194u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A281A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A281B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A281CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A281D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28270u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A282D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A282E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28310u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28320u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A283ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A283BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28448u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28458u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A284E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A284F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28680u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28688u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A286D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28764u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28798u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A287ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A287D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A287E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A287F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28808u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28814u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28824u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28830u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28840u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28850u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28864u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28874u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2887Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28880u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28888u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28898u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28910u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28920u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28934u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28944u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2894Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28950u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28958u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28964u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2896Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28988u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28990u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A289E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A38u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A60u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28AF4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B2Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B48u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B6Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B84u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28BB8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28BD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28BE8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28BF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28BFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C08u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C1Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C2Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C58u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C88u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C9Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CA4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CB0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CC4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CD8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D04u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D38u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D3Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D44u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D58u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D6Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D84u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DBCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DCCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DD4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DE8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E04u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E20u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E38u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E4Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E60u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28EA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28EB4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28EBCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28EC4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28ECCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28EE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28EF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28EF4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28EFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FA4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FB0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FB8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FCCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FD8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FE4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29008u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29010u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2901Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29024u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2902Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29040u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29058u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2905Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29064u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2906Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29074u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29094u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29104u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2910Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29120u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29124u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29138u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29158u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29168u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29170u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29184u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29188u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2919Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29214u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2922Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2925Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29274u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29280u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2928Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29300u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2933Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29360u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29370u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29388u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29394u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2939Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29400u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29408u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29414u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2941Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2942Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29438u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29440u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29450u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2945Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29464u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2946Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29478u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29484u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2948Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29490u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A294B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A294D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A294F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A294FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29508u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29514u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2952Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29540u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29554u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29564u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2956Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2958Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29598u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A295A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A295B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A295B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A295CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A295F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29604u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29610u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2961Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29674u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29680u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2969Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A296B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A296C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A296D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A296E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A296E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A296F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29708u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2971Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29734u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A297D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A297E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A297F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29834u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2983Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29844u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29890u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29898u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A298A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A298ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A298F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A298FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29904u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2998Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2999Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A299ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A299D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A299E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29A10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29A1Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29A24u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29A34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29A38u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29A40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29A80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29AA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29AC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B44u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B50u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B64u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29BA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29BB4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29BC4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29BCCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29BD4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29BE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29BF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C04u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C18u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C20u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C3Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C78u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29CD4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29CE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29CF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D24u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D3Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D4Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D78u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29DACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29DB4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29DB8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29DCCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29DD8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29DE4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29DECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29DF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29DFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E04u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E18u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E24u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E38u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E4Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E64u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E78u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29EBCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29EDCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29EF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F18u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F84u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29FA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29FA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29FB4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29FC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29FCCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29FDCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A004u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A014u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A020u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A028u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A038u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A048u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A050u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A058u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A05Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A068u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A070u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A084u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A08Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A094u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A104u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A118u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A120u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A12Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A138u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A144u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A14Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A15Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A180u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A20Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A238u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A244u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A254u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A25Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A264u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A28Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A298u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A2A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A2B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A2B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A2BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A2C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A2D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A2F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A34Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A354u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A35Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A36Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A378u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A37Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A384u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A3ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A3B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A3D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A3E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A414u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A43Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A444u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A44Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A4BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A4D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A500u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A50Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A558u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A5ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A5E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A5F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A600u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A608u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A618u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A624u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A630u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A63Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A65Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A670u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A6C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A6E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A6F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A704u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A70Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A724u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A734u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A73Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A744u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A74Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A754u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A760u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A768u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A770u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A778u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A77Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A784u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A78Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A7A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A7ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A7E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A7ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A7F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A804u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A80Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A814u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A81Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A824u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A82Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A834u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A83Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A844u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A858u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A860u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A874u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A87Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A890u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A898u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A8ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A8B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A8C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A8D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A8E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A8ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A8F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A90Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A930u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A944u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A950u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A958u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A96Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A974u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A97Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A984u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A98Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A994u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A99Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A9A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A9ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A9B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A9C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A9CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A9DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A9E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A9F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A9FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA24u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA2Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA3Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA44u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA48u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA60u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA84u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAA4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAD8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAE8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB08u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB18u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB20u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB38u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB48u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB50u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB60u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB78u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB9Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABB4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABD8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC1Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC24u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC2Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC3Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC44u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC4Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC6Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC84u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC9Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ACA4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ACB4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ACBCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ACCCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ACD4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ACE4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ACECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ACF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD08u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD2Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD4Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD78u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD88u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADB0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADD8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE08u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE20u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE38u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE44u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEBCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEC4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AECCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AED4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEDCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEE4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEF4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF04u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF1Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF2Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF44u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF4Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF64u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFB0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFC4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFD4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFE4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFF4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B004u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B00Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B014u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B01Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B024u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B034u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B03Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B04Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B054u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B064u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B06Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B07Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B084u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B094u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B09Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B11Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B128u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B170u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B1B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B1ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B200u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B214u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B238u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B240u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B254u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B280u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B288u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B294u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B2A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B2C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B2FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B364u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B37Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B384u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B38Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B390u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B3B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B400u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B404u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B414u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B420u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B428u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B438u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B454u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B464u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B470u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B480u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B48Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B498u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B4A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B4A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B4C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B4D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B4DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B4E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B500u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B528u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B52Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B53Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B544u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B54Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B554u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B55Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B56Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B570u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B578u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B604u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B614u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B618u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B630u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B640u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B644u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B65Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B66Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B670u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B684u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B694u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B698u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B700u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B708u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B70Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B714u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B740u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B760u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B76Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B77Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B788u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B798u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B804u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B80Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B814u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B81Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B820u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B82Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B858u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B868u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B870u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B880u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B884u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B88Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B908u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B910u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B914u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B934u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B94Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B978u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B980u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B988u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B98Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B998u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B9A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B9B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B9B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B9C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B9CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B9D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B9DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B9E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B9F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA18u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA20u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA4Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA88u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BAC4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BACCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BAD4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BAD8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BAE4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BAECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BAFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB04u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB18u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB1Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB6Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BBA4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BBACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BBC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BBD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BBD8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BBE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BBE8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BBF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC04u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC1Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC24u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC38u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC44u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC50u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC58u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC78u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC9Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCD8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCE4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD04u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD44u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD78u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDA4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDB4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDCCu, &recomp_unit_0137, "recomp_unit_0137");
}
} // namespace psprecomp
