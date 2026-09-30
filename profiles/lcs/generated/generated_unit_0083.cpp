#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0083[4094] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13,
    0, 0, 0, 14, 0, 15, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 0,
    0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 29, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47,
    0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0,
    0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 60, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 65, 66,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77,
    0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 86, 0, 0, 0, 87,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 91, 0, 92, 0, 0, 0, 93, 94, 0, 95, 0, 0, 96, 0, 0, 97, 98,
    0, 99, 0, 0, 0, 100, 101, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 106, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0,
    0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 119, 0, 0, 120, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 124, 125, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 129,
    0, 130, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 137, 138, 0,
    139, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146,
    0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 149, 0, 150, 0, 0, 0, 151, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0,
    0, 157, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160,
    0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 167,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0,
    0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0,
    0, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 201, 0, 202, 0, 0, 203, 0, 204, 0, 205, 0, 0, 206, 0,
    0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0,
    0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 213, 0, 214, 0, 0, 215, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220,
    0, 221, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 0, 229, 0, 230, 231, 0,
    0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 236, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0,
    0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 242, 0, 243, 0, 244, 0, 0, 245, 0, 246, 0, 247, 248, 0, 0, 249, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 253, 0, 254, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0,
    0, 258, 0, 0, 259, 0, 260, 0, 0, 0, 0, 261, 0, 262, 0, 263, 0, 0, 264, 265, 0, 266, 0, 267, 0, 0, 268, 0, 269, 0, 0, 0,
    270, 0, 271, 0, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 282, 0, 283, 0, 0, 284, 0, 0, 0, 0, 285, 0, 286, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0,
    0, 293, 0, 294, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0,
    300, 0, 301, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 306, 0, 307, 0, 0, 0, 308, 0,
    0, 0, 309, 0, 0, 310, 0, 311, 0, 0, 312, 0, 313, 0, 0, 0, 0, 314, 0, 315, 0, 316, 0, 0, 0, 0, 317, 0, 0, 318, 0, 319,
    0, 0, 0, 0, 320, 321, 0, 0, 322, 323, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0,
    0, 327, 0, 0, 0, 0, 328, 0, 329, 0, 0, 330, 331, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0,
    0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0, 0, 346, 0, 347, 0, 348, 0, 0, 349, 0, 0, 0, 350, 0,
    351, 0, 352, 0, 0, 353, 0, 0, 354, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 359, 0, 360, 0,
    361, 0, 362, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0, 376, 377, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0,
    383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0,
    0, 389, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 395, 0,
    0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0,
    0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0,
    408, 0, 0, 409, 0, 0, 410, 0, 0, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0,
    420, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0,
    0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 436,
    437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0,
    0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0,
    0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    452, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0,
    0, 0, 0, 458, 0, 459, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0,
    0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0, 0, 470, 0, 471, 472, 0, 0, 0, 0, 473, 0, 0, 474, 0, 475,
    0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0,
    0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 495, 0, 496, 0, 0, 497, 0, 0, 498, 0, 0, 499, 0,
    0, 500, 0, 0, 501, 0, 502, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 507, 0, 0, 508, 0, 0, 509, 0, 0,
    510, 0, 0, 511, 0, 512, 0, 0, 513, 0, 0, 514, 0, 0, 0, 515, 0, 0, 516, 517, 0, 518, 0, 519, 0, 520, 0, 0, 521, 0, 0, 522,
    0, 0, 523, 0, 0, 524, 0, 525, 0, 526, 0, 527, 0, 0, 0, 0, 528, 0, 529, 0, 0, 530, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 535, 0, 0, 536, 0, 537, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 0, 540, 0, 541, 0, 0, 542, 0, 543, 0, 0, 544, 0,
    0, 0, 545, 0, 0, 546, 0, 547, 0, 0, 548, 0, 549, 0, 0, 0, 550, 0, 551, 552, 0, 553, 0, 554, 0, 0, 555, 0, 0, 0, 0, 0,
    0, 556, 0, 557, 0, 0, 558, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563,
    0, 564, 0, 0, 565, 0, 566, 0, 0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 0, 572,
    0, 0, 573, 0, 574, 0, 0, 575, 0, 576, 0, 577, 0, 0, 578, 0, 0, 0, 0, 579, 0, 0, 580, 0, 581, 0, 582, 0, 0, 583, 0, 0,
    0, 584, 0, 0, 585, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 590, 0,
    591, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 597,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 603,
    0, 604, 0, 0, 605, 0, 0, 0, 0, 606, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 609, 610, 0, 611, 0, 612, 0, 0, 0, 0, 613, 614,
    0, 0, 615, 616, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0, 619, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 621, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 631, 0, 0, 632, 0,
    0, 0, 633, 0, 0, 634, 0, 635, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 0, 639, 0, 0, 0, 640,
    0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 646, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 653, 0, 0, 0, 654, 0, 0, 655, 0, 656, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 661,
    0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 664, 0, 665, 0, 666, 0,
    0, 667, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 672, 0, 0, 0,
    0, 0, 673, 0, 674, 0, 0, 675, 0, 0, 676, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678,
    0, 0, 0, 0, 679, 0, 680, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 683, 0, 684,
    0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 688, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 691, 0, 692, 0, 0, 693, 0, 0,
    694, 0, 0, 0, 0, 695, 0, 0, 0, 696, 697, 0, 698, 0, 699, 700, 0, 0, 0, 0, 0, 0, 701, 0, 0, 702, 0, 0, 703, 0, 0, 704,
    0, 0, 705, 0, 0, 0, 0, 706, 0, 0, 707, 708, 0, 709, 0, 0, 0, 0, 0, 0, 710, 0, 711, 0, 712, 0, 713, 0, 0, 714,
};
void recomp_unit_0083_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08950000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0083[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08950000;
    case 2u: goto L_0895000C;
    case 3u: goto L_08950024;
    case 4u: goto L_08950034;
    case 5u: goto L_08950038;
    case 6u: goto L_08950044;
    case 7u: goto L_08950074;
    case 8u: goto L_089500A0;
    case 9u: goto L_089500A8;
    case 10u: goto L_089500C4;
    case 11u: goto L_089500D4;
    case 12u: goto L_089500E4;
    case 13u: goto L_089500FC;
    case 14u: goto L_0895010C;
    case 15u: goto L_08950114;
    case 16u: goto L_08950124;
    case 17u: goto L_0895012C;
    case 18u: goto L_08950138;
    case 19u: goto L_08950140;
    case 20u: goto L_08950150;
    case 21u: goto L_08950158;
    case 22u: goto L_08950168;
    case 23u: goto L_08950170;
    case 24u: goto L_0895018C;
    case 25u: goto L_08950198;
    case 26u: goto L_089501A8;
    case 27u: goto L_089501B0;
    case 28u: goto L_089501B8;
    case 29u: goto L_089501C4;
    case 30u: goto L_089501D8;
    case 31u: goto L_089501E0;
    case 32u: goto L_089501E8;
    case 33u: goto L_08950240;
    case 34u: goto L_08950248;
    case 35u: goto L_08950264;
    case 36u: goto L_0895026C;
    case 37u: goto L_08950280;
    case 38u: goto L_089502A4;
    case 39u: goto L_089502A8;
    case 40u: goto L_089502D0;
    case 41u: goto L_089502F0;
    case 42u: goto L_08950314;
    case 43u: goto L_08950328;
    case 44u: goto L_08950344;
    case 45u: goto L_0895034C;
    case 46u: goto L_08950364;
    case 47u: goto L_0895037C;
    case 48u: goto L_08950388;
    case 49u: goto L_08950394;
    case 50u: goto L_089503B4;
    case 51u: goto L_089503BC;
    case 52u: goto L_089503C4;
    case 53u: goto L_089503CC;
    case 54u: goto L_089503D4;
    case 55u: goto L_089503EC;
    case 56u: goto L_089503F4;
    case 57u: goto L_0895040C;
    case 58u: goto L_08950414;
    case 59u: goto L_08950420;
    case 60u: goto L_08950428;
    case 61u: goto L_0895042C;
    case 62u: goto L_08950440;
    case 63u: goto L_08950464;
    case 64u: goto L_0895046C;
    case 65u: goto L_08950478;
    case 66u: goto L_0895047C;
    case 67u: goto L_08950490;
    case 68u: goto L_08950510;
    case 69u: goto L_08950524;
    case 70u: goto L_0895052C;
    case 71u: goto L_08950544;
    case 72u: goto L_089505FC;
    case 73u: goto L_08950610;
    case 74u: goto L_0895064C;
    case 75u: goto L_08950674;
    case 76u: goto L_089506F0;
    case 77u: goto L_089506FC;
    case 78u: goto L_08950704;
    case 79u: goto L_0895072C;
    case 80u: goto L_0895073C;
    case 81u: goto L_08950744;
    case 82u: goto L_0895074C;
    case 83u: goto L_08950754;
    case 84u: goto L_0895075C;
    case 85u: goto L_08950764;
    case 86u: goto L_0895076C;
    case 87u: goto L_0895077C;
    case 88u: goto L_08950780;
    case 89u: goto L_089507A8;
    case 90u: goto L_089507B8;
    case 91u: goto L_089507BC;
    case 92u: goto L_089507C4;
    case 93u: goto L_089507D4;
    case 94u: goto L_089507D8;
    case 95u: goto L_089507E0;
    case 96u: goto L_089507EC;
    case 97u: goto L_089507F8;
    case 98u: goto L_089507FC;
    case 99u: goto L_08950804;
    case 100u: goto L_08950814;
    case 101u: goto L_08950818;
    case 102u: goto L_08950824;
    case 103u: goto L_0895082C;
    case 104u: goto L_08950858;
    case 105u: goto L_089508C0;
    case 106u: goto L_08950910;
    case 107u: goto L_08950918;
    case 108u: goto L_08950924;
    case 109u: goto L_0895092C;
    case 110u: goto L_08950950;
    case 111u: goto L_0895095C;
    case 112u: goto L_0895096C;
    case 113u: goto L_089509C8;
    case 114u: goto L_089509E0;
    case 115u: goto L_089509F8;
    case 116u: goto L_08950A0C;
    case 117u: goto L_08950ABC;
    case 118u: goto L_08950AD8;
    case 119u: goto L_08950ADC;
    case 120u: goto L_08950AE8;
    case 121u: goto L_08950B08;
    case 122u: goto L_08950B34;
    case 123u: goto L_08950B40;
    case 124u: goto L_08950B4C;
    case 125u: goto L_08950B50;
    case 126u: goto L_08950B58;
    case 127u: goto L_08950B64;
    case 128u: goto L_08950B74;
    case 129u: goto L_08950B7C;
    case 130u: goto L_08950B84;
    case 131u: goto L_08950B90;
    case 132u: goto L_08950B98;
    case 133u: goto L_08950BA8;
    case 134u: goto L_08950BC8;
    case 135u: goto L_08950BD0;
    case 136u: goto L_08950BD8;
    case 137u: goto L_08950BF4;
    case 138u: goto L_08950BF8;
    case 139u: goto L_08950C00;
    case 140u: goto L_08950C10;
    case 141u: goto L_08950C18;
    case 142u: goto L_08950C20;
    case 143u: goto L_08950C48;
    case 144u: goto L_08950C54;
    case 145u: goto L_08950C5C;
    case 146u: goto L_08950C7C;
    case 147u: goto L_08950C98;
    case 148u: goto L_08950CA4;
    case 149u: goto L_08950CAC;
    case 150u: goto L_08950CB4;
    case 151u: goto L_08950CC4;
    case 152u: goto L_08950CC8;
    case 153u: goto L_08950CEC;
    case 154u: goto L_08950CF4;
    case 155u: goto L_08950D50;
    case 156u: goto L_08950D68;
    case 157u: goto L_08950D84;
    case 158u: goto L_08950D88;
    case 159u: goto L_08950DC4;
    case 160u: goto L_08950DFC;
    case 161u: goto L_08950E10;
    case 162u: goto L_08950E1C;
    case 163u: goto L_08950E38;
    case 164u: goto L_08950E50;
    case 165u: goto L_08950E64;
    case 166u: goto L_08950E70;
    case 167u: goto L_08950E7C;
    case 168u: goto L_08950EDC;
    case 169u: goto L_08950EE4;
    case 170u: goto L_08950EEC;
    case 171u: goto L_08950F5C;
    case 172u: goto L_08950F6C;
    case 173u: goto L_08950F74;
    case 174u: goto L_08950FBC;
    case 175u: goto L_08950FE8;
    case 176u: goto L_08950FF4;
    case 177u: goto L_0895100C;
    case 178u: goto L_08951070;
    case 179u: goto L_089510B0;
    case 180u: goto L_089510B8;
    case 181u: goto L_089510C0;
    case 182u: goto L_08951140;
    case 183u: goto L_089511E0;
    case 184u: goto L_0895124C;
    case 185u: goto L_08951254;
    case 186u: goto L_08951260;
    case 187u: goto L_08951278;
    case 188u: goto L_089512DC;
    case 189u: goto L_08951318;
    case 190u: goto L_08951320;
    case 191u: goto L_08951328;
    case 192u: goto L_089513A4;
    case 193u: goto L_08951444;
    case 194u: goto L_08951460;
    case 195u: goto L_08951468;
    case 196u: goto L_08951488;
    case 197u: goto L_08951494;
    case 198u: goto L_089514A4;
    case 199u: goto L_089514B0;
    case 200u: goto L_089514B8;
    case 201u: goto L_089514C8;
    case 202u: goto L_089514D0;
    case 203u: goto L_089514DC;
    case 204u: goto L_089514E4;
    case 205u: goto L_089514EC;
    case 206u: goto L_089514F8;
    case 207u: goto L_08951504;
    case 208u: goto L_08951538;
    case 209u: goto L_0895154C;
    case 210u: goto L_08951574;
    case 211u: goto L_08951594;
    case 212u: goto L_089515A0;
    case 213u: goto L_08951604;
    case 214u: goto L_0895160C;
    case 215u: goto L_08951618;
    case 216u: goto L_08951624;
    case 217u: goto L_0895162C;
    case 218u: goto L_08951644;
    case 219u: goto L_08951670;
    case 220u: goto L_0895167C;
    case 221u: goto L_08951684;
    case 222u: goto L_0895168C;
    case 223u: goto L_0895169C;
    case 224u: goto L_089516B4;
    case 225u: goto L_089516BC;
    case 226u: goto L_089516C8;
    case 227u: goto L_089516D0;
    case 228u: goto L_089516D8;
    case 229u: goto L_089516EC;
    case 230u: goto L_089516F4;
    case 231u: goto L_089516F8;
    case 232u: goto L_08951704;
    case 233u: goto L_0895170C;
    case 234u: goto L_08951738;
    case 235u: goto L_0895174C;
    case 236u: goto L_08951754;
    case 237u: goto L_0895175C;
    case 238u: goto L_08951768;
    case 239u: goto L_0895178C;
    case 240u: goto L_089517A0;
    case 241u: goto L_089517B0;
    case 242u: goto L_089517B8;
    case 243u: goto L_089517C0;
    case 244u: goto L_089517C8;
    case 245u: goto L_089517D4;
    case 246u: goto L_089517DC;
    case 247u: goto L_089517E4;
    case 248u: goto L_089517E8;
    case 249u: goto L_089517F4;
    case 250u: goto L_08951810;
    case 251u: goto L_0895181C;
    case 252u: goto L_08951828;
    case 253u: goto L_08951830;
    case 254u: goto L_08951838;
    case 255u: goto L_08951840;
    case 256u: goto L_08951854;
    case 257u: goto L_08951878;
    case 258u: goto L_08951884;
    case 259u: goto L_08951890;
    case 260u: goto L_08951898;
    case 261u: goto L_089518AC;
    case 262u: goto L_089518B4;
    case 263u: goto L_089518BC;
    case 264u: goto L_089518C8;
    case 265u: goto L_089518CC;
    case 266u: goto L_089518D4;
    case 267u: goto L_089518DC;
    case 268u: goto L_089518E8;
    case 269u: goto L_089518F0;
    case 270u: goto L_08951900;
    case 271u: goto L_08951908;
    case 272u: goto L_08951914;
    case 273u: goto L_0895191C;
    case 274u: goto L_08951924;
    case 275u: goto L_0895192C;
    case 276u: goto L_08951934;
    case 277u: goto L_08951940;
    case 278u: goto L_0895194C;
    case 279u: goto L_0895195C;
    case 280u: goto L_08951970;
    case 281u: goto L_08951990;
    case 282u: goto L_0895199C;
    case 283u: goto L_089519A4;
    case 284u: goto L_089519B0;
    case 285u: goto L_089519C4;
    case 286u: goto L_089519CC;
    case 287u: goto L_089519D8;
    case 288u: goto L_089519EC;
    case 289u: goto L_08951A18;
    case 290u: goto L_08951A34;
    case 291u: goto L_08951A6C;
    case 292u: goto L_08951A74;
    case 293u: goto L_08951A84;
    case 294u: goto L_08951A8C;
    case 295u: goto L_08951A9C;
    case 296u: goto L_08951AA4;
    case 297u: goto L_08951ABC;
    case 298u: goto L_08951AE0;
    case 299u: goto L_08951AF0;
    case 300u: goto L_08951B00;
    case 301u: goto L_08951B08;
    case 302u: goto L_08951B14;
    case 303u: goto L_08951B1C;
    case 304u: goto L_08951B4C;
    case 305u: goto L_08951B58;
    case 306u: goto L_08951B60;
    case 307u: goto L_08951B68;
    case 308u: goto L_08951B78;
    case 309u: goto L_08951B88;
    case 310u: goto L_08951B94;
    case 311u: goto L_08951B9C;
    case 312u: goto L_08951BA8;
    case 313u: goto L_08951BB0;
    case 314u: goto L_08951BC4;
    case 315u: goto L_08951BCC;
    case 316u: goto L_08951BD4;
    case 317u: goto L_08951BE8;
    case 318u: goto L_08951BF4;
    case 319u: goto L_08951BFC;
    case 320u: goto L_08951C10;
    case 321u: goto L_08951C14;
    case 322u: goto L_08951C20;
    case 323u: goto L_08951C24;
    case 324u: goto L_08951C28;
    case 325u: goto L_08951C34;
    case 326u: goto L_08951C64;
    case 327u: goto L_08951C84;
    case 328u: goto L_08951C98;
    case 329u: goto L_08951CA0;
    case 330u: goto L_08951CAC;
    case 331u: goto L_08951CB0;
    case 332u: goto L_08951CC8;
    case 333u: goto L_08951CD4;
    case 334u: goto L_08951CE4;
    case 335u: goto L_08951CEC;
    case 336u: goto L_08951D04;
    case 337u: goto L_08951D28;
    case 338u: goto L_08951D38;
    case 339u: goto L_08951D44;
    case 340u: goto L_08951D50;
    case 341u: goto L_08951D58;
    case 342u: goto L_08951D90;
    case 343u: goto L_08951DA4;
    case 344u: goto L_08951DB0;
    case 345u: goto L_08951DBC;
    case 346u: goto L_08951DCC;
    case 347u: goto L_08951DD4;
    case 348u: goto L_08951DDC;
    case 349u: goto L_08951DE8;
    case 350u: goto L_08951DF8;
    case 351u: goto L_08951E00;
    case 352u: goto L_08951E08;
    case 353u: goto L_08951E14;
    case 354u: goto L_08951E20;
    case 355u: goto L_08951E30;
    case 356u: goto L_08951E3C;
    case 357u: goto L_08951E50;
    case 358u: goto L_08951E5C;
    case 359u: goto L_08951E70;
    case 360u: goto L_08951E78;
    case 361u: goto L_08951E80;
    case 362u: goto L_08951E88;
    case 363u: goto L_08951E90;
    case 364u: goto L_08951EA4;
    case 365u: goto L_08951EC4;
    case 366u: goto L_08951ECC;
    case 367u: goto L_08951ED4;
    case 368u: goto L_08951EF8;
    case 369u: goto L_08951F30;
    case 370u: goto L_08951F38;
    case 371u: goto L_08951F54;
    case 372u: goto L_08951F68;
    case 373u: goto L_08951FC8;
    case 374u: goto L_08951FD4;
    case 375u: goto L_08951FE0;
    case 376u: goto L_08951FE8;
    case 377u: goto L_08951FEC;
    case 378u: goto L_08952024;
    case 379u: goto L_08952034;
    case 380u: goto L_08952040;
    case 381u: goto L_08952054;
    case 382u: goto L_08952060;
    case 383u: goto L_08952080;
    case 384u: goto L_08952090;
    case 385u: goto L_089520BC;
    case 386u: goto L_089520CC;
    case 387u: goto L_089520F4;
    case 388u: goto L_08952178;
    case 389u: goto L_08952184;
    case 390u: goto L_0895218C;
    case 391u: goto L_08952194;
    case 392u: goto L_089521B4;
    case 393u: goto L_089521E4;
    case 394u: goto L_089521EC;
    case 395u: goto L_089521F8;
    case 396u: goto L_0895220C;
    case 397u: goto L_08952224;
    case 398u: goto L_0895222C;
    case 399u: goto L_08952238;
    case 400u: goto L_0895224C;
    case 401u: goto L_0895226C;
    case 402u: goto L_08952288;
    case 403u: goto L_0895229C;
    case 404u: goto L_089522C0;
    case 405u: goto L_089522CC;
    case 406u: goto L_089522E0;
    case 407u: goto L_089522E8;
    case 408u: goto L_08952300;
    case 409u: goto L_0895230C;
    case 410u: goto L_08952318;
    case 411u: goto L_08952328;
    case 412u: goto L_08952330;
    case 413u: goto L_08952364;
    case 414u: goto L_08952370;
    case 415u: goto L_089523AC;
    case 416u: goto L_089523B4;
    case 417u: goto L_089523C0;
    case 418u: goto L_089523DC;
    case 419u: goto L_089523F4;
    case 420u: goto L_08952400;
    case 421u: goto L_0895240C;
    case 422u: goto L_08952418;
    case 423u: goto L_0895242C;
    case 424u: goto L_08952438;
    case 425u: goto L_08952444;
    case 426u: goto L_08952450;
    case 427u: goto L_08952464;
    case 428u: goto L_08952470;
    case 429u: goto L_08952484;
    case 430u: goto L_08952490;
    case 431u: goto L_089524C8;
    case 432u: goto L_08952538;
    case 433u: goto L_08952540;
    case 434u: goto L_08952548;
    case 435u: goto L_08952560;
    case 436u: goto L_0895257C;
    case 437u: goto L_08952580;
    case 438u: goto L_089525BC;
    case 439u: goto L_089525F4;
    case 440u: goto L_0895260C;
    case 441u: goto L_08952638;
    case 442u: goto L_08952678;
    case 443u: goto L_08952694;
    case 444u: goto L_0895269C;
    case 445u: goto L_0895274C;
    case 446u: goto L_08952778;
    case 447u: goto L_089527A4;
    case 448u: goto L_089527D0;
    case 449u: goto L_089527FC;
    case 450u: goto L_08952828;
    case 451u: goto L_08952854;
    case 452u: goto L_08952880;
    case 453u: goto L_0895288C;
    case 454u: goto L_08952898;
    case 455u: goto L_089528AC;
    case 456u: goto L_089528E4;
    case 457u: goto L_089528F0;
    case 458u: goto L_0895290C;
    case 459u: goto L_08952914;
    case 460u: goto L_0895291C;
    case 461u: goto L_08952934;
    case 462u: goto L_08952940;
    case 463u: goto L_08952948;
    case 464u: goto L_08952960;
    case 465u: goto L_08952978;
    case 466u: goto L_08952990;
    case 467u: goto L_08952998;
    case 468u: goto L_089529AC;
    case 469u: goto L_089529B4;
    case 470u: goto L_089529C8;
    case 471u: goto L_089529D0;
    case 472u: goto L_089529D4;
    case 473u: goto L_089529E8;
    case 474u: goto L_089529F4;
    case 475u: goto L_089529FC;
    case 476u: goto L_08952A14;
    case 477u: goto L_08952A2C;
    case 478u: goto L_08952A3C;
    case 479u: goto L_08952A44;
    case 480u: goto L_08952A54;
    case 481u: goto L_08952A74;
    case 482u: goto L_08952A84;
    case 483u: goto L_08952AB0;
    case 484u: goto L_08952AD0;
    case 485u: goto L_08952AD8;
    case 486u: goto L_08952B38;
    case 487u: goto L_08952B4C;
    case 488u: goto L_08952B54;
    case 489u: goto L_08952B64;
    case 490u: goto L_08952BD4;
    case 491u: goto L_08952C00;
    case 492u: goto L_08952C3C;
    case 493u: goto L_08952CBC;
    case 494u: goto L_08952CC4;
    case 495u: goto L_08952CCC;
    case 496u: goto L_08952CD4;
    case 497u: goto L_08952CE0;
    case 498u: goto L_08952CEC;
    case 499u: goto L_08952CF8;
    case 500u: goto L_08952D04;
    case 501u: goto L_08952D10;
    case 502u: goto L_08952D18;
    case 503u: goto L_08952D20;
    case 504u: goto L_08952D28;
    case 505u: goto L_08952D44;
    case 506u: goto L_08952D50;
    case 507u: goto L_08952D5C;
    case 508u: goto L_08952D68;
    case 509u: goto L_08952D74;
    case 510u: goto L_08952D80;
    case 511u: goto L_08952D8C;
    case 512u: goto L_08952D94;
    case 513u: goto L_08952DA0;
    case 514u: goto L_08952DAC;
    case 515u: goto L_08952DBC;
    case 516u: goto L_08952DC8;
    case 517u: goto L_08952DCC;
    case 518u: goto L_08952DD4;
    case 519u: goto L_08952DDC;
    case 520u: goto L_08952DE4;
    case 521u: goto L_08952DF0;
    case 522u: goto L_08952DFC;
    case 523u: goto L_08952E08;
    case 524u: goto L_08952E14;
    case 525u: goto L_08952E1C;
    case 526u: goto L_08952E24;
    case 527u: goto L_08952E2C;
    case 528u: goto L_08952E40;
    case 529u: goto L_08952E48;
    case 530u: goto L_08952E54;
    case 531u: goto L_08952E60;
    case 532u: goto L_08952E7C;
    case 533u: goto L_08952EAC;
    case 534u: goto L_08952EB4;
    case 535u: goto L_08952F04;
    case 536u: goto L_08952F10;
    case 537u: goto L_08952F18;
    case 538u: goto L_08952F30;
    case 539u: goto L_08952F38;
    case 540u: goto L_08952F50;
    case 541u: goto L_08952F58;
    case 542u: goto L_08952F64;
    case 543u: goto L_08952F6C;
    case 544u: goto L_08952F78;
    case 545u: goto L_08952F88;
    case 546u: goto L_08952F94;
    case 547u: goto L_08952F9C;
    case 548u: goto L_08952FA8;
    case 549u: goto L_08952FB0;
    case 550u: goto L_08952FC0;
    case 551u: goto L_08952FC8;
    case 552u: goto L_08952FCC;
    case 553u: goto L_08952FD4;
    case 554u: goto L_08952FDC;
    case 555u: goto L_08952FE8;
    case 556u: goto L_08953004;
    case 557u: goto L_0895300C;
    case 558u: goto L_08953018;
    case 559u: goto L_0895301C;
    case 560u: goto L_0895304C;
    case 561u: goto L_08953088;
    case 562u: goto L_089530AC;
    case 563u: goto L_089530FC;
    case 564u: goto L_08953104;
    case 565u: goto L_08953110;
    case 566u: goto L_08953118;
    case 567u: goto L_08953128;
    case 568u: goto L_08953130;
    case 569u: goto L_08953148;
    case 570u: goto L_08953254;
    case 571u: goto L_08953270;
    case 572u: goto L_0895327C;
    case 573u: goto L_08953288;
    case 574u: goto L_08953290;
    case 575u: goto L_0895329C;
    case 576u: goto L_089532A4;
    case 577u: goto L_089532AC;
    case 578u: goto L_089532B8;
    case 579u: goto L_089532CC;
    case 580u: goto L_089532D8;
    case 581u: goto L_089532E0;
    case 582u: goto L_089532E8;
    case 583u: goto L_089532F4;
    case 584u: goto L_08953304;
    case 585u: goto L_08953310;
    case 586u: goto L_08953318;
    case 587u: goto L_08953334;
    case 588u: goto L_08953358;
    case 589u: goto L_08953368;
    case 590u: goto L_08953378;
    case 591u: goto L_08953380;
    case 592u: goto L_089533A0;
    case 593u: goto L_089533C8;
    case 594u: goto L_089533D8;
    case 595u: goto L_089533E4;
    case 596u: goto L_089533F0;
    case 597u: goto L_089533FC;
    case 598u: goto L_08953434;
    case 599u: goto L_0895343C;
    case 600u: goto L_08953450;
    case 601u: goto L_08953460;
    case 602u: goto L_08953470;
    case 603u: goto L_0895347C;
    case 604u: goto L_08953484;
    case 605u: goto L_08953490;
    case 606u: goto L_089534A4;
    case 607u: goto L_089534AC;
    case 608u: goto L_089534BC;
    case 609u: goto L_089534D0;
    case 610u: goto L_089534D4;
    case 611u: goto L_089534DC;
    case 612u: goto L_089534E4;
    case 613u: goto L_089534F8;
    case 614u: goto L_089534FC;
    case 615u: goto L_08953508;
    case 616u: goto L_0895350C;
    case 617u: goto L_0895351C;
    case 618u: goto L_08953534;
    case 619u: goto L_0895353C;
    case 620u: goto L_0895355C;
    case 621u: goto L_0895356C;
    case 622u: goto L_08953594;
    case 623u: goto L_089535A8;
    case 624u: goto L_089535B4;
    case 625u: goto L_089535C4;
    case 626u: goto L_089535D4;
    case 627u: goto L_08953610;
    case 628u: goto L_08953620;
    case 629u: goto L_08953640;
    case 630u: goto L_08953660;
    case 631u: goto L_0895366C;
    case 632u: goto L_08953678;
    case 633u: goto L_08953688;
    case 634u: goto L_08953694;
    case 635u: goto L_0895369C;
    case 636u: goto L_089536B8;
    case 637u: goto L_089536D8;
    case 638u: goto L_089536E0;
    case 639u: goto L_089536EC;
    case 640u: goto L_089536FC;
    case 641u: goto L_08953704;
    case 642u: goto L_08953728;
    case 643u: goto L_0895373C;
    case 644u: goto L_08953744;
    case 645u: goto L_08953758;
    case 646u: goto L_08953788;
    case 647u: goto L_08953794;
    case 648u: goto L_089537B8;
    case 649u: goto L_08953930;
    case 650u: goto L_08953950;
    case 651u: goto L_089539EC;
    case 652u: goto L_08953A1C;
    case 653u: goto L_08953A28;
    case 654u: goto L_08953A38;
    case 655u: goto L_08953A44;
    case 656u: goto L_08953A4C;
    case 657u: goto L_08953A58;
    case 658u: goto L_08953A6C;
    case 659u: goto L_08953AA0;
    case 660u: goto L_08953AF0;
    case 661u: goto L_08953AFC;
    case 662u: goto L_08953B0C;
    case 663u: goto L_08953B60;
    case 664u: goto L_08953B68;
    case 665u: goto L_08953B70;
    case 666u: goto L_08953B78;
    case 667u: goto L_08953B84;
    case 668u: goto L_08953B9C;
    case 669u: goto L_08953BB4;
    case 670u: goto L_08953BBC;
    case 671u: goto L_08953BE4;
    case 672u: goto L_08953BF0;
    case 673u: goto L_08953C08;
    case 674u: goto L_08953C10;
    case 675u: goto L_08953C1C;
    case 676u: goto L_08953C28;
    case 677u: goto L_08953C34;
    case 678u: goto L_08953C7C;
    case 679u: goto L_08953C90;
    case 680u: goto L_08953C98;
    case 681u: goto L_08953CAC;
    case 682u: goto L_08953D60;
    case 683u: goto L_08953D74;
    case 684u: goto L_08953D7C;
    case 685u: goto L_08953D90;
    case 686u: goto L_08953E38;
    case 687u: goto L_08953E4C;
    case 688u: goto L_08953E54;
    case 689u: goto L_08953E68;
    case 690u: goto L_08953ED8;
    case 691u: goto L_08953EE0;
    case 692u: goto L_08953EE8;
    case 693u: goto L_08953EF4;
    case 694u: goto L_08953F00;
    case 695u: goto L_08953F14;
    case 696u: goto L_08953F24;
    case 697u: goto L_08953F28;
    case 698u: goto L_08953F30;
    case 699u: goto L_08953F38;
    case 700u: goto L_08953F3C;
    case 701u: goto L_08953F58;
    case 702u: goto L_08953F64;
    case 703u: goto L_08953F70;
    case 704u: goto L_08953F7C;
    case 705u: goto L_08953F88;
    case 706u: goto L_08953F9C;
    case 707u: goto L_08953FA8;
    case 708u: goto L_08953FAC;
    case 709u: goto L_08953FB4;
    case 710u: goto L_08953FD0;
    case 711u: goto L_08953FD8;
    case 712u: goto L_08953FE0;
    case 713u: goto L_08953FE8;
    case 714u: goto L_08953FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08950000:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895000C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08950024u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08951854;
L_08950024:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(504));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(704));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08950044;
      }
      goto L_08950034;
    }
