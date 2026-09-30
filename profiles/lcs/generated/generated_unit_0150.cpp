#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0150[4089] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 5, 6, 0, 7, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 11, 12, 0, 13, 0,
    0, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 17, 18, 0, 19, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 23, 24, 0, 25, 0,
    0, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 29, 30, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 35, 36, 0, 37, 0,
    0, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 41, 42, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0,
    0, 0, 58, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0,
    66, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    77, 0, 78, 0, 79, 0, 0, 80, 0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0,
    0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 112, 0, 113, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 118, 0, 0, 0, 119, 0, 120, 0, 121, 0, 122, 123, 0, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    145, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 150, 0, 0, 0, 151, 152, 0, 0, 0, 0, 153, 0,
    154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0,
    0, 162, 163, 0, 0, 164, 0, 165, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177,
    0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 185, 0,
    0, 186, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 193,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 197, 0, 198,
    0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 205,
    0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 219, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0,
    235, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 238, 0, 239, 0, 0, 0, 240, 0, 241, 0, 242, 0, 243, 0, 0, 0, 244, 0, 245, 246, 0,
    247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 260, 0, 0, 0, 0,
    0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265,
    0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 272, 0, 0, 273, 0, 0, 0, 0,
    274, 0, 0, 275, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0,
    0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290,
    0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0,
    299, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 311, 0, 0, 312,
    0, 0, 313, 0, 314, 0, 0, 315, 0, 0, 316, 0, 317, 0, 0, 318, 0, 0, 319, 0, 320, 0, 0, 321, 0, 0, 322, 0, 323, 0, 0, 324,
    0, 0, 325, 0, 326, 0, 0, 327, 0, 0, 328, 0, 329, 0, 0, 330, 0, 0, 331, 0, 332, 0, 0, 333, 0, 0, 334, 0, 335, 0, 0, 0,
    336, 0, 337, 0, 0, 0, 0, 338, 0, 339, 0, 340, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 344, 0, 0, 0, 0, 345, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 350, 0, 351, 0, 0, 352, 0,
    0, 0, 353, 0, 354, 0, 0, 355, 0, 0, 0, 356, 0, 357, 0, 0, 358, 0, 0, 0, 359, 0, 360, 0, 0, 361, 0, 0, 0, 362, 0, 363,
    0, 0, 0, 364, 0, 365, 0, 366, 0, 367, 0, 0, 368, 0, 369, 0, 370, 0, 0, 371, 0, 372, 0, 373, 0, 0, 374, 0, 375, 0, 376, 0,
    0, 377, 0, 378, 0, 379, 0, 0, 380, 0, 381, 0, 382, 0, 0, 383, 0, 384, 0, 385, 0, 0, 386, 0, 0, 0, 387, 0, 388, 0, 0, 389,
    0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 393, 0, 394, 0, 395, 0, 396, 0, 397, 0, 398, 0, 399,
    0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 402, 0, 403, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0,
    0, 0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 409, 0, 410, 0, 411, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 425, 0, 426, 0, 0, 0, 427, 0, 428, 0, 429,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 432, 0, 433, 0, 0, 0, 434, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0,
    0, 438, 0, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0,
    0, 0, 444, 0, 0, 0, 445, 0, 446, 0, 0, 0, 447, 448, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 459, 0, 460, 0, 0, 0, 0, 0, 461,
    0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 467, 468, 0, 0, 0, 469,
    470, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0,
    0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479,
    0, 480, 481, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 485, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492,
    0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    495, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 501, 0, 0, 502, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 507, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 511, 0, 512, 0, 513, 0,
    0, 514, 0, 0, 0, 0, 515, 0, 516, 0, 517, 0, 0, 518, 0, 519, 0, 520, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0, 523, 0, 0, 524,
    0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 529,
    0, 530, 531, 0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 535, 536, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 543, 544, 0, 0, 0, 0,
    545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 548, 0, 549, 550, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    554, 0, 0, 555, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 560, 0, 561, 0, 0,
    0, 0, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 566, 567, 0, 0, 0, 0, 568, 0, 569, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0,
    0, 0, 0, 572, 0, 573, 0, 0, 574, 0, 575, 0, 576, 0, 577, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0,
    0, 0, 0, 581, 582, 0, 583, 0, 0, 0, 0, 584, 0, 585, 0, 586, 0, 0, 587, 0, 588, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0,
    595, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 597, 598, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0, 603, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 607, 0, 608, 0, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 611, 612, 0, 613, 0,
    0, 0, 614, 0, 615, 0, 616, 617, 0, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 620, 0, 621, 0, 622, 0, 623, 0, 624, 625, 0, 0, 626,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 630,
    631, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0,
    636, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 640, 641, 0,
    0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 643, 0, 0, 0, 0, 0, 644, 0, 645, 646, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0,
    0, 0, 0, 0, 0, 653, 0, 0, 654, 0, 655, 0, 656, 0, 0, 0, 0, 0, 0, 657, 0, 0, 658, 0, 0, 0, 0, 659, 0, 660, 0, 0,
    0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 664, 665, 0, 0, 0, 0, 0, 0,
    0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 668, 0, 0, 669, 0, 670, 0, 0, 0, 671, 0, 0, 0, 672,
    0, 673, 0, 674, 0, 0, 675, 0, 676, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 682, 683, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0,
    0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 694, 695, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 698, 0,
    0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 700, 0, 701, 0, 702, 0, 703, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 709, 710, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0,
    0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 723, 724, 0, 0, 0, 0, 0, 725,
};
void recomp_unit_0150_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A5C000u;
        entry_id = (entry_delta < 16356u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0150[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A5C000;
    case 2u: goto L_08A5C00C;
    case 3u: goto L_08A5C018;
    case 4u: goto L_08A5C024;
    case 5u: goto L_08A5C02C;
    case 6u: goto L_08A5C030;
    case 7u: goto L_08A5C038;
    case 8u: goto L_08A5C04C;
    case 9u: goto L_08A5C058;
    case 10u: goto L_08A5C064;
    case 11u: goto L_08A5C06C;
    case 12u: goto L_08A5C070;
    case 13u: goto L_08A5C078;
    case 14u: goto L_08A5C08C;
    case 15u: goto L_08A5C098;
    case 16u: goto L_08A5C0A4;
    case 17u: goto L_08A5C0AC;
    case 18u: goto L_08A5C0B0;
    case 19u: goto L_08A5C0B8;
    case 20u: goto L_08A5C0CC;
    case 21u: goto L_08A5C0D8;
    case 22u: goto L_08A5C0E4;
    case 23u: goto L_08A5C0EC;
    case 24u: goto L_08A5C0F0;
    case 25u: goto L_08A5C0F8;
    case 26u: goto L_08A5C10C;
    case 27u: goto L_08A5C118;
    case 28u: goto L_08A5C124;
    case 29u: goto L_08A5C12C;
    case 30u: goto L_08A5C130;
    case 31u: goto L_08A5C138;
    case 32u: goto L_08A5C14C;
    case 33u: goto L_08A5C158;
    case 34u: goto L_08A5C164;
    case 35u: goto L_08A5C16C;
    case 36u: goto L_08A5C170;
    case 37u: goto L_08A5C178;
    case 38u: goto L_08A5C18C;
    case 39u: goto L_08A5C198;
    case 40u: goto L_08A5C1A4;
    case 41u: goto L_08A5C1AC;
    case 42u: goto L_08A5C1B0;
    case 43u: goto L_08A5C1B8;
    case 44u: goto L_08A5C1C0;
    case 45u: goto L_08A5C1E0;
    case 46u: goto L_08A5C1FC;
    case 47u: goto L_08A5C224;
    case 48u: goto L_08A5C238;
    case 49u: goto L_08A5C2BC;
    case 50u: goto L_08A5C2E0;
    case 51u: goto L_08A5C308;
    case 52u: goto L_08A5C320;
    case 53u: goto L_08A5C330;
    case 54u: goto L_08A5C348;
    case 55u: goto L_08A5C354;
    case 56u: goto L_08A5C36C;
    case 57u: goto L_08A5C378;
    case 58u: goto L_08A5C388;
    case 59u: goto L_08A5C394;
    case 60u: goto L_08A5C39C;
    case 61u: goto L_08A5C3B4;
    case 62u: goto L_08A5C3C0;
    case 63u: goto L_08A5C3D4;
    case 64u: goto L_08A5C3E8;
    case 65u: goto L_08A5C3F8;
    case 66u: goto L_08A5C400;
    case 67u: goto L_08A5C404;
    case 68u: goto L_08A5C420;
    case 69u: goto L_08A5C444;
    case 70u: goto L_08A5C458;
    case 71u: goto L_08A5C4DC;
    case 72u: goto L_08A5C500;
    case 73u: goto L_08A5C528;
    case 74u: goto L_08A5C530;
    case 75u: goto L_08A5C54C;
    case 76u: goto L_08A5C570;
    case 77u: goto L_08A5C580;
    case 78u: goto L_08A5C588;
    case 79u: goto L_08A5C590;
    case 80u: goto L_08A5C59C;
    case 81u: goto L_08A5C5A4;
    case 82u: goto L_08A5C5B4;
    case 83u: goto L_08A5C5C0;
    case 84u: goto L_08A5C5E8;
    case 85u: goto L_08A5C5F4;
    case 86u: goto L_08A5C60C;
    case 87u: goto L_08A5C618;
    case 88u: goto L_08A5C638;
    case 89u: goto L_08A5C640;
    case 90u: goto L_08A5C668;
    case 91u: goto L_08A5C674;
    case 92u: goto L_08A5C6A4;
    case 93u: goto L_08A5C76C;
    case 94u: goto L_08A5C9B0;
    case 95u: goto L_08A5CB34;
    case 96u: goto L_08A5CB74;
    case 97u: goto L_08A5CBB8;
    case 98u: goto L_08A5CBC0;
    case 99u: goto L_08A5CC64;
    case 100u: goto L_08A5CC94;
    case 101u: goto L_08A5CDA4;
    case 102u: goto L_08A5CE7C;
    case 103u: goto L_08A5CEB0;
    case 104u: goto L_08A5CEC4;
    case 105u: goto L_08A5CEC8;
    case 106u: goto L_08A5CEF0;
    case 107u: goto L_08A5CF04;
    case 108u: goto L_08A5CF5C;
    case 109u: goto L_08A5CF88;
    case 110u: goto L_08A5CF98;
    case 111u: goto L_08A5CFA0;
    case 112u: goto L_08A5CFA8;
    case 113u: goto L_08A5CFB0;
    case 114u: goto L_08A5CFB4;
    case 115u: goto L_08A5CFD0;
    case 116u: goto L_08A5CFF4;
    case 117u: goto L_08A5D02C;
    case 118u: goto L_08A5D030;
    case 119u: goto L_08A5D040;
    case 120u: goto L_08A5D048;
    case 121u: goto L_08A5D050;
    case 122u: goto L_08A5D058;
    case 123u: goto L_08A5D05C;
    case 124u: goto L_08A5D080;
    case 125u: goto L_08A5D0A0;
    case 126u: goto L_08A5D0AC;
    case 127u: goto L_08A5D0B8;
    case 128u: goto L_08A5D0CC;
    case 129u: goto L_08A5D0EC;
    case 130u: goto L_08A5D0F4;
    case 131u: goto L_08A5D110;
    case 132u: goto L_08A5D120;
    case 133u: goto L_08A5D12C;
    case 134u: goto L_08A5D134;
    case 135u: goto L_08A5D14C;
    case 136u: goto L_08A5D164;
    case 137u: goto L_08A5D16C;
    case 138u: goto L_08A5D180;
    case 139u: goto L_08A5D198;
    case 140u: goto L_08A5D1A0;
    case 141u: goto L_08A5D1B4;
    case 142u: goto L_08A5D1CC;
    case 143u: goto L_08A5D1D4;
    case 144u: goto L_08A5D1E8;
    case 145u: goto L_08A5D200;
    case 146u: goto L_08A5D208;
    case 147u: goto L_08A5D21C;
    case 148u: goto L_08A5D23C;
    case 149u: goto L_08A5D244;
    case 150u: goto L_08A5D250;
    case 151u: goto L_08A5D260;
    case 152u: goto L_08A5D264;
    case 153u: goto L_08A5D278;
    case 154u: goto L_08A5D280;
    case 155u: goto L_08A5D294;
    case 156u: goto L_08A5D2B4;
    case 157u: goto L_08A5D2C0;
    case 158u: goto L_08A5D2C8;
    case 159u: goto L_08A5D2D4;
    case 160u: goto L_08A5D2E4;
    case 161u: goto L_08A5D2F4;
    case 162u: goto L_08A5D304;
    case 163u: goto L_08A5D308;
    case 164u: goto L_08A5D314;
    case 165u: goto L_08A5D31C;
    case 166u: goto L_08A5D330;
    case 167u: goto L_08A5D338;
    case 168u: goto L_08A5D360;
    case 169u: goto L_08A5D36C;
    case 170u: goto L_08A5D384;
    case 171u: goto L_08A5D398;
    case 172u: goto L_08A5D3A0;
    case 173u: goto L_08A5D3C8;
    case 174u: goto L_08A5D3D4;
    case 175u: goto L_08A5D3E0;
    case 176u: goto L_08A5D3F4;
    case 177u: goto L_08A5D3FC;
    case 178u: goto L_08A5D414;
    case 179u: goto L_08A5D420;
    case 180u: goto L_08A5D434;
    case 181u: goto L_08A5D43C;
    case 182u: goto L_08A5D44C;
    case 183u: goto L_08A5D464;
    case 184u: goto L_08A5D470;
    case 185u: goto L_08A5D478;
    case 186u: goto L_08A5D484;
    case 187u: goto L_08A5D48C;
    case 188u: goto L_08A5D4A0;
    case 189u: goto L_08A5D4B0;
    case 190u: goto L_08A5D4C0;
    case 191u: goto L_08A5D4F0;
    case 192u: goto L_08A5D4F8;
    case 193u: goto L_08A5D4FC;
    case 194u: goto L_08A5D5D4;
    case 195u: goto L_08A5D5E0;
    case 196u: goto L_08A5D5EC;
    case 197u: goto L_08A5D5F4;
    case 198u: goto L_08A5D5FC;
    case 199u: goto L_08A5D618;
    case 200u: goto L_08A5D628;
    case 201u: goto L_08A5D638;
    case 202u: goto L_08A5D63C;
    case 203u: goto L_08A5D65C;
    case 204u: goto L_08A5D670;
    case 205u: goto L_08A5D67C;
    case 206u: goto L_08A5D694;
    case 207u: goto L_08A5D6A8;
    case 208u: goto L_08A5D6BC;
    case 209u: goto L_08A5D6C4;
    case 210u: goto L_08A5D6CC;
    case 211u: goto L_08A5D6D4;
    case 212u: goto L_08A5D6E0;
    case 213u: goto L_08A5D6F0;
    case 214u: goto L_08A5D708;
    case 215u: goto L_08A5D73C;
    case 216u: goto L_08A5D744;
    case 217u: goto L_08A5D748;
    case 218u: goto L_08A5D750;
    case 219u: goto L_08A5D784;
    case 220u: goto L_08A5D790;
    case 221u: goto L_08A5D798;
    case 222u: goto L_08A5D7B8;
    case 223u: goto L_08A5D7D0;
    case 224u: goto L_08A5D7E4;
    case 225u: goto L_08A5D800;
    case 226u: goto L_08A5D8C4;
    case 227u: goto L_08A5D8DC;
    case 228u: goto L_08A5D910;
    case 229u: goto L_08A5D928;
    case 230u: goto L_08A5D930;
    case 231u: goto L_08A5D944;
    case 232u: goto L_08A5D94C;
    case 233u: goto L_08A5D95C;
    case 234u: goto L_08A5D970;
    case 235u: goto L_08A5D980;
    case 236u: goto L_08A5D994;
    case 237u: goto L_08A5D9A4;
    case 238u: goto L_08A5D9AC;
    case 239u: goto L_08A5D9B4;
    case 240u: goto L_08A5D9C4;
    case 241u: goto L_08A5D9CC;
    case 242u: goto L_08A5D9D4;
    case 243u: goto L_08A5D9DC;
    case 244u: goto L_08A5D9EC;
    case 245u: goto L_08A5D9F4;
    case 246u: goto L_08A5D9F8;
    case 247u: goto L_08A5DA00;
    case 248u: goto L_08A5DA48;
    case 249u: goto L_08A5DA68;
    case 250u: goto L_08A5DAA0;
    case 251u: goto L_08A5DAB0;
    case 252u: goto L_08A5DAD4;
    case 253u: goto L_08A5DADC;
    case 254u: goto L_08A5DAE4;
    case 255u: goto L_08A5DB00;
    case 256u: goto L_08A5DB24;
    case 257u: goto L_08A5DB38;
    case 258u: goto L_08A5DB54;
    case 259u: goto L_08A5DB68;
    case 260u: goto L_08A5DB6C;
    case 261u: goto L_08A5DB88;
    case 262u: goto L_08A5DBB4;
    case 263u: goto L_08A5DBBC;
    case 264u: goto L_08A5DBDC;
    case 265u: goto L_08A5DBFC;
    case 266u: goto L_08A5DC14;
    case 267u: goto L_08A5DC28;
    case 268u: goto L_08A5DC34;
    case 269u: goto L_08A5DC40;
    case 270u: goto L_08A5DC4C;
    case 271u: goto L_08A5DC58;
    case 272u: goto L_08A5DC60;
    case 273u: goto L_08A5DC6C;
    case 274u: goto L_08A5DC80;
    case 275u: goto L_08A5DC8C;
    case 276u: goto L_08A5DC9C;
    case 277u: goto L_08A5DCA4;
    case 278u: goto L_08A5DCC8;
    case 279u: goto L_08A5DCD8;
    case 280u: goto L_08A5DCE8;
    case 281u: goto L_08A5DCF8;
    case 282u: goto L_08A5DD04;
    case 283u: goto L_08A5DD14;
    case 284u: goto L_08A5DD24;
    case 285u: goto L_08A5DD30;
    case 286u: goto L_08A5DD40;
    case 287u: goto L_08A5DD50;
    case 288u: goto L_08A5DD5C;
    case 289u: goto L_08A5DD6C;
    case 290u: goto L_08A5DD7C;
    case 291u: goto L_08A5DD88;
    case 292u: goto L_08A5DD98;
    case 293u: goto L_08A5DDA8;
    case 294u: goto L_08A5DDB4;
    case 295u: goto L_08A5DDC4;
    case 296u: goto L_08A5DDD4;
    case 297u: goto L_08A5DDE0;
    case 298u: goto L_08A5DDF0;
    case 299u: goto L_08A5DE00;
    case 300u: goto L_08A5DE0C;
    case 301u: goto L_08A5DE1C;
    case 302u: goto L_08A5DE2C;
    case 303u: goto L_08A5DE38;
    case 304u: goto L_08A5DE48;
    case 305u: goto L_08A5DE5C;
    case 306u: goto L_08A5DE90;
    case 307u: goto L_08A5DEA0;
    case 308u: goto L_08A5DEC0;
    case 309u: goto L_08A5DEDC;
    case 310u: goto L_08A5DEE8;
    case 311u: goto L_08A5DEF0;
    case 312u: goto L_08A5DEFC;
    case 313u: goto L_08A5DF08;
    case 314u: goto L_08A5DF10;
    case 315u: goto L_08A5DF1C;
    case 316u: goto L_08A5DF28;
    case 317u: goto L_08A5DF30;
    case 318u: goto L_08A5DF3C;
    case 319u: goto L_08A5DF48;
    case 320u: goto L_08A5DF50;
    case 321u: goto L_08A5DF5C;
    case 322u: goto L_08A5DF68;
    case 323u: goto L_08A5DF70;
    case 324u: goto L_08A5DF7C;
    case 325u: goto L_08A5DF88;
    case 326u: goto L_08A5DF90;
    case 327u: goto L_08A5DF9C;
    case 328u: goto L_08A5DFA8;
    case 329u: goto L_08A5DFB0;
    case 330u: goto L_08A5DFBC;
    case 331u: goto L_08A5DFC8;
    case 332u: goto L_08A5DFD0;
    case 333u: goto L_08A5DFDC;
    case 334u: goto L_08A5DFE8;
    case 335u: goto L_08A5DFF0;
    case 336u: goto L_08A5E000;
    case 337u: goto L_08A5E008;
    case 338u: goto L_08A5E01C;
    case 339u: goto L_08A5E024;
    case 340u: goto L_08A5E02C;
    case 341u: goto L_08A5E034;
    case 342u: goto L_08A5E040;
    case 343u: goto L_08A5E05C;
    case 344u: goto L_08A5E060;
    case 345u: goto L_08A5E074;
    case 346u: goto L_08A5E0A0;
    case 347u: goto L_08A5E0B0;
    case 348u: goto L_08A5E0C8;
    case 349u: goto L_08A5E0D4;
    case 350u: goto L_08A5E0E4;
    case 351u: goto L_08A5E0EC;
    case 352u: goto L_08A5E0F8;
    case 353u: goto L_08A5E108;
    case 354u: goto L_08A5E110;
    case 355u: goto L_08A5E11C;
    case 356u: goto L_08A5E12C;
    case 357u: goto L_08A5E134;
    case 358u: goto L_08A5E140;
    case 359u: goto L_08A5E150;
    case 360u: goto L_08A5E158;
    case 361u: goto L_08A5E164;
    case 362u: goto L_08A5E174;
    case 363u: goto L_08A5E17C;
    case 364u: goto L_08A5E18C;
    case 365u: goto L_08A5E194;
    case 366u: goto L_08A5E19C;
    case 367u: goto L_08A5E1A4;
    case 368u: goto L_08A5E1B0;
    case 369u: goto L_08A5E1B8;
    case 370u: goto L_08A5E1C0;
    case 371u: goto L_08A5E1CC;
    case 372u: goto L_08A5E1D4;
    case 373u: goto L_08A5E1DC;
    case 374u: goto L_08A5E1E8;
    case 375u: goto L_08A5E1F0;
    case 376u: goto L_08A5E1F8;
    case 377u: goto L_08A5E204;
    case 378u: goto L_08A5E20C;
    case 379u: goto L_08A5E214;
    case 380u: goto L_08A5E220;
    case 381u: goto L_08A5E228;
    case 382u: goto L_08A5E230;
    case 383u: goto L_08A5E23C;
    case 384u: goto L_08A5E244;
    case 385u: goto L_08A5E24C;
    case 386u: goto L_08A5E258;
    case 387u: goto L_08A5E268;
    case 388u: goto L_08A5E270;
    case 389u: goto L_08A5E27C;
    case 390u: goto L_08A5E2A0;
    case 391u: goto L_08A5E2B8;
    case 392u: goto L_08A5E2C4;
    case 393u: goto L_08A5E2CC;
    case 394u: goto L_08A5E2D4;
    case 395u: goto L_08A5E2DC;
    case 396u: goto L_08A5E2E4;
    case 397u: goto L_08A5E2EC;
    case 398u: goto L_08A5E2F4;
    case 399u: goto L_08A5E2FC;
    case 400u: goto L_08A5E318;
    case 401u: goto L_08A5E320;
    case 402u: goto L_08A5E328;
    case 403u: goto L_08A5E330;
    case 404u: goto L_08A5E338;
    case 405u: goto L_08A5E344;
    case 406u: goto L_08A5E378;
    case 407u: goto L_08A5E39C;
    case 408u: goto L_08A5E3A4;
    case 409u: goto L_08A5E3AC;
    case 410u: goto L_08A5E3B4;
    case 411u: goto L_08A5E3BC;
    case 412u: goto L_08A5E3C0;
    case 413u: goto L_08A5E3E0;
    case 414u: goto L_08A5E3F4;
    case 415u: goto L_08A5E428;
    case 416u: goto L_08A5E438;
    case 417u: goto L_08A5E440;
    case 418u: goto L_08A5E448;
    case 419u: goto L_08A5E470;
    case 420u: goto L_08A5E47C;
    case 421u: goto L_08A5E4D8;
    case 422u: goto L_08A5E4F4;
    case 423u: goto L_08A5E538;
    case 424u: goto L_08A5E548;
    case 425u: goto L_08A5E554;
    case 426u: goto L_08A5E55C;
    case 427u: goto L_08A5E56C;
    case 428u: goto L_08A5E574;
    case 429u: goto L_08A5E57C;
    case 430u: goto L_08A5E5B0;
    case 431u: goto L_08A5E5B8;
    case 432u: goto L_08A5E5BC;
    case 433u: goto L_08A5E5C4;
    case 434u: goto L_08A5E5D4;
    case 435u: goto L_08A5E5E0;
    case 436u: goto L_08A5E5EC;
    case 437u: goto L_08A5E5F8;
    case 438u: goto L_08A5E604;
    case 439u: goto L_08A5E614;
    case 440u: goto L_08A5E620;
    case 441u: goto L_08A5E654;
    case 442u: goto L_08A5E664;
    case 443u: goto L_08A5E674;
    case 444u: goto L_08A5E688;
    case 445u: goto L_08A5E698;
    case 446u: goto L_08A5E6A0;
    case 447u: goto L_08A5E6B0;
    case 448u: goto L_08A5E6B4;
    case 449u: goto L_08A5E6C0;
    case 450u: goto L_08A5E6D4;
    case 451u: goto L_08A5E6E4;
    case 452u: goto L_08A5E73C;
    case 453u: goto L_08A5E744;
    case 454u: goto L_08A5E74C;
    case 455u: goto L_08A5E774;
    case 456u: goto L_08A5E7B0;
    case 457u: goto L_08A5E7C4;
    case 458u: goto L_08A5E7D4;
    case 459u: goto L_08A5E7DC;
    case 460u: goto L_08A5E7E4;
    case 461u: goto L_08A5E7FC;
    case 462u: goto L_08A5E808;
    case 463u: goto L_08A5E818;
    case 464u: goto L_08A5E830;
    case 465u: goto L_08A5E848;
    case 466u: goto L_08A5E854;
    case 467u: goto L_08A5E868;
    case 468u: goto L_08A5E86C;
    case 469u: goto L_08A5E87C;
    case 470u: goto L_08A5E880;
    case 471u: goto L_08A5E8A4;
    case 472u: goto L_08A5E8B4;
    case 473u: goto L_08A5E8E0;
    case 474u: goto L_08A5E8F4;
    case 475u: goto L_08A5E904;
    case 476u: goto L_08A5E91C;
    case 477u: goto L_08A5E92C;
    case 478u: goto L_08A5E944;
    case 479u: goto L_08A5E97C;
    case 480u: goto L_08A5E984;
    case 481u: goto L_08A5E988;
    case 482u: goto L_08A5E9AC;
    case 483u: goto L_08A5EA08;
    case 484u: goto L_08A5EA2C;
    case 485u: goto L_08A5EA30;
    case 486u: goto L_08A5EA4C;
    case 487u: goto L_08A5EA5C;
    case 488u: goto L_08A5EA64;
    case 489u: goto L_08A5EA8C;
    case 490u: goto L_08A5EAB8;
    case 491u: goto L_08A5EAEC;
    case 492u: goto L_08A5EAFC;
    case 493u: goto L_08A5EB18;
    case 494u: goto L_08A5EB28;
    case 495u: goto L_08A5EB80;
    case 496u: goto L_08A5EBA0;
    case 497u: goto L_08A5EBBC;
    case 498u: goto L_08A5EBCC;
    case 499u: goto L_08A5EC24;
    case 500u: goto L_08A5EC3C;
    case 501u: goto L_08A5EC48;
    case 502u: goto L_08A5EC54;
    case 503u: goto L_08A5EC5C;
    case 504u: goto L_08A5EC64;
    case 505u: goto L_08A5EC98;
    case 506u: goto L_08A5ECA8;
    case 507u: goto L_08A5ECB4;
    case 508u: goto L_08A5ECBC;
    case 509u: goto L_08A5ECD0;
    case 510u: goto L_08A5ECE0;
    case 511u: goto L_08A5ECE8;
    case 512u: goto L_08A5ECF0;
    case 513u: goto L_08A5ECF8;
    case 514u: goto L_08A5ED04;
    case 515u: goto L_08A5ED18;
    case 516u: goto L_08A5ED20;
    case 517u: goto L_08A5ED28;
    case 518u: goto L_08A5ED34;
    case 519u: goto L_08A5ED3C;
    case 520u: goto L_08A5ED44;
    case 521u: goto L_08A5ED58;
    case 522u: goto L_08A5ED64;
    case 523u: goto L_08A5ED70;
    case 524u: goto L_08A5ED7C;
    case 525u: goto L_08A5ED9C;
    case 526u: goto L_08A5EDCC;
    case 527u: goto L_08A5EDDC;
    case 528u: goto L_08A5EDF4;
    case 529u: goto L_08A5EDFC;
    case 530u: goto L_08A5EE04;
    case 531u: goto L_08A5EE08;
    case 532u: goto L_08A5EE1C;
    case 533u: goto L_08A5EE2C;
    case 534u: goto L_08A5EEB0;
    case 535u: goto L_08A5EEB8;
    case 536u: goto L_08A5EEBC;
    case 537u: goto L_08A5EED8;
    case 538u: goto L_08A5EF0C;
    case 539u: goto L_08A5EF20;
    case 540u: goto L_08A5EF38;
    case 541u: goto L_08A5EF48;
    case 542u: goto L_08A5EF60;
    case 543u: goto L_08A5EF68;
    case 544u: goto L_08A5EF6C;
    case 545u: goto L_08A5EF80;
    case 546u: goto L_08A5EF90;
    case 547u: goto L_08A5EFBC;
    case 548u: goto L_08A5F010;
    case 549u: goto L_08A5F018;
    case 550u: goto L_08A5F01C;
    case 551u: goto L_08A5F034;
    case 552u: goto L_08A5F090;
    case 553u: goto L_08A5F0A4;
    case 554u: goto L_08A5F100;
    case 555u: goto L_08A5F10C;
    case 556u: goto L_08A5F118;
    case 557u: goto L_08A5F13C;
    case 558u: goto L_08A5F144;
    case 559u: goto L_08A5F15C;
    case 560u: goto L_08A5F16C;
    case 561u: goto L_08A5F174;
    case 562u: goto L_08A5F194;
    case 563u: goto L_08A5F1A4;
    case 564u: goto L_08A5F1CC;
    case 565u: goto L_08A5F1DC;
    case 566u: goto L_08A5F210;
    case 567u: goto L_08A5F214;
    case 568u: goto L_08A5F228;
    case 569u: goto L_08A5F230;
    case 570u: goto L_08A5F234;
    case 571u: goto L_08A5F278;
    case 572u: goto L_08A5F28C;
    case 573u: goto L_08A5F294;
    case 574u: goto L_08A5F2A0;
    case 575u: goto L_08A5F2A8;
    case 576u: goto L_08A5F2B0;
    case 577u: goto L_08A5F2B8;
    case 578u: goto L_08A5F2C8;
    case 579u: goto L_08A5F2E8;
    case 580u: goto L_08A5F2F0;
    case 581u: goto L_08A5F30C;
    case 582u: goto L_08A5F310;
    case 583u: goto L_08A5F318;
    case 584u: goto L_08A5F32C;
    case 585u: goto L_08A5F334;
    case 586u: goto L_08A5F33C;
    case 587u: goto L_08A5F348;
    case 588u: goto L_08A5F350;
    case 589u: goto L_08A5F358;
    case 590u: goto L_08A5F374;
    case 591u: goto L_08A5F39C;
    case 592u: goto L_08A5F3A4;
    case 593u: goto L_08A5F3C0;
    case 594u: goto L_08A5F3E0;
    case 595u: goto L_08A5F400;
    case 596u: goto L_08A5F420;
    case 597u: goto L_08A5F430;
    case 598u: goto L_08A5F434;
    case 599u: goto L_08A5F43C;
    case 600u: goto L_08A5F460;
    case 601u: goto L_08A5F49C;
    case 602u: goto L_08A5F4B0;
    case 603u: goto L_08A5F4B8;
    case 604u: goto L_08A5F4D0;
    case 605u: goto L_08A5F4EC;
    case 606u: goto L_08A5F520;
    case 607u: goto L_08A5F534;
    case 608u: goto L_08A5F53C;
    case 609u: goto L_08A5F54C;
    case 610u: goto L_08A5F564;
    case 611u: goto L_08A5F56C;
    case 612u: goto L_08A5F570;
    case 613u: goto L_08A5F578;
    case 614u: goto L_08A5F588;
    case 615u: goto L_08A5F590;
    case 616u: goto L_08A5F598;
    case 617u: goto L_08A5F59C;
    case 618u: goto L_08A5F5A8;
    case 619u: goto L_08A5F5C4;
    case 620u: goto L_08A5F5CC;
    case 621u: goto L_08A5F5D4;
    case 622u: goto L_08A5F5DC;
    case 623u: goto L_08A5F5E4;
    case 624u: goto L_08A5F5EC;
    case 625u: goto L_08A5F5F0;
    case 626u: goto L_08A5F5FC;
    case 627u: goto L_08A5F634;
    case 628u: goto L_08A5F648;
    case 629u: goto L_08A5F668;
    case 630u: goto L_08A5F67C;
    case 631u: goto L_08A5F680;
    case 632u: goto L_08A5F69C;
    case 633u: goto L_08A5F6B0;
    case 634u: goto L_08A5F6C0;
    case 635u: goto L_08A5F6F0;
    case 636u: goto L_08A5F700;
    case 637u: goto L_08A5F71C;
    case 638u: goto L_08A5F730;
    case 639u: goto L_08A5F76C;
    case 640u: goto L_08A5F774;
    case 641u: goto L_08A5F778;
    case 642u: goto L_08A5F798;
    case 643u: goto L_08A5F7A8;
    case 644u: goto L_08A5F7C0;
    case 645u: goto L_08A5F7C8;
    case 646u: goto L_08A5F7CC;
    case 647u: goto L_08A5F7D4;
    case 648u: goto L_08A5F80C;
    case 649u: goto L_08A5F820;
    case 650u: goto L_08A5F838;
    case 651u: goto L_08A5F854;
    case 652u: goto L_08A5F874;
    case 653u: goto L_08A5F894;
    case 654u: goto L_08A5F8A0;
    case 655u: goto L_08A5F8A8;
    case 656u: goto L_08A5F8B0;
    case 657u: goto L_08A5F8CC;
    case 658u: goto L_08A5F8D8;
    case 659u: goto L_08A5F8EC;
    case 660u: goto L_08A5F8F4;
    case 661u: goto L_08A5F908;
    case 662u: goto L_08A5F918;
    case 663u: goto L_08A5F958;
    case 664u: goto L_08A5F960;
    case 665u: goto L_08A5F964;
    case 666u: goto L_08A5F984;
    case 667u: goto L_08A5F9B4;
    case 668u: goto L_08A5F9C8;
    case 669u: goto L_08A5F9D4;
    case 670u: goto L_08A5F9DC;
    case 671u: goto L_08A5F9EC;
    case 672u: goto L_08A5F9FC;
    case 673u: goto L_08A5FA04;
    case 674u: goto L_08A5FA0C;
    case 675u: goto L_08A5FA18;
    case 676u: goto L_08A5FA20;
    case 677u: goto L_08A5FA30;
    case 678u: goto L_08A5FA4C;
    case 679u: goto L_08A5FA5C;
    case 680u: goto L_08A5FA88;
    case 681u: goto L_08A5FAC0;
    case 682u: goto L_08A5FAC8;
    case 683u: goto L_08A5FACC;
    case 684u: goto L_08A5FAE4;
    case 685u: goto L_08A5FB18;
    case 686u: goto L_08A5FB30;
    case 687u: goto L_08A5FB40;
    case 688u: goto L_08A5FB70;
    case 689u: goto L_08A5FB84;
    case 690u: goto L_08A5FBB0;
    case 691u: goto L_08A5FBC0;
    case 692u: goto L_08A5FBEC;
    case 693u: goto L_08A5FC24;
    case 694u: goto L_08A5FC2C;
    case 695u: goto L_08A5FC30;
    case 696u: goto L_08A5FC48;
    case 697u: goto L_08A5FC70;
    case 698u: goto L_08A5FC78;
    case 699u: goto L_08A5FC98;
    case 700u: goto L_08A5FCB0;
    case 701u: goto L_08A5FCB8;
    case 702u: goto L_08A5FCC0;
    case 703u: goto L_08A5FCC8;
    case 704u: goto L_08A5FCD4;
    case 705u: goto L_08A5FCE8;
    case 706u: goto L_08A5FD14;
    case 707u: goto L_08A5FD40;
    case 708u: goto L_08A5FDA8;
    case 709u: goto L_08A5FE1C;
    case 710u: goto L_08A5FE20;
    case 711u: goto L_08A5FE3C;
    case 712u: goto L_08A5FE70;
    case 713u: goto L_08A5FE98;
    case 714u: goto L_08A5FEA8;
    case 715u: goto L_08A5FEC4;
    case 716u: goto L_08A5FEE4;
    case 717u: goto L_08A5FF0C;
    case 718u: goto L_08A5FF1C;
    case 719u: goto L_08A5FF60;
    case 720u: goto L_08A5FF70;
    case 721u: goto L_08A5FF84;
    case 722u: goto L_08A5FFBC;
    case 723u: goto L_08A5FFC4;
    case 724u: goto L_08A5FFC8;
    case 725u: goto L_08A5FFE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A5C000:
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C00Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8380));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 480u, 0x08A5A6CCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C00Cu) goto L_08A5C00C;
    return;
