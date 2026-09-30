#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0146[4095] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 8, 0, 9, 0, 0, 10, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 26, 0, 0, 27, 0, 28, 0, 29, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 33,
    0, 0, 0, 34, 0, 0, 0, 35, 0, 36, 0, 37, 0, 0, 0, 0, 38, 0, 39, 0, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 48, 0, 0, 49, 0, 50, 0, 51, 0, 52, 0,
    0, 53, 0, 0, 54, 0, 55, 0, 0, 56, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 60, 0, 0, 61, 0, 62, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0,
    70, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 78, 79, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 0,
    0, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 0, 94, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 98,
    0, 0, 99, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107,
    0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 112, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 116,
    0, 117, 0, 0, 118, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    0, 0, 123, 0, 0, 124, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0,
    132, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 139, 0, 140, 0, 0, 0, 141, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 148, 0, 0, 0,
    0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0, 0, 155, 156, 0,
    157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0,
    0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 169, 0, 170, 0, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0,
    0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 180, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 183, 0, 184, 0, 185, 0, 186, 0, 0, 187, 0, 188, 0, 0, 189, 0, 0, 0,
    190, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 194, 0, 0, 195, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 201, 0, 0,
    0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0,
    212, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0,
    0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 228, 0, 229, 0,
    230, 231, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 237, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 249, 0, 250, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0,
    0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 262, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0,
    0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0,
    0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281,
    0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 287, 0,
    288, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0,
    0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 300, 0, 0,
    0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 321, 0, 0,
    0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 325, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0,
    0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0,
    0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 349,
    0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 355, 0, 356, 0, 357, 0, 0,
    0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0,
    0, 361, 0, 0, 0, 362, 0, 363, 0, 0, 0, 364, 0, 0, 0, 365, 0, 366, 0, 0, 0, 367, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0,
    0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 382, 383, 0, 384, 0, 0, 385, 0, 0, 386,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391,
    0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0,
    397, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410,
    0, 0, 0, 0, 411, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0,
    0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 425, 0, 426,
    0, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 429, 0, 0, 430, 0, 0, 0, 431, 0, 432, 0, 0, 433, 0, 434, 0, 0, 435, 0, 0, 0,
    0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 441, 442, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0,
    445, 446, 0, 447, 0, 448, 0, 449, 450, 0, 451, 0, 452, 0, 453, 454, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0, 459, 460, 0, 461, 0, 462, 0, 463, 464, 0, 465, 0, 466, 0, 467, 468, 0, 469,
    0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 473, 474, 0, 475, 0,
    476, 0, 477, 478, 0, 479, 0, 480, 0, 481, 482, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 487, 0,
    488, 0, 489, 0, 490, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 0,
    0, 496, 0, 497, 0, 0, 0, 0, 498, 0, 499, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503,
    0, 0, 0, 0, 0, 0, 504, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 509, 0, 510, 0, 511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0,
    0, 515, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 519, 0, 520, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 526, 0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0,
    0, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0,
    541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 543, 0, 544, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 553,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 558, 0, 0, 559, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 563,
    0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 570, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0,
    0, 0, 0, 574, 0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 0, 579, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0,
    0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0,
    0, 0, 587, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 0,
    591, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0,
    0, 0, 603, 0, 0, 604, 0, 0, 0, 0, 605, 0, 606, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 613, 614, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0,
    619, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 622, 0, 623, 0, 0, 0,
    0, 0, 624, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 629, 0, 630,
    0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 632, 0, 633, 0, 0, 0, 0, 0, 634, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 638, 0, 0, 0, 639, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 642, 0, 0,
    0, 0, 0, 0, 0, 643, 644, 0, 0, 0, 0, 0, 0, 645, 0, 0, 646, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 650, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0,
    654, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 659, 0, 660, 0, 0, 0, 0, 0, 661,
    0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 664, 0, 0, 0, 0, 665, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 667,
    0, 0, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 671, 672, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 674, 0, 675, 0, 0, 0, 676, 0, 0, 677, 0, 678, 0,
    0, 0, 679, 0, 680, 0, 0, 681, 0, 0, 682, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 685, 0, 686, 0, 687,
    0, 688, 0, 0, 0, 0, 0, 0, 689, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 694, 0, 0, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698,
};
void recomp_unit_0146_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A4C004u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0146[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A4C004;
    case 2u: goto L_08A4C020;
    case 3u: goto L_08A4C034;
    case 4u: goto L_08A4C06C;
    case 5u: goto L_08A4C094;
    case 6u: goto L_08A4C0B0;
    case 7u: goto L_08A4C0BC;
    case 8u: goto L_08A4C0C4;
    case 9u: goto L_08A4C0CC;
    case 10u: goto L_08A4C0D8;
    case 11u: goto L_08A4C0DC;
    case 12u: goto L_08A4C0EC;
    case 13u: goto L_08A4C104;
    case 14u: goto L_08A4C128;
    case 15u: goto L_08A4C138;
    case 16u: goto L_08A4C140;
    case 17u: goto L_08A4C154;
    case 18u: goto L_08A4C160;
    case 19u: goto L_08A4C180;
    case 20u: goto L_08A4C1B0;
    case 21u: goto L_08A4C1C8;
    case 22u: goto L_08A4C1DC;
    case 23u: goto L_08A4C1E8;
    case 24u: goto L_08A4C21C;
    case 25u: goto L_08A4C224;
    case 26u: goto L_08A4C22C;
    case 27u: goto L_08A4C238;
    case 28u: goto L_08A4C240;
    case 29u: goto L_08A4C248;
    case 30u: goto L_08A4C24C;
    case 31u: goto L_08A4C25C;
    case 32u: goto L_08A4C26C;
    case 33u: goto L_08A4C280;
    case 34u: goto L_08A4C290;
    case 35u: goto L_08A4C2A0;
    case 36u: goto L_08A4C2A8;
    case 37u: goto L_08A4C2B0;
    case 38u: goto L_08A4C2C4;
    case 39u: goto L_08A4C2CC;
    case 40u: goto L_08A4C2D8;
    case 41u: goto L_08A4C2E0;
    case 42u: goto L_08A4C2F4;
    case 43u: goto L_08A4C2FC;
    case 44u: goto L_08A4C314;
    case 45u: goto L_08A4C328;
    case 46u: goto L_08A4C344;
    case 47u: goto L_08A4C34C;
    case 48u: goto L_08A4C358;
    case 49u: goto L_08A4C364;
    case 50u: goto L_08A4C36C;
    case 51u: goto L_08A4C374;
    case 52u: goto L_08A4C37C;
    case 53u: goto L_08A4C388;
    case 54u: goto L_08A4C394;
    case 55u: goto L_08A4C39C;
    case 56u: goto L_08A4C3A8;
    case 57u: goto L_08A4C3AC;
    case 58u: goto L_08A4C3D4;
    case 59u: goto L_08A4C3E0;
    case 60u: goto L_08A4C3E8;
    case 61u: goto L_08A4C3F4;
    case 62u: goto L_08A4C3FC;
    case 63u: goto L_08A4C41C;
    case 64u: goto L_08A4C428;
    case 65u: goto L_08A4C444;
    case 66u: goto L_08A4C454;
    case 67u: goto L_08A4C460;
    case 68u: goto L_08A4C46C;
    case 69u: goto L_08A4C478;
    case 70u: goto L_08A4C484;
    case 71u: goto L_08A4C494;
    case 72u: goto L_08A4C49C;
    case 73u: goto L_08A4C4BC;
    case 74u: goto L_08A4C4CC;
    case 75u: goto L_08A4C4D8;
    case 76u: goto L_08A4C4F0;
    case 77u: goto L_08A4C50C;
    case 78u: goto L_08A4C520;
    case 79u: goto L_08A4C524;
    case 80u: goto L_08A4C530;
    case 81u: goto L_08A4C548;
    case 82u: goto L_08A4C55C;
    case 83u: goto L_08A4C568;
    case 84u: goto L_08A4C578;
    case 85u: goto L_08A4C58C;
    case 86u: goto L_08A4C598;
    case 87u: goto L_08A4C5A8;
    case 88u: goto L_08A4C5C8;
    case 89u: goto L_08A4C5DC;
    case 90u: goto L_08A4C5F0;
    case 91u: goto L_08A4C614;
    case 92u: goto L_08A4C620;
    case 93u: goto L_08A4C628;
    case 94u: goto L_08A4C63C;
    case 95u: goto L_08A4C640;
    case 96u: goto L_08A4C65C;
    case 97u: goto L_08A4C678;
    case 98u: goto L_08A4C680;
    case 99u: goto L_08A4C68C;
    case 100u: goto L_08A4C694;
    case 101u: goto L_08A4C6A8;
    case 102u: goto L_08A4C6B8;
    case 103u: goto L_08A4C6C0;
    case 104u: goto L_08A4C6C8;
    case 105u: goto L_08A4C6D4;
    case 106u: goto L_08A4C6EC;
    case 107u: goto L_08A4C700;
    case 108u: goto L_08A4C720;
    case 109u: goto L_08A4C734;
    case 110u: goto L_08A4C740;
    case 111u: goto L_08A4C748;
    case 112u: goto L_08A4C754;
    case 113u: goto L_08A4C75C;
    case 114u: goto L_08A4C768;
    case 115u: goto L_08A4C774;
    case 116u: goto L_08A4C780;
    case 117u: goto L_08A4C788;
    case 118u: goto L_08A4C794;
    case 119u: goto L_08A4C798;
    case 120u: goto L_08A4C7A4;
    case 121u: goto L_08A4C7C0;
    case 122u: goto L_08A4C7F8;
    case 123u: goto L_08A4C80C;
    case 124u: goto L_08A4C818;
    case 125u: goto L_08A4C820;
    case 126u: goto L_08A4C82C;
    case 127u: goto L_08A4C838;
    case 128u: goto L_08A4C84C;
    case 129u: goto L_08A4C860;
    case 130u: goto L_08A4C86C;
    case 131u: goto L_08A4C878;
    case 132u: goto L_08A4C884;
    case 133u: goto L_08A4C890;
    case 134u: goto L_08A4C89C;
    case 135u: goto L_08A4C8B0;
    case 136u: goto L_08A4C8D8;
    case 137u: goto L_08A4C8E4;
    case 138u: goto L_08A4C904;
    case 139u: goto L_08A4C90C;
    case 140u: goto L_08A4C914;
    case 141u: goto L_08A4C924;
    case 142u: goto L_08A4C92C;
    case 143u: goto L_08A4C938;
    case 144u: goto L_08A4C948;
    case 145u: goto L_08A4C958;
    case 146u: goto L_08A4C964;
    case 147u: goto L_08A4C970;
    case 148u: goto L_08A4C974;
    case 149u: goto L_08A4C990;
    case 150u: goto L_08A4C9B8;
    case 151u: goto L_08A4C9C0;
    case 152u: goto L_08A4C9D4;
    case 153u: goto L_08A4C9E4;
    case 154u: goto L_08A4C9EC;
    case 155u: goto L_08A4C9F8;
    case 156u: goto L_08A4C9FC;
    case 157u: goto L_08A4CA04;
    case 158u: goto L_08A4CA0C;
    case 159u: goto L_08A4CA2C;
    case 160u: goto L_08A4CA34;
    case 161u: goto L_08A4CA40;
    case 162u: goto L_08A4CA50;
    case 163u: goto L_08A4CA60;
    case 164u: goto L_08A4CA6C;
    case 165u: goto L_08A4CA78;
    case 166u: goto L_08A4CA98;
    case 167u: goto L_08A4CAB4;
    case 168u: goto L_08A4CABC;
    case 169u: goto L_08A4CAC4;
    case 170u: goto L_08A4CACC;
    case 171u: goto L_08A4CAD8;
    case 172u: goto L_08A4CAE0;
    case 173u: goto L_08A4CAE8;
    case 174u: goto L_08A4CAFC;
    case 175u: goto L_08A4CB0C;
    case 176u: goto L_08A4CB44;
    case 177u: goto L_08A4CB4C;
    case 178u: goto L_08A4CB64;
    case 179u: goto L_08A4CB70;
    case 180u: goto L_08A4CB78;
    case 181u: goto L_08A4CBA8;
    case 182u: goto L_08A4CBB0;
    case 183u: goto L_08A4CBBC;
    case 184u: goto L_08A4CBC4;
    case 185u: goto L_08A4CBCC;
    case 186u: goto L_08A4CBD4;
    case 187u: goto L_08A4CBE0;
    case 188u: goto L_08A4CBE8;
    case 189u: goto L_08A4CBF4;
    case 190u: goto L_08A4CC04;
    case 191u: goto L_08A4CC10;
    case 192u: goto L_08A4CC1C;
    case 193u: goto L_08A4CC28;
    case 194u: goto L_08A4CC30;
    case 195u: goto L_08A4CC3C;
    case 196u: goto L_08A4CC44;
    case 197u: goto L_08A4CC50;
    case 198u: goto L_08A4CC70;
    case 199u: goto L_08A4CCE8;
    case 200u: goto L_08A4CCF0;
    case 201u: goto L_08A4CCF8;
    case 202u: goto L_08A4CD0C;
    case 203u: goto L_08A4CD18;
    case 204u: goto L_08A4CD24;
    case 205u: goto L_08A4CD30;
    case 206u: goto L_08A4CD3C;
    case 207u: goto L_08A4CD48;
    case 208u: goto L_08A4CD54;
    case 209u: goto L_08A4CD60;
    case 210u: goto L_08A4CD6C;
    case 211u: goto L_08A4CD78;
    case 212u: goto L_08A4CD84;
    case 213u: goto L_08A4CD90;
    case 214u: goto L_08A4CDA0;
    case 215u: goto L_08A4CDCC;
    case 216u: goto L_08A4CDD8;
    case 217u: goto L_08A4CE30;
    case 218u: goto L_08A4CE3C;
    case 219u: goto L_08A4CE58;
    case 220u: goto L_08A4CE68;
    case 221u: goto L_08A4CE74;
    case 222u: goto L_08A4CE90;
    case 223u: goto L_08A4CEA0;
    case 224u: goto L_08A4CEAC;
    case 225u: goto L_08A4CEC8;
    case 226u: goto L_08A4CED8;
    case 227u: goto L_08A4CEE8;
    case 228u: goto L_08A4CEF4;
    case 229u: goto L_08A4CEFC;
    case 230u: goto L_08A4CF04;
    case 231u: goto L_08A4CF08;
    case 232u: goto L_08A4CF14;
    case 233u: goto L_08A4CF2C;
    case 234u: goto L_08A4CF48;
    case 235u: goto L_08A4CF50;
    case 236u: goto L_08A4CF84;
    case 237u: goto L_08A4CF8C;
    case 238u: goto L_08A4CF94;
    case 239u: goto L_08A4CF9C;
    case 240u: goto L_08A4CFC0;
    case 241u: goto L_08A4D00C;
    case 242u: goto L_08A4D020;
    case 243u: goto L_08A4D034;
    case 244u: goto L_08A4D04C;
    case 245u: goto L_08A4D068;
    case 246u: goto L_08A4D078;
    case 247u: goto L_08A4D094;
    case 248u: goto L_08A4D0A0;
    case 249u: goto L_08A4D0B4;
    case 250u: goto L_08A4D0BC;
    case 251u: goto L_08A4D0C4;
    case 252u: goto L_08A4D0D8;
    case 253u: goto L_08A4D0F8;
    case 254u: goto L_08A4D108;
    case 255u: goto L_08A4D128;
    case 256u: goto L_08A4D1C4;
    case 257u: goto L_08A4D1E4;
    case 258u: goto L_08A4D1F0;
    case 259u: goto L_08A4D204;
    case 260u: goto L_08A4D23C;
    case 261u: goto L_08A4D244;
    case 262u: goto L_08A4D254;
    case 263u: goto L_08A4D25C;
    case 264u: goto L_08A4D268;
    case 265u: goto L_08A4D28C;
    case 266u: goto L_08A4D29C;
    case 267u: goto L_08A4D2B8;
    case 268u: goto L_08A4D2C8;
    case 269u: goto L_08A4D2D8;
    case 270u: goto L_08A4D2EC;
    case 271u: goto L_08A4D308;
    case 272u: goto L_08A4D318;
    case 273u: goto L_08A4D324;
    case 274u: goto L_08A4D340;
    case 275u: goto L_08A4D344;
    case 276u: goto L_08A4D35C;
    case 277u: goto L_08A4D38C;
    case 278u: goto L_08A4D3A4;
    case 279u: goto L_08A4D3C4;
    case 280u: goto L_08A4D3E4;
    case 281u: goto L_08A4D400;
    case 282u: goto L_08A4D418;
    case 283u: goto L_08A4D430;
    case 284u: goto L_08A4D44C;
    case 285u: goto L_08A4D468;
    case 286u: goto L_08A4D478;
    case 287u: goto L_08A4D47C;
    case 288u: goto L_08A4D484;
    case 289u: goto L_08A4D490;
    case 290u: goto L_08A4D4A4;
    case 291u: goto L_08A4D4B4;
    case 292u: goto L_08A4D4D0;
    case 293u: goto L_08A4D4E8;
    case 294u: goto L_08A4D4F8;
    case 295u: goto L_08A4D514;
    case 296u: goto L_08A4D530;
    case 297u: goto L_08A4D54C;
    case 298u: goto L_08A4D564;
    case 299u: goto L_08A4D570;
    case 300u: goto L_08A4D578;
    case 301u: goto L_08A4D58C;
    case 302u: goto L_08A4D5B0;
    case 303u: goto L_08A4D5F0;
    case 304u: goto L_08A4D604;
    case 305u: goto L_08A4D644;
    case 306u: goto L_08A4D65C;
    case 307u: goto L_08A4D6A0;
    case 308u: goto L_08A4D6A8;
    case 309u: goto L_08A4D6B0;
    case 310u: goto L_08A4D6B8;
    case 311u: goto L_08A4D6C0;
    case 312u: goto L_08A4D6C8;
    case 313u: goto L_08A4D6D0;
    case 314u: goto L_08A4D6D8;
    case 315u: goto L_08A4D6E4;
    case 316u: goto L_08A4D6EC;
    case 317u: goto L_08A4D734;
    case 318u: goto L_08A4D748;
    case 319u: goto L_08A4D764;
    case 320u: goto L_08A4D770;
    case 321u: goto L_08A4D778;
    case 322u: goto L_08A4D790;
    case 323u: goto L_08A4D7A8;
    case 324u: goto L_08A4D7B0;
    case 325u: goto L_08A4D7BC;
    case 326u: goto L_08A4D7C4;
    case 327u: goto L_08A4D7CC;
    case 328u: goto L_08A4D81C;
    case 329u: goto L_08A4D830;
    case 330u: goto L_08A4D848;
    case 331u: goto L_08A4D850;
    case 332u: goto L_08A4D858;
    case 333u: goto L_08A4D8AC;
    case 334u: goto L_08A4D8D4;
    case 335u: goto L_08A4D8E8;
    case 336u: goto L_08A4D8F4;
    case 337u: goto L_08A4D914;
    case 338u: goto L_08A4D91C;
    case 339u: goto L_08A4D92C;
    case 340u: goto L_08A4D940;
    case 341u: goto L_08A4D948;
    case 342u: goto L_08A4D958;
    case 343u: goto L_08A4D968;
    case 344u: goto L_08A4D97C;
    case 345u: goto L_08A4D988;
    case 346u: goto L_08A4D994;
    case 347u: goto L_08A4D9BC;
    case 348u: goto L_08A4D9F8;
    case 349u: goto L_08A4DA00;
    case 350u: goto L_08A4DA0C;
    case 351u: goto L_08A4DA28;
    case 352u: goto L_08A4DA3C;
    case 353u: goto L_08A4DA54;
    case 354u: goto L_08A4DA5C;
    case 355u: goto L_08A4DA68;
    case 356u: goto L_08A4DA70;
    case 357u: goto L_08A4DA78;
    case 358u: goto L_08A4DA90;
    case 359u: goto L_08A4DAB8;
    case 360u: goto L_08A4DAF8;
    case 361u: goto L_08A4DB08;
    case 362u: goto L_08A4DB18;
    case 363u: goto L_08A4DB20;
    case 364u: goto L_08A4DB30;
    case 365u: goto L_08A4DB40;
    case 366u: goto L_08A4DB48;
    case 367u: goto L_08A4DB58;
    case 368u: goto L_08A4DB5C;
    case 369u: goto L_08A4DB64;
    case 370u: goto L_08A4DBA0;
    case 371u: goto L_08A4DBA8;
    case 372u: goto L_08A4DBC8;
    case 373u: goto L_08A4DBD0;
    case 374u: goto L_08A4DBD8;
    case 375u: goto L_08A4DBE4;
    case 376u: goto L_08A4DC08;
    case 377u: goto L_08A4DC4C;
    case 378u: goto L_08A4DC54;
    case 379u: goto L_08A4DC6C;
    case 380u: goto L_08A4DCBC;
    case 381u: goto L_08A4DCD4;
    case 382u: goto L_08A4DCDC;
    case 383u: goto L_08A4DCE0;
    case 384u: goto L_08A4DCE8;
    case 385u: goto L_08A4DCF4;
    case 386u: goto L_08A4DD00;
    case 387u: goto L_08A4DD2C;
    case 388u: goto L_08A4DD3C;
    case 389u: goto L_08A4DD58;
    case 390u: goto L_08A4DD64;
    case 391u: goto L_08A4DD80;
    case 392u: goto L_08A4DD90;
    case 393u: goto L_08A4DDCC;
    case 394u: goto L_08A4DDD4;
    case 395u: goto L_08A4DDEC;
    case 396u: goto L_08A4DDF4;
    case 397u: goto L_08A4DE04;
    case 398u: goto L_08A4DE14;
    case 399u: goto L_08A4DE20;
    case 400u: goto L_08A4DE34;
    case 401u: goto L_08A4DE3C;
    case 402u: goto L_08A4DE58;
    case 403u: goto L_08A4DE78;
    case 404u: goto L_08A4DEA8;
    case 405u: goto L_08A4DEC4;
    case 406u: goto L_08A4DEE4;
    case 407u: goto L_08A4DEF8;
    case 408u: goto L_08A4DF3C;
    case 409u: goto L_08A4DF70;
    case 410u: goto L_08A4DF80;
    case 411u: goto L_08A4DF94;
    case 412u: goto L_08A4DF9C;
    case 413u: goto L_08A4DFA8;
    case 414u: goto L_08A4DFE8;
    case 415u: goto L_08A4E008;
    case 416u: goto L_08A4E014;
    case 417u: goto L_08A4E0BC;
    case 418u: goto L_08A4E0DC;
    case 419u: goto L_08A4E0F4;
    case 420u: goto L_08A4E128;
    case 421u: goto L_08A4E154;
    case 422u: goto L_08A4E17C;
    case 423u: goto L_08A4E1D4;
    case 424u: goto L_08A4E1F4;
    case 425u: goto L_08A4E1F8;
    case 426u: goto L_08A4E200;
    case 427u: goto L_08A4E214;
    case 428u: goto L_08A4E228;
    case 429u: goto L_08A4E230;
    case 430u: goto L_08A4E23C;
    case 431u: goto L_08A4E24C;
    case 432u: goto L_08A4E254;
    case 433u: goto L_08A4E260;
    case 434u: goto L_08A4E268;
    case 435u: goto L_08A4E274;
    case 436u: goto L_08A4E288;
    case 437u: goto L_08A4E2A0;
    case 438u: goto L_08A4E2B8;
    case 439u: goto L_08A4E2D0;
    case 440u: goto L_08A4E2D8;
    case 441u: goto L_08A4E2EC;
    case 442u: goto L_08A4E2F0;
    case 443u: goto L_08A4E370;
    case 444u: goto L_08A4E378;
    case 445u: goto L_08A4E384;
    case 446u: goto L_08A4E388;
    case 447u: goto L_08A4E390;
    case 448u: goto L_08A4E398;
    case 449u: goto L_08A4E3A0;
    case 450u: goto L_08A4E3A4;
    case 451u: goto L_08A4E3AC;
    case 452u: goto L_08A4E3B4;
    case 453u: goto L_08A4E3BC;
    case 454u: goto L_08A4E3C0;
    case 455u: goto L_08A4E3C8;
    case 456u: goto L_08A4E3E0;
    case 457u: goto L_08A4E4A8;
    case 458u: goto L_08A4E4B0;
    case 459u: goto L_08A4E4BC;
    case 460u: goto L_08A4E4C0;
    case 461u: goto L_08A4E4C8;
    case 462u: goto L_08A4E4D0;
    case 463u: goto L_08A4E4D8;
    case 464u: goto L_08A4E4DC;
    case 465u: goto L_08A4E4E4;
    case 466u: goto L_08A4E4EC;
    case 467u: goto L_08A4E4F4;
    case 468u: goto L_08A4E4F8;
    case 469u: goto L_08A4E500;
    case 470u: goto L_08A4E518;
    case 471u: goto L_08A4E5DC;
    case 472u: goto L_08A4E5E4;
    case 473u: goto L_08A4E5F0;
    case 474u: goto L_08A4E5F4;
    case 475u: goto L_08A4E5FC;
    case 476u: goto L_08A4E604;
    case 477u: goto L_08A4E60C;
    case 478u: goto L_08A4E610;
    case 479u: goto L_08A4E618;
    case 480u: goto L_08A4E620;
    case 481u: goto L_08A4E628;
    case 482u: goto L_08A4E62C;
    case 483u: goto L_08A4E634;
    case 484u: goto L_08A4E650;
    case 485u: goto L_08A4E658;
    case 486u: goto L_08A4E670;
    case 487u: goto L_08A4E67C;
    case 488u: goto L_08A4E684;
    case 489u: goto L_08A4E68C;
    case 490u: goto L_08A4E694;
    case 491u: goto L_08A4E69C;
    case 492u: goto L_08A4E6BC;
    case 493u: goto L_08A4E6D4;
    case 494u: goto L_08A4E6DC;
    case 495u: goto L_08A4E6F8;
    case 496u: goto L_08A4E708;
    case 497u: goto L_08A4E710;
    case 498u: goto L_08A4E724;
    case 499u: goto L_08A4E72C;
    case 500u: goto L_08A4E734;
    case 501u: goto L_08A4E750;
    case 502u: goto L_08A4E758;
    case 503u: goto L_08A4E780;
    case 504u: goto L_08A4E79C;
    case 505u: goto L_08A4E7A4;
    case 506u: goto L_08A4E7AC;
    case 507u: goto L_08A4E814;
    case 508u: goto L_08A4E858;
    case 509u: goto L_08A4E898;
    case 510u: goto L_08A4E8A0;
    case 511u: goto L_08A4E8A8;
    case 512u: goto L_08A4E8C8;
    case 513u: goto L_08A4E8DC;
    case 514u: goto L_08A4E8F8;
    case 515u: goto L_08A4E908;
    case 516u: goto L_08A4E918;
    case 517u: goto L_08A4E920;
    case 518u: goto L_08A4E938;
    case 519u: goto L_08A4E944;
    case 520u: goto L_08A4E94C;
    case 521u: goto L_08A4E954;
    case 522u: goto L_08A4E964;
    case 523u: goto L_08A4E98C;
    case 524u: goto L_08A4E9B0;
    case 525u: goto L_08A4E9C8;
    case 526u: goto L_08A4E9D4;
    case 527u: goto L_08A4E9E0;
    case 528u: goto L_08A4E9F0;
    case 529u: goto L_08A4EA18;
    case 530u: goto L_08A4EA38;
    case 531u: goto L_08A4EA50;
    case 532u: goto L_08A4EA64;
    case 533u: goto L_08A4EA78;
    case 534u: goto L_08A4EA94;
    case 535u: goto L_08A4EAA8;
    case 536u: goto L_08A4EAD4;
    case 537u: goto L_08A4EAEC;
    case 538u: goto L_08A4EB18;
    case 539u: goto L_08A4EB30;
    case 540u: goto L_08A4EB78;
    case 541u: goto L_08A4EB84;
    case 542u: goto L_08A4EBE8;
    case 543u: goto L_08A4EBF0;
    case 544u: goto L_08A4EBF8;
    case 545u: goto L_08A4EC60;
    case 546u: goto L_08A4EC68;
    case 547u: goto L_08A4ECD4;
    case 548u: goto L_08A4ECF4;
    case 549u: goto L_08A4ED40;
    case 550u: goto L_08A4ED7C;
    case 551u: goto L_08A4EDB8;
    case 552u: goto L_08A4EDE0;
    case 553u: goto L_08A4EE00;
    case 554u: goto L_08A4EE28;
    case 555u: goto L_08A4EE74;
    case 556u: goto L_08A4EEAC;
    case 557u: goto L_08A4EED8;
    case 558u: goto L_08A4EF14;
    case 559u: goto L_08A4EF20;
    case 560u: goto L_08A4EF2C;
    case 561u: goto L_08A4EF4C;
    case 562u: goto L_08A4EF68;
    case 563u: goto L_08A4EF80;
    case 564u: goto L_08A4EF9C;
    case 565u: goto L_08A4EFC4;
    case 566u: goto L_08A4EFDC;
    case 567u: goto L_08A4EFF8;
    case 568u: goto L_08A4F03C;
    case 569u: goto L_08A4F050;
    case 570u: goto L_08A4F08C;
    case 571u: goto L_08A4F094;
    case 572u: goto L_08A4F0D4;
    case 573u: goto L_08A4F0F8;
    case 574u: goto L_08A4F110;
    case 575u: goto L_08A4F118;
    case 576u: goto L_08A4F12C;
    case 577u: goto L_08A4F15C;
    case 578u: goto L_08A4F164;
    case 579u: goto L_08A4F178;
    case 580u: goto L_08A4F1A0;
    case 581u: goto L_08A4F1D0;
    case 582u: goto L_08A4F1EC;
    case 583u: goto L_08A4F210;
    case 584u: goto L_08A4F234;
    case 585u: goto L_08A4F270;
    case 586u: goto L_08A4F278;
    case 587u: goto L_08A4F28C;
    case 588u: goto L_08A4F294;
    case 589u: goto L_08A4F2DC;
    case 590u: goto L_08A4F2EC;
    case 591u: goto L_08A4F304;
    case 592u: goto L_08A4F320;
    case 593u: goto L_08A4F33C;
    case 594u: goto L_08A4F358;
    case 595u: goto L_08A4F398;
    case 596u: goto L_08A4F3D8;
    case 597u: goto L_08A4F448;
    case 598u: goto L_08A4F4AC;
    case 599u: goto L_08A4F4C4;
    case 600u: goto L_08A4F4D8;
    case 601u: goto L_08A4F4E4;
    case 602u: goto L_08A4F4F8;
    case 603u: goto L_08A4F50C;
    case 604u: goto L_08A4F518;
    case 605u: goto L_08A4F52C;
    case 606u: goto L_08A4F534;
    case 607u: goto L_08A4F53C;
    case 608u: goto L_08A4F54C;
    case 609u: goto L_08A4F564;
    case 610u: goto L_08A4F5B4;
    case 611u: goto L_08A4F5CC;
    case 612u: goto L_08A4F5EC;
    case 613u: goto L_08A4F5F8;
    case 614u: goto L_08A4F5FC;
    case 615u: goto L_08A4F638;
    case 616u: goto L_08A4F664;
    case 617u: goto L_08A4F694;
    case 618u: goto L_08A4F6F0;
    case 619u: goto L_08A4F704;
    case 620u: goto L_08A4F728;
    case 621u: goto L_08A4F75C;
    case 622u: goto L_08A4F76C;
    case 623u: goto L_08A4F774;
    case 624u: goto L_08A4F78C;
    case 625u: goto L_08A4F794;
    case 626u: goto L_08A4F7AC;
    case 627u: goto L_08A4F7C0;
    case 628u: goto L_08A4F7F0;
    case 629u: goto L_08A4F7F8;
    case 630u: goto L_08A4F800;
    case 631u: goto L_08A4F80C;
    case 632u: goto L_08A4F82C;
    case 633u: goto L_08A4F834;
    case 634u: goto L_08A4F84C;
    case 635u: goto L_08A4F854;
    case 636u: goto L_08A4F944;
    case 637u: goto L_08A4F968;
    case 638u: goto L_08A4F998;
    case 639u: goto L_08A4F9A8;
    case 640u: goto L_08A4F9B4;
    case 641u: goto L_08A4F9E8;
    case 642u: goto L_08A4F9F8;
    case 643u: goto L_08A4FA18;
    case 644u: goto L_08A4FA1C;
    case 645u: goto L_08A4FA38;
    case 646u: goto L_08A4FA44;
    case 647u: goto L_08A4FA48;
    case 648u: goto L_08A4FB34;
    case 649u: goto L_08A4FB5C;
    case 650u: goto L_08A4FB64;
    case 651u: goto L_08A4FB9C;
    case 652u: goto L_08A4FBD4;
    case 653u: goto L_08A4FBE4;
    case 654u: goto L_08A4FC04;
    case 655u: goto L_08A4FC10;
    case 656u: goto L_08A4FC1C;
    case 657u: goto L_08A4FC30;
    case 658u: goto L_08A4FC40;
    case 659u: goto L_08A4FC60;
    case 660u: goto L_08A4FC68;
    case 661u: goto L_08A4FC80;
    case 662u: goto L_08A4FCA0;
    case 663u: goto L_08A4FCB8;
    case 664u: goto L_08A4FCC0;
    case 665u: goto L_08A4FCD4;
    case 666u: goto L_08A4FCE8;
    case 667u: goto L_08A4FD00;
    case 668u: goto L_08A4FD18;
    case 669u: goto L_08A4FD28;
    case 670u: goto L_08A4FD5C;
    case 671u: goto L_08A4FD74;
    case 672u: goto L_08A4FD78;
    case 673u: goto L_08A4FDC4;
    case 674u: goto L_08A4FDD0;
    case 675u: goto L_08A4FDD8;
    case 676u: goto L_08A4FDE8;
    case 677u: goto L_08A4FDF4;
    case 678u: goto L_08A4FDFC;
    case 679u: goto L_08A4FE0C;
    case 680u: goto L_08A4FE14;
    case 681u: goto L_08A4FE20;
    case 682u: goto L_08A4FE2C;
    case 683u: goto L_08A4FE38;
    case 684u: goto L_08A4FE60;
    case 685u: goto L_08A4FE70;
    case 686u: goto L_08A4FE78;
    case 687u: goto L_08A4FE80;
    case 688u: goto L_08A4FE88;
    case 689u: goto L_08A4FEA4;
    case 690u: goto L_08A4FEAC;
    case 691u: goto L_08A4FED8;
    case 692u: goto L_08A4FF40;
    case 693u: goto L_08A4FF58;
    case 694u: goto L_08A4FF8C;
    case 695u: goto L_08A4FFA4;
    case 696u: goto L_08A4FFB4;
    case 697u: goto L_08A4FFCC;
    case 698u: goto L_08A4FFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A4C004:
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
L_08A4C020:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C034:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9864)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4C06Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 514u, 0x08936330u>(ctx, &aot_mem) && ctx.pc == 0x08A4C06Cu) goto L_08A4C06C;
    return;