L_08950034:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08950038;
L_08950038:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[6] != ctx.gpr[4]) {
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
        goto L_08950038;
    }
    goto L_08950044;
L_08950044:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(278), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08950074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089500A8;
      }
      goto L_089500A0;
    }
L_089500A0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895018C;
      }
      goto L_089500A8;
    }
L_089500A8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[18] = (16u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(26624));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089500C4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x089500C4u) goto L_089500C4;
    return;
L_089500C4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089500D4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x089500D4u) goto L_089500D4;
    return;
L_089500D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089500E4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x089500E4u) goto L_089500E4;
    return;
L_089500E4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0895010C;
      }
      goto L_089500FC;
    }
L_089500FC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08950124;
      }
      goto L_0895010C;
    }
L_0895010C:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08950124;
      }
      goto L_08950114;
    }
L_08950114:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    goto L_08950124;
L_08950124:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08950170;
      }
      goto L_0895012C;
    }
L_0895012C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08950170;
      }
      goto L_08950138;
    }
L_08950138:
    ctx.gpr[31] = (0x08950140u);
    // nop
    ctx.pc = 0x08B0B914u;
    return;
L_08950140:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08950150u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08950150u) goto L_08950150;
    return;
L_08950150:
    ctx.gpr[31] = (0x08950158u);
    // nop
    ctx.pc = 0x08B0B914u;
    return;
