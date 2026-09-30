#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0048[4094] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15,
    0, 16, 0, 17, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 26, 0, 27, 28, 0,
    0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0,
    0, 0, 35, 0, 0, 0, 36, 0, 37, 0, 38, 0, 0, 39, 0, 40, 41, 0, 0, 0, 0, 42, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0,
    0, 0, 0, 46, 0, 47, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 54, 0, 0, 0, 0, 0, 55, 0, 56, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 73, 0, 0, 0, 0, 0, 74, 0, 75, 76, 0, 77,
    0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0,
    0, 0, 0, 0, 83, 0, 84, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0,
    0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92,
    0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 96, 0, 97, 0, 98, 0, 0, 0, 99, 0, 0,
    0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 123, 0, 124, 0, 125, 0, 0, 0, 126, 0, 127, 0,
    0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 0, 133, 0, 134, 0, 135, 0, 136, 0, 0, 137, 0, 138, 0, 139, 0, 140, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0,
    0, 144, 0, 145, 146, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 153, 0,
    0, 0, 0, 154, 0, 155, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 161,
    0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 168, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0,
    0, 0, 0, 172, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182,
    0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 0,
    0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 196, 0, 197, 0, 198, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 201, 0, 202,
    0, 203, 0, 204, 0, 205, 0, 206, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 212, 0, 213, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 217, 0, 218, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0,
    0, 0, 0, 0, 0, 0, 226, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 236, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 241, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 255, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0,
    260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    267, 0, 268, 0, 269, 0, 270, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 274, 0, 275, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0,
    0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 289, 0, 290, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0,
    0, 293, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 298, 0, 299, 0, 300,
    301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0,
    0, 306, 0, 0, 0, 307, 0, 0, 308, 0, 309, 0, 0, 0, 310, 311, 312, 0, 313, 0, 314, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 318, 0, 319, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 340, 0, 0, 0, 341, 342, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 0, 0, 347, 0, 348, 0, 0, 0, 349,
    350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 354, 0,
    0, 0, 355, 0, 356, 0, 357, 0, 0, 358, 0, 0, 0, 359, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 364, 0, 0, 0, 365, 0, 366, 0, 0, 0, 367, 368, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 372, 0, 0, 0, 373, 0, 374, 0, 0, 0, 0,
    0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 382, 0, 0, 0, 383, 0, 384, 0, 0, 385, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 399, 0, 0, 0, 400, 0, 401, 0, 0, 402, 403,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 407, 0,
    0, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 0, 411, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 416, 0, 0, 0, 417, 0, 418, 0, 0, 419, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 424, 0, 0, 0, 425, 0, 426, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    427, 0, 0, 428, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431,
    0, 432, 0, 433, 0, 0, 0, 434, 0, 435, 0, 0, 436, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 445, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 449, 0, 450, 0, 0, 0, 451, 0, 452, 0, 0, 453, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 458, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0,
    461, 0, 0, 462, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0,
    466, 0, 467, 0, 0, 0, 468, 0, 469, 0, 0, 470, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 475, 0, 0, 0, 476, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484,
    0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 487, 488, 0, 489, 0, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 492, 0, 0, 0, 0, 0, 493,
    0, 0, 0, 0, 494, 0, 0, 0, 0, 495, 496, 497, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 501, 0, 502,
    0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    506, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 510, 0, 511, 0, 512, 0, 513,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 515, 0, 516, 0, 0, 517, 0, 0, 0, 518, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 522, 0, 523, 0, 0, 0, 524, 525, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0,
    528, 0, 0, 0, 0, 0, 0, 0, 529, 0, 530, 0, 531, 0, 0, 532, 0, 0, 0, 533, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 538, 0, 0,
    0, 539, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 544, 0, 545, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 547, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 552, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 0,
    557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0,
    562, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 569, 0, 0, 570, 571, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574,
    0, 575, 0, 0, 576, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0,
    586, 0, 587, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 597, 0, 598, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0,
    0, 602, 0, 0, 0, 603, 0, 0, 604, 0, 0, 605, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 609, 0, 610, 0, 0, 611, 612, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 615, 0,
    0, 0, 0, 0, 0, 0, 616, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0,
    620, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 626, 0,
    0, 0, 0, 0, 627, 0, 628, 0, 629, 0, 0, 0, 630, 0, 631, 0, 632, 0, 633, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 636, 0, 0,
    0, 637, 0, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 0, 640, 0, 641, 0, 642, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 645, 0, 646,
    0, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 652, 0, 653, 0, 654, 0, 655,
    0, 656, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 659, 0, 660, 0, 661, 0, 0, 0, 0, 0, 662, 0,
    0, 0, 663, 0, 0, 0, 664, 0, 665, 0, 666, 0, 667, 0, 668, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 0,
    0, 0, 0, 671, 0, 672, 0, 673, 0, 674, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0,
    0, 678, 0, 679, 0, 680, 0, 681, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 685, 0, 686, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 689, 0, 690, 0, 0, 0, 0, 0, 691, 0,
    0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 693, 0, 694, 0, 695, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 697,
};
void recomp_unit_0048_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088C4004u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0048[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088C4004;
    case 2u: goto L_088C4014;
    case 3u: goto L_088C4028;
    case 4u: goto L_088C4048;
    case 5u: goto L_088C4068;
    case 6u: goto L_088C4070;
    case 7u: goto L_088C4078;
    case 8u: goto L_088C40A0;
    case 9u: goto L_088C40C0;
    case 10u: goto L_088C40D8;
    case 11u: goto L_088C40E0;
    case 12u: goto L_088C40E8;
    case 13u: goto L_088C40F0;
    case 14u: goto L_088C40F8;
    case 15u: goto L_088C4100;
    case 16u: goto L_088C4108;
    case 17u: goto L_088C4110;
    case 18u: goto L_088C4118;
    case 19u: goto L_088C4120;
    case 20u: goto L_088C4128;
    case 21u: goto L_088C4144;
    case 22u: goto L_088C414C;
    case 23u: goto L_088C415C;
    case 24u: goto L_088C41D0;
    case 25u: goto L_088C41D8;
    case 26u: goto L_088C41F0;
    case 27u: goto L_088C41F8;
    case 28u: goto L_088C41FC;
    case 29u: goto L_088C4208;
    case 30u: goto L_088C4228;
    case 31u: goto L_088C423C;
    case 32u: goto L_088C4250;
    case 33u: goto L_088C4264;
    case 34u: goto L_088C4278;
    case 35u: goto L_088C428C;
    case 36u: goto L_088C429C;
    case 37u: goto L_088C42A4;
    case 38u: goto L_088C42AC;
    case 39u: goto L_088C42B8;
    case 40u: goto L_088C42C0;
    case 41u: goto L_088C42C4;
    case 42u: goto L_088C42D8;
    case 43u: goto L_088C42E4;
    case 44u: goto L_088C42EC;
    case 45u: goto L_088C42FC;
    case 46u: goto L_088C4310;
    case 47u: goto L_088C4318;
    case 48u: goto L_088C4320;
    case 49u: goto L_088C4328;
    case 50u: goto L_088C4344;
    case 51u: goto L_088C4354;
    case 52u: goto L_088C439C;
    case 53u: goto L_088C4404;
    case 54u: goto L_088C440C;
    case 55u: goto L_088C4424;
    case 56u: goto L_088C442C;
    case 57u: goto L_088C4430;
    case 58u: goto L_088C4438;
    case 59u: goto L_088C4440;
    case 60u: goto L_088C4448;
    case 61u: goto L_088C4450;
    case 62u: goto L_088C4458;
    case 63u: goto L_088C4478;
    case 64u: goto L_088C448C;
    case 65u: goto L_088C44A0;
    case 66u: goto L_088C44B4;
    case 67u: goto L_088C44C8;
    case 68u: goto L_088C44DC;
    case 69u: goto L_088C44E4;
    case 70u: goto L_088C44F4;
    case 71u: goto L_088C4530;
    case 72u: goto L_088C4550;
    case 73u: goto L_088C4554;
    case 74u: goto L_088C456C;
    case 75u: goto L_088C4574;
    case 76u: goto L_088C4578;
    case 77u: goto L_088C4580;
    case 78u: goto L_088C459C;
    case 79u: goto L_088C45AC;
    case 80u: goto L_088C45B4;
    case 81u: goto L_088C45F4;
    case 82u: goto L_088C45FC;
    case 83u: goto L_088C4614;
    case 84u: goto L_088C461C;
    case 85u: goto L_088C4620;
    case 86u: goto L_088C4628;
    case 87u: goto L_088C4670;
    case 88u: goto L_088C4678;
    case 89u: goto L_088C4688;
    case 90u: goto L_088C46AC;
    case 91u: goto L_088C475C;
    case 92u: goto L_088C4780;
    case 93u: goto L_088C47A0;
    case 94u: goto L_088C47C0;
    case 95u: goto L_088C47D0;
    case 96u: goto L_088C47D8;
    case 97u: goto L_088C47E0;
    case 98u: goto L_088C47E8;
    case 99u: goto L_088C47F8;
    case 100u: goto L_088C4808;
    case 101u: goto L_088C4818;
    case 102u: goto L_088C4828;
    case 103u: goto L_088C4864;
    case 104u: goto L_088C488C;
    case 105u: goto L_088C48B8;
    case 106u: goto L_088C48E0;
    case 107u: goto L_088C48F0;
    case 108u: goto L_088C4900;
    case 109u: goto L_088C4948;
    case 110u: goto L_088C499C;
    case 111u: goto L_088C49B4;
    case 112u: goto L_088C49CC;
    case 113u: goto L_088C49D4;
    case 114u: goto L_088C49DC;
    case 115u: goto L_088C49E4;
    case 116u: goto L_088C49EC;
    case 117u: goto L_088C4A04;
    case 118u: goto L_088C4A14;
    case 119u: goto L_088C4A28;
    case 120u: goto L_088C4A38;
    case 121u: goto L_088C4A40;
    case 122u: goto L_088C4A48;
    case 123u: goto L_088C4A54;
    case 124u: goto L_088C4A5C;
    case 125u: goto L_088C4A64;
    case 126u: goto L_088C4A74;
    case 127u: goto L_088C4A7C;
    case 128u: goto L_088C4A88;
    case 129u: goto L_088C4A90;
    case 130u: goto L_088C4A98;
    case 131u: goto L_088C4AA0;
    case 132u: goto L_088C4AA8;
    case 133u: goto L_088C4AB4;
    case 134u: goto L_088C4ABC;
    case 135u: goto L_088C4AC4;
    case 136u: goto L_088C4ACC;
    case 137u: goto L_088C4AD8;
    case 138u: goto L_088C4AE0;
    case 139u: goto L_088C4AE8;
    case 140u: goto L_088C4AF0;
    case 141u: goto L_088C4B30;
    case 142u: goto L_088C4B4C;
    case 143u: goto L_088C4B70;
    case 144u: goto L_088C4B88;
    case 145u: goto L_088C4B90;
    case 146u: goto L_088C4B94;
    case 147u: goto L_088C4B9C;
    case 148u: goto L_088C4BAC;
    case 149u: goto L_088C4BC4;
    case 150u: goto L_088C4BD8;
    case 151u: goto L_088C4BE0;
    case 152u: goto L_088C4BF4;
    case 153u: goto L_088C4BFC;
    case 154u: goto L_088C4C10;
    case 155u: goto L_088C4C18;
    case 156u: goto L_088C4C24;
    case 157u: goto L_088C4C38;
    case 158u: goto L_088C4C50;
    case 159u: goto L_088C4C5C;
    case 160u: goto L_088C4C74;
    case 161u: goto L_088C4C80;
    case 162u: goto L_088C4C98;
    case 163u: goto L_088C4CA4;
    case 164u: goto L_088C4CBC;
    case 165u: goto L_088C4CC8;
    case 166u: goto L_088C4CE0;
    case 167u: goto L_088C4CF0;
    case 168u: goto L_088C4CF8;
    case 169u: goto L_088C4D58;
    case 170u: goto L_088C4D70;
    case 171u: goto L_088C4D78;
    case 172u: goto L_088C4D90;
    case 173u: goto L_088C4D98;
    case 174u: goto L_088C4DA0;
    case 175u: goto L_088C4DA8;
    case 176u: goto L_088C4DB0;
    case 177u: goto L_088C4DB8;
    case 178u: goto L_088C4DD0;
    case 179u: goto L_088C4DD8;
    case 180u: goto L_088C4DF0;
    case 181u: goto L_088C4DF8;
    case 182u: goto L_088C4E00;
    case 183u: goto L_088C4E08;
    case 184u: goto L_088C4E10;
    case 185u: goto L_088C4E18;
    case 186u: goto L_088C4E30;
    case 187u: goto L_088C4E38;
    case 188u: goto L_088C4E50;
    case 189u: goto L_088C4E58;
    case 190u: goto L_088C4E60;
    case 191u: goto L_088C4E68;
    case 192u: goto L_088C4E70;
    case 193u: goto L_088C4E78;
    case 194u: goto L_088C4E90;
    case 195u: goto L_088C4E98;
    case 196u: goto L_088C4EB0;
    case 197u: goto L_088C4EB8;
    case 198u: goto L_088C4EC0;
    case 199u: goto L_088C4ED8;
    case 200u: goto L_088C4EE0;
    case 201u: goto L_088C4EF8;
    case 202u: goto L_088C4F00;
    case 203u: goto L_088C4F08;
    case 204u: goto L_088C4F10;
    case 205u: goto L_088C4F18;
    case 206u: goto L_088C4F20;
    case 207u: goto L_088C4F24;
    case 208u: goto L_088C4F54;
    case 209u: goto L_088C5014;
    case 210u: goto L_088C5040;
    case 211u: goto L_088C5064;
    case 212u: goto L_088C5068;
    case 213u: goto L_088C5070;
    case 214u: goto L_088C5098;
    case 215u: goto L_088C50BC;
    case 216u: goto L_088C50C4;
    case 217u: goto L_088C50D0;
    case 218u: goto L_088C50D8;
    case 219u: goto L_088C50E4;
    case 220u: goto L_088C50EC;
    case 221u: goto L_088C5114;
    case 222u: goto L_088C5138;
    case 223u: goto L_088C5140;
    case 224u: goto L_088C514C;
    case 225u: goto L_088C5178;
    case 226u: goto L_088C519C;
    case 227u: goto L_088C51A0;
    case 228u: goto L_088C51AC;
    case 229u: goto L_088C51D0;
    case 230u: goto L_088C51DC;
    case 231u: goto L_088C5204;
    case 232u: goto L_088C5228;
    case 233u: goto L_088C522C;
    case 234u: goto L_088C5254;
    case 235u: goto L_088C5260;
    case 236u: goto L_088C5264;
    case 237u: goto L_088C5294;
    case 238u: goto L_088C5318;
    case 239u: goto L_088C5344;
    case 240u: goto L_088C5368;
    case 241u: goto L_088C536C;
    case 242u: goto L_088C5374;
    case 243u: goto L_088C539C;
    case 244u: goto L_088C53C0;
    case 245u: goto L_088C53C8;
    case 246u: goto L_088C53F0;
    case 247u: goto L_088C5414;
    case 248u: goto L_088C5420;
    case 249u: goto L_088C5448;
    case 250u: goto L_088C546C;
    case 251u: goto L_088C5478;
    case 252u: goto L_088C54A0;
    case 253u: goto L_088C54C4;
    case 254u: goto L_088C54D8;
    case 255u: goto L_088C54E0;
    case 256u: goto L_088C54E4;
    case 257u: goto L_088C5518;
    case 258u: goto L_088C5560;
    case 259u: goto L_088C5578;
    case 260u: goto L_088C5584;
    case 261u: goto L_088C55A0;
    case 262u: goto L_088C55B0;
    case 263u: goto L_088C55B8;
    case 264u: goto L_088C55CC;
    case 265u: goto L_088C55DC;
    case 266u: goto L_088C55F4;
    case 267u: goto L_088C5604;
    case 268u: goto L_088C560C;
    case 269u: goto L_088C5614;
    case 270u: goto L_088C561C;
    case 271u: goto L_088C5620;
    case 272u: goto L_088C5648;
    case 273u: goto L_088C5650;
    case 274u: goto L_088C5658;
    case 275u: goto L_088C5660;
    case 276u: goto L_088C5664;
    case 277u: goto L_088C5698;
    case 278u: goto L_088C56F4;
    case 279u: goto L_088C570C;
    case 280u: goto L_088C5718;
    case 281u: goto L_088C5734;
    case 282u: goto L_088C5744;
    case 283u: goto L_088C574C;
    case 284u: goto L_088C5760;
    case 285u: goto L_088C5770;
    case 286u: goto L_088C5788;
    case 287u: goto L_088C57C4;
    case 288u: goto L_088C57CC;
    case 289u: goto L_088C57D0;
    case 290u: goto L_088C57D8;
    case 291u: goto L_088C57E0;
    case 292u: goto L_088C57F8;
    case 293u: goto L_088C5808;
    case 294u: goto L_088C580C;
    case 295u: goto L_088C5840;
    case 296u: goto L_088C5858;
    case 297u: goto L_088C5860;
    case 298u: goto L_088C5870;
    case 299u: goto L_088C5878;
    case 300u: goto L_088C5880;
    case 301u: goto L_088C5884;
    case 302u: goto L_088C5894;
    case 303u: goto L_088C58D4;
    case 304u: goto L_088C58E4;
    case 305u: goto L_088C58F4;
    case 306u: goto L_088C5908;
    case 307u: goto L_088C5918;
    case 308u: goto L_088C5924;
    case 309u: goto L_088C592C;
    case 310u: goto L_088C593C;
    case 311u: goto L_088C5940;
    case 312u: goto L_088C5944;
    case 313u: goto L_088C594C;
    case 314u: goto L_088C5954;
    case 315u: goto L_088C595C;
    case 316u: goto L_088C59BC;
    case 317u: goto L_088C59C4;
    case 318u: goto L_088C59D0;
    case 319u: goto L_088C59D8;
    case 320u: goto L_088C59E8;
    case 321u: goto L_088C59F0;
    case 322u: goto L_088C5A04;
    case 323u: goto L_088C5A20;
    case 324u: goto L_088C5A34;
    case 325u: goto L_088C5A3C;
    case 326u: goto L_088C5A6C;
    case 327u: goto L_088C5A98;
    case 328u: goto L_088C5AA4;
    case 329u: goto L_088C5B2C;
    case 330u: goto L_088C5B40;
    case 331u: goto L_088C5B48;
    case 332u: goto L_088C5B54;
    case 333u: goto L_088C5BB8;
    case 334u: goto L_088C5BC0;
    case 335u: goto L_088C5BC8;
    case 336u: goto L_088C5BD0;
    case 337u: goto L_088C5C0C;
    case 338u: goto L_088C5C38;
    case 339u: goto L_088C5C40;
    case 340u: goto L_088C5C4C;
    case 341u: goto L_088C5C5C;
    case 342u: goto L_088C5C60;
    case 343u: goto L_088C5C9C;
    case 344u: goto L_088C5CC8;
    case 345u: goto L_088C5CD0;
    case 346u: goto L_088C5CD8;
    case 347u: goto L_088C5CE8;
    case 348u: goto L_088C5CF0;
    case 349u: goto L_088C5D00;
    case 350u: goto L_088C5D04;
    case 351u: goto L_088C5D40;
    case 352u: goto L_088C5D6C;
    case 353u: goto L_088C5D74;
    case 354u: goto L_088C5D7C;
    case 355u: goto L_088C5D8C;
    case 356u: goto L_088C5D94;
    case 357u: goto L_088C5D9C;
    case 358u: goto L_088C5DA8;
    case 359u: goto L_088C5DB8;
    case 360u: goto L_088C5DBC;
    case 361u: goto L_088C5DF8;
    case 362u: goto L_088C5E24;
    case 363u: goto L_088C5E2C;
    case 364u: goto L_088C5E34;
    case 365u: goto L_088C5E44;
    case 366u: goto L_088C5E4C;
    case 367u: goto L_088C5E5C;
    case 368u: goto L_088C5E60;
    case 369u: goto L_088C5E9C;
    case 370u: goto L_088C5EC8;
    case 371u: goto L_088C5ED0;
    case 372u: goto L_088C5ED8;
    case 373u: goto L_088C5EE8;
    case 374u: goto L_088C5EF0;
    case 375u: goto L_088C5F08;
    case 376u: goto L_088C5FA8;
    case 377u: goto L_088C5FB4;
    case 378u: goto L_088C5FB8;
    case 379u: goto L_088C5FF8;
    case 380u: goto L_088C6024;
    case 381u: goto L_088C602C;
    case 382u: goto L_088C6034;
    case 383u: goto L_088C6044;
    case 384u: goto L_088C604C;
    case 385u: goto L_088C6058;
    case 386u: goto L_088C605C;
    case 387u: goto L_088C609C;
    case 388u: goto L_088C60C8;
    case 389u: goto L_088C60D0;
    case 390u: goto L_088C60D8;
    case 391u: goto L_088C60E8;
    case 392u: goto L_088C60FC;
    case 393u: goto L_088C614C;
    case 394u: goto L_088C6158;
    case 395u: goto L_088C615C;
    case 396u: goto L_088C619C;
    case 397u: goto L_088C61C8;
    case 398u: goto L_088C61D0;
    case 399u: goto L_088C61D8;
    case 400u: goto L_088C61E8;
    case 401u: goto L_088C61F0;
    case 402u: goto L_088C61FC;
    case 403u: goto L_088C6200;
    case 404u: goto L_088C6240;
    case 405u: goto L_088C626C;
    case 406u: goto L_088C6274;
    case 407u: goto L_088C627C;
    case 408u: goto L_088C628C;
    case 409u: goto L_088C629C;
    case 410u: goto L_088C62A8;
    case 411u: goto L_088C62B4;
    case 412u: goto L_088C62B8;
    case 413u: goto L_088C62F4;
    case 414u: goto L_088C6320;
    case 415u: goto L_088C6328;
    case 416u: goto L_088C6330;
    case 417u: goto L_088C6340;
    case 418u: goto L_088C6348;
    case 419u: goto L_088C6354;
    case 420u: goto L_088C6358;
    case 421u: goto L_088C6394;
    case 422u: goto L_088C63C0;
    case 423u: goto L_088C63C8;
    case 424u: goto L_088C63D0;
    case 425u: goto L_088C63E0;
    case 426u: goto L_088C63E8;
    case 427u: goto L_088C6484;
    case 428u: goto L_088C6490;
    case 429u: goto L_088C6494;
    case 430u: goto L_088C64D4;
    case 431u: goto L_088C6500;
    case 432u: goto L_088C6508;
    case 433u: goto L_088C6510;
    case 434u: goto L_088C6520;
    case 435u: goto L_088C6528;
    case 436u: goto L_088C6534;
    case 437u: goto L_088C6538;
    case 438u: goto L_088C6578;
    case 439u: goto L_088C65A4;
    case 440u: goto L_088C65AC;
    case 441u: goto L_088C65B4;
    case 442u: goto L_088C65C4;
    case 443u: goto L_088C65D8;
    case 444u: goto L_088C6628;
    case 445u: goto L_088C6634;
    case 446u: goto L_088C6638;
    case 447u: goto L_088C6678;
    case 448u: goto L_088C66A4;
    case 449u: goto L_088C66AC;
    case 450u: goto L_088C66B4;
    case 451u: goto L_088C66C4;
    case 452u: goto L_088C66CC;
    case 453u: goto L_088C66D8;
    case 454u: goto L_088C66DC;
    case 455u: goto L_088C671C;
    case 456u: goto L_088C6748;
    case 457u: goto L_088C6750;
    case 458u: goto L_088C6758;
    case 459u: goto L_088C6768;
    case 460u: goto L_088C6778;
    case 461u: goto L_088C6784;
    case 462u: goto L_088C6790;
    case 463u: goto L_088C6794;
    case 464u: goto L_088C67D0;
    case 465u: goto L_088C67FC;
    case 466u: goto L_088C6804;
    case 467u: goto L_088C680C;
    case 468u: goto L_088C681C;
    case 469u: goto L_088C6824;
    case 470u: goto L_088C6830;
    case 471u: goto L_088C6834;
    case 472u: goto L_088C6870;
    case 473u: goto L_088C689C;
    case 474u: goto L_088C68A4;
    case 475u: goto L_088C68AC;
    case 476u: goto L_088C68BC;
    case 477u: goto L_088C68C0;
    case 478u: goto L_088C68F4;
    case 479u: goto L_088C699C;
    case 480u: goto L_088C69B0;
    case 481u: goto L_088C69B8;
    case 482u: goto L_088C69C4;
    case 483u: goto L_088C69E8;
    case 484u: goto L_088C6A00;
    case 485u: goto L_088C6A14;
    case 486u: goto L_088C6A28;
    case 487u: goto L_088C6A2C;
    case 488u: goto L_088C6A30;
    case 489u: goto L_088C6A38;
    case 490u: goto L_088C6A58;
    case 491u: goto L_088C6A60;
    case 492u: goto L_088C6A68;
    case 493u: goto L_088C6A80;
    case 494u: goto L_088C6A94;
    case 495u: goto L_088C6AA8;
    case 496u: goto L_088C6AAC;
    case 497u: goto L_088C6AB0;
    case 498u: goto L_088C6AB8;
    case 499u: goto L_088C6AE8;
    case 500u: goto L_088C6AF0;
    case 501u: goto L_088C6AF8;
    case 502u: goto L_088C6B00;
    case 503u: goto L_088C6B08;
    case 504u: goto L_088C6B40;
    case 505u: goto L_088C6B4C;
    case 506u: goto L_088C6B84;
    case 507u: goto L_088C6B90;
    case 508u: goto L_088C6BC8;
    case 509u: goto L_088C6BD8;
    case 510u: goto L_088C6BE8;
    case 511u: goto L_088C6BF0;
    case 512u: goto L_088C6BF8;
    case 513u: goto L_088C6C00;
    case 514u: goto L_088C6C3C;
    case 515u: goto L_088C6C88;
    case 516u: goto L_088C6C90;
    case 517u: goto L_088C6C9C;
    case 518u: goto L_088C6CAC;
    case 519u: goto L_088C6CB0;
    case 520u: goto L_088C6CEC;
    case 521u: goto L_088C6D3C;
    case 522u: goto L_088C6D4C;
    case 523u: goto L_088C6D54;
    case 524u: goto L_088C6D64;
    case 525u: goto L_088C6D68;
    case 526u: goto L_088C6DA4;
    case 527u: goto L_088C6DF4;
    case 528u: goto L_088C6E04;
    case 529u: goto L_088C6E24;
    case 530u: goto L_088C6E2C;
    case 531u: goto L_088C6E34;
    case 532u: goto L_088C6E40;
    case 533u: goto L_088C6E50;
    case 534u: goto L_088C6E54;
    case 535u: goto L_088C6E90;
    case 536u: goto L_088C6EE0;
    case 537u: goto L_088C6EF0;
    case 538u: goto L_088C6EF8;
    case 539u: goto L_088C6F08;
    case 540u: goto L_088C6F0C;
    case 541u: goto L_088C6F48;
    case 542u: goto L_088C6F98;
    case 543u: goto L_088C6FA8;
    case 544u: goto L_088C6FC8;
    case 545u: goto L_088C6FD0;
    case 546u: goto L_088C6FE8;
    case 547u: goto L_088C7088;
    case 548u: goto L_088C7094;
    case 549u: goto L_088C70D8;
    case 550u: goto L_088C7128;
    case 551u: goto L_088C7138;
    case 552u: goto L_088C7140;
    case 553u: goto L_088C714C;
    case 554u: goto L_088C7190;
    case 555u: goto L_088C71E0;
    case 556u: goto L_088C71F0;
    case 557u: goto L_088C7204;
    case 558u: goto L_088C7254;
    case 559u: goto L_088C7260;
    case 560u: goto L_088C72A4;
    case 561u: goto L_088C72F4;
    case 562u: goto L_088C7304;
    case 563u: goto L_088C730C;
    case 564u: goto L_088C7318;
    case 565u: goto L_088C735C;
    case 566u: goto L_088C73AC;
    case 567u: goto L_088C73BC;
    case 568u: goto L_088C73CC;
    case 569u: goto L_088C73D8;
    case 570u: goto L_088C73E4;
    case 571u: goto L_088C73E8;
    case 572u: goto L_088C7424;
    case 573u: goto L_088C7470;
    case 574u: goto L_088C7480;
    case 575u: goto L_088C7488;
    case 576u: goto L_088C7494;
    case 577u: goto L_088C7498;
    case 578u: goto L_088C74D4;
    case 579u: goto L_088C7520;
    case 580u: goto L_088C7530;
    case 581u: goto L_088C7538;
    case 582u: goto L_088C75D4;
    case 583u: goto L_088C75E0;
    case 584u: goto L_088C7624;
    case 585u: goto L_088C7674;
    case 586u: goto L_088C7684;
    case 587u: goto L_088C768C;
    case 588u: goto L_088C7698;
    case 589u: goto L_088C76DC;
    case 590u: goto L_088C772C;
    case 591u: goto L_088C773C;
    case 592u: goto L_088C7750;
    case 593u: goto L_088C77A0;
    case 594u: goto L_088C77AC;
    case 595u: goto L_088C77F0;
    case 596u: goto L_088C7840;
    case 597u: goto L_088C7850;
    case 598u: goto L_088C7858;
    case 599u: goto L_088C7864;
    case 600u: goto L_088C78A8;
    case 601u: goto L_088C78F8;
    case 602u: goto L_088C7908;
    case 603u: goto L_088C7918;
    case 604u: goto L_088C7924;
    case 605u: goto L_088C7930;
    case 606u: goto L_088C7934;
    case 607u: goto L_088C7970;
    case 608u: goto L_088C79BC;
    case 609u: goto L_088C79CC;
    case 610u: goto L_088C79D4;
    case 611u: goto L_088C79E0;
    case 612u: goto L_088C79E4;
    case 613u: goto L_088C7A20;
    case 614u: goto L_088C7A6C;
    case 615u: goto L_088C7A7C;
    case 616u: goto L_088C7A9C;
    case 617u: goto L_088C7AA0;
    case 618u: goto L_088C7AD4;
    case 619u: goto L_088C7AFC;
    case 620u: goto L_088C7B04;
    case 621u: goto L_088C7B14;
    case 622u: goto L_088C7B24;
    case 623u: goto L_088C7B40;
    case 624u: goto L_088C7B4C;
    case 625u: goto L_088C7B64;
    case 626u: goto L_088C7B7C;
    case 627u: goto L_088C7B94;
    case 628u: goto L_088C7B9C;
    case 629u: goto L_088C7BA4;
    case 630u: goto L_088C7BB4;
    case 631u: goto L_088C7BBC;
    case 632u: goto L_088C7BC4;
    case 633u: goto L_088C7BCC;
    case 634u: goto L_088C7BDC;
    case 635u: goto L_088C7BF0;
    case 636u: goto L_088C7BF8;
    case 637u: goto L_088C7C08;
    case 638u: goto L_088C7C1C;
    case 639u: goto L_088C7C24;
    case 640u: goto L_088C7C3C;
    case 641u: goto L_088C7C44;
    case 642u: goto L_088C7C4C;
    case 643u: goto L_088C7C5C;
    case 644u: goto L_088C7C70;
    case 645u: goto L_088C7C78;
    case 646u: goto L_088C7C80;
    case 647u: goto L_088C7C90;
    case 648u: goto L_088C7CA8;
    case 649u: goto L_088C7CB0;
    case 650u: goto L_088C7CC8;
    case 651u: goto L_088C7CD8;
    case 652u: goto L_088C7CE8;
    case 653u: goto L_088C7CF0;
    case 654u: goto L_088C7CF8;
    case 655u: goto L_088C7D00;
    case 656u: goto L_088C7D08;
    case 657u: goto L_088C7D24;
    case 658u: goto L_088C7D44;
    case 659u: goto L_088C7D54;
    case 660u: goto L_088C7D5C;
    case 661u: goto L_088C7D64;
    case 662u: goto L_088C7D7C;
    case 663u: goto L_088C7D8C;
    case 664u: goto L_088C7D9C;
    case 665u: goto L_088C7DA4;
    case 666u: goto L_088C7DAC;
    case 667u: goto L_088C7DB4;
    case 668u: goto L_088C7DBC;
    case 669u: goto L_088C7DDC;
    case 670u: goto L_088C7DF8;
    case 671u: goto L_088C7E10;
    case 672u: goto L_088C7E18;
    case 673u: goto L_088C7E20;
    case 674u: goto L_088C7E28;
    case 675u: goto L_088C7E44;
    case 676u: goto L_088C7E54;
    case 677u: goto L_088C7E70;
    case 678u: goto L_088C7E88;
    case 679u: goto L_088C7E90;
    case 680u: goto L_088C7E98;
    case 681u: goto L_088C7EA0;
    case 682u: goto L_088C7EB0;
    case 683u: goto L_088C7EC0;
    case 684u: goto L_088C7EDC;
    case 685u: goto L_088C7F14;
    case 686u: goto L_088C7F1C;
    case 687u: goto L_088C7F24;
    case 688u: goto L_088C7F3C;
    case 689u: goto L_088C7F5C;
    case 690u: goto L_088C7F64;
    case 691u: goto L_088C7F7C;
    case 692u: goto L_088C7F98;
    case 693u: goto L_088C7FB0;
    case 694u: goto L_088C7FB8;
    case 695u: goto L_088C7FC0;
    case 696u: goto L_088C7FD8;
    case 697u: goto L_088C7FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088C4004:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4070;
      }
      goto L_088C4014;
    }