L_08A5C00C:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A5C018u);
    ctx.gpr[4] = (0u | 224u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5C018u) goto L_08A5C018;
    return;
L_08A5C018:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C030;
      }
      goto L_08A5C024;
    }
L_08A5C024:
    ctx.gpr[31] = (0x08A5C02Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 33u, 0x08A3433Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C02Cu) goto L_08A5C02C;
    return;
L_08A5C02C:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_08A5C030;
L_08A5C030:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C1C0;
      }
      goto L_08A5C038;
    }
L_08A5C038:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C04Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8412));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 480u, 0x08A5A6CCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C04Cu) goto L_08A5C04C;
    return;
L_08A5C04C:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A5C058u);
    ctx.gpr[4] = (0u | 364u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5C058u) goto L_08A5C058;
    return;
L_08A5C058:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C070;
      }
      goto L_08A5C064;
    }
L_08A5C064:
    ctx.gpr[31] = (0x08A5C06Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 239u, 0x08ABD730u>(ctx, &aot_mem) && ctx.pc == 0x08A5C06Cu) goto L_08A5C06C;
    return;
L_08A5C06C:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_08A5C070;
L_08A5C070:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C1C0;
      }
      goto L_08A5C078;
    }
L_08A5C078:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C08Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8440));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 480u, 0x08A5A6CCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C08Cu) goto L_08A5C08C;
    return;