L_08950158:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08950168u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08950168u) goto L_08950168;
    return;
L_08950168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089502D0;
      }
      goto L_08950170;
    }
L_08950170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089502D0;
      }
      goto L_0895018C;
    }
L_0895018C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08950198u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08951854;
L_08950198:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089501E0;
      }
      goto L_089501A8;
    }
L_089501A8:
    ctx.gpr[31] = (0x089501B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951A34;
L_089501B0:
    ctx.gpr[31] = (0x089501B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951C64;
L_089501B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x089501C4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.pc = 0x08B0B914u;
    return;
L_089501C4:
    ctx.gpr[6] = (16u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089501D8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(26624));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x089501D8u) goto L_089501D8;
    return;
L_089501D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08950264;
      }
      goto L_089501E0;
    }
L_089501E0:
    ctx.gpr[31] = (0x089501E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951A34;
L_089501E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08950240u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951A34;
L_08950240:
    ctx.gpr[31] = (0x08950248u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951C64;
L_08950248:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08950264;
L_08950264:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
        goto L_089502A8;
    }
    goto L_0895026C;
L_0895026C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089502A4;
      }
      goto L_08950280;
    }
L_08950280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08950280;
      }
      goto L_089502A4;
    }
L_089502A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    goto L_089502A8;
L_089502A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), 0u);
    goto L_089502D0;
L_089502D0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_089502F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08950314u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_08952694;
L_08950314:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08950344;
      }
      goto L_08950328;
    }
L_08950328:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(504), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(278), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08950344u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08950C48;
L_08950344:
    ctx.gpr[31] = (0x0895034Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08952694;
L_0895034C:
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
L_08950364:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895037Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08952694;
L_0895037C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089503BC;
      }
      goto L_08950388;
    }
L_08950388:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08950394u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08951854;
L_08950394:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(276), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089503CC;
      }
      goto L_089503B4;
    }
L_089503B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 36 ? 1u : 0u);
      if (branch_taken) {
          goto L_089503C4;
      }
      goto L_089503BC;
    }
L_089503BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895042C;
      }
      goto L_089503C4;
    }
L_089503C4:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
      if (branch_taken) {
          goto L_089503D4;
      }
      goto L_089503CC;
    }
L_089503CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08950414;
      }
      goto L_089503D4;
    }
L_089503D4:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_089503F4;
    }
    goto L_089503EC;
L_089503EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08950414;
      }
      goto L_089503F4;
    }
L_089503F4:
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08950414;
      }
      goto L_0895040C;
    }
L_0895040C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08950414;
      }
      goto L_08950414;
    }
L_08950414:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08950420u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951468;
L_08950420:
    ctx.gpr[31] = (0x08950428u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08952694;
L_08950428:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_0895042C;
L_0895042C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08950440:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(280)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08950464u);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = 0x08B0BB34u;
    return;
L_08950464:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0895047C;
      }
      goto L_0895046C;
    }
L_0895046C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895047C;
      }
      goto L_08950478;
    }
L_08950478:
    ctx.gpr[4] = (0u | 1u);
    goto L_0895047C;
L_0895047C:
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08950490:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (16768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[17]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[18]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[19]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
      if (branch_taken) {
          goto L_08950524;
      }
      goto L_08950510;
    }
L_08950510:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7060)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0895052C;
      }
      goto L_08950524;
    }
L_08950524:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    goto L_0895052C;
L_0895052C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(940)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08950544;
    }
    goto L_08950544;
L_08950544:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[17];
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (50426u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[4] = (17112u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2528));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-56));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(820), ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089505FCu);
    ctx.gpr[6] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 380u, 0x08A7EDC8u>(ctx, &aot_mem) && ctx.pc == 0x089505FCu) goto L_089505FC;
    return;
L_089505FC:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-880));
    ctx.gpr[31] = (0x08950610u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 481u, 0x08A05DFCu>(ctx, &aot_mem) && ctx.pc == 0x08950610u) goto L_08950610;
    return;
L_08950610:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0895064Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x0895064Cu) goto L_0895064C;
    return;
L_0895064C:
    ctx.gpr[4] = (15360u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 61u);
    ctx.gpr[31] = (0x08950674u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 761u, 0x0894FEACu>(ctx, &aot_mem) && ctx.pc == 0x08950674u) goto L_08950674;
    return;
L_08950674:
    ctx.gpr[4] = (2816u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(820)));
    ctx.gpr[5] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (2560u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950704;
      }
      goto L_089506F0;
    }
L_089506F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950704;
      }
      goto L_089506FC;
    }
L_089506FC:
    ctx.gpr[31] = (0x08950704u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08950704u) goto L_08950704;
    return;
L_08950704:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895072C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
      if (branch_taken) {
          goto L_08950744;
      }
      goto L_0895073C;
    }