L_088C4014:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088C4028u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 125u, 0x08834A18u>(ctx, &aot_mem) && ctx.pc == 0x088C4028u) goto L_088C4028;
    return;
L_088C4028:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6935)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C4048u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 622u, 0x088C3E3Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4048u) goto L_088C4048;
    return;
L_088C4048:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088C4068u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 132u, 0x088A8764u>(ctx, &aot_mem) && ctx.pc == 0x088C4068u) goto L_088C4068;
    return;
L_088C4068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4078;
      }
      goto L_088C4070;
    }
L_088C4070:
    ctx.gpr[31] = (0x088C4078u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 125u, 0x08834A18u>(ctx, &aot_mem) && ctx.pc == 0x088C4078u) goto L_088C4078;
    return;
L_088C4078:
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
L_088C40A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C40E0;
      }
      goto L_088C40C0;
    }
L_088C40C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C40E8;
      }
      goto L_088C40D8;
    }
L_088C40D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4118;
      }
      goto L_088C40E0;
    }
L_088C40E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C414C;
      }
      goto L_088C40E8;
    }
L_088C40E8:
    ctx.gpr[31] = (0x088C40F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088C40F0u) goto L_088C40F0;
    return;
L_088C40F0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088C4108;
      }
      goto L_088C40F8;
    }