L_08A4C06C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C0C4;
      }
      goto L_08A4C094;
    }
L_08A4C094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A4C0CC;
      }
      goto L_08A4C0B0;
    }
L_08A4C0B0:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4C0BCu);
    ctx.gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 414u, 0x08935DB0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C0BCu) goto L_08A4C0BC;
    return;
L_08A4C0BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A4C0DC;
      }
      goto L_08A4C0C4;
    }
L_08A4C0C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4C0EC;
      }
      goto L_08A4C0CC;
    }
L_08A4C0CC:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4C0D8u);
    ctx.gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 468u, 0x089360D0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C0D8u) goto L_08A4C0D8;
    return;
L_08A4C0D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A4C0DC;
L_08A4C0DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
        goto L_08A4C0EC;
    }
    goto L_08A4C0EC;
L_08A4C0EC:
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
L_08A4C104:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4C128u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B8D8u>(ctx, &aot_mem) && ctx.pc == 0x08A4C128u) goto L_08A4C128;
    return;
L_08A4C128:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08A4C138u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(6540));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 576u, 0x08AEA6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A4C138u) goto L_08A4C138;
    return;
L_08A4C138:
    ctx.gpr[31] = (0x08A4C140u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 422u, 0x08AED748u>(ctx, &aot_mem) && ctx.pc == 0x08A4C140u) goto L_08A4C140;
    return;