L_0895073C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[7]);
    goto L_08950744;
L_08950744:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950754;
      }
      goto L_0895074C;
    }
L_0895074C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    goto L_08950754;
L_08950754:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950764;
      }
      goto L_0895075C;
    }
L_0895075C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(272), ctx.gpr[5]);
    goto L_08950764;
L_08950764:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895076C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(696)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(700)));
      if (branch_taken) {
          goto L_089507E0;
      }
      goto L_0895077C;
    }
L_0895077C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    goto L_08950780;
L_08950780:
    ctx.gpr[8] = (ctx.gpr[8] >> 31u);
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 1u));
    ctx.gpr[8] = (ctx.gpr[10] << 4u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[8] != ctx.gpr[5]) {
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
        goto L_089507BC;
    }
    goto L_089507A8;
L_089507A8:
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_089507C4;
      }
      goto L_089507B8;
    }
L_089507B8:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    goto L_089507BC;
L_089507BC:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089507D4;
      }
      goto L_089507C4;
    }
L_089507C4:
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089507D8;
      }
      goto L_089507D4;
    }
L_089507D4:
    ctx.gpr[7] = (ctx.gpr[10] | 0u);
    goto L_089507D8;
L_089507D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
      if (branch_taken) {
          goto L_08950780;
      }
      goto L_089507E0;
    }
L_089507E0:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089507FC;
      }
      goto L_089507EC;
    }
L_089507EC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089507FC;
      }
      goto L_089507F8;
    }
L_089507F8:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_089507FC;
L_089507FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08950804:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(11092));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(11106));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08950824;
      }
      goto L_08950814;
    }
L_08950814:
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    goto L_08950818;
L_08950818:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    if (ctx.gpr[7] != ctx.gpr[5]) {
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
        goto L_08950818;
    }
    goto L_08950824;
L_08950824:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(7488), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895082C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7488)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 300 ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08950918;
      }
      goto L_08950858;
    }
L_08950858:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7488)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(7492));
    ctx.gpr[6] = (2233u << 16u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-56));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (14848u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 59u);
    ctx.gpr[31] = (0x089508C0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2528));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 190u, 0x08AC9004u>(ctx, &aot_mem) && ctx.pc == 0x089508C0u) goto L_089508C0;
    return;
L_089508C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2816u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(29)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(11092))))));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(7488));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(29)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(11092), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(29)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0895092C;
      }
      goto L_08950910;
    }
L_08950910:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08950950;
      }
      goto L_08950918;
    }
L_08950918:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08950924u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32112));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x08950924u) goto L_08950924;
    return;
L_08950924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089509C8;
      }
      goto L_0895092C;
    }
L_0895092C:
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<27u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<0u, 27u, 27u, 3u>();
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<0u>());
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089509C8;
      }
      goto L_08950950;
    }
L_08950950:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089509C8;
      }
      goto L_0895095C;
    }
L_0895095C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7488)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 300 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089509C8;
      }
      goto L_0895096C;
    }
L_0895096C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7488)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7492));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(11104))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(13216));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<27u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<0u, 27u, 27u, 3u>();
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<0u>());
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(11104), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089509C8;
L_089509C8:
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
L_089509E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089509F8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08951854;
L_089509F8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08950A0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8996));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(272), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(276), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(277), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(279), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(292), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(704), 0u);
    ctx.gpr[7] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(780), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(832));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[6] = (0u | 208u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[31] = (0x08950ABCu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(7164));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08950ABCu) goto L_08950ABC;
    return;
L_08950ABC:
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(504));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(704));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-26208));
      if (branch_taken) {
          goto L_08950AE8;
      }
      goto L_08950AD8;
    }
L_08950AD8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08950ADC;
L_08950ADC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] != ctx.gpr[6]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
        goto L_08950ADC;
    }
    goto L_08950AE8;
L_08950AE8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(500), 0u);
    ctx.gpr[31] = (0x08950B08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08950804;
L_08950B08:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29472));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29472)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08950B34u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08950B34u) goto L_08950B34;
    return;
L_08950B34:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08950B50;
      }
      goto L_08950B40;
    }
L_08950B40:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08950B4Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 470u, 0x08B01E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08950B4Cu) goto L_08950B4C;
    return;
L_08950B4C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08950B50;
L_08950B50:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08950B64;
      }
      goto L_08950B58;
    }
L_08950B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08950B64;
L_08950B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(304)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08950BA8;
      }
      goto L_08950B74;
    }
L_08950B74:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08950B98;
      }
      goto L_08950B7C;
    }
L_08950B7C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08950B90;
      }
      goto L_08950B84;
    }
L_08950B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08950B90;
L_08950B90:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(304)));
    goto L_08950B98;
L_08950B98:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(304), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(297)));
      if (branch_taken) {
          goto L_08950BD0;
      }
      goto L_08950BA8;
    }
L_08950BA8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(300));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08950BC8u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 139u, 0x08B0098Cu>(ctx, &aot_mem) && ctx.pc == 0x08950BC8u) goto L_08950BC8;
    return;
L_08950BC8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(297)));
    goto L_08950BD0;
L_08950BD0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950BF8;
      }
      goto L_08950BD8;
    }
L_08950BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08950BF4u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08950BF4u) goto L_08950BF4;
    return;
L_08950BF4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08950BF8;
L_08950BF8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950C18;
      }
      goto L_08950C00;
    }
L_08950C00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08950C18;
      }
      goto L_08950C10;
    }
L_08950C10:
    ctx.gpr[31] = (0x08950C18u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08950C18u) goto L_08950C18;
    return;
L_08950C18:
    ctx.gpr[31] = (0x08950C20u);
    ctx.gpr[4] = (0u | 12288u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08950C20u) goto L_08950C20;
    return;
L_08950C20:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11108), ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08950C48:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[9] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
        goto L_08950C5C;
    }
    goto L_08950C54;
L_08950C54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08950CEC;
      }
      goto L_08950C5C;
    }
L_08950C5C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(708)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(704)));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08950CEC;
      }
      goto L_08950C7C;
    }
L_08950C7C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.gpr[10] = (ctx.gpr[6] << 2u);
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08950CC8;
      }
      goto L_08950C98;
    }
L_08950C98:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950CAC;
      }
      goto L_08950CA4;
    }
L_08950CA4:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08950CC8;
      }
      goto L_08950CAC;
    }
L_08950CAC:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950CC4;
      }
      goto L_08950CB4;
    }
L_08950CB4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(504), 0u);
    goto L_08950CC4;
L_08950CC4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    goto L_08950CC8;
L_08950CC8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(704)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(708)));
    ctx.gpr[10] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08950C7C;
      }
      goto L_08950CEC;
    }
L_08950CEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08950CF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08950E1C;
      }
      goto L_08950D50;
    }
L_08950D50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] >> 4u);
    ctx.gpr[8] = (ctx.gpr[8] << 4u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08950D88;
      }
      goto L_08950D68;
    }
L_08950D68:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[7] >> 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08950D68;
      }
      goto L_08950D84;
    }
L_08950D84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08950D88;
L_08950D88:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[22] = (2230u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7048)));
    ctx.gpr[4] = (15027u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20087u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-7048), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08950DC4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 324u, 0x0895628Cu>(ctx, &aot_mem) && ctx.pc == 0x08950DC4u) goto L_08950DC4;
    return;
L_08950DC4:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-7048), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2816u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[21]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    ctx.gpr[31] = (0x08950DFCu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08950DFCu) goto L_08950DFC;
    return;
L_08950DFC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08950E10u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08950E10u) goto L_08950E10;
    return;
L_08950E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08950E1C;
L_08950E1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23736)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08950EEC;
      }
      goto L_08950E38;
    }
L_08950E38:
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 40u, 4u);
      ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[0u] = 0x00000FE4u;
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 21u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 4u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08950EEC;
      }
      goto L_08950E50;
    }
L_08950E50:
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[31] = (0x08950E64u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2528));
    goto L_0895269C;
L_08950E64:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08950EE4;
      }
      goto L_08950E70;
    }
L_08950E70:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08950EEC;
      }
      goto L_08950E7C;
    }
L_08950E7C:
    ctx.gpr[4] = (ctx.gpr[20] >> 8u);
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[20] & ctx.gpr[5]);
    ctx.gpr[6] = (2560u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08950EDCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 324u, 0x0895628Cu>(ctx, &aot_mem) && ctx.pc == 0x08950EDCu) goto L_08950EDC;
    return;
L_08950EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08950FBC;
      }
      goto L_08950EE4;
    }
L_08950EE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08950FBC;
      }
      goto L_08950EEC;
    }
L_08950EEC:
    ctx.gpr[5] = (ctx.gpr[20] >> 8u);
    ctx.gpr[4] = (15u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[20] & ctx.gpr[6]);
    ctx.gpr[20] = (2560u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(3428)));
    ctx.gpr[7] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08950F74;
      }
      goto L_08950F5C;
    }
L_08950F5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08950F6Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 324u, 0x0895628Cu>(ctx, &aot_mem) && ctx.pc == 0x08950F6Cu) goto L_08950F6C;
    return;
L_08950F6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08950FBC;
      }
      goto L_08950F74;
    }
L_08950F74:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] >> 8u);
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08950FBC;
L_08950FBC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08950FE8:
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895124C;
      }
      goto L_08950FF4;
    }
L_08950FF4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-32096)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895100C:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (7424u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (18176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895124C;
      }
      goto L_08951070;
    }
L_08951070:
    ctx.gpr[6] = (49152u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (18176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895124C;
      }
      goto L_089510B0;
    }
L_089510B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895124C;
      }
      goto L_089510B8;
    }
L_089510B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895124C;
      }
      goto L_089510C0;
    }
L_089510C0:
    ctx.gpr[6] = (59136u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[7] = (18176u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (7424u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895124C;
      }
      goto L_08951140;
    }
L_08951140:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (7424u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (56319u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (57088u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(162));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (57344u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (57856u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (59136u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895124C;
      }
      goto L_089511E0;
    }
L_089511E0:
    ctx.gpr[6] = (57088u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(50));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (57344u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (57600u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (7424u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0895124C;
L_0895124C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08951254:
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951460;
      }
      goto L_08951260;
    }
L_08951260:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-32064)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08951278:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (7424u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (18176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951460;
      }
      goto L_089512DC;
    }
L_089512DC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (18176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951460;
      }
      goto L_08951318;
    }
L_08951318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951460;
      }
      goto L_08951320;
    }
L_08951320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951460;
      }
      goto L_08951328;
    }
L_08951328:
    ctx.gpr[6] = (59136u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[7] = (18176u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (7424u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951460;
      }
      goto L_089513A4;
    }
L_089513A4:
    ctx.gpr[6] = (56319u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4103));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (57088u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (57344u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (57600u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (7424u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (59136u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951460;
      }
      goto L_08951444;
    }
L_08951444:
    ctx.gpr[4] = (56319u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4103));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08951460;
L_08951460:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08951468:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089514E4;
      }
      goto L_08951488;
    }
L_08951488:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08951494u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(32132));
    ctx.pc = 0x08B0BB2Cu;
    return;
L_08951494:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089514A4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x089514A4u) goto L_089514A4;
    return;
L_089514A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(279)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089514D0;
      }
      goto L_089514B0;
    }
L_089514B0:
    ctx.gpr[31] = (0x089514B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089523DC;
L_089514B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(292)));
    ctx.gpr[18] = (2197u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-412));
      if (branch_taken) {
          goto L_089514EC;
      }
      goto L_089514C8;
    }
L_089514C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951504;
      }
      goto L_089514D0;
    }
L_089514D0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x089514DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32160));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x089514DCu) goto L_089514DC;
    return;
L_089514DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895162C;
      }
      goto L_089514E4;
    }
L_089514E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895162C;
      }
      goto L_089514EC;
    }
L_089514EC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x089514F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32192));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x089514F8u) goto L_089514F8;
    return;
L_089514F8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08951504u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08951D58;
L_08951504:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(296), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(300), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(304), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2047));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2048));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(304), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(288)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(300)));
    ctx.gpr[31] = (0x08951538u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 440u, 0x08AC7074u>(ctx, &aot_mem) && ctx.pc == 0x08951538u) goto L_08951538;
    return;
L_08951538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (116u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25976));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089515A0;
      }
      goto L_0895154C;
    }
L_0895154C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(704)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(704), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08951574u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08951574u) goto L_08951574;
    return;
L_08951574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(288)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(304)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (0u | 500u);
    ctx.gpr[31] = (0x08951594u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 456u, 0x08AC71D4u>(ctx, &aot_mem) && ctx.pc == 0x08951594u) goto L_08951594;
    return;
L_08951594:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(292), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(280)));
      if (branch_taken) {
          goto L_0895160C;
      }
      goto L_089515A0;
    }
L_089515A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(256));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(296)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(288)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(256)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(304)));
    ctx.gpr[7] = (0u | 500u);
    ctx.gpr[31] = (0x08951604u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 456u, 0x08AC71D4u>(ctx, &aot_mem) && ctx.pc == 0x08951604u) goto L_08951604;
    return;
L_08951604:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(292), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(280)));
    goto L_0895160C;
L_0895160C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08951618u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BBACu;
    return;
L_08951618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (0x08951624u);
    ctx.gpr[5] = (0u | 4u);
    ctx.pc = 0x08B0BBE4u;
    return;