L_088C40F8:
    ctx.gpr[31] = (0x088C4100u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x088C4100u) goto L_088C4100;
    return;
L_088C4100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4110;
      }
      goto L_088C4108;
    }
L_088C4108:
    ctx.gpr[31] = (0x088C4110u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 289u, 0x08A9D734u>(ctx, &aot_mem) && ctx.pc == 0x088C4110u) goto L_088C4110;
    return;
L_088C4110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C414C;
      }
      goto L_088C4118;
    }
L_088C4118:
    ctx.gpr[31] = (0x088C4120u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x088C4120u) goto L_088C4120;
    return;
L_088C4120:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4144;
      }
      goto L_088C4128;
    }
L_088C4128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088C4144u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C4144u) goto L_088C4144;
    return;
L_088C4144:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4110;
      }
      goto L_088C414C;
    }
L_088C414C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C415C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_088C4354;
      }
      goto L_088C41D0;
    }
L_088C41D0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (0u | 0u);
    goto L_088C41D8;
L_088C41D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_088C41F8;
    }
    goto L_088C41F0;
L_088C41F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088C41FC;
      }
      goto L_088C41F8;
    }
L_088C41F8:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[19]);
    goto L_088C41FC;
L_088C41FC:
    ctx.gpr[30] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4344;
      }
      goto L_088C4208;
    }
L_088C4208:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C4344;
      }
      goto L_088C4228;
    }
L_088C4228:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C4344;
      }
      goto L_088C423C;
    }
L_088C423C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C4344;
      }
      goto L_088C4250;
    }
L_088C4250:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C4344;
      }
      goto L_088C4264;
    }
L_088C4264:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C4344;
      }
      goto L_088C4278;
    }
L_088C4278:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C4344;
      }
      goto L_088C428C;
    }
L_088C428C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4344;
      }
      goto L_088C429C;
    }
L_088C429C:
    ctx.gpr[31] = (0x088C42A4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 540u, 0x0889EAF0u>(ctx, &aot_mem) && ctx.pc == 0x088C42A4u) goto L_088C42A4;
    return;
L_088C42A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4344;
      }
      goto L_088C42AC;
    }
L_088C42AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C42C4;
      }
      goto L_088C42B8;
    }
L_088C42B8:
    ctx.gpr[31] = (0x088C42C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 289u, 0x08A9D734u>(ctx, &aot_mem) && ctx.pc == 0x088C42C0u) goto L_088C42C0;
    return;
L_088C42C0:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(504), 0u);
    goto L_088C42C4;
L_088C42C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(544)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088C4310;
      }
      goto L_088C42D8;
    }
L_088C42D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C42FC;
      }
      goto L_088C42E4;
    }
L_088C42E4:
    ctx.gpr[31] = (0x088C42ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 289u, 0x08A9D734u>(ctx, &aot_mem) && ctx.pc == 0x088C42ECu) goto L_088C42EC;
    return;
L_088C42EC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(508), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(540)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(540), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088C42FC;
L_088C42FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(544)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C42D8;
      }
      goto L_088C4310;
    }