L_08A4C140:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A4C154u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 690u, 0x0890BCD0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C154u) goto L_08A4C154;
    return;
L_08A4C154:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4C160u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 560u, 0x0890B468u>(ctx, &aot_mem) && ctx.pc == 0x08A4C160u) goto L_08A4C160;
    return;
L_08A4C160:
    ctx.gpr[2] = (0u | 2u);
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
L_08A4C180:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1084), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1088), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1092), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4C1B0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A4C1B0u) goto L_08A4C1B0;
    return;
L_08A4C1B0:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4C1C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6560));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 690u, 0x0890BCD0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C1C8u) goto L_08A4C1C8;
    return;
L_08A4C1C8:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A4C1DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6564));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 488u, 0x089661E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4C1DCu) goto L_08A4C1DC;
    return;
L_08A4C1DC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A4C22C;
      }
      goto L_08A4C1E8;
    }
L_08A4C1E8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (ctx.gpr[7] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[19] = (32768u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[19]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-9852)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1060));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-9856)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A4C240;
      }
      goto L_08A4C21C;
    }
L_08A4C21C:
    ctx.gpr[31] = (0x08A4C224u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 414u, 0x08935DB0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C224u) goto L_08A4C224;
    return;
L_08A4C224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A4C24C;
      }
      goto L_08A4C22C;
    }
L_08A4C22C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C238u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A4C104;
L_08A4C238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C3AC;
      }
      goto L_08A4C240;
    }
L_08A4C240:
    ctx.gpr[31] = (0x08A4C248u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 468u, 0x089360D0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C248u) goto L_08A4C248;
    return;
L_08A4C248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A4C24C;
L_08A4C24C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4C280;
      }
      goto L_08A4C25C;
    }
L_08A4C25C:
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A4C26Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 459u, 0x0893600Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C26Cu) goto L_08A4C26C;
    return;
L_08A4C26C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1060))))));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_08A4C2A0;
      }
      goto L_08A4C280;
    }
L_08A4C280:
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A4C290u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 514u, 0x08936330u>(ctx, &aot_mem) && ctx.pc == 0x08A4C290u) goto L_08A4C290;
    return;
L_08A4C290:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1060))))));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    goto L_08A4C2A0;
L_08A4C2A0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 151u);
      if (branch_taken) {
          goto L_08A4C2FC;
      }
      goto L_08A4C2A8;
    }
L_08A4C2A8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C2FC;
      }
      goto L_08A4C2B0;
    }
L_08A4C2B0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4C2D8;
      }
      goto L_08A4C2C4;
    }
L_08A4C2C4:
    ctx.gpr[31] = (0x08A4C2CCu);
    // nop
    ctx.pc = 0x08B0BCCCu;
    return;
L_08A4C2CC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A4C2E0;
      }
      goto L_08A4C2D8;
    }
L_08A4C2D8:
    ctx.gpr[31] = (0x08A4C2E0u);
    // nop
    ctx.pc = 0x08B0BD1Cu;
    return;
L_08A4C2E0:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A4C2F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6568));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 488u, 0x089661E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4C2F4u) goto L_08A4C2F4;
    return;
L_08A4C2F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A4C358;
      }
      goto L_08A4C2FC;
    }
L_08A4C2FC:
    ctx.gpr[6] = (2213u << 16u);
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A4C314u);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(-16332));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B8D8u>(ctx, &aot_mem) && ctx.pc == 0x08A4C314u) goto L_08A4C314;
    return;
L_08A4C314:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A4C328u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 54u, 0x0890C4C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4C328u) goto L_08A4C328;
    return;
L_08A4C328:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4C36C;
      }
      goto L_08A4C344;
    }
L_08A4C344:
    ctx.gpr[31] = (0x08A4C34Cu);
    // nop
    ctx.pc = 0x08B0BCCCu;
    return;
L_08A4C34C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A4C374;
      }
      goto L_08A4C358;
    }
L_08A4C358:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C364u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A4C104;
L_08A4C364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C3AC;
      }
      goto L_08A4C36C;
    }
L_08A4C36C:
    ctx.gpr[31] = (0x08A4C374u);
    // nop
    ctx.pc = 0x08B0BD1Cu;
    return;
L_08A4C374:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C39C;
      }
      goto L_08A4C37C;
    }
L_08A4C37C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C388u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08A4C388u) goto L_08A4C388;
    return;
L_08A4C388:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C394u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A4C104;
L_08A4C394:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C3AC;
      }
      goto L_08A4C39C;
    }
L_08A4C39C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C3A8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 560u, 0x0890B468u>(ctx, &aot_mem) && ctx.pc == 0x08A4C3A8u) goto L_08A4C3A8;
    return;
L_08A4C3A8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08A4C3AC;
L_08A4C3AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1092)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C3D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C3E8;
      }
      goto L_08A4C3E0;
    }
L_08A4C3E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4C3F4;
      }
      goto L_08A4C3E8;
    }
L_08A4C3E8:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A4C3F4;
L_08A4C3F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C3FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[5] = (2213u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4C41Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15404));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 54u, 0x0890C4C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4C41Cu) goto L_08A4C41C;
    return;
L_08A4C41C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C428:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A4C4D8;
      }
      goto L_08A4C444;
    }
L_08A4C444:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C454u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6572));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08A4C454u) goto L_08A4C454;
    return;
L_08A4C454:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C460u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BE84u>(ctx, &aot_mem) && ctx.pc == 0x08A4C460u) goto L_08A4C460;
    return;
L_08A4C460:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C46Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08A4C46Cu) goto L_08A4C46C;
    return;
L_08A4C46C:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A4C49C;
      }
      goto L_08A4C478;
    }
L_08A4C478:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C484u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x08A4C484u) goto L_08A4C484;
    return;
L_08A4C484:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A4C494u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 45u, 0x0890C3ECu>(ctx, &aot_mem) && ctx.pc == 0x08A4C494u) goto L_08A4C494;
    return;
L_08A4C494:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C4D8;
      }
      goto L_08A4C49C;
    }
L_08A4C49C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23884)));
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[31] = (0x08A4C4BCu);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(6580));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B8D8u>(ctx, &aot_mem) && ctx.pc == 0x08A4C4BCu) goto L_08A4C4BC;
    return;