L_08951624:
    ctx.gpr[31] = (0x0895162Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08952418;
L_0895162C:
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
L_08951644:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08951670u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 468u, 0x08AC72ECu>(ctx, &aot_mem) && ctx.pc == 0x08951670u) goto L_08951670;
    return;
L_08951670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089516D8;
      }
      goto L_0895167C;
    }
L_0895167C:
    ctx.gpr[31] = (0x08951684u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08950440;
L_08951684:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089516D8;
      }
      goto L_0895168C;
    }
L_0895168C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(292), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089516BC;
      }
      goto L_0895169C;
    }
L_0895169C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (116u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(25976));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089516F4;
      }
      goto L_089516B4;
    }
L_089516B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089516F8;
      }
      goto L_089516BC;
    }
L_089516BC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x089516C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32324));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x089516C8u) goto L_089516C8;
    return;
L_089516C8:
    ctx.gpr[31] = (0x089516D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08952450;
L_089516D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951840;
      }
      goto L_089516D8;
    }
L_089516D8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32252));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    ctx.gpr[31] = (0x089516ECu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x089516ECu) goto L_089516EC;
    return;
L_089516EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951840;
      }
      goto L_089516F4;
    }
L_089516F4:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-32));
    goto L_089516F8;
L_089516F8:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951738;
      }
      goto L_08951704;
    }
L_08951704:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0895175C;
      }
      goto L_0895170C;
    }
L_0895170C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(780));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(784), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
      if (branch_taken) {
          goto L_089517E8;
      }
      goto L_08951738;
    }
L_08951738:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32364));
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x0895174Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x0895174Cu) goto L_0895174C;
    return;
L_0895174C:
    ctx.gpr[31] = (0x08951754u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08952450;
L_08951754:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951840;
      }
      goto L_0895175C;
    }
L_0895175C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089517C8;
      }
      goto L_08951768;
    }
L_08951768:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(124)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[31] = (0x0895178Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 565u, 0x0886B030u>(ctx, &aot_mem) && ctx.pc == 0x0895178Cu) goto L_0895178C;
    return;
L_0895178C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089517B8;
      }
      goto L_089517A0;
    }
L_089517A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089517DC;
      }
      goto L_089517B0;
    }
L_089517B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089517E4;
      }
      goto L_089517B8;
    }
L_089517B8:
    ctx.gpr[31] = (0x089517C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08952450;
L_089517C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951840;
      }
      goto L_089517C8;
    }
L_089517C8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x089517D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32408));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x089517D4u) goto L_089517D4;
    return;
L_089517D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951840;
      }
      goto L_089517DC;
    }
L_089517DC:
    ctx.gpr[31] = (0x089517E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 384u, 0x08956C10u>(ctx, &aot_mem) && ctx.pc == 0x089517E4u) goto L_089517E4;
    return;
L_089517E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    goto L_089517E8;
L_089517E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(296), 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951838;
      }
      goto L_089517F4;
    }
L_089517F4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(500), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (0x08951810u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951468;
L_08951810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951830;
      }
      goto L_0895181C;
    }
L_0895181C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08951828u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32464));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x08951828u) goto L_08951828;
    return;
L_08951828:
    ctx.gpr[31] = (0x08951830u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08952450;
L_08951830:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951840;
      }
      goto L_08951838;
    }
L_08951838:
    ctx.gpr[31] = (0x08951840u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08952470;
L_08951840:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08951854:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089518CC;
      }
      goto L_08951878;
    }
L_08951878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951890;
      }
      goto L_08951884;
    }
L_08951884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951898;
      }
      goto L_08951890;
    }
L_08951890:
    ctx.gpr[31] = (0x08951898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 628u, 0x08AB3850u>(ctx, &aot_mem) && ctx.pc == 0x08951898u) goto L_08951898;
    return;
L_08951898:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089518BC;
      }
      goto L_089518AC;
    }
L_089518AC:
    ctx.gpr[31] = (0x089518B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951A34;
L_089518B4:
    ctx.gpr[31] = (0x089518BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951C64;
L_089518BC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x089518C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32520));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x089518C8u) goto L_089518C8;
    return;
L_089518C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    goto L_089518CC;
L_089518CC:
    ctx.gpr[31] = (0x089518D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08950440;
L_089518D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089519B0;
      }
      goto L_089518DC;
    }
L_089518DC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x089518E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32556));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x089518E8u) goto L_089518E8;
    return;
L_089518E8:
    ctx.gpr[31] = (0x089518F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089523DC;
L_089518F0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(279), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08951900u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 460u, 0x08AC725Cu>(ctx, &aot_mem) && ctx.pc == 0x08951900u) goto L_08951900;
    return;
L_08951900:
    ctx.gpr[31] = (0x08951908u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08952418;
L_08951908:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08951914u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32580));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x08951914u) goto L_08951914;
    return;
L_08951914:
    ctx.gpr[31] = (0x0895191Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 311u, 0x08935868u>(ctx, &aot_mem) && ctx.pc == 0x0895191Cu) goto L_0895191C;
    return;
L_0895191C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951934;
      }
      goto L_08951924;
    }
L_08951924:
    ctx.gpr[31] = (0x0895192Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 504u, 0x08AC755Cu>(ctx, &aot_mem) && ctx.pc == 0x0895192Cu) goto L_0895192C;
    return;
L_0895192C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951940;
      }
      goto L_08951934;
    }
L_08951934:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08951940u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08951D58;
L_08951940:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0895194Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32600));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x0895194Cu) goto L_0895194C;
    return;
L_0895194C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(279), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089519B0;
      }
      goto L_0895195C;
    }
L_0895195C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (116u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(25976));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089519B0;
      }
      goto L_08951970;
    }
L_08951970:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26512)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089519A4;
      }
      goto L_08951990;
    }
L_08951990:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0895199Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32616));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x0895199Cu) goto L_0895199C;
    return;
L_0895199C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089519B0;
      }
      goto L_089519A4;
    }
L_089519A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (0x089519B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x089519B0u) goto L_089519B0;
    return;
L_089519B0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(780)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2233u << 16u);
      if (branch_taken) {
          goto L_089519EC;
      }
      goto L_089519C4;
    }
L_089519C4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_089519CC;
L_089519CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(784)));
    ctx.gpr[31] = (0x089519D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x089519D8u) goto L_089519D8;
    return;
L_089519D8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(780)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089519CC;
      }
      goto L_089519EC;
    }
L_089519EC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(780), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(296), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(500), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (0x08951A18u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BBACu;
    return;
L_08951A18:
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
L_08951A34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08951A74;
      }
      goto L_08951A6C;
    }
L_08951A6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951C34;
      }
      goto L_08951A74;
    }
L_08951A74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08951C34;
      }
      goto L_08951A84;
    }
L_08951A84:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_08951A8C;
L_08951A8C:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951AA4;
      }
      goto L_08951A9C;
    }
L_08951A9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08951C28;
      }
      goto L_08951AA4;
    }
L_08951AA4:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (ctx.gpr[5] << 3u);
    ctx.gpr[22] = (ctx.gpr[21] + ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08951C24;
      }
      goto L_08951ABC;
    }
L_08951ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08951C14;
      }
      goto L_08951AE0;
    }
L_08951AE0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951C14;
      }
      goto L_08951AF0;
    }
L_08951AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08951B1C;
      }
      goto L_08951B00;
    }
L_08951B00:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08951B14;
      }
      goto L_08951B08;
    }
L_08951B08:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08951B14;
L_08951B14:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08951C10;
      }
      goto L_08951B1C;
    }
L_08951B1C:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08951B58;
      }
      goto L_08951B4C;
    }
L_08951B4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08951B60;
      }
      goto L_08951B58;
    }
L_08951B58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
    goto L_08951B60;
L_08951B60:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08951B9C;
      }
      goto L_08951B68;
    }
L_08951B68:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[31] = (0x08951B78u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08951B78u) goto L_08951B78;
    return;
L_08951B78:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08951B9C;
      }
      goto L_08951B88;
    }
L_08951B88:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[31] = (0x08951B94u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08951B94u) goto L_08951B94;
    return;
L_08951B94:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08951B9C;
L_08951B9C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08951BB0;
      }
      goto L_08951BA8;
    }
L_08951BA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08951BCC;
      }
      goto L_08951BB0;
    }
L_08951BB0:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08951BC4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08951BC4u) goto L_08951BC4;
    return;
L_08951BC4:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08951BCC;
L_08951BCC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08951BE8;
      }
      goto L_08951BD4;
    }
L_08951BD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08951BD4;
      }
      goto L_08951BE8;
    }
L_08951BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08951BFC;
      }
      goto L_08951BF4;
    }
L_08951BF4:
    ctx.gpr[31] = (0x08951BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08951BFCu) goto L_08951BFC;
    return;
L_08951BFC:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    goto L_08951C10;
L_08951C10:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_08951C14;
L_08951C14:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08951ABC;
      }
      goto L_08951C20;
    }
L_08951C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    goto L_08951C24;
L_08951C24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08951C28;
L_08951C28:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08951A8C;
      }
      goto L_08951C34;
    }
L_08951C34:
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
L_08951C64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08951C84u);
    // nop
    goto L_08952694;
L_08951C84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08951CB0;
      }
      goto L_08951C98;
    }
L_08951C98:
    ctx.gpr[31] = (0x08951CA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08951D28;
L_08951CA0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08951C98;
      }
      goto L_08951CAC;
    }
L_08951CAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    goto L_08951CB0;
L_08951CB0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951CD4;
      }
      goto L_08951CC8;
    }
L_08951CC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(277)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951CE4;
      }
      goto L_08951CD4;
    }
L_08951CD4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(276), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(277), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08951CE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951D04;
L_08951CE4:
    ctx.gpr[31] = (0x08951CECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08952694;
L_08951CEC:
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
L_08951D04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08951D28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08951D44;
      }
      goto L_08951D38;
    }
L_08951D38:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08951D44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08951D44u) goto L_08951D44;
    return;
L_08951D44:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08951D50:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08951D58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (32770u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(431));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08951DDC;
      }
      goto L_08951D90;
    }
L_08951D90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(280)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[31] = (0x08951DA4u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B0BB34u;
    return;
L_08951DA4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08951DD4;
      }
      goto L_08951DB0;
    }
L_08951DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (0x08951DBCu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BBACu;
    return;
L_08951DBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(279)));
    ctx.gpr[5] = (ctx.gpr[4] | ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08951E90;
      }
      goto L_08951DCC;
    }
L_08951DCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
      if (branch_taken) {
          goto L_08951E88;
      }
      goto L_08951DD4;
    }
L_08951DD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951ED4;
      }
      goto L_08951DDC;
    }
L_08951DDC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08951DE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32640));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x08951DE8u) goto L_08951DE8;
    return;
L_08951DE8:
    ctx.gpr[19] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(27376), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32664));
    goto L_08951DF8;
L_08951DF8:
    ctx.gpr[31] = (0x08951E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 585u, 0x08AB350Cu>(ctx, &aot_mem) && ctx.pc == 0x08951E00u) goto L_08951E00;
    return;
L_08951E00:
    ctx.gpr[31] = (0x08951E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 278u, 0x089C1448u>(ctx, &aot_mem) && ctx.pc == 0x08951E08u) goto L_08951E08;
    return;
L_08951E08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951E3C;
      }
      goto L_08951E14;
    }
L_08951E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08951E3C;
      }
      goto L_08951E20;
    }
L_08951E20:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(27376)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(27376), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08951E30u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x08951E30u) goto L_08951E30;
    return;
L_08951E30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (0x08951E3Cu);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = 0x08B0BBE4u;
    return;
L_08951E3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(280)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[31] = (0x08951E50u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B0BB34u;
    return;
L_08951E50:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08951E78;
      }
      goto L_08951E5C;
    }
L_08951E5C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32728));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08951E70u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x08951E70u) goto L_08951E70;
    return;
L_08951E70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951DB0;
      }
      goto L_08951E78;
    }
L_08951E78:
    ctx.gpr[31] = (0x08951E80u);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08B0BBF4u;
    return;
L_08951E80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951DF8;
      }
      goto L_08951E88;
    }
L_08951E88:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08951ECC;
      }
      goto L_08951E90;
    }
L_08951E90:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32764));
    ctx.gpr[31] = (0x08951EA4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x08951EA4u) goto L_08951EA4;
    return;
L_08951EA4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(500), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[31] = (0x08951EC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951D50;
L_08951EC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951ED4;
      }
      goto L_08951ECC;
    }
L_08951ECC:
    ctx.gpr[31] = (0x08951ED4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951EF8;
L_08951ED4:
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
L_08951EF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(780)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2276u << 16u);
      if (branch_taken) {
          goto L_08951F68;
      }
      goto L_08951F30;
    }
L_08951F30:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-27944));
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_08951F38;
L_08951F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(784)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08951F54u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 407u, 0x089C9CDCu>(ctx, &aot_mem) && ctx.pc == 0x08951F54u) goto L_08951F54;
    return;
L_08951F54:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(780)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08951F38;
      }
      goto L_08951F68;
    }
L_08951F68:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(780), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(500), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[20]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08951FEC;
      }
      goto L_08951FC8;
    }