L_088C4310:
    ctx.gpr[31] = (0x088C4318u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 197u, 0x089ED474u>(ctx, &aot_mem) && ctx.pc == 0x088C4318u) goto L_088C4318;
    return;
L_088C4318:
    ctx.gpr[31] = (0x088C4320u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x088C4320u) goto L_088C4320;
    return;
L_088C4320:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4344;
      }
      goto L_088C4328;
    }
L_088C4328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088C4344u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C4344u) goto L_088C4344;
    return;
L_088C4344:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1760));
      if (branch_taken) {
          goto L_088C41D8;
      }
      goto L_088C4354;
    }
L_088C4354:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C439C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_088C44F4;
      }
      goto L_088C4404;
    }
L_088C4404:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (0u | 0u);
    goto L_088C440C;
L_088C440C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_088C442C;
    }
    goto L_088C4424;
L_088C4424:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4430;
      }
      goto L_088C442C;
    }
L_088C442C:
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[17]);
    goto L_088C4430;
L_088C4430:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C44E4;
      }
      goto L_088C4438;
    }
L_088C4438:
    ctx.gpr[31] = (0x088C4440u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088C4440u) goto L_088C4440;
    return;
L_088C4440:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C44E4;
      }
      goto L_088C4448;
    }
L_088C4448:
    ctx.gpr[31] = (0x088C4450u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 689u, 0x089A2DC8u>(ctx, &aot_mem) && ctx.pc == 0x088C4450u) goto L_088C4450;
    return;
L_088C4450:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C44E4;
      }
      goto L_088C4458;
    }
L_088C4458:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C44E4;
      }
      goto L_088C4478;
    }
L_088C4478:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C44E4;
      }
      goto L_088C448C;
    }
L_088C448C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C44E4;
      }
      goto L_088C44A0;
    }
L_088C44A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C44E4;
      }
      goto L_088C44B4;
    }
L_088C44B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C44E4;
      }
      goto L_088C44C8;
    }
L_088C44C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C44E4;
      }
      goto L_088C44DC;
    }
L_088C44DC:
    ctx.gpr[31] = (0x088C44E4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 289u, 0x08A9D734u>(ctx, &aot_mem) && ctx.pc == 0x088C44E4u) goto L_088C44E4;
    return;
L_088C44E4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(3248));
      if (branch_taken) {
          goto L_088C440C;
      }
      goto L_088C44F4;
    }
L_088C44F4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4530:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[7] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-65));
      if (branch_taken) {
          goto L_088C45AC;
      }
      goto L_088C4550;
    }
L_088C4550:
    ctx.gpr[9] = (0u | 0u);
    goto L_088C4554;
L_088C4554:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] & 128u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_088C4574;
    }
    goto L_088C456C;
L_088C456C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4578;
      }
      goto L_088C4574;
    }
L_088C4574:
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    goto L_088C4578;
L_088C4578:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C459C;
      }
      goto L_088C4580;
    }
L_088C4580:
    ctx.gpr[11] = (ctx.gpr[7] & 255u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[11] = (ctx.gpr[11] & 1u);
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[8]);
    ctx.gpr[11] = (ctx.gpr[11] << 6u);
    ctx.gpr[11] = (ctx.gpr[2] | ctx.gpr[11]);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[11]));
    goto L_088C459C;
L_088C459C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1760));
      if (branch_taken) {
          goto L_088C4554;
      }
      goto L_088C45AC;
    }
L_088C45AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C45B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15040)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4688;
      }
      goto L_088C45F4;
    }
L_088C45F4:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[17] = (0u | 0u);
    goto L_088C45FC;
L_088C45FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_088C461C;
    }
    goto L_088C4614;
L_088C4614:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4620;
      }
      goto L_088C461C;
    }
L_088C461C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_088C4620;
L_088C4620:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088C4678;
      }
      goto L_088C4628;
    }
L_088C4628:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C4678;
      }
      goto L_088C4670;
    }
L_088C4670:
    ctx.gpr[31] = (0x088C4678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 112u, 0x088A0804u>(ctx, &aot_mem) && ctx.pc == 0x088C4678u) goto L_088C4678;
    return;
L_088C4678:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1760));
      if (branch_taken) {
          goto L_088C45FC;
      }
      goto L_088C4688;
    }
L_088C4688:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_088C46AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[4] = (16800u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[26] = ctx.fpr[16] - ctx.fpr[20];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = ctx.fpr[26] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[22] = ctx.fpr[16] - ctx.fpr[20];
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(20976)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[17] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.fpr[24] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.fpr[20] = ctx.fpr[15] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_088C475C;
    }
    goto L_088C475C;
L_088C475C:
    ctx.fpr[14] = ctx.fpr[22] / ctx.fpr[12];
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
        goto L_088C4780;
    }
    goto L_088C4780;
L_088C4780:
    ctx.fpr[14] = ctx.fpr[24] / ctx.fpr[12];
    ctx.gpr[17] = (0u | 100u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_088C47A0;
    }
    goto L_088C47A0;
L_088C47A0:
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[18] = (0u | 100u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_088C47C0;
    }
    goto L_088C47C0;
L_088C47C0:
    ctx.gpr[4] = (0u | 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C47D8;
      }
      goto L_088C47D0;
    }
L_088C47D0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088C47E8;
      }
      goto L_088C47D8;
    }
L_088C47D8:
    ctx.gpr[31] = (0x088C47E0u);
    // nop
    goto L_088C4C18;
L_088C47E0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088C47E8;
L_088C47E8:
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
      if (branch_taken) {
          goto L_088C4900;
      }
      goto L_088C47F8;
    }
L_088C47F8:
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[5] << 2u);
    ctx.gpr[22] = (ctx.gpr[22] - ctx.gpr[4]);
    ctx.gpr[21] = (2227u << 16u);
    goto L_088C4808;
L_088C4808:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_088C48F0;
      }
      goto L_088C4818;
    }
L_088C4818:
    ctx.gpr[23] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[23] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[23] = (ctx.gpr[4] - ctx.gpr[23]);
    goto L_088C4828;
L_088C4828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20972)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[30] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x088C4864u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 203u, 0x088C8FB4u>(ctx, &aot_mem) && ctx.pc == 0x088C4864u) goto L_088C4864;
    return;
L_088C4864:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(24));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x088C488Cu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 203u, 0x088C8FB4u>(ctx, &aot_mem) && ctx.pc == 0x088C488Cu) goto L_088C488C;
    return;
L_088C488C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(28));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x088C48B8u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088C4948;
L_088C48B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(32));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x088C48E0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088C4948;
L_088C48E0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_088C4828;
      }
      goto L_088C48F0;
    }
L_088C48F0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_088C4808;
      }
      goto L_088C4900;
    }
L_088C4900:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4948:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_088C4AF0;
      }
      goto L_088C499C;
    }
L_088C499C:
    ctx.gpr[30] = (0u | 54u);
    ctx.gpr[23] = (0u | 8u);
    ctx.gpr[22] = (0u | 18u);
    ctx.gpr[21] = (0u | 9u);
    ctx.gpr[20] = (0u | 6u);
    ctx.gpr[19] = (0u | 1u);
    goto L_088C49B4;
L_088C49B4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20976)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C4AE8;
      }
      goto L_088C49CC;
    }
L_088C49CC:
    ctx.gpr[31] = (0x088C49D4u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088C49D4u) goto L_088C49D4;
    return;
L_088C49D4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C4AE8;
      }
      goto L_088C49DC;
    }
L_088C49DC:
    ctx.gpr[31] = (0x088C49E4u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(628)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088C49E4u) goto L_088C49E4;
    return;
L_088C49E4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C4AE8;
      }
      goto L_088C49EC;
    }
L_088C49EC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C4AE8;
      }
      goto L_088C4A04;
    }
L_088C4A04:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C4AE8;
      }
      goto L_088C4A14;
    }
L_088C4A14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C4AE8;
      }
      goto L_088C4A28;
    }
L_088C4A28:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C4AE8;
      }
      goto L_088C4A38;
    }
L_088C4A38:
    ctx.gpr[31] = (0x088C4A40u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088C4A40u) goto L_088C4A40;
    return;
L_088C4A40:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C4A64;
      }
      goto L_088C4A48;
    }
L_088C4A48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4AE8;
      }
      goto L_088C4A54;
    }
L_088C4A54:
    ctx.gpr[31] = (0x088C4A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x088C4A5Cu) goto L_088C4A5C;
    return;
L_088C4A5C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C4AE8;
      }
      goto L_088C4A64;
    }
L_088C4A64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C4AE8;
      }
      goto L_088C4A74;
    }
L_088C4A74:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088C4AE8;
      }
      goto L_088C4A7C;
    }
L_088C4A7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088C4A98;
      }
      goto L_088C4A88;
    }
L_088C4A88:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088C4A98;
      }
      goto L_088C4A90;
    }
L_088C4A90:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088C4AE8;
      }
      goto L_088C4A98;
    }
L_088C4A98:
    ctx.gpr[31] = (0x088C4AA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x088C4AA0u) goto L_088C4AA0;
    return;
L_088C4AA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4AE0;
      }
      goto L_088C4AA8;
    }
L_088C4AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088C4AC4;
      }
      goto L_088C4AB4;
    }
L_088C4AB4:
    ctx.gpr[31] = (0x088C4ABCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 161u, 0x08A90928u>(ctx, &aot_mem) && ctx.pc == 0x088C4ABCu) goto L_088C4ABC;
    return;
L_088C4ABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4ACC;
      }
      goto L_088C4AC4;
    }
L_088C4AC4:
    ctx.gpr[31] = (0x088C4ACCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x088C4ACCu) goto L_088C4ACC;
    return;
L_088C4ACC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C4AD8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x088C4AD8u) goto L_088C4AD8;
    return;
L_088C4AD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4AE8;
      }
      goto L_088C4AE0;
    }
L_088C4AE0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(596), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(848), ctx.gpr[19]);
    goto L_088C4AE8;
L_088C4AE8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C49B4;
      }
      goto L_088C4AF0;
    }
L_088C4AF0:
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
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4B30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088C4BD8;
      }
      goto L_088C4B4C;
    }
L_088C4B4C:
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088C4B70;
L_088C4B70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
        goto L_088C4B90;
    }
    goto L_088C4B88;
L_088C4B88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4B94;
      }
      goto L_088C4B90;
    }
L_088C4B90:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_088C4B94;
L_088C4B94:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4BC4;
      }
      goto L_088C4B9C;
    }
L_088C4B9C:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[9] = (ctx.gpr[9] & 1u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4BC4;
      }
      goto L_088C4BAC;
    }
L_088C4BAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088C4BC4;
L_088C4BC4:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1760));
      if (branch_taken) {
          goto L_088C4B70;
      }
      goto L_088C4BD8;
    }
L_088C4BD8:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4BE0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20984)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4BFC;
      }
      goto L_088C4BF4;
    }
L_088C4BF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4C10;
      }
      goto L_088C4BFC;
    }
L_088C4BFC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22128));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088C4C10;
L_088C4C10:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4C18:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (2227u << 16u);
    goto L_088C4C24;
L_088C4C24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4C50;
      }
      goto L_088C4C38;
    }
L_088C4C38:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4C38;
      }
      goto L_088C4C50;
    }
L_088C4C50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4C74;
      }
      goto L_088C4C5C;
    }
L_088C4C5C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4C5C;
      }
      goto L_088C4C74;
    }
L_088C4C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4C98;
      }
      goto L_088C4C80;
    }
L_088C4C80:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4C80;
      }
      goto L_088C4C98;
    }
L_088C4C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4CBC;
      }
      goto L_088C4CA4;
    }
L_088C4CA4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4CA4;
      }
      goto L_088C4CBC;
    }
L_088C4CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4CE0;
      }
      goto L_088C4CC8;
    }
L_088C4CC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4CC8;
      }
      goto L_088C4CE0;
    }
L_088C4CE0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < 10000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_088C4C24;
      }
      goto L_088C4CF0;
    }
L_088C4CF0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4CF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[30] = (ctx.gpr[7] & 255u);
    ctx.gpr[23] = (ctx.gpr[8] & 255u);
    ctx.gpr[22] = (ctx.gpr[9] & 255u);
    ctx.gpr[21] = (ctx.gpr[10] & 255u);
    ctx.gpr[20] = (ctx.gpr[11] & 255u);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C4D98;
      }
      goto L_088C4D58;
    }
L_088C4D58:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088C4D70u);
    ctx.gpr[8] = (0u | 0u);
    goto L_088C5518;
L_088C4D70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4DB0;
      }
      goto L_088C4D78;
    }
L_088C4D78:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088C4D90u);
    ctx.gpr[8] = (0u | 0u);
    goto L_088C5518;