L_08A4C4BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A4C4CCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 655u, 0x08AEACE0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C4CCu) goto L_08A4C4CC;
    return;
L_08A4C4CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C4D8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08A4C4D8u) goto L_08A4C4D8;
    return;
L_08A4C4D8:
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
L_08A4C4F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A4C524;
      }
      goto L_08A4C50C;
    }
L_08A4C50C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A4C520u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 49u, 0x0890C434u>(ctx, &aot_mem) && ctx.pc == 0x08A4C520u) goto L_08A4C520;
    return;
L_08A4C520:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08A4C524;
L_08A4C524:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4C530u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A4C428;
L_08A4C530:
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
L_08A4C548:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4C55Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A4C180;
L_08A4C55C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C568u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08A4C4F0;
L_08A4C568:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C578:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4C58Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A4C3FC;
L_08A4C58C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C598u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08A4C4F0;
L_08A4C598:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C5A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4C5C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A4C5C8u) goto L_08A4C5C8;
    return;
L_08A4C5C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A4C5DCu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_08A4C578;
L_08A4C5DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C5F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4C614u);
    ctx.gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08A4C614u) goto L_08A4C614;
    return;
L_08A4C614:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A4C640;
      }
      goto L_08A4C620;
    }
L_08A4C620:
    ctx.gpr[31] = (0x08A4C628u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 647u, 0x0890BA08u>(ctx, &aot_mem) && ctx.pc == 0x08A4C628u) goto L_08A4C628;
    return;
L_08A4C628:
    ctx.gpr[4] = (65280u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] & ctx.gpr[4]);
    ctx.gpr[5] = (43008u << 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4C640;
      }
      goto L_08A4C63C;
    }
L_08A4C63C:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A4C640;
L_08A4C640:
    ctx.gpr[2] = (ctx.gpr[18] & 255u);
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
L_08A4C65C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4C678u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08A4C5F0;
L_08A4C678:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C6C8;
      }
      goto L_08A4C680;
    }
L_08A4C680:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4C68Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 457u, 0x08A01F64u>(ctx, &aot_mem) && ctx.pc == 0x08A4C68Cu) goto L_08A4C68C;
    return;
L_08A4C68C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C6C0;
      }
      goto L_08A4C694;
    }
L_08A4C694:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4C6A8u);
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 459u, 0x08A01F88u>(ctx, &aot_mem) && ctx.pc == 0x08A4C6A8u) goto L_08A4C6A8;
    return;
L_08A4C6A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A4C6B8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08A4C6B8u) goto L_08A4C6B8;
    return;
L_08A4C6B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C6EC;
      }
      goto L_08A4C6C0;
    }
L_08A4C6C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4C6EC;
      }
      goto L_08A4C6C8;
    }
L_08A4C6C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4C6D4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A4C700;
L_08A4C6D4:
    ctx.gpr[5] = (ctx.gpr[2] >> 16u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[2] & 65535u);
    ctx.gpr[31] = (0x08A4C6ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08A4C6ECu) goto L_08A4C6EC;
    return;
L_08A4C6EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C700:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4C720u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 647u, 0x0890BA08u>(ctx, &aot_mem) && ctx.pc == 0x08A4C720u) goto L_08A4C720;
    return;
L_08A4C720:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4C734u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6604));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 395u, 0x08A4B388u>(ctx, &aot_mem) && ctx.pc == 0x08A4C734u) goto L_08A4C734;
    return;
L_08A4C734:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4C740u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08A4C740u) goto L_08A4C740;
    return;
L_08A4C740:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C75C;
      }
      goto L_08A4C748;
    }
L_08A4C748:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4C754u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08A4C754u) goto L_08A4C754;
    return;
L_08A4C754:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C7A4;
      }
      goto L_08A4C75C;
    }
L_08A4C75C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4C768u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08A4C768u) goto L_08A4C768;
    return;
L_08A4C768:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4C774u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BE84u>(ctx, &aot_mem) && ctx.pc == 0x08A4C774u) goto L_08A4C774;
    return;
L_08A4C774:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4C780u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08A4C780u) goto L_08A4C780;
    return;
L_08A4C780:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C798;
      }
      goto L_08A4C788;
    }
L_08A4C788:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4C794u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 647u, 0x0890BA08u>(ctx, &aot_mem) && ctx.pc == 0x08A4C794u) goto L_08A4C794;
    return;
L_08A4C794:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08A4C798;
L_08A4C798:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4C7A4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08A4C7A4u) goto L_08A4C7A4;
    return;
L_08A4C7A4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08A4C7C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (43008u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4C7F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 702u, 0x0890BE64u>(ctx, &aot_mem) && ctx.pc == 0x08A4C7F8u) goto L_08A4C7F8;
    return;
L_08A4C7F8:
    ctx.gpr[17] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(6604));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C80Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 395u, 0x08A4B388u>(ctx, &aot_mem) && ctx.pc == 0x08A4C80Cu) goto L_08A4C80C;
    return;
L_08A4C80C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C818u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08A4C818u) goto L_08A4C818;
    return;
L_08A4C818:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C86C;
      }
      goto L_08A4C820;
    }
L_08A4C820:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C82Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08A4C82Cu) goto L_08A4C82C;
    return;
L_08A4C82C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C838u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 380u, 0x08A4B2D0u>(ctx, &aot_mem) && ctx.pc == 0x08A4C838u) goto L_08A4C838;
    return;
L_08A4C838:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08A4C84Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6616));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C84Cu) goto L_08A4C84C;
    return;
L_08A4C84C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A4C860u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6624));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C860u) goto L_08A4C860;
    return;
L_08A4C860:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C86Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 23u, 0x0890C1BCu>(ctx, &aot_mem) && ctx.pc == 0x08A4C86Cu) goto L_08A4C86C;
    return;
L_08A4C86C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C878u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08A4C878u) goto L_08A4C878;
    return;
L_08A4C878:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C884u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08A4C884u) goto L_08A4C884;
    return;
L_08A4C884:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C890u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x08A4C890u) goto L_08A4C890;
    return;
L_08A4C890:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C89Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 29u, 0x0890C2B8u>(ctx, &aot_mem) && ctx.pc == 0x08A4C89Cu) goto L_08A4C89C;
    return;
L_08A4C89C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C8B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4C8D8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A4C65C;
L_08A4C8D8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C924;
      }
      goto L_08A4C8E4;
    }
L_08A4C8E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (2224u << 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A4C904u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11360));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4C904u) goto L_08A4C904;
    return;
L_08A4C904:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A4C92C;
      }
      goto L_08A4C90C;
    }
L_08A4C90C:
    ctx.gpr[31] = (0x08A4C914u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 111u, 0x08A34AF8u>(ctx, &aot_mem) && ctx.pc == 0x08A4C914u) goto L_08A4C914;
    return;
L_08A4C914:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
          goto L_08A4C964;
      }
      goto L_08A4C924;
    }
L_08A4C924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4C974;
      }
      goto L_08A4C92C;
    }
L_08A4C92C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_08A4C958;
    }
    goto L_08A4C938;
L_08A4C938:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A4C948u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A4C948u) goto L_08A4C948;
    return;
L_08A4C948:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_08A4C958;
L_08A4C958:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
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
    goto L_08A4C964;
L_08A4C964:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C970u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 700u, 0x089BF64Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4C970u) goto L_08A4C970;
    return;
L_08A4C970:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08A4C974;
L_08A4C974:
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
L_08A4C990:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4C9B8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 457u, 0x08A01F64u>(ctx, &aot_mem) && ctx.pc == 0x08A4C9B8u) goto L_08A4C9B8;
    return;
L_08A4C9B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C9EC;
      }
      goto L_08A4C9C0;
    }
L_08A4C9C0:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A4C9D4u);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 459u, 0x08A01F88u>(ctx, &aot_mem) && ctx.pc == 0x08A4C9D4u) goto L_08A4C9D4;
    return;
L_08A4C9D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A4C9E4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08A4C9E4u) goto L_08A4C9E4;
    return;
L_08A4C9E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A4C9FC;
      }
      goto L_08A4C9EC;
    }
L_08A4C9EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4C9F8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A4C65C;
L_08A4C9F8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08A4C9FC;
L_08A4C9FC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4CA0C;
      }
      goto L_08A4CA04;
    }
L_08A4CA04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A4CA6C;
      }
      goto L_08A4CA0C;
    }
L_08A4CA0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (2224u << 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A4CA2Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24108));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4CA2Cu) goto L_08A4CA2C;
    return;
L_08A4CA2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CA6C;
      }
      goto L_08A4CA34;
    }
L_08A4CA34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_08A4CA60;
    }
    goto L_08A4CA40;
L_08A4CA40:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A4CA50u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A4CA50u) goto L_08A4CA50;
    return;
L_08A4CA50:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_08A4CA60;
L_08A4CA60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(194)));
    ctx.gpr[17] = (ctx.gpr[4] ^ 5u);
    ctx.gpr[17] = (ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08A4CA6C;
L_08A4CA6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CA78u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08A4CA78u) goto L_08A4CA78;
    return;
L_08A4CA78:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08A4CA98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08A4CAC4;
    }
    goto L_08A4CAB4;
L_08A4CAB4:
    ctx.gpr[31] = (0x08A4CABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08A4CABCu) goto L_08A4CABC;
    return;
L_08A4CABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08A4CAC4;
L_08A4CAC4:
    ctx.gpr[31] = (0x08A4CACCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08A4CACCu) goto L_08A4CACC;
    return;
L_08A4CACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A4CAE8;
      }
      goto L_08A4CAD8;
    }
L_08A4CAD8:
    ctx.gpr[31] = (0x08A4CAE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08A4CAE0u) goto L_08A4CAE0;
    return;
L_08A4CAE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[6] = (2229u << 16u);
    goto L_08A4CAE8;
L_08A4CAE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A4CAFCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9820));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 474u, 0x08A4B854u>(ctx, &aot_mem) && ctx.pc == 0x08A4CAFCu) goto L_08A4CAFC;
    return;
L_08A4CAFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CB0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-21000)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A4CB4C;
      }
      goto L_08A4CB44;
    }
L_08A4CB44:
    ctx.gpr[31] = (0x08A4CB4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08A4CB4Cu) goto L_08A4CB4C;
    return;
L_08A4CB4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6604));
    ctx.gpr[31] = (0x08A4CB64u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 395u, 0x08A4B388u>(ctx, &aot_mem) && ctx.pc == 0x08A4CB64u) goto L_08A4CB64;
    return;
L_08A4CB64:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A4CB70u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08A4CB70u) goto L_08A4CB70;
    return;
L_08A4CB70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CBB0;
      }
      goto L_08A4CB78;
    }
L_08A4CB78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] << 16u);
    ctx.gpr[6] = (43008u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] << 16u);
    ctx.gpr[16] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[7] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[18] & 65535u);
    ctx.gpr[19] = (ctx.gpr[19] | ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] | ctx.gpr[5]);
    ctx.gpr[31] = (0x08A4CBA8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BB54u>(ctx, &aot_mem) && ctx.pc == 0x08A4CBA8u) goto L_08A4CBA8;
    return;
L_08A4CBA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A4CBC4;
      }
      goto L_08A4CBB0;
    }
L_08A4CBB0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A4CBBCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08A4CBBCu) goto L_08A4CBBC;
    return;
L_08A4CBBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CC50;
      }
      goto L_08A4CBC4;
    }
L_08A4CBC4:
    ctx.gpr[31] = (0x08A4CBCCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 77u, 0x0890C66Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4CBCCu) goto L_08A4CBCC;
    return;
L_08A4CBCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CC44;
      }
      goto L_08A4CBD4;
    }
L_08A4CBD4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A4CBE0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 647u, 0x0890BA08u>(ctx, &aot_mem) && ctx.pc == 0x08A4CBE0u) goto L_08A4CBE0;
    return;
L_08A4CBE0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A4CC30;
      }
      goto L_08A4CBE8;
    }
L_08A4CBE8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A4CBF4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 647u, 0x0890BA08u>(ctx, &aot_mem) && ctx.pc == 0x08A4CBF4u) goto L_08A4CBF4;
    return;
L_08A4CBF4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A4CC04u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08A4CC04u) goto L_08A4CC04;
    return;
L_08A4CC04:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A4CC10u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 702u, 0x0890BE64u>(ctx, &aot_mem) && ctx.pc == 0x08A4CC10u) goto L_08A4CC10;
    return;
L_08A4CC10:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A4CC1Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x08A4CC1Cu) goto L_08A4CC1C;
    return;
L_08A4CC1C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A4CC28u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 702u, 0x0890BE64u>(ctx, &aot_mem) && ctx.pc == 0x08A4CC28u) goto L_08A4CC28;
    return;
L_08A4CC28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CC3C;
      }
      goto L_08A4CC30;
    }
L_08A4CC30:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A4CC3Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08A4CC3Cu) goto L_08A4CC3C;
    return;
L_08A4CC3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A4CBC4;
      }
      goto L_08A4CC44;
    }
L_08A4CC44:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A4CC50u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08A4CC50u) goto L_08A4CC50;
    return;
L_08A4CC50:
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
L_08A4CC70:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9844)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-9848)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-9840), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-9832), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-9836), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-9828), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-9824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CCE8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CCF0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CCF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4CD0Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A4CD0Cu) goto L_08A4CD0C;
    return;
L_08A4CD0C:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x08A4CD18u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A4CD18u) goto L_08A4CD18;
    return;
L_08A4CD18:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08A4CD24u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A4CD24u) goto L_08A4CD24;
    return;
L_08A4CD24:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08A4CD30u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A4CD30u) goto L_08A4CD30;
    return;
L_08A4CD30:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08A4CD3Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A4CD3Cu) goto L_08A4CD3C;
    return;
L_08A4CD3C:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08A4CD48u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A4CD48u) goto L_08A4CD48;
    return;
L_08A4CD48:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08A4CD54u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A4CD54u) goto L_08A4CD54;
    return;
L_08A4CD54:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08A4CD60u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A4CD60u) goto L_08A4CD60;
    return;
L_08A4CD60:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08A4CD6Cu);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A4CD6Cu) goto L_08A4CD6C;
    return;
L_08A4CD6C:
    ctx.gpr[4] = (0u | 19u);
    ctx.gpr[31] = (0x08A4CD78u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A4CD78u) goto L_08A4CD78;
    return;