L_08951FC8:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[31] = (0x08951FD4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08951FD4u) goto L_08951FD4;
    return;
L_08951FD4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08951FEC;
      }
      goto L_08951FE0;
    }
L_08951FE0:
    ctx.gpr[31] = (0x08951FE8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08951FE8u) goto L_08951FE8;
    return;
L_08951FE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08951FEC;
L_08951FEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(50))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(53))))));
    ctx.gpr[31] = (0x08952024u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 476u, 0x08B01F04u>(ctx, &aot_mem) && ctx.pc == 0x08952024u) goto L_08952024;
    return;
L_08952024:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08952040;
      }
      goto L_08952034;
    }
L_08952034:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_08952060;
      }
      goto L_08952040;
    }
L_08952040:
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08952054u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08952054u) goto L_08952054;
    return;
L_08952054:
    ctx.gpr[19] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_08952060;
L_08952060:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[31] = (0x08952080u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 476u, 0x08B01F04u>(ctx, &aot_mem) && ctx.pc == 0x08952080u) goto L_08952080;
    return;
L_08952080:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089520BC;
      }
      goto L_08952090;
    }
L_08952090:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
      if (branch_taken) {
          goto L_089520F4;
      }
      goto L_089520BC;
    }
L_089520BC:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089520CCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x089520CCu) goto L_089520CC;
    return;
L_089520CC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    goto L_089520F4;
L_089520F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(272), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(278)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(278), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08952178u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951D50;
L_08952178:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08952194;
      }
      goto L_08952184;
    }
L_08952184:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952194;
      }
      goto L_0895218C;
    }
L_0895218C:
    ctx.gpr[31] = (0x08952194u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08952194u) goto L_08952194;
    return;
L_08952194:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089521B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(780)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2233u << 16u);
      if (branch_taken) {
          goto L_0895220C;
      }
      goto L_089521E4;
    }
L_089521E4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_089521EC;
L_089521EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(784)));
    ctx.gpr[31] = (0x089521F8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x089521F8u) goto L_089521F8;
    return;
L_089521F8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(780)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089521EC;
      }
      goto L_0895220C;
    }
L_0895220C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(780), 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(704)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2233u << 16u);
      if (branch_taken) {
          goto L_0895224C;
      }
      goto L_08952224;
    }
L_08952224:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_0895222C;
L_0895222C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x08952238u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08952238u) goto L_08952238;
    return;
L_08952238:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(704)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895222C;
      }
      goto L_0895224C;
    }
L_0895224C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(704), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[9] = (2276u << 16u);
      if (branch_taken) {
          goto L_089523C0;
      }
      goto L_0895226C;
    }
L_0895226C:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-27688));
    ctx.gpr[10] = (2276u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-27944));
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-2048));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    goto L_08952288;
L_08952288:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[8] << 2u);
      if (branch_taken) {
          goto L_089523B4;
      }
      goto L_0895229C;
    }
L_0895229C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[5]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[3] & 128u);
    if (ctx.gpr[3] == 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
        goto L_089522CC;
    }
    goto L_089522C0;
L_089522C0:
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089522E0;
      }
      goto L_089522CC;
    }
L_089522CC:
    ctx.gpr[3] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[3] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089522E0;
L_089522E0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089523B4;
      }
      goto L_089522E8;
    }
L_089522E8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(704)));
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[12] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08952328;
      }
      goto L_08952300;
    }
L_08952300:
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(708)));
    { const bool branch_taken = ctx.gpr[14] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08952318;
      }
      goto L_0895230C;
    }
L_0895230C:
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952328;
      }
      goto L_08952318;
    }
L_08952318:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08952300;
      }
      goto L_08952328;
    }
L_08952328:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089523B4;
      }
      goto L_08952330;
    }
L_08952330:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(708), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2047));
    ctx.gpr[17] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[31] = (0x08952364u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08952364u) goto L_08952364;
    return;
L_08952364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08952370u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08952370u) goto L_08952370;
    return;
L_08952370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(704)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(744), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(704), ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-2048));
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089523B4;
      }
      goto L_089523AC;
    }
L_089523AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089523C0;
      }
      goto L_089523B4;
    }
L_089523B4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08952288;
      }
      goto L_089523C0;
    }
L_089523C0:
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
L_089523DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089523F4u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BB6Cu;
    return;
L_089523F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0895240C;
      }
      goto L_08952400;
    }
L_08952400:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0895240Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32736));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x0895240Cu) goto L_0895240C;
    return;
L_0895240C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08952418:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.gpr[31] = (0x0895242Cu);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BB54u;
    return;
L_0895242C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08952444;
      }
      goto L_08952438;
    }
L_08952438:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08952444u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32700));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x08952444u) goto L_08952444;
    return;
L_08952444:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08952450:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (0x08952464u);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = 0x08B0BBE4u;
    return;
L_08952464:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08952470:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (0x08952484u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BBE4u;
    return;
L_08952484:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08952490:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952540;
      }
      goto L_089524C8;
    }
L_089524C8:
    ctx.gpr[11] = (2233u << 16u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] >> 8u);
    ctx.gpr[10] = (15u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[9] = (4096u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[8] = (256u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[8]);
    ctx.gpr[7] = (2560u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[5] = (ctx.gpr[11] | 0u);
      if (branch_taken) {
          goto L_08952548;
      }
      goto L_08952538;
    }
L_08952538:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952638;
      }
      goto L_08952540;
    }
L_08952540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952678;
      }
      goto L_08952548;
    }
L_08952548:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[13] >> 4u);
    ctx.gpr[14] = (ctx.gpr[14] << 4u);
    { const bool branch_taken = ctx.gpr[14] == ctx.gpr[13];
    ctx.gpr[3] = (ctx.gpr[12] | 0u);
      if (branch_taken) {
          goto L_08952580;
      }
      goto L_08952560;
    }
L_08952560:
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(4));
    ctx.gpr[12] = (ctx.gpr[13] >> 4u);
    ctx.gpr[12] = (ctx.gpr[12] << 4u);
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[13]);
      if (branch_taken) {
          goto L_08952560;
      }
      goto L_0895257C;
    }
L_0895257C:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08952580;
L_08952580:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[3] | 0u);
    ctx.gpr[17] = (ctx.gpr[12] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7048)));
    ctx.gpr[5] = (15027u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 20087u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-7048), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089525BCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 324u, 0x0895628Cu>(ctx, &aot_mem) && ctx.pc == 0x089525BCu) goto L_089525BC;
    return;
L_089525BC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-7048), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2816u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    ctx.gpr[31] = (0x089525F4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x089525F4u) goto L_089525F4;
    return;
L_089525F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895260Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x0895260Cu) goto L_0895260C;
    return;
L_0895260C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (2560u << 16u);
    ctx.gpr[8] = (256u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (4096u << 16u);
    ctx.gpr[10] = (15u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08952638;
L_08952638:
    ctx.gpr[4] = (ctx.gpr[3] & ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[3] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    goto L_08952678;
L_08952678:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08952694:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895269C:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(2), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(6), ctx.gpr[9]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(10), ctx.gpr[10]));
    ctx.gpr[11] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(14), ctx.gpr[11]));
    ctx.gpr[12] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(18), ctx.gpr[12]));
    ctx.gpr[13] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(22), ctx.gpr[13]));
    ctx.gpr[14] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(26), ctx.gpr[14]));
    ctx.gpr[15] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(30), ctx.gpr[15]));
    ctx.gpr[24] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(34), ctx.gpr[24]));
    ctx.gpr[25] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(38), ctx.gpr[25]));
    ctx.gpr[2] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(42), ctx.gpr[2]));
    ctx.gpr[3] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(46), ctx.gpr[3]));
    ctx.set_vfpu_scalar_bits_ct<24u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<56u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<88u>(ctx.gpr[10]);
    ctx.set_vfpu_scalar_bits_ct<25u>(ctx.gpr[11]);
    ctx.set_vfpu_scalar_bits_ct<57u>(ctx.gpr[12]);
    ctx.set_vfpu_scalar_bits_ct<89u>(ctx.gpr[13]);
    ctx.set_vfpu_scalar_bits_ct<26u>(ctx.gpr[14]);
    ctx.set_vfpu_scalar_bits_ct<58u>(ctx.gpr[15]);
    ctx.set_vfpu_scalar_bits_ct<90u>(ctx.gpr[24]);
    ctx.set_vfpu_scalar_bits_ct<27u>(ctx.gpr[25]);
    ctx.set_vfpu_scalar_bits_ct<59u>(ctx.gpr[2]);
    ctx.set_vfpu_scalar_bits_ct<91u>(ctx.gpr[3]);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<15u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<27u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<59u, 4u>(vfpu_value); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<31u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 2u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 3u>(vfpu_d); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 36u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 24u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 20u, 4u);
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 40u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 24u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 16u, 4u);
      ctx.eat_vfpu_prefixes(); }
    ctx.execute_vfpu_vcmp_ct<52u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(34u, 1u, 52u, 4u);
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_0895288C;
      }
      goto L_0895274C;
    }
L_0895274C:
    ctx.execute_vfpu_vcmp_ct<53u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(34u, 1u, 53u, 4u);
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_0895288C;
      }
      goto L_08952778;
    }
L_08952778:
    ctx.execute_vfpu_vcmp_ct<54u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(34u, 1u, 54u, 4u);
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_0895288C;
      }
      goto L_089527A4;
    }
L_089527A4:
    ctx.execute_vfpu_vcmp_ct<55u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(34u, 1u, 55u, 4u);
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_0895288C;
      }
      goto L_089527D0;
    }
L_089527D0:
    ctx.execute_vfpu_vcmp_ct<48u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(2u, 0u, 48u, 4u);
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08952898;
      }
      goto L_089527FC;
    }
L_089527FC:
    ctx.execute_vfpu_vcmp_ct<49u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(2u, 0u, 49u, 4u);
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08952898;
      }
      goto L_08952828;
    }
L_08952828:
    ctx.execute_vfpu_vcmp_ct<50u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(2u, 0u, 50u, 4u);
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08952898;
      }
      goto L_08952854;
    }
L_08952854:
    ctx.execute_vfpu_vcmp_ct<51u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(2u, 0u, 51u, 4u);
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08952898;
      }
      goto L_08952880;
    }
L_08952880:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895288C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(0));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08952898:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089528AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089528E4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08951854;
L_089528E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08952BD4;
      }
      goto L_089528F0;
    }
L_089528F0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08952934;
      }
      goto L_0895290C;
    }
L_0895290C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08952990;
      }
      goto L_08952914;
    }
L_08952914:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952960;
      }
      goto L_0895291C;
    }
L_0895291C:
    ctx.gpr[18] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-32648));
    ctx.gpr[19] = (2226u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-32604));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952990;
      }
      goto L_08952934;
    }
L_08952934:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08952978;
      }
      goto L_08952940;
    }
L_08952940:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952990;
      }
      goto L_08952948;
    }
L_08952948:
    ctx.gpr[18] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-32384));
    ctx.gpr[19] = (2226u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-32340));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952990;
      }
      goto L_08952960;
    }
L_08952960:
    ctx.gpr[18] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-32560));
    ctx.gpr[19] = (2226u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-32516));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952990;
      }
      goto L_08952978;
    }
L_08952978:
    ctx.gpr[18] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-32472));
    ctx.gpr[19] = (2226u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-32428));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952990;
      }
      goto L_08952990;
    }
L_08952990:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089529F4;
      }
      goto L_08952998;
    }
L_08952998:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (2233u << 16u);
      if (branch_taken) {
          goto L_089529E8;
      }
      goto L_089529AC;
    }
L_089529AC:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-26208));
    ctx.gpr[21] = (0u | 0u);
    goto L_089529B4;
L_089529B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089529D4;
      }
      goto L_089529C8;
    }
L_089529C8:
    ctx.gpr[31] = (0x089529D0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x089529D0u) goto L_089529D0;
    return;
L_089529D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_089529D4;
L_089529D4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089529B4;
      }
      goto L_089529E8;
    }
L_089529E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[31] = (0x089529F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(288)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 436u, 0x08AC702Cu>(ctx, &aot_mem) && ctx.pc == 0x089529F4u) goto L_089529F4;
    return;
L_089529F4:
    ctx.gpr[31] = (0x089529FCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 432u, 0x08AC6FE4u>(ctx, &aot_mem) && ctx.pc == 0x089529FCu) goto L_089529FC;
    return;
L_089529FC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08952A14u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 444u, 0x08AC70DCu>(ctx, &aot_mem) && ctx.pc == 0x08952A14u) goto L_08952A14;
    return;
L_08952A14:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(15));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.gpr[31] = (0x08952A2Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 444u, 0x08AC70DCu>(ctx, &aot_mem) && ctx.pc == 0x08952A2Cu) goto L_08952A2C;
    return;
L_08952A2C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08952A3Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 452u, 0x08AC716Cu>(ctx, &aot_mem) && ctx.pc == 0x08952A3Cu) goto L_08952A3C;
    return;
L_08952A3C:
    ctx.gpr[31] = (0x08952A44u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 436u, 0x08AC702Cu>(ctx, &aot_mem) && ctx.pc == 0x08952A44u) goto L_08952A44;
    return;
L_08952A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08952A54u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 538u, 0x08AD6900u>(ctx, &aot_mem) && ctx.pc == 0x08952A54u) goto L_08952A54;
    return;