L_088C4D90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4DA8;
      }
      goto L_088C4D98;
    }
L_088C4D98:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4DB8;
      }
      goto L_088C4DA0;
    }
L_088C4DA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4DF8;
      }
      goto L_088C4DA8;
    }
L_088C4DA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4F24;
      }
      goto L_088C4DB0;
    }
L_088C4DB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4F24;
      }
      goto L_088C4DB8;
    }
L_088C4DB8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088C4DD0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_088C5518;
L_088C4DD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4E10;
      }
      goto L_088C4DD8;
    }
L_088C4DD8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088C4DF0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_088C5518;
L_088C4DF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4E08;
      }
      goto L_088C4DF8;
    }
L_088C4DF8:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4E18;
      }
      goto L_088C4E00;
    }
L_088C4E00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4E58;
      }
      goto L_088C4E08;
    }
L_088C4E08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4F24;
      }
      goto L_088C4E10;
    }
L_088C4E10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4F24;
      }
      goto L_088C4E18;
    }
L_088C4E18:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088C4E30u);
    ctx.gpr[8] = (0u | 0u);
    goto L_088C5518;
L_088C4E30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4E70;
      }
      goto L_088C4E38;
    }
L_088C4E38:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088C4E50u);
    ctx.gpr[8] = (0u | 0u);
    goto L_088C5518;
L_088C4E50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4E68;
      }
      goto L_088C4E58;
    }
L_088C4E58:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4E78;
      }
      goto L_088C4E60;
    }
L_088C4E60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4EB8;
      }
      goto L_088C4E68;
    }
L_088C4E68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4F24;
      }
      goto L_088C4E70;
    }
L_088C4E70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4F24;
      }
      goto L_088C4E78;
    }
L_088C4E78:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C4E90u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    goto L_088C5518;
L_088C4E90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4F20;
      }
      goto L_088C4E98;
    }
L_088C4E98:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C4EB0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    goto L_088C5518;
L_088C4EB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4F18;
      }
      goto L_088C4EB8;
    }
L_088C4EB8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4F10;
      }
      goto L_088C4EC0;
    }
L_088C4EC0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088C4ED8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_088C5518;
L_088C4ED8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4F08;
      }
      goto L_088C4EE0;
    }
L_088C4EE0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088C4EF8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_088C5518;
L_088C4EF8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4F10;
      }
      goto L_088C4F00;
    }
L_088C4F00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4F24;
      }
      goto L_088C4F08;
    }
L_088C4F08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4F24;
      }
      goto L_088C4F10;
    }
L_088C4F10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C4F24;
      }
      goto L_088C4F18;
    }
L_088C4F18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4F24;
      }
      goto L_088C4F20;
    }
L_088C4F20:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C4F24;
L_088C4F24:
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
L_088C4F54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[10] = (ctx.gpr[2] & 255u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[11] & 255u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[11] = (ctx.gpr[3] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[10] = (ctx.gpr[2] & 255u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[11] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (2230u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(-7119)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(-7118)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(-7119), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(-7118), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
      if (branch_taken) {
          goto L_088C5068;
      }
      goto L_088C5014;
    }
L_088C5014:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088C5040u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 240u, 0x088C9364u>(ctx, &aot_mem) && ctx.pc == 0x088C5040u) goto L_088C5040;
    return;
L_088C5040:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088C5064u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 240u, 0x088C9364u>(ctx, &aot_mem) && ctx.pc == 0x088C5064u) goto L_088C5064;
    return;
L_088C5064:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_088C5068;
L_088C5068:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C50BC;
      }
      goto L_088C5070;
    }
L_088C5070:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088C5098u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 240u, 0x088C9364u>(ctx, &aot_mem) && ctx.pc == 0x088C5098u) goto L_088C5098;
    return;
L_088C5098:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088C50BCu);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 240u, 0x088C9364u>(ctx, &aot_mem) && ctx.pc == 0x088C50BCu) goto L_088C50BC;
    return;
L_088C50BC:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_088C5140;
      }
      goto L_088C50C4;
    }
L_088C50C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C50D8;
      }
      goto L_088C50D0;
    }
L_088C50D0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(-7119), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088C50D8;
L_088C50D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C50EC;
      }
      goto L_088C50E4;
    }
L_088C50E4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(-7118), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088C50EC;
L_088C50EC:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088C5114u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 240u, 0x088C9364u>(ctx, &aot_mem) && ctx.pc == 0x088C5114u) goto L_088C5114;
    return;
L_088C5114:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088C5138u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 240u, 0x088C9364u>(ctx, &aot_mem) && ctx.pc == 0x088C5138u) goto L_088C5138;
    return;
L_088C5138:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(-7119), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(-7118), static_cast<std::uint8_t>(0u));
    goto L_088C5140;
L_088C5140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088C51A0;
      }
      goto L_088C514C;
    }
L_088C514C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C5178u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 240u, 0x088C9364u>(ctx, &aot_mem) && ctx.pc == 0x088C5178u) goto L_088C5178;
    return;
L_088C5178:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C519Cu);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 240u, 0x088C9364u>(ctx, &aot_mem) && ctx.pc == 0x088C519Cu) goto L_088C519C;
    return;
L_088C519C:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_088C51A0;
L_088C51A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C51D0;
      }
      goto L_088C51AC;
    }
L_088C51AC:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C51D0u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 240u, 0x088C9364u>(ctx, &aot_mem) && ctx.pc == 0x088C51D0u) goto L_088C51D0;
    return;
L_088C51D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(45)));
        goto L_088C522C;
    }
    goto L_088C51DC;
L_088C51DC:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088C5204u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 240u, 0x088C9364u>(ctx, &aot_mem) && ctx.pc == 0x088C5204u) goto L_088C5204;
    return;
L_088C5204:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088C5228u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 240u, 0x088C9364u>(ctx, &aot_mem) && ctx.pc == 0x088C5228u) goto L_088C5228;
    return;
L_088C5228:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(45)));
    goto L_088C522C;
L_088C522C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(-7119), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(-7118), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C5260;
      }
      goto L_088C5254;
    }
L_088C5254:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C5264;
      }
      goto L_088C5260;
    }
L_088C5260:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C5264;
L_088C5264:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5294:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[9] = (ctx.gpr[11] & 255u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    ctx.gpr[10] = (ctx.gpr[2] & 255u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    ctx.gpr[9] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088C536C;
      }
      goto L_088C5318;
    }
L_088C5318:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C5344u);
    ctx.gpr[11] = (0u | 0u);
    goto L_088C5698;
L_088C5344:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C5368u);
    ctx.gpr[11] = (0u | 0u);
    goto L_088C5698;
L_088C5368:
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_088C536C;
L_088C536C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C53C0;
      }
      goto L_088C5374;
    }
L_088C5374:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C539Cu);
    ctx.gpr[11] = (0u | 0u);
    goto L_088C5698;
L_088C539C:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C53C0u);
    ctx.gpr[11] = (0u | 0u);
    goto L_088C5698;
L_088C53C0:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5414;
      }
      goto L_088C53C8;
    }
L_088C53C8:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C53F0u);
    ctx.gpr[11] = (0u | 0u);
    goto L_088C5698;
L_088C53F0:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C5414u);
    ctx.gpr[11] = (0u | 0u);
    goto L_088C5698;
L_088C5414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C546C;
      }
      goto L_088C5420;
    }
L_088C5420:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C5448u);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    goto L_088C5698;
L_088C5448:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C546Cu);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    goto L_088C5698;
L_088C546C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C54C4;
      }
      goto L_088C5478;
    }
L_088C5478:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C54A0u);
    ctx.gpr[11] = (0u | 0u);
    goto L_088C5698;
L_088C54A0:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C54C4u);
    ctx.gpr[11] = (0u | 0u);
    goto L_088C5698;
L_088C54C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C54E0;
      }
      goto L_088C54D8;
    }
L_088C54D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C54E4;
      }
      goto L_088C54E0;
    }
L_088C54E0:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C54E4;
L_088C54E4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5518:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[6] & 255u);
    ctx.gpr[18] = (ctx.gpr[7] & 255u);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C5660;
      }
      goto L_088C5560;
    }
L_088C5560:
    ctx.gpr[4] = (16168u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (2227u << 16u);
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[30] = (2229u << 16u);
    goto L_088C5578;
L_088C5578:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C5658;
      }
      goto L_088C5584;
    }
L_088C5584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C55CC;
      }
      goto L_088C55A0;
    }
L_088C55A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(422))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C55CC;
      }
      goto L_088C55B0;
    }
L_088C55B0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C55CC;
      }
      goto L_088C55B8;
    }
L_088C55B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C5658;
      }
      goto L_088C55CC;
    }
L_088C55CC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(20976)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C5658;
      }
      goto L_088C55DC;
    }
L_088C55DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 512u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5658;
      }
      goto L_088C55F4;
    }
L_088C55F4:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7724)));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C5658;
      }
      goto L_088C5604;
    }
L_088C5604:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
        goto L_088C5620;
    }
    goto L_088C560C;
L_088C560C:
    ctx.gpr[31] = (0x088C5614u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_088C5840;
L_088C5614:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5658;
      }
      goto L_088C561C;
    }
L_088C561C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    goto L_088C5620;
L_088C5620:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C5648u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 168u, 0x088CD6F4u>(ctx, &aot_mem) && ctx.pc == 0x088C5648u) goto L_088C5648;
    return;
L_088C5648:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5658;
      }
      goto L_088C5650;
    }
L_088C5650:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C5664;
      }
      goto L_088C5658;
    }
L_088C5658:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5578;
      }
      goto L_088C5660;
    }
L_088C5660:
    ctx.gpr[2] = (0u | 1u);
    goto L_088C5664;
L_088C5664:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5698:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    ctx.gpr[22] = (ctx.gpr[9] & 255u);
    ctx.gpr[21] = (ctx.gpr[11] & 255u);
    ctx.gpr[30] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[23] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_088C57E0;
      }
      goto L_088C56F4;
    }
L_088C56F4:
    ctx.gpr[4] = (16168u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[19] = (2229u << 16u);
    goto L_088C570C;
L_088C570C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C57D0;
      }
      goto L_088C5718;
    }
L_088C5718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5760;
      }
      goto L_088C5734;
    }
L_088C5734:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(422))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5760;
      }
      goto L_088C5744;
    }
L_088C5744:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5760;
      }
      goto L_088C574C;
    }
L_088C574C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C57D0;
      }
      goto L_088C5760;
    }
L_088C5760:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(20976)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C57D0;
      }
      goto L_088C5770;
    }
L_088C5770:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 512u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C57D0;
      }
      goto L_088C5788;
    }
L_088C5788:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088C57C4u);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 278u, 0x088CE3B0u>(ctx, &aot_mem) && ctx.pc == 0x088C57C4u) goto L_088C57C4;
    return;
L_088C57C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C57D0;
      }
      goto L_088C57CC;
    }
L_088C57CC:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_088C57D0;
L_088C57D0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C570C;
      }
      goto L_088C57D8;
    }
L_088C57D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088C57E0;
L_088C57E0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C5808;
      }
      goto L_088C57F8;
    }
L_088C57F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088C580C;
      }
      goto L_088C5808;
    }
L_088C5808:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C580C;
L_088C580C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5840:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C5858u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 433u, 0x08941F70u>(ctx, &aot_mem) && ctx.pc == 0x088C5858u) goto L_088C5858;
    return;
L_088C5858:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5878;
      }
      goto L_088C5860;
    }
L_088C5860:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(434)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C5880;
      }
      goto L_088C5870;
    }
L_088C5870:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C5884;
      }
      goto L_088C5878;
    }
L_088C5878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C5884;
      }
      goto L_088C5880;
    }
L_088C5880:
    ctx.gpr[2] = (0u | 1u);
    goto L_088C5884;
L_088C5884:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5894:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20984), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C58D4u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7832)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088C58D4u) goto L_088C58D4;
    return;
L_088C58D4:
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(22128));
      if (branch_taken) {
          goto L_088C59D0;
      }
      goto L_088C58E4;
    }
L_088C58E4:
    ctx.gpr[19] = (0u | 4u);
    ctx.gpr[21] = (0u | 65535u);
    ctx.gpr[22] = (0u | 80u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    goto L_088C58F4;
L_088C58F4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088C59C4;
      }
      goto L_088C5908;
    }
L_088C5908:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(685)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C594C;
      }
      goto L_088C5918;
    }
L_088C5918:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C5940;
      }
      goto L_088C5924;
    }
L_088C5924:
    if (ctx.gpr[5] == ctx.gpr[21]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_088C5944;
    }
    goto L_088C592C;
L_088C592C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[22];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088C5944;
      }
      goto L_088C593C;
    }
L_088C593C:
    ctx.gpr[4] = (0u | 1u);
    goto L_088C5940;