L_08A5C08C:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A5C098u);
    ctx.gpr[4] = (0u | 240u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5C098u) goto L_08A5C098;
    return;
L_08A5C098:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C0B0;
      }
      goto L_08A5C0A4;
    }
L_08A5C0A4:
    ctx.gpr[31] = (0x08A5C0ACu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 384u, 0x089D9F3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C0ACu) goto L_08A5C0AC;
    return;
L_08A5C0AC:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_08A5C0B0;
L_08A5C0B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C1C0;
      }
      goto L_08A5C0B8;
    }
L_08A5C0B8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C0CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8468));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 480u, 0x08A5A6CCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C0CCu) goto L_08A5C0CC;
    return;
L_08A5C0CC:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A5C0D8u);
    ctx.gpr[4] = (0u | 224u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5C0D8u) goto L_08A5C0D8;
    return;
L_08A5C0D8:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C0F0;
      }
      goto L_08A5C0E4;
    }
L_08A5C0E4:
    ctx.gpr[31] = (0x08A5C0ECu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 749u, 0x0897FDACu>(ctx, &aot_mem) && ctx.pc == 0x08A5C0ECu) goto L_08A5C0EC;
    return;
L_08A5C0EC:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_08A5C0F0;
L_08A5C0F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C1C0;
      }
      goto L_08A5C0F8;
    }
L_08A5C0F8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C10Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8496));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 480u, 0x08A5A6CCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C10Cu) goto L_08A5C10C;
    return;
L_08A5C10C:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A5C118u);
    ctx.gpr[4] = (0u | 116u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5C118u) goto L_08A5C118;
    return;
L_08A5C118:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C130;
      }
      goto L_08A5C124;
    }
L_08A5C124:
    ctx.gpr[31] = (0x08A5C12Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 808u, 0x08A0BB28u>(ctx, &aot_mem) && ctx.pc == 0x08A5C12Cu) goto L_08A5C12C;
    return;
L_08A5C12C:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_08A5C130;
L_08A5C130:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C1C0;
      }
      goto L_08A5C138;
    }
L_08A5C138:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C14Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8524));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 480u, 0x08A5A6CCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C14Cu) goto L_08A5C14C;
    return;
L_08A5C14C:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A5C158u);
    ctx.gpr[4] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5C158u) goto L_08A5C158;
    return;
L_08A5C158:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C170;
      }
      goto L_08A5C164;
    }
L_08A5C164:
    ctx.gpr[31] = (0x08A5C16Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 596u, 0x08936938u>(ctx, &aot_mem) && ctx.pc == 0x08A5C16Cu) goto L_08A5C16C;
    return;
L_08A5C16C:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_08A5C170;
L_08A5C170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C1C0;
      }
      goto L_08A5C178;
    }
L_08A5C178:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C18Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8560));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 480u, 0x08A5A6CCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C18Cu) goto L_08A5C18C;
    return;
L_08A5C18C:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A5C198u);
    ctx.gpr[4] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A5C198u) goto L_08A5C198;
    return;
L_08A5C198:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C1B0;
      }
      goto L_08A5C1A4;
    }
L_08A5C1A4:
    ctx.gpr[31] = (0x08A5C1ACu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 412u, 0x08919898u>(ctx, &aot_mem) && ctx.pc == 0x08A5C1ACu) goto L_08A5C1AC;
    return;
L_08A5C1AC:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_08A5C1B0;
L_08A5C1B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C1C0;
      }
      goto L_08A5C1B8;
    }
L_08A5C1B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C674;
      }
      goto L_08A5C1C0;
    }
L_08A5C1C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[17] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A5C1E0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C1E0u) goto L_08A5C1E0;
    return;
L_08A5C1E0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A5C1FCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 175u, 0x08A4CB0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C1FCu) goto L_08A5C1FC;
    return;
L_08A5C1FC:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(224))))));
    ctx.gpr[21] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C224u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 68u, 0x08AC47ECu>(ctx, &aot_mem) && ctx.pc == 0x08A5C224u) goto L_08A5C224;
    return;
L_08A5C224:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A5C238u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C238u) goto L_08A5C238;
    return;
L_08A5C238:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7952));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7960));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7968));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7976));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7984));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8000));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[5] = (2226u << 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5C2BCu);
    ctx.gpr[22] = (ctx.gpr[5] + static_cast<std::uint32_t>(8592));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C2BCu) goto L_08A5C2BC;
    return;