L_08952A54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (22354u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19524));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[31] = (0x08952A74u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 559u, 0x0886AFC0u>(ctx, &aot_mem) && ctx.pc == 0x08952A74u) goto L_08952A74;
    return;
L_08952A74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[31] = (0x08952A84u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 432u, 0x08AC6FE4u>(ctx, &aot_mem) && ctx.pc == 0x08952A84u) goto L_08952A84;
    return;
L_08952A84:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(288), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[18] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[31] = (0x08952AB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951D04;
L_08952AB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08952AD0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08950C48;
L_08952AD0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952BD4;
      }
      goto L_08952AD8;
    }
L_08952AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (2227u << 16u);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(940)));
      if (branch_taken) {
          goto L_08952B4C;
      }
      goto L_08952B38;
    }
L_08952B38:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7060)));
    ctx.gpr[6] = (0u | 1u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
        goto L_08952B54;
    }
    goto L_08952B4C;
L_08952B4C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    goto L_08952B54;
L_08952B54:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08952B64;
    }
    goto L_08952B64;
L_08952B64:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[17];
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (50426u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[4] = (17112u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08952BD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08952C00;
L_08952BD4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08952C00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(276)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08952CC4;
      }
      goto L_08952C3C;
    }
L_08952C3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (50426u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (15383u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23157u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.gpr[4] = (15363u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[18] & 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_08952CCC;
    }
    goto L_08952CBC;
L_08952CBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952D28;
      }
      goto L_08952CC4;
    }
L_08952CC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895301C;
      }
      goto L_08952CCC;
    }
L_08952CCC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08952D28;
      }
      goto L_08952CD4;
    }
L_08952CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08952D28;
      }
      goto L_08952CE0;
    }
L_08952CE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952D28;
      }
      goto L_08952CEC;
    }
L_08952CEC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08952CF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32296));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x08952CF8u) goto L_08952CF8;
    return;
L_08952CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08952D20;
      }
      goto L_08952D04;
    }
L_08952D04:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08952D10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32280));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x08952D10u) goto L_08952D10;
    return;
L_08952D10:
    ctx.gpr[31] = (0x08952D18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951A34;
L_08952D18:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08952D20;
L_08952D20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895301C;
      }
      goto L_08952D28;
    }
L_08952D28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08952DD4;
      }
      goto L_08952D44;
    }
L_08952D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08952DD4;
      }
      goto L_08952D50;
    }
L_08952D50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08952DD4;
      }
      goto L_08952D5C;
    }
L_08952D5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952DD4;
      }
      goto L_08952D68;
    }
L_08952D68:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08952D74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32264));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x08952D74u) goto L_08952D74;
    return;
L_08952D74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08952DAC;
      }
      goto L_08952D80;
    }
L_08952D80:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08952D8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32236));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x08952D8Cu) goto L_08952D8C;
    return;
L_08952D8C:
    ctx.gpr[31] = (0x08952D94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 628u, 0x08AB3850u>(ctx, &aot_mem) && ctx.pc == 0x08952D94u) goto L_08952D94;
    return;
L_08952D94:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    ctx.gpr[31] = (0x08952DA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951C64;
L_08952DA0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08952DACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32216));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x08952DACu) goto L_08952DAC;
    return;
L_08952DAC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(277), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[31] = (0x08952DBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0895304C;
L_08952DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952DCC;
      }
      goto L_08952DC8;
    }
L_08952DC8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(277), static_cast<std::uint8_t>(0u));
    goto L_08952DCC;
L_08952DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895301C;
      }
      goto L_08952DD4;
    }
L_08952DD4:
    ctx.gpr[31] = (0x08952DDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08950440;
L_08952DDC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952E08;
      }
      goto L_08952DE4;
    }
L_08952DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08952E08;
      }
      goto L_08952DF0;
    }
L_08952DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08952E08;
      }
      goto L_08952DFC;
    }
L_08952DFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(278)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952F6C;
      }
      goto L_08952E08;
    }
L_08952E08:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08952E14u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08951854;
L_08952E14:
    ctx.gpr[31] = (0x08952E1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951A34;
L_08952E1C:
    ctx.gpr[31] = (0x08952E24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951C64;
L_08952E24:
    ctx.gpr[31] = (0x08952E2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951D04;
L_08952E2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7060)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08952E48;
      }
      goto L_08952E40;
    }
L_08952E40:
    ctx.gpr[31] = (0x08952E48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089528AC;
L_08952E48:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(277), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[31] = (0x08952E54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089521B4;
L_08952E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952EB4;
      }
      goto L_08952E60;
    }
L_08952E60:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32212));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08952E7Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x08952E7Cu) goto L_08952E7C;
    return;
L_08952E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08952EACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951468;
L_08952EAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952F64;
      }
      goto L_08952EB4;
    }
L_08952EB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(260)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08952F10;
      }
      goto L_08952F04;
    }
L_08952F04:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
      if (branch_taken) {
          goto L_08952F18;
      }
      goto L_08952F10;
    }
L_08952F10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08952F58;
      }
      goto L_08952F18;
    }
L_08952F18:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[5]);
    if (static_cast<std::int32_t>(ctx.gpr[17]) >= 0) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08952F38;
    }
    goto L_08952F30;
L_08952F30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08952F58;
      }
      goto L_08952F38;
    }
L_08952F38:
    ctx.gpr[17] = (ctx.gpr[17] << 5u);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952F58;
      }
      goto L_08952F50;
    }
L_08952F50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08952F58;
      }
      goto L_08952F58;
    }
L_08952F58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08952F64u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08951468;
L_08952F64:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(278), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08952FCC;
      }
      goto L_08952F6C;
    }
L_08952F6C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08952F78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32180));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x08952F78u) goto L_08952F78;
    return;
L_08952F78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952F9C;
      }
      goto L_08952F88;
    }
L_08952F88:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08952F94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32156));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x08952F94u) goto L_08952F94;
    return;
L_08952F94:
    ctx.gpr[31] = (0x08952F9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951A34;
L_08952F9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952FB0;
      }
      goto L_08952FA8;
    }
L_08952FA8:
    ctx.gpr[31] = (0x08952FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 628u, 0x08AB3850u>(ctx, &aot_mem) && ctx.pc == 0x08952FB0u) goto L_08952FB0;
    return;
L_08952FB0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[31] = (0x08952FC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951C64;
L_08952FC0:
    ctx.gpr[31] = (0x08952FC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08951D04;
L_08952FC8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(277), static_cast<std::uint8_t>(ctx.gpr[20]));
    goto L_08952FCC;
L_08952FCC:
    ctx.gpr[31] = (0x08952FD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08950440;
L_08952FD4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08952FE8;
      }
      goto L_08952FDC;
    }
L_08952FDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08952FE8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08951D58;
L_08952FE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895300C;
      }
      goto L_08953004;
    }
L_08953004:
    ctx.gpr[31] = (0x0895300Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0895304C;
L_0895300C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895301C;
      }
      goto L_08953018;
    }
L_08953018:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(277), static_cast<std::uint8_t>(0u));
    goto L_0895301C;
L_0895301C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895304C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[31]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08953088u);
    // nop
    goto L_08952694;
L_08953088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(13216));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08953104;
      }
      goto L_089530AC;
    }
L_089530AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
      if (branch_taken) {
          goto L_08953128;
      }
      goto L_089530FC;
    }
L_089530FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08953118;
      }
      goto L_08953104;
    }
L_08953104:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08953110u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 397u, 0x088EE884u>(ctx, &aot_mem) && ctx.pc == 0x08953110u) goto L_08953110;
    return;
L_08953110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953A6C;
      }
      goto L_08953118;
    }
L_08953118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7060)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08953130;
      }
      goto L_08953128;
    }
L_08953128:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    goto L_08953130;
L_08953130:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(940)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08953148;
    }
    goto L_08953148;
L_08953148:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[17];
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (50426u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[4] = (17112u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(84));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08953254u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08951D50;
L_08953254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089532D8;
      }
      goto L_08953270;
    }
L_08953270:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089532D8;
      }
      goto L_0895327C;
    }
L_0895327C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(277)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089532D8;
      }
      goto L_08953288;
    }
L_08953288:
    ctx.gpr[31] = (0x08953290u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 133u, 0x088ED0C8u>(ctx, &aot_mem) && ctx.pc == 0x08953290u) goto L_08953290;
    return;
L_08953290:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089532D8;
      }
      goto L_0895329C;
    }
L_0895329C:
    ctx.gpr[31] = (0x089532A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 115u, 0x088ECFBCu>(ctx, &aot_mem) && ctx.pc == 0x089532A4u) goto L_089532A4;
    return;
L_089532A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089532D8;
      }
      goto L_089532AC;
    }
L_089532AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089532CC;
      }
      goto L_089532B8;
    }
L_089532B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 510u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089532E8;
      }
      goto L_089532CC;
    }
L_089532CC:
    ctx.gpr[4] = (0u | 479u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089532E8;
      }
      goto L_089532D8;
    }
L_089532D8:
    ctx.gpr[31] = (0x089532E0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08951A34;
L_089532E0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_089532E8;
L_089532E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08953368;
      }
      goto L_089532F4;
    }
L_089532F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08953368;
      }
      goto L_08953304;
    }
L_08953304:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953318;
      }
      goto L_08953310;
    }
L_08953310:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953358;
      }
      goto L_08953318;
    }
L_08953318:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08953358;
      }
      goto L_08953334;
    }
L_08953334:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08953334;
      }
      goto L_08953358;
    }
L_08953358:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08953304;
      }
      goto L_08953368;
    }
L_08953368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0895351C;
      }
      goto L_08953378;
    }
L_08953378:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(232));
    goto L_08953380;
L_08953380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (ctx.gpr[4] << 3u);
    ctx.gpr[22] = (ctx.gpr[20] + ctx.gpr[22]);
    if (ctx.gpr[20] == ctx.gpr[22]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
        goto L_0895350C;
    }
    goto L_089533A0;
L_089533A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089534FC;
      }
      goto L_089533C8;
    }
L_089533C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089533FC;
      }
      goto L_089533D8;
    }
L_089533D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
        goto L_089533F0;
    }
    goto L_089533E4;
L_089533E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    goto L_089533F0;
L_089533F0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089534F8;
      }
      goto L_089533FC;
    }
L_089533FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_0895343C;
      }
      goto L_08953434;
    }
L_08953434:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[30] | 0u);
      if (branch_taken) {
          goto L_0895343C;
      }
      goto L_0895343C;
    }
L_0895343C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08953484;
      }
      goto L_08953450;
    }
L_08953450:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[31] = (0x08953460u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08953460u) goto L_08953460;
    return;
L_08953460:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
      if (branch_taken) {
          goto L_08953484;
      }
      goto L_08953470;
    }
L_08953470:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    ctx.gpr[31] = (0x0895347Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x0895347Cu) goto L_0895347C;
    return;
L_0895347C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    goto L_08953484;
L_08953484:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089534AC;
      }
      goto L_08953490;
    }
L_08953490:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089534A4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x089534A4u) goto L_089534A4;
    return;
L_089534A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_089534AC;
      }
      goto L_089534AC;
    }
L_089534AC:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
        goto L_089534D4;
    }
    goto L_089534BC;
L_089534BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089534BC;
      }
      goto L_089534D0;
    }
L_089534D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    goto L_089534D4;
L_089534D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(236), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089534E4;
      }
      goto L_089534DC;
    }
L_089534DC:
    ctx.gpr[31] = (0x089534E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x089534E4u) goto L_089534E4;
    return;
L_089534E4:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    goto L_089534F8;
L_089534F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_089534FC;
L_089534FC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089533A0;
      }
      goto L_08953508;
    }
L_08953508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    goto L_0895350C;
L_0895350C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08953380;
      }
      goto L_0895351C;
    }
L_0895351C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[20] = (0u | 255u);
      if (branch_taken) {
          goto L_0895366C;
      }
      goto L_08953534;
    }
L_08953534:
    ctx.gpr[18] = (65535u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32767));
    goto L_0895353C;
L_0895353C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895356C;
      }
      goto L_0895355C;
    }
L_0895355C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08953660;
      }
      goto L_0895356C;
    }
L_0895356C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08953660;
      }
      goto L_08953594;
    }
L_08953594:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08953640;
      }
      goto L_089535A8;
    }
L_089535A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089535C4;
      }
      goto L_089535B4;
    }
L_089535B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08953640;
      }
      goto L_089535C4;
    }
L_089535C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953610;
      }
      goto L_089535D4;
    }
L_089535D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 15u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08953640;
      }
      goto L_08953610;
    }
L_08953610:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08953620u);
    ctx.gpr[5] = (ctx.gpr[5] & 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 81u, 0x0883C5F8u>(ctx, &aot_mem) && ctx.pc == 0x08953620u) goto L_08953620;
    return;
L_08953620:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] << 15u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08953640;
L_08953640:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08953594;
      }
      goto L_08953660;
    }
L_08953660:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0895353C;
      }
      goto L_0895366C;
    }
L_0895366C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089536FC;
      }
      goto L_08953678;
    }
L_08953678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089536FC;
      }
      goto L_08953688;
    }
L_08953688:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895369C;
      }
      goto L_08953694;
    }
L_08953694:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089536EC;
      }
      goto L_0895369C;
    }