L_088C5940:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088C5944;
L_088C5944:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C59C4;
      }
      goto L_088C594C;
    }
L_088C594C:
    ctx.gpr[31] = (0x088C5954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x088C5954u) goto L_088C5954;
    return;
L_088C5954:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088C59C4;
      }
      goto L_088C595C;
    }
L_088C595C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20984)));
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20984), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C59C4;
      }
      goto L_088C59BC;
    }
L_088C59BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C59D0;
      }
      goto L_088C59C4;
    }
L_088C59C4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C59D0;
    }
L_088C59D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20984)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_088C59D8;
L_088C59D8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C5A34;
      }
      goto L_088C59E8;
    }
L_088C59E8:
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    goto L_088C59F0;
L_088C59F0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5A20;
      }
      goto L_088C5A04;
    }
L_088C5A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    goto L_088C5A20;
L_088C5A20:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C59F0;
      }
      goto L_088C5A34;
    }
L_088C5A34:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C59D8;
      }
      goto L_088C5A3C;
    }
L_088C5A3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5A6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 368u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C5A98u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(3460));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 356u, 0x08AF5BC0u>(ctx, &aot_mem) && ctx.pc == 0x088C5A98u) goto L_088C5A98;
    return;
L_088C5A98:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5AA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-672));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(595), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(594), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[30]);
    ctx.gpr[7] = (ctx.gpr[10] & 255u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(593), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(20976)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[21]);
    ctx.gpr[6] = (0u | 65535u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[11] & 255u);
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    ctx.gpr[23] = (ctx.gpr[23] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C5B40;
      }
      goto L_088C5B2C;
    }
L_088C5B2C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088C5B54;
      }
      goto L_088C5B40;
    }
L_088C5B40:
    ctx.gpr[31] = (0x088C5B48u);
    // nop
    goto L_088C4C18;
L_088C5B48:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088C5B54;
L_088C5B54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[16] / ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[17];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[20];
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088C5BC0;
      }
      goto L_088C5BB8;
    }
L_088C5BB8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_088C5BD0;
      }
      goto L_088C5BC0;
    }
L_088C5BC0:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[20];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(592), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_088C5C40;
      }
      goto L_088C5BC8;
    }
L_088C5BC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5D94;
      }
      goto L_088C5BD0;
    }
L_088C5BD0:
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C5C0Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C5C0Cu) goto L_088C5C0C;
    return;
L_088C5C0C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C5C38u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4CF8;
L_088C5C38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C68C0;
      }
      goto L_088C5C40;
    }
L_088C5C40:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5CF0;
      }
      goto L_088C5C4C;
    }
L_088C5C4C:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5CE8;
      }
      goto L_088C5C5C;
    }
L_088C5C5C:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C5C60;
L_088C5C60:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C5C9Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C5C9Cu) goto L_088C5C9C;
    return;
L_088C5C9C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C5CC8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4CF8;
L_088C5CC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5CD8;
      }
      goto L_088C5CD0;
    }
L_088C5CD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C68C0;
      }
      goto L_088C5CD8;
    }
L_088C5CD8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C5C60;
      }
      goto L_088C5CE8;
    }
L_088C5CE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5D8C;
      }
      goto L_088C5CF0;
    }
L_088C5CF0:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5D8C;
      }
      goto L_088C5D00;
    }
L_088C5D00:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C5D04;
L_088C5D04:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C5D40u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C5D40u) goto L_088C5D40;
    return;
L_088C5D40:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C5D6Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4CF8;
L_088C5D6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5D7C;
      }
      goto L_088C5D74;
    }
L_088C5D74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C68C0;
      }
      goto L_088C5D7C;
    }
L_088C5D7C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C5D04;
      }
      goto L_088C5D8C;
    }
L_088C5D8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C68C0;
      }
      goto L_088C5D94;
    }
L_088C5D94:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088C5EF0;
      }
      goto L_088C5D9C;
    }
L_088C5D9C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5E4C;
      }
      goto L_088C5DA8;
    }
L_088C5DA8:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5E44;
      }
      goto L_088C5DB8;
    }
L_088C5DB8:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    goto L_088C5DBC;
L_088C5DBC:
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C5DF8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C5DF8u) goto L_088C5DF8;
    return;
L_088C5DF8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C5E24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4CF8;
L_088C5E24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5E34;
      }
      goto L_088C5E2C;
    }
L_088C5E2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C68C0;
      }
      goto L_088C5E34;
    }
L_088C5E34:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_088C5DBC;
      }
      goto L_088C5E44;
    }
L_088C5E44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5EE8;
      }
      goto L_088C5E4C;
    }
L_088C5E4C:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5EE8;
      }
      goto L_088C5E5C;
    }
L_088C5E5C:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    goto L_088C5E60;
L_088C5E60:
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C5E9Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C5E9Cu) goto L_088C5E9C;
    return;
L_088C5E9C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C5EC8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4CF8;
L_088C5EC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5ED8;
      }
      goto L_088C5ED0;
    }
L_088C5ED0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C68C0;
      }
      goto L_088C5ED8;
    }
L_088C5ED8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_088C5E60;
      }
      goto L_088C5EE8;
    }
L_088C5EE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C68C0;
      }
      goto L_088C5EF0;
    }
L_088C5EF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16928u << 16u);
      if (branch_taken) {
          goto L_088C63E8;
      }
      goto L_088C5F08;
    }
L_088C5F08:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[20] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[18] = ctx.fpr[17] - ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[19];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-49));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    ctx.fpr[2] = ctx.fpr[16] / ctx.fpr[13];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[18] - ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[19];
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[19];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[19];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[19];
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_088C604C;
      }
      goto L_088C5FA8;
    }
L_088C5FA8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6044;
      }
      goto L_088C5FB4;
    }
L_088C5FB4:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C5FB8;
L_088C5FB8:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C5FF8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C5FF8u) goto L_088C5FF8;
    return;
L_088C5FF8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C6024u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4CF8;
L_088C6024:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
      if (branch_taken) {
          goto L_088C6034;
      }
      goto L_088C602C;
    }
L_088C602C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C68C0;
      }
      goto L_088C6034;
    }
L_088C6034:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C5FB8;
      }
      goto L_088C6044;
    }
L_088C6044:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C60E8;
      }
      goto L_088C604C;
    }
L_088C604C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C60E8;
      }
      goto L_088C6058;
    }
L_088C6058:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C605C;
L_088C605C:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C609Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C609Cu) goto L_088C609C;
    return;
L_088C609C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C60C8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4CF8;
L_088C60C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
      if (branch_taken) {
          goto L_088C60D8;
      }
      goto L_088C60D0;
    }
L_088C60D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C68C0;
      }
      goto L_088C60D8;
    }
L_088C60D8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C605C;
      }
      goto L_088C60E8;
    }
L_088C60E8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C629C;
      }
      goto L_088C60FC;
    }
L_088C60FC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-49));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C61F0;
      }
      goto L_088C614C;
    }
L_088C614C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C61E8;
      }
      goto L_088C6158;
    }
L_088C6158:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C615C;
L_088C615C:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[16] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C619Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C619Cu) goto L_088C619C;
    return;
L_088C619C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C61C8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4CF8;
L_088C61C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
      if (branch_taken) {
          goto L_088C61D8;
      }
      goto L_088C61D0;
    }
L_088C61D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C68C0;
      }
      goto L_088C61D8;
    }
L_088C61D8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C615C;
      }
      goto L_088C61E8;
    }
L_088C61E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C628C;
      }
      goto L_088C61F0;
    }
L_088C61F0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C628C;
      }
      goto L_088C61FC;
    }
L_088C61FC:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C6200;
L_088C6200:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[16] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C6240u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C6240u) goto L_088C6240;
    return;
L_088C6240:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C626Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4CF8;
L_088C626C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
      if (branch_taken) {
          goto L_088C627C;
      }
      goto L_088C6274;
    }
L_088C6274:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C68C0;
      }
      goto L_088C627C;
    }
L_088C627C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C6200;
      }
      goto L_088C628C;
    }
L_088C628C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C60FC;
      }
      goto L_088C629C;
    }
L_088C629C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
      if (branch_taken) {
          goto L_088C6348;
      }
      goto L_088C62A8;
    }
L_088C62A8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6340;
      }
      goto L_088C62B4;
    }
L_088C62B4:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C62B8;
L_088C62B8:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C62F4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C62F4u) goto L_088C62F4;
    return;
L_088C62F4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C6320u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4CF8;
L_088C6320:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6330;
      }
      goto L_088C6328;
    }
L_088C6328:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C68C0;
      }
      goto L_088C6330;
    }
L_088C6330:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C62B8;
      }
      goto L_088C6340;
    }
L_088C6340:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C63E0;
      }
      goto L_088C6348;
    }
L_088C6348:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C63E0;
      }
      goto L_088C6354;
    }
L_088C6354:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C6358;
L_088C6358:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C6394u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C6394u) goto L_088C6394;
    return;
L_088C6394:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C63C0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4CF8;
L_088C63C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C63D0;
      }
      goto L_088C63C8;
    }
L_088C63C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C68C0;
      }
      goto L_088C63D0;
    }
L_088C63D0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C6358;
      }
      goto L_088C63E0;
    }
L_088C63E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C68BC;
      }
      goto L_088C63E8;
    }
L_088C63E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[20] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[18] = ctx.fpr[17] - ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[19];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-50));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    ctx.fpr[2] = ctx.fpr[16] / ctx.fpr[13];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[18] - ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[19];
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[19];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[19];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[19];
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_088C6528;
      }
      goto L_088C6484;
    }
L_088C6484:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6520;
      }
      goto L_088C6490;
    }
L_088C6490:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C6494;
L_088C6494:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C64D4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C64D4u) goto L_088C64D4;
    return;
L_088C64D4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C6500u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4CF8;
L_088C6500:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
      if (branch_taken) {
          goto L_088C6510;
      }
      goto L_088C6508;
    }
L_088C6508:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C68C0;
      }
      goto L_088C6510;
    }
L_088C6510:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C6494;
      }
      goto L_088C6520;
    }
L_088C6520:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C65C4;
      }
      goto L_088C6528;
    }
L_088C6528:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C65C4;
      }
      goto L_088C6534;
    }
L_088C6534:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C6538;
L_088C6538:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C6578u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C6578u) goto L_088C6578;
    return;
L_088C6578:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C65A4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4CF8;
L_088C65A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
      if (branch_taken) {
          goto L_088C65B4;
      }
      goto L_088C65AC;
    }
L_088C65AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C68C0;
      }
      goto L_088C65B4;
    }
L_088C65B4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C6538;
      }
      goto L_088C65C4;
    }
L_088C65C4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6778;
      }
      goto L_088C65D8;
    }
L_088C65D8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-50));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C66CC;
      }
      goto L_088C6628;
    }
L_088C6628:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C66C4;
      }
      goto L_088C6634;
    }
L_088C6634:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C6638;
L_088C6638:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[16] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C6678u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C6678u) goto L_088C6678;
    return;
L_088C6678:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C66A4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4CF8;
L_088C66A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
      if (branch_taken) {
          goto L_088C66B4;
      }
      goto L_088C66AC;
    }
L_088C66AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C68C0;
      }
      goto L_088C66B4;
    }
L_088C66B4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C6638;
      }
      goto L_088C66C4;
    }
L_088C66C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6768;
      }
      goto L_088C66CC;
    }
L_088C66CC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6768;
      }
      goto L_088C66D8;
    }
L_088C66D8:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C66DC;
L_088C66DC:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.gpr[16] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C671Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C671Cu) goto L_088C671C;
    return;
L_088C671C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C6748u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4CF8;
L_088C6748:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
      if (branch_taken) {
          goto L_088C6758;
      }
      goto L_088C6750;
    }
L_088C6750:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C68C0;
      }
      goto L_088C6758;
    }
L_088C6758:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C66DC;
      }
      goto L_088C6768;
    }
L_088C6768:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C65D8;
      }
      goto L_088C6778;
    }
L_088C6778:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
      if (branch_taken) {
          goto L_088C6824;
      }
      goto L_088C6784;
    }
L_088C6784:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C681C;
      }
      goto L_088C6790;
    }
L_088C6790:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C6794;
L_088C6794:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C67D0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C67D0u) goto L_088C67D0;
    return;
L_088C67D0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C67FCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4CF8;
L_088C67FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C680C;
      }
      goto L_088C6804;
    }
L_088C6804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C68C0;
      }
      goto L_088C680C;
    }
L_088C680C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C6794;
      }
      goto L_088C681C;
    }
L_088C681C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C68BC;
      }
      goto L_088C6824;
    }
L_088C6824:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C68BC;
      }
      goto L_088C6830;
    }
L_088C6830:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C6834;
L_088C6834:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C6870u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C6870u) goto L_088C6870;
    return;