L_08A5C2BC:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[30]);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C2E0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 480u, 0x08A5A6CCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C2E0u) goto L_08A5C2E0;
    return;
L_08A5C2E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A5C308u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(96))))));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C308u) goto L_08A5C308;
    return;
L_08A5C308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5C320u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C320u) goto L_08A5C320;
    return;
L_08A5C320:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
      if (branch_taken) {
          goto L_08A5C378;
      }
      goto L_08A5C330;
    }
L_08A5C330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5C348u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C348u) goto L_08A5C348;
    return;
L_08A5C348:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5C378;
      }
      goto L_08A5C354;
    }
L_08A5C354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5C36Cu);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C36Cu) goto L_08A5C36C;
    return;
L_08A5C36C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5C394;
      }
      goto L_08A5C378;
    }
L_08A5C378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(327)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C394;
      }
      goto L_08A5C388;
    }
L_08A5C388:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08A5C394u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 226u, 0x089694B8u>(ctx, &aot_mem) && ctx.pc == 0x08A5C394u) goto L_08A5C394;
    return;
L_08A5C394:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C530;
      }
      goto L_08A5C39C;
    }
L_08A5C39C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C3B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08A5C3B4u) goto L_08A5C3B4;
    return;
L_08A5C3B4:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[30] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[21]);
        goto L_08A5C420;
    }
    goto L_08A5C3C0;
L_08A5C3C0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C3D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8632));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 480u, 0x08A5A6CCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C3D4u) goto L_08A5C3D4;
    return;
L_08A5C3D4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C3E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8688));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 304u, 0x08A59A24u>(ctx, &aot_mem) && ctx.pc == 0x08A5C3E8u) goto L_08A5C3E8;
    return;
L_08A5C3E8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A5C404;
      }
      goto L_08A5C3F8;
    }
L_08A5C3F8:
    ctx.gpr[31] = (0x08A5C400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C400u) goto L_08A5C400;
    return;
L_08A5C400:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08A5C404;
L_08A5C404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C674;
      }
      goto L_08A5C420;
    }
L_08A5C420:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(224))))));
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[21] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A5C444u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 68u, 0x08AC47ECu>(ctx, &aot_mem) && ctx.pc == 0x08A5C444u) goto L_08A5C444;
    return;
L_08A5C444:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A5C458u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C458u) goto L_08A5C458;
    return;
L_08A5C458:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7952));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7960));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7968));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7976));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7984));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8000));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(108)));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[5] = (2226u << 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5C4DCu);
    ctx.gpr[22] = (ctx.gpr[5] + static_cast<std::uint32_t>(8592));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C4DCu) goto L_08A5C4DC;
    return;
L_08A5C4DC:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C500u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 480u, 0x08A5A6CCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C500u) goto L_08A5C500;
    return;
L_08A5C500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5C528u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(96))))));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C528u) goto L_08A5C528;
    return;
L_08A5C528:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    goto L_08A5C530;
L_08A5C530:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 698u, 0x08A5BE4Cu>(ctx, &aot_mem); return;
      }
      goto L_08A5C54C;
    }
L_08A5C54C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5C588;
      }
      goto L_08A5C570;
    }
L_08A5C570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5C590;
      }
      goto L_08A5C580;
    }
L_08A5C580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C5B4;
      }
      goto L_08A5C588;
    }
L_08A5C588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C674;
      }
      goto L_08A5C590;
    }
L_08A5C590:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A5C5A4;
      }
      goto L_08A5C59C;
    }
L_08A5C59C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C5B4;
      }
      goto L_08A5C5A4;
    }
L_08A5C5A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5C590;
      }
      goto L_08A5C5B4;
    }
L_08A5C5B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(224))))));
        goto L_08A5C640;
    }
    goto L_08A5C5C0;
L_08A5C5C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(224))))));
    ctx.gpr[5] = (ctx.gpr[17] & 255u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(158), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(158))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(122), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5C618;
      }
      goto L_08A5C5E8;
    }
L_08A5C5E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_08A5C60C;
    }
    goto L_08A5C5F4;
L_08A5C5F4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(122))))));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_08A5C60C;
L_08A5C60C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5C638;
      }
      goto L_08A5C618;
    }
L_08A5C618:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08A5C638u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 774u, 0x08B076BCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C638u) goto L_08A5C638;
    return;
L_08A5C638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C674;
      }
      goto L_08A5C640;
    }
L_08A5C640:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(162), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(162))))));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C674;
      }
      goto L_08A5C668;
    }
L_08A5C668:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(224))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08A5C674;
L_08A5C674:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5C6A4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6788)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6792)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6760)));
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[14] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[15] = (2229u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[3] = (2229u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[9] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-6784), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-6764)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-6756), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-6748), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (16281u << 16u);
    ctx.gpr[8] = (16268u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] | 39322u);
    ctx.gpr[13] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[7] = (ctx.gpr[8] | 52429u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[24] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-6776), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-6780), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-6772), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-6768), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6752), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-6744), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5C76C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[7] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[10] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (ctx.gpr[7] >> 16u);
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[7] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[10] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (ctx.gpr[7] >> 16u);
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[6] >> 16u);
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5C9B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[7] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[10] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (ctx.gpr[7] >> 16u);
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[6] >> 16u);
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5CB34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A5CBB8;
      }
      goto L_08A5CB74;
    }
L_08A5CB74:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A5CB74;
      }
      goto L_08A5CBB8;
    }
L_08A5CBB8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5CBC0:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5CC64:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08A5CC94;
L_08A5CC94:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[7] = (ctx.gpr[8] | ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[7] = (ctx.gpr[8] | ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (ctx.gpr[8] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5CDA4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[7] = (ctx.gpr[8] | ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (ctx.gpr[8] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5CE7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A5CEB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 298u, 0x08AF9518u>(ctx, &aot_mem) && ctx.pc == 0x08A5CEB0u) goto L_08A5CEB0;
    return;
L_08A5CEB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5CEF0;
      }
      goto L_08A5CEC4;
    }
L_08A5CEC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A5CEC8;
L_08A5CEC8:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A5CEC8;
    }
    goto L_08A5CEF0;
L_08A5CEF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5CF04:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5CF5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A5CFB0;
      }
      goto L_08A5CF88;
    }
L_08A5CF88:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x08A5CF98u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5CF98u) goto L_08A5CF98;
    return;
L_08A5CF98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CFA8;
      }
      goto L_08A5CFA0;
    }
L_08A5CFA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5CFB4;
      }
      goto L_08A5CFA8;
    }
L_08A5CFA8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5CF88;
      }
      goto L_08A5CFB0;
    }
L_08A5CFB0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08A5CFB4;
L_08A5CFB4:
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
L_08A5CFD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] | 3u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[5] | 12u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5CFF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[21];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A5D058;
      }
      goto L_08A5D02C;
    }
L_08A5D02C:
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(8));
    goto L_08A5D030;
L_08A5D030:
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[19]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x08A5D040u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5D040u) goto L_08A5D040;
    return;
L_08A5D040:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D050;
      }
      goto L_08A5D048;
    }
L_08A5D048:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5D05C;
      }
      goto L_08A5D050;
    }
L_08A5D050:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A5D030;
      }
      goto L_08A5D058;
    }
L_08A5D058:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08A5D05C;
L_08A5D05C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D080:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5D0B8;
      }
      goto L_08A5D0A0;
    }
L_08A5D0A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5D0ACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A5D080;
L_08A5D0AC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D0A0;
      }
      goto L_08A5D0B8;
    }
L_08A5D0B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D0CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5D0F4;
      }
      goto L_08A5D0EC;
    }
L_08A5D0EC:
    ctx.gpr[31] = (0x08A5D0F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5D21C;
L_08A5D0F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (0x08A5D110u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5D080;
L_08A5D110:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D12C;
      }
      goto L_08A5D120;
    }
L_08A5D120:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A5D12C;
L_08A5D12C:
    ctx.gpr[31] = (0x08A5D134u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5CFD0;
L_08A5D134:
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
L_08A5D14C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5D164u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 266u, 0x08A1D5BCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D164u) goto L_08A5D164;
    return;
L_08A5D164:
    ctx.gpr[31] = (0x08A5D16Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5CFD0;
L_08A5D16C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D180:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5D198u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 296u, 0x08A1DDA0u>(ctx, &aot_mem) && ctx.pc == 0x08A5D198u) goto L_08A5D198;
    return;
L_08A5D198:
    ctx.gpr[31] = (0x08A5D1A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5CFD0;
L_08A5D1A0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D1B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5D1CCu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 259u, 0x08A1D4B4u>(ctx, &aot_mem) && ctx.pc == 0x08A5D1CCu) goto L_08A5D1CC;
    return;
L_08A5D1CC:
    ctx.gpr[31] = (0x08A5D1D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5CFD0;
L_08A5D1D4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D1E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5D200u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 278u, 0x08A1D848u>(ctx, &aot_mem) && ctx.pc == 0x08A5D200u) goto L_08A5D200;
    return;
L_08A5D200:
    ctx.gpr[31] = (0x08A5D208u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5CFD0;
L_08A5D208:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D21C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
      if (branch_taken) {
          goto L_08A5D244;
      }
      goto L_08A5D23C;
    }
L_08A5D23C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5D264;
      }
      goto L_08A5D244;
    }
L_08A5D244:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A5D260;
      }
      goto L_08A5D250;
    }
L_08A5D250:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A5D250;
      }
      goto L_08A5D260;
    }
L_08A5D260:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    goto L_08A5D264;
L_08A5D264:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5D278u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A5D080;
L_08A5D278:
    ctx.gpr[31] = (0x08A5D280u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5CFD0;
L_08A5D280:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D294:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5D2B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6736));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 324u, 0x08A35FE0u>(ctx, &aot_mem) && ctx.pc == 0x08A5D2B4u) goto L_08A5D2B4;
    return;
L_08A5D2B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D2C8;
      }
      goto L_08A5D2C0;
    }
L_08A5D2C0:
    ctx.gpr[31] = (0x08A5D2C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5D21C;
L_08A5D2C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D2E4;
      }
      goto L_08A5D2D4;
    }
L_08A5D2D4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D2D4;
      }
      goto L_08A5D2E4;
    }
L_08A5D2E4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A5D314;
      }
      goto L_08A5D2F4;
    }
L_08A5D2F4:
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D308;
      }
      goto L_08A5D304;
    }
L_08A5D304:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A5D308;
L_08A5D308:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A5D2F4;
      }
      goto L_08A5D314;
    }
L_08A5D314:
    ctx.gpr[31] = (0x08A5D31Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D31Cu) goto L_08A5D31C;
    return;
L_08A5D31C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D330:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D338:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5D360u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6736));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 284u, 0x08A35D30u>(ctx, &aot_mem) && ctx.pc == 0x08A5D360u) goto L_08A5D360;
    return;
L_08A5D360:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D36C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D398;
      }
      goto L_08A5D384;
    }
L_08A5D384:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    goto L_08A5D398;
L_08A5D398:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A5D3C8;
      }
      goto L_08A5D3A0;
    }
L_08A5D3A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[31] = (0x08A5D3C8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08A5CFD0;
L_08A5D3C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D3D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D3F4;
      }
      goto L_08A5D3E0;
    }
L_08A5D3E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08A5D3F4;
L_08A5D3F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D3FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5D414u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6736));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 324u, 0x08A35FE0u>(ctx, &aot_mem) && ctx.pc == 0x08A5D414u) goto L_08A5D414;
    return;
L_08A5D414:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D420:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5D434u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A5D3FC;
L_08A5D434:
    ctx.gpr[31] = (0x08A5D43Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D43Cu) goto L_08A5D43C;
    return;
L_08A5D43C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D44C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A5D48C;
      }
      goto L_08A5D464;
    }
L_08A5D464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D484;
      }
      goto L_08A5D470;
    }
L_08A5D470:
    ctx.gpr[31] = (0x08A5D478u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    goto L_08A5D44C;
L_08A5D478:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D470;
      }
      goto L_08A5D484;
    }
L_08A5D484:
    ctx.gpr[31] = (0x08A5D48Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5D420;
L_08A5D48C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D4A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5D4B0u);
    // nop
    goto L_08A5D44C;
L_08A5D4B0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D4C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5D4F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-6736)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08A5D4F0u) goto L_08A5D4F0;
    return;
L_08A5D4F0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A5D4FC;
      }
      goto L_08A5D4F8;
    }
L_08A5D4F8:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08A5D4FC;
L_08A5D4FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(144), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(148), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(152), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D618;
      }
      goto L_08A5D5D4;
    }
L_08A5D5D4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5D5E0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A5D4C0;
L_08A5D5E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D5FC;
      }
      goto L_08A5D5EC;
    }
L_08A5D5EC:
    ctx.gpr[31] = (0x08A5D5F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A5D4A0;
L_08A5D5F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5D63C;
      }
      goto L_08A5D5FC;
    }
L_08A5D5FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D5D4;
      }
      goto L_08A5D618;
    }
L_08A5D618:
    ctx.gpr[16] = (ctx.gpr[20] + static_cast<std::uint32_t>(-6736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5D628u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 314u, 0x08A35F44u>(ctx, &aot_mem) && ctx.pc == 0x08A5D628u) goto L_08A5D628;
    return;
L_08A5D628:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A5D638u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 328u, 0x08A36040u>(ctx, &aot_mem) && ctx.pc == 0x08A5D638u) goto L_08A5D638;
    return;
L_08A5D638:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08A5D63C;
L_08A5D63C:
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
L_08A5D65C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5D670u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A5D4C0;
L_08A5D670:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D694;
      }
      goto L_08A5D67C;
    }
L_08A5D67C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A5D694u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5CFD0;
L_08A5D694:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D6A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D6CC;
      }
      goto L_08A5D6BC;
    }
L_08A5D6BC:
    ctx.gpr[31] = (0x08A5D6C4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    goto L_08A5D080;
L_08A5D6C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D6D4;
      }
      goto L_08A5D6CC;
    }
L_08A5D6CC:
    ctx.gpr[31] = (0x08A5D6D4u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08A5D080;
L_08A5D6D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D6E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 3u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D6F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[9] = (ctx.gpr[8] & 15u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    { const bool signed_ok = ctx.execute_signed_sub(8u, 8u, 9u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A5D704u, 0x01094022u); return; } }
      if (branch_taken) {
          goto L_08A5D748;
      }
      goto L_08A5D708;
    }
L_08A5D708:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<35u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(80);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(96);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(112);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(128);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[31] | 0u);
      if (branch_taken) {
          goto L_08A5D748;
      }
      goto L_08A5D73C;
    }