L_08A4CD78:
    ctx.gpr[4] = (0u | 13u);
    ctx.gpr[31] = (0x08A4CD84u);
    ctx.gpr[5] = (65280u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A4CD84u) goto L_08A4CD84;
    return;
L_08A4CD84:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08A4CD90u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A4CD90u) goto L_08A4CD90;
    return;
L_08A4CD90:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CDCC;
      }
      goto L_08A4CDA0;
    }
L_08A4CDA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11096)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11092)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11100)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[4] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[31] = (0x08A4CDCCu);
    ctx.gpr[4] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A4CDCCu) goto L_08A4CDCC;
    return;
L_08A4CDCC:
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[31] = (0x08A4CDD8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A4CDD8u) goto L_08A4CDD8;
    return;
L_08A4CDD8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (18944u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[7] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (19200u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CE30:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CE3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2213u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4CE58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12752));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 201u, 0x08AA4FD4u>(ctx, &aot_mem) && ctx.pc == 0x08A4CE58u) goto L_08A4CE58;
    return;
L_08A4CE58:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CE68:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CE74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2213u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4CE90u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12696));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 116u, 0x08A5CFF4u>(ctx, &aot_mem) && ctx.pc == 0x08A4CE90u) goto L_08A4CE90;
    return;
L_08A4CE90:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CEA0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CEAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2213u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4CEC8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12640));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 56u, 0x08A0CDE0u>(ctx, &aot_mem) && ctx.pc == 0x08A4CEC8u) goto L_08A4CEC8;
    return;
L_08A4CEC8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CED8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4CEE8u);
    // nop
    goto L_08A4CE3C;
L_08A4CEE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CF04;
      }
      goto L_08A4CEF4;
    }
L_08A4CEF4:
    ctx.gpr[31] = (0x08A4CEFCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 131u, 0x0890CB34u>(ctx, &aot_mem) && ctx.pc == 0x08A4CEFCu) goto L_08A4CEFC;
    return;
L_08A4CEFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A4CF08;
      }
      goto L_08A4CF04;
    }
L_08A4CF04:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A4CF08;
L_08A4CF08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CF14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A4CF94;
      }
      goto L_08A4CF2C;
    }
L_08A4CF2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4CF48u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 167u, 0x0890CECCu>(ctx, &aot_mem) && ctx.pc == 0x08A4CF48u) goto L_08A4CF48;
    return;
L_08A4CF48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CF8C;
      }
      goto L_08A4CF50;
    }
L_08A4CF50:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A4CF9C;
      }
      goto L_08A4CF84;
    }
L_08A4CF84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D00C;
      }
      goto L_08A4CF8C;
    }
L_08A4CF8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4D00C;
      }
      goto L_08A4CF94;
    }
L_08A4CF94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4D00C;
      }
      goto L_08A4CF9C;
    }
L_08A4CF9C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    goto L_08A4CFC0;
L_08A4CFC0:
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[12] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08A4CFC0;
      }
      goto L_08A4D00C;
    }
L_08A4D00C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4D034u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 186u, 0x0890D018u>(ctx, &aot_mem) && ctx.pc == 0x08A4D034u) goto L_08A4D034;
    return;
L_08A4D034:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D04C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2213u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4D068u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12256));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 201u, 0x08AA4FD4u>(ctx, &aot_mem) && ctx.pc == 0x08A4D068u) goto L_08A4D068;
    return;
L_08A4D068:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D078:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4D094u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 184u, 0x0890CFF8u>(ctx, &aot_mem) && ctx.pc == 0x08A4D094u) goto L_08A4D094;
    return;
L_08A4D094:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D0BC;
      }
      goto L_08A4D0A0;
    }
L_08A4D0A0:
    ctx.gpr[5] = (2213u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D0B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12168));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 108u, 0x08A5CF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D0B4u) goto L_08A4D0B4;
    return;
L_08A4D0B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A4D0C4;
      }
      goto L_08A4D0BC;
    }
L_08A4D0BC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    goto L_08A4D0C4;
L_08A4D0C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D0D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (2213u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4D0F8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12168));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 108u, 0x08A5CF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D0F8u) goto L_08A4D0F8;
    return;
L_08A4D0F8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D108:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4D128u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 183u, 0x0890CFF0u>(ctx, &aot_mem) && ctx.pc == 0x08A4D128u) goto L_08A4D128;
    return;
L_08A4D128:
    ctx.gpr[4] = (ctx.gpr[17] << 6u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D1C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4D1E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A4D108;
L_08A4D1E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4D1F0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 276u, 0x08A1D818u>(ctx, &aot_mem) && ctx.pc == 0x08A4D1F0u) goto L_08A4D1F0;
    return;
L_08A4D1F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D204:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A4D244;
      }
      goto L_08A4D23C;
    }
L_08A4D23C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D35C;
      }
      goto L_08A4D244;
    }
L_08A4D244:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A4D254u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08A4CE3C;
L_08A4D254:
    ctx.gpr[31] = (0x08A4D25Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 131u, 0x0890CB34u>(ctx, &aot_mem) && ctx.pc == 0x08A4D25Cu) goto L_08A4D25C;
    return;
L_08A4D25C:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A4D268u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08A4D04C;
L_08A4D268:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A4D28Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 132u, 0x0890CB48u>(ctx, &aot_mem) && ctx.pc == 0x08A4D28Cu) goto L_08A4D28C;
    return;
L_08A4D28C:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A4D35C;
      }
      goto L_08A4D29C;
    }
L_08A4D29C:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[21] = (0u | 8u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[29] | 0u);
    goto L_08A4D2B8;
L_08A4D2B8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A4D2C8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08A4D1C4;
L_08A4D2C8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A4D2D8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08A4D108;
L_08A4D2D8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A4D2ECu);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 637u, 0x088B7E18u>(ctx, &aot_mem) && ctx.pc == 0x08A4D2ECu) goto L_08A4D2EC;
    return;
L_08A4D2EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D318;
      }
      goto L_08A4D308;
    }
L_08A4D308:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    goto L_08A4D318;
L_08A4D318:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D340;
      }
      goto L_08A4D324;
    }
L_08A4D324:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A4D344;
      }
      goto L_08A4D340;
    }
L_08A4D340:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08A4D344;
L_08A4D344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A4D2B8;
      }
      goto L_08A4D35C;
    }
L_08A4D35C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D38C:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
L_08A4D3A4:
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
L_08A4D3C4:
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
L_08A4D3E4:
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
L_08A4D400:
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
L_08A4D418:
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
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
L_08A4D430:
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
L_08A4D44C:
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
L_08A4D468:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D47C;
      }
      goto L_08A4D478;
    }
L_08A4D478:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A4D47C;
L_08A4D47C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D484:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D490:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D4A4:
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
L_08A4D4B4:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D4D0:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D4E8:
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
L_08A4D4F8:
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
L_08A4D514:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D530:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A4D578;
      }
      goto L_08A4D54C;
    }
L_08A4D54C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13604));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A4D564u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 514u, 0x0889E8F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4D564u) goto L_08A4D564;
    return;
L_08A4D564:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D578;
      }
      goto L_08A4D570;
    }
L_08A4D570:
    ctx.gpr[31] = (0x08A4D578u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 512u, 0x0889E8D4u>(ctx, &aot_mem) && ctx.pc == 0x08A4D578u) goto L_08A4D578;
    return;
L_08A4D578:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D58C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A4D5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08A4D5B0u) goto L_08A4D5B0;
    return;
L_08A4D5B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A4D5F0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08A4D5F0u) goto L_08A4D5F0;
    return;
L_08A4D5F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A4D604u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A4D604u) goto L_08A4D604;
    return;
L_08A4D604:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A4D644u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08A4D644u) goto L_08A4D644;
    return;
L_08A4D644:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D65C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(992), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(992)));
    ctx.gpr[6] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A4D6A8;
      }
      goto L_08A4D6A0;
    }
L_08A4D6A0:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(992), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A4D6A8;
L_08A4D6A8:
    ctx.gpr[31] = (0x08A4D6B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A4D6B0u) goto L_08A4D6B0;
    return;
L_08A4D6B0:
    ctx.gpr[31] = (0x08A4D6B8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1077u, 0x08A97EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A4D6B8u) goto L_08A4D6B8;
    return;
L_08A4D6B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D6D8;
      }
      goto L_08A4D6C0;
    }
L_08A4D6C0:
    ctx.gpr[31] = (0x08A4D6C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A4D6C8u) goto L_08A4D6C8;
    return;
L_08A4D6C8:
    ctx.gpr[31] = (0x08A4D6D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 7u, 0x08A9802Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D6D0u) goto L_08A4D6D0;
    return;
L_08A4D6D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D7B0;
      }
      goto L_08A4D6D8;
    }
L_08A4D6D8:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(984)));
    ctx.gpr[31] = (0x08A4D6E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A4D6E4u) goto L_08A4D6E4;
    return;
L_08A4D6E4:
    ctx.gpr[31] = (0x08A4D6ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1077u, 0x08A97EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A4D6ECu) goto L_08A4D6EC;
    return;
L_08A4D6EC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(984)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(984), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A4D734;
    }
    goto L_08A4D734;
L_08A4D734:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A4D748;
    }
    goto L_08A4D748;
L_08A4D748:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(984), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A4D790;
      }
      goto L_08A4D764;
    }
L_08A4D764:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(984), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A4D770u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A4D770u) goto L_08A4D770;
    return;
L_08A4D770:
    ctx.gpr[31] = (0x08A4D778u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 7u, 0x08A9802Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D778u) goto L_08A4D778;
    return;
L_08A4D778:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(980), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(988)));
      if (branch_taken) {
          goto L_08A4D7A8;
      }
      goto L_08A4D790;
    }
L_08A4D790:
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(988)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(980), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4D7A8;
L_08A4D7A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D7BC;
      }
      goto L_08A4D7B0;
    }
L_08A4D7B0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(980), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(984), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(988)));
    goto L_08A4D7BC;
L_08A4D7BC:
    ctx.gpr[31] = (0x08A4D7C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A4D7C4u) goto L_08A4D7C4;
    return;
L_08A4D7C4:
    ctx.gpr[31] = (0x08A4D7CCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 799u, 0x08A97230u>(ctx, &aot_mem) && ctx.pc == 0x08A4D7CCu) goto L_08A4D7CC;
    return;
L_08A4D7CC:
    ctx.gpr[4] = (0u - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(988)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[14];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(988), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08A4D81C;
    }
    goto L_08A4D81C;
L_08A4D81C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A4D830;
    }
    goto L_08A4D830;
L_08A4D830:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(988), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_08A4D850;
      }
      goto L_08A4D848;
    }
L_08A4D848:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
      if (branch_taken) {
          goto L_08A4D858;
      }
      goto L_08A4D850;
    }
L_08A4D850:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    goto L_08A4D858;
L_08A4D858:
    ctx.gpr[5] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (ctx.gpr[5] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(980)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D8AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4D8E8;
      }
      goto L_08A4D8D4;
    }
L_08A4D8D4:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A4D8E8;
L_08A4D8E8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    ctx.gpr[31] = (0x08A4D8F4u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(497)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 265u, 0x0887674Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D8F4u) goto L_08A4D8F4;
    return;
L_08A4D8F4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(632), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16172)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D91C;
      }
      goto L_08A4D914;
    }
L_08A4D914:
    ctx.gpr[31] = (0x08A4D91Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 819u, 0x08A2FA78u>(ctx, &aot_mem) && ctx.pc == 0x08A4D91Cu) goto L_08A4D91C;
    return;
L_08A4D91C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D92C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4D940u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 537u, 0x0889EA98u>(ctx, &aot_mem) && ctx.pc == 0x08A4D940u) goto L_08A4D940;
    return;
L_08A4D940:
    ctx.gpr[31] = (0x08A4D948u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A4D958;
L_08A4D948:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D958:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08A4D968;
L_08A4D968:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(860), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A4D968;
      }
      goto L_08A4D97C;
    }
L_08A4D97C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(860));
    ctx.gpr[31] = (0x08A4D988u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 601u, 0x08973D04u>(ctx, &aot_mem) && ctx.pc == 0x08A4D988u) goto L_08A4D988;
    return;
L_08A4D988:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D994:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(860)));
    ctx.gpr[31] = (0x08A4D9BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A4D9BCu) goto L_08A4D9BC;
    return;
L_08A4D9BC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D9F8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DA00:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08A4DA0C;
L_08A4DA0C:
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1288)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4DA68;
      }
      goto L_08A4DA28;
    }
L_08A4DA28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4DA5C;
      }
      goto L_08A4DA3C;
    }
L_08A4DA3C:
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A4DA0C;
      }
      goto L_08A4DA54;
    }
L_08A4DA54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DA70;
      }
      goto L_08A4DA5C;
    }
L_08A4DA5C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1288), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(1030), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08A4DA70;
      }
      goto L_08A4DA68;
    }
L_08A4DA68:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(1030), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08A4DA70;
      }
      goto L_08A4DA70;
    }
L_08A4DA70:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DA78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1288)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A4DAB8;
      }
      goto L_08A4DA90;
    }
L_08A4DA90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1032), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1036), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-9712)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(1030), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A4DBD0;
      }
      goto L_08A4DAB8;
    }
L_08A4DAB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1032)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1036)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-9716)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4DBD0;
      }
      goto L_08A4DAF8;
    }
L_08A4DAF8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 496u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1030)));
      if (branch_taken) {
          goto L_08A4DB20;
      }
      goto L_08A4DB08;
    }
L_08A4DB08:
    ctx.gpr[6] = (0u | 31u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 31 ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
        goto L_08A4DB18;
    }
    goto L_08A4DB18;
L_08A4DB18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
      if (branch_taken) {
          goto L_08A4DB5C;
      }
      goto L_08A4DB20;
    }
L_08A4DB20:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A4DB48;
      }
      goto L_08A4DB30;
    }
L_08A4DB30:
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 20 ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
        goto L_08A4DB40;
    }
    goto L_08A4DB40;
L_08A4DB40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
      if (branch_taken) {
          goto L_08A4DB5C;
      }
      goto L_08A4DB48;
    }
L_08A4DB48:
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 15 ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
        goto L_08A4DB58;
    }
    goto L_08A4DB58;