L_088C6870:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C689Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4CF8;
L_088C689C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C68AC;
      }
      goto L_088C68A4;
    }
L_088C68A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C68C0;
      }
      goto L_088C68AC;
    }
L_088C68AC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C6834;
      }
      goto L_088C68BC;
    }
L_088C68BC:
    ctx.gpr[2] = (0u | 1u);
    goto L_088C68C0;
L_088C68C0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
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
L_088C68F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-720));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(647), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(646), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(645), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(644), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(643), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), ctx.gpr[16]);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(732)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(642), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), ctx.gpr[30]);
    ctx.gpr[8] = (ctx.gpr[10] & 255u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(641), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(20976)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), ctx.gpr[21]);
    ctx.gpr[8] = (0u | 65535u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), ctx.gpr[23]);
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(684), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088C69B0;
      }
      goto L_088C699C;
    }
L_088C699C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088C69C4;
      }
      goto L_088C69B0;
    }
L_088C69B0:
    ctx.gpr[31] = (0x088C69B8u);
    // nop
    goto L_088C4C18;
L_088C69B8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088C69C4;
L_088C69C4:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (50426u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6A2C;
      }
      goto L_088C69E8;
    }
L_088C69E8:
    ctx.gpr[5] = (17658u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (50426u << 16u);
      if (branch_taken) {
          goto L_088C6A2C;
      }
      goto L_088C6A00;
    }
L_088C6A00:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (17658u << 16u);
      if (branch_taken) {
          goto L_088C6A2C;
      }
      goto L_088C6A14;
    }
L_088C6A14:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088C6A30;
      }
      goto L_088C6A28;
    }
L_088C6A28:
    ctx.gpr[4] = (0u | 1u);
    goto L_088C6A2C;
L_088C6A2C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088C6A30;
L_088C6A30:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6A60;
      }
      goto L_088C6A38;
    }
L_088C6A38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (50426u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6A68;
      }
      goto L_088C6A58;
    }
L_088C6A58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088C6AB0;
      }
      goto L_088C6A60;
    }
L_088C6A60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C7AA0;
      }
      goto L_088C6A68;
    }
L_088C6A68:
    ctx.gpr[5] = (17658u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (50426u << 16u);
      if (branch_taken) {
          goto L_088C6AAC;
      }
      goto L_088C6A80;
    }
L_088C6A80:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (17658u << 16u);
      if (branch_taken) {
          goto L_088C6AAC;
      }
      goto L_088C6A94;
    }
L_088C6A94:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088C6AB0;
      }
      goto L_088C6AA8;
    }
L_088C6AA8:
    ctx.gpr[4] = (0u | 1u);
    goto L_088C6AAC;
L_088C6AAC:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088C6AB0;
L_088C6AB0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16928u << 16u);
      if (branch_taken) {
          goto L_088C6AF0;
      }
      goto L_088C6AB8;
    }
L_088C6AB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16968u << 16u);
    ctx.gpr[5] = (0u | 99u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6AF8;
      }
      goto L_088C6AE8;
    }
L_088C6AE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088C6B00;
      }
      goto L_088C6AF0;
    }
L_088C6AF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C7AA0;
      }
      goto L_088C6AF8;
    }
L_088C6AF8:
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_088C6B00;
L_088C6B00:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
        goto L_088C6B08;
    }
    goto L_088C6B08;
L_088C6B08:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16968u << 16u);
    ctx.gpr[5] = (0u | 99u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
        goto L_088C6B40;
    }
    goto L_088C6B40;
L_088C6B40:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_088C6B4C;
    }
    goto L_088C6B4C;
L_088C6B4C:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16968u << 16u);
    ctx.gpr[5] = (0u | 99u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
        goto L_088C6B84;
    }
    goto L_088C6B84;
L_088C6B84:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_088C6B90;
    }
    goto L_088C6B90;
L_088C6B90:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16968u << 16u);
    ctx.gpr[5] = (0u | 99u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_088C6BC8;
    }
    goto L_088C6BC8;
L_088C6BC8:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_088C6BD8;
    }
    goto L_088C6BD8;
L_088C6BD8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088C6BF0;
      }
      goto L_088C6BE8;
    }
L_088C6BE8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_088C6C00;
      }
      goto L_088C6BF0;
    }
L_088C6BF0:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[20];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(640), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_088C6C90;
      }
      goto L_088C6BF8;
    }
L_088C6BF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6E2C;
      }
      goto L_088C6C00;
    }
L_088C6C00:
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C6C3Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C6C3Cu) goto L_088C6C3C;
    return;
L_088C6C3C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C6C88u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4F54;
L_088C6C88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7AA0;
      }
      goto L_088C6C90;
    }
L_088C6C90:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6D54;
      }
      goto L_088C6C9C;
    }
L_088C6C9C:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6D4C;
      }
      goto L_088C6CAC;
    }
L_088C6CAC:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C6CB0;
L_088C6CB0:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C6CECu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C6CECu) goto L_088C6CEC;
    return;
L_088C6CEC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C6D3Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4F54;
L_088C6D3C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C6CB0;
      }
      goto L_088C6D4C;
    }
L_088C6D4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6E04;
      }
      goto L_088C6D54;
    }
L_088C6D54:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6E04;
      }
      goto L_088C6D64;
    }
L_088C6D64:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C6D68;
L_088C6D68:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C6DA4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C6DA4u) goto L_088C6DA4;
    return;
L_088C6DA4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C6DF4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4F54;
L_088C6DF4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C6D68;
      }
      goto L_088C6E04;
    }
L_088C6E04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_088C6E24;
    }
    goto L_088C6E24;
L_088C6E24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088C7AA0;
      }
      goto L_088C6E2C;
    }
L_088C6E2C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088C6FD0;
      }
      goto L_088C6E34;
    }
L_088C6E34:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6EF8;
      }
      goto L_088C6E40;
    }
L_088C6E40:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6EF0;
      }
      goto L_088C6E50;
    }
L_088C6E50:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    goto L_088C6E54;
L_088C6E54:
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C6E90u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C6E90u) goto L_088C6E90;
    return;
L_088C6E90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C6EE0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4F54;
L_088C6EE0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_088C6E54;
      }
      goto L_088C6EF0;
    }
L_088C6EF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6FA8;
      }
      goto L_088C6EF8;
    }
L_088C6EF8:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6FA8;
      }
      goto L_088C6F08;
    }
L_088C6F08:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    goto L_088C6F0C;
L_088C6F0C:
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C6F48u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C6F48u) goto L_088C6F48;
    return;
L_088C6F48:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C6F98u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4F54;
L_088C6F98:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_088C6F0C;
      }
      goto L_088C6FA8;
    }
L_088C6FA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_088C6FC8;
    }
    goto L_088C6FC8;
L_088C6FC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088C7AA0;
      }
      goto L_088C6FD0;
    }
L_088C6FD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16928u << 16u);
      if (branch_taken) {
          goto L_088C7538;
      }
      goto L_088C6FE8;
    }
L_088C6FE8:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[20] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[18] = ctx.fpr[17] - ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[19];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-49));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    ctx.fpr[2] = ctx.fpr[16] / ctx.fpr[13];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[18] - ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[19];
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[19];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[19];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[19];
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_088C7140;
      }
      goto L_088C7088;
    }
L_088C7088:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7138;
      }
      goto L_088C7094;
    }
L_088C7094:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[19]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C70D8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C70D8u) goto L_088C70D8;
    return;
L_088C70D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C7128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4F54;
L_088C7128:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
      if (branch_taken) {
          goto L_088C7094;
      }
      goto L_088C7138;
    }
L_088C7138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C71F0;
      }
      goto L_088C7140;
    }
L_088C7140:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C71F0;
      }
      goto L_088C714C;
    }
L_088C714C:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[19]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C7190u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C7190u) goto L_088C7190;
    return;
L_088C7190:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C71E0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4F54;
L_088C71E0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
      if (branch_taken) {
          goto L_088C714C;
      }
      goto L_088C71F0;
    }
L_088C71F0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C73CC;
      }
      goto L_088C7204;
    }
L_088C7204:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-49));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C730C;
      }
      goto L_088C7254;
    }
L_088C7254:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7304;
      }
      goto L_088C7260;
    }
L_088C7260:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C72A4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C72A4u) goto L_088C72A4;
    return;
L_088C72A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C72F4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4F54;
L_088C72F4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
      if (branch_taken) {
          goto L_088C7260;
      }
      goto L_088C7304;
    }
L_088C7304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C73BC;
      }
      goto L_088C730C;
    }
L_088C730C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C73BC;
      }
      goto L_088C7318;
    }
L_088C7318:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C735Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C735Cu) goto L_088C735C;
    return;
L_088C735C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C73ACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4F54;
L_088C73AC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
      if (branch_taken) {
          goto L_088C7318;
      }
      goto L_088C73BC;
    }
L_088C73BC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C7204;
      }
      goto L_088C73CC;
    }
L_088C73CC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
      if (branch_taken) {
          goto L_088C7488;
      }
      goto L_088C73D8;
    }
L_088C73D8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7480;
      }
      goto L_088C73E4;
    }
L_088C73E4:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C73E8;
L_088C73E8:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C7424u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C7424u) goto L_088C7424;
    return;
L_088C7424:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C7470u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4F54;
L_088C7470:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C73E8;
      }
      goto L_088C7480;
    }
L_088C7480:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7530;
      }
      goto L_088C7488;
    }
L_088C7488:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7530;
      }
      goto L_088C7494;
    }
L_088C7494:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C7498;
L_088C7498:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C74D4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C74D4u) goto L_088C74D4;
    return;
L_088C74D4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C7520u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4F54;
L_088C7520:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C7498;
      }
      goto L_088C7530;
    }
L_088C7530:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7A7C;
      }
      goto L_088C7538;
    }
L_088C7538:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[20] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[18] = ctx.fpr[17] - ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[19];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-50));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    ctx.fpr[2] = ctx.fpr[16] / ctx.fpr[13];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[18] - ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[19];
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[19];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[19];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[19];
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_088C768C;
      }
      goto L_088C75D4;
    }
L_088C75D4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7684;
      }
      goto L_088C75E0;
    }
L_088C75E0:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[19]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C7624u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C7624u) goto L_088C7624;
    return;
L_088C7624:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C7674u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4F54;
L_088C7674:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
      if (branch_taken) {
          goto L_088C75E0;
      }
      goto L_088C7684;
    }
L_088C7684:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C773C;
      }
      goto L_088C768C;
    }
L_088C768C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C773C;
      }
      goto L_088C7698;
    }
L_088C7698:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[19]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C76DCu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C76DCu) goto L_088C76DC;
    return;
L_088C76DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C772Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4F54;
L_088C772C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
      if (branch_taken) {
          goto L_088C7698;
      }
      goto L_088C773C;
    }
L_088C773C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7918;
      }
      goto L_088C7750;
    }
L_088C7750:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-50));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7858;
      }
      goto L_088C77A0;
    }
L_088C77A0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7850;
      }
      goto L_088C77AC;
    }
L_088C77AC:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C77F0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C77F0u) goto L_088C77F0;
    return;
L_088C77F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C7840u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4F54;
L_088C7840:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
      if (branch_taken) {
          goto L_088C77AC;
      }
      goto L_088C7850;
    }
L_088C7850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7908;
      }
      goto L_088C7858;
    }
L_088C7858:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7908;
      }
      goto L_088C7864;
    }
L_088C7864:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C78A8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C78A8u) goto L_088C78A8;
    return;
L_088C78A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C78F8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4F54;
L_088C78F8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
      if (branch_taken) {
          goto L_088C7864;
      }
      goto L_088C7908;
    }
L_088C7908:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C7750;
      }
      goto L_088C7918;
    }
L_088C7918:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
      if (branch_taken) {
          goto L_088C79D4;
      }
      goto L_088C7924;
    }
L_088C7924:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C79CC;
      }
      goto L_088C7930;
    }
L_088C7930:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C7934;
L_088C7934:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C7970u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C7970u) goto L_088C7970;
    return;
L_088C7970:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C79BCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4F54;
L_088C79BC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C7934;
      }
      goto L_088C79CC;
    }
L_088C79CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7A7C;
      }
      goto L_088C79D4;
    }
L_088C79D4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7A7C;
      }
      goto L_088C79E0;
    }
L_088C79E0:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C79E4;
L_088C79E4:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C7A20u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 680u, 0x08A075D0u>(ctx, &aot_mem) && ctx.pc == 0x088C7A20u) goto L_088C7A20;
    return;
L_088C7A20:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C7A6Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4F54;
L_088C7A6C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C79E4;
      }
      goto L_088C7A7C;
    }
L_088C7A7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_088C7A9C;
    }
    goto L_088C7A9C;