L_08A5D73C:
    ctx.gpr[31] = (0x08A5D744u);
    // nop
    goto L_08A5D750;
L_08A5D744:
    ctx.gpr[31] = (ctx.gpr[7] | 0u);
    goto L_08A5D748;
L_08A5D748:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D750:
    // PSP CACHE is a no-op in coherent host memory.
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 4u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 4u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 32u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 40u, 4u);
      ctx.eat_vfpu_prefixes(); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(80);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<9u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(96);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<10u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(112);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[6] != 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<11u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(128);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
      if (branch_taken) {
          goto L_08A5D798;
      }
      goto L_08A5D784;
    }
L_08A5D784:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D750;
      }
      goto L_08A5D790;
    }
L_08A5D790:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D798:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.execute_vfpu_vmmov(32u, 40u, 4u);
    ctx.gpr[4] = (ctx.gpr[5] + 0u);
    ctx.gpr[31] = (0x08A5D7B8u);
    ctx.gpr[5] = (ctx.gpr[6] + 0u);
    goto L_08A5D750;
L_08A5D7B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A5D790;
      }
      goto L_08A5D7D0;
    }
L_08A5D7D0:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const bool branch_taken = 0u == 0u;
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
      if (branch_taken) {
          goto L_08A5D750;
      }
      goto L_08A5D7E4;
    }
L_08A5D7E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[31] = (0x08A5D800u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6736)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08A5D800u) goto L_08A5D800;
    return;
L_08A5D800:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(144), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(148), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(152), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6736));
    ctx.gpr[31] = (0x08A5D8C4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 314u, 0x08A35F44u>(ctx, &aot_mem) && ctx.pc == 0x08A5D8C4u) goto L_08A5D8C4;
    return;
L_08A5D8C4:
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
L_08A5D8DC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[5] = (0u | 6u);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(3));
    // nop
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D928;
      }
      goto L_08A5D910;
    }
L_08A5D910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[5] = (0u | 60u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11273), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A5D928;
L_08A5D928:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D930:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6644));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A5D9EC;
      }
      goto L_08A5D944;
    }
L_08A5D944:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A5D94C;
L_08A5D94C:
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A5D9C4;
      }
      goto L_08A5D95C;
    }
L_08A5D95C:
    ctx.gpr[11] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (ctx.gpr[11] & 2u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D980;
      }
      goto L_08A5D970;
    }
L_08A5D970:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-32));
    ctx.gpr[10] = (ctx.gpr[10] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 24u));
      if (branch_taken) {
          goto L_08A5D980;
      }
      goto L_08A5D980;
    }
L_08A5D980:
    ctx.gpr[11] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (ctx.gpr[11] & 2u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D9A4;
      }
      goto L_08A5D994;
    }
L_08A5D994:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[7] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 24u));
      if (branch_taken) {
          goto L_08A5D9A4;
      }
      goto L_08A5D9A4;
    }
L_08A5D9A4:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[7];
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A5D9B4;
      }
      goto L_08A5D9AC;
    }
L_08A5D9AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5D9D4;
      }
      goto L_08A5D9B4;
    }
L_08A5D9B4:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A5D95C;
      }
      goto L_08A5D9C4;
    }
L_08A5D9C4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5D9D4;
      }
      goto L_08A5D9CC;
    }
L_08A5D9CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5D9D4;
      }
      goto L_08A5D9D4;
    }
L_08A5D9D4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D9F4;
      }
      goto L_08A5D9DC;
    }
L_08A5D9DC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D94C;
      }
      goto L_08A5D9EC;
    }
L_08A5D9EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A5D9F8;
      }
      goto L_08A5D9F4;
    }
L_08A5D9F4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    goto L_08A5D9F8;
L_08A5D9F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5DA00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (ctx.gpr[17] << 6u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    ctx.gpr[7] = (0u - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5DA68;
      }
      goto L_08A5DA48;
    }
L_08A5DA48:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[16]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[17] << 4u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1960), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A5DAA0;
      }
      goto L_08A5DA68;
    }
L_08A5DA68:
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1939)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DADC;
      }
      goto L_08A5DAA0;
    }
L_08A5DAA0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A5DAB0u);
    ctx.gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DAB0u) goto L_08A5DAB0;
    return;
L_08A5DAB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5DAE4;
      }
      goto L_08A5DAD4;
    }
L_08A5DAD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DB68;
      }
      goto L_08A5DADC;
    }
L_08A5DADC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DB6C;
      }
      goto L_08A5DAE4;
    }
L_08A5DAE4:
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[7] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    goto L_08A5DB00;
L_08A5DB00:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[8] = (ctx.gpr[8] << 4u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DB54;
      }
      goto L_08A5DB24;
    }
L_08A5DB24:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1921));
    ctx.gpr[7] = (0u | 19u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1920));
    ctx.gpr[31] = (0x08A5DB38u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A5DB38u) goto L_08A5DB38;
    return;
L_08A5DB38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A5DB68;
      }
      goto L_08A5DB54;
    }
L_08A5DB54:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A5DB00;
      }
      goto L_08A5DB68;
    }
L_08A5DB68:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1920), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08A5DB6C;
L_08A5DB6C:
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
L_08A5DB88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16952)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25200));
      if (branch_taken) {
          goto L_08A5DC28;
      }
      goto L_08A5DBB4;
    }
L_08A5DBB4:
    ctx.gpr[6] = (0u | 3000u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08A5DBBC;
L_08A5DBBC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(15952)));
    ctx.gpr[9] = (ctx.gpr[7] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(5952)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DC14;
      }
      goto L_08A5DBDC;
    }
L_08A5DBDC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(5956)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (ctx.gpr[9] & 14u);
    ctx.gpr[9] = (ctx.gpr[9] ^ 6u);
    ctx.gpr[9] = (ctx.gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DC14;
      }
      goto L_08A5DBFC;
    }
L_08A5DBFC:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(1992), ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[9]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[9] = (ctx.hi);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(1996), ctx.gpr[9]);
    goto L_08A5DC14;
L_08A5DC14:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16952)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5DBBC;
      }
      goto L_08A5DC28;
    }
L_08A5DC28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DC34u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 277u, 0x08A6D358u>(ctx, &aot_mem) && ctx.pc == 0x08A5DC34u) goto L_08A5DC34;
    return;
L_08A5DC34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DC40u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 277u, 0x08A6D358u>(ctx, &aot_mem) && ctx.pc == 0x08A5DC40u) goto L_08A5DC40;
    return;
L_08A5DC40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DC60;
      }
      goto L_08A5DC4C;
    }
L_08A5DC4C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5DC58u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x08A5DC58u) goto L_08A5DC58;
    return;
L_08A5DC58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DC6C;
      }
      goto L_08A5DC60;
    }
L_08A5DC60:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5DC6Cu);
    ctx.gpr[5] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x08A5DC6Cu) goto L_08A5DC6C;
    return;
L_08A5DC6C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5DC80:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DC9C;
      }
      goto L_08A5DC8C;
    }
L_08A5DC8C:
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A5DC9C;
L_08A5DC9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5DCA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5DCC8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-24800));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 715u, 0x08A9A694u>(ctx, &aot_mem) && ctx.pc == 0x08A5DCC8u) goto L_08A5DCC8;
    return;
L_08A5DCC8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19216), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5DCE8;
      }
      goto L_08A5DCD8;
    }
L_08A5DCD8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DCE8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 741u, 0x08A9A838u>(ctx, &aot_mem) && ctx.pc == 0x08A5DCE8u) goto L_08A5DCE8;
    return;
L_08A5DCE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x08A5DCF8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 715u, 0x08A9A694u>(ctx, &aot_mem) && ctx.pc == 0x08A5DCF8u) goto L_08A5DCF8;
    return;
L_08A5DCF8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19956), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A5DD14;
      }
      goto L_08A5DD04;
    }
L_08A5DD04:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DD14u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 741u, 0x08A9A838u>(ctx, &aot_mem) && ctx.pc == 0x08A5DD14u) goto L_08A5DD14;
    return;
L_08A5DD14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x08A5DD24u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 715u, 0x08A9A694u>(ctx, &aot_mem) && ctx.pc == 0x08A5DD24u) goto L_08A5DD24;
    return;
L_08A5DD24:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19952), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A5DD40;
      }
      goto L_08A5DD30;
    }
L_08A5DD30:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DD40u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 741u, 0x08A9A838u>(ctx, &aot_mem) && ctx.pc == 0x08A5DD40u) goto L_08A5DD40;
    return;
L_08A5DD40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08A5DD50u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 715u, 0x08A9A694u>(ctx, &aot_mem) && ctx.pc == 0x08A5DD50u) goto L_08A5DD50;
    return;
L_08A5DD50:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21840), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A5DD6C;
      }
      goto L_08A5DD5C;
    }
L_08A5DD5C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DD6Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 741u, 0x08A9A838u>(ctx, &aot_mem) && ctx.pc == 0x08A5DD6Cu) goto L_08A5DD6C;
    return;
L_08A5DD6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[31] = (0x08A5DD7Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 715u, 0x08A9A694u>(ctx, &aot_mem) && ctx.pc == 0x08A5DD7Cu) goto L_08A5DD7C;
    return;
L_08A5DD7C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19220), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A5DD98;
      }
      goto L_08A5DD88;
    }
L_08A5DD88:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DD98u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 741u, 0x08A9A838u>(ctx, &aot_mem) && ctx.pc == 0x08A5DD98u) goto L_08A5DD98;
    return;
L_08A5DD98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[31] = (0x08A5DDA8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 715u, 0x08A9A694u>(ctx, &aot_mem) && ctx.pc == 0x08A5DDA8u) goto L_08A5DDA8;
    return;
L_08A5DDA8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19224), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A5DDC4;
      }
      goto L_08A5DDB4;
    }
L_08A5DDB4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DDC4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 741u, 0x08A9A838u>(ctx, &aot_mem) && ctx.pc == 0x08A5DDC4u) goto L_08A5DDC4;
    return;
L_08A5DDC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[31] = (0x08A5DDD4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 715u, 0x08A9A694u>(ctx, &aot_mem) && ctx.pc == 0x08A5DDD4u) goto L_08A5DDD4;
    return;
L_08A5DDD4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21844), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A5DDF0;
      }
      goto L_08A5DDE0;
    }
L_08A5DDE0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DDF0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 741u, 0x08A9A838u>(ctx, &aot_mem) && ctx.pc == 0x08A5DDF0u) goto L_08A5DDF0;
    return;
L_08A5DDF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[31] = (0x08A5DE00u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 715u, 0x08A9A694u>(ctx, &aot_mem) && ctx.pc == 0x08A5DE00u) goto L_08A5DE00;
    return;
L_08A5DE00:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21848), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A5DE1C;
      }
      goto L_08A5DE0C;
    }
L_08A5DE0C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DE1Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 741u, 0x08A9A838u>(ctx, &aot_mem) && ctx.pc == 0x08A5DE1Cu) goto L_08A5DE1C;
    return;
L_08A5DE1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08A5DE2Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 715u, 0x08A9A694u>(ctx, &aot_mem) && ctx.pc == 0x08A5DE2Cu) goto L_08A5DE2C;
    return;
L_08A5DE2C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21852), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A5DE48;
      }
      goto L_08A5DE38;
    }
L_08A5DE38:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DE48u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 741u, 0x08A9A838u>(ctx, &aot_mem) && ctx.pc == 0x08A5DE48u) goto L_08A5DE48;
    return;
L_08A5DE48:
    ctx.gpr[6] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21920), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 5662u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A5DE5C;
L_08A5DE5C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(21892), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21900), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21902), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21904), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21916), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21888), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(21908), 0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21918), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5DE5C;
      }
      goto L_08A5DE90;
    }
L_08A5DE90:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[31] = (0x08A5DEA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5DB88;
L_08A5DEA0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17224), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17225), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17228), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5DEC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5DEF0;
      }
      goto L_08A5DEDC;
    }
L_08A5DEDC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A5DEE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 729u, 0x08A9A75Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5DEE8u) goto L_08A5DEE8;
    return;
L_08A5DEE8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21852), ctx.gpr[4]);
    goto L_08A5DEF0;
L_08A5DEF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21844)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5DF10;
      }
      goto L_08A5DEFC;
    }
L_08A5DEFC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A5DF08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 729u, 0x08A9A75Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5DF08u) goto L_08A5DF08;
    return;
L_08A5DF08:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21844), ctx.gpr[4]);
    goto L_08A5DF10;
L_08A5DF10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21848)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5DF30;
      }
      goto L_08A5DF1C;
    }
L_08A5DF1C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A5DF28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 729u, 0x08A9A75Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5DF28u) goto L_08A5DF28;
    return;
L_08A5DF28:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21848), ctx.gpr[4]);
    goto L_08A5DF30;
L_08A5DF30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19224)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5DF50;
      }
      goto L_08A5DF3C;
    }
L_08A5DF3C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A5DF48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 729u, 0x08A9A75Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5DF48u) goto L_08A5DF48;
    return;
L_08A5DF48:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19224), ctx.gpr[4]);
    goto L_08A5DF50;
L_08A5DF50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19220)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5DF70;
      }
      goto L_08A5DF5C;
    }
L_08A5DF5C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A5DF68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 729u, 0x08A9A75Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5DF68u) goto L_08A5DF68;
    return;
L_08A5DF68:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19220), ctx.gpr[4]);
    goto L_08A5DF70;
L_08A5DF70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19216)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5DF90;
      }
      goto L_08A5DF7C;
    }
L_08A5DF7C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A5DF88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 729u, 0x08A9A75Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5DF88u) goto L_08A5DF88;
    return;
L_08A5DF88:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19216), ctx.gpr[4]);
    goto L_08A5DF90;
L_08A5DF90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19956)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5DFB0;
      }
      goto L_08A5DF9C;
    }
L_08A5DF9C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A5DFA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 729u, 0x08A9A75Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5DFA8u) goto L_08A5DFA8;
    return;
L_08A5DFA8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19956), ctx.gpr[4]);
    goto L_08A5DFB0;
L_08A5DFB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19952)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5DFD0;
      }
      goto L_08A5DFBC;
    }
L_08A5DFBC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A5DFC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 729u, 0x08A9A75Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5DFC8u) goto L_08A5DFC8;
    return;
L_08A5DFC8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19952), ctx.gpr[4]);
    goto L_08A5DFD0;
L_08A5DFD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21840)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5DFF0;
      }
      goto L_08A5DFDC;
    }