L_0895369C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089536EC;
      }
      goto L_089536B8;
    }
L_089536B8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089536E0;
      }
      goto L_089536D8;
    }
L_089536D8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    goto L_089536E0;
L_089536E0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089536B8;
      }
      goto L_089536EC;
    }
L_089536EC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08953688;
      }
      goto L_089536FC;
    }
L_089536FC:
    ctx.gpr[31] = (0x08953704u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08952694;
L_08953704:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[30] = (0u | 0u);
    goto L_08953728;
L_08953728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_0895373C;
L_0895373C:
    if (ctx.gpr[17] == ctx.gpr[22]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
        goto L_08953A58;
    }
    goto L_08953744;
L_08953744:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
        goto L_08953A58;
    }
    goto L_08953758;
L_08953758:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953A4C;
      }
      goto L_08953788;
    }
L_08953788:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    goto L_08953794;
L_08953794:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08953794;
      }
      goto L_089537B8;
    }
L_089537B8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = ctx.fpr[20] / ctx.fpr[13];
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[6]);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] & 32767u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(304));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08953930u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08953930u) goto L_08953930;
    return;
L_08953930:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08953950u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A06460u>(ctx, &aot_mem) && ctx.pc == 0x08953950u) goto L_08953950;
    return;
L_08953950:
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089539ECu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 755u, 0x0894FE28u>(ctx, &aot_mem) && ctx.pc == 0x089539ECu) goto L_089539EC;
    return;
L_089539EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(193)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
      if (branch_taken) {
          goto L_08953A28;
      }
      goto L_08953A1C;
    }
L_08953A1C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08953A28u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x08953A28u) goto L_08953A28;
    return;
L_08953A28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953A4C;
      }
      goto L_08953A38;
    }
L_08953A38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953A4C;
      }
      goto L_08953A44;
    }
L_08953A44:
    ctx.gpr[31] = (0x08953A4Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08953A4Cu) goto L_08953A4C;
    return;
L_08953A4C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895373C;
      }
      goto L_08953A58;
    }
L_08953A58:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08953728;
      }
      goto L_08953A6C;
    }
L_08953A6C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08953AA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08953AF0u);
    // nop
    goto L_08952694;
L_08953AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953B68;
      }
      goto L_08953AFC;
    }
L_08953AFC:
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-26208));
    ctx.gpr[31] = (0x08953B0Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 827u, 0x08AA3EBCu>(ctx, &aot_mem) && ctx.pc == 0x08953B0Cu) goto L_08953B0C;
    return;
L_08953B0C:
    ctx.gpr[4] = (0u | 32768u);
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    ctx.gpr[5] = (16768u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-32));
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[30] = (2227u << 16u);
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (50426u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17112u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08953B70;
      }
      goto L_08953B60;
    }
L_08953B60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953BE4;
      }
      goto L_08953B68;
    }
L_08953B68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 49u, 0x089542FCu>(ctx, &aot_mem); return;
      }
      goto L_08953B70;
    }
L_08953B70:
    ctx.gpr[31] = (0x08953B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 628u, 0x08AB3850u>(ctx, &aot_mem) && ctx.pc == 0x08953B78u) goto L_08953B78;
    return;
L_08953B78:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(100), 0u);
    ctx.gpr[31] = (0x08953B84u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08951C64;
L_08953B84:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08953BE4;
      }
      goto L_08953B9C;
    }
L_08953B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08953BBC;
      }
      goto L_08953BB4;
    }
L_08953BB4:
    ctx.gpr[31] = (0x08953BBCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08953BBCu) goto L_08953BBC;
    return;
L_08953BBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08953B9C;
      }
      goto L_08953BE4;
    }
L_08953BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953C34;
      }
      goto L_08953BF0;
    }
L_08953BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08953C10;
      }
      goto L_08953C08;
    }
L_08953C08:
    ctx.gpr[31] = (0x08953C10u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08951A34;
L_08953C10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08953C34;
      }
      goto L_08953C1C;
    }
L_08953C1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953C34;
      }
      goto L_08953C28;
    }
L_08953C28:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[31] = (0x08953C34u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08951C64;
L_08953C34:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08953C90;
      }
      goto L_08953C7C;
    }
L_08953C7C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7060)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(940)));
        goto L_08953C98;
    }
    goto L_08953C90;
L_08953C90:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(940)));
    goto L_08953C98;
L_08953C98:
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_08953CAC;
    }
    goto L_08953CAC;
L_08953CAC:
    ctx.fpr[15] = ctx.fpr[24] + ctx.fpr[22];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[21]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08953D74;
      }
      goto L_08953D60;
    }
L_08953D60:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7060)));
    ctx.gpr[6] = (0u | 1u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(940)));
        goto L_08953D7C;
    }
    goto L_08953D74;
L_08953D74:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(940)));
    goto L_08953D7C;
L_08953D7C:
    ctx.gpr[5] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_08953D90;
    }
    goto L_08953D90;
L_08953D90:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[16] = ctx.fpr[24] + ctx.fpr[22];
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[18];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(260)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(264)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[21]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08953E4C;
      }
      goto L_08953E38;
    }
L_08953E38:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7060)));
    ctx.gpr[6] = (0u | 1u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(940)));
        goto L_08953E54;
    }
    goto L_08953E4C;
L_08953E4C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(940)));
    goto L_08953E54;
L_08953E54:
    ctx.gpr[5] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_08953E68;
    }
    goto L_08953E68;
L_08953E68:
    ctx.fpr[15] = ctx.fpr[20] + ctx.fpr[22];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[17];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953F3C;
      }
      goto L_08953ED8;
    }
L_08953ED8:
    ctx.gpr[31] = (0x08953EE0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08950440;
L_08953EE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953F3C;
      }
      goto L_08953EE8;
    }
L_08953EE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953F3C;
      }
      goto L_08953EF4;
    }
L_08953EF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(278)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953F3C;
      }
      goto L_08953F00;
    }
L_08953F00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
        goto L_08953F28;
    }
    goto L_08953F14;
L_08953F14:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08953F30;
      }
      goto L_08953F24;
    }
L_08953F24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    goto L_08953F28;
L_08953F28:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953F3C;
      }
      goto L_08953F30;
    }
L_08953F30:
    ctx.gpr[31] = (0x08953F38u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08951EF8;
L_08953F38:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08953F3C;
L_08953F3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953F64;
      }
      goto L_08953F58;
    }
L_08953F58:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08953F64u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08952C00;
L_08953F64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08953FD8;
      }
      goto L_08953F70;
    }
L_08953F70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(277)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953FD8;
      }
      goto L_08953F7C;
    }
L_08953F7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953FD8;
      }
      goto L_08953F88;
    }
L_08953F88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
        goto L_08953FAC;
    }
    goto L_08953F9C;
L_08953F9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953FD8;
      }
      goto L_08953FA8;
    }
L_08953FA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    goto L_08953FAC;
L_08953FAC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953FD8;
      }
      goto L_08953FB4;
    }
L_08953FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953FD8;
      }
      goto L_08953FD0;
    }
L_08953FD0:
    ctx.gpr[31] = (0x08953FD8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0895304C;
L_08953FD8:
    ctx.gpr[31] = (0x08953FE0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08950440;
L_08953FE0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 2u, 0x08954008u>(ctx, &aot_mem); return;
      }
      goto L_08953FE8;
    }
L_08953FE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 1u, 0x08954000u>(ctx, &aot_mem); return;
      }
      goto L_08953FF4;
    }
L_08953FF4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08954000u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08951D58;
}

void recomp_unit_0083(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0083_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_83(Runtime &runtime) {
    runtime.register_generated_unit(83u, 0x08950000u, 16384u, &recomp_unit_0083, &recomp_unit_0083_entry);
    runtime.register_function(0x08950000u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895000Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950024u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950034u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950038u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950044u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950074u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089500A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089500A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089500C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089500D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089500E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089500FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895010Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950114u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950124u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895012Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950138u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950140u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950150u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950158u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950168u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950170u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895018Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950198u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089501A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089501B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089501B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089501C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089501D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089501E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089501E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950240u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950248u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950264u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895026Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950280u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089502A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089502A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089502D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089502F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950314u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950328u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950344u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895034Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950364u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895037Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950388u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950394u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089503B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089503BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089503C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089503CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089503D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089503ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089503F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895040Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950414u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950420u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950428u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895042Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950440u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950464u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895046Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950478u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895047Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950490u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950510u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950524u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895052Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950544u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089505FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950610u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895064Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950674u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089506F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089506FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950704u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895072Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895073Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950744u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895074Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950754u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895075Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950764u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895076Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895077Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950780u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950804u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950814u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950818u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950824u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895082Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950858u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089508C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950910u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950918u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950924u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895092Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950950u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895095Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895096Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089509C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089509E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089509F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A0Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950ABCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950AD8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950ADCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950AE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B34u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B40u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B4Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B50u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B58u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B74u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B84u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B98u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BD0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BD8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BF4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BF8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C10u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C18u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C48u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C98u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CB4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CF4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D50u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D68u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D84u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950DC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950DFCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E10u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E1Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E38u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E50u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E70u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950EDCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950EE4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950EECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F6Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F74u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950FBCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950FE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950FF4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895100Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951070u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089510B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089510B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089510C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951140u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089511E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895124Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951254u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951260u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951278u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089512DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951318u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951320u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951328u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089513A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951444u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951460u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951468u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951488u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951494u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089514A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089514B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089514B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089514C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089514D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089514DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089514E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089514ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089514F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951504u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951538u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895154Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951574u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951594u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089515A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951604u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895160Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951618u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951624u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895162Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951644u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951670u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895167Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951684u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895168Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895169Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089516B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089516BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089516C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089516D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089516D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089516ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089516F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089516F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951704u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895170Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951738u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895174Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951754u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895175Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951768u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895178Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951810u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895181Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951828u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951830u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951838u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951840u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951854u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951878u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951884u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951890u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951898u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951900u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951908u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951914u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895191Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951924u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895192Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951934u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951940u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895194Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895195Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951970u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951990u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895199Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089519A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089519B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089519C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089519CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089519D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089519ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A18u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A34u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A6Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A74u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A84u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A8Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A9Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951AA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951ABCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951AE0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951AF0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B1Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B4Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B58u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B60u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B68u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B94u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B9Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BCCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BD4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BF4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BFCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C10u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C24u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C34u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C84u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C98u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CA0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CD4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CE4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D04u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D38u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D44u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D50u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D58u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DBCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DCCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DD4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DDCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DF8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E30u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E3Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E50u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E70u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E80u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951EA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951EC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951ECCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951ED4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951EF8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F30u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F38u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F68u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951FC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951FD4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951FE0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951FE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951FECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952024u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952034u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952040u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952054u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952060u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952080u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952090u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089520BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089520CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089520F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952178u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952184u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895218Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952194u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089521B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089521E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089521ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089521F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895220Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952224u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895222Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952238u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895224Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895226Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952288u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895229Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089522C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089522CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089522E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089522E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952300u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895230Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952318u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952328u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952330u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952364u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952370u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952400u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895240Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952418u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895242Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952438u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952444u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952450u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952464u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952470u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952484u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952490u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952538u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952540u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952548u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952560u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895257Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952580u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089525BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089525F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895260Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952638u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952678u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952694u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895269Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895274Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952778u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089527A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089527D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089527FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952828u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952854u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952880u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895288Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952898u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089528ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089528E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089528F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895290Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952914u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895291Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952934u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952940u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952948u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952960u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952978u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952990u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952998u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089529ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089529B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089529C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089529D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089529D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089529E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089529F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089529FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A2Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A3Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A44u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A74u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A84u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952AB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952AD0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952AD8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B38u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B4Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952BD4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C3Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952CBCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952CC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952CCCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952CD4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952CE0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952CECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952CF8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D04u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D10u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D18u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D44u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D50u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D68u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D74u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D80u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D8Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D94u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DA0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DBCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DCCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DD4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DDCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DE4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DF0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DFCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E1Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E24u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E2Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E40u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E48u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E60u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952EACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952EB4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F04u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F10u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F18u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F30u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F38u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F50u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F58u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F6Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F94u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F9Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FC0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FCCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FD4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FDCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953004u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895300Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953018u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895301Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895304Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953088u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089530ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089530FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953104u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953110u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953118u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953128u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953130u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953148u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953254u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953270u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895327Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953288u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953290u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895329Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089532A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089532ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089532B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089532CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089532D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089532E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089532E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089532F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953304u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953310u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953318u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953334u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953358u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953368u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953378u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953380u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089533A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089533C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089533D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089533E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089533F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089533FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953434u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895343Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953450u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953460u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953470u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895347Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953484u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953490u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953508u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895350Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895351Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953534u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895353Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895355Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895356Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953594u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953610u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953620u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953640u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953660u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895366Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953678u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953688u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953694u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895369Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953704u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953728u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895373Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953744u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953758u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953788u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953794u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089537B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953930u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953950u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089539ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A1Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A38u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A44u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A4Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A58u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A6Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953AA0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953AF0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953AFCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B0Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B60u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B68u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B70u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B84u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B9Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953BB4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953BBCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953BE4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953BF0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C10u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C1Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C34u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C98u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953CACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D60u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D74u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953E38u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953E4Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953E54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953E68u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953ED8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953EE0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953EE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953EF4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F24u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F30u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F38u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F3Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F58u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F70u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F9Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FB4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FD0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FD8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FE0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FF4u, &recomp_unit_0083, "recomp_unit_0083");
}
} // namespace psprecomp