L_08A4DB58:
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    goto L_08A4DB5C;
L_08A4DB5C:
    if (static_cast<std::int32_t>(ctx.gpr[6]) <= 0) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08A4DBA8;
    }
    goto L_08A4DB64;
L_08A4DB64:
    ctx.gpr[7] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1024));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1032));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(1284)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(1288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A4DB64;
      }
      goto L_08A4DBA0;
    }
L_08A4DBA0:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1030)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08A4DBA8;
L_08A4DBA8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1032), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1036), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-9712)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A4DBD0;
      }
      goto L_08A4DBC8;
    }
L_08A4DBC8:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(1030), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08A4DBD0;
L_08A4DBD0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DBD8:
    ctx.gpr[11] = (2275u << 16u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(11088));
    goto L_08A4DBE4;
L_08A4DBE4:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[11]);
    ctx.gpr[2] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A4DBE4;
      }
      goto L_08A4DC08;
    }
L_08A4DC08:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    ctx.fpr[16] = std::sqrt(ctx.fpr[16]);
    ctx.fpr[18] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4DC54;
      }
      goto L_08A4DC4C;
    }
L_08A4DC4C:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    goto L_08A4DC54;
L_08A4DC54:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A4DE34;
      }
      goto L_08A4DC6C;
    }
L_08A4DC6C:
    ctx.gpr[4] = (ctx.gpr[8] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 1u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (17817u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (18804u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 9214u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (49520u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_08A4DCBC;
L_08A4DCBC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
        goto L_08A4DCDC;
    }
    goto L_08A4DCD4;
L_08A4DCD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4DCE0;
      }
      goto L_08A4DCDC;
    }
L_08A4DCDC:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    goto L_08A4DCE0;
L_08A4DCE0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DE20;
      }
      goto L_08A4DCE8;
    }
L_08A4DCE8:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4DE20;
      }
      goto L_08A4DCF4;
    }
L_08A4DCF4:
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(1030)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.gpr[3] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A4DE20;
      }
      goto L_08A4DD00;
    }
L_08A4DD00:
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[15];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[14];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[3];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4DE20;
      }
      goto L_08A4DD2C;
    }
L_08A4DD2C:
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4DE20;
      }
      goto L_08A4DD3C;
    }
L_08A4DD3C:
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4DE20;
      }
      goto L_08A4DD58;
    }
L_08A4DD58:
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DD80;
      }
      goto L_08A4DD64;
    }
L_08A4DD64:
    ctx.gpr[3] = (ctx.gpr[2] << 2u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[11]);
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A4DE20;
      }
      goto L_08A4DD80;
    }
L_08A4DD80:
    ctx.gpr[12] = (ctx.gpr[4] | 0u);
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[13] = (ctx.gpr[3] << 2u);
    goto L_08A4DD90;
L_08A4DD90:
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[11]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[13] + static_cast<std::uint32_t>(48));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(48));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[15];
    ctx.fpr[3] = ctx.fpr[3] - ctx.fpr[14];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[3];
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4DDD4;
      }
      goto L_08A4DDCC;
    }
L_08A4DDCC:
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[12] = (ctx.gpr[3] | 0u);
    goto L_08A4DDD4;
L_08A4DDD4:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[3] << 16u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[3]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[13] = (ctx.gpr[3] << 2u);
      if (branch_taken) {
          goto L_08A4DD90;
      }
      goto L_08A4DDEC;
    }
L_08A4DDEC:
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A4DE20;
      }
      goto L_08A4DDF4;
    }
L_08A4DDF4:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4DE14;
      }
      goto L_08A4DE04;
    }
L_08A4DE04:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[3] = (ctx.gpr[3] & 496u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DE20;
      }
      goto L_08A4DE14;
    }
L_08A4DE14:
    ctx.gpr[3] = (ctx.gpr[12] << 2u);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08A4DE20;
L_08A4DE20:
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1760));
      if (branch_taken) {
          goto L_08A4DCBC;
      }
      goto L_08A4DE34;
    }
L_08A4DE34:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DE3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4DE58u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08A4DE58u) goto L_08A4DE58;
    return;
L_08A4DE58:
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DE78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A4DEA8u);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 164u, 0x088A0D50u>(ctx, &aot_mem) && ctx.pc == 0x08A4DEA8u) goto L_08A4DEA8;
    return;
L_08A4DEA8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13604));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(896));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A4DEC4u);
    ctx.gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08A4DEC4u) goto L_08A4DEC4;
    return;
L_08A4DEC4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A4DEF8;
      }
      goto L_08A4DEE4;
    }
L_08A4DEE4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A4DEF8;
L_08A4DEF8:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(66))))));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(836), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(980), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(984), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(988), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(992), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(972), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(956), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4DF3Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A4D92C;
L_08A4DF3C:
    ctx.gpr[17] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24340)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24340)));
    ctx.gpr[31] = (0x08A4DF70u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 287u, 0x08A89EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A4DF70u) goto L_08A4DF70;
    return;
L_08A4DF70:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(340), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24340)));
    ctx.gpr[31] = (0x08A4DF80u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 292u, 0x08A89EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A4DF80u) goto L_08A4DF80;
    return;
L_08A4DF80:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(944), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(496));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(497));
    ctx.gpr[31] = (0x08A4DF94u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 276u, 0x0887683Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4DF94u) goto L_08A4DF94;
    return;
L_08A4DF94:
    ctx.gpr[31] = (0x08A4DF9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 283u, 0x08A89E94u>(ctx, &aot_mem) && ctx.pc == 0x08A4DF9Cu) goto L_08A4DF9C;
    return;
L_08A4DF9C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A4DFA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 285u, 0x08A89EA4u>(ctx, &aot_mem) && ctx.pc == 0x08A4DFA8u) goto L_08A4DFA8;
    return;
L_08A4DFA8:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4E008;
      }
      goto L_08A4DFE8;
    }
L_08A4DFE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-9756)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A4E014;
      }
      goto L_08A4E008;
    }
L_08A4E008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4E014;
L_08A4E014:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (16608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(976), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(948))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1024), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1008), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1012), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(948), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1028), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(960), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(949), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (50716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16374u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(952), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(964), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(968), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1030), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    goto L_08A4E0BC;
L_08A4E0BC:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1288), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E0BC;
      }
      goto L_08A4E0DC;
    }
L_08A4E0DC:
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(605), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-990));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (48928u << 16u);
      if (branch_taken) {
          goto L_08A4E128;
      }
      goto L_08A4E0F4;
    }
L_08A4E0F4:
    ctx.gpr[6] = (48800u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 55676u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (16032u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 55676u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(900), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(896), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(904), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(905), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A4E154;
      }
      goto L_08A4E128;
    }
L_08A4E128:
    ctx.gpr[6] = (ctx.gpr[6] | 55676u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (16160u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 55676u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(900), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(896), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(904), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(905), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A4E154;
L_08A4E154:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E17C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1696));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(296)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1660), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1636), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1644), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1648), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1652), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1656), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1664), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1668), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1672), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1676), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1680), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1684), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1688), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1692), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A4E1F8;
      }
      goto L_08A4E1D4;
    }
L_08A4E1D4:
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(312)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4E1F8;
      }
      goto L_08A4E1F4;
    }
L_08A4E1F4:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A4E1F8;
L_08A4E1F8:
    ctx.gpr[31] = (0x08A4E200u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A4DA00;
L_08A4E200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16253u << 16u);
      if (branch_taken) {
          goto L_08A4E228;
      }
      goto L_08A4E214;
    }
L_08A4E214:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[4] | 28836u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4E228;
L_08A4E228:
    ctx.gpr[31] = (0x08A4E230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A4E230u) goto L_08A4E230;
    return;
L_08A4E230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A4E2F0;
      }
      goto L_08A4E23C;
    }
L_08A4E23C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 196u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A4E2F0;
      }
      goto L_08A4E24C;
    }
L_08A4E24C:
    ctx.gpr[31] = (0x08A4E254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A4E254u) goto L_08A4E254;
    return;
L_08A4E254:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E2EC;
      }
      goto L_08A4E260;
    }
L_08A4E260:
    ctx.gpr[31] = (0x08A4E268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4E268u) goto L_08A4E268;
    return;
L_08A4E268:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A4E2EC;
      }
      goto L_08A4E274;
    }
L_08A4E274:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A4E2EC;
      }
      goto L_08A4E288;
    }
L_08A4E288:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(6664)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E2A0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(956)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E2EC;
      }
      goto L_08A4E2B8;
    }
L_08A4E2B8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 115u);
    ctx.gpr[31] = (0x08A4E2D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4E2D0u) goto L_08A4E2D0;
    return;
L_08A4E2D0:
    ctx.gpr[31] = (0x08A4E2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A4E2D8u) goto L_08A4E2D8;
    return;
L_08A4E2D8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 4095u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(956), ctx.gpr[4]);
    goto L_08A4E2EC;
L_08A4E2EC:
    ctx.gpr[4] = (2229u << 16u);
    goto L_08A4E2F0;
L_08A4E2F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11056)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11020)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11060)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (17279u << 16u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11024)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11064)));
    ctx.fpr[16] = ctx.fpr[17] + ctx.fpr[16];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11028)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[19] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A4E378;
      }
      goto L_08A4E370;
    }
L_08A4E370:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4E388;
      }
      goto L_08A4E378;
    }
L_08A4E378:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E388;
      }
      goto L_08A4E384;
    }
L_08A4E384:
    ctx.gpr[18] = (0u | 255u);
    goto L_08A4E388;
L_08A4E388:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A4E398;
      }
      goto L_08A4E390;
    }
L_08A4E390:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4E3A4;
      }
      goto L_08A4E398;
    }
L_08A4E398:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E3A4;
      }
      goto L_08A4E3A0;
    }
L_08A4E3A0:
    ctx.gpr[19] = (0u | 255u);
    goto L_08A4E3A4;
L_08A4E3A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A4E3B4;
      }
      goto L_08A4E3AC;
    }
L_08A4E3AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4E3C0;
      }
      goto L_08A4E3B4;
    }
L_08A4E3B4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E3C0;
      }
      goto L_08A4E3BC;
    }
L_08A4E3BC:
    ctx.gpr[20] = (0u | 255u);
    goto L_08A4E3C0;
L_08A4E3C0:
    ctx.gpr[31] = (0x08A4E3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A4E3C8u) goto L_08A4E3C8;
    return;
L_08A4E3C8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9692)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9696)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A4E3E0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A4E3E0u) goto L_08A4E3E0;
    return;
L_08A4E3E0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-9684)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-9688)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[5] = (16217u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11056)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11008)));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11060)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11012)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11064)));
    ctx.gpr[5] = (16230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11016)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[18] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[13];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A4E4B0;
      }
      goto L_08A4E4A8;
    }
L_08A4E4A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4E4C0;
      }
      goto L_08A4E4B0;
    }
L_08A4E4B0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E4C0;
      }
      goto L_08A4E4BC;
    }
L_08A4E4BC:
    ctx.gpr[18] = (0u | 255u);
    goto L_08A4E4C0;
L_08A4E4C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A4E4D0;
      }
      goto L_08A4E4C8;
    }
L_08A4E4C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4E4DC;
      }
      goto L_08A4E4D0;
    }
L_08A4E4D0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E4DC;
      }
      goto L_08A4E4D8;
    }
L_08A4E4D8:
    ctx.gpr[19] = (0u | 255u);
    goto L_08A4E4DC;
L_08A4E4DC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A4E4EC;
      }
      goto L_08A4E4E4;
    }
L_08A4E4E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4E4F8;
      }
      goto L_08A4E4EC;
    }
L_08A4E4EC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E4F8;
      }
      goto L_08A4E4F4;
    }
L_08A4E4F4:
    ctx.gpr[20] = (0u | 255u);
    goto L_08A4E4F8;
L_08A4E4F8:
    ctx.gpr[31] = (0x08A4E500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A4E500u) goto L_08A4E500;
    return;
L_08A4E500:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9676)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9680)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A4E518u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A4E518u) goto L_08A4E518;
    return;
L_08A4E518:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-9668)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-9672)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11056)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11008)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11060)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11012)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11064)));
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11016)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[18] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[13];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A4E5E4;
      }
      goto L_08A4E5DC;
    }
L_08A4E5DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4E5F4;
      }
      goto L_08A4E5E4;
    }
L_08A4E5E4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E5F4;
      }
      goto L_08A4E5F0;
    }
L_08A4E5F0:
    ctx.gpr[18] = (0u | 255u);
    goto L_08A4E5F4;
L_08A4E5F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A4E604;
      }
      goto L_08A4E5FC;
    }
L_08A4E5FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4E610;
      }
      goto L_08A4E604;
    }
L_08A4E604:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E610;
      }
      goto L_08A4E60C;
    }
L_08A4E60C:
    ctx.gpr[19] = (0u | 255u);
    goto L_08A4E610;
L_08A4E610:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A4E620;
      }
      goto L_08A4E618;
    }
L_08A4E618:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4E62C;
      }
      goto L_08A4E620;
    }
L_08A4E620:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E62C;
      }
      goto L_08A4E628;
    }
L_08A4E628:
    ctx.gpr[20] = (0u | 255u);
    goto L_08A4E62C;
L_08A4E62C:
    ctx.gpr[31] = (0x08A4E634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A4E634u) goto L_08A4E634;
    return;
L_08A4E634:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[31] = (0x08A4E650u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 579u, 0x0889ED4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4E650u) goto L_08A4E650;
    return;
L_08A4E650:
    ctx.gpr[31] = (0x08A4E658u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 72u, 0x088A05C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4E658u) goto L_08A4E658;
    return;
L_08A4E658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (ctx.gpr[4] & 496u);
    ctx.gpr[18] = (ctx.gpr[18] >> 4u);
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E8A0;
      }
      goto L_08A4E670;
    }
L_08A4E670:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A4E8A0;
      }
      goto L_08A4E67C;
    }
L_08A4E67C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A4E734;
      }
      goto L_08A4E684;
    }
L_08A4E684:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A4E780;
      }
      goto L_08A4E68C;
    }
L_08A4E68C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A4E7AC;
      }
      goto L_08A4E694;
    }
L_08A4E694:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A4E7AC;
      }
      goto L_08A4E69C;
    }
L_08A4E69C:
    ctx.gpr[4] = (50716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16374u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(949), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(952), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A4E6BCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A4E6BCu) goto L_08A4E6BC;
    return;