L_08A5DFDC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A5DFE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 729u, 0x08A9A75Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5DFE8u) goto L_08A5DFE8;
    return;
L_08A5DFE8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21840), ctx.gpr[4]);
    goto L_08A5DFF0;
L_08A5DFF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E000:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E008:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5E01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A5E01Cu) goto L_08A5E01C;
    return;
L_08A5E01C:
    ctx.gpr[31] = (0x08A5E024u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A5E024u) goto L_08A5E024;
    return;
L_08A5E024:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A5E060;
      }
      goto L_08A5E02C;
    }
L_08A5E02C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E060;
      }
      goto L_08A5E034;
    }
L_08A5E034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E060;
      }
      goto L_08A5E040;
    }
L_08A5E040:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 4u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E060;
      }
      goto L_08A5E05C;
    }
L_08A5E05C:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A5E060;
L_08A5E060:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] << 5u);
    ctx.gpr[6] = (ctx.gpr[7] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(5961)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A5E270;
      }
      goto L_08A5E0A0;
    }
L_08A5E0A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(5952)));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5E270;
      }
      goto L_08A5E0B0;
    }
L_08A5E0B0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(23808)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E0C8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E0E4;
      }
      goto L_08A5E0D4;
    }
L_08A5E0D4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A5E0E4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A5E27C;
L_08A5E0E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E270;
      }
      goto L_08A5E0EC;
    }
L_08A5E0EC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E108;
      }
      goto L_08A5E0F8;
    }
L_08A5E0F8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A5E108u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 409u, 0x08A79500u>(ctx, &aot_mem) && ctx.pc == 0x08A5E108u) goto L_08A5E108;
    return;
L_08A5E108:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E270;
      }
      goto L_08A5E110;
    }
L_08A5E110:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E12C;
      }
      goto L_08A5E11C;
    }
L_08A5E11C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A5E12Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 437u, 0x08A797BCu>(ctx, &aot_mem) && ctx.pc == 0x08A5E12Cu) goto L_08A5E12C;
    return;
L_08A5E12C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E270;
      }
      goto L_08A5E134;
    }
L_08A5E134:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E150;
      }
      goto L_08A5E140;
    }
L_08A5E140:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A5E150u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 214u, 0x08A6CE74u>(ctx, &aot_mem) && ctx.pc == 0x08A5E150u) goto L_08A5E150;
    return;
L_08A5E150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E270;
      }
      goto L_08A5E158;
    }
L_08A5E158:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E18C;
      }
      goto L_08A5E164;
    }
L_08A5E164:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29200)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (0u | 13u);
      if (branch_taken) {
          goto L_08A5E17C;
      }
      goto L_08A5E174;
    }
L_08A5E174:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A5E18C;
      }
      goto L_08A5E17C;
    }
L_08A5E17C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A5E18Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 595u, 0x08A7AF98u>(ctx, &aot_mem) && ctx.pc == 0x08A5E18Cu) goto L_08A5E18C;
    return;
L_08A5E18C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E270;
      }
      goto L_08A5E194;
    }
L_08A5E194:
    ctx.gpr[31] = (0x08A5E19Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 690u, 0x08A7B8C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E19Cu) goto L_08A5E19C;
    return;
L_08A5E19C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E270;
      }
      goto L_08A5E1A4;
    }
L_08A5E1A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E1B8;
      }
      goto L_08A5E1B0;
    }
L_08A5E1B0:
    ctx.gpr[31] = (0x08A5E1B8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 772u, 0x08A7BF64u>(ctx, &aot_mem) && ctx.pc == 0x08A5E1B8u) goto L_08A5E1B8;
    return;
L_08A5E1B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E270;
      }
      goto L_08A5E1C0;
    }
L_08A5E1C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E1D4;
      }
      goto L_08A5E1CC;
    }
L_08A5E1CC:
    ctx.gpr[31] = (0x08A5E1D4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 230u, 0x08A6D024u>(ctx, &aot_mem) && ctx.pc == 0x08A5E1D4u) goto L_08A5E1D4;
    return;
L_08A5E1D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E270;
      }
      goto L_08A5E1DC;
    }
L_08A5E1DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E1F0;
      }
      goto L_08A5E1E8;
    }
L_08A5E1E8:
    ctx.gpr[31] = (0x08A5E1F0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 20u, 0x08A7C1F8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E1F0u) goto L_08A5E1F0;
    return;
L_08A5E1F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E270;
      }
      goto L_08A5E1F8;
    }
L_08A5E1F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E20C;
      }
      goto L_08A5E204;
    }
L_08A5E204:
    ctx.gpr[31] = (0x08A5E20Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 231u, 0x08A6D02Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E20Cu) goto L_08A5E20C;
    return;
L_08A5E20C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E270;
      }
      goto L_08A5E214;
    }
L_08A5E214:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E228;
      }
      goto L_08A5E220;
    }
L_08A5E220:
    ctx.gpr[31] = (0x08A5E228u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 635u, 0x08A7B3E4u>(ctx, &aot_mem) && ctx.pc == 0x08A5E228u) goto L_08A5E228;
    return;
L_08A5E228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E270;
      }
      goto L_08A5E230;
    }
L_08A5E230:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E244;
      }
      goto L_08A5E23C;
    }
L_08A5E23C:
    ctx.gpr[31] = (0x08A5E244u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 223u, 0x08A6CF14u>(ctx, &aot_mem) && ctx.pc == 0x08A5E244u) goto L_08A5E244;
    return;
L_08A5E244:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E270;
      }
      goto L_08A5E24C;
    }
L_08A5E24C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E268;
      }
      goto L_08A5E258;
    }
L_08A5E258:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A5E268u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 205u, 0x08A6CCE0u>(ctx, &aot_mem) && ctx.pc == 0x08A5E268u) goto L_08A5E268;
    return;
L_08A5E268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E270;
      }
      goto L_08A5E270;
    }
L_08A5E270:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E27C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(5956)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E338;
      }
      goto L_08A5E2A0;
    }
L_08A5E2A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] >> 1u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 6u);
      if (branch_taken) {
          goto L_08A5E2DC;
      }
      goto L_08A5E2B8;
    }
L_08A5E2B8:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A5E338;
      }
      goto L_08A5E2C4;
    }
L_08A5E2C4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E2EC;
      }
      goto L_08A5E2CC;
    }
L_08A5E2CC:
    ctx.gpr[31] = (0x08A5E2D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 419u, 0x08A6DDF0u>(ctx, &aot_mem) && ctx.pc == 0x08A5E2D4u) goto L_08A5E2D4;
    return;
L_08A5E2D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E338;
      }
      goto L_08A5E2DC;
    }
L_08A5E2DC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A5E2FC;
      }
      goto L_08A5E2E4;
    }
L_08A5E2E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E338;
      }
      goto L_08A5E2EC;
    }
L_08A5E2EC:
    ctx.gpr[31] = (0x08A5E2F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 134u, 0x08A60CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E2F4u) goto L_08A5E2F4;
    return;
L_08A5E2F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E338;
      }
      goto L_08A5E2FC;
    }
L_08A5E2FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E328;
      }
      goto L_08A5E318;
    }
L_08A5E318:
    ctx.gpr[31] = (0x08A5E320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 185u, 0x08A1CE60u>(ctx, &aot_mem) && ctx.pc == 0x08A5E320u) goto L_08A5E320;
    return;
L_08A5E320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E330;
      }
      goto L_08A5E328;
    }
L_08A5E328:
    ctx.gpr[31] = (0x08A5E330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 137u, 0x08A60D50u>(ctx, &aot_mem) && ctx.pc == 0x08A5E330u) goto L_08A5E330;
    return;
L_08A5E330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E338;
      }
      goto L_08A5E338;
    }
L_08A5E338:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E344:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17394u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5E4D8;
      }
      goto L_08A5E378;
    }
L_08A5E378:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (15395u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7808)));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5E4D8;
      }
      goto L_08A5E39C;
    }
L_08A5E39C:
    ctx.gpr[31] = (0x08A5E3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 421u, 0x08ACA8D4u>(ctx, &aot_mem) && ctx.pc == 0x08A5E3A4u) goto L_08A5E3A4;
    return;
L_08A5E3A4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08A5E3C0;
    }
    goto L_08A5E3AC;
L_08A5E3AC:
    ctx.gpr[31] = (0x08A5E3B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 425u, 0x08ACA8FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5E3B4u) goto L_08A5E3B4;
    return;
L_08A5E3B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E4D8;
      }
      goto L_08A5E3BC;
    }
L_08A5E3BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08A5E3C0;
L_08A5E3C0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(673)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(673), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(673)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E440;
      }
      goto L_08A5E3E0;
    }
L_08A5E3E0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(673), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A5E3F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A5DC80;
L_08A5E3F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7808)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16816u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5E428u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E428u) goto L_08A5E428;
    return;
L_08A5E428:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08A5E448;
    }
    goto L_08A5E438;
L_08A5E438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E4D8;
      }
      goto L_08A5E440;
    }
L_08A5E440:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E4D8;
      }
      goto L_08A5E448;
    }
L_08A5E448:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(674));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(674)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21928)));
        goto L_08A5E47C;
    }
    goto L_08A5E470;
L_08A5E470:
    ctx.gpr[5] = (0u | 68u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(674), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21928)));
    goto L_08A5E47C;
L_08A5E47C:
    ctx.gpr[5] = (0u | 4000u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(10640));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(28000));
    ctx.gpr[31] = (0x08A5E4D8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A5E4D8u) goto L_08A5E4D8;
    return;
L_08A5E4D8:
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
L_08A5E4F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (17561u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5E74C;
      }
      goto L_08A5E538;
    }
L_08A5E538:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x08A5E548u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 302u, 0x088B5D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E548u) goto L_08A5E548;
    return;
L_08A5E548:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5E574;
      }
      goto L_08A5E554;
    }
L_08A5E554:
    ctx.gpr[31] = (0x08A5E55Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A5E55Cu) goto L_08A5E55C;
    return;
L_08A5E55C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16908u << 16u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5E57C;
      }
      goto L_08A5E56C;
    }
L_08A5E56C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5E5BC;
      }
      goto L_08A5E574;
    }
L_08A5E574:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E74C;
      }
      goto L_08A5E57C;
    }
L_08A5E57C:
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E5B8;
      }
      goto L_08A5E5B0;
    }
L_08A5E5B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5E5BC;
      }
      goto L_08A5E5B8;
    }
L_08A5E5B8:
    ctx.gpr[18] = (0u | 0u);
    goto L_08A5E5BC;
L_08A5E5BC:
    if (ctx.gpr[18] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(588)));
        goto L_08A5E620;
    }
    goto L_08A5E5C4;
L_08A5E5C4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25184));
    ctx.gpr[31] = (0x08A5E5D4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 7u, 0x08A9802Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E5D4u) goto L_08A5E5D4;
    return;
L_08A5E5D4:
    ctx.gpr[19] = (ctx.gpr[2] & 65535u);
    ctx.gpr[31] = (0x08A5E5E0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1077u, 0x08A97EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A5E5E0u) goto L_08A5E5E0;
    return;
L_08A5E5E0:
    ctx.gpr[20] = (ctx.gpr[2] & 65535u);
    ctx.gpr[31] = (0x08A5E5ECu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 835u, 0x08A97400u>(ctx, &aot_mem) && ctx.pc == 0x08A5E5ECu) goto L_08A5E5EC;
    return;
L_08A5E5EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A5E604;
      }
      goto L_08A5E5F8;
    }
L_08A5E5F8:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    goto L_08A5E604;
L_08A5E604:
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
        goto L_08A5E614;
    }
    goto L_08A5E614;
L_08A5E614:
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A5E654;
      }
      goto L_08A5E620;
    }
L_08A5E620:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_08A5E654;
L_08A5E654:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A5E664;
    }
    goto L_08A5E664;
L_08A5E664:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_08A5E6B4;
      }
      goto L_08A5E674;
    }
L_08A5E674:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11316)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E6A0;
      }
      goto L_08A5E688;
    }
L_08A5E688:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30));
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
        goto L_08A5E698;
    }
    goto L_08A5E698;
L_08A5E698:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A5E6B4;
      }
      goto L_08A5E6A0;
    }
L_08A5E6A0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
        goto L_08A5E6B0;
    }
    goto L_08A5E6B0;
L_08A5E6B0:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_08A5E6B4;
L_08A5E6B4:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A5E6C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5DC80;
L_08A5E6C0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5E6D4u);
    ctx.gpr[5] = (0u | 70u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E6D4u) goto L_08A5E6D4;
    return;
L_08A5E6D4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A5E73C;
      }
      goto L_08A5E6E4;
    }
L_08A5E6E4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5565u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5E73Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A5E73Cu) goto L_08A5E73C;
    return;
L_08A5E73C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E74C;
      }
      goto L_08A5E744;
    }
L_08A5E744:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(11316), ctx.gpr[19]);
    goto L_08A5E74C;
L_08A5E74C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E774:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17505u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5E984;
      }
      goto L_08A5E7B0;
    }
L_08A5E7B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-999));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5E7DC;
      }
      goto L_08A5E7C4;
    }
L_08A5E7C4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E7E4;
      }
      goto L_08A5E7D4;
    }
L_08A5E7D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E97C;
      }
      goto L_08A5E7DC;
    }
L_08A5E7DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5E988;
      }
      goto L_08A5E7E4;
    }
L_08A5E7E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(588)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5E808;
      }
      goto L_08A5E7FC;
    }
L_08A5E7FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E97C;
      }
      goto L_08A5E808;
    }
L_08A5E808:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A5E818u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5DC80;
L_08A5E818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1729)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A5E848;
      }
      goto L_08A5E830;
    }
L_08A5E830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08A5E86C;
      }
      goto L_08A5E848;
    }
L_08A5E848:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1730)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1732)));
      if (branch_taken) {
          goto L_08A5E868;
      }
      goto L_08A5E854;
    }
L_08A5E854:
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1732), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A5E868;
L_08A5E868:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    goto L_08A5E86C;
L_08A5E86C:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16832u << 16u);
      if (branch_taken) {
          goto L_08A5E880;
      }
      goto L_08A5E87C;
    }
L_08A5E87C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    goto L_08A5E880;
L_08A5E880:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A5E8A4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E8A4u) goto L_08A5E8A4;
    return;
L_08A5E8A4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A5E97C;
      }
      goto L_08A5E8B4;
    }
L_08A5E8B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (17851u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(588)));
    ctx.gpr[4] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5E8F4;
      }
      goto L_08A5E8E0;
    }