L_088C7A9C:
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    goto L_088C7AA0;
L_088C7AA0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(684)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7AD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7B04;
      }
      goto L_088C7AFC;
    }
L_088C7AFC:
    ctx.gpr[31] = (0x088C7B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 664u, 0x0883B714u>(ctx, &aot_mem) && ctx.pc == 0x088C7B04u) goto L_088C7B04;
    return;
L_088C7B04:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7BCC;
      }
      goto L_088C7B14;
    }
L_088C7B14:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7BB4;
      }
      goto L_088C7B24;
    }
L_088C7B24:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18696));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7BA4;
      }
      goto L_088C7B40;
    }
L_088C7B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7BA4;
      }
      goto L_088C7B4C;
    }
L_088C7B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7B64u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7B64u) goto L_088C7B64;
    return;
L_088C7B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7B7Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7B7Cu) goto L_088C7B7C;
    return;
L_088C7B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7B94u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7B94u) goto L_088C7B94;
    return;
L_088C7B94:
    ctx.gpr[31] = (0x088C7B9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x088C7B9Cu) goto L_088C7B9C;
    return;
L_088C7B9C:
    ctx.gpr[31] = (0x088C7BA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x088C7BA4u) goto L_088C7BA4;
    return;
L_088C7BA4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7B24;
      }
      goto L_088C7BB4;
    }
L_088C7BB4:
    ctx.gpr[31] = (0x088C7BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 659u, 0x08A9A180u>(ctx, &aot_mem) && ctx.pc == 0x088C7BBCu) goto L_088C7BBC;
    return;
L_088C7BBC:
    ctx.gpr[31] = (0x088C7BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 658u, 0x08A9A178u>(ctx, &aot_mem) && ctx.pc == 0x088C7BC4u) goto L_088C7BC4;
    return;
L_088C7BC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 64u, 0x088C8390u>(ctx, &aot_mem); return;
      }
      goto L_088C7BCC;
    }
L_088C7BCC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7832)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7C44;
      }
      goto L_088C7BDC;
    }
L_088C7BDC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C7BF8;
      }
      goto L_088C7BF0;
    }
L_088C7BF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7C3C;
      }
      goto L_088C7BF8;
    }
L_088C7BF8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7C24;
      }
      goto L_088C7C08;
    }
L_088C7C08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C7C24;
      }
      goto L_088C7C1C;
    }
L_088C7C1C:
    ctx.gpr[31] = (0x088C7C24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 263u, 0x089A5298u>(ctx, &aot_mem) && ctx.pc == 0x088C7C24u) goto L_088C7C24;
    return;
L_088C7C24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7C3Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7C3Cu) goto L_088C7C3C;
    return;
L_088C7C3C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7BDC;
      }
      goto L_088C7C44;
    }
L_088C7C44:
    ctx.gpr[31] = (0x088C7C4Cu);
    // nop
    goto L_088C5894;
L_088C7C4C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7832)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7D08;
      }
      goto L_088C7C5C;
    }
L_088C7C5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C7C80;
      }
      goto L_088C7C70;
    }
L_088C7C70:
    ctx.gpr[31] = (0x088C7C78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088C40A0;
L_088C7C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7D00;
      }
      goto L_088C7C80;
    }
L_088C7C80:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(936)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7CB0;
      }
      goto L_088C7C90;
    }
L_088C7C90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7CA8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7CA8u) goto L_088C7CA8;
    return;
L_088C7CA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7CC8;
      }
      goto L_088C7CB0;
    }
L_088C7CB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7CC8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7CC8u) goto L_088C7CC8;
    return;
L_088C7CC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C7CE8;
      }
      goto L_088C7CD8;
    }
L_088C7CD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088C7CF0;
      }
      goto L_088C7CE8;
    }
L_088C7CE8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088C7CF0;
L_088C7CF0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7D00;
      }
      goto L_088C7CF8;
    }
L_088C7CF8:
    ctx.gpr[31] = (0x088C7D00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 157u, 0x08A0D3C0u>(ctx, &aot_mem) && ctx.pc == 0x088C7D00u) goto L_088C7D00;
    return;
L_088C7D00:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7C5C;
      }
      goto L_088C7D08;
    }
L_088C7D08:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7811), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7832)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7DBC;
      }
      goto L_088C7D24;
    }
L_088C7D24:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C7DB4;
      }
      goto L_088C7D44;
    }
L_088C7D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7D64;
      }
      goto L_088C7D54;
    }
L_088C7D54:
    ctx.gpr[31] = (0x088C7D5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088C40A0;
L_088C7D5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7DB4;
      }
      goto L_088C7D64;
    }
L_088C7D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7D7Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7D7Cu) goto L_088C7D7C;
    return;
L_088C7D7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C7D9C;
      }
      goto L_088C7D8C;
    }
L_088C7D8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088C7DA4;
      }
      goto L_088C7D9C;
    }
L_088C7D9C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088C7DA4;
L_088C7DA4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7DB4;
      }
      goto L_088C7DAC;
    }
L_088C7DAC:
    ctx.gpr[31] = (0x088C7DB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 157u, 0x08A0D3C0u>(ctx, &aot_mem) && ctx.pc == 0x088C7DB4u) goto L_088C7DB4;
    return;
L_088C7DB4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7D24;
      }
      goto L_088C7DBC;
    }
L_088C7DBC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7811), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6866), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7832)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7E28;
      }
      goto L_088C7DDC;
    }
L_088C7DDC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C7E20;
      }
      goto L_088C7DF8;
    }
L_088C7DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7E10u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7E10u) goto L_088C7E10;
    return;
L_088C7E10:
    ctx.gpr[31] = (0x088C7E18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x088C7E18u) goto L_088C7E18;
    return;
L_088C7E18:
    ctx.gpr[31] = (0x088C7E20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x088C7E20u) goto L_088C7E20;
    return;
L_088C7E20:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7DDC;
      }
      goto L_088C7E28;
    }
L_088C7E28:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6866), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7EB0;
      }
      goto L_088C7E44;
    }
L_088C7E44:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7832)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7EA0;
      }
      goto L_088C7E54;
    }
L_088C7E54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C7E98;
      }
      goto L_088C7E70;
    }
L_088C7E70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7E88u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7E88u) goto L_088C7E88;
    return;
L_088C7E88:
    ctx.gpr[31] = (0x088C7E90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x088C7E90u) goto L_088C7E90;
    return;
L_088C7E90:
    ctx.gpr[31] = (0x088C7E98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x088C7E98u) goto L_088C7E98;
    return;
L_088C7E98:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7E54;
      }
      goto L_088C7EA0;
    }
L_088C7EA0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7E44;
      }
      goto L_088C7EB0;
    }
L_088C7EB0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7832)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7F64;
      }
      goto L_088C7EC0;
    }
L_088C7EC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C7F5C;
      }
      goto L_088C7EDC;
    }
L_088C7EDC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 14u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7F14u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7F14u) goto L_088C7F14;
    return;
L_088C7F14:
    ctx.gpr[31] = (0x088C7F1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x088C7F1Cu) goto L_088C7F1C;
    return;
L_088C7F1C:
    ctx.gpr[31] = (0x088C7F24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x088C7F24u) goto L_088C7F24;
    return;
L_088C7F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7F5C;
      }
      goto L_088C7F3C;
    }
L_088C7F3C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 14u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_088C7F5C;
L_088C7F5C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7EC0;
      }
      goto L_088C7F64;
    }
L_088C7F64:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6865), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7832)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 1u, 0x088C8000u>(ctx, &aot_mem); return;
      }
      goto L_088C7F7C;
    }
L_088C7F7C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C7FF8;
      }
      goto L_088C7F98;
    }
L_088C7F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7FB0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7FB0u) goto L_088C7FB0;
    return;
L_088C7FB0:
    ctx.gpr[31] = (0x088C7FB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x088C7FB8u) goto L_088C7FB8;
    return;
L_088C7FB8:
    ctx.gpr[31] = (0x088C7FC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x088C7FC0u) goto L_088C7FC0;
    return;
L_088C7FC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7FF8;
      }
      goto L_088C7FD8;
    }
L_088C7FD8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 14u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_088C7FF8;
L_088C7FF8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7F7C;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 1u, 0x088C8000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0048(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0048_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_48(Runtime &runtime) {
    runtime.register_generated_unit(48u, 0x088C4000u, 16384u, &recomp_unit_0048, &recomp_unit_0048_entry);
    runtime.register_function(0x088C4004u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4014u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4028u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4048u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4068u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4070u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4078u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4100u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4108u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4110u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4118u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4120u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4128u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4144u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C414Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C415Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C41D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C41D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C41F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C41F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C41FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4208u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4228u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C423Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4250u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4264u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4278u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C428Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C429Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4310u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4318u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4320u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4328u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4344u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4354u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C439Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4404u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C440Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4424u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C442Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4430u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4438u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4440u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4448u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4450u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4458u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4478u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C448Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4530u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4550u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4554u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C456Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4574u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4578u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4580u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C459Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4614u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C461Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4620u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4628u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4670u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4678u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4688u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C46ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C475Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4780u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C47A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C47C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C47D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C47D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C47E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C47E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C47F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4808u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4818u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4828u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4864u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C488Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C48B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C48E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C48F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4900u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4948u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C499Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C49B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C49CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C49D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C49DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C49E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C49ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A04u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A14u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A28u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A40u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A7Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AA8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4ABCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4ACCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AD8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AE0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B4Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B94u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4BACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4BC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4BD8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4BE0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4BF4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4BFCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C10u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4CA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4CBCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4CC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4CE0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4CF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4CF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D58u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4DA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4DA8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4DB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4DB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4DD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4DD8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4DF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4DF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E00u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E08u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E10u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E58u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E68u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4ED8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EE0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F00u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F08u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F10u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F20u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5014u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5040u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5064u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5068u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5070u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5098u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5114u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5138u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5140u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C514Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5178u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C519Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5204u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5228u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C522Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5254u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5260u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5264u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5294u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5318u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5344u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5368u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C536Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5374u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C539Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5414u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5420u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5448u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C546Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5478u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5518u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5560u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5578u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5584u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C55A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C55B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C55B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C55CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C55DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C55F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5604u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C560Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5614u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C561Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5620u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5648u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5650u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5658u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5660u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5664u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5698u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C570Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5718u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5734u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5744u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C574Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5760u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5770u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5788u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5808u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C580Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5840u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5858u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5860u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5870u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5878u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5880u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5884u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5894u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5908u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5918u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5924u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C592Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C593Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5940u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5944u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C594Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5954u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C595Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A04u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A20u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A34u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A3Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A6Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5AA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B2Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B40u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5BB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5BC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5BC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5BD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C40u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C4Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CD8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D00u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D04u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D40u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D6Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D7Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D8Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D94u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DA8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DBCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E2Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E34u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E4Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5ED0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5ED8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F08u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5FA8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5FB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5FB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5FF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6024u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C602Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6034u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6044u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C604Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6058u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C605Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C609Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C614Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6158u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C615Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C619Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6200u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6240u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C626Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6274u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C627Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C628Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C629Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6320u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6328u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6330u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6340u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6348u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6354u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6358u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6394u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6484u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6490u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6494u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C64D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6500u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6508u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6510u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6520u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6528u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6534u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6538u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6578u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6628u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6634u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6638u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6678u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C671Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6748u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6750u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6758u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6768u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6778u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6784u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6790u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6794u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C67D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C67FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6804u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C680Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C681Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6824u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6830u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6834u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6870u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C689Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C699Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C69B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C69B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C69C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C69E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A00u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A14u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A28u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A2Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A58u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A68u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A94u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AA8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B00u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B08u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B40u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B4Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6BC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6BD8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6BE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6BF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6BF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C00u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C3Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6CACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6CB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6CECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D3Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D4Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D68u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6DA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6DF4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6E04u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6E24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6E2Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6E34u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6E40u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6E50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6E54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6E90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6EE0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6EF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6EF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F08u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6FA8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6FC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6FD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6FE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7088u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7094u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C70D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7128u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7138u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7140u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C714Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7190u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C71E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C71F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7204u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7254u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7260u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C72A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C72F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7304u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C730Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7318u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C735Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7424u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7470u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7480u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7488u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7494u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7498u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C74D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7520u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7530u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7538u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C75D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C75E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7624u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7674u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7684u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C768Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7698u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C76DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C772Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C773Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7750u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C77A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C77ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C77F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7840u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7850u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7858u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7864u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C78A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C78F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7908u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7918u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7924u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7930u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7934u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7970u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C79BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C79CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C79D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C79E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C79E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A20u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A6Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A7Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7AA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7AD4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7AFCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B04u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B14u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B40u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B4Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B7Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B94u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BBCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BCCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BDCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C08u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C1Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C3Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C4Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CA8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CD8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D00u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D08u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D7Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D8Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DBCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DDCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E10u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E20u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E28u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EDCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F14u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F1Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F3Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F7Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FD8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FF8u, &recomp_unit_0048, "recomp_unit_0048");
}
} // namespace psprecomp