L_08A4E6BC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9660)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9664)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A4E6D4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x08A4E6D4u) goto L_08A4E6D4;
    return;
L_08A4E6D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A4E72C;
      }
      goto L_08A4E6DC;
    }
L_08A4E6DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A4E6F8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4E6F8u) goto L_08A4E6F8;
    return;
L_08A4E6F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 196u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4E710;
      }
      goto L_08A4E708;
    }
L_08A4E708:
    ctx.gpr[31] = (0x08A4E710u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 390u, 0x0885251Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4E710u) goto L_08A4E710;
    return;
L_08A4E710:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7812)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A4E72C;
      }
      goto L_08A4E724;
    }
L_08A4E724:
    ctx.gpr[31] = (0x08A4E72Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 221u, 0x08861A40u>(ctx, &aot_mem) && ctx.pc == 0x08A4E72Cu) goto L_08A4E72C;
    return;
L_08A4E72C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E8A0;
      }
      goto L_08A4E734;
    }
L_08A4E734:
    ctx.gpr[4] = (50716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16374u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(949), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4E750u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(952), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 376u, 0x0891DF64u>(ctx, &aot_mem) && ctx.pc == 0x08A4E750u) goto L_08A4E750;
    return;
L_08A4E750:
    ctx.gpr[31] = (0x08A4E758u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 222u, 0x08A0DBD0u>(ctx, &aot_mem) && ctx.pc == 0x08A4E758u) goto L_08A4E758;
    return;
L_08A4E758:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 413u, 0x08A51E40u>(ctx, &aot_mem); return;
      }
      goto L_08A4E780;
    }
L_08A4E780:
    ctx.gpr[4] = (50716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16374u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(949), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4E79Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(952), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 376u, 0x0891DF64u>(ctx, &aot_mem) && ctx.pc == 0x08A4E79Cu) goto L_08A4E79C;
    return;
L_08A4E79C:
    ctx.gpr[31] = (0x08A4E7A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 179u, 0x089F5C60u>(ctx, &aot_mem) && ctx.pc == 0x08A4E7A4u) goto L_08A4E7A4;
    return;
L_08A4E7A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E8A0;
      }
      goto L_08A4E7AC;
    }
L_08A4E7AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A4E814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 205u, 0x089D5974u>(ctx, &aot_mem) && ctx.pc == 0x08A4E814u) goto L_08A4E814;
    return;
L_08A4E814:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9744)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4E898;
      }
      goto L_08A4E858;
    }
L_08A4E858:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 413u, 0x08A51E40u>(ctx, &aot_mem); return;
      }
      goto L_08A4E898;
    }
L_08A4E898:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E8A0;
      }
      goto L_08A4E8A0;
    }
L_08A4E8A0:
    ctx.gpr[31] = (0x08A4E8A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 286u, 0x08A89EACu>(ctx, &aot_mem) && ctx.pc == 0x08A4E8A8u) goto L_08A4E8A8;
    return;
L_08A4E8A8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    ctx.gpr[4] = (16840u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4EA78;
      }
      goto L_08A4E8C8;
    }
L_08A4E8C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4EA78;
      }
      goto L_08A4E8DC;
    }
L_08A4E8DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4EA78;
      }
      goto L_08A4E8F8;
    }
L_08A4E8F8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
      if (branch_taken) {
          goto L_08A4E944;
      }
      goto L_08A4E908;
    }
L_08A4E908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E944;
      }
      goto L_08A4E918;
    }
L_08A4E918:
    ctx.gpr[31] = (0x08A4E920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 177u, 0x08844EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A4E920u) goto L_08A4E920;
    return;
L_08A4E920:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4E944;
      }
      goto L_08A4E938;
    }
L_08A4E938:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A4E944;
L_08A4E944:
    ctx.gpr[31] = (0x08A4E94Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A4E94Cu) goto L_08A4E94C;
    return;
L_08A4E94C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A4E9B0;
      }
      goto L_08A4E954;
    }
L_08A4E954:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (16840u << 16u);
      if (branch_taken) {
          goto L_08A4E98C;
      }
      goto L_08A4E964;
    }
L_08A4E964:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A4EA38;
      }
      goto L_08A4E98C;
    }
L_08A4E98C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A4EA38;
      }
      goto L_08A4E9B0;
    }
L_08A4E9B0:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4E9E0;
      }
      goto L_08A4E9C8;
    }
L_08A4E9C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E9E0;
      }
      goto L_08A4E9D4;
    }
L_08A4E9D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (0x08A4E9E0u);
    ctx.gpr[5] = (0u | 146u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4E9E0u) goto L_08A4E9E0;
    return;
L_08A4E9E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (16840u << 16u);
      if (branch_taken) {
          goto L_08A4EA18;
      }
      goto L_08A4E9F0;
    }
L_08A4E9F0:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A4EA38;
      }
      goto L_08A4EA18;
    }
L_08A4EA18:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4EA38;
L_08A4EA38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4EA78;
      }
      goto L_08A4EA50;
    }
L_08A4EA50:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4EA78;
      }
      goto L_08A4EA64;
    }
L_08A4EA64:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(968), ctx.gpr[4]);
    goto L_08A4EA78;
L_08A4EA78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17382u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F03C;
      }
      goto L_08A4EA94;
    }
L_08A4EA94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A4F03C;
      }
      goto L_08A4EAA8;
    }
L_08A4EAA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08A4EAD4;
    }
    goto L_08A4EAD4;
L_08A4EAD4:
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A4F03C;
      }
      goto L_08A4EAEC;
    }
L_08A4EAEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08A4EB18;
    }
    goto L_08A4EB18;
L_08A4EB18:
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F03C;
      }
      goto L_08A4EB30;
    }
L_08A4EB30:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16204u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 195 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 196 ? 1u : 0u);
        goto L_08A4EBF0;
    }
    goto L_08A4EB78;
L_08A4EB78:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 194 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EC68;
      }
      goto L_08A4EB84;
    }
L_08A4EB84:
    ctx.gpr[4] = (49088u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[6] = (15779u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A4EBE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4EBE8u) goto L_08A4EBE8;
    return;
L_08A4EBE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4ECF4;
      }
      goto L_08A4EBF0;
    }
L_08A4EBF0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EB84;
      }
      goto L_08A4EBF8;
    }
L_08A4EBF8:
    ctx.gpr[4] = (49158u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[6] = (15759u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A4EC60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4EC60u) goto L_08A4EC60;
    return;
L_08A4EC60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4ECF4;
      }
      goto L_08A4EC68;
    }
L_08A4EC68:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49177u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[6] = (15692u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A4ECD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08A4ECD4u) goto L_08A4ECD4;
    return;
L_08A4ECD4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4ECF4;
L_08A4ECF4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4EF68;
      }
      goto L_08A4ED40;
    }
L_08A4ED40:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (15436u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A4ED7Cu);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08A4ED7Cu) goto L_08A4ED7C;
    return;
L_08A4ED7C:
    ctx.fpr[14] = ctx.fpr[28] - ctx.fpr[26];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (0u | 27u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A4EDB8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08A4EDB8u) goto L_08A4EDB8;
    return;
L_08A4EDB8:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (48928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[4] = (16160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A4EDE0u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08A4EDE0u) goto L_08A4EDE0;
    return;
L_08A4EDE0:
    ctx.fpr[14] = ctx.fpr[28] - ctx.fpr[26];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A4EE00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08A4EE00u) goto L_08A4EE00;
    return;
L_08A4EE00:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A4EE28u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08A4EE28u) goto L_08A4EE28;
    return;
L_08A4EE28:
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[28];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[28] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (0u | 56u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A4EE74u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08A4EE74u) goto L_08A4EE74;
    return;
L_08A4EE74:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(964)));
      if (branch_taken) {
          goto L_08A4EED8;
      }
      goto L_08A4EEAC;
    }
L_08A4EEAC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A4EF14;
      }
      goto L_08A4EED8;
    }
L_08A4EED8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_08A4EF14;
L_08A4EF14:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A4EF2C;
      }
      goto L_08A4EF20;
    }
L_08A4EF20:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08A4EF2C;
L_08A4EF2C:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (17820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(964), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A4EF68;
      }
      goto L_08A4EF4C;
    }
L_08A4EF4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(968)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(280));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A4EF68u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4EF68u) goto L_08A4EF68;
    return;
L_08A4EF68:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4EFC4;
      }
      goto L_08A4EF80;
    }
L_08A4EF80:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EFC4;
      }
      goto L_08A4EF9C;
    }
L_08A4EF9C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (0u | 33u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A4EFC4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08A4EFC4u) goto L_08A4EFC4;
    return;
L_08A4EFC4:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F03C;
      }
      goto L_08A4EFDC;
    }
L_08A4EFDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17347u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F03C;
      }
      goto L_08A4EFF8;
    }
L_08A4EFF8:
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 55u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A4F03Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08A4F03Cu) goto L_08A4F03C;
    return;
L_08A4F03C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] & 2u);
    ctx.gpr[31] = (0x08A4F050u);
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 222u, 0x08A0DBD0u>(ctx, &aot_mem) && ctx.pc == 0x08A4F050u) goto L_08A4F050;
    return;
L_08A4F050:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A4F08Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25472));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 620u, 0x0883B144u>(ctx, &aot_mem) && ctx.pc == 0x08A4F08Cu) goto L_08A4F08C;
    return;
L_08A4F08C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 384u, 0x08A51C80u>(ctx, &aot_mem); return;
      }
      goto L_08A4F094;
    }
L_08A4F094:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15363u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(948))))));
        goto L_08A4F178;
    }
    goto L_08A4F0D4;
L_08A4F0D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A4F0F8u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A4F0F8u) goto L_08A4F0F8;
    return;
L_08A4F0F8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9660)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9664)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A4F110u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x08A4F110u) goto L_08A4F110;
    return;
L_08A4F110:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A4F164;
      }
      goto L_08A4F118;
    }
L_08A4F118:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A4F1A0;
      }
      goto L_08A4F12C;
    }
L_08A4F12C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 43u);
    ctx.gpr[31] = (0x08A4F15Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F15Cu) goto L_08A4F15C;
    return;
L_08A4F15C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F1A0;
      }
      goto L_08A4F164;
    }
L_08A4F164:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A4F1A0;
      }
      goto L_08A4F178;
    }
L_08A4F178:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A4F1A0;
L_08A4F1A0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25472));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1008));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A4F278;
      }
      goto L_08A4F1D0;
    }
L_08A4F1D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F278;
      }
      goto L_08A4F1EC;
    }
L_08A4F1EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F278;
      }
      goto L_08A4F210;
    }
L_08A4F210:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F278;
      }
      goto L_08A4F234;
    }
L_08A4F234:
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (0x08A4F270u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4F270u) goto L_08A4F270;
    return;
L_08A4F270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F28C;
      }
      goto L_08A4F278;
    }
L_08A4F278:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08A4F28Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4F28Cu) goto L_08A4F28C;
    return;
L_08A4F28C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F2DC;
      }
      goto L_08A4F294;
    }
L_08A4F294:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1012)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[31] = (0x08A4F2DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A4F2DCu) goto L_08A4F2DC;
    return;
L_08A4F2DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4F534;
      }
      goto L_08A4F2EC;
    }
L_08A4F2EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(972)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A4F3D8;
      }
      goto L_08A4F304;
    }
L_08A4F304:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A4F534;
      }
      goto L_08A4F320;
    }
L_08A4F320:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (48665u << 16u);
      if (branch_taken) {
          goto L_08A4F534;
      }
      goto L_08A4F33C;
    }
L_08A4F33C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (15395u << 16u);
      if (branch_taken) {
          goto L_08A4F534;
      }
      goto L_08A4F358;
    }
L_08A4F358:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15363u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          goto L_08A4F534;
      }
      goto L_08A4F398;
    }
L_08A4F398:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15363u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F534;
      }
      goto L_08A4F3D8;
    }
L_08A4F3D8:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (47410u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16903u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A4F448u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A4F448u) goto L_08A4F448;
    return;
L_08A4F448:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[31] = (0x08A4F4ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4F4ACu) goto L_08A4F4AC;
    return;
L_08A4F4AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(972)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F4F8;
      }
      goto L_08A4F4C4;
    }
L_08A4F4C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A4F4E4;
      }
      goto L_08A4F4D8;
    }
L_08A4F4D8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A4F4E4;
L_08A4F4E4:
    ctx.gpr[4] = (17302u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(972), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A4F534;
      }
      goto L_08A4F4F8;
    }
L_08A4F4F8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A4F518;
      }
      goto L_08A4F50C;
    }
L_08A4F50C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A4F518;
L_08A4F518:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(972)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F534;
      }
      goto L_08A4F52C;
    }
L_08A4F52C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(972), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4F534;
L_08A4F534:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F6F0;
      }
      goto L_08A4F53C;
    }
L_08A4F53C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F6F0;
      }
      goto L_08A4F54C;
    }
L_08A4F54C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F6F0;
      }
      goto L_08A4F564;
    }
L_08A4F564:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(944)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A4F5CC;
      }
      goto L_08A4F5B4;
    }
L_08A4F5B4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A4F5FC;
      }
      goto L_08A4F5CC;
    }
L_08A4F5CC:
    ctx.gpr[4] = (15692u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F5F8;
      }
      goto L_08A4F5EC;
    }
L_08A4F5EC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A4F5FC;
      }
      goto L_08A4F5F8;
    }
L_08A4F5F8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08A4F5FC;
L_08A4F5FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(944)));
    ctx.gpr[5] = (15363u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F664;
      }
      goto L_08A4F638;
    }
L_08A4F638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(944)));
    ctx.gpr[5] = (15363u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08A4F664;
L_08A4F664:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[31] = (0x08A4F694u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4F694u) goto L_08A4F694;
    return;
L_08A4F694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(944)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[31] = (0x08A4F6F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A4F6F0u) goto L_08A4F6F0;
    return;
L_08A4F6F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 46u, 0x08A502B4u>(ctx, &aot_mem); return;
      }
      goto L_08A4F704;
    }
L_08A4F704:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F75C;
      }
      goto L_08A4F728;
    }
L_08A4F728:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 46u, 0x08A502B4u>(ctx, &aot_mem); return;
      }
      goto L_08A4F75C;
    }
L_08A4F75C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F7AC;
      }
      goto L_08A4F76C;
    }