L_08A5E8E0:
    ctx.gpr[4] = (0u | 61u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 260u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5E904;
      }
      goto L_08A5E8F4;
    }
L_08A5E8F4:
    ctx.gpr[4] = (0u | 62u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 261u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A5E904;
L_08A5E904:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5E92C;
      }
      goto L_08A5E91C;
    }
L_08A5E91C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7000));
      if (branch_taken) {
          goto L_08A5E944;
      }
      goto L_08A5E92C;
    }
L_08A5E92C:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7000));
    goto L_08A5E944;
L_08A5E944:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5E97Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A5E97Cu) goto L_08A5E97C;
    return;
L_08A5E97C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5E988;
      }
      goto L_08A5E984;
    }
L_08A5E984:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5E988;
L_08A5E988:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E9AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (16916u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[11] | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[21] = (ctx.gpr[8] & 255u);
    ctx.gpr[20] = (ctx.gpr[9] & 255u);
    ctx.gpr[19] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5EA08u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EA08u) goto L_08A5EA08;
    return;
L_08A5EA08:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (17579u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5EA30;
      }
      goto L_08A5EA2C;
    }
L_08A5EA2C:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    goto L_08A5EA30;
L_08A5EA30:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A5EA5C;
      }
      goto L_08A5EA4C;
    }
L_08A5EA4C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5EA64;
      }
      goto L_08A5EA5C;
    }
L_08A5EA5C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    goto L_08A5EA64;
L_08A5EA64:
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5EA8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A5EA8Cu) goto L_08A5EA8C;
    return;
L_08A5EA8C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5EAB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (18204u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5EC24;
      }
      goto L_08A5EAEC;
    }
L_08A5EAEC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5EAFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A5DC80;
L_08A5EAFC:
    ctx.gpr[6] = (17224u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5EB18u);
    ctx.gpr[5] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EB18u) goto L_08A5EB18;
    return;
L_08A5EB18:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 52u);
      if (branch_taken) {
          goto L_08A5EB80;
      }
      goto L_08A5EB28;
    }
L_08A5EB28:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 97u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 12500u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5EB80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A5EB80u) goto L_08A5EB80;
    return;
L_08A5EB80:
    ctx.gpr[4] = (17917u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5EC24;
      }
      goto L_08A5EBA0;
    }
L_08A5EBA0:
    ctx.gpr[6] = (17076u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5EBBCu);
    ctx.gpr[5] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EBBCu) goto L_08A5EBBC;
    return;
L_08A5EBBC:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A5EC24;
      }
      goto L_08A5EBCC;
    }
L_08A5EBCC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 98u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 25000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5EC24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A5EC24u) goto L_08A5EC24;
    return;
L_08A5EC24:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5EC3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EC54;
      }
      goto L_08A5EC48;
    }
L_08A5EC48:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10920), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A5EC54;
L_08A5EC54:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5EC5C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5EC64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17608u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5EEB8;
      }
      goto L_08A5EC98;
    }
L_08A5EC98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(685)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5ECBC;
      }
      goto L_08A5ECA8;
    }
L_08A5ECA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5ECB4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A5F5A8;
L_08A5ECB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5ECF0;
      }
      goto L_08A5ECBC;
    }
L_08A5ECBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 154u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5ECE8;
      }
      goto L_08A5ECD0;
    }
L_08A5ECD0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5ECF8;
      }
      goto L_08A5ECE0;
    }
L_08A5ECE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A5ED20;
      }
      goto L_08A5ECE8;
    }
L_08A5ECE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5EEBC;
      }
      goto L_08A5ECF0;
    }
L_08A5ECF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5EEBC;
      }
      goto L_08A5ECF8;
    }
L_08A5ECF8:
    ctx.gpr[8] = (0u | 65535u);
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
        goto L_08A5ED20;
    }
    goto L_08A5ED04;
L_08A5ED04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (0u | 80u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A5ED20;
      }
      goto L_08A5ED18;
    }
L_08A5ED18:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    goto L_08A5ED20;
L_08A5ED20:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5ED3C;
      }
      goto L_08A5ED28;
    }
L_08A5ED28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5ED44;
      }
      goto L_08A5ED34;
    }
L_08A5ED34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EEB0;
      }
      goto L_08A5ED3C;
    }
L_08A5ED3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5EEBC;
      }
      goto L_08A5ED44;
    }
L_08A5ED44:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 496u);
    ctx.gpr[6] = (ctx.gpr[6] >> 4u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EDCC;
      }
      goto L_08A5ED58;
    }
L_08A5ED58:
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(45) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (0u | 44u);
      if (branch_taken) {
          goto L_08A5ED70;
      }
      goto L_08A5ED64;
    }
L_08A5ED64:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(680), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    goto L_08A5ED70;
L_08A5ED70:
    ctx.gpr[7] = (0u | 44u);
    if (ctx.gpr[5] != ctx.gpr[7]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(684)));
        goto L_08A5ED9C;
    }
    goto L_08A5ED7C;
L_08A5ED7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(684), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(684)));
    goto L_08A5ED9C;
L_08A5ED9C:
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10921));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EDFC;
      }
      goto L_08A5EDCC;
    }
L_08A5EDCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A5EDDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5DC80;
L_08A5EDDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (16928u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A5EE04;
      }
      goto L_08A5EDF4;
    }
L_08A5EDF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 20u);
      if (branch_taken) {
          goto L_08A5EE08;
      }
      goto L_08A5EDFC;
    }
L_08A5EDFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5EEBC;
      }
      goto L_08A5EE04;
    }
L_08A5EE04:
    ctx.gpr[4] = (0u | 80u);
    goto L_08A5EE08;
L_08A5EE08:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08A5EE1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EE1Cu) goto L_08A5EE1C;
    return;
L_08A5EE1C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08A5EEB0;
      }
      goto L_08A5EE2C;
    }
L_08A5EE2C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8292));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5EEB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A5EEB0u) goto L_08A5EEB0;
    return;
L_08A5EEB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5EEBC;
      }
      goto L_08A5EEB8;
    }
L_08A5EEB8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5EEBC;
L_08A5EEBC:
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
L_08A5EED8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (17692u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5F018;
      }
      goto L_08A5EF0C;
    }
L_08A5EF0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F010;
      }
      goto L_08A5EF20;
    }
L_08A5EF20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(588)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F010;
      }
      goto L_08A5EF38;
    }
L_08A5EF38:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5EF48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5DC80;
L_08A5EF48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A5EF68;
      }
      goto L_08A5EF60;
    }
L_08A5EF60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 15u);
      if (branch_taken) {
          goto L_08A5EF6C;
      }
      goto L_08A5EF68;
    }
L_08A5EF68:
    ctx.gpr[4] = (0u | 60u);
    goto L_08A5EF6C;
L_08A5EF6C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08A5EF80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5EF80u) goto L_08A5EF80;
    return;
L_08A5EF80:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 12u);
      if (branch_taken) {
          goto L_08A5F010;
      }
      goto L_08A5EF90;
    }
L_08A5EF90:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 262u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 262u);
    ctx.gpr[31] = (0x08A5EFBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A5EFBCu) goto L_08A5EFBC;
    return;
L_08A5EFBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 1023u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5F010u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A5F010u) goto L_08A5F010;
    return;
L_08A5F010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5F01C;
      }
      goto L_08A5F018;
    }
L_08A5F018:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5F01C;
L_08A5F01C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F034:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5F230;
      }
      goto L_08A5F090;
    }
L_08A5F090:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A5F0A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5DC80;
L_08A5F0A4:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (15205u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 24642u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (2233u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (2233u << 16u);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[19] = (0u | 2u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (0u | 6u);
    ctx.gpr[22] = (0u | 10u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-25200));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(10640));
    goto L_08A5F100;
L_08A5F100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A5F10Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 215u, 0x08A292C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5F10Cu) goto L_08A5F10C;
    return;
L_08A5F10C:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A5F214;
      }
      goto L_08A5F118;
    }
L_08A5F118:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(880));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A5F144;
      }
      goto L_08A5F13C;
    }
L_08A5F13C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A5F214;
      }
      goto L_08A5F144;
    }
L_08A5F144:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F214;
      }
      goto L_08A5F15C;
    }
L_08A5F15C:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
        goto L_08A5F174;
    }
    goto L_08A5F16C;
L_08A5F16C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08A5F174;
L_08A5F174:
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A5F194u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F194u) goto L_08A5F194;
    return;
L_08A5F194:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A5F214;
      }
      goto L_08A5F1A4;
    }
L_08A5F1A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[30]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x08A5F1CCu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A5F1CCu) goto L_08A5F1CC;
    return;
L_08A5F1CC:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5F1DCu);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F1DCu) goto L_08A5F1DC;
    return;
L_08A5F1DC:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A5F210u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A5F210u) goto L_08A5F210;
    return;
L_08A5F210:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08A5F214;
L_08A5F214:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F100;
      }
      goto L_08A5F228;
    }
L_08A5F228:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5F234;
      }
      goto L_08A5F230;
    }
L_08A5F230:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5F234;
L_08A5F234:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F278:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(588)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[6] = (0u | 5u);
      if (branch_taken) {
          goto L_08A5F2A8;
      }
      goto L_08A5F28C;
    }
L_08A5F28C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5F2A0;
      }
      goto L_08A5F294;
    }
L_08A5F294:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1732));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A5F2B8;
      }
      goto L_08A5F2A0;
    }
L_08A5F2A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F310;
      }
      goto L_08A5F2A8;
    }
L_08A5F2A8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A5F2A0;
      }
      goto L_08A5F2B0;
    }
L_08A5F2B0:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1448));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A5F2B8;
L_08A5F2B8:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (15759u << 16u);
      if (branch_taken) {
          goto L_08A5F2F0;
      }
      goto L_08A5F2C8;
    }
L_08A5F2C8:
    ctx.gpr[5] = (15800u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 20972u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A5F2E8;
    }
    goto L_08A5F2E8;
L_08A5F2E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A5F310;
      }
      goto L_08A5F2F0;
    }
L_08A5F2F0:
    ctx.gpr[5] = (ctx.gpr[5] | 23593u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A5F30C;
    }
    goto L_08A5F30C;
L_08A5F30C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A5F310;
L_08A5F310:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F318:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A5F33C;
      }
      goto L_08A5F32C;
    }
L_08A5F32C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A5F460;
      }
      goto L_08A5F334;
    }
L_08A5F334:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F358;
      }
      goto L_08A5F33C;
    }
L_08A5F33C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A5F43C;
      }
      goto L_08A5F348;
    }
L_08A5F348:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F3A4;
      }
      goto L_08A5F350;
    }
L_08A5F350:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F460;
      }
      goto L_08A5F358;
    }
L_08A5F358:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          goto L_08A5F39C;
      }
      goto L_08A5F374;
    }
L_08A5F374:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16153u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    goto L_08A5F39C;
L_08A5F39C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F460;
      }
      goto L_08A5F3A4;
    }
L_08A5F3A4:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F3E0;
      }
      goto L_08A5F3C0;
    }
L_08A5F3C0:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16153u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    goto L_08A5F3E0;
L_08A5F3E0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F420;
      }
      goto L_08A5F400;
    }
L_08A5F400:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A5F420;
    }
    goto L_08A5F420;
L_08A5F420:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F434;
      }
      goto L_08A5F430;
    }
L_08A5F430:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5F434;
L_08A5F434:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F460;
      }
      goto L_08A5F43C;
    }
L_08A5F43C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A5F460;
    }
    goto L_08A5F460;
L_08A5F460:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A5F49C;
    }
    goto L_08A5F49C;
L_08A5F49C:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08A5F4B0;
    }
    goto L_08A5F4B0;
L_08A5F4B0:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F4B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A5F4EC;
      }
      goto L_08A5F4D0;
    }
L_08A5F4D0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(84)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08A5F4EC;
    }
    goto L_08A5F4EC;
L_08A5F4EC:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08A5F520;
    }
    goto L_08A5F520;
L_08A5F520:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A5F534;
    }
    goto L_08A5F534;
L_08A5F534:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F53C:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(46) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F56C;
      }
      goto L_08A5F54C;
    }
L_08A5F54C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(23864)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F564:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5F570;
      }
      goto L_08A5F56C;
    }
L_08A5F56C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5F570;
L_08A5F570:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F578:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5F588u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 833u, 0x0889FDA4u>(ctx, &aot_mem) && ctx.pc == 0x08A5F588u) goto L_08A5F588;
    return;
L_08A5F588:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F598;
      }
      goto L_08A5F590;
    }
L_08A5F590:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5F59C;
      }
      goto L_08A5F598;
    }
L_08A5F598:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5F59C;
L_08A5F59C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F5A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 24u);
      if (branch_taken) {
          goto L_08A5F5E4;
      }
      goto L_08A5F5C4;
    }
L_08A5F5C4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A5F5E4;
      }
      goto L_08A5F5CC;
    }
L_08A5F5CC:
    ctx.gpr[31] = (0x08A5F5D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 833u, 0x0889FDA4u>(ctx, &aot_mem) && ctx.pc == 0x08A5F5D4u) goto L_08A5F5D4;
    return;
L_08A5F5D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F5EC;
      }
      goto L_08A5F5DC;
    }
L_08A5F5DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5F5F0;
      }
      goto L_08A5F5E4;
    }
L_08A5F5E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5F5F0;
      }
      goto L_08A5F5EC;
    }
L_08A5F5EC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5F5F0;
L_08A5F5F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F5FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17505u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5F774;
      }
      goto L_08A5F634;
    }
L_08A5F634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5F76C;
      }
      goto L_08A5F648;
    }
L_08A5F648:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1580)));
    ctx.gpr[4] = (15564u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (48332u << 16u);
      if (branch_taken) {
          goto L_08A5F680;
      }
      goto L_08A5F668;
    }
L_08A5F668:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F6B0;
      }
      goto L_08A5F67C;
    }
L_08A5F67C:
    ctx.gpr[4] = (48332u << 16u);
    goto L_08A5F680;
L_08A5F680:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F76C;
      }
      goto L_08A5F69C;
    }
L_08A5F69C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F76C;
      }
      goto L_08A5F6B0;
    }
L_08A5F6B0:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5F6C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5DC80;
L_08A5F6C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[18] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(70));
    ctx.gpr[31] = (0x08A5F6F0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F6F0u) goto L_08A5F6F0;
    return;
L_08A5F6F0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A5F76C;
      }
      goto L_08A5F700;
    }
L_08A5F700:
    ctx.gpr[4] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5F71Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A5F71Cu) goto L_08A5F71C;
    return;
L_08A5F71C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[19] >> 4u);
    ctx.gpr[31] = (0x08A5F730u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F730u) goto L_08A5F730;
    return;
L_08A5F730:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5F76Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A5F76Cu) goto L_08A5F76C;
    return;
L_08A5F76C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A5F778;
      }
      goto L_08A5F774;
    }
L_08A5F774:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5F778;
L_08A5F778:
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
L_08A5F798:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(46) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F7C8;
      }
      goto L_08A5F7A8;
    }
L_08A5F7A8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24048)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F7C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5F7CC;
      }
      goto L_08A5F7C8;
    }
L_08A5F7C8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5F7CC;
L_08A5F7CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F7D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17505u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5F960;
      }
      goto L_08A5F80C;
    }
L_08A5F80C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-999));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5F8A8;
      }
      goto L_08A5F820;
    }
L_08A5F820:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A5F8A0;
      }
      goto L_08A5F838;
    }
L_08A5F838:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17347u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F8A0;
      }
      goto L_08A5F854;
    }
L_08A5F854:
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.gpr[4] = (0u | 7u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A5F8B0;
      }
      goto L_08A5F874;
    }
L_08A5F874:
    ctx.gpr[5] = (0u | 71u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[19] = (0u | 60u);
    ctx.gpr[5] = (0u | 71u);
    ctx.gpr[31] = (0x08A5F894u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A5F894u) goto L_08A5F894;
    return;
L_08A5F894:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A5F8CC;
      }
      goto L_08A5F8A0;
    }
L_08A5F8A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5F964;
      }
      goto L_08A5F8A8;
    }
L_08A5F8A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5F964;
      }
      goto L_08A5F8B0;
    }
L_08A5F8B0:
    ctx.gpr[5] = (0u | 232u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 27000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[19] = (0u | 30u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08A5F8CC;
L_08A5F8CC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A5F8D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A5DC80;
L_08A5F8D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F8F4;
      }
      goto L_08A5F8EC;
    }
L_08A5F8EC:
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 2u));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    goto L_08A5F8F4;
L_08A5F8F4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5F908u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5F908u) goto L_08A5F908;
    return;
L_08A5F908:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 28u);
      if (branch_taken) {
          goto L_08A5F958;
      }
      goto L_08A5F918;
    }
L_08A5F918:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5F958u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A5F958u) goto L_08A5F958;
    return;
L_08A5F958:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5F964;
      }
      goto L_08A5F960;
    }
L_08A5F960:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5F964;
L_08A5F964:
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
L_08A5F984:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5FAC8;
      }
      goto L_08A5F9B4;
    }
L_08A5F9B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[6] = (ctx.gpr[6] & 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5FAC0;
      }
      goto L_08A5F9C8;
    }
L_08A5F9C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[7] = (0u | 5u);
      if (branch_taken) {
          goto L_08A5FA04;
      }
      goto L_08A5F9D4;
    }
L_08A5F9D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5F9EC;
      }
      goto L_08A5F9DC;
    }
L_08A5F9DC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 7u);
      if (branch_taken) {
          goto L_08A5FA18;
      }
      goto L_08A5F9EC;
    }
L_08A5F9EC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A5F9FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23440));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A5F9FCu) goto L_08A5F9FC;
    return;
L_08A5F9FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A5FACC;
      }
      goto L_08A5FA04;
    }
L_08A5FA04:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A5F9EC;
      }
      goto L_08A5FA0C;
    }
L_08A5FA0C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (ctx.gpr[6] & 7u);
    goto L_08A5FA18;
L_08A5FA18:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5FAC0;
      }
      goto L_08A5FA20;
    }
L_08A5FA20:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5FA30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5DC80;
L_08A5FA30:
    ctx.gpr[6] = (16928u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5FA4Cu);
    ctx.gpr[5] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5FA4Cu) goto L_08A5FA4C;
    return;
L_08A5FA4C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A5FAC0;
      }
      goto L_08A5FA5C;
    }
L_08A5FA5C:
    ctx.gpr[4] = (0u | 35u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 153u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[5] = (0u | 153u);
    ctx.gpr[31] = (0x08A5FA88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A5FA88u) goto L_08A5FA88;
    return;
L_08A5FA88:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5FAC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A5FAC0u) goto L_08A5FAC0;
    return;
L_08A5FAC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A5FACC;
      }
      goto L_08A5FAC8;
    }
L_08A5FAC8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5FACC;
L_08A5FACC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5FAE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (18073u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5FC2C;
      }
      goto L_08A5FB18;
    }
L_08A5FB18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5FC24;
      }
      goto L_08A5FB30;
    }
L_08A5FB30:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A5FB40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A5DC80;
L_08A5FB40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (15952u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 58720u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A5FB70;
    }
    goto L_08A5FB70;
L_08A5FB70:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17036u << 16u);
      if (branch_taken) {
          goto L_08A5FC24;
      }
      goto L_08A5FB84;
    }
L_08A5FB84:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17164u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5FBB0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5FBB0u) goto L_08A5FBB0;
    return;
L_08A5FBB0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08A5FC24;
      }
      goto L_08A5FBC0;
    }
L_08A5FBC0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 297u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 297u);
    ctx.gpr[31] = (0x08A5FBECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A5FBECu) goto L_08A5FBEC;
    return;
L_08A5FBEC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5FC24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A5FC24u) goto L_08A5FC24;
    return;
L_08A5FC24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5FC30;
      }
      goto L_08A5FC2C;
    }
L_08A5FC2C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5FC30;
L_08A5FC30:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5FC48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5FC70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 729u, 0x0896F914u>(ctx, &aot_mem) && ctx.pc == 0x08A5FC70u) goto L_08A5FC70;
    return;
L_08A5FC70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FCC0;
      }
      goto L_08A5FC78;
    }
L_08A5FC78:
    ctx.gpr[4] = (17817u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5FCB8;
      }
      goto L_08A5FC98;
    }
L_08A5FC98:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5FCC8;
      }
      goto L_08A5FCB0;
    }
L_08A5FCB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FE1C;
      }
      goto L_08A5FCB8;
    }
L_08A5FCB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5FE20;
      }
      goto L_08A5FCC0;
    }
L_08A5FCC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5FE20;
      }
      goto L_08A5FCC8;
    }
L_08A5FCC8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A5FCD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A5DC80;
L_08A5FCD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5FE1C;
      }
      goto L_08A5FCE8;
    }
L_08A5FCE8:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 33u);
      if (branch_taken) {
          goto L_08A5FE1C;
      }
      goto L_08A5FD14;
    }
L_08A5FD14:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x08A5FD40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A5FD40u) goto L_08A5FD40;
    return;
L_08A5FD40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 987u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (16576u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17036u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08A5FDA8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A5FDA8u) goto L_08A5FDA8;
    return;
L_08A5FDA8:
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 40u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17184u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A5FE1Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A5FE1Cu) goto L_08A5FE1C;
    return;
L_08A5FE1C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A5FE20;
L_08A5FE20:
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
L_08A5FE3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (17692u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5FFC4;
      }
      goto L_08A5FE70;
    }
L_08A5FE70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[6] = (14851u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4719u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5FFBC;
      }
      goto L_08A5FE98;
    }
L_08A5FE98:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FFBC;
      }
      goto L_08A5FEA8;
    }
L_08A5FEA8:
    ctx.gpr[5] = (16192u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08A5FEC4;
    }
    goto L_08A5FEC4;
L_08A5FEC4:
    ctx.gpr[5] = (16191u << 16u);
    ctx.fpr[20] = ctx.fpr[13] - ctx.fpr[20];
    ctx.gpr[5] = (ctx.gpr[5] | 57147u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[14];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A5FEE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5DC80;
L_08A5FEE4:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A5FF0Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5FF0Cu) goto L_08A5FF0C;
    return;
L_08A5FF0C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 38u);
      if (branch_taken) {
          goto L_08A5FFBC;
      }
      goto L_08A5FF1C;
    }
L_08A5FF1C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (17853u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
        goto L_08A5FF70;
    }
    goto L_08A5FF60;
L_08A5FF60:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
      if (branch_taken) {
          goto L_08A5FF84;
      }
      goto L_08A5FF70;
    }
L_08A5FF70:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    goto L_08A5FF84;
L_08A5FF84:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5FFBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A5FFBCu) goto L_08A5FFBC;
    return;
L_08A5FFBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5FFC8;
      }
      goto L_08A5FFC4;
    }
L_08A5FFC4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5FFC8;
L_08A5FFC8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5FFE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(130));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 201 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 5u, 0x08A60028u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 2u, 0x08A60004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0150(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0150_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_150(Runtime &runtime) {
    runtime.register_generated_unit(150u, 0x08A5C000u, 16384u, &recomp_unit_0150, &recomp_unit_0150_entry);
    runtime.register_function(0x08A5C000u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C00Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C018u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C024u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C02Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C030u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C038u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C04Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C058u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C064u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C06Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C070u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C078u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C08Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C098u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C10Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C118u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C124u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C12Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C130u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C138u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C14Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C158u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C164u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C16Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C170u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C178u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C18Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C198u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C224u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C238u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C308u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C320u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C330u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C348u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C354u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C36Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C378u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C388u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C394u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C39Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C3B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C3C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C3D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C3E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C3F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C400u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C404u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C420u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C444u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C458u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C4DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C500u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C528u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C530u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C54Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C570u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C580u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C588u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C590u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C59Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C5A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C5B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C5C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C5E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C5F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C60Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C618u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C638u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C640u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C668u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C674u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C76Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C9B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CB34u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CB74u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CBB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CBC0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CC64u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CC94u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CDA4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CE7Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CEB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CEC4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CEC8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CEF0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CF04u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CF5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CF88u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CF98u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CFA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CFA8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CFB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CFB4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CFD0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CFF4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D02Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D030u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D040u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D048u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D050u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D058u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D05Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D080u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D0A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D0ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D0B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D0CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D0ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D0F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D110u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D120u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D12Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D134u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D14Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D164u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D16Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D180u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D198u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D1A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D1B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D1CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D1D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D1E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D200u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D208u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D21Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D23Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D244u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D250u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D260u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D264u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D278u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D280u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D294u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D2B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D2C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D2C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D2D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D2E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D2F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D304u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D308u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D314u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D31Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D330u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D338u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D360u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D36Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D384u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D398u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D414u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D420u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D434u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D43Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D44Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D464u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D470u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D478u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D484u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D48Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D618u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D628u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D638u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D63Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D65Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D670u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D67Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D694u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D6A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D6BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D6C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D6CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D6D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D6E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D6F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D708u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D73Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D744u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D748u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D750u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D784u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D790u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D798u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D800u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D8C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D8DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D910u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D928u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D930u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D944u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D94Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D95Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D970u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D980u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D994u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA68u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DAA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DAB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DAD4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DADCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DAE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB38u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB54u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB68u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB6Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB88u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DBB4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DBBCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DBDCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DBFCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC28u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC34u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC40u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC58u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC6Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC80u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC9Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DCA4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DCC8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DCD8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DCE8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DCF8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD04u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD30u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD40u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD50u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD6Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD7Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD88u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD98u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDA8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDB4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDC4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDD4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDE0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDF0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE0Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE1Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE2Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE38u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE90u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DEA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DEC0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DEDCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DEE8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DEF0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DEFCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF10u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF1Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF28u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF30u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF3Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF50u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF68u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF7Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF88u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF90u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF9Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DFA8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DFB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DFBCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DFC8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DFD0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DFDCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DFE8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DFF0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E000u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E008u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E01Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E024u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E02Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E034u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E040u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E05Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E060u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E074u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E108u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E110u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E11Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E12Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E134u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E140u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E150u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E158u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E164u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E174u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E17Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E18Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E194u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E19Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E204u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E20Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E214u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E220u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E228u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E230u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E23Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E244u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E24Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E258u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E268u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E270u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E27Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E318u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E320u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E328u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E330u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E338u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E344u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E378u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E39Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E428u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E438u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E440u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E448u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E470u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E47Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E538u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E548u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E554u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E55Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E56Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E574u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E57Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E5B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E5B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E5BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E5C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E5D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E5E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E5ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E5F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E604u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E614u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E620u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E654u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E664u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E674u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E688u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E698u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E6A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E6B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E6B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E6C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E6D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E6E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E73Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E744u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E74Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E774u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E808u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E818u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E830u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E848u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E854u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E868u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E86Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E87Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E880u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E8A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E8B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E8E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E8F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E904u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E91Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E92Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E944u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E97Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E984u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E988u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E9ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA2Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA30u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA64u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EAB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EAECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EAFCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB18u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB28u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB80u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EBA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EBBCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EBCCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC3Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC54u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC64u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC98u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECA8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECB4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECBCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECD0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECE0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECE8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECF0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECF8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED04u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED18u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED20u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED28u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED34u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED3Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED44u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED58u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED64u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED7Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED9Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EDCCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EDDCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EDF4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EDFCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE04u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE1Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE2Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EEB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EEB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EEBCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EED8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF0Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF20u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF38u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF68u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF6Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF80u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF90u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EFBCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F010u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F018u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F01Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F034u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F090u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F0A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F100u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F10Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F118u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F13Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F144u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F15Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F16Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F174u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F194u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F1A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F1CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F1DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F210u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F214u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F228u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F230u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F234u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F278u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F28Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F294u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F2A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F2A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F2B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F2B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F2C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F2E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F2F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F30Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F310u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F318u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F32Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F334u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F33Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F348u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F350u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F358u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F374u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F39Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F3A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F3C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F3E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F400u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F420u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F430u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F434u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F43Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F460u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F49Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F4B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F4B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F4D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F4ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F520u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F534u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F53Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F54Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F564u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F56Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F570u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F578u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F588u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F590u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F598u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F59Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F5A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F5C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F5CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F5D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F5DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F5E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F5ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F5F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F5FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F634u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F648u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F668u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F67Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F680u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F69Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F6B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F6C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F6F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F700u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F71Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F730u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F76Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F774u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F778u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F798u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F7A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F7C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F7C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F7CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F7D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F80Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F820u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F838u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F854u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F874u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F894u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F908u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F918u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F958u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F960u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F964u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F984u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA04u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA0Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA18u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA20u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA30u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA88u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FAC0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FAC8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FACCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FAE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB18u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB30u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB40u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB84u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FBB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FBC0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FBECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC2Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC30u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC78u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC98u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FCB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FCB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FCC0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FCC8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FCD4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FCE8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FD14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FD40u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FDA8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE1Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE20u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE3Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE98u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FEA8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FEC4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FEE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF0Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF1Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF84u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FFBCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FFC4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FFC8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FFE0u, &recomp_unit_0150, "recomp_unit_0150");
}
} // namespace psprecomp