L_08A4F76C:
    ctx.gpr[31] = (0x08A4F774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A4F774u) goto L_08A4F774;
    return;
L_08A4F774:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9652)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9656)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A4F78Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x08A4F78Cu) goto L_08A4F78C;
    return;
L_08A4F78C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A4F7AC;
      }
      goto L_08A4F794;
    }
L_08A4F794:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A4F7ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A4DA78;
L_08A4F7AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A4F854;
      }
      goto L_08A4F7C0;
    }
L_08A4F7C0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x08A4F7F0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A4F7F0u) goto L_08A4F7F0;
    return;
L_08A4F7F0:
    ctx.gpr[31] = (0x08A4F7F8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1064u, 0x08A97E3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4F7F8u) goto L_08A4F7F8;
    return;
L_08A4F7F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4F80C;
      }
      goto L_08A4F800;
    }
L_08A4F800:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A4F80C;
L_08A4F80C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[13] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F834;
      }
      goto L_08A4F82C;
    }
L_08A4F82C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A4F854;
      }
      goto L_08A4F834;
    }
L_08A4F834:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4F854;
      }
      goto L_08A4F84C;
    }
L_08A4F84C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A4F854;
L_08A4F854:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(944)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
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
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
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
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[31] = (0x08A4F944u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 287u, 0x0890DDACu>(ctx, &aot_mem) && ctx.pc == 0x08A4F944u) goto L_08A4F944;
    return;
L_08A4F944:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 45u, 0x08A502A4u>(ctx, &aot_mem); return;
      }
      goto L_08A4F968;
    }
L_08A4F968:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A4F9A8;
      }
      goto L_08A4F998;
    }
L_08A4F998:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A4F9B4;
      }
      goto L_08A4F9A8;
    }
L_08A4F9A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4F9B4;
L_08A4F9B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 2u, 0x08A50004u>(ctx, &aot_mem); return;
      }
      goto L_08A4F9E8;
    }
L_08A4F9E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 2u, 0x08A50004u>(ctx, &aot_mem); return;
      }
      goto L_08A4F9F8;
    }
L_08A4F9F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4FA1C;
      }
      goto L_08A4FA18;
    }
L_08A4FA18:
    ctx.gpr[19] = (0u | 1u);
    goto L_08A4FA1C;
L_08A4FA1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08A4FA44;
      }
      goto L_08A4FA38;
    }
L_08A4FA38:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08A4FA48;
      }
      goto L_08A4FA44;
    }
L_08A4FA44:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    goto L_08A4FA48;
L_08A4FA48:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16928u << 16u);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16281u << 16u);
      if (branch_taken) {
          goto L_08A4FB5C;
      }
      goto L_08A4FB34;
    }
L_08A4FB34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4FB5C;
L_08A4FB5C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FC68;
      }
      goto L_08A4FB64;
    }
L_08A4FB64:
    ctx.gpr[20] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x08A4FB9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4FB9Cu) goto L_08A4FB9C;
    return;
L_08A4FB9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(944)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[30] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A4FBD4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_08A4D430;
L_08A4FBD4:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x08A4FBE4u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_08A4D418;
L_08A4FBE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.gpr[31] = (0x08A4FC04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A4FC04u) goto L_08A4FC04;
    return;
L_08A4FC04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4FC10u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08A4D3E4;
L_08A4FC10:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A4FC1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 284u, 0x08A89E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4FC1Cu) goto L_08A4FC1C;
    return;
L_08A4FC1C:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A4FC30u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A4D430;
L_08A4FC30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A4FC40u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08A4D44C;
L_08A4FC40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A4FC60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A4FC60u) goto L_08A4FC60;
    return;
L_08A4FC60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FCE8;
      }
      goto L_08A4FC68;
    }
L_08A4FC68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4FCA0;
      }
      goto L_08A4FC80;
    }
L_08A4FC80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A4FCA0;
L_08A4FCA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4FCC0;
      }
      goto L_08A4FCB8;
    }
L_08A4FCB8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4FCC0;
L_08A4FCC0:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[31] = (0x08A4FCD4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7864)));
    goto L_08A4D44C;
L_08A4FCD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[31] = (0x08A4FCE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4FCE8u) goto L_08A4FCE8;
    return;
L_08A4FCE8:
    ctx.gpr[6] = (48419u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 55050u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A4FD00u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    goto L_08A4D430;
L_08A4FD00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4FFFC;
      }
      goto L_08A4FD18;
    }
L_08A4FD18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A4FE78;
      }
      goto L_08A4FD28;
    }
L_08A4FD28:
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
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4FD74;
      }
      goto L_08A4FD5C;
    }
L_08A4FD5C:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A4FD78;
      }
      goto L_08A4FD74;
    }
L_08A4FD74:
    ctx.gpr[20] = (0u | 1u);
    goto L_08A4FD78;
L_08A4FD78:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
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
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A4FDC4u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    goto L_08A4D3A4;
L_08A4FDC4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A4FDD0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08A4D4E8;
L_08A4FDD0:
    ctx.gpr[31] = (0x08A4FDD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4FDD8u) goto L_08A4FDD8;
    return;
L_08A4FDD8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A4FDE8u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    goto L_08A4D400;
L_08A4FDE8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.gpr[31] = (0x08A4FDF4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08A4D4A4;
L_08A4FDF4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FE0C;
      }
      goto L_08A4FDFC;
    }
L_08A4FDFC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A4FE14;
      }
      goto L_08A4FE0C;
    }
L_08A4FE0C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4FE14;
L_08A4FE14:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[31] = (0x08A4FE20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4FE20u) goto L_08A4FE20;
    return;
L_08A4FE20:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A4FE2Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08A4D4A4;
L_08A4FE2C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[31] = (0x08A4FE38u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08A4FE38u) goto L_08A4FE38;
    return;
L_08A4FE38:
    ctx.gpr[4] = (16166u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A4FE60u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A4D4A4;
L_08A4FE60:
    ctx.gpr[5] = (16192u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A4FE70u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08A4D4F8;
L_08A4FE70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FFFC;
      }
      goto L_08A4FE78;
    }
L_08A4FE78:
    ctx.gpr[31] = (0x08A4FE80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 746u, 0x08A2F708u>(ctx, &aot_mem) && ctx.pc == 0x08A4FE80u) goto L_08A4FE80;
    return;
L_08A4FE80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FFFC;
      }
      goto L_08A4FE88;
    }
L_08A4FE88:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4FFFC;
      }
      goto L_08A4FEA4;
    }
L_08A4FEA4:
    ctx.gpr[31] = (0x08A4FEACu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 523u, 0x08927014u>(ctx, &aot_mem) && ctx.pc == 0x08A4FEACu) goto L_08A4FEAC;
    return;
L_08A4FEAC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4FFFC;
      }
      goto L_08A4FED8;
    }
L_08A4FED8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.gpr[4] = (16480u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (15477u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (16544u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A4FF40u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A4DE3C;
L_08A4FF40:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08A4FF58u);
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A4DE3C;
L_08A4FF58:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[23] = (0u | 500u);
    ctx.gpr[4] = (0u | 45u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08A4FF8Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4FF8Cu) goto L_08A4FF8C;
    return;
L_08A4FF8C:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.gpr[6] = (16192u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A4FFA4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08A4D44C;
L_08A4FFA4:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08A4FFB4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A4DE3C;
L_08A4FFB4:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08A4FFCCu);
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A4DE3C;
L_08A4FFCC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[11] = (0u | 3u);
    ctx.gpr[31] = (0x08A4FFFCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4FFFCu) goto L_08A4FFFC;
    return;
L_08A4FFFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 3u, 0x08A50008u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 2u, 0x08A50004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0146(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0146_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_146(Runtime &runtime) {
    runtime.register_generated_unit(146u, 0x08A4C000u, 16384u, &recomp_unit_0146, &recomp_unit_0146_entry);
    runtime.register_function(0x08A4C004u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C020u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C034u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C06Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C094u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C0B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C0BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C0C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C0CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C0D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C0DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C0ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C104u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C128u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C138u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C140u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C154u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C160u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C180u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C1B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C1C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C1DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C1E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C21Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C224u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C22Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C238u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C240u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C248u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C24Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C25Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C26Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C280u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C290u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C2FCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C314u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C328u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C344u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C34Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C358u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C364u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C36Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C374u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C37Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C388u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C394u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C39Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C3A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C3ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C3D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C3E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C3E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C3F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C3FCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C41Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C428u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C444u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C454u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C460u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C46Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C478u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C484u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C494u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C49Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C4BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C4CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C4D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C4F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C50Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C520u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C524u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C530u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C548u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C55Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C568u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C578u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C58Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C598u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C5A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C5C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C5DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C5F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C614u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C620u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C628u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C63Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C640u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C65Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C678u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C680u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C68Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C694u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C6A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C6B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C6C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C6C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C6D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C6ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C700u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C720u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C734u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C740u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C748u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C754u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C75Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C768u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C774u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C780u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C788u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C794u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C798u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C7A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C7C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C7F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C80Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C818u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C820u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C82Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C838u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C84Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C860u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C86Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C878u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C884u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C890u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C89Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C8B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C8D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C8E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C904u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C90Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C914u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C924u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C92Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C938u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C948u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C958u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C964u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C970u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C974u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C990u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C9B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C9C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C9D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C9E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C9ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C9F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4C9FCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA04u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA0Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA2Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA34u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA40u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA50u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA60u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA6Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA78u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CA98u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CAB4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CABCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CAC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CACCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CAD8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CAE0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CAE8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CAFCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB0Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB44u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB64u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB70u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CB78u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBB0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBBCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBCCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBD4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBE0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBE8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CBF4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC04u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC10u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC1Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC28u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC3Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC44u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC50u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CC70u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CCE8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CCF0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CCF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD0Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD18u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD24u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD3Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD48u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD54u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD60u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD6Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD78u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD84u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CD90u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CDA0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CDCCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CDD8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE3Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE58u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE74u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CE90u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CEA0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CEACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CEC8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CED8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CEE8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CEF4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CEFCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF04u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF08u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF2Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF48u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF50u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF84u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF8Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CF9Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4CFC0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D00Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D020u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D034u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D04Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D068u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D078u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D094u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D0A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D0B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D0BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D0C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D0D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D0F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D108u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D128u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D1C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D1E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D1F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D204u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D23Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D244u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D254u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D25Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D268u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D28Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D29Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D2B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D2C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D2D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D2ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D308u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D318u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D324u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D340u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D344u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D35Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D38Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D3A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D3C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D3E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D400u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D418u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D430u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D44Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D468u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D478u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D47Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D484u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D490u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D4F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D514u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D530u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D54Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D564u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D570u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D578u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D58Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D5B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D5F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D604u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D644u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D65Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D6ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D734u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D748u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D764u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D770u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D778u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D790u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D7A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D7B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D7BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D7C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D7CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D81Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D830u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D848u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D850u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D858u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D8ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D8D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D8E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D8F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D914u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D91Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D92Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D940u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D948u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D958u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D968u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D97Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D988u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D994u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D9BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4D9F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA00u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA0Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA28u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA3Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA54u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA5Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA70u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA78u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DA90u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DAB8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DAF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB08u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB18u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB20u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB40u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB48u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB58u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB5Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DB64u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBA0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBC8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBD0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBD8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DBE4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC08u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC54u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DC6Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCBCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCD4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCDCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCE0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCE8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DCF4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD00u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD2Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD3Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD58u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD64u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD80u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DD90u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDCCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDD4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DDF4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE04u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE20u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE34u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE3Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE58u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DE78u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DEA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DEC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DEE4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DEF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF3Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF70u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF80u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DF9Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DFA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4DFE8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E008u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E014u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E0BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E0DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E0F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E128u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E154u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E17Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E1D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E1F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E1F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E200u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E214u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E228u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E230u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E23Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E24Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E254u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E260u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E268u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E274u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E288u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E2A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E2B8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E2D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E2D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E2ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E2F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E370u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E378u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E384u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E388u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E390u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E398u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E3A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E3A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E3ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E3B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E3BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E3C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E3C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E3E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E4F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E500u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E518u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E5DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E5E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E5F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E5F4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E5FCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E604u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E60Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E610u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E618u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E620u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E628u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E62Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E634u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E650u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E658u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E670u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E67Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E684u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E68Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E694u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E69Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E6BCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E6D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E6DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E6F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E708u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E710u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E724u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E72Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E734u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E750u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E758u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E780u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E79Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E7A4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E7ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E814u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E858u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E898u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E8A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E8A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E8C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E8DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E8F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E908u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E918u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E920u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E938u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E944u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E94Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E954u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E964u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E98Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E9B0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E9C8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E9D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E9E0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4E9F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA18u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA38u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA50u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA64u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA78u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EA94u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EAA8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EAD4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EAECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EB18u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EB30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EB78u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EB84u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EBE8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EBF0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EBF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EC60u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EC68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ECD4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ECF4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ED40u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4ED7Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EDB8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EDE0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE00u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE28u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EE74u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EEACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EED8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF20u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF2Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF4Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF80u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EF9Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EFC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EFDCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4EFF8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F03Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F050u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F08Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F094u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F0D4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F0F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F110u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F118u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F12Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F15Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F164u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F178u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F1A0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F1D0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F1ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F210u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F234u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F270u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F278u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F28Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F294u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F2DCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F2ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F304u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F320u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F33Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F358u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F398u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F3D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F448u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F4ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F4C4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F4D8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F4E4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F4F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F50Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F518u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F52Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F534u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F53Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F54Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F564u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F5B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F5CCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F5ECu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F5F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F5FCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F638u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F664u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F694u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F6F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F704u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F728u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F75Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F76Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F774u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F78Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F794u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F7ACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F7C0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F7F0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F7F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F800u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F80Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F82Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F834u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F84Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F854u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F944u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F968u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F998u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F9A8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F9B4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F9E8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4F9F8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA18u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA1Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA38u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA44u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FA48u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB34u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB5Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB64u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FB9Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FBD4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FBE4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC04u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC10u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC1Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC30u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC40u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC60u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC68u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FC80u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCA0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCB8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCC0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCD4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FCE8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD00u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD18u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD28u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD5Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD74u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FD78u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDC4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDD0u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDD8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDE8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDF4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FDFCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE0Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE14u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE20u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE2Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE38u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE60u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE70u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE78u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE80u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FE88u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FEA4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FEACu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FED8u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF40u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF58u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FF8Cu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FFA4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FFB4u, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FFCCu, &recomp_unit_0146, "recomp_unit_0146");
    runtime.register_function(0x08A4FFFCu, &recomp_unit_0146, "recomp_unit_0146");
}
} // namespace psprecomp
